/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoTServiceClientModel.h>
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/ListV2LoggingLevelsRequest.h>
#include <aws/iot/model/ListV2LoggingLevelsResult.h>

namespace Aws {
namespace IoT {
namespace Pagination {

template <typename Client = IoTClient>
struct ListV2LoggingLevelsPaginationTraits {
  using RequestType = Model::ListV2LoggingLevelsRequest;
  using ResultType = Model::ListV2LoggingLevelsResult;
  using OutcomeType = Model::ListV2LoggingLevelsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListV2LoggingLevels(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace IoT
}  // namespace Aws
