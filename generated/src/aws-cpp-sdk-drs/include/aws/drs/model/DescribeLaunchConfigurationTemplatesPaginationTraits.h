/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/DrsServiceClientModel.h>
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/DescribeLaunchConfigurationTemplatesRequest.h>
#include <aws/drs/model/DescribeLaunchConfigurationTemplatesResult.h>

namespace Aws {
namespace drs {
namespace Pagination {

template <typename Client = DrsClient>
struct DescribeLaunchConfigurationTemplatesPaginationTraits {
  using RequestType = Model::DescribeLaunchConfigurationTemplatesRequest;
  using ResultType = Model::DescribeLaunchConfigurationTemplatesResult;
  using OutcomeType = Model::DescribeLaunchConfigurationTemplatesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeLaunchConfigurationTemplates(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace drs
}  // namespace Aws
