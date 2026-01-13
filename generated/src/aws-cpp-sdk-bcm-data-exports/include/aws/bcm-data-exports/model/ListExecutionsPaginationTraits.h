/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExportsServiceClientModel.h>
#include <aws/bcm-data-exports/BCMDataExports_EXPORTS.h>
#include <aws/bcm-data-exports/model/ListExecutionsRequest.h>
#include <aws/bcm-data-exports/model/ListExecutionsResult.h>

namespace Aws {
namespace BCMDataExports {
namespace Pagination {

template <typename Client = BCMDataExportsClient>
struct ListExecutionsPaginationTraits {
  using RequestType = Model::ListExecutionsRequest;
  using ResultType = Model::ListExecutionsResult;
  using OutcomeType = Model::ListExecutionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListExecutions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace BCMDataExports
}  // namespace Aws
