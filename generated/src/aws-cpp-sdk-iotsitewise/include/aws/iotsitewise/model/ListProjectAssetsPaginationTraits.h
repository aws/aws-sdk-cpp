/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWiseServiceClientModel.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/ListProjectAssetsRequest.h>
#include <aws/iotsitewise/model/ListProjectAssetsResult.h>

namespace Aws {
namespace IoTSiteWise {
namespace Pagination {

template <typename Client = IoTSiteWiseClient>
struct ListProjectAssetsPaginationTraits {
  using RequestType = Model::ListProjectAssetsRequest;
  using ResultType = Model::ListProjectAssetsResult;
  using OutcomeType = Model::ListProjectAssetsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListProjectAssets(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace IoTSiteWise
}  // namespace Aws
