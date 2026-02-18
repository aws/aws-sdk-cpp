/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-zonal-shift/ARCZonalShiftServiceClientModel.h>
#include <aws/arc-zonal-shift/ARCZonalShift_EXPORTS.h>
#include <aws/arc-zonal-shift/model/ListZonalShiftsRequest.h>
#include <aws/arc-zonal-shift/model/ListZonalShiftsResult.h>

namespace Aws {
namespace ARCZonalShift {
namespace Pagination {

template <typename Client = ARCZonalShiftClient>
struct ListZonalShiftsPaginationTraits {
  using RequestType = Model::ListZonalShiftsRequest;
  using ResultType = Model::ListZonalShiftsResult;
  using OutcomeType = Model::ListZonalShiftsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListZonalShifts(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ARCZonalShift
}  // namespace Aws
