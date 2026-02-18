/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evs/EVSServiceClientModel.h>
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/evs/model/ListEnvironmentHostsRequest.h>
#include <aws/evs/model/ListEnvironmentHostsResult.h>

namespace Aws {
namespace EVS {
namespace Pagination {

template <typename Client = EVSClient>
struct ListEnvironmentHostsPaginationTraits {
  using RequestType = Model::ListEnvironmentHostsRequest;
  using ResultType = Model::ListEnvironmentHostsResult;
  using OutcomeType = Model::ListEnvironmentHostsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListEnvironmentHosts(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace EVS
}  // namespace Aws
