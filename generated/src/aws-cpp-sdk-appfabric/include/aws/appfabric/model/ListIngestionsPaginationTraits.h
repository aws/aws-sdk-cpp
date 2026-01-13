/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabricServiceClientModel.h>
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/appfabric/model/ListIngestionsRequest.h>
#include <aws/appfabric/model/ListIngestionsResult.h>

namespace Aws {
namespace AppFabric {
namespace Pagination {

template <typename Client = AppFabricClient>
struct ListIngestionsPaginationTraits {
  using RequestType = Model::ListIngestionsRequest;
  using ResultType = Model::ListIngestionsResult;
  using OutcomeType = Model::ListIngestionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListIngestions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AppFabric
}  // namespace Aws
