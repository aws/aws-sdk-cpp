/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExportsServiceClientModel.h>
#include <aws/bcm-data-exports/BCMDataExports_EXPORTS.h>
#include <aws/bcm-data-exports/model/ListExportsRequest.h>
#include <aws/bcm-data-exports/model/ListExportsResult.h>

namespace Aws {
namespace BCMDataExports {
namespace Pagination {

template <typename Client = BCMDataExportsClient>
struct ListExportsPaginationTraits {
  using RequestType = Model::ListExportsRequest;
  using ResultType = Model::ListExportsResult;
  using OutcomeType = Model::ListExportsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListExports(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace BCMDataExports
}  // namespace Aws
