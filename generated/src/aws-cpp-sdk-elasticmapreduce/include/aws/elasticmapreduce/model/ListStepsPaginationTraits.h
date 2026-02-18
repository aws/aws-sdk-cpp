/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMRServiceClientModel.h>
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/ListStepsRequest.h>
#include <aws/elasticmapreduce/model/ListStepsResult.h>

namespace Aws {
namespace EMR {
namespace Pagination {

template <typename Client = EMRClient>
struct ListStepsPaginationTraits {
  using RequestType = Model::ListStepsRequest;
  using ResultType = Model::ListStepsResult;
  using OutcomeType = Model::ListStepsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSteps(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetMarker()); }
};

}  // namespace Pagination
}  // namespace EMR
}  // namespace Aws
