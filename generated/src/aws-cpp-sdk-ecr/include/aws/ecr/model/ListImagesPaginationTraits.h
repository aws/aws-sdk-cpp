/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECRServiceClientModel.h>
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/ListImagesRequest.h>
#include <aws/ecr/model/ListImagesResult.h>

namespace Aws {
namespace ECR {
namespace Pagination {

template <typename Client = ECRClient>
struct ListImagesPaginationTraits {
  using RequestType = Model::ListImagesRequest;
  using ResultType = Model::ListImagesResult;
  using OutcomeType = Model::ListImagesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListImages(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ECR
}  // namespace Aws
