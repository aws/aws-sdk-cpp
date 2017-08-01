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

#pragma once

#include <aws/core/Core_EXPORTS.h>

#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/client/AWSError.h>
#include <chrono>

namespace Aws
{
    namespace Client
    {
        enum class CoreErrors;
    }

    namespace Http
    {
        class HttpResponse;
    }

    namespace Probes
    {

        typedef Utils::Outcome<std::shared_ptr<Http::HttpResponse>, Client::AWSError<Client::CoreErrors>> HttpResponseOutcome;

        /**
         * Struct that contains information about each attempt
         */
        struct AWS_CORE_API Attempt
        {
            /**
             * The cumulativeLatency refers to the latency since the start of the first attempt for the request until the end of this particular attempt.
             * The cumulativeLatency of the last attempt thus represents the overall latency of the request.
             * The latency of a single attempt is obtained by substracting the cumulativeLatency of the previous attempt.
             */
            std::chrono::microseconds cumulativeLatency;
            HttpResponseOutcome outcome;
        };

        /**
         * Class that collects information for a given operation
         */
        class AWS_CORE_API Probe
        {
        public:
            /**
             * Initialize the probe with the given request information and with the current system time system.
             */
            Probe(const char* requestName);
            /**
             * Call the probe handlers on this current probe.
             */
            ~Probe();
            /**
             * Get the request name.
             */
            const char* GetServiceRequestName() const;
            /**
             * Get the global operation latency.
             * If AddAttempt is not called, the method returns 0.
             */
            std::chrono::microseconds GetGlobalLatency() const;
            /**
             * Get a reference to a vector of attempts. The attempts are sorted in chronological order.
             */
            const Aws::Vector<Attempt>& GetAttemptVector() const;
            /**
             * Add a new attempt.
             */
            void AddAttempt(HttpResponseOutcome outcome);

        private:
            std::chrono::steady_clock::time_point start;

            const char* serviceRequestName;
            Aws::Vector<Attempt> attempts;

        };

    } // namespace Probes
} // namespace Aws

