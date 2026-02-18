/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilderServiceClientModel.h>
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/amplifyuibuilder/model/ExportThemesRequest.h>
#include <aws/amplifyuibuilder/model/ExportThemesResult.h>

namespace Aws {
namespace AmplifyUIBuilder {
namespace Pagination {

template <typename Client = AmplifyUIBuilderClient>
struct ExportThemesPaginationTraits {
  using RequestType = Model::ExportThemesRequest;
  using ResultType = Model::ExportThemesResult;
  using OutcomeType = Model::ExportThemesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ExportThemes(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AmplifyUIBuilder
}  // namespace Aws
