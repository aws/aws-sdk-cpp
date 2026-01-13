/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMakerServiceClientModel.h>
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/model/ListComponentTypesRequest.h>
#include <aws/iottwinmaker/model/ListComponentTypesResult.h>

namespace Aws {
namespace IoTTwinMaker {
namespace Pagination {

template <typename Client = IoTTwinMakerClient>
struct ListComponentTypesPaginationTraits {
  using RequestType = Model::ListComponentTypesRequest;
  using ResultType = Model::ListComponentTypesResult;
  using OutcomeType = Model::ListComponentTypesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListComponentTypes(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace IoTTwinMaker
}  // namespace Aws
