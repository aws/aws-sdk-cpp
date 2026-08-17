/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/DrsServiceClientModel.h>
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/ListRecoveryPlanExecutionStepsRequest.h>
#include <aws/drs/model/ListRecoveryPlanExecutionStepsResult.h>

namespace Aws {
namespace drs {
namespace Pagination {

template <typename Client = DrsClient>
struct ListRecoveryPlanExecutionStepsPaginationTraits {
  using RequestType = Model::ListRecoveryPlanExecutionStepsRequest;
  using ResultType = Model::ListRecoveryPlanExecutionStepsResult;
  using OutcomeType = Model::ListRecoveryPlanExecutionStepsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRecoveryPlanExecutionSteps(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace drs
}  // namespace Aws
