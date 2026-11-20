/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortalServiceClientModel.h>
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/ListProductPagesRequest.h>
#include <aws/apiportal/model/ListProductPagesResult.h>

namespace Aws {
namespace APIPortal {
namespace Pagination {

template <typename Client = APIPortalClient>
struct ListProductPagesPaginationTraits {
  using RequestType = Model::ListProductPagesRequest;
  using ResultType = Model::ListProductPagesResult;
  using OutcomeType = Model::ListProductPagesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListProductPages(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace APIPortal
}  // namespace Aws
