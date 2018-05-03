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

#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/monitoring/DefaultMonitoring.h>

namespace Aws
{
    namespace Monitoring
    {
        static const char DEFAULT_MONITORING_ALLOC_TAG[] = "DefaultMonitoringAllocTag";

        void* DefaultMonitoring::OnRequestStarted(const Aws::String& serviceName, const Aws::String& requestName) const
        {
            //TODO
            AWS_UNREFERENCED_PARAM(serviceName);
            AWS_UNREFERENCED_PARAM(requestName);
            return nullptr;
        }


        void DefaultMonitoring::OnRequestSucceeded(const Aws::String& serviceName, const Aws::String& requestName,
                const Aws::Client::HttpResponseOutcome& outcome, const CoreMetricsCollection& metricsFromCore, void* context) const
        {
            //TODO
            AWS_UNREFERENCED_PARAM(serviceName);
            AWS_UNREFERENCED_PARAM(requestName);
            AWS_UNREFERENCED_PARAM(outcome);
            AWS_UNREFERENCED_PARAM(metricsFromCore);
            AWS_UNREFERENCED_PARAM(context);
        }

        void DefaultMonitoring::OnRequestFailed(const Aws::String& serviceName, const Aws::String& requestName,
                const Aws::Client::HttpResponseOutcome& outcome, const CoreMetricsCollection& metricsFromCore, void* context) const
        {
            //TODO
            AWS_UNREFERENCED_PARAM(serviceName);
            AWS_UNREFERENCED_PARAM(requestName);
            AWS_UNREFERENCED_PARAM(outcome);
            AWS_UNREFERENCED_PARAM(metricsFromCore);
            AWS_UNREFERENCED_PARAM(context);
        }

        void DefaultMonitoring::OnRequestRetry(const Aws::String& serviceName, const Aws::String& requestName, void* context) const
        {
            //TODO
            AWS_UNREFERENCED_PARAM(serviceName);
            AWS_UNREFERENCED_PARAM(requestName);
            AWS_UNREFERENCED_PARAM(context);
        }

        void DefaultMonitoring::OnFinish(const Aws::String& serviceName, const Aws::String& requestName, void* context) const
        {
            //TODO
            AWS_UNREFERENCED_PARAM(serviceName);
            AWS_UNREFERENCED_PARAM(requestName);
            AWS_UNREFERENCED_PARAM(context);
        }

        Aws::UniquePtr<MonitoringInterface> DefaultMonitoringFactory::CreateMonitoringInstance() const
        {
            //TODO config resolution
            return Aws::MakeUnique<DefaultMonitoring>(DEFAULT_MONITORING_ALLOC_TAG);
        }

    }
}
