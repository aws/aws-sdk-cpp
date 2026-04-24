/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/ArtifactServiceClientModel.h>
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/artifact/model/ListCustomerAgreementsRequest.h>
#include <aws/artifact/model/ListCustomerAgreementsResult.h>

namespace Aws {
namespace Artifact {
namespace Pagination {

template <typename Client = ArtifactClient>
struct ListCustomerAgreementsPaginationTraits {
  using RequestType = Model::ListCustomerAgreementsRequest;
  using ResultType = Model::ListCustomerAgreementsResult;
  using OutcomeType = Model::ListCustomerAgreementsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCustomerAgreements(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Artifact
}  // namespace Aws
