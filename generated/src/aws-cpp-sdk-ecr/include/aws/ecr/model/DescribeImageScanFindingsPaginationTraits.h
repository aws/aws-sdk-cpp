/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECRServiceClientModel.h>
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/DescribeImageScanFindingsRequest.h>
#include <aws/ecr/model/DescribeImageScanFindingsResult.h>

namespace Aws {
namespace ECR {
namespace Pagination {

template <typename Client = ECRClient>
struct DescribeImageScanFindingsPaginationTraits {
  using RequestType = Model::DescribeImageScanFindingsRequest;
  using ResultType = Model::DescribeImageScanFindingsResult;
  using OutcomeType = Model::DescribeImageScanFindingsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeImageScanFindings(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ECR
}  // namespace Aws
