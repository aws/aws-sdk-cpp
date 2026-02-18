/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipmentServiceClientModel.h>
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/model/ListInferenceExecutionsRequest.h>
#include <aws/lookoutequipment/model/ListInferenceExecutionsResult.h>

namespace Aws {
namespace LookoutEquipment {
namespace Pagination {

template <typename Client = LookoutEquipmentClient>
struct ListInferenceExecutionsPaginationTraits {
  using RequestType = Model::ListInferenceExecutionsRequest;
  using ResultType = Model::ListInferenceExecutionsResult;
  using OutcomeType = Model::ListInferenceExecutionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListInferenceExecutions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace LookoutEquipment
}  // namespace Aws
