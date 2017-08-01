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

#include <aws/core/probes/ProbeHandlerInterface.h>
#include <aws/core/probes/Probe.h>
#include <ostream>

namespace Aws
{
    namespace Probes
    {
        /**
         * Probe handler implementation that formats the probe and logs it using the aws logging system.
         * This is a simplistic example of a possible probe handler implementation.
         */
        class SimpleProbeLogHandler : public ProbeHandlerInterface
        {
        public:
            virtual void OnReceive(const Probe& probe);

        };

    } // namespace Probes
} // namespace Aws
