/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2Client.h>
#include <aws/connectcampaignsv2/model/ListCampaignsPaginationTraits.h>
#include <aws/connectcampaignsv2/model/ListConnectInstanceIntegrationsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace ConnectCampaignsV2 {

using ListCampaignsPaginator = Aws::Utils::Pagination::Paginator<ConnectCampaignsV2Client, Model::ListCampaignsRequest,
                                                                 Pagination::ListCampaignsPaginationTraits<ConnectCampaignsV2Client>>;
using ListConnectInstanceIntegrationsPaginator =
    Aws::Utils::Pagination::Paginator<ConnectCampaignsV2Client, Model::ListConnectInstanceIntegrationsRequest,
                                      Pagination::ListConnectInstanceIntegrationsPaginationTraits<ConnectCampaignsV2Client>>;

}  // namespace ConnectCampaignsV2
}  // namespace Aws
