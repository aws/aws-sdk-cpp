/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/invoicing/InvoicingServiceClientModel.h>
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/invoicing/model/ListProcurementPortalsRequest.h>
#include <aws/invoicing/model/ListProcurementPortalsResult.h>

namespace Aws {
namespace Invoicing {
namespace Pagination {

template <typename Client = InvoicingClient>
struct ListProcurementPortalsPaginationTraits {
  using RequestType = Model::ListProcurementPortalsRequest;
  using ResultType = Model::ListProcurementPortalsResult;
  using OutcomeType = Model::ListProcurementPortalsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListProcurementPortals(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Invoicing
}  // namespace Aws
