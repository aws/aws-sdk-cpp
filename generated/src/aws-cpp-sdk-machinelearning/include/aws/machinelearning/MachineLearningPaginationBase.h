/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/machinelearning/model/DescribeBatchPredictionsPaginationTraits.h>
#include <aws/machinelearning/model/DescribeDataSourcesPaginationTraits.h>
#include <aws/machinelearning/model/DescribeEvaluationsPaginationTraits.h>
#include <aws/machinelearning/model/DescribeMLModelsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace MachineLearning {

class MachineLearningClient;

template <typename DerivedClient>
class MachineLearningPaginationBase {
 public:
  /**
   * Create a paginator for DescribeBatchPredictions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeBatchPredictionsRequest,
                                    Pagination::DescribeBatchPredictionsPaginationTraits<DerivedClient>>
  DescribeBatchPredictionsPaginator(const Model::DescribeBatchPredictionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeBatchPredictionsRequest,
                                             Pagination::DescribeBatchPredictionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeDataSources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDataSourcesRequest,
                                    Pagination::DescribeDataSourcesPaginationTraits<DerivedClient>>
  DescribeDataSourcesPaginator(const Model::DescribeDataSourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeDataSourcesRequest,
                                             Pagination::DescribeDataSourcesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeEvaluations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEvaluationsRequest,
                                    Pagination::DescribeEvaluationsPaginationTraits<DerivedClient>>
  DescribeEvaluationsPaginator(const Model::DescribeEvaluationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeEvaluationsRequest,
                                             Pagination::DescribeEvaluationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeMLModels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMLModelsRequest,
                                    Pagination::DescribeMLModelsPaginationTraits<DerivedClient>>
  DescribeMLModelsPaginator(const Model::DescribeMLModelsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeMLModelsRequest,
                                             Pagination::DescribeMLModelsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }
};
}  // namespace MachineLearning
}  // namespace Aws
