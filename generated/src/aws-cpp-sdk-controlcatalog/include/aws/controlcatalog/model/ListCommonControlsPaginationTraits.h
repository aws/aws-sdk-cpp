/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controlcatalog/ControlCatalogServiceClientModel.h>
#include <aws/controlcatalog/ControlCatalog_EXPORTS.h>
#include <aws/controlcatalog/model/ListCommonControlsRequest.h>
#include <aws/controlcatalog/model/ListCommonControlsResult.h>

namespace Aws {
namespace ControlCatalog {
namespace Pagination {

template <typename Client = ControlCatalogClient>
struct ListCommonControlsPaginationTraits {
  using RequestType = Model::ListCommonControlsRequest;
  using ResultType = Model::ListCommonControlsResult;
  using OutcomeType = Model::ListCommonControlsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCommonControls(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ControlCatalog
}  // namespace Aws
