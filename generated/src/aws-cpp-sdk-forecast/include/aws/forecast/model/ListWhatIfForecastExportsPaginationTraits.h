/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastServiceServiceClientModel.h>
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/model/ListWhatIfForecastExportsRequest.h>
#include <aws/forecast/model/ListWhatIfForecastExportsResult.h>

namespace Aws {
namespace ForecastService {
namespace Pagination {

template <typename Client = ForecastServiceClient>
struct ListWhatIfForecastExportsPaginationTraits {
  using RequestType = Model::ListWhatIfForecastExportsRequest;
  using ResultType = Model::ListWhatIfForecastExportsResult;
  using OutcomeType = Model::ListWhatIfForecastExportsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListWhatIfForecastExports(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ForecastService
}  // namespace Aws
