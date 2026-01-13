/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECRServiceClientModel.h>
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/DescribeRepositoryCreationTemplatesRequest.h>
#include <aws/ecr/model/DescribeRepositoryCreationTemplatesResult.h>

namespace Aws {
namespace ECR {
namespace Pagination {

template <typename Client = ECRClient>
struct DescribeRepositoryCreationTemplatesPaginationTraits {
  using RequestType = Model::DescribeRepositoryCreationTemplatesRequest;
  using ResultType = Model::DescribeRepositoryCreationTemplatesResult;
  using OutcomeType = Model::DescribeRepositoryCreationTemplatesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeRepositoryCreationTemplates(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ECR
}  // namespace Aws
