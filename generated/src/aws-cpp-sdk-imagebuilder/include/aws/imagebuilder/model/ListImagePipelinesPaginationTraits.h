/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/ImagebuilderServiceClientModel.h>
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/ListImagePipelinesRequest.h>
#include <aws/imagebuilder/model/ListImagePipelinesResult.h>

namespace Aws {
namespace imagebuilder {
namespace Pagination {

template <typename Client = ImagebuilderClient>
struct ListImagePipelinesPaginationTraits {
  using RequestType = Model::ListImagePipelinesRequest;
  using ResultType = Model::ListImagePipelinesResult;
  using OutcomeType = Model::ListImagePipelinesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListImagePipelines(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace imagebuilder
}  // namespace Aws
