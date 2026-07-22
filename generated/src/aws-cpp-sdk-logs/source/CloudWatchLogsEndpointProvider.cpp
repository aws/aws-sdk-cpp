/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/CloudWatchLogsEndpointProvider.h>
#include <aws/logs/internal/CloudWatchLogsEndpointRules.h>

namespace Aws {
namespace CloudWatchLogs {
namespace Endpoint {
CloudWatchLogsEndpointProvider::CloudWatchLogsEndpointProvider()
    : CloudWatchLogsDefaultEpProviderBase(Aws::CloudWatchLogs::CloudWatchLogsEndpointRules::GetRulesBlob(),
                                          Aws::CloudWatchLogs::CloudWatchLogsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace CloudWatchLogs
}  // namespace Aws
