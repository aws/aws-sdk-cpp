/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetectorServiceClientModel.h>
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/model/GetBatchImportJobsRequest.h>
#include <aws/frauddetector/model/GetBatchImportJobsResult.h>

namespace Aws {
namespace FraudDetector {
namespace Pagination {

template <typename Client = FraudDetectorClient>
struct GetBatchImportJobsPaginationTraits {
  using RequestType = Model::GetBatchImportJobsRequest;
  using ResultType = Model::GetBatchImportJobsResult;
  using OutcomeType = Model::GetBatchImportJobsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetBatchImportJobs(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace FraudDetector
}  // namespace Aws
