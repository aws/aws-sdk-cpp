/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentityServiceClientModel.h>
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/chime-sdk-identity/model/ListAppInstanceUserEndpointsRequest.h>
#include <aws/chime-sdk-identity/model/ListAppInstanceUserEndpointsResult.h>

namespace Aws {
namespace ChimeSDKIdentity {
namespace Pagination {

template <typename Client = ChimeSDKIdentityClient>
struct ListAppInstanceUserEndpointsPaginationTraits {
  using RequestType = Model::ListAppInstanceUserEndpointsRequest;
  using ResultType = Model::ListAppInstanceUserEndpointsResult;
  using OutcomeType = Model::ListAppInstanceUserEndpointsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAppInstanceUserEndpoints(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ChimeSDKIdentity
}  // namespace Aws
