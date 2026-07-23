/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/InternetMonitorEndpointProvider.h>
#include <aws/internetmonitor/internal/InternetMonitorEndpointRules.h>

namespace Aws {
namespace InternetMonitor {
namespace Endpoint {
InternetMonitorEndpointProvider::InternetMonitorEndpointProvider()
    : InternetMonitorDefaultEpProviderBase(Aws::InternetMonitor::InternetMonitorEndpointRules::GetRulesBlob(),
                                           Aws::InternetMonitor::InternetMonitorEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace InternetMonitor
}  // namespace Aws
