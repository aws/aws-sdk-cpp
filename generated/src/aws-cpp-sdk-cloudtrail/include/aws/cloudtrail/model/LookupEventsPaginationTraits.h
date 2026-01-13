/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrailServiceClientModel.h>
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/model/LookupEventsRequest.h>
#include <aws/cloudtrail/model/LookupEventsResult.h>

namespace Aws {
namespace CloudTrail {
namespace Pagination {

template <typename Client = CloudTrailClient>
struct LookupEventsPaginationTraits {
  using RequestType = Model::LookupEventsRequest;
  using ResultType = Model::LookupEventsResult;
  using OutcomeType = Model::LookupEventsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->LookupEvents(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CloudTrail
}  // namespace Aws
