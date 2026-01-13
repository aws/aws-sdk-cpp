/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuruServiceClientModel.h>
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/DescribeOrganizationResourceCollectionHealthRequest.h>
#include <aws/devops-guru/model/DescribeOrganizationResourceCollectionHealthResult.h>

namespace Aws {
namespace DevOpsGuru {
namespace Pagination {

template <typename Client = DevOpsGuruClient>
struct DescribeOrganizationResourceCollectionHealthPaginationTraits {
  using RequestType = Model::DescribeOrganizationResourceCollectionHealthRequest;
  using ResultType = Model::DescribeOrganizationResourceCollectionHealthResult;
  using OutcomeType = Model::DescribeOrganizationResourceCollectionHealthOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) {
    return client->DescribeOrganizationResourceCollectionHealth(request);
  }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace DevOpsGuru
}  // namespace Aws
