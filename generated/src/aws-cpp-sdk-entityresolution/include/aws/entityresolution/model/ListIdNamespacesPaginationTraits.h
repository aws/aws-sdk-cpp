/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolutionServiceClientModel.h>
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/entityresolution/model/ListIdNamespacesRequest.h>
#include <aws/entityresolution/model/ListIdNamespacesResult.h>

namespace Aws {
namespace EntityResolution {
namespace Pagination {

template <typename Client = EntityResolutionClient>
struct ListIdNamespacesPaginationTraits {
  using RequestType = Model::ListIdNamespacesRequest;
  using ResultType = Model::ListIdNamespacesResult;
  using OutcomeType = Model::ListIdNamespacesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListIdNamespaces(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace EntityResolution
}  // namespace Aws
