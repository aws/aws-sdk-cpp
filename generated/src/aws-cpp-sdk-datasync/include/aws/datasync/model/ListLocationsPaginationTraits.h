/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSyncServiceClientModel.h>
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/model/ListLocationsRequest.h>
#include <aws/datasync/model/ListLocationsResult.h>

namespace Aws {
namespace DataSync {
namespace Pagination {

template <typename Client = DataSyncClient>
struct ListLocationsPaginationTraits {
  using RequestType = Model::ListLocationsRequest;
  using ResultType = Model::ListLocationsResult;
  using OutcomeType = Model::ListLocationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListLocations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace DataSync
}  // namespace Aws
