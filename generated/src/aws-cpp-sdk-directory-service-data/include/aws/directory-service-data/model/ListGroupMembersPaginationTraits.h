/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directory-service-data/DirectoryServiceDataServiceClientModel.h>
#include <aws/directory-service-data/DirectoryServiceData_EXPORTS.h>
#include <aws/directory-service-data/model/ListGroupMembersRequest.h>
#include <aws/directory-service-data/model/ListGroupMembersResult.h>

namespace Aws {
namespace DirectoryServiceData {
namespace Pagination {

template <typename Client = DirectoryServiceDataClient>
struct ListGroupMembersPaginationTraits {
  using RequestType = Model::ListGroupMembersRequest;
  using ResultType = Model::ListGroupMembersResult;
  using OutcomeType = Model::ListGroupMembersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListGroupMembers(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace DirectoryServiceData
}  // namespace Aws
