/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2ServiceClientModel.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/ListApplicationSnapshotsRequest.h>
#include <aws/kinesisanalyticsv2/model/ListApplicationSnapshotsResult.h>

namespace Aws {
namespace KinesisAnalyticsV2 {
namespace Pagination {

template <typename Client = KinesisAnalyticsV2Client>
struct ListApplicationSnapshotsPaginationTraits {
  using RequestType = Model::ListApplicationSnapshotsRequest;
  using ResultType = Model::ListApplicationSnapshotsResult;
  using OutcomeType = Model::ListApplicationSnapshotsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListApplicationSnapshots(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
