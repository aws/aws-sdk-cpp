/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/bedrock/model/ListAutomatedReasoningPoliciesPaginationTraits.h>
#include <aws/bedrock/model/ListAutomatedReasoningPolicyBuildWorkflowsPaginationTraits.h>
#include <aws/bedrock/model/ListAutomatedReasoningPolicyTestCasesPaginationTraits.h>
#include <aws/bedrock/model/ListAutomatedReasoningPolicyTestResultsPaginationTraits.h>
#include <aws/bedrock/model/ListCustomModelDeploymentsPaginationTraits.h>
#include <aws/bedrock/model/ListCustomModelsPaginationTraits.h>
#include <aws/bedrock/model/ListEnforcedGuardrailsConfigurationPaginationTraits.h>
#include <aws/bedrock/model/ListEvaluationJobsPaginationTraits.h>
#include <aws/bedrock/model/ListGuardrailsPaginationTraits.h>
#include <aws/bedrock/model/ListImportedModelsPaginationTraits.h>
#include <aws/bedrock/model/ListInferenceProfilesPaginationTraits.h>
#include <aws/bedrock/model/ListMarketplaceModelEndpointsPaginationTraits.h>
#include <aws/bedrock/model/ListModelCopyJobsPaginationTraits.h>
#include <aws/bedrock/model/ListModelCustomizationJobsPaginationTraits.h>
#include <aws/bedrock/model/ListModelImportJobsPaginationTraits.h>
#include <aws/bedrock/model/ListModelInvocationJobsPaginationTraits.h>
#include <aws/bedrock/model/ListPromptRoutersPaginationTraits.h>
#include <aws/bedrock/model/ListProvisionedModelThroughputsPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace Bedrock {

class BedrockClient;

