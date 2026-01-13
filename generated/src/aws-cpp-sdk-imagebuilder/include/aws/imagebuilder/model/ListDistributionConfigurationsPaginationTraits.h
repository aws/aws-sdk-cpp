/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/ImagebuilderServiceClientModel.h>
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/ListDistributionConfigurationsRequest.h>
#include <aws/imagebuilder/model/ListDistributionConfigurationsResult.h>

namespace Aws {
namespace imagebuilder {
namespace Pagination {

template <typename Client = ImagebuilderClient>
struct ListDistributionConfigurationsPaginationTraits {
  using RequestType = Model::ListDistributionConfigurationsRequest;
  using ResultType = Model::ListDistributionConfigurationsResult;
  using OutcomeType = Model::ListDistributionConfigurationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDistributionConfigurations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace imagebuilder
}  // namespace Aws
