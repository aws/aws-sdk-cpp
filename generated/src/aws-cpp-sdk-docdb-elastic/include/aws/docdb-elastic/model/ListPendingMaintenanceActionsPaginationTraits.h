/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb-elastic/DocDBElasticServiceClientModel.h>
#include <aws/docdb-elastic/DocDBElastic_EXPORTS.h>
#include <aws/docdb-elastic/model/ListPendingMaintenanceActionsRequest.h>
#include <aws/docdb-elastic/model/ListPendingMaintenanceActionsResult.h>

namespace Aws {
namespace DocDBElastic {
namespace Pagination {

template <typename Client = DocDBElasticClient>
struct ListPendingMaintenanceActionsPaginationTraits {
  using RequestType = Model::ListPendingMaintenanceActionsRequest;
  using ResultType = Model::ListPendingMaintenanceActionsResult;
  using OutcomeType = Model::ListPendingMaintenanceActionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListPendingMaintenanceActions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace DocDBElastic
}  // namespace Aws
