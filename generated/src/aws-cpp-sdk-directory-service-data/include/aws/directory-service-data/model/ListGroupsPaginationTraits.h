/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directory-service-data/DirectoryServiceDataServiceClientModel.h>
#include <aws/directory-service-data/DirectoryServiceData_EXPORTS.h>
#include <aws/directory-service-data/model/ListGroupsRequest.h>
#include <aws/directory-service-data/model/ListGroupsResult.h>

namespace Aws {
namespace DirectoryServiceData {
namespace Pagination {

template <typename Client = DirectoryServiceDataClient>
struct ListGroupsPaginationTraits {
  using RequestType = Model::ListGroupsRequest;
  using ResultType = Model::ListGroupsResult;
  using OutcomeType = Model::ListGroupsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListGroups(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace DirectoryServiceData
}  // namespace Aws
