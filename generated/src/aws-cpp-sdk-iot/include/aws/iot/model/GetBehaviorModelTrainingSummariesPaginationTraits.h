/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoTServiceClientModel.h>
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/GetBehaviorModelTrainingSummariesRequest.h>
#include <aws/iot/model/GetBehaviorModelTrainingSummariesResult.h>

namespace Aws {
namespace IoT {
namespace Pagination {

template <typename Client = IoTClient>
struct GetBehaviorModelTrainingSummariesPaginationTraits {
  using RequestType = Model::GetBehaviorModelTrainingSummariesRequest;
  using ResultType = Model::GetBehaviorModelTrainingSummariesResult;
  using OutcomeType = Model::GetBehaviorModelTrainingSummariesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetBehaviorModelTrainingSummaries(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace IoT
}  // namespace Aws
