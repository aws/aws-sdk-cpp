/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAcceleratorServiceClientModel.h>
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/model/ListCustomRoutingPortMappingsByDestinationRequest.h>
#include <aws/globalaccelerator/model/ListCustomRoutingPortMappingsByDestinationResult.h>

namespace Aws {
namespace GlobalAccelerator {
namespace Pagination {

template <typename Client = GlobalAcceleratorClient>
struct ListCustomRoutingPortMappingsByDestinationPaginationTraits {
  using RequestType = Model::ListCustomRoutingPortMappingsByDestinationRequest;
  using ResultType = Model::ListCustomRoutingPortMappingsByDestinationResult;
  using OutcomeType = Model::ListCustomRoutingPortMappingsByDestinationOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) {
    return client->ListCustomRoutingPortMappingsByDestination(request);
  }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace GlobalAccelerator
}  // namespace Aws
