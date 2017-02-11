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

#include <aws/core/Aws.h>
#include <aws/text-to-speech/TextToSpeechManager.h>
#include <iostream>

using namespace Aws::Polly;
using namespace Aws::TextToSpeech;

static const char* ALLOCATION_TAG = "PollySample::Main";

void DriveProgram();
void SelectVoiceAndOutputSound(Aws::TextToSpeech::TextToSpeechManager& manager);

int main()
{
	Aws::SDKOptions options;
	Aws::InitAPI(options);
	DriveProgram();
	Aws::ShutdownAPI(options);
	return 0;
}

void SelectVoiceAndOutputSound(Aws::TextToSpeech::TextToSpeechManager& manager)
{
	std::cout << "available voices are: " << std::endl;
	for (auto& voice : manager.ListAvailableVoices())
	{
		std::cout << voice.first << "    language: " << voice.second << std::endl;
	}

	std::cout << "please select voice you would like me to render." << std::endl;

	Aws::String voice;
	std::getline(std::cin, voice);
	manager.SetActiveVoice(voice);

	SendTextCompletedHandler handler;

	std::cout << "What would you like me to say?" << std::endl;
	Aws::String line;
	while (std::getline(std::cin, line))
	{
		if (line == "exit")
		{
			return;
		}
		if (line == "change voice")
		{
			SelectVoiceAndOutputSound(manager);
			return;
		}

		manager.SendTextToOutputDevice(line.c_str(), handler);
		std::cout << "Anything else?" << std::endl;
	}
}

void DriveProgram()
{
	auto client = Aws::MakeShared<PollyClient>(ALLOCATION_TAG);
	TextToSpeechManager manager(client);

	std::cout << "available devices are: " << std::endl;
	auto devices = manager.EnumerateDevices();

	for (auto& device : devices)
	{
		std::cout << "[" << device.first.deviceId << "] " << device.first.deviceName << "   Driver: "
			<< device.second->GetName() << std::endl;
	}

	std::cout << "please select deviceid to play output to:" << std::endl;

	Aws::String deviceId;
	std::getline(std::cin, deviceId);

	auto foundDevice = std::find_if(devices.begin(), devices.end(),
		[&deviceId](const OutputDevicePair& device)
	{ return device.first.deviceId == deviceId; });

	if (foundDevice == devices.end())
	{
		std::cout << "Invalid device selection." << std::endl;
		DriveProgram();
		return;
	}

	SelectVoiceAndOutputSound(manager);
}
