/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMSServiceClientModel.h>
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/model/ListResourceTagsRequest.h>
#include <aws/kms/model/ListResourceTagsResult.h>

namespace Aws {
namespace KMS {
namespace Pagination {

template <typename Client = KMSClient>
struct ListResourceTagsPaginationTraits {
  using RequestType = Model::ListResourceTagsRequest;
  using ResultType = Model::ListResourceTagsResult;
  using OutcomeType = Model::ListResourceTagsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListResourceTags(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetNextMarker()); }
};

}  // namespace Pagination
}  // namespace KMS
}  // namespace Aws
