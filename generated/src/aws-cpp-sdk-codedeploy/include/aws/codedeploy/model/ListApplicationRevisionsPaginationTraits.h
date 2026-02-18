/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeployServiceClientModel.h>
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/model/ListApplicationRevisionsRequest.h>
#include <aws/codedeploy/model/ListApplicationRevisionsResult.h>

namespace Aws {
namespace CodeDeploy {
namespace Pagination {

template <typename Client = CodeDeployClient>
struct ListApplicationRevisionsPaginationTraits {
  using RequestType = Model::ListApplicationRevisionsRequest;
  using ResultType = Model::ListApplicationRevisionsResult;
  using OutcomeType = Model::ListApplicationRevisionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListApplicationRevisions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace CodeDeploy
}  // namespace Aws
