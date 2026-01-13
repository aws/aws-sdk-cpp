/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublicServiceClientModel.h>
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/ecr-public/model/DescribeRegistriesRequest.h>
#include <aws/ecr-public/model/DescribeRegistriesResult.h>

namespace Aws {
namespace ECRPublic {
namespace Pagination {

template <typename Client = ECRPublicClient>
struct DescribeRegistriesPaginationTraits {
  using RequestType = Model::DescribeRegistriesRequest;
  using ResultType = Model::DescribeRegistriesResult;
  using OutcomeType = Model::DescribeRegistriesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeRegistries(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ECRPublic
}  // namespace Aws
