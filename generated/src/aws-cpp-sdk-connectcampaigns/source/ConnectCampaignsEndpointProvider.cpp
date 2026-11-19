/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaigns/ConnectCampaignsEndpointProvider.h>
#include <aws/connectcampaigns/internal/ConnectCampaignsEndpointRules.h>

namespace Aws {
#ifndef AWS_CONNECTCAMPAIGNS_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ConnectCampaigns::Endpoint::ConnectCampaignsClientConfiguration,
                                                   ConnectCampaigns::Endpoint::ConnectCampaignsBuiltInParameters,
                                                   ConnectCampaigns::Endpoint::ConnectCampaignsClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ConnectCampaigns::Endpoint::ConnectCampaignsClientConfiguration,
                                                  ConnectCampaigns::Endpoint::ConnectCampaignsBuiltInParameters,
                                                  ConnectCampaigns::Endpoint::ConnectCampaignsClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ConnectCampaigns {
namespace Endpoint {
ConnectCampaignsEndpointProvider::ConnectCampaignsEndpointProvider()
    : ConnectCampaignsDefaultEpProviderBase(Aws::ConnectCampaigns::ConnectCampaignsEndpointRules::GetRulesBlob(),
                                            Aws::ConnectCampaigns::ConnectCampaignsEndpointRules::RulesBlobSize) {}

void ConnectCampaignsBuiltInParameters::SetFromClientConfiguration(const ConnectCampaignsClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ConnectCampaignsClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ConnectCampaignsBuiltInParameters::SetFromClientConfiguration(const ConnectCampaignsClientConfiguration& config,
                                                                   const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ConnectCampaignsClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ConnectCampaignsBuiltInParameters::SetServiceSpecificParameters(const ConnectCampaignsClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ConnectCampaigns
}  // namespace Aws
