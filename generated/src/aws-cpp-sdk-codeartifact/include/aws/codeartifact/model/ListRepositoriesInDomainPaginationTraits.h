/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifactServiceClientModel.h>
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/model/ListRepositoriesInDomainRequest.h>
#include <aws/codeartifact/model/ListRepositoriesInDomainResult.h>

namespace Aws {
namespace CodeArtifact {
namespace Pagination {

template <typename Client = CodeArtifactClient>
struct ListRepositoriesInDomainPaginationTraits {
  using RequestType = Model::ListRepositoriesInDomainRequest;
  using ResultType = Model::ListRepositoriesInDomainResult;
  using OutcomeType = Model::ListRepositoriesInDomainOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRepositoriesInDomain(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CodeArtifact
}  // namespace Aws
