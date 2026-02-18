/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigServiceServiceClientModel.h>
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/model/GetAggregateComplianceDetailsByConfigRuleRequest.h>
#include <aws/config/model/GetAggregateComplianceDetailsByConfigRuleResult.h>

namespace Aws {
namespace ConfigService {
namespace Pagination {

template <typename Client = ConfigServiceClient>
struct GetAggregateComplianceDetailsByConfigRulePaginationTraits {
  using RequestType = Model::GetAggregateComplianceDetailsByConfigRuleRequest;
  using ResultType = Model::GetAggregateComplianceDetailsByConfigRuleResult;
  using OutcomeType = Model::GetAggregateComplianceDetailsByConfigRuleOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) {
    return client->GetAggregateComplianceDetailsByConfigRule(request);
  }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ConfigService
}  // namespace Aws
