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

#pragma once

#include <aws/core/Core_EXPORTS.h>

#include <aws/core/utils/memory/stl/AWSString.h>

#include <mutex>

namespace Aws
{
namespace Utils
{
/**
* Wrapper for all the weird crap we need to do with timestamps. The time functions aren't thread
* safe so please use this class instead of calculating timestamps yourself.
*/
class AWS_CORE_API DateTime
{
public:
    /**
    * Calculates the local timestamp, formats it and returns it as a string
    */
    static Aws::String CalculateLocalTimestampAsString(const char* formatStr);

    /**
    * Calculates the gmt timestamp, formats it, and returns it as a string
    */
    static Aws::String CalculateGmtTimestampAsString(const char* formatStr);

    /**
    * Calculates the current hour of the day in localtime.
    */
    static int CalculateCurrentHour();

private:
    static std::mutex timeMutex;
};

} // namespace Utils
} // namespace Aws