template <typename DerivedClient>
class BedrockPaginationBase {
 public:
  /**
   * Create a paginator for ListAutomatedReasoningPolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutomatedReasoningPoliciesRequest,
                                    Pagination::ListAutomatedReasoningPoliciesPaginationTraits<DerivedClient>>
  ListAutomatedReasoningPoliciesPaginator(const Model::ListAutomatedReasoningPoliciesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutomatedReasoningPoliciesRequest,
                                             Pagination::ListAutomatedReasoningPoliciesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAutomatedReasoningPolicyBuildWorkflows operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutomatedReasoningPolicyBuildWorkflowsRequest,
                                    Pagination::ListAutomatedReasoningPolicyBuildWorkflowsPaginationTraits<DerivedClient>>
  ListAutomatedReasoningPolicyBuildWorkflowsPaginator(const Model::ListAutomatedReasoningPolicyBuildWorkflowsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutomatedReasoningPolicyBuildWorkflowsRequest,
                                             Pagination::ListAutomatedReasoningPolicyBuildWorkflowsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAutomatedReasoningPolicyTestCases operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutomatedReasoningPolicyTestCasesRequest,
                                    Pagination::ListAutomatedReasoningPolicyTestCasesPaginationTraits<DerivedClient>>
  ListAutomatedReasoningPolicyTestCasesPaginator(const Model::ListAutomatedReasoningPolicyTestCasesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutomatedReasoningPolicyTestCasesRequest,
                                             Pagination::ListAutomatedReasoningPolicyTestCasesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAutomatedReasoningPolicyTestResults operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutomatedReasoningPolicyTestResultsRequest,
                                    Pagination::ListAutomatedReasoningPolicyTestResultsPaginationTraits<DerivedClient>>
  ListAutomatedReasoningPolicyTestResultsPaginator(const Model::ListAutomatedReasoningPolicyTestResultsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAutomatedReasoningPolicyTestResultsRequest,
                                             Pagination::ListAutomatedReasoningPolicyTestResultsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCustomModelDeployments operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomModelDeploymentsRequest,
                                    Pagination::ListCustomModelDeploymentsPaginationTraits<DerivedClient>>
  ListCustomModelDeploymentsPaginator(const Model::ListCustomModelDeploymentsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomModelDeploymentsRequest,
                                             Pagination::ListCustomModelDeploymentsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCustomModels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomModelsRequest,
                                    Pagination::ListCustomModelsPaginationTraits<DerivedClient>>
  ListCustomModelsPaginator(const Model::ListCustomModelsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomModelsRequest,
                                             Pagination::ListCustomModelsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListEnforcedGuardrailsConfiguration operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnforcedGuardrailsConfigurationRequest,
                                    Pagination::ListEnforcedGuardrailsConfigurationPaginationTraits<DerivedClient>>
  ListEnforcedGuardrailsConfigurationPaginator(const Model::ListEnforcedGuardrailsConfigurationRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEnforcedGuardrailsConfigurationRequest,
                                             Pagination::ListEnforcedGuardrailsConfigurationPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEvaluationJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEvaluationJobsRequest,
                                    Pagination::ListEvaluationJobsPaginationTraits<DerivedClient>>
  ListEvaluationJobsPaginator(const Model::ListEvaluationJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEvaluationJobsRequest,
                                             Pagination::ListEvaluationJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListGuardrails operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGuardrailsRequest, Pagination::ListGuardrailsPaginationTraits<DerivedClient>>
  ListGuardrailsPaginator(const Model::ListGuardrailsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGuardrailsRequest,
                                             Pagination::ListGuardrailsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListImportedModels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImportedModelsRequest,
                                    Pagination::ListImportedModelsPaginationTraits<DerivedClient>>
  ListImportedModelsPaginator(const Model::ListImportedModelsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImportedModelsRequest,
                                             Pagination::ListImportedModelsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListInferenceProfiles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInferenceProfilesRequest,
                                    Pagination::ListInferenceProfilesPaginationTraits<DerivedClient>>
  ListInferenceProfilesPaginator(const Model::ListInferenceProfilesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListInferenceProfilesRequest,
                                             Pagination::ListInferenceProfilesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMarketplaceModelEndpoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMarketplaceModelEndpointsRequest,
                                    Pagination::ListMarketplaceModelEndpointsPaginationTraits<DerivedClient>>
  ListMarketplaceModelEndpointsPaginator(const Model::ListMarketplaceModelEndpointsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMarketplaceModelEndpointsRequest,
                                             Pagination::ListMarketplaceModelEndpointsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListModelCopyJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListModelCopyJobsRequest,
                                    Pagination::ListModelCopyJobsPaginationTraits<DerivedClient>>
  ListModelCopyJobsPaginator(const Model::ListModelCopyJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListModelCopyJobsRequest,
                                             Pagination::ListModelCopyJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListModelCustomizationJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListModelCustomizationJobsRequest,
                                    Pagination::ListModelCustomizationJobsPaginationTraits<DerivedClient>>
  ListModelCustomizationJobsPaginator(const Model::ListModelCustomizationJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListModelCustomizationJobsRequest,
                                             Pagination::ListModelCustomizationJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListModelImportJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListModelImportJobsRequest,
                                    Pagination::ListModelImportJobsPaginationTraits<DerivedClient>>
  ListModelImportJobsPaginator(const Model::ListModelImportJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListModelImportJobsRequest,
                                             Pagination::ListModelImportJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListModelInvocationJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListModelInvocationJobsRequest,
                                    Pagination::ListModelInvocationJobsPaginationTraits<DerivedClient>>
  ListModelInvocationJobsPaginator(const Model::ListModelInvocationJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListModelInvocationJobsRequest,
                                             Pagination::ListModelInvocationJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPromptRouters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPromptRoutersRequest,
                                    Pagination::ListPromptRoutersPaginationTraits<DerivedClient>>
  ListPromptRoutersPaginator(const Model::ListPromptRoutersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPromptRoutersRequest,
                                             Pagination::ListPromptRoutersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListProvisionedModelThroughputs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProvisionedModelThroughputsRequest,
                                    Pagination::ListProvisionedModelThroughputsPaginationTraits<DerivedClient>>
  ListProvisionedModelThroughputsPaginator(const Model::ListProvisionedModelThroughputsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProvisionedModelThroughputsRequest,
                                             Pagination::ListProvisionedModelThroughputsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Bedrock
}  // namespace Aws
