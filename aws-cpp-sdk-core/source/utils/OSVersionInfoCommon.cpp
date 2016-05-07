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

#ifndef _WIN32

#include <aws/core/utils/StringUtils.h>

namespace Aws
{
namespace Utils
{

Aws::String GetSysCommandOutput(const char* command)
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

} // namespace Utils
} // namespace Aws

#endif // _WIN32
