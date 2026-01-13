/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMRServiceClientModel.h>
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/ListBootstrapActionsRequest.h>
#include <aws/elasticmapreduce/model/ListBootstrapActionsResult.h>

namespace Aws {
namespace EMR {
namespace Pagination {

template <typename Client = EMRClient>
struct ListBootstrapActionsPaginationTraits {
  using RequestType = Model::ListBootstrapActionsRequest;
  using ResultType = Model::ListBootstrapActionsResult;
  using OutcomeType = Model::ListBootstrapActionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListBootstrapActions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetMarker()); }
};

}  // namespace Pagination
}  // namespace EMR
}  // namespace Aws
