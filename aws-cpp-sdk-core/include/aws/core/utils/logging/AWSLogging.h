/*
  * Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <memory>

namespace Aws
{
    namespace Utils
    {
        namespace Logging
        {
            class LogSystemInterface;

            /**
             * Call this at the beginning of your program, prior to any AWS calls.
             */
            AWS_CORE_API void InitializeAWSLogging(const std::shared_ptr<LogSystemInterface>& logSystem);

            /**
             * Call this at the exit point of your program, after all calls have finished.
             */
            AWS_CORE_API void ShutdownAWSLogging(void);

            /**
             * Get currently configured log system instance.
             */
            AWS_CORE_API LogSystemInterface* GetLogSystem();

        } // namespace Logging
    } // namespace Utils
} // namespace Aws
