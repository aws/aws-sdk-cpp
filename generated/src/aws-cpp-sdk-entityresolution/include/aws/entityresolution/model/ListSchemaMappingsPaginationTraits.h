/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolutionServiceClientModel.h>
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/model/ListSchemaMappingsRequest.h>
#include <aws/entityresolution/model/ListSchemaMappingsResult.h>

namespace Aws {
namespace EntityResolution {
namespace Pagination {

template <typename Client = EntityResolutionClient>
struct ListSchemaMappingsPaginationTraits {
  using RequestType = Model::ListSchemaMappingsRequest;
  using ResultType = Model::ListSchemaMappingsResult;
  using OutcomeType = Model::ListSchemaMappingsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSchemaMappings(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace EntityResolution
}  // namespace Aws
