/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublicServiceClientModel.h>
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/ecr-public/model/DescribeRepositoriesRequest.h>
#include <aws/ecr-public/model/DescribeRepositoriesResult.h>

namespace Aws {
namespace ECRPublic {
namespace Pagination {

template <typename Client = ECRPublicClient>
struct DescribeRepositoriesPaginationTraits {
  using RequestType = Model::DescribeRepositoriesRequest;
  using ResultType = Model::DescribeRepositoriesResult;
  using OutcomeType = Model::DescribeRepositoriesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeRepositories(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ECRPublic
}  // namespace Aws
