/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2ServiceClientModel.h>
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/ListUtteranceAnalyticsDataRequest.h>
#include <aws/lexv2-models/model/ListUtteranceAnalyticsDataResult.h>

namespace Aws {
namespace LexModelsV2 {
namespace Pagination {

template <typename Client = LexModelsV2Client>
struct ListUtteranceAnalyticsDataPaginationTraits {
  using RequestType = Model::ListUtteranceAnalyticsDataRequest;
  using ResultType = Model::ListUtteranceAnalyticsDataResult;
  using OutcomeType = Model::ListUtteranceAnalyticsDataOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListUtteranceAnalyticsData(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace LexModelsV2
}  // namespace Aws
