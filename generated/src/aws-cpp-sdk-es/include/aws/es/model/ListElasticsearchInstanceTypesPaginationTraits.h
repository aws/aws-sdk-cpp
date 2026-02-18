/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchServiceServiceClientModel.h>
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/ListElasticsearchInstanceTypesRequest.h>
#include <aws/es/model/ListElasticsearchInstanceTypesResult.h>

namespace Aws {
namespace ElasticsearchService {
namespace Pagination {

template <typename Client = ElasticsearchServiceClient>
struct ListElasticsearchInstanceTypesPaginationTraits {
  using RequestType = Model::ListElasticsearchInstanceTypesRequest;
  using ResultType = Model::ListElasticsearchInstanceTypesResult;
  using OutcomeType = Model::ListElasticsearchInstanceTypesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListElasticsearchInstanceTypes(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ElasticsearchService
}  // namespace Aws
