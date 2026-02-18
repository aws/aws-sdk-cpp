/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolutionServiceClientModel.h>
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/model/ListProviderServicesRequest.h>
#include <aws/entityresolution/model/ListProviderServicesResult.h>

namespace Aws {
namespace EntityResolution {
namespace Pagination {

template <typename Client = EntityResolutionClient>
struct ListProviderServicesPaginationTraits {
  using RequestType = Model::ListProviderServicesRequest;
  using ResultType = Model::ListProviderServicesResult;
  using OutcomeType = Model::ListProviderServicesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListProviderServices(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace EntityResolution
}  // namespace Aws
