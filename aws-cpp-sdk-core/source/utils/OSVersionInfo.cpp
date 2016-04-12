/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/core/utils/OSVersionInfo.h>
#include <aws/core/utils/StringUtils.h>
#ifdef __ANDROID__
#include <regex>
#endif /*__ANDROID__*/

#include <stdio.h>
#include <utility>

using namespace Aws::Utils;

#ifdef _WIN32
#pragma warning(disable: 4996)
#include <windows.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#else
Aws::String getSysCommandOutput(const char* command)
{
    Aws::String outputStr;
    FILE* outputStream;
    const int maxBufferSize = 256;
    char outputBuffer[maxBufferSize];

    outputStream = popen(command, "r");

    if (outputStream)
    {
        while (!feof(outputStream))
        {
            if (fgets(outputBuffer, maxBufferSize, outputStream) != nullptr)
            {
                outputStr.append(outputBuffer);
            }
        }

        pclose(outputStream);

        return StringUtils::Trim(outputStr.c_str());
    }

    return "";
}
#endif



Aws::String OSVersionInfo::ComputeOSVersionString() const
{
#ifdef __ANDROID__
    // regex is not allocator-aware, so technically we're breaking our memory contract here (http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2011/n3254.pdf)
    // Since it's internal, nothing escapes, and what gets allocated/deallocated is very small, I think that's acceptable for now

    std::string androidBuildVersion = getSysCommandOutput("cat /proc/version 2>&1").c_str();
    std::regex versionRegex("version (\\S+)\\s");

    std::smatch versionMatchResults;
    std::regex_search(androidBuildVersion, versionMatchResults, versionRegex);

    if(versionMatchResults.size() >= 2)
    {
        return Aws::String("Android/") + versionMatchResults[1].str().c_str();
    }

    return Aws::String("Android/Unknown");

#elif __linux__ || __APPLE__
    Aws::String kernelName = getSysCommandOutput("uname -s 2>&1");
    Aws::String releaseAndMachineName = getSysCommandOutput("uname -rm 2>&1");

    if(!kernelName.empty())
    {
        return kernelName + "/" + releaseAndMachineName;
    }

    return "non-windows/unknown";

#else
    OSVERSIONINFOA versionInfo;
    ZeroMemory(&versionInfo, sizeof(OSVERSIONINFOA));
    versionInfo.dwOSVersionInfoSize = sizeof(OSVERSIONINFOA);
    GetVersionExA(&versionInfo);
    Aws::StringStream ss;
    ss << "Windows/" << versionInfo.dwMajorVersion << "." << versionInfo.dwMinorVersion << "." << versionInfo.dwBuildNumber << "-" << versionInfo.szCSDVersion;

    SYSTEM_INFO sysInfo;
    ZeroMemory(&sysInfo, sizeof(SYSTEM_INFO));
    GetSystemInfo(&sysInfo);

    switch (sysInfo.wProcessorArchitecture)
    {
        //PROCESSOR_ARCHIECTURE_AMD64
        case 0x09:
            ss << " AMD64";
            break;
        //PROCESSOR_ARCHITECTURE_IA64
        case 0x06:
            ss << " IA64";
            break;
        //PROCESSOR_ARCHITECTURE_INTEL
        case 0x00:
            ss << " x86";
            break;
        default:
            ss << " Unknown Processor Architecture";
            break;
        }

    return ss.str();
#endif
}
