/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsServiceServiceClientModel.h>
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/appintegrations/model/ListDataIntegrationsRequest.h>
#include <aws/appintegrations/model/ListDataIntegrationsResult.h>

namespace Aws {
namespace AppIntegrationsService {
namespace Pagination {

template <typename Client = AppIntegrationsServiceClient>
struct ListDataIntegrationsPaginationTraits {
  using RequestType = Model::ListDataIntegrationsRequest;
  using ResultType = Model::ListDataIntegrationsResult;
  using OutcomeType = Model::ListDataIntegrationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDataIntegrations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AppIntegrationsService
}  // namespace Aws
