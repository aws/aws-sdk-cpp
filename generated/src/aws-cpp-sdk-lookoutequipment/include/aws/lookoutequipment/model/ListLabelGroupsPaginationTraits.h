/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipmentServiceClientModel.h>
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/model/ListLabelGroupsRequest.h>
#include <aws/lookoutequipment/model/ListLabelGroupsResult.h>

namespace Aws {
namespace LookoutEquipment {
namespace Pagination {

template <typename Client = LookoutEquipmentClient>
struct ListLabelGroupsPaginationTraits {
  using RequestType = Model::ListLabelGroupsRequest;
  using ResultType = Model::ListLabelGroupsResult;
  using OutcomeType = Model::ListLabelGroupsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListLabelGroups(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace LookoutEquipment
}  // namespace Aws
