/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directory-service-data/DirectoryServiceDataServiceClientModel.h>
#include <aws/directory-service-data/DirectoryServiceData_EXPORTS.h>
#include <aws/directory-service-data/model/ListGroupsForMemberRequest.h>
#include <aws/directory-service-data/model/ListGroupsForMemberResult.h>

namespace Aws {
namespace DirectoryServiceData {
namespace Pagination {

template <typename Client = DirectoryServiceDataClient>
struct ListGroupsForMemberPaginationTraits {
  using RequestType = Model::ListGroupsForMemberRequest;
  using ResultType = Model::ListGroupsForMemberResult;
  using OutcomeType = Model::ListGroupsForMemberOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListGroupsForMember(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace DirectoryServiceData
}  // namespace Aws
