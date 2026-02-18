/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExportsServiceClientModel.h>
#include <aws/bcm-data-exports/BCMDataExports_EXPORTS.h>
#include <aws/bcm-data-exports/model/ListTablesRequest.h>
#include <aws/bcm-data-exports/model/ListTablesResult.h>

namespace Aws {
namespace BCMDataExports {
namespace Pagination {

template <typename Client = BCMDataExportsClient>
struct ListTablesPaginationTraits {
  using RequestType = Model::ListTablesRequest;
  using ResultType = Model::ListTablesResult;
  using OutcomeType = Model::ListTablesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListTables(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace BCMDataExports
}  // namespace Aws
