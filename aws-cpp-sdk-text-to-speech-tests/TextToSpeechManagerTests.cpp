/*
  * Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
  * 
  * Licensed under the Apache License, Version 2.0 (the "License").
  * You may not use this file except in compliance with the License.
  * A copy of the License is located at
  * 
  *  http://aws.amazon.com/apache2.0
  * 
  * or in the "license" file accompanying this file. This file is distributed
  * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
  * express or implied. See the License for the specific language governing
  * permissions and limitations under the License.
  */

#include <aws/external/gtest.h>
#include <aws/text-to-speech/TextToSpeechManager.h>
#include <aws/polly/model/DescribeVoicesRequest.h>
#include <aws/polly/model/SynthesizeSpeechRequest.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSCredentialsProvider.h>

using namespace Aws::TextToSpeech;
using namespace Aws::Polly;
using namespace Aws::Polly::Model;
using namespace Aws::Utils;

static const char* MOCK_DRIVER_NAME = "Mock Driver";
static const char* ALLOC_TAG = "TextToSpeechManagerTests";

class MockPCMDriver : public PCMOutputDriver
{
public:   
    MockPCMDriver() : m_primeCalledCount(0), m_flushCalledCount(0), m_mockWriteResponse(false) {}

    bool WriteBufferToDevice(const unsigned char* buffer, size_t size) override
    {
        m_buffersWritten.push_back(ByteBuffer(buffer, size));
        return m_mockWriteResponse;
    }

    void MockWriteResponse(bool response)
    {
        m_mockWriteResponse = response;
    }

    const Aws::Vector<ByteBuffer>& GetWrittenBuffers() const
    {
        return m_buffersWritten;
    }
   
    Aws::Vector<DeviceInfo> EnumerateDevices() const override
    {
        return m_devices;
    }

    void AddDevice(const DeviceInfo& device)
    {
        m_devices.push_back(device);
    }
        
    void SetActiveDevice(const DeviceInfo& device, const CapabilityInfo& caps) override
    {
        m_activeDevice = device;
        m_selectedCaps = caps;
    }

    const DeviceInfo& GetActiveDevice() const
    {
        return m_activeDevice;
    }

    const CapabilityInfo& GetActiveCaps() const
    {
        return m_selectedCaps;
    }

    const char* GetName() const override
    {
        return MOCK_DRIVER_NAME;
    }

    size_t GetPrimeCalledCount() const
    {
        return m_primeCalledCount;
    }

    void Prime() override
    {
        m_primeCalledCount++;
    }

    size_t GetFlushCalledCount() const
    {
        return m_primeCalledCount;
    }
      
    void Flush() override
    {
        m_flushCalledCount++;
    }

private:
    size_t m_primeCalledCount;
    size_t m_flushCalledCount;
    DeviceInfo m_activeDevice;
    CapabilityInfo m_selectedCaps;
    Aws::Vector<DeviceInfo> m_devices;
    bool m_mockWriteResponse;
    Aws::Vector<Aws::Utils::ByteBuffer> m_buffersWritten;
};

class MockPCMDriverFactory : public PCMOutputDriverFactory
{
public:
    Aws::Vector<std::shared_ptr<PCMOutputDriver>> LoadDrivers() const override
    {
        return m_drivers;
    }

    void AddDriver(const std::shared_ptr<PCMOutputDriver>& driver)
    {
        m_drivers.push_back(driver);
    }

private:
    Aws::Vector<std::shared_ptr<PCMOutputDriver>> m_drivers;
};

class MockPollyClient : public PollyClient
{
public:
    MockPollyClient() : PollyClient(Aws::Auth::AWSCredentials("", "")) {}

    DescribeVoicesOutcome DescribeVoices(const DescribeVoicesRequest& request) const override
    {
        m_capturedVoicesRequest = request;
        return m_mockedVoicesOutcome;
    }

    void MockDescribeVoices(const DescribeVoicesOutcome& outcome)
    {
        m_mockedVoicesOutcome = outcome;
    }

    const DescribeVoicesRequest& GetCapturedDescribeVoices() const
    {
        return m_capturedVoicesRequest;
    }

    SynthesizeSpeechOutcome SynthesizeSpeech(const SynthesizeSpeechRequest& request) const override
    {
        m_capturedSynthRequest = request;
        return SynthesizeSpeechOutcome(std::move(m_mockedSynthOutcome));
    }

    void MockSynthesizeSpeech(SynthesizeSpeechOutcome&& outcome)
    {
        m_mockedSynthOutcome = std::move(outcome);
    }

    const SynthesizeSpeechRequest& GetCapturedSynthesizeSpeech() const
    {
        return m_capturedSynthRequest;
    }

private:
    DescribeVoicesOutcome m_mockedVoicesOutcome;
    mutable DescribeVoicesRequest m_capturedVoicesRequest;

    mutable SynthesizeSpeechOutcome m_mockedSynthOutcome;
    mutable SynthesizeSpeechRequest m_capturedSynthRequest;
};

