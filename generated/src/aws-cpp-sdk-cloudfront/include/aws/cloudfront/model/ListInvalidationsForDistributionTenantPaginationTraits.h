/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFrontServiceClientModel.h>
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/model/ListInvalidationsForDistributionTenant2020_05_31Request.h>
#include <aws/cloudfront/model/ListInvalidationsForDistributionTenant2020_05_31Result.h>

namespace Aws {
namespace CloudFront {
namespace Pagination {

template <typename Client = CloudFrontClient>
struct ListInvalidationsForDistributionTenantPaginationTraits {
  using RequestType = Model::ListInvalidationsForDistributionTenant2020_05_31Request;
  using ResultType = Model::ListInvalidationsForDistributionTenant2020_05_31Result;
  using OutcomeType = Model::ListInvalidationsForDistributionTenant2020_05_31Outcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) {
    return client->ListInvalidationsForDistributionTenant2020_05_31(request);
  }

  static bool HasMoreResults(const ResultType& result) { return !result.GetInvalidationList().GetNextMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) {
    request.SetMarker(result.GetInvalidationList().GetNextMarker());
  }
};

}  // namespace Pagination
}  // namespace CloudFront
}  // namespace Aws
