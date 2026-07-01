/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/ArtifactServiceClientModel.h>
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/artifact/model/ListComplianceInquiryQueriesRequest.h>
#include <aws/artifact/model/ListComplianceInquiryQueriesResult.h>

namespace Aws {
namespace Artifact {
namespace Pagination {

template <typename Client = ArtifactClient>
struct ListComplianceInquiryQueriesPaginationTraits {
  using RequestType = Model::ListComplianceInquiryQueriesRequest;
  using ResultType = Model::ListComplianceInquiryQueriesResult;
  using OutcomeType = Model::ListComplianceInquiryQueriesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListComplianceInquiryQueries(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Artifact
}  // namespace Aws
