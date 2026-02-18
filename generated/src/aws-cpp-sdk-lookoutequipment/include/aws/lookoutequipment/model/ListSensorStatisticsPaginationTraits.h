/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipmentServiceClientModel.h>
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/model/ListSensorStatisticsRequest.h>
#include <aws/lookoutequipment/model/ListSensorStatisticsResult.h>

namespace Aws {
namespace LookoutEquipment {
namespace Pagination {

template <typename Client = LookoutEquipmentClient>
struct ListSensorStatisticsPaginationTraits {
  using RequestType = Model::ListSensorStatisticsRequest;
  using ResultType = Model::ListSensorStatisticsResult;
  using OutcomeType = Model::ListSensorStatisticsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSensorStatistics(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace LookoutEquipment
}  // namespace Aws
