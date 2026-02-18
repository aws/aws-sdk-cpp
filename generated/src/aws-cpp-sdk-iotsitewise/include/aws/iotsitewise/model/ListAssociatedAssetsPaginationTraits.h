/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWiseServiceClientModel.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/ListAssociatedAssetsRequest.h>
#include <aws/iotsitewise/model/ListAssociatedAssetsResult.h>

namespace Aws {
namespace IoTSiteWise {
namespace Pagination {

template <typename Client = IoTSiteWiseClient>
struct ListAssociatedAssetsPaginationTraits {
  using RequestType = Model::ListAssociatedAssetsRequest;
  using ResultType = Model::ListAssociatedAssetsResult;
  using OutcomeType = Model::ListAssociatedAssetsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAssociatedAssets(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace IoTSiteWise
}  // namespace Aws
