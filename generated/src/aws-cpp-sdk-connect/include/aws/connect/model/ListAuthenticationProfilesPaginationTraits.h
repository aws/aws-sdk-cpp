/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/ConnectServiceClientModel.h>
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ListAuthenticationProfilesRequest.h>
#include <aws/connect/model/ListAuthenticationProfilesResult.h>

namespace Aws {
namespace Connect {
namespace Pagination {

template <typename Client = ConnectClient>
struct ListAuthenticationProfilesPaginationTraits {
  using RequestType = Model::ListAuthenticationProfilesRequest;
  using ResultType = Model::ListAuthenticationProfilesResult;
  using OutcomeType = Model::ListAuthenticationProfilesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAuthenticationProfiles(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Connect
}  // namespace Aws
