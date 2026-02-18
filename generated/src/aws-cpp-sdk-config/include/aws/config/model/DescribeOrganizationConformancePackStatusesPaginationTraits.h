/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigServiceServiceClientModel.h>
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/DescribeOrganizationConformancePackStatusesRequest.h>
#include <aws/config/model/DescribeOrganizationConformancePackStatusesResult.h>

namespace Aws {
namespace ConfigService {
namespace Pagination {

template <typename Client = ConfigServiceClient>
struct DescribeOrganizationConformancePackStatusesPaginationTraits {
  using RequestType = Model::DescribeOrganizationConformancePackStatusesRequest;
  using ResultType = Model::DescribeOrganizationConformancePackStatusesResult;
  using OutcomeType = Model::DescribeOrganizationConformancePackStatusesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) {
    return client->DescribeOrganizationConformancePackStatuses(request);
  }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ConfigService
}  // namespace Aws
