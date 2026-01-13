/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWiseServiceClientModel.h>
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/model/ListModelManifestNodesRequest.h>
#include <aws/iotfleetwise/model/ListModelManifestNodesResult.h>

namespace Aws {
namespace IoTFleetWise {
namespace Pagination {

template <typename Client = IoTFleetWiseClient>
struct ListModelManifestNodesPaginationTraits {
  using RequestType = Model::ListModelManifestNodesRequest;
  using ResultType = Model::ListModelManifestNodesResult;
  using OutcomeType = Model::ListModelManifestNodesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListModelManifestNodes(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace IoTFleetWise
}  // namespace Aws
