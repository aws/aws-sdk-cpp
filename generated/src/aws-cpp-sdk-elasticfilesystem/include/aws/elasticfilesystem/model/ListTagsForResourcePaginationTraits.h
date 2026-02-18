/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFSServiceClientModel.h>
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/model/ListTagsForResourceRequest.h>
#include <aws/elasticfilesystem/model/ListTagsForResourceResult.h>

namespace Aws {
namespace EFS {
namespace Pagination {

template <typename Client = EFSClient>
struct ListTagsForResourcePaginationTraits {
  using RequestType = Model::ListTagsForResourceRequest;
  using ResultType = Model::ListTagsForResourceResult;
  using OutcomeType = Model::ListTagsForResourceOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListTagsForResource(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace EFS
}  // namespace Aws
