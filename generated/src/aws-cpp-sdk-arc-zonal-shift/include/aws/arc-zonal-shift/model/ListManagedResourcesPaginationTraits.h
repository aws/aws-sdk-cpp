/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShiftServiceClientModel.h>
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/arc-zonal-shift/model/ListManagedResourcesRequest.h>
#include <aws/arc-zonal-shift/model/ListManagedResourcesResult.h>

namespace Aws {
namespace ARCZonalShift {
namespace Pagination {

template <typename Client = ARCZonalShiftClient>
struct ListManagedResourcesPaginationTraits {
  using RequestType = Model::ListManagedResourcesRequest;
  using ResultType = Model::ListManagedResourcesResult;
  using OutcomeType = Model::ListManagedResourcesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListManagedResources(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ARCZonalShift
}  // namespace Aws
