/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspacesstreams/KeyspacesStreamsServiceClientModel.h>
#include <aws/keyspacesstreams/KeyspacesStreams_EXPORTS.h>
#include <aws/keyspacesstreams/model/GetStreamRequest.h>
#include <aws/keyspacesstreams/model/GetStreamResult.h>

namespace Aws {
namespace KeyspacesStreams {
namespace Pagination {

template <typename Client = KeyspacesStreamsClient>
struct GetStreamPaginationTraits {
  using RequestType = Model::GetStreamRequest;
  using ResultType = Model::GetStreamResult;
  using OutcomeType = Model::GetStreamOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->GetStream(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace KeyspacesStreams
}  // namespace Aws
