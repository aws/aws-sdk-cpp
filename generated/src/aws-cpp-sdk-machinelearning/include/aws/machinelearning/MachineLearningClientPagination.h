/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/machinelearning/MachineLearningClient.h>
#include <aws/machinelearning/model/DescribeBatchPredictionsPaginationTraits.h>
#include <aws/machinelearning/model/DescribeDataSourcesPaginationTraits.h>
#include <aws/machinelearning/model/DescribeEvaluationsPaginationTraits.h>
#include <aws/machinelearning/model/DescribeMLModelsPaginationTraits.h>

namespace Aws {
namespace MachineLearning {

using DescribeBatchPredictionsPaginator =
    Aws::Utils::Pagination::Paginator<MachineLearningClient, Model::DescribeBatchPredictionsRequest,
                                      Pagination::DescribeBatchPredictionsPaginationTraits<MachineLearningClient>>;
using DescribeDataSourcesPaginator =
    Aws::Utils::Pagination::Paginator<MachineLearningClient, Model::DescribeDataSourcesRequest,
                                      Pagination::DescribeDataSourcesPaginationTraits<MachineLearningClient>>;
using DescribeEvaluationsPaginator =
    Aws::Utils::Pagination::Paginator<MachineLearningClient, Model::DescribeEvaluationsRequest,
                                      Pagination::DescribeEvaluationsPaginationTraits<MachineLearningClient>>;
using DescribeMLModelsPaginator = Aws::Utils::Pagination::Paginator<MachineLearningClient, Model::DescribeMLModelsRequest,
                                                                    Pagination::DescribeMLModelsPaginationTraits<MachineLearningClient>>;

}  // namespace MachineLearning
}  // namespace Aws
