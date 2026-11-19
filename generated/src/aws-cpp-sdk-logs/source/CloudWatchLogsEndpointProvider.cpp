/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/CloudWatchLogsEndpointProvider.h>
#include <aws/logs/internal/CloudWatchLogsEndpointRules.h>

namespace Aws {
#ifndef AWS_CLOUDWATCHLOGS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<CloudWatchLogs::Endpoint::CloudWatchLogsClientConfiguration,
                                                   CloudWatchLogs::Endpoint::CloudWatchLogsBuiltInParameters,
                                                   CloudWatchLogs::Endpoint::CloudWatchLogsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<CloudWatchLogs::Endpoint::CloudWatchLogsClientConfiguration,
                                                  CloudWatchLogs::Endpoint::CloudWatchLogsBuiltInParameters,
                                                  CloudWatchLogs::Endpoint::CloudWatchLogsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace CloudWatchLogs {
namespace Endpoint {
CloudWatchLogsEndpointProvider::CloudWatchLogsEndpointProvider()
    : CloudWatchLogsDefaultEpProviderBase(Aws::CloudWatchLogs::CloudWatchLogsEndpointRules::GetRulesBlob(),
                                          Aws::CloudWatchLogs::CloudWatchLogsEndpointRules::RulesBlobSize) {}

void CloudWatchLogsBuiltInParameters::SetFromClientConfiguration(const CloudWatchLogsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const CloudWatchLogsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void CloudWatchLogsBuiltInParameters::SetFromClientConfiguration(const CloudWatchLogsClientConfiguration& config,
                                                                 const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const CloudWatchLogsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void CloudWatchLogsBuiltInParameters::SetServiceSpecificParameters(const CloudWatchLogsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace CloudWatchLogs
}  // namespace Aws
