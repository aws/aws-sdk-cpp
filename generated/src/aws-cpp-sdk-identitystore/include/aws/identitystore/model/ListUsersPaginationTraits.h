/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/identitystore/IdentityStoreServiceClientModel.h>
#include <aws/identitystore/IdentityStore_EXPORTS.h>
#include <aws/identitystore/model/ListUsersRequest.h>
#include <aws/identitystore/model/ListUsersResult.h>

namespace Aws {
namespace IdentityStore {
namespace Pagination {

template <typename Client = IdentityStoreClient>
struct ListUsersPaginationTraits {
  using RequestType = Model::ListUsersRequest;
  using ResultType = Model::ListUsersResult;
  using OutcomeType = Model::ListUsersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListUsers(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace IdentityStore
}  // namespace Aws
