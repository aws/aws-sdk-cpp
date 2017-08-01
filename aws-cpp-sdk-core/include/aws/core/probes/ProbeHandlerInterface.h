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

#include <aws/core/probes/Probe.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <memory>

namespace Aws
{
    namespace Probes
    {

        /**
         * Interface for probe handling implementations.
         */
        class AWS_CORE_API ProbeHandlerInterface
        {
        public:
            virtual ~ProbeHandlerInterface() = default;

            /**
             * Process the input probe upon its reception.
             */
            virtual void OnReceive(const Probe& probe) = 0;
        };

        /**
         * Return a reference to the probe handlers vector. Used only internally.
         */
        Aws::Vector<std::shared_ptr<ProbeHandlerInterface>>& GetProbeHandlers();

        /**
         * Set the probe handlers vector. Used only internally.
         */
        void SetProbeHandlers(const Aws::Vector<std::shared_ptr<ProbeHandlerInterface>>& probeHandlers);

    } // namespace Probes
} // namespace Aws
