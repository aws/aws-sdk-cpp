/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryServiceServiceClientModel.h>
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/model/DescribeUpdateDirectoryRequest.h>
#include <aws/ds/model/DescribeUpdateDirectoryResult.h>

namespace Aws {
namespace DirectoryService {
namespace Pagination {

template <typename Client = DirectoryServiceClient>
struct DescribeUpdateDirectoryPaginationTraits {
  using RequestType = Model::DescribeUpdateDirectoryRequest;
  using ResultType = Model::DescribeUpdateDirectoryResult;
  using OutcomeType = Model::DescribeUpdateDirectoryOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeUpdateDirectory(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace DirectoryService
}  // namespace Aws
