/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaignsClient.h>
#include <aws/connectcampaigns/model/ListCampaignsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace ConnectCampaigns {

using ListCampaignsPaginator = Aws::Utils::Pagination::Paginator<ConnectCampaignsClient, Model::ListCampaignsRequest,
                                                                 Pagination::ListCampaignsPaginationTraits<ConnectCampaignsClient>>;

}  // namespace ConnectCampaigns
}  // namespace Aws
