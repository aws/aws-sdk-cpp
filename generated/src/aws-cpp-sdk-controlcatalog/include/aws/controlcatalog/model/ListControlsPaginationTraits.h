/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalogServiceClientModel.h>
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
#include <aws/controlcatalog/model/ListControlsRequest.h>
#include <aws/controlcatalog/model/ListControlsResult.h>

namespace Aws {
namespace ControlCatalog {
namespace Pagination {

template <typename Client = ControlCatalogClient>
struct ListControlsPaginationTraits {
  using RequestType = Model::ListControlsRequest;
  using ResultType = Model::ListControlsResult;
  using OutcomeType = Model::ListControlsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListControls(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ControlCatalog
}  // namespace Aws
