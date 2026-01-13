/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/AthenaServiceClientModel.h>
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/model/ListCapacityReservationsRequest.h>
#include <aws/athena/model/ListCapacityReservationsResult.h>

namespace Aws {
namespace Athena {
namespace Pagination {

template <typename Client = AthenaClient>
struct ListCapacityReservationsPaginationTraits {
  using RequestType = Model::ListCapacityReservationsRequest;
  using ResultType = Model::ListCapacityReservationsResult;
  using OutcomeType = Model::ListCapacityReservationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCapacityReservations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Athena
}  // namespace Aws
