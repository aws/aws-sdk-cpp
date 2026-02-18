/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationServiceServiceClientModel.h>
#include <aws/location/LocationService_EXPORTS.h>
#include <aws/location/model/ListGeofenceCollectionsRequest.h>
#include <aws/location/model/ListGeofenceCollectionsResult.h>

namespace Aws {
namespace LocationService {
namespace Pagination {

template <typename Client = LocationServiceClient>
struct ListGeofenceCollectionsPaginationTraits {
  using RequestType = Model::ListGeofenceCollectionsRequest;
  using ResultType = Model::ListGeofenceCollectionsResult;
  using OutcomeType = Model::ListGeofenceCollectionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListGeofenceCollections(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace LocationService
}  // namespace Aws
