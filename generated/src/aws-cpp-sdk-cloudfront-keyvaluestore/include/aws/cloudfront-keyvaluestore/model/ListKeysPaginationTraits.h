/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStoreServiceClientModel.h>
#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStore_EXPORTS.h>
#include <aws/cloudfront-keyvaluestore/model/ListKeysRequest.h>
#include <aws/cloudfront-keyvaluestore/model/ListKeysResult.h>

namespace Aws {
namespace CloudFrontKeyValueStore {
namespace Pagination {

template <typename Client = CloudFrontKeyValueStoreClient>
struct ListKeysPaginationTraits {
  using RequestType = Model::ListKeysRequest;
  using ResultType = Model::ListKeysResult;
  using OutcomeType = Model::ListKeysOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListKeys(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CloudFrontKeyValueStore
}  // namespace Aws
