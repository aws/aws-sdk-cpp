/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/BedrockClient.h>
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

namespace Aws {
namespace Bedrock {

using ListAutomatedReasoningPoliciesPaginator =
    Aws::Utils::Pagination::Paginator<BedrockClient, Model::ListAutomatedReasoningPoliciesRequest,
                                      Pagination::ListAutomatedReasoningPoliciesPaginationTraits<BedrockClient>>;
using ListAutomatedReasoningPolicyBuildWorkflowsPaginator =
    Aws::Utils::Pagination::Paginator<BedrockClient, Model::ListAutomatedReasoningPolicyBuildWorkflowsRequest,
                                      Pagination::ListAutomatedReasoningPolicyBuildWorkflowsPaginationTraits<BedrockClient>>;
using ListAutomatedReasoningPolicyTestCasesPaginator =
    Aws::Utils::Pagination::Paginator<BedrockClient, Model::ListAutomatedReasoningPolicyTestCasesRequest,
                                      Pagination::ListAutomatedReasoningPolicyTestCasesPaginationTraits<BedrockClient>>;
using ListAutomatedReasoningPolicyTestResultsPaginator =
    Aws::Utils::Pagination::Paginator<BedrockClient, Model::ListAutomatedReasoningPolicyTestResultsRequest,
                                      Pagination::ListAutomatedReasoningPolicyTestResultsPaginationTraits<BedrockClient>>;
using ListCustomModelDeploymentsPaginator =
    Aws::Utils::Pagination::Paginator<BedrockClient, Model::ListCustomModelDeploymentsRequest,
                                      Pagination::ListCustomModelDeploymentsPaginationTraits<BedrockClient>>;
using ListCustomModelsPaginator = Aws::Utils::Pagination::Paginator<BedrockClient, Model::ListCustomModelsRequest,
                                                                    Pagination::ListCustomModelsPaginationTraits<BedrockClient>>;
using ListEnforcedGuardrailsConfigurationPaginator =
    Aws::Utils::Pagination::Paginator<BedrockClient, Model::ListEnforcedGuardrailsConfigurationRequest,
                                      Pagination::ListEnforcedGuardrailsConfigurationPaginationTraits<BedrockClient>>;
using ListEvaluationJobsPaginator = Aws::Utils::Pagination::Paginator<BedrockClient, Model::ListEvaluationJobsRequest,
                                                                      Pagination::ListEvaluationJobsPaginationTraits<BedrockClient>>;
using ListGuardrailsPaginator = Aws::Utils::Pagination::Paginator<BedrockClient, Model::ListGuardrailsRequest,
                                                                  Pagination::ListGuardrailsPaginationTraits<BedrockClient>>;
using ListImportedModelsPaginator = Aws::Utils::Pagination::Paginator<BedrockClient, Model::ListImportedModelsRequest,
                                                                      Pagination::ListImportedModelsPaginationTraits<BedrockClient>>;
using ListInferenceProfilesPaginator = Aws::Utils::Pagination::Paginator<BedrockClient, Model::ListInferenceProfilesRequest,
                                                                         Pagination::ListInferenceProfilesPaginationTraits<BedrockClient>>;
using ListMarketplaceModelEndpointsPaginator =
    Aws::Utils::Pagination::Paginator<BedrockClient, Model::ListMarketplaceModelEndpointsRequest,
                                      Pagination::ListMarketplaceModelEndpointsPaginationTraits<BedrockClient>>;
using ListModelCopyJobsPaginator = Aws::Utils::Pagination::Paginator<BedrockClient, Model::ListModelCopyJobsRequest,
                                                                     Pagination::ListModelCopyJobsPaginationTraits<BedrockClient>>;
using ListModelCustomizationJobsPaginator =
    Aws::Utils::Pagination::Paginator<BedrockClient, Model::ListModelCustomizationJobsRequest,
                                      Pagination::ListModelCustomizationJobsPaginationTraits<BedrockClient>>;
using ListModelImportJobsPaginator = Aws::Utils::Pagination::Paginator<BedrockClient, Model::ListModelImportJobsRequest,
                                                                       Pagination::ListModelImportJobsPaginationTraits<BedrockClient>>;
using ListModelInvocationJobsPaginator =
    Aws::Utils::Pagination::Paginator<BedrockClient, Model::ListModelInvocationJobsRequest,
                                      Pagination::ListModelInvocationJobsPaginationTraits<BedrockClient>>;
using ListPromptRoutersPaginator = Aws::Utils::Pagination::Paginator<BedrockClient, Model::ListPromptRoutersRequest,
                                                                     Pagination::ListPromptRoutersPaginationTraits<BedrockClient>>;
using ListProvisionedModelThroughputsPaginator =
    Aws::Utils::Pagination::Paginator<BedrockClient, Model::ListProvisionedModelThroughputsRequest,
                                      Pagination::ListProvisionedModelThroughputsPaginationTraits<BedrockClient>>;

}  // namespace Bedrock
}  // namespace Aws
