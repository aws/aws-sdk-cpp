/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAcceleratorServiceClientModel.h>
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/model/ListCustomRoutingPortMappingsRequest.h>
#include <aws/globalaccelerator/model/ListCustomRoutingPortMappingsResult.h>

namespace Aws {
namespace GlobalAccelerator {
namespace Pagination {

template <typename Client = GlobalAcceleratorClient>
struct ListCustomRoutingPortMappingsPaginationTraits {
  using RequestType = Model::ListCustomRoutingPortMappingsRequest;
  using ResultType = Model::ListCustomRoutingPortMappingsResult;
  using OutcomeType = Model::ListCustomRoutingPortMappingsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCustomRoutingPortMappings(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace GlobalAccelerator
}  // namespace Aws
