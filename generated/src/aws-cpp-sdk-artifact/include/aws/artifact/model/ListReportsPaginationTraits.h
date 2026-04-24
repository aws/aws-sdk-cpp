/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/ArtifactServiceClientModel.h>
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/artifact/model/ListReportsRequest.h>
#include <aws/artifact/model/ListReportsResult.h>

namespace Aws {
namespace Artifact {
namespace Pagination {

template <typename Client = ArtifactClient>
struct ListReportsPaginationTraits {
  using RequestType = Model::ListReportsRequest;
  using ResultType = Model::ListReportsResult;
  using OutcomeType = Model::ListReportsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListReports(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Artifact
}  // namespace Aws
