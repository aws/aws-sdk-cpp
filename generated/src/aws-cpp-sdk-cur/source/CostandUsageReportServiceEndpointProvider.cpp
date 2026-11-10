/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cur/CostandUsageReportServiceEndpointProvider.h>
#include <aws/cur/internal/CostandUsageReportServiceEndpointRules.h>

namespace Aws {
#ifndef AWS_COSTANDUSAGEREPORTSERVICE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<CostandUsageReportService::Endpoint::CostandUsageReportServiceClientConfiguration,
                                                   CostandUsageReportService::Endpoint::CostandUsageReportServiceBuiltInParameters,
                                                   CostandUsageReportService::Endpoint::CostandUsageReportServiceClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<CostandUsageReportService::Endpoint::CostandUsageReportServiceClientConfiguration,
                                                  CostandUsageReportService::Endpoint::CostandUsageReportServiceBuiltInParameters,
                                                  CostandUsageReportService::Endpoint::CostandUsageReportServiceClientContextParameters>;
}  // namespace Endpoint
#endif

namespace CostandUsageReportService {
namespace Endpoint {
CostandUsageReportServiceEndpointProvider::CostandUsageReportServiceEndpointProvider()
    : CostandUsageReportServiceDefaultEpProviderBase(
          Aws::CostandUsageReportService::CostandUsageReportServiceEndpointRules::GetRulesBlob(),
          Aws::CostandUsageReportService::CostandUsageReportServiceEndpointRules::RulesBlobSize) {}

void CostandUsageReportServiceBuiltInParameters::SetFromClientConfiguration(const CostandUsageReportServiceClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const CostandUsageReportServiceClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void CostandUsageReportServiceBuiltInParameters::SetFromClientConfiguration(const CostandUsageReportServiceClientConfiguration& config,
                                                                            const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const CostandUsageReportServiceClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void CostandUsageReportServiceBuiltInParameters::SetServiceSpecificParameters(const CostandUsageReportServiceClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace CostandUsageReportService
}  // namespace Aws
