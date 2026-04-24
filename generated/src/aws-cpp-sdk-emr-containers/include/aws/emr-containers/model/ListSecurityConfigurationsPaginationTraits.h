/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainersServiceClientModel.h>
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/model/ListSecurityConfigurationsRequest.h>
#include <aws/emr-containers/model/ListSecurityConfigurationsResult.h>

namespace Aws {
namespace EMRContainers {
namespace Pagination {

template <typename Client = EMRContainersClient>
struct ListSecurityConfigurationsPaginationTraits {
  using RequestType = Model::ListSecurityConfigurationsRequest;
  using ResultType = Model::ListSecurityConfigurationsResult;
  using OutcomeType = Model::ListSecurityConfigurationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSecurityConfigurations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace EMRContainers
}  // namespace Aws
