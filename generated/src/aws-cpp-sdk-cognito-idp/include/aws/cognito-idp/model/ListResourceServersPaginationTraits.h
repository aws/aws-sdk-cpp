/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProviderServiceClientModel.h>
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/ListResourceServersRequest.h>
#include <aws/cognito-idp/model/ListResourceServersResult.h>

namespace Aws {
namespace CognitoIdentityProvider {
namespace Pagination {

template <typename Client = CognitoIdentityProviderClient>
struct ListResourceServersPaginationTraits {
  using RequestType = Model::ListResourceServersRequest;
  using ResultType = Model::ListResourceServersResult;
  using OutcomeType = Model::ListResourceServersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListResourceServers(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CognitoIdentityProvider
}  // namespace Aws
