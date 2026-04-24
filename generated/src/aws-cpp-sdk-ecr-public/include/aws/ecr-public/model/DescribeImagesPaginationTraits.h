/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublicServiceClientModel.h>
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/ecr-public/model/DescribeImagesRequest.h>
#include <aws/ecr-public/model/DescribeImagesResult.h>

namespace Aws {
namespace ECRPublic {
namespace Pagination {

template <typename Client = ECRPublicClient>
struct DescribeImagesPaginationTraits {
  using RequestType = Model::DescribeImagesRequest;
  using ResultType = Model::DescribeImagesResult;
  using OutcomeType = Model::DescribeImagesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeImages(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ECRPublic
}  // namespace Aws
