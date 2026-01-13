/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectoryServiceClientModel.h>
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/ListFacetAttributesRequest.h>
#include <aws/clouddirectory/model/ListFacetAttributesResult.h>

namespace Aws {
namespace CloudDirectory {
namespace Pagination {

template <typename Client = CloudDirectoryClient>
struct ListFacetAttributesPaginationTraits {
  using RequestType = Model::ListFacetAttributesRequest;
  using ResultType = Model::ListFacetAttributesResult;
  using OutcomeType = Model::ListFacetAttributesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListFacetAttributes(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CloudDirectory
}  // namespace Aws
