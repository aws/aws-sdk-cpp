/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-identity/CognitoIdentityServiceClientModel.h>
#include <aws/cognito-identity/CognitoIdentity_EXPORTS.h>
#include <aws/cognito-identity/model/ListIdentityPoolsRequest.h>
#include <aws/cognito-identity/model/ListIdentityPoolsResult.h>

namespace Aws {
namespace CognitoIdentity {
namespace Pagination {

template <typename Client = CognitoIdentityClient>
struct ListIdentityPoolsPaginationTraits {
  using RequestType = Model::ListIdentityPoolsRequest;
  using ResultType = Model::ListIdentityPoolsResult;
  using OutcomeType = Model::ListIdentityPoolsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListIdentityPools(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CognitoIdentity
}  // namespace Aws
