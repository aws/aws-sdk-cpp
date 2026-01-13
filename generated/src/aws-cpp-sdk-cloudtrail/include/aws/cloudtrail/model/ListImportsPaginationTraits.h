/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrailServiceClientModel.h>
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/model/ListImportsRequest.h>
#include <aws/cloudtrail/model/ListImportsResult.h>

namespace Aws {
namespace CloudTrail {
namespace Pagination {

template <typename Client = CloudTrailClient>
struct ListImportsPaginationTraits {
  using RequestType = Model::ListImportsRequest;
  using ResultType = Model::ListImportsResult;
  using OutcomeType = Model::ListImportsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListImports(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CloudTrail
}  // namespace Aws
