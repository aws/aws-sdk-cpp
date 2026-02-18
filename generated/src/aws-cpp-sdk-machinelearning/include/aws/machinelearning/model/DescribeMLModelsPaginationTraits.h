/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearningServiceClientModel.h>
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/machinelearning/model/DescribeMLModelsRequest.h>
#include <aws/machinelearning/model/DescribeMLModelsResult.h>

namespace Aws {
namespace MachineLearning {
namespace Pagination {

template <typename Client = MachineLearningClient>
struct DescribeMLModelsPaginationTraits {
  using RequestType = Model::DescribeMLModelsRequest;
  using ResultType = Model::DescribeMLModelsResult;
  using OutcomeType = Model::DescribeMLModelsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeMLModels(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MachineLearning
}  // namespace Aws
