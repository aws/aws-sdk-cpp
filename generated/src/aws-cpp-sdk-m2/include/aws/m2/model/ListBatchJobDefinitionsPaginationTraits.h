/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernizationServiceClientModel.h>
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/m2/model/ListBatchJobDefinitionsRequest.h>
#include <aws/m2/model/ListBatchJobDefinitionsResult.h>

namespace Aws {
namespace MainframeModernization {
namespace Pagination {

template <typename Client = MainframeModernizationClient>
struct ListBatchJobDefinitionsPaginationTraits {
  using RequestType = Model::ListBatchJobDefinitionsRequest;
  using ResultType = Model::ListBatchJobDefinitionsResult;
  using OutcomeType = Model::ListBatchJobDefinitionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListBatchJobDefinitions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MainframeModernization
}  // namespace Aws
