/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/ConnectCampaignsV2EndpointProvider.h>
#include <aws/connectcampaignsv2/internal/ConnectCampaignsV2EndpointRules.h>

namespace Aws {
namespace ConnectCampaignsV2 {
namespace Endpoint {
ConnectCampaignsV2EndpointProvider::ConnectCampaignsV2EndpointProvider()
    : ConnectCampaignsV2DefaultEpProviderBase(Aws::ConnectCampaignsV2::ConnectCampaignsV2EndpointRules::GetRulesBlob(),
                                              Aws::ConnectCampaignsV2::ConnectCampaignsV2EndpointRules::RulesBlobSize) {}

}  // namespace Endpoint
}  // namespace ConnectCampaignsV2
}  // namespace Aws
