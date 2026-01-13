/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/ImagebuilderServiceClientModel.h>
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/ListImageRecipesRequest.h>
#include <aws/imagebuilder/model/ListImageRecipesResult.h>

namespace Aws {
namespace imagebuilder {
namespace Pagination {

template <typename Client = ImagebuilderClient>
struct ListImageRecipesPaginationTraits {
  using RequestType = Model::ListImageRecipesRequest;
  using ResultType = Model::ListImageRecipesResult;
  using OutcomeType = Model::ListImageRecipesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListImageRecipes(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace imagebuilder
}  // namespace Aws
