/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearningServiceClientModel.h>
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/machinelearning/model/DescribeBatchPredictionsRequest.h>
#include <aws/machinelearning/model/DescribeBatchPredictionsResult.h>

namespace Aws {
namespace MachineLearning {
namespace Pagination {

template <typename Client = MachineLearningClient>
struct DescribeBatchPredictionsPaginationTraits {
  using RequestType = Model::DescribeBatchPredictionsRequest;
  using ResultType = Model::DescribeBatchPredictionsResult;
  using OutcomeType = Model::DescribeBatchPredictionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeBatchPredictions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MachineLearning
}  // namespace Aws
