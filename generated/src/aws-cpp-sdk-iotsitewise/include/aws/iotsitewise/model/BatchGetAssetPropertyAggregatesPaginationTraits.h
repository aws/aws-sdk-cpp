/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWiseServiceClientModel.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/BatchGetAssetPropertyAggregatesRequest.h>
#include <aws/iotsitewise/model/BatchGetAssetPropertyAggregatesResult.h>

namespace Aws {
namespace IoTSiteWise {
namespace Pagination {

template <typename Client = IoTSiteWiseClient>
struct BatchGetAssetPropertyAggregatesPaginationTraits {
  using RequestType = Model::BatchGetAssetPropertyAggregatesRequest;
  using ResultType = Model::BatchGetAssetPropertyAggregatesResult;
  using OutcomeType = Model::BatchGetAssetPropertyAggregatesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->BatchGetAssetPropertyAggregates(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace IoTSiteWise
}  // namespace Aws
