/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2ServiceClientModel.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/ListApplicationVersionsRequest.h>
#include <aws/kinesisanalyticsv2/model/ListApplicationVersionsResult.h>

namespace Aws {
namespace KinesisAnalyticsV2 {
namespace Pagination {

template <typename Client = KinesisAnalyticsV2Client>
struct ListApplicationVersionsPaginationTraits {
  using RequestType = Model::ListApplicationVersionsRequest;
  using ResultType = Model::ListApplicationVersionsResult;
  using OutcomeType = Model::ListApplicationVersionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListApplicationVersions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
