/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVSServiceClientModel.h>
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/model/ListStreamKeysRequest.h>
#include <aws/ivs/model/ListStreamKeysResult.h>

namespace Aws {
namespace IVS {
namespace Pagination {

template <typename Client = IVSClient>
struct ListStreamKeysPaginationTraits {
  using RequestType = Model::ListStreamKeysRequest;
  using ResultType = Model::ListStreamKeysResult;
  using OutcomeType = Model::ListStreamKeysOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListStreamKeys(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace IVS
}  // namespace Aws
