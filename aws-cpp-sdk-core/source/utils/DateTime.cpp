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

#include <aws/core/utils/DateTime.h>

#include <ctime>

#ifdef _WIN32
    //gmtime and localtime are admittedly giant pains in the lower-back. However, we maintain thread safety here and also do buffer checks.
    //this is the best and most platform independent way we've found to do this. 
    #pragma warning( disable : 4996)
#endif

static const char* ISO_8601_LONG_DATE_FORMAT_STR = "%Y-%m-%dT%H:%M:%SZ";
static const char* ISO_8601_SIMPLE_DATE_FORMAT_STR = "%Y-%m-%d";

using namespace Aws::Utils;

std::mutex DateTime::timeMutex;

Aws::String DateTime::CalculateLocalTimestampAsString(const char* formatStr)
{
    std::lock_guard<std::mutex> locker(timeMutex);
    std::time_t time = std::time(nullptr);
    struct tm* timestamp = std::localtime(&time);

    if (timestamp)
    {
        char formatedString[100];
        std::strftime(formatedString, sizeof(formatedString), formatStr, timestamp);

        return formatedString;
    }
    return "";
}

Aws::String DateTime::CalculateGmtTimestampAsString(const char* formatStr)
{
    std::lock_guard<std::mutex> locker(timeMutex);
    std::time_t time = std::time(nullptr);
    struct tm* timestamp = std::gmtime(&time);

    if(timestamp)
    {
        char formatedString[100];
        std::strftime(formatedString, sizeof(formatedString), formatStr, timestamp);

        return formatedString;
    }
    return "";
}

int DateTime::CalculateCurrentHour()
{
    std::lock_guard<std::mutex> locker(timeMutex);
    std::time_t time = std::time(nullptr);
    struct tm* timestamp = std::localtime(&time);
    if (timestamp)
    {
        return timestamp->tm_hour;
    }

    return -1;
}

double DateTime::ComputeCurrentTimestampInAmazonFormat()
{
    std::chrono::duration<double, std::chrono::seconds::period> now = std::chrono::system_clock::now().time_since_epoch();
    return now.count();
}

Aws::String DateTime::ComputeCurrentTimestampInISO8601Format()
{
    return CalculateGmtTimestampAsString(ISO_8601_LONG_DATE_FORMAT_STR);
}

Aws::String DateTime::ComputeCurrentDateInISO8601Format()
{
    return CalculateGmtTimestampAsString(ISO_8601_SIMPLE_DATE_FORMAT_STR);
}
