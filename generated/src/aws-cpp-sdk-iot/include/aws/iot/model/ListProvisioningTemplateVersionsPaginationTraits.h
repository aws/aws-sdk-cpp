/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoTServiceClientModel.h>
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/ListProvisioningTemplateVersionsRequest.h>
#include <aws/iot/model/ListProvisioningTemplateVersionsResult.h>

namespace Aws {
namespace IoT {
namespace Pagination {

template <typename Client = IoTClient>
struct ListProvisioningTemplateVersionsPaginationTraits {
  using RequestType = Model::ListProvisioningTemplateVersionsRequest;
  using ResultType = Model::ListProvisioningTemplateVersionsResult;
  using OutcomeType = Model::ListProvisioningTemplateVersionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListProvisioningTemplateVersions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace IoT
}  // namespace Aws
