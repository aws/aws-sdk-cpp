/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/IoTSiteWiseEndpointProvider.h>
#include <aws/iotsitewise/internal/IoTSiteWiseEndpointRules.h>

namespace Aws {
#ifndef AWS_IOTSITEWISE_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<IoTSiteWise::Endpoint::IoTSiteWiseClientConfiguration,
                                                   IoTSiteWise::Endpoint::IoTSiteWiseBuiltInParameters,
                                                   IoTSiteWise::Endpoint::IoTSiteWiseClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<IoTSiteWise::Endpoint::IoTSiteWiseClientConfiguration,
                                                  IoTSiteWise::Endpoint::IoTSiteWiseBuiltInParameters,
                                                  IoTSiteWise::Endpoint::IoTSiteWiseClientContextParameters>;
}  // namespace Endpoint
#endif

namespace IoTSiteWise {
namespace Endpoint {
IoTSiteWiseEndpointProvider::IoTSiteWiseEndpointProvider()
    : IoTSiteWiseDefaultEpProviderBase(Aws::IoTSiteWise::IoTSiteWiseEndpointRules::GetRulesBlob(),
                                       Aws::IoTSiteWise::IoTSiteWiseEndpointRules::RulesBlobSize) {}

void IoTSiteWiseBuiltInParameters::SetFromClientConfiguration(const IoTSiteWiseClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const IoTSiteWiseClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void IoTSiteWiseBuiltInParameters::SetFromClientConfiguration(const IoTSiteWiseClientConfiguration& config,
                                                              const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const IoTSiteWiseClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void IoTSiteWiseBuiltInParameters::SetServiceSpecificParameters(const IoTSiteWiseClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace IoTSiteWise
}  // namespace Aws
