/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortalServiceClientModel.h>
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/ListProductsRequest.h>
#include <aws/apiportal/model/ListProductsResult.h>

namespace Aws {
namespace APIPortal {
namespace Pagination {

template <typename Client = APIPortalClient>
struct ListProductsPaginationTraits {
  using RequestType = Model::ListProductsRequest;
  using ResultType = Model::ListProductsResult;
  using OutcomeType = Model::ListProductsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListProducts(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace APIPortal
}  // namespace Aws
