/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMRServiceClientModel.h>
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/ListReleaseLabelsRequest.h>
#include <aws/elasticmapreduce/model/ListReleaseLabelsResult.h>

namespace Aws {
namespace EMR {
namespace Pagination {

template <typename Client = EMRClient>
struct ListReleaseLabelsPaginationTraits {
  using RequestType = Model::ListReleaseLabelsRequest;
  using ResultType = Model::ListReleaseLabelsResult;
  using OutcomeType = Model::ListReleaseLabelsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListReleaseLabels(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace EMR
}  // namespace Aws
