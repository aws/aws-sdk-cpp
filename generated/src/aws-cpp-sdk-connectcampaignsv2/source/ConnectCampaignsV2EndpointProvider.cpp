/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/ConnectCampaignsV2EndpointProvider.h>
#include <aws/connectcampaignsv2/internal/ConnectCampaignsV2EndpointRules.h>

namespace Aws {
#ifndef AWS_CONNECTCAMPAIGNSV2_EXPORTS  // Except for Windows DLL
namespace Endpoint {
/**
 * Instantiate endpoint providers
 */
template class Aws::Endpoint::EndpointProviderBase<ConnectCampaignsV2::Endpoint::ConnectCampaignsV2ClientConfiguration,
                                                   ConnectCampaignsV2::Endpoint::ConnectCampaignsV2BuiltInParameters,
                                                   ConnectCampaignsV2::Endpoint::ConnectCampaignsV2ClientContextParameters>;

template class Aws::Endpoint::BDDEndpointProvider<ConnectCampaignsV2::Endpoint::ConnectCampaignsV2ClientConfiguration,
                                                  ConnectCampaignsV2::Endpoint::ConnectCampaignsV2BuiltInParameters,
                                                  ConnectCampaignsV2::Endpoint::ConnectCampaignsV2ClientContextParameters>;
}  // namespace Endpoint
#endif

namespace ConnectCampaignsV2 {
namespace Endpoint {
ConnectCampaignsV2EndpointProvider::ConnectCampaignsV2EndpointProvider()
    : ConnectCampaignsV2DefaultEpProviderBase(Aws::ConnectCampaignsV2::ConnectCampaignsV2EndpointRules::GetRulesBlob(),
                                              Aws::ConnectCampaignsV2::ConnectCampaignsV2EndpointRules::RulesBlobSize) {}

void ConnectCampaignsV2BuiltInParameters::SetFromClientConfiguration(const ConnectCampaignsV2ClientConfiguration& config) {
  SetFromClientConfiguration(static_cast<const ConnectCampaignsV2ClientConfiguration::BaseClientConfigClass&>(config));
  SetServiceSpecificParameters(config);
}

void ConnectCampaignsV2BuiltInParameters::SetFromClientConfiguration(const ConnectCampaignsV2ClientConfiguration& config,
                                                                     const Aws::String& serviceName) {
  SetFromClientConfiguration(static_cast<const ConnectCampaignsV2ClientConfiguration::BaseClientConfigClass&>(config), serviceName);
  SetServiceSpecificParameters(config);
}

void ConnectCampaignsV2BuiltInParameters::SetServiceSpecificParameters(const ConnectCampaignsV2ClientConfiguration& config) {
  if (config.useFIPS) {
    SetBooleanParameter("UseFIPS", true);
  }
  if (config.useDualStack) {
    SetBooleanParameter("UseDualStack", true);
  }
}
}  // namespace Endpoint
}  // namespace ConnectCampaignsV2
}  // namespace Aws
