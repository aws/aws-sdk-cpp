/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShiftServiceClientModel.h>
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/arc-zonal-shift/model/ListAutoshiftsRequest.h>
#include <aws/arc-zonal-shift/model/ListAutoshiftsResult.h>

namespace Aws {
namespace ARCZonalShift {
namespace Pagination {

template <typename Client = ARCZonalShiftClient>
struct ListAutoshiftsPaginationTraits {
  using RequestType = Model::ListAutoshiftsRequest;
  using ResultType = Model::ListAutoshiftsResult;
  using OutcomeType = Model::ListAutoshiftsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAutoshifts(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ARCZonalShift
}  // namespace Aws
