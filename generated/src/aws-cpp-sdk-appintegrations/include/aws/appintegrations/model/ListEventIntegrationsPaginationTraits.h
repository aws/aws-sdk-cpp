/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsServiceServiceClientModel.h>
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/appintegrations/model/ListEventIntegrationsRequest.h>
#include <aws/appintegrations/model/ListEventIntegrationsResult.h>

namespace Aws {
namespace AppIntegrationsService {
namespace Pagination {

template <typename Client = AppIntegrationsServiceClient>
struct ListEventIntegrationsPaginationTraits {
  using RequestType = Model::ListEventIntegrationsRequest;
  using ResultType = Model::ListEventIntegrationsResult;
  using OutcomeType = Model::ListEventIntegrationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListEventIntegrations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AppIntegrationsService
}  // namespace Aws
