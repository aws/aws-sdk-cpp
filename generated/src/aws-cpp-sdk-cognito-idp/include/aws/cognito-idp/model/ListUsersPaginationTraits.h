/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProviderServiceClientModel.h>
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/ListUsersRequest.h>
#include <aws/cognito-idp/model/ListUsersResult.h>

namespace Aws {
namespace CognitoIdentityProvider {
namespace Pagination {

template <typename Client = CognitoIdentityProviderClient>
struct ListUsersPaginationTraits {
  using RequestType = Model::ListUsersRequest;
  using ResultType = Model::ListUsersResult;
  using OutcomeType = Model::ListUsersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListUsers(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetPaginationToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetPaginationToken(result.GetPaginationToken()); }
};

}  // namespace Pagination
}  // namespace CognitoIdentityProvider
}  // namespace Aws
