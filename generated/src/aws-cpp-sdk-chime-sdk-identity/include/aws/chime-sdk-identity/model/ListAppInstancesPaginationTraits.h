/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentityServiceClientModel.h>
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/chime-sdk-identity/model/ListAppInstancesRequest.h>
#include <aws/chime-sdk-identity/model/ListAppInstancesResult.h>

namespace Aws {
namespace ChimeSDKIdentity {
namespace Pagination {

template <typename Client = ChimeSDKIdentityClient>
struct ListAppInstancesPaginationTraits {
  using RequestType = Model::ListAppInstancesRequest;
  using ResultType = Model::ListAppInstancesResult;
  using OutcomeType = Model::ListAppInstancesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAppInstances(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ChimeSDKIdentity
}  // namespace Aws
