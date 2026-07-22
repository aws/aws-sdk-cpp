/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaigns/ConnectCampaignsEndpointProvider.h>
#include <aws/connectcampaigns/internal/ConnectCampaignsEndpointRules.h>

namespace Aws {
namespace ConnectCampaigns {
namespace Endpoint {
ConnectCampaignsEndpointProvider::ConnectCampaignsEndpointProvider()
    : ConnectCampaignsDefaultEpProviderBase(Aws::ConnectCampaigns::ConnectCampaignsEndpointRules::GetRulesBlob(),
                                            Aws::ConnectCampaigns::ConnectCampaignsEndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ConnectCampaigns
}  // namespace Aws
