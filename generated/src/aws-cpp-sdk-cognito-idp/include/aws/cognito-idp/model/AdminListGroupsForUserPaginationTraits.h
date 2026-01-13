/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProviderServiceClientModel.h>
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/AdminListGroupsForUserRequest.h>
#include <aws/cognito-idp/model/AdminListGroupsForUserResult.h>

namespace Aws {
namespace CognitoIdentityProvider {
namespace Pagination {

template <typename Client = CognitoIdentityProviderClient>
struct AdminListGroupsForUserPaginationTraits {
  using RequestType = Model::AdminListGroupsForUserRequest;
  using ResultType = Model::AdminListGroupsForUserResult;
  using OutcomeType = Model::AdminListGroupsForUserOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->AdminListGroupsForUser(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CognitoIdentityProvider
}  // namespace Aws
