/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2ServiceClientModel.h>
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/model/ListCampaignsRequest.h>
#include <aws/connectcampaignsv2/model/ListCampaignsResult.h>

namespace Aws {
namespace ConnectCampaignsV2 {
namespace Pagination {

template <typename Client = ConnectCampaignsV2Client>
struct ListCampaignsPaginationTraits {
  using RequestType = Model::ListCampaignsRequest;
  using ResultType = Model::ListCampaignsResult;
  using OutcomeType = Model::ListCampaignsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCampaigns(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ConnectCampaignsV2
}  // namespace Aws
