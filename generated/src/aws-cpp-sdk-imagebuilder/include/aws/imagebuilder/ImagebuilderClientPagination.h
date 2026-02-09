/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/imagebuilder/ImagebuilderClient.h>
#include <aws/imagebuilder/model/ListComponentBuildVersionsPaginationTraits.h>
#include <aws/imagebuilder/model/ListComponentsPaginationTraits.h>
#include <aws/imagebuilder/model/ListContainerRecipesPaginationTraits.h>
#include <aws/imagebuilder/model/ListDistributionConfigurationsPaginationTraits.h>
#include <aws/imagebuilder/model/ListImageBuildVersionsPaginationTraits.h>
#include <aws/imagebuilder/model/ListImagePackagesPaginationTraits.h>
#include <aws/imagebuilder/model/ListImagePipelineImagesPaginationTraits.h>
#include <aws/imagebuilder/model/ListImagePipelinesPaginationTraits.h>
#include <aws/imagebuilder/model/ListImageRecipesPaginationTraits.h>
#include <aws/imagebuilder/model/ListImageScanFindingAggregationsPaginationTraits.h>
#include <aws/imagebuilder/model/ListImageScanFindingsPaginationTraits.h>
#include <aws/imagebuilder/model/ListImagesPaginationTraits.h>
#include <aws/imagebuilder/model/ListInfrastructureConfigurationsPaginationTraits.h>
#include <aws/imagebuilder/model/ListLifecycleExecutionResourcesPaginationTraits.h>
#include <aws/imagebuilder/model/ListLifecycleExecutionsPaginationTraits.h>
#include <aws/imagebuilder/model/ListLifecyclePoliciesPaginationTraits.h>
#include <aws/imagebuilder/model/ListWaitingWorkflowStepsPaginationTraits.h>
#include <aws/imagebuilder/model/ListWorkflowBuildVersionsPaginationTraits.h>
#include <aws/imagebuilder/model/ListWorkflowExecutionsPaginationTraits.h>
#include <aws/imagebuilder/model/ListWorkflowStepExecutionsPaginationTraits.h>
#include <aws/imagebuilder/model/ListWorkflowsPaginationTraits.h>

