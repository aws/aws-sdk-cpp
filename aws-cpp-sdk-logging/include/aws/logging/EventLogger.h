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

#include <ctime>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Outcome.h>
#include <aws/logging/Logging_EXPORTS.h>

namespace Aws
{
namespace Logging
{

struct AWS_LOGGING_API FlushResult {
    Aws::String message;
    Aws::String key;
};

enum class AWS_LOGGING_API FlushErrors{
    CLIENT_ERROR = 0,
    UNKNOWN = 1
};

typedef Utils::Outcome<FlushResult, FlushErrors> FlushOutcome;


struct AWS_LOGGING_API LogEvent{
  
    // Create LogEvent where the timestamp is initialized to the system clock
    LogEvent(const Aws::String& eventString);

    //If your events have their own time concept, use this ctor
    LogEvent(const Aws::String& eventString, const std::time_t& timestamp);

    Aws::String eventString;
    std::time_t timestamp;
};



class AWS_LOGGING_API EventLogger
{
    public:
        virtual void QueueEvent(Aws::UniquePtr<LogEvent>&&) = 0;

        //Flush all queued events synchronously  on the calling thread
        virtual FlushOutcome Flush() = 0;

        //Flush queued events async from the calling thread
        virtual void FlushAsync() = 0;

        virtual ~EventLogger() {};
};
}
}
