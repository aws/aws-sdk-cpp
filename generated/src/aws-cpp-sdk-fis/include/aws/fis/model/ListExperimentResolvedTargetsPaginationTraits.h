/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FISServiceClientModel.h>
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/fis/model/ListExperimentResolvedTargetsRequest.h>
#include <aws/fis/model/ListExperimentResolvedTargetsResult.h>

namespace Aws {
namespace FIS {
namespace Pagination {

template <typename Client = FISClient>
struct ListExperimentResolvedTargetsPaginationTraits {
  using RequestType = Model::ListExperimentResolvedTargetsRequest;
  using ResultType = Model::ListExperimentResolvedTargetsResult;
  using OutcomeType = Model::ListExperimentResolvedTargetsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListExperimentResolvedTargets(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace FIS
}  // namespace Aws
