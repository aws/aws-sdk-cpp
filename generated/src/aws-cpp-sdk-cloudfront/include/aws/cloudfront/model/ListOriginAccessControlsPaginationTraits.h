/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFrontServiceClientModel.h>
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/ListOriginAccessControls2020_05_31Request.h>
#include <aws/cloudfront/model/ListOriginAccessControls2020_05_31Result.h>

namespace Aws {
namespace CloudFront {
namespace Pagination {

template <typename Client = CloudFrontClient>
struct ListOriginAccessControlsPaginationTraits {
  using RequestType = Model::ListOriginAccessControls2020_05_31Request;
  using ResultType = Model::ListOriginAccessControls2020_05_31Result;
  using OutcomeType = Model::ListOriginAccessControls2020_05_31Outcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListOriginAccessControls2020_05_31(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetOriginAccessControlList().GetNextMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) {
    request.SetMarker(result.GetOriginAccessControlList().GetNextMarker());
  }
};

}  // namespace Pagination
}  // namespace CloudFront
}  // namespace Aws
