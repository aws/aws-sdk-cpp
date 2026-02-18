/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMediaServiceClientModel.h>
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMedia_EXPORTS.h>
#include <aws/kinesis-video-archived-media/model/ListFragmentsRequest.h>
#include <aws/kinesis-video-archived-media/model/ListFragmentsResult.h>

namespace Aws {
namespace KinesisVideoArchivedMedia {
namespace Pagination {

template <typename Client = KinesisVideoArchivedMediaClient>
struct ListFragmentsPaginationTraits {
  using RequestType = Model::ListFragmentsRequest;
  using ResultType = Model::ListFragmentsResult;
  using OutcomeType = Model::ListFragmentsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListFragments(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace KinesisVideoArchivedMedia
}  // namespace Aws
