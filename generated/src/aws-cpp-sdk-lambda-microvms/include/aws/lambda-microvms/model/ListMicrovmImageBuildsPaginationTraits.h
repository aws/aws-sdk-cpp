/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda-microvms/LambdaMicrovmsServiceClientModel.h>
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>
#include <aws/lambda-microvms/model/ListMicrovmImageBuildsRequest.h>
#include <aws/lambda-microvms/model/ListMicrovmImageBuildsResult.h>

namespace Aws {
namespace LambdaMicrovms {
namespace Pagination {

template <typename Client = LambdaMicrovmsClient>
struct ListMicrovmImageBuildsPaginationTraits {
  using RequestType = Model::ListMicrovmImageBuildsRequest;
  using ResultType = Model::ListMicrovmImageBuildsResult;
  using OutcomeType = Model::ListMicrovmImageBuildsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListMicrovmImageBuilds(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace LambdaMicrovms
}  // namespace Aws
