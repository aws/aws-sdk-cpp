/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchServiceServiceClientModel.h>
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/ListElasticsearchVersionsRequest.h>
#include <aws/es/model/ListElasticsearchVersionsResult.h>

namespace Aws {
namespace ElasticsearchService {
namespace Pagination {

template <typename Client = ElasticsearchServiceClient>
struct ListElasticsearchVersionsPaginationTraits {
  using RequestType = Model::ListElasticsearchVersionsRequest;
  using ResultType = Model::ListElasticsearchVersionsResult;
  using OutcomeType = Model::ListElasticsearchVersionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListElasticsearchVersions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ElasticsearchService
}  // namespace Aws
