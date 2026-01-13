/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryServiceServiceClientModel.h>
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/model/DescribeDirectoriesRequest.h>
#include <aws/ds/model/DescribeDirectoriesResult.h>

namespace Aws {
namespace DirectoryService {
namespace Pagination {

template <typename Client = DirectoryServiceClient>
struct DescribeDirectoriesPaginationTraits {
  using RequestType = Model::DescribeDirectoriesRequest;
  using ResultType = Model::DescribeDirectoriesResult;
  using OutcomeType = Model::DescribeDirectoriesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeDirectories(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace DirectoryService
}  // namespace Aws
