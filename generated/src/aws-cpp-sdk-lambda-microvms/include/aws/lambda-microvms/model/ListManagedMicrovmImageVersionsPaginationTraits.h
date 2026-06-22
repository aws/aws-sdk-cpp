/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda-microvms/LambdaMicrovmsServiceClientModel.h>
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>
#include <aws/lambda-microvms/model/ListManagedMicrovmImageVersionsRequest.h>
#include <aws/lambda-microvms/model/ListManagedMicrovmImageVersionsResult.h>

namespace Aws {
namespace LambdaMicrovms {
namespace Pagination {

template <typename Client = LambdaMicrovmsClient>
struct ListManagedMicrovmImageVersionsPaginationTraits {
  using RequestType = Model::ListManagedMicrovmImageVersionsRequest;
  using ResultType = Model::ListManagedMicrovmImageVersionsResult;
  using OutcomeType = Model::ListManagedMicrovmImageVersionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListManagedMicrovmImageVersions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace LambdaMicrovms
}  // namespace Aws
