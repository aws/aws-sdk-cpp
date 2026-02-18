/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMediaServiceClientModel.h>
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMedia_EXPORTS.h>
#include <aws/kinesis-video-archived-media/model/GetImagesRequest.h>
#include <aws/kinesis-video-archived-media/model/GetImagesResult.h>

namespace Aws {
namespace KinesisVideoArchivedMedia {
namespace Pagination {

template <typename Client = KinesisVideoArchivedMediaClient>
struct GetImagesPaginationTraits {
  using RequestType = Model::GetImagesRequest;
  using ResultType = Model::GetImagesResult;
  using OutcomeType = Model::GetImagesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetImages(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace KinesisVideoArchivedMedia
}  // namespace Aws