namespace Aws {
namespace imagebuilder {

using ListComponentBuildVersionsPaginator =
    Aws::Utils::Pagination::Paginator<ImagebuilderClient, Model::ListComponentBuildVersionsRequest,
                                      Pagination::ListComponentBuildVersionsPaginationTraits<ImagebuilderClient>>;
using ListComponentsPaginator = Aws::Utils::Pagination::Paginator<ImagebuilderClient, Model::ListComponentsRequest,
                                                                  Pagination::ListComponentsPaginationTraits<ImagebuilderClient>>;
using ListContainerRecipesPaginator =
    Aws::Utils::Pagination::Paginator<ImagebuilderClient, Model::ListContainerRecipesRequest,
                                      Pagination::ListContainerRecipesPaginationTraits<ImagebuilderClient>>;
using ListDistributionConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<ImagebuilderClient, Model::ListDistributionConfigurationsRequest,
                                      Pagination::ListDistributionConfigurationsPaginationTraits<ImagebuilderClient>>;
using ListImageBuildVersionsPaginator =
    Aws::Utils::Pagination::Paginator<ImagebuilderClient, Model::ListImageBuildVersionsRequest,
                                      Pagination::ListImageBuildVersionsPaginationTraits<ImagebuilderClient>>;
using ListImagePackagesPaginator = Aws::Utils::Pagination::Paginator<ImagebuilderClient, Model::ListImagePackagesRequest,
                                                                     Pagination::ListImagePackagesPaginationTraits<ImagebuilderClient>>;
using ListImagePipelineImagesPaginator =
    Aws::Utils::Pagination::Paginator<ImagebuilderClient, Model::ListImagePipelineImagesRequest,
                                      Pagination::ListImagePipelineImagesPaginationTraits<ImagebuilderClient>>;
using ListImagePipelinesPaginator = Aws::Utils::Pagination::Paginator<ImagebuilderClient, Model::ListImagePipelinesRequest,
                                                                      Pagination::ListImagePipelinesPaginationTraits<ImagebuilderClient>>;
using ListImageRecipesPaginator = Aws::Utils::Pagination::Paginator<ImagebuilderClient, Model::ListImageRecipesRequest,
                                                                    Pagination::ListImageRecipesPaginationTraits<ImagebuilderClient>>;
using ListImagesPaginator = Aws::Utils::Pagination::Paginator<ImagebuilderClient, Model::ListImagesRequest,
                                                              Pagination::ListImagesPaginationTraits<ImagebuilderClient>>;
using ListImageScanFindingAggregationsPaginator =
    Aws::Utils::Pagination::Paginator<ImagebuilderClient, Model::ListImageScanFindingAggregationsRequest,
                                      Pagination::ListImageScanFindingAggregationsPaginationTraits<ImagebuilderClient>>;
using ListImageScanFindingsPaginator =
    Aws::Utils::Pagination::Paginator<ImagebuilderClient, Model::ListImageScanFindingsRequest,
                                      Pagination::ListImageScanFindingsPaginationTraits<ImagebuilderClient>>;
using ListInfrastructureConfigurationsPaginator =
    Aws::Utils::Pagination::Paginator<ImagebuilderClient, Model::ListInfrastructureConfigurationsRequest,
                                      Pagination::ListInfrastructureConfigurationsPaginationTraits<ImagebuilderClient>>;
using ListLifecycleExecutionResourcesPaginator =
    Aws::Utils::Pagination::Paginator<ImagebuilderClient, Model::ListLifecycleExecutionResourcesRequest,
                                      Pagination::ListLifecycleExecutionResourcesPaginationTraits<ImagebuilderClient>>;
using ListLifecycleExecutionsPaginator =
    Aws::Utils::Pagination::Paginator<ImagebuilderClient, Model::ListLifecycleExecutionsRequest,
                                      Pagination::ListLifecycleExecutionsPaginationTraits<ImagebuilderClient>>;
using ListLifecyclePoliciesPaginator =
    Aws::Utils::Pagination::Paginator<ImagebuilderClient, Model::ListLifecyclePoliciesRequest,
                                      Pagination::ListLifecyclePoliciesPaginationTraits<ImagebuilderClient>>;
using ListWaitingWorkflowStepsPaginator =
    Aws::Utils::Pagination::Paginator<ImagebuilderClient, Model::ListWaitingWorkflowStepsRequest,
                                      Pagination::ListWaitingWorkflowStepsPaginationTraits<ImagebuilderClient>>;
using ListWorkflowBuildVersionsPaginator =
    Aws::Utils::Pagination::Paginator<ImagebuilderClient, Model::ListWorkflowBuildVersionsRequest,
                                      Pagination::ListWorkflowBuildVersionsPaginationTraits<ImagebuilderClient>>;
using ListWorkflowExecutionsPaginator =
    Aws::Utils::Pagination::Paginator<ImagebuilderClient, Model::ListWorkflowExecutionsRequest,
                                      Pagination::ListWorkflowExecutionsPaginationTraits<ImagebuilderClient>>;
using ListWorkflowsPaginator = Aws::Utils::Pagination::Paginator<ImagebuilderClient, Model::ListWorkflowsRequest,
                                                                 Pagination::ListWorkflowsPaginationTraits<ImagebuilderClient>>;
using ListWorkflowStepExecutionsPaginator =
    Aws::Utils::Pagination::Paginator<ImagebuilderClient, Model::ListWorkflowStepExecutionsRequest,
                                      Pagination::ListWorkflowStepExecutionsPaginationTraits<ImagebuilderClient>>;

}  // namespace imagebuilder
}  // namespace Aws
