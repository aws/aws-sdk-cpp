/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProviderServiceClientModel.h>
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/ListUsersInGroupRequest.h>
#include <aws/cognito-idp/model/ListUsersInGroupResult.h>

namespace Aws {
namespace CognitoIdentityProvider {
namespace Pagination {

template <typename Client = CognitoIdentityProviderClient>
struct ListUsersInGroupPaginationTraits {
  using RequestType = Model::ListUsersInGroupRequest;
  using ResultType = Model::ListUsersInGroupResult;
  using OutcomeType = Model::ListUsersInGroupOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListUsersInGroup(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CognitoIdentityProvider
}  // namespace Aws
