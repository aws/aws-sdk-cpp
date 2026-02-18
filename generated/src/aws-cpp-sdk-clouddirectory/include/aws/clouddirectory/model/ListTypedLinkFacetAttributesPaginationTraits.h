/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectoryServiceClientModel.h>
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/ListTypedLinkFacetAttributesRequest.h>
#include <aws/clouddirectory/model/ListTypedLinkFacetAttributesResult.h>

namespace Aws {
namespace CloudDirectory {
namespace Pagination {

template <typename Client = CloudDirectoryClient>
struct ListTypedLinkFacetAttributesPaginationTraits {
  using RequestType = Model::ListTypedLinkFacetAttributesRequest;
  using ResultType = Model::ListTypedLinkFacetAttributesResult;
  using OutcomeType = Model::ListTypedLinkFacetAttributesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListTypedLinkFacetAttributes(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CloudDirectory
}  // namespace Aws
