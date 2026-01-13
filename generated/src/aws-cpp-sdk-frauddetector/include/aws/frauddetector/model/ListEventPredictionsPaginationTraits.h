/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetectorServiceClientModel.h>
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/model/ListEventPredictionsRequest.h>
#include <aws/frauddetector/model/ListEventPredictionsResult.h>

namespace Aws {
namespace FraudDetector {
namespace Pagination {

template <typename Client = FraudDetectorClient>
struct ListEventPredictionsPaginationTraits {
  using RequestType = Model::ListEventPredictionsRequest;
  using ResultType = Model::ListEventPredictionsResult;
  using OutcomeType = Model::ListEventPredictionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListEventPredictions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace FraudDetector
}  // namespace Aws
