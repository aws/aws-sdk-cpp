/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlClient.h>
#include <aws/bedrock-agentcore-control/model/ListAgentRuntimeEndpointsPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListAgentRuntimeVersionsPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListAgentRuntimesPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListApiKeyCredentialProvidersPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListBrowserProfilesPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListBrowsersPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListCodeInterpretersPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListEvaluatorsPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListGatewayTargetsPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListGatewaysPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListMemoriesPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListOauth2CredentialProvidersPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListOnlineEvaluationConfigsPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListPoliciesPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListPolicyEnginesPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListPolicyGenerationAssetsPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListPolicyGenerationsPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListWorkloadIdentitiesPaginationTraits.h>
#include <aws/core/utils/pagination/Paginator.h>

namespace Aws {
namespace BedrockAgentCoreControl {

using ListAgentRuntimeEndpointsPaginator =
    Aws::Utils::Pagination::Paginator<BedrockAgentCoreControlClient, Model::ListAgentRuntimeEndpointsRequest,
                                      Pagination::ListAgentRuntimeEndpointsPaginationTraits<BedrockAgentCoreControlClient>>;
using ListAgentRuntimesPaginator =
    Aws::Utils::Pagination::Paginator<BedrockAgentCoreControlClient, Model::ListAgentRuntimesRequest,
                                      Pagination::ListAgentRuntimesPaginationTraits<BedrockAgentCoreControlClient>>;
using ListAgentRuntimeVersionsPaginator =
    Aws::Utils::Pagination::Paginator<BedrockAgentCoreControlClient, Model::ListAgentRuntimeVersionsRequest,
                                      Pagination::ListAgentRuntimeVersionsPaginationTraits<BedrockAgentCoreControlClient>>;
using ListApiKeyCredentialProvidersPaginator =
    Aws::Utils::Pagination::Paginator<BedrockAgentCoreControlClient, Model::ListApiKeyCredentialProvidersRequest,
                                      Pagination::ListApiKeyCredentialProvidersPaginationTraits<BedrockAgentCoreControlClient>>;
using ListBrowserProfilesPaginator =
    Aws::Utils::Pagination::Paginator<BedrockAgentCoreControlClient, Model::ListBrowserProfilesRequest,
                                      Pagination::ListBrowserProfilesPaginationTraits<BedrockAgentCoreControlClient>>;
using ListBrowsersPaginator = Aws::Utils::Pagination::Paginator<BedrockAgentCoreControlClient, Model::ListBrowsersRequest,
                                                                Pagination::ListBrowsersPaginationTraits<BedrockAgentCoreControlClient>>;
using ListCodeInterpretersPaginator =
    Aws::Utils::Pagination::Paginator<BedrockAgentCoreControlClient, Model::ListCodeInterpretersRequest,
                                      Pagination::ListCodeInterpretersPaginationTraits<BedrockAgentCoreControlClient>>;
using ListEvaluatorsPaginator =
    Aws::Utils::Pagination::Paginator<BedrockAgentCoreControlClient, Model::ListEvaluatorsRequest,
                                      Pagination::ListEvaluatorsPaginationTraits<BedrockAgentCoreControlClient>>;
using ListGatewaysPaginator = Aws::Utils::Pagination::Paginator<BedrockAgentCoreControlClient, Model::ListGatewaysRequest,
                                                                Pagination::ListGatewaysPaginationTraits<BedrockAgentCoreControlClient>>;
using ListGatewayTargetsPaginator =
    Aws::Utils::Pagination::Paginator<BedrockAgentCoreControlClient, Model::ListGatewayTargetsRequest,
                                      Pagination::ListGatewayTargetsPaginationTraits<BedrockAgentCoreControlClient>>;
using ListMemoriesPaginator = Aws::Utils::Pagination::Paginator<BedrockAgentCoreControlClient, Model::ListMemoriesRequest,
                                                                Pagination::ListMemoriesPaginationTraits<BedrockAgentCoreControlClient>>;
using ListOauth2CredentialProvidersPaginator =
    Aws::Utils::Pagination::Paginator<BedrockAgentCoreControlClient, Model::ListOauth2CredentialProvidersRequest,
                                      Pagination::ListOauth2CredentialProvidersPaginationTraits<BedrockAgentCoreControlClient>>;
using ListOnlineEvaluationConfigsPaginator =
    Aws::Utils::Pagination::Paginator<BedrockAgentCoreControlClient, Model::ListOnlineEvaluationConfigsRequest,
                                      Pagination::ListOnlineEvaluationConfigsPaginationTraits<BedrockAgentCoreControlClient>>;
using ListPoliciesPaginator = Aws::Utils::Pagination::Paginator<BedrockAgentCoreControlClient, Model::ListPoliciesRequest,
                                                                Pagination::ListPoliciesPaginationTraits<BedrockAgentCoreControlClient>>;
using ListPolicyEnginesPaginator =
    Aws::Utils::Pagination::Paginator<BedrockAgentCoreControlClient, Model::ListPolicyEnginesRequest,
                                      Pagination::ListPolicyEnginesPaginationTraits<BedrockAgentCoreControlClient>>;
using ListPolicyGenerationAssetsPaginator =
    Aws::Utils::Pagination::Paginator<BedrockAgentCoreControlClient, Model::ListPolicyGenerationAssetsRequest,
                                      Pagination::ListPolicyGenerationAssetsPaginationTraits<BedrockAgentCoreControlClient>>;
using ListPolicyGenerationsPaginator =
    Aws::Utils::Pagination::Paginator<BedrockAgentCoreControlClient, Model::ListPolicyGenerationsRequest,
                                      Pagination::ListPolicyGenerationsPaginationTraits<BedrockAgentCoreControlClient>>;
using ListWorkloadIdentitiesPaginator =
    Aws::Utils::Pagination::Paginator<BedrockAgentCoreControlClient, Model::ListWorkloadIdentitiesRequest,
                                      Pagination::ListWorkloadIdentitiesPaginationTraits<BedrockAgentCoreControlClient>>;

}  // namespace BedrockAgentCoreControl
}  // namespace Aws
