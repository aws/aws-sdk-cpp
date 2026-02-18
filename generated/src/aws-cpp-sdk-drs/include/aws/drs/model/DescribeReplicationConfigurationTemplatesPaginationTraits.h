/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/DrsServiceClientModel.h>
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/DescribeReplicationConfigurationTemplatesRequest.h>
#include <aws/drs/model/DescribeReplicationConfigurationTemplatesResult.h>

namespace Aws {
namespace drs {
namespace Pagination {

template <typename Client = DrsClient>
struct DescribeReplicationConfigurationTemplatesPaginationTraits {
  using RequestType = Model::DescribeReplicationConfigurationTemplatesRequest;
  using ResultType = Model::DescribeReplicationConfigurationTemplatesResult;
  using OutcomeType = Model::DescribeReplicationConfigurationTemplatesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) {
    return client->DescribeReplicationConfigurationTemplates(request);
  }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace drs
}  // namespace Aws
