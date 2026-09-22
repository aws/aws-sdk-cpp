/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmniServiceClientModel.h>
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/ListDomainAccessGrantsForOrganizationRequest.h>
#include <aws/cloudwatchomni/model/ListDomainAccessGrantsForOrganizationResult.h>

namespace Aws {
namespace CloudWatchOmni {
namespace Pagination {

template <typename Client = CloudWatchOmniClient>
struct ListDomainAccessGrantsForOrganizationPaginationTraits {
  using RequestType = Model::ListDomainAccessGrantsForOrganizationRequest;
  using ResultType = Model::ListDomainAccessGrantsForOrganizationResult;
  using OutcomeType = Model::ListDomainAccessGrantsForOrganizationOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDomainAccessGrantsForOrganization(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CloudWatchOmni
}  // namespace Aws
