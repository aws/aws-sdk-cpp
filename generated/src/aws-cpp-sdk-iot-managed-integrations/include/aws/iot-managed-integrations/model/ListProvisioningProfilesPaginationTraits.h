/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrationsServiceClientModel.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/model/ListProvisioningProfilesRequest.h>
#include <aws/iot-managed-integrations/model/ListProvisioningProfilesResult.h>

namespace Aws {
namespace IoTManagedIntegrations {
namespace Pagination {

template <typename Client = IoTManagedIntegrationsClient>
struct ListProvisioningProfilesPaginationTraits {
  using RequestType = Model::ListProvisioningProfilesRequest;
  using ResultType = Model::ListProvisioningProfilesResult;
  using OutcomeType = Model::ListProvisioningProfilesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListProvisioningProfiles(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace IoTManagedIntegrations
}  // namespace Aws
