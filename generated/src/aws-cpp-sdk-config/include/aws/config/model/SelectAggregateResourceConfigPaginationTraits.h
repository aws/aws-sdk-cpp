/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigServiceServiceClientModel.h>
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/SelectAggregateResourceConfigRequest.h>
#include <aws/config/model/SelectAggregateResourceConfigResult.h>

namespace Aws {
namespace ConfigService {
namespace Pagination {

template <typename Client = ConfigServiceClient>
struct SelectAggregateResourceConfigPaginationTraits {
  using RequestType = Model::SelectAggregateResourceConfigRequest;
  using ResultType = Model::SelectAggregateResourceConfigResult;
  using OutcomeType = Model::SelectAggregateResourceConfigOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->SelectAggregateResourceConfig(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ConfigService
}  // namespace Aws
