/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationServiceServiceClientModel.h>
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/model/ListTrackerConsumersRequest.h>
#include <aws/location/model/ListTrackerConsumersResult.h>

namespace Aws {
namespace LocationService {
namespace Pagination {

template <typename Client = LocationServiceClient>
struct ListTrackerConsumersPaginationTraits {
  using RequestType = Model::ListTrackerConsumersRequest;
  using ResultType = Model::ListTrackerConsumersResult;
  using OutcomeType = Model::ListTrackerConsumersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListTrackerConsumers(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace LocationService
}  // namespace Aws
