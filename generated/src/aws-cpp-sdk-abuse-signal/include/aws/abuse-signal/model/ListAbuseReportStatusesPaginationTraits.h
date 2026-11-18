/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/abuse-signal/AbuseSignalServiceClientModel.h>
#include <aws/abuse-signal/AbuseSignal_EXPORTS.h>
#include <aws/abuse-signal/model/ListAbuseReportStatusesRequest.h>
#include <aws/abuse-signal/model/ListAbuseReportStatusesResult.h>

namespace Aws {
namespace AbuseSignal {
namespace Pagination {

template <typename Client = AbuseSignalClient>
struct ListAbuseReportStatusesPaginationTraits {
  using RequestType = Model::ListAbuseReportStatusesRequest;
  using ResultType = Model::ListAbuseReportStatusesResult;
  using OutcomeType = Model::ListAbuseReportStatusesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAbuseReportStatuses(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AbuseSignal
}  // namespace Aws
