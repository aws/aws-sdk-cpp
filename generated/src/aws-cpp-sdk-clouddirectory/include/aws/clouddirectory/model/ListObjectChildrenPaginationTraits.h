/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectoryServiceClientModel.h>
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/ListObjectChildrenRequest.h>
#include <aws/clouddirectory/model/ListObjectChildrenResult.h>

namespace Aws {
namespace CloudDirectory {
namespace Pagination {

template <typename Client = CloudDirectoryClient>
struct ListObjectChildrenPaginationTraits {
  using RequestType = Model::ListObjectChildrenRequest;
  using ResultType = Model::ListObjectChildrenResult;
  using OutcomeType = Model::ListObjectChildrenOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListObjectChildren(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CloudDirectory
}  // namespace Aws
