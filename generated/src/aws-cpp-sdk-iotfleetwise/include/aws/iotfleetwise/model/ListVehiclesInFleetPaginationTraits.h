/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWiseServiceClientModel.h>
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/model/ListVehiclesInFleetRequest.h>
#include <aws/iotfleetwise/model/ListVehiclesInFleetResult.h>

namespace Aws {
namespace IoTFleetWise {
namespace Pagination {

template <typename Client = IoTFleetWiseClient>
struct ListVehiclesInFleetPaginationTraits {
  using RequestType = Model::ListVehiclesInFleetRequest;
  using ResultType = Model::ListVehiclesInFleetResult;
  using OutcomeType = Model::ListVehiclesInFleetOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListVehiclesInFleet(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace IoTFleetWise
}  // namespace Aws