TEST(TextToSpeechManagerTests, TestListVoicesSuccess)
{
    Voice voice1;
    voice1.WithGender(Gender::Male)
        .WithId(VoiceId::Brian)
        .WithLanguageCode(LanguageCode::en_GB)
        .WithLanguageName("English")
        .WithName("Brian");

    Voice voice2;
    voice2.WithGender(Gender::Female)
        .WithId(VoiceId::Amy)
        .WithLanguageCode(LanguageCode::en_US)
        .WithLanguageName("English")
        .WithName("Amy");

    DescribeVoicesResult describeVoiceResult;
    describeVoiceResult.AddVoices(voice1).AddVoices(voice2);

    auto pollyClient = Aws::MakeShared<MockPollyClient>(ALLOC_TAG);
    TextToSpeechManager manager(pollyClient);

    pollyClient->MockDescribeVoices(describeVoiceResult);

    auto voices = manager.ListAvailableVoices();

    ASSERT_EQ(2u, voices.size());
    ASSERT_STREQ(voice1.GetName().c_str(), voices[0].first.c_str());
    ASSERT_STREQ(voice1.GetLanguageName().c_str(), voices[0].second.c_str());
    ASSERT_STREQ(voice2.GetName().c_str(), voices[1].first.c_str());
    ASSERT_STREQ(voice2.GetLanguageName().c_str(), voices[1].second.c_str());
}

TEST(TextToSpeechManagerTests, TestListVoicesFailure)
{
    auto pollyClient = Aws::MakeShared<MockPollyClient>(ALLOC_TAG);
    TextToSpeechManager manager(pollyClient);

    pollyClient->MockDescribeVoices(Aws::Client::AWSError<PollyErrors>());

    auto voices = manager.ListAvailableVoices();

    ASSERT_EQ(0u, voices.size());    
}

TEST(TextToSpeechManagerTests, TestDeviceListAndSelection)
{
    auto pollyClient = Aws::MakeShared<MockPollyClient>(ALLOC_TAG);

    auto driver1 = Aws::MakeShared<MockPCMDriver>(ALLOC_TAG);
    auto driver2 = Aws::MakeShared<MockPCMDriver>(ALLOC_TAG);
    
    auto driverFactory = Aws::MakeShared<MockPCMDriverFactory>(ALLOC_TAG);
    driverFactory->AddDriver(driver1);
    driverFactory->AddDriver(driver2);
    
    TextToSpeechManager manager(pollyClient, driverFactory);

    DeviceInfo devInfo1;
    devInfo1.deviceId = "device1";
    devInfo1.deviceName ="deviceName1";
       
    CapabilityInfo capability;
    capability.sampleRate = KHZ_8;
    devInfo1.capabilities.push_back(capability);
    capability.sampleRate = KHZ_16;
    devInfo1.capabilities.push_back(capability);
    driver1->AddDevice(devInfo1);

    DeviceInfo devInfo2;
    devInfo2.deviceId = "device2";
    devInfo2.deviceName = "deviceName2";

    capability.sampleRate = 22050;
    devInfo2.capabilities.push_back(capability);
    driver2->AddDevice(devInfo2);

    auto devices = manager.EnumerateDevices();
    ASSERT_EQ(2u, devices.size());
    ASSERT_STREQ(devInfo1.deviceId.c_str(), devices[0].first.deviceId.c_str());
    ASSERT_STREQ(devInfo1.deviceName.c_str(), devices[0].first.deviceName.c_str());
    ASSERT_EQ(2u, devices[0].first.capabilities.size());
    ASSERT_EQ(KHZ_8, devices[0].first.capabilities[0].sampleRate);
    ASSERT_EQ(KHZ_16, devices[0].first.capabilities[1].sampleRate);
    ASSERT_EQ(devices[0].second, driver1);

    ASSERT_STREQ(devInfo2.deviceId.c_str(), devices[1].first.deviceId.c_str());
    ASSERT_STREQ(devInfo2.deviceName.c_str(), devices[1].first.deviceName.c_str());
    ASSERT_EQ(1u, devices[1].first.capabilities.size());
    ASSERT_EQ(KHZ_22_5, devices[1].first.capabilities[0].sampleRate);
    ASSERT_EQ(devices[1].second, driver2);

    manager.SetActiveDevice(driver2, devInfo2, devInfo2.capabilities[0]);
    ASSERT_STREQ(devInfo2.deviceId.c_str(), driver2->GetActiveDevice().deviceId.c_str());
    ASSERT_EQ(KHZ_22_5, driver2->GetActiveCaps().sampleRate);
}

TEST(TextToSpeechManagerTests, TestDeviceListEmpty)
{
    auto pollyClient = Aws::MakeShared<MockPollyClient>(ALLOC_TAG);
    
    auto driverFactory = Aws::MakeShared<MockPCMDriverFactory>(ALLOC_TAG);    

    TextToSpeechManager manager(pollyClient, driverFactory);
    ASSERT_EQ(0u, manager.EnumerateDevices().size());
}

