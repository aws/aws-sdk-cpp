/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/bedrock-agentcore-control/model/ListAgentRuntimeEndpointsPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListAgentRuntimeVersionsPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListAgentRuntimesPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListApiKeyCredentialProvidersPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListBrowserProfilesPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListBrowsersPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListCodeInterpretersPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListConfigurationBundleVersionsPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListConfigurationBundlesPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListEvaluatorsPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListGatewayRulesPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListGatewayTargetsPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListGatewaysPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListHarnessesPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListMemoriesPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListOauth2CredentialProvidersPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListOnlineEvaluationConfigsPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListPoliciesPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListPolicyEnginesPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListPolicyGenerationAssetsPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListPolicyGenerationsPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListRegistriesPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListRegistryRecordsPaginationTraits.h>
#include <aws/bedrock-agentcore-control/model/ListWorkloadIdentitiesPaginationTraits.h>
#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace BedrockAgentCoreControl {

template <typename DerivedClient>
class BedrockAgentCoreControlPaginationBase {
 public:
  /**
   * Create a paginator for ListAgentRuntimeEndpoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgentRuntimeEndpointsRequest,
                                    Pagination::ListAgentRuntimeEndpointsPaginationTraits<DerivedClient>>
  ListAgentRuntimeEndpointsPaginator(const Model::ListAgentRuntimeEndpointsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgentRuntimeEndpointsRequest,
                                             Pagination::ListAgentRuntimeEndpointsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAgentRuntimes operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgentRuntimesRequest,
                                    Pagination::ListAgentRuntimesPaginationTraits<DerivedClient>>
  ListAgentRuntimesPaginator(const Model::ListAgentRuntimesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgentRuntimesRequest,
                                             Pagination::ListAgentRuntimesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAgentRuntimeVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgentRuntimeVersionsRequest,
                                    Pagination::ListAgentRuntimeVersionsPaginationTraits<DerivedClient>>
  ListAgentRuntimeVersionsPaginator(const Model::ListAgentRuntimeVersionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAgentRuntimeVersionsRequest,
                                             Pagination::ListAgentRuntimeVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListApiKeyCredentialProviders operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApiKeyCredentialProvidersRequest,
                                    Pagination::ListApiKeyCredentialProvidersPaginationTraits<DerivedClient>>
  ListApiKeyCredentialProvidersPaginator(const Model::ListApiKeyCredentialProvidersRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListApiKeyCredentialProvidersRequest,
                                             Pagination::ListApiKeyCredentialProvidersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBrowserProfiles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBrowserProfilesRequest,
                                    Pagination::ListBrowserProfilesPaginationTraits<DerivedClient>>
  ListBrowserProfilesPaginator(const Model::ListBrowserProfilesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBrowserProfilesRequest,
                                             Pagination::ListBrowserProfilesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBrowsers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBrowsersRequest, Pagination::ListBrowsersPaginationTraits<DerivedClient>>
  ListBrowsersPaginator(const Model::ListBrowsersRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBrowsersRequest,
                                             Pagination::ListBrowsersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListCodeInterpreters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCodeInterpretersRequest,
                                    Pagination::ListCodeInterpretersPaginationTraits<DerivedClient>>
  ListCodeInterpretersPaginator(const Model::ListCodeInterpretersRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCodeInterpretersRequest,
                                             Pagination::ListCodeInterpretersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListConfigurationBundles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfigurationBundlesRequest,
                                    Pagination::ListConfigurationBundlesPaginationTraits<DerivedClient>>
  ListConfigurationBundlesPaginator(const Model::ListConfigurationBundlesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfigurationBundlesRequest,
                                             Pagination::ListConfigurationBundlesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListConfigurationBundleVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfigurationBundleVersionsRequest,
                                    Pagination::ListConfigurationBundleVersionsPaginationTraits<DerivedClient>>
  ListConfigurationBundleVersionsPaginator(const Model::ListConfigurationBundleVersionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfigurationBundleVersionsRequest,
                                             Pagination::ListConfigurationBundleVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEvaluators operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEvaluatorsRequest, Pagination::ListEvaluatorsPaginationTraits<DerivedClient>>
  ListEvaluatorsPaginator(const Model::ListEvaluatorsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEvaluatorsRequest,
                                             Pagination::ListEvaluatorsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListGatewayRules operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGatewayRulesRequest,
                                    Pagination::ListGatewayRulesPaginationTraits<DerivedClient>>
  ListGatewayRulesPaginator(const Model::ListGatewayRulesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGatewayRulesRequest,
                                             Pagination::ListGatewayRulesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListGateways operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGatewaysRequest, Pagination::ListGatewaysPaginationTraits<DerivedClient>>
  ListGatewaysPaginator(const Model::ListGatewaysRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGatewaysRequest,
                                             Pagination::ListGatewaysPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListGatewayTargets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGatewayTargetsRequest,
                                    Pagination::ListGatewayTargetsPaginationTraits<DerivedClient>>
  ListGatewayTargetsPaginator(const Model::ListGatewayTargetsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGatewayTargetsRequest,
                                             Pagination::ListGatewayTargetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListHarnesses operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListHarnessesRequest, Pagination::ListHarnessesPaginationTraits<DerivedClient>>
  ListHarnessesPaginator(const Model::ListHarnessesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListHarnessesRequest,
                                             Pagination::ListHarnessesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListMemories operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMemoriesRequest, Pagination::ListMemoriesPaginationTraits<DerivedClient>>
  ListMemoriesPaginator(const Model::ListMemoriesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMemoriesRequest,
                                             Pagination::ListMemoriesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListOauth2CredentialProviders operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOauth2CredentialProvidersRequest,
                                    Pagination::ListOauth2CredentialProvidersPaginationTraits<DerivedClient>>
  ListOauth2CredentialProvidersPaginator(const Model::ListOauth2CredentialProvidersRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOauth2CredentialProvidersRequest,
                                             Pagination::ListOauth2CredentialProvidersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListOnlineEvaluationConfigs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOnlineEvaluationConfigsRequest,
                                    Pagination::ListOnlineEvaluationConfigsPaginationTraits<DerivedClient>>
  ListOnlineEvaluationConfigsPaginator(const Model::ListOnlineEvaluationConfigsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOnlineEvaluationConfigsRequest,
                                             Pagination::ListOnlineEvaluationConfigsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPolicies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPoliciesRequest, Pagination::ListPoliciesPaginationTraits<DerivedClient>>
  ListPoliciesPaginator(const Model::ListPoliciesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPoliciesRequest,
                                             Pagination::ListPoliciesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListPolicyEngines operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPolicyEnginesRequest,
                                    Pagination::ListPolicyEnginesPaginationTraits<DerivedClient>>
  ListPolicyEnginesPaginator(const Model::ListPolicyEnginesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPolicyEnginesRequest,
                                             Pagination::ListPolicyEnginesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPolicyGenerationAssets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPolicyGenerationAssetsRequest,
                                    Pagination::ListPolicyGenerationAssetsPaginationTraits<DerivedClient>>
  ListPolicyGenerationAssetsPaginator(const Model::ListPolicyGenerationAssetsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPolicyGenerationAssetsRequest,
                                             Pagination::ListPolicyGenerationAssetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPolicyGenerations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPolicyGenerationsRequest,
                                    Pagination::ListPolicyGenerationsPaginationTraits<DerivedClient>>
  ListPolicyGenerationsPaginator(const Model::ListPolicyGenerationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPolicyGenerationsRequest,
                                             Pagination::ListPolicyGenerationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRegistries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRegistriesRequest, Pagination::ListRegistriesPaginationTraits<DerivedClient>>
  ListRegistriesPaginator(const Model::ListRegistriesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRegistriesRequest,
                                             Pagination::ListRegistriesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListRegistryRecords operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRegistryRecordsRequest,
                                    Pagination::ListRegistryRecordsPaginationTraits<DerivedClient>>
  ListRegistryRecordsPaginator(const Model::ListRegistryRecordsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRegistryRecordsRequest,
                                             Pagination::ListRegistryRecordsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListWorkloadIdentities operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkloadIdentitiesRequest,
                                    Pagination::ListWorkloadIdentitiesPaginationTraits<DerivedClient>>
  ListWorkloadIdentitiesPaginator(const Model::ListWorkloadIdentitiesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkloadIdentitiesRequest,
                                             Pagination::ListWorkloadIdentitiesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
