/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evs/EVSServiceClientModel.h>
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/evs/model/ListEnvironmentVlansRequest.h>
#include <aws/evs/model/ListEnvironmentVlansResult.h>

namespace Aws {
namespace EVS {
namespace Pagination {

template <typename Client = EVSClient>
struct ListEnvironmentVlansPaginationTraits {
  using RequestType = Model::ListEnvironmentVlansRequest;
  using ResultType = Model::ListEnvironmentVlansResult;
  using OutcomeType = Model::ListEnvironmentVlansOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListEnvironmentVlans(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace EVS
}  // namespace Aws
