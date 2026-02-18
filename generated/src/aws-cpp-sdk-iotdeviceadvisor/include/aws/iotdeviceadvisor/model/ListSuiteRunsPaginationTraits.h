/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisorServiceClientModel.h>
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/iotdeviceadvisor/model/ListSuiteRunsRequest.h>
#include <aws/iotdeviceadvisor/model/ListSuiteRunsResult.h>

namespace Aws {
namespace IoTDeviceAdvisor {
namespace Pagination {

template <typename Client = IoTDeviceAdvisorClient>
struct ListSuiteRunsPaginationTraits {
  using RequestType = Model::ListSuiteRunsRequest;
  using ResultType = Model::ListSuiteRunsResult;
  using OutcomeType = Model::ListSuiteRunsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSuiteRuns(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace IoTDeviceAdvisor
}  // namespace Aws
