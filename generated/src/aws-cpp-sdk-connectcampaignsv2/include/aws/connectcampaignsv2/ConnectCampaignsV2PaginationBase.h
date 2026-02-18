/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/connectcampaignsv2/model/ListCampaignsPaginationTraits.h>
#include <aws/connectcampaignsv2/model/ListConnectInstanceIntegrationsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace ConnectCampaignsV2 {

class ConnectCampaignsV2Client;

template <typename DerivedClient>
class ConnectCampaignsV2PaginationBase {
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

  /**
   * Create a paginator for ListConnectInstanceIntegrations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectInstanceIntegrationsRequest,
                                    Pagination::ListConnectInstanceIntegrationsPaginationTraits<DerivedClient>>
  ListConnectInstanceIntegrationsPaginator(const Model::ListConnectInstanceIntegrationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConnectInstanceIntegrationsRequest,
                                             Pagination::ListConnectInstanceIntegrationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace ConnectCampaignsV2
}  // namespace Aws
