/*
* Copyright 2010-2018 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/client/AWSClient.h>
#include <aws/core/monitoring/MonitoringInterface.h>
#include <aws/core/monitoring/MonitoringFactory.h>

namespace Aws
{
    namespace Monitoring
    {
        /**
         * Default monitoring implementation definition
         */
        class AWS_CORE_API DefaultMonitoring: public MonitoringInterface
        {
        public:

            void* OnRequestStarted(const Aws::String& serviceName, const Aws::String& requestName) const override;


            void OnRequestSucceeded(const Aws::String& serviceName, const Aws::String& requestName,
                    const Aws::Client::HttpResponseOutcome& outcome, const CoreMetricsCollection& metricsFromCore, void* context) const override;


            void OnRequestFailed(const Aws::String& serviceName, const Aws::String& requestName,
                    const Aws::Client::HttpResponseOutcome& outcome, const CoreMetricsCollection& metricsFromCore, void* context) const override;

 
            void OnRequestRetry(const Aws::String& serviceName, const Aws::String& requestName, void* context) const override;


            void OnFinish(const Aws::String& serviceName, const Aws::String& requestName, void* context) const override;
        };

        class AWS_CORE_API DefaultMonitoringFactory : public MonitoringFactory
        {
        public:
            Aws::UniquePtr<MonitoringInterface> CreateMonitoringInstance() const override;
        };
    } // namespace Monitoring
} // namepsace Aws
