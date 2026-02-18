/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideoServiceClientModel.h>
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/kinesisvideo/model/DescribeMappedResourceConfigurationRequest.h>
#include <aws/kinesisvideo/model/DescribeMappedResourceConfigurationResult.h>

namespace Aws {
namespace KinesisVideo {
namespace Pagination {

template <typename Client = KinesisVideoClient>
struct DescribeMappedResourceConfigurationPaginationTraits {
  using RequestType = Model::DescribeMappedResourceConfigurationRequest;
  using ResultType = Model::DescribeMappedResourceConfigurationResult;
  using OutcomeType = Model::DescribeMappedResourceConfigurationOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeMappedResourceConfiguration(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace KinesisVideo
}  // namespace Aws
