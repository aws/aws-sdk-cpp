/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetectorServiceClientModel.h>
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/model/GetLabelsRequest.h>
#include <aws/frauddetector/model/GetLabelsResult.h>

namespace Aws {
namespace FraudDetector {
namespace Pagination {

template <typename Client = FraudDetectorClient>
struct GetLabelsPaginationTraits {
  using RequestType = Model::GetLabelsRequest;
  using ResultType = Model::GetLabelsResult;
  using OutcomeType = Model::GetLabelsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetLabels(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace FraudDetector
}  // namespace Aws
