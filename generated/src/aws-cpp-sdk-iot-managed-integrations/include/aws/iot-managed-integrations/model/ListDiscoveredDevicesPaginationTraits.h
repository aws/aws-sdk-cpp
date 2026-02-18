/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrationsServiceClientModel.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/model/ListDiscoveredDevicesRequest.h>
#include <aws/iot-managed-integrations/model/ListDiscoveredDevicesResult.h>

namespace Aws {
namespace IoTManagedIntegrations {
namespace Pagination {

template <typename Client = IoTManagedIntegrationsClient>
struct ListDiscoveredDevicesPaginationTraits {
  using RequestType = Model::ListDiscoveredDevicesRequest;
  using ResultType = Model::ListDiscoveredDevicesResult;
  using OutcomeType = Model::ListDiscoveredDevicesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDiscoveredDevices(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace IoTManagedIntegrations
}  // namespace Aws
