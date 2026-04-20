/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evs/EVSServiceClientModel.h>
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/evs/model/ListEnvironmentConnectorsRequest.h>
#include <aws/evs/model/ListEnvironmentConnectorsResult.h>

namespace Aws {
namespace EVS {
namespace Pagination {

template <typename Client = EVSClient>
struct ListEnvironmentConnectorsPaginationTraits {
  using RequestType = Model::ListEnvironmentConnectorsRequest;
  using ResultType = Model::ListEnvironmentConnectorsResult;
  using OutcomeType = Model::ListEnvironmentConnectorsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListEnvironmentConnectors(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace EVS
}  // namespace Aws
