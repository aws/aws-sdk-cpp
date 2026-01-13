/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/ImagebuilderServiceClientModel.h>
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/ListWorkflowBuildVersionsRequest.h>
#include <aws/imagebuilder/model/ListWorkflowBuildVersionsResult.h>

namespace Aws {
namespace imagebuilder {
namespace Pagination {

template <typename Client = ImagebuilderClient>
struct ListWorkflowBuildVersionsPaginationTraits {
  using RequestType = Model::ListWorkflowBuildVersionsRequest;
  using ResultType = Model::ListWorkflowBuildVersionsResult;
  using OutcomeType = Model::ListWorkflowBuildVersionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListWorkflowBuildVersions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace imagebuilder
}  // namespace Aws
