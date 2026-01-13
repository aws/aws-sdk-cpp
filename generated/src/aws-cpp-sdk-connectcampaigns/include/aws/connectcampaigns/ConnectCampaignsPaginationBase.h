/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/connectcampaigns/model/ListCampaignsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace ConnectCampaigns {

class ConnectCampaignsClient;

template <typename DerivedClient>
class ConnectCampaignsPaginationBase {
 public:
  /**
   * Create a paginator for ListCampaigns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCampaignsRequest, Pagination::ListCampaignsPaginationTraits<DerivedClient>>
  ListCampaignsPaginator(const Model::ListCampaignsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCampaignsRequest,
                                             Pagination::ListCampaignsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }
};
}  // namespace ConnectCampaigns
}  // namespace Aws
