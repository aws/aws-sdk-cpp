/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalogServiceClientModel.h>
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
#include <aws/controlcatalog/model/ListControlMappingsRequest.h>
#include <aws/controlcatalog/model/ListControlMappingsResult.h>

namespace Aws {
namespace ControlCatalog {
namespace Pagination {

template <typename Client = ControlCatalogClient>
struct ListControlMappingsPaginationTraits {
  using RequestType = Model::ListControlMappingsRequest;
  using ResultType = Model::ListControlMappingsResult;
  using OutcomeType = Model::ListControlMappingsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListControlMappings(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ControlCatalog
}  // namespace Aws
