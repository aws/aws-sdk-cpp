/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/HealthServiceClientModel.h>
#include <aws/health/Health_EXPORTS.h>
#include <aws/health/model/DescribeAffectedEntitiesForOrganizationRequest.h>
#include <aws/health/model/DescribeAffectedEntitiesForOrganizationResult.h>

namespace Aws {
namespace Health {
namespace Pagination {

template <typename Client = HealthClient>
struct DescribeAffectedEntitiesForOrganizationPaginationTraits {
  using RequestType = Model::DescribeAffectedEntitiesForOrganizationRequest;
  using ResultType = Model::DescribeAffectedEntitiesForOrganizationResult;
  using OutcomeType = Model::DescribeAffectedEntitiesForOrganizationOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeAffectedEntitiesForOrganization(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Health
}  // namespace Aws
