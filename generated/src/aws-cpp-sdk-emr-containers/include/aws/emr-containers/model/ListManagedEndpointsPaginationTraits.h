/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainersServiceClientModel.h>
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/model/ListManagedEndpointsRequest.h>
#include <aws/emr-containers/model/ListManagedEndpointsResult.h>

namespace Aws {
namespace EMRContainers {
namespace Pagination {

template <typename Client = EMRContainersClient>
struct ListManagedEndpointsPaginationTraits {
  using RequestType = Model::ListManagedEndpointsRequest;
  using ResultType = Model::ListManagedEndpointsResult;
  using OutcomeType = Model::ListManagedEndpointsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListManagedEndpoints(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace EMRContainers
}  // namespace Aws
