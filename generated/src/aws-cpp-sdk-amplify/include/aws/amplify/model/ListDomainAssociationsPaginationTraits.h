/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/AmplifyServiceClientModel.h>
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/model/ListDomainAssociationsRequest.h>
#include <aws/amplify/model/ListDomainAssociationsResult.h>

namespace Aws {
namespace Amplify {
namespace Pagination {

template <typename Client = AmplifyClient>
struct ListDomainAssociationsPaginationTraits {
  using RequestType = Model::ListDomainAssociationsRequest;
  using ResultType = Model::ListDomainAssociationsResult;
  using OutcomeType = Model::ListDomainAssociationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDomainAssociations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Amplify
}  // namespace Aws
