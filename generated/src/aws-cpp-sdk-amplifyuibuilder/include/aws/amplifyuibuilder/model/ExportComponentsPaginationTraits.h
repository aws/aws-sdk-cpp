/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilderServiceClientModel.h>
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/amplifyuibuilder/model/ExportComponentsRequest.h>
#include <aws/amplifyuibuilder/model/ExportComponentsResult.h>

namespace Aws {
namespace AmplifyUIBuilder {
namespace Pagination {

template <typename Client = AmplifyUIBuilderClient>
struct ExportComponentsPaginationTraits {
  using RequestType = Model::ExportComponentsRequest;
  using ResultType = Model::ExportComponentsResult;
  using OutcomeType = Model::ExportComponentsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ExportComponents(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AmplifyUIBuilder
}  // namespace Aws
