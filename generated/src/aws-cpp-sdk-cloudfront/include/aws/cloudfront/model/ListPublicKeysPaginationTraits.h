/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFrontServiceClientModel.h>
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/ListPublicKeys2020_05_31Request.h>
#include <aws/cloudfront/model/ListPublicKeys2020_05_31Result.h>

namespace Aws {
namespace CloudFront {
namespace Pagination {

template <typename Client = CloudFrontClient>
struct ListPublicKeysPaginationTraits {
  using RequestType = Model::ListPublicKeys2020_05_31Request;
  using ResultType = Model::ListPublicKeys2020_05_31Result;
  using OutcomeType = Model::ListPublicKeys2020_05_31Outcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListPublicKeys2020_05_31(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetPublicKeyList().GetNextMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) {
    request.SetMarker(result.GetPublicKeyList().GetNextMarker());
  }
};

}  // namespace Pagination
}  // namespace CloudFront
}  // namespace Aws
