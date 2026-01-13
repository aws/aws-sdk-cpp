/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilderServiceClientModel.h>
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/amplifyuibuilder/model/ExportFormsRequest.h>
#include <aws/amplifyuibuilder/model/ExportFormsResult.h>

namespace Aws {
namespace AmplifyUIBuilder {
namespace Pagination {

template <typename Client = AmplifyUIBuilderClient>
struct ExportFormsPaginationTraits {
  using RequestType = Model::ExportFormsRequest;
  using ResultType = Model::ExportFormsResult;
  using OutcomeType = Model::ExportFormsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ExportForms(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace AmplifyUIBuilder
}  // namespace Aws
