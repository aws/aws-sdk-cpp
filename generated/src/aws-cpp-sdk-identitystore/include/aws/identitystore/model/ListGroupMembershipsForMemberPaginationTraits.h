/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/identitystore/IdentityStoreServiceClientModel.h>
#include <aws/identitystore/IdentityStore_EXPORTS.h>
#include <aws/identitystore/model/ListGroupMembershipsForMemberRequest.h>
#include <aws/identitystore/model/ListGroupMembershipsForMemberResult.h>

namespace Aws {
namespace IdentityStore {
namespace Pagination {

template <typename Client = IdentityStoreClient>
struct ListGroupMembershipsForMemberPaginationTraits {
  using RequestType = Model::ListGroupMembershipsForMemberRequest;
  using ResultType = Model::ListGroupMembershipsForMemberResult;
  using OutcomeType = Model::ListGroupMembershipsForMemberOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListGroupMembershipsForMember(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace IdentityStore
}  // namespace Aws
