/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace imagebuilder {

template <typename DerivedClient>
class ImagebuilderPaginationBase {
 public:
  /**
   * Create a paginator for ListComponentBuildVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListComponentBuildVersionsRequest,
                                    Pagination::ListComponentBuildVersionsPaginationTraits<DerivedClient>>
  ListComponentBuildVersionsPaginator(const Model::ListComponentBuildVersionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListComponentBuildVersionsRequest,
                                             Pagination::ListComponentBuildVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListComponents operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListComponentsRequest, Pagination::ListComponentsPaginationTraits<DerivedClient>>
  ListComponentsPaginator(const Model::ListComponentsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListComponentsRequest,
                                             Pagination::ListComponentsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListContainerRecipes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContainerRecipesRequest,
                                    Pagination::ListContainerRecipesPaginationTraits<DerivedClient>>
  ListContainerRecipesPaginator(const Model::ListContainerRecipesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContainerRecipesRequest,
                                             Pagination::ListContainerRecipesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDistributionConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDistributionConfigurationsRequest,
                                    Pagination::ListDistributionConfigurationsPaginationTraits<DerivedClient>>
  ListDistributionConfigurationsPaginator(const Model::ListDistributionConfigurationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDistributionConfigurationsRequest,
                                             Pagination::ListDistributionConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListImageBuildVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImageBuildVersionsRequest,
                                    Pagination::ListImageBuildVersionsPaginationTraits<DerivedClient>>
  ListImageBuildVersionsPaginator(const Model::ListImageBuildVersionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImageBuildVersionsRequest,
                                             Pagination::ListImageBuildVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListImagePackages operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImagePackagesRequest,
                                    Pagination::ListImagePackagesPaginationTraits<DerivedClient>>
  ListImagePackagesPaginator(const Model::ListImagePackagesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImagePackagesRequest,
                                             Pagination::ListImagePackagesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListImagePipelineImages operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImagePipelineImagesRequest,
                                    Pagination::ListImagePipelineImagesPaginationTraits<DerivedClient>>
  ListImagePipelineImagesPaginator(const Model::ListImagePipelineImagesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImagePipelineImagesRequest,
                                             Pagination::ListImagePipelineImagesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListImagePipelines operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImagePipelinesRequest,
                                    Pagination::ListImagePipelinesPaginationTraits<DerivedClient>>
  ListImagePipelinesPaginator(const Model::ListImagePipelinesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImagePipelinesRequest,
                                             Pagination::ListImagePipelinesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListImageRecipes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImageRecipesRequest,
                                    Pagination::ListImageRecipesPaginationTraits<DerivedClient>>
  ListImageRecipesPaginator(const Model::ListImageRecipesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImageRecipesRequest,
                                             Pagination::ListImageRecipesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListImages operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImagesRequest, Pagination::ListImagesPaginationTraits<DerivedClient>>
  ListImagesPaginator(const Model::ListImagesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImagesRequest,
                                             Pagination::ListImagesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListImageScanFindingAggregations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImageScanFindingAggregationsRequest,
                                    Pagination::ListImageScanFindingAggregationsPaginationTraits<DerivedClient>>
  ListImageScanFindingAggregationsPaginator(const Model::ListImageScanFindingAggregationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImageScanFindingAggregationsRequest,
                                             Pagination::ListImageScanFindingAggregationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListImageScanFindings operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImageScanFindingsRequest,
                                    Pagination::ListImageScanFindingsPaginationTraits<DerivedClient>>
  ListImageScanFindingsPaginator(const Model::ListImageScanFindingsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImageScanFindingsRequest,
                                             Pagination::ListImageScanFindingsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListInfrastructureConfigurations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInfrastructureConfigurationsRequest,
                                    Pagination::ListInfrastructureConfigurationsPaginationTraits<DerivedClient>>
  ListInfrastructureConfigurationsPaginator(const Model::ListInfrastructureConfigurationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInfrastructureConfigurationsRequest,
                                             Pagination::ListInfrastructureConfigurationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListLifecycleExecutionResources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLifecycleExecutionResourcesRequest,
                                    Pagination::ListLifecycleExecutionResourcesPaginationTraits<DerivedClient>>
  ListLifecycleExecutionResourcesPaginator(const Model::ListLifecycleExecutionResourcesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLifecycleExecutionResourcesRequest,
                                             Pagination::ListLifecycleExecutionResourcesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListLifecycleExecutions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLifecycleExecutionsRequest,
                                    Pagination::ListLifecycleExecutionsPaginationTraits<DerivedClient>>
  ListLifecycleExecutionsPaginator(const Model::ListLifecycleExecutionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLifecycleExecutionsRequest,
                                             Pagination::ListLifecycleExecutionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListLifecyclePolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLifecyclePoliciesRequest,
                                    Pagination::ListLifecyclePoliciesPaginationTraits<DerivedClient>>
  ListLifecyclePoliciesPaginator(const Model::ListLifecyclePoliciesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLifecyclePoliciesRequest,
                                             Pagination::ListLifecyclePoliciesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListWaitingWorkflowSteps operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWaitingWorkflowStepsRequest,
                                    Pagination::ListWaitingWorkflowStepsPaginationTraits<DerivedClient>>
  ListWaitingWorkflowStepsPaginator(const Model::ListWaitingWorkflowStepsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWaitingWorkflowStepsRequest,
                                             Pagination::ListWaitingWorkflowStepsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListWorkflowBuildVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkflowBuildVersionsRequest,
                                    Pagination::ListWorkflowBuildVersionsPaginationTraits<DerivedClient>>
  ListWorkflowBuildVersionsPaginator(const Model::ListWorkflowBuildVersionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkflowBuildVersionsRequest,
                                             Pagination::ListWorkflowBuildVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListWorkflowExecutions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkflowExecutionsRequest,
                                    Pagination::ListWorkflowExecutionsPaginationTraits<DerivedClient>>
  ListWorkflowExecutionsPaginator(const Model::ListWorkflowExecutionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkflowExecutionsRequest,
                                             Pagination::ListWorkflowExecutionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListWorkflows operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkflowsRequest, Pagination::ListWorkflowsPaginationTraits<DerivedClient>>
  ListWorkflowsPaginator(const Model::ListWorkflowsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkflowsRequest,
                                             Pagination::ListWorkflowsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListWorkflowStepExecutions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkflowStepExecutionsRequest,
                                    Pagination::ListWorkflowStepExecutionsPaginationTraits<DerivedClient>>
  ListWorkflowStepExecutionsPaginator(const Model::ListWorkflowStepExecutionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkflowStepExecutionsRequest,
                                             Pagination::ListWorkflowStepExecutionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace imagebuilder
}  // namespace Aws
