/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2ServiceClientModel.h>
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/model/ListConnectInstanceIntegrationsRequest.h>
#include <aws/connectcampaignsv2/model/ListConnectInstanceIntegrationsResult.h>

namespace Aws {
namespace ConnectCampaignsV2 {
namespace Pagination {

template <typename Client = ConnectCampaignsV2Client>
struct ListConnectInstanceIntegrationsPaginationTraits {
  using RequestType = Model::ListConnectInstanceIntegrationsRequest;
  using ResultType = Model::ListConnectInstanceIntegrationsResult;
  using OutcomeType = Model::ListConnectInstanceIntegrationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListConnectInstanceIntegrations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ConnectCampaignsV2
}  // namespace Aws
