/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuruServiceClientModel.h>
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/DescribeResourceCollectionHealthRequest.h>
#include <aws/devops-guru/model/DescribeResourceCollectionHealthResult.h>

namespace Aws {
namespace DevOpsGuru {
namespace Pagination {

template <typename Client = DevOpsGuruClient>
struct DescribeResourceCollectionHealthPaginationTraits {
  using RequestType = Model::DescribeResourceCollectionHealthRequest;
  using ResultType = Model::DescribeResourceCollectionHealthResult;
  using OutcomeType = Model::DescribeResourceCollectionHealthOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeResourceCollectionHealth(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace DevOpsGuru
}  // namespace Aws
