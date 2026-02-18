/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifactServiceClientModel.h>
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/model/ListAllowedRepositoriesForGroupRequest.h>
#include <aws/codeartifact/model/ListAllowedRepositoriesForGroupResult.h>

namespace Aws {
namespace CodeArtifact {
namespace Pagination {

template <typename Client = CodeArtifactClient>
struct ListAllowedRepositoriesForGroupPaginationTraits {
  using RequestType = Model::ListAllowedRepositoriesForGroupRequest;
  using ResultType = Model::ListAllowedRepositoriesForGroupResult;
  using OutcomeType = Model::ListAllowedRepositoriesForGroupOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAllowedRepositoriesForGroup(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CodeArtifact
}  // namespace Aws