TEST(TextToSpeechManagerTests, TestSynthResponseAndOutput)
{
    auto pollyClient = Aws::MakeShared<MockPollyClient>(ALLOC_TAG);

    auto driver1 = Aws::MakeShared<MockPCMDriver>(ALLOC_TAG);
    driver1->MockWriteResponse(true);

    auto driver2 = Aws::MakeShared<MockPCMDriver>(ALLOC_TAG);

    auto driverFactory = Aws::MakeShared<MockPCMDriverFactory>(ALLOC_TAG);
    driverFactory->AddDriver(driver1);
    driverFactory->AddDriver(driver2);

    auto strStream = Aws::New<Aws::StringStream>(ALLOC_TAG);
    const char STREAM_CONTENT[] = "Stream content. blah blah blah";
    *strStream << STREAM_CONTENT;

    SynthesizeSpeechResult res;
    res.ReplaceBody(strStream);

    pollyClient->MockSynthesizeSpeech(std::move(res));

    TextToSpeechManager manager(pollyClient, driverFactory);

    DeviceInfo devInfo1;
    devInfo1.deviceId = "device1";
    devInfo1.deviceName = "deviceName1";

    CapabilityInfo capability;
    capability.sampleRate = KHZ_8;
    devInfo1.capabilities.push_back(capability);  
    driver1->AddDevice(devInfo1);

    manager.SetActiveVoice("Maxim");

    std::mutex lock;
    std::condition_variable semaphore;

    const char* REQUEST_TEXT = "Blah blah blah";

    SendTextCompletedHandler handler = [&](const char* text, const SynthesizeSpeechOutcome&, bool sent) 
        {
            std::lock_guard<std::mutex> lockGuard(lock);
            EXPECT_STREQ(REQUEST_TEXT, text);
            EXPECT_TRUE(sent);
            semaphore.notify_all();
        };

    std::unique_lock<std::mutex> locker(lock);
    manager.SendTextToOutputDevice(REQUEST_TEXT, handler);
    semaphore.wait(locker);

    auto capturedRequest = pollyClient->GetCapturedSynthesizeSpeech();
    ASSERT_STREQ(REQUEST_TEXT, capturedRequest.GetText().c_str());
    ASSERT_EQ(VoiceId::Maxim, capturedRequest.GetVoiceId());

    ASSERT_EQ(1u, driver1->GetPrimeCalledCount());
    ASSERT_EQ(1u, driver1->GetFlushCalledCount());
    
    auto buffers = driver1->GetWrittenBuffers();
    ASSERT_EQ(1u, buffers.size());

    char actualSentData[sizeof(STREAM_CONTENT)];
    memset(actualSentData, 0, sizeof(STREAM_CONTENT));
    memcpy(actualSentData, buffers[0].GetUnderlyingData(), buffers[0].GetLength());
    ASSERT_STREQ(STREAM_CONTENT, actualSentData);

    ASSERT_EQ(0u, driver2->GetFlushCalledCount());
    ASSERT_EQ(0u, driver2->GetPrimeCalledCount());
}

TEST(TextToSpeechManagerTests, TestSynthRequestFailedAndNoOutput)
{
    auto pollyClient = Aws::MakeShared<MockPollyClient>(ALLOC_TAG);

    auto driver1 = Aws::MakeShared<MockPCMDriver>(ALLOC_TAG);
    driver1->MockWriteResponse(true);   

    auto driverFactory = Aws::MakeShared<MockPCMDriverFactory>(ALLOC_TAG);
    driverFactory->AddDriver(driver1);    

    pollyClient->MockSynthesizeSpeech(Aws::Client::AWSError<PollyErrors>(PollyErrors::ACCESS_DENIED, false));

    TextToSpeechManager manager(pollyClient, driverFactory);

    DeviceInfo devInfo1;
    devInfo1.deviceId = "device1";
    devInfo1.deviceName = "deviceName1";

    CapabilityInfo capability;
    capability.sampleRate = KHZ_8;
    devInfo1.capabilities.push_back(capability);

    manager.SetActiveDevice(driver1, devInfo1, capability);
    manager.SetActiveVoice("Maxim");

    std::mutex lock;
    std::condition_variable semaphore;

    const char* REQUEST_TEXT = "Blah blah blah";

    SendTextCompletedHandler handler = [&](const char* text, const SynthesizeSpeechOutcome&, bool sent)
    {
        std::lock_guard<std::mutex> lockGuard(lock);
        EXPECT_STREQ(REQUEST_TEXT, text);
        EXPECT_FALSE(sent);
        semaphore.notify_all();
    };

    std::unique_lock<std::mutex> locker(lock);
    manager.SendTextToOutputDevice(REQUEST_TEXT, handler);
    semaphore.wait(locker);

    auto capturedRequest = pollyClient->GetCapturedSynthesizeSpeech();
    ASSERT_STREQ(REQUEST_TEXT, capturedRequest.GetText().c_str());
    ASSERT_EQ(VoiceId::Maxim, capturedRequest.GetVoiceId());

    ASSERT_EQ(0u, driver1->GetPrimeCalledCount());
    ASSERT_EQ(0u, driver1->GetFlushCalledCount());

    auto buffers = driver1->GetWrittenBuffers();
    ASSERT_EQ(0u, buffers.size());   
}