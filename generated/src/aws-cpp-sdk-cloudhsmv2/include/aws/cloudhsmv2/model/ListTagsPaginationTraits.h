/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2ServiceClientModel.h>
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/cloudhsmv2/model/ListTagsRequest.h>
#include <aws/cloudhsmv2/model/ListTagsResult.h>

namespace Aws {
namespace CloudHSMV2 {
namespace Pagination {

template <typename Client = CloudHSMV2Client>
struct ListTagsPaginationTraits {
  using RequestType = Model::ListTagsRequest;
  using ResultType = Model::ListTagsResult;
  using OutcomeType = Model::ListTagsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListTags(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CloudHSMV2
}  // namespace Aws
