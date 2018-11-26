/*
 * Copyright 2010-2018 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/threading/Semaphore.h>
#include <aws/core/net/SimpleUDP.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/AWSMemory.h>

#if 0
using namespace Aws::Utils::Threading;

static const int counter = 100;
static const short udpPort = 6666;

TEST(UDPTEST, TestBlockingUDPSendReceivePacketsSequencialy)
{
    static Semaphore sockEv(0, 1);
    static Semaphore dataSendEv(1, 1);
    static Semaphore dataReceiveEv(0, 1);
    srand(static_cast<unsigned int>(time(NULL)));
    Aws::Vector<int> dataSize = Aws::Vector<int>(counter);
    for (auto& item: dataSize)
    {
        item = rand() % Aws::Net::UDP_BUFFER_SIZE;
    }
    //100 buffers with each can hold at most 8K data.
    uint8_t data[counter][Aws::Net::UDP_BUFFER_SIZE];
    // fill buffers with data
    for (int i = 0; i < counter; i++)
    {
        for (int j = 0; j < dataSize[i]; j++)
        {
            data[i][j] = (i*j) % 255;
        }
    }

    DefaultExecutor exec;
    auto receiver = [&] {
        Aws::Net::SimpleUDP serverUDP(true/*IPV4*/, Aws::Net::UDP_BUFFER_SIZE/*SENDBUF*/, Aws::Net::UDP_BUFFER_SIZE * counter/*RECVBUF*/, false/*BLOCKING*/);
        ASSERT_EQ(0, serverUDP.BindToLocalHost(udpPort));

        // Sender, you can send data now.
        sockEv.Release();
        uint8_t buffer[Aws::Net::UDP_BUFFER_SIZE];
        for (int i = 0; i < counter; i++)
        {
            dataReceiveEv.WaitOne(); // Can I receive?
            int dataLen = serverUDP.ReceiveDataFrom(nullptr, nullptr, buffer, sizeof(buffer));
            ASSERT_EQ(dataSize[i], dataLen);
            ASSERT_EQ(0, memcmp(buffer, data[i], dataLen));
            dataSendEv.Release(); // Sender, you can send another data!
        }
    };

    auto sender = [&] {
        Aws::Net::SimpleUDP clientUDP(true/*IPV4*/, Aws::Net::UDP_BUFFER_SIZE * counter/*SENDBUF*/, Aws::Net::UDP_BUFFER_SIZE/*RECVBUF*/, false/*BLOCKING*/);
        // Wait for reciver listen on port.
        sockEv.WaitOne();
        ASSERT_EQ(0, clientUDP.ConnectToLocalHost(udpPort));
        for (int i = 0; i < counter; i++)
        {
            dataSendEv.WaitOne(); //Can I send? Initially yes,
            int sentLen = clientUDP.SendData(data[i], dataSize[i]);
            ASSERT_EQ(dataSize[i], sentLen);
            dataReceiveEv.Release(); //Receiver, you can receive data now!
        }
    };
    exec.Submit(receiver);
    exec.Submit(sender);
}

TEST(UDPTEST, TestUDPSendReceivePacketsNonblockingBatch)
{
    static Semaphore sockEv(0, 1);
    srand(static_cast<unsigned int>(time(NULL)));
    Aws::Vector<int> dataSize = Aws::Vector<int>(counter);
    for (auto& item: dataSize)
    {
        item = rand() % Aws::Net::UDP_BUFFER_SIZE;
    }
    //100 buffers with each can hold at most 8K data.
    uint8_t data[counter][Aws::Net::UDP_BUFFER_SIZE];
    // fill buffers with data
    for (int i = 0; i < counter; i++)
    {
        for (int j = 0; j < dataSize[i]; j++)
        {
            data[i][j] = (i*j) % 255;
        }
    }

    DefaultExecutor exec;
    auto receiver = [&] {
        Aws::Net::SimpleUDP serverUDP(true/*IPV4*/, Aws::Net::UDP_BUFFER_SIZE/*SENDBUF*/, Aws::Net::UDP_BUFFER_SIZE * counter/*RECVBUF*/, true/*Non-Blocking*/);
        ASSERT_EQ(0, serverUDP.BindToLocalHost(udpPort));
        uint8_t buffer[Aws::Net::UDP_BUFFER_SIZE];
        sockEv.Release();
        for (int i = 0; i < counter; i++)
        {
            int dataLen;
            while ( (dataLen = serverUDP.ReceiveDataFrom(nullptr, nullptr, buffer, sizeof(buffer))) == -1);
            ASSERT_EQ(dataSize[i], dataLen);
            ASSERT_EQ(0, memcmp(buffer, data[i], dataLen));
        }
    };

    auto sender = [&] {
        Aws::Net::SimpleUDP clientUDP(true/*IPV4*/, Aws::Net::UDP_BUFFER_SIZE * counter/*SENDBUF*/, Aws::Net::UDP_BUFFER_SIZE/*RECVBUF*/, true/*Non-Blocking*/);
        sockEv.WaitOne();
        for (int i = 0; i < counter; i++)
        {
            int sentLen = clientUDP.SendDataToLocalHost(data[i], dataSize[i], udpPort);
            ASSERT_EQ(dataSize[i], sentLen);
        }
    };
    exec.Submit(receiver);
    exec.Submit(sender);
}
#endif
