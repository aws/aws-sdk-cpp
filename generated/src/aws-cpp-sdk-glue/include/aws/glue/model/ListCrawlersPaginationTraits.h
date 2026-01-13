/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/GlueServiceClientModel.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/ListCrawlersRequest.h>
#include <aws/glue/model/ListCrawlersResult.h>

namespace Aws {
namespace Glue {
namespace Pagination {

template <typename Client = GlueClient>
struct ListCrawlersPaginationTraits {
  using RequestType = Model::ListCrawlersRequest;
  using ResultType = Model::ListCrawlersResult;
  using OutcomeType = Model::ListCrawlersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCrawlers(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Glue
}  // namespace Aws
