/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStreamServiceClientModel.h>
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/DescribeImagesRequest.h>
#include <aws/appstream/model/DescribeImagesResult.h>

namespace Aws {
namespace AppStream {
namespace Pagination {

template <typename Client = AppStreamClient>
struct DescribeImagesPaginationTraits {
  using RequestType = Model::DescribeImagesRequest;
  using ResultType = Model::DescribeImagesResult;
  using OutcomeType = Model::DescribeImagesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeImages(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AppStream
}  // namespace Aws
