/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaigns/ConnectCampaignsServiceClientModel.h>
#include <aws/connectcampaigns/ConnectCampaigns_EXPORTS.h>
#include <aws/connectcampaigns/model/ListCampaignsRequest.h>
#include <aws/connectcampaigns/model/ListCampaignsResult.h>

namespace Aws {
namespace ConnectCampaigns {
namespace Pagination {

template <typename Client = ConnectCampaignsClient>
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
}  // namespace ConnectCampaigns
}  // namespace Aws
