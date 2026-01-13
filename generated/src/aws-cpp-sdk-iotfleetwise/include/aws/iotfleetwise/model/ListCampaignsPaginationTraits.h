/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWiseServiceClientModel.h>
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/model/ListCampaignsRequest.h>
#include <aws/iotfleetwise/model/ListCampaignsResult.h>

namespace Aws {
namespace IoTFleetWise {
namespace Pagination {

template <typename Client = IoTFleetWiseClient>
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
}  // namespace IoTFleetWise
}  // namespace Aws
