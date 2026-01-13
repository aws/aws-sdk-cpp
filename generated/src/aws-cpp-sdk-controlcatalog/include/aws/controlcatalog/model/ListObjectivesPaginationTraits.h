/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalogServiceClientModel.h>
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
#include <aws/controlcatalog/model/ListObjectivesRequest.h>
#include <aws/controlcatalog/model/ListObjectivesResult.h>

namespace Aws {
namespace ControlCatalog {
namespace Pagination {

template <typename Client = ControlCatalogClient>
struct ListObjectivesPaginationTraits {
  using RequestType = Model::ListObjectivesRequest;
  using ResultType = Model::ListObjectivesResult;
  using OutcomeType = Model::ListObjectivesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListObjectives(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ControlCatalog
}  // namespace Aws
