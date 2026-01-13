/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMakerServiceClientModel.h>
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/model/ListPropertiesRequest.h>
#include <aws/iottwinmaker/model/ListPropertiesResult.h>

namespace Aws {
namespace IoTTwinMaker {
namespace Pagination {

template <typename Client = IoTTwinMakerClient>
struct ListPropertiesPaginationTraits {
  using RequestType = Model::ListPropertiesRequest;
  using ResultType = Model::ListPropertiesResult;
  using OutcomeType = Model::ListPropertiesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListProperties(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace IoTTwinMaker
}  // namespace Aws
