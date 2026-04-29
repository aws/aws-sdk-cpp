/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlEndpointProvider.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in BedrockAgentCoreControlClient header */
#include <aws/bedrock-agentcore-control/model/CreateAgentRuntimeEndpointResult.h>
#include <aws/bedrock-agentcore-control/model/CreateAgentRuntimeResult.h>
#include <aws/bedrock-agentcore-control/model/CreateApiKeyCredentialProviderResult.h>
#include <aws/bedrock-agentcore-control/model/CreateBrowserProfileResult.h>
#include <aws/bedrock-agentcore-control/model/CreateBrowserResult.h>
#include <aws/bedrock-agentcore-control/model/CreateCodeInterpreterResult.h>
#include <aws/bedrock-agentcore-control/model/CreateConfigurationBundleResult.h>
#include <aws/bedrock-agentcore-control/model/CreateEvaluatorResult.h>
#include <aws/bedrock-agentcore-control/model/CreateGatewayResult.h>
#include <aws/bedrock-agentcore-control/model/CreateGatewayRuleResult.h>
#include <aws/bedrock-agentcore-control/model/CreateGatewayTargetResult.h>
#include <aws/bedrock-agentcore-control/model/CreateHarnessResult.h>
#include <aws/bedrock-agentcore-control/model/CreateMemoryResult.h>
#include <aws/bedrock-agentcore-control/model/CreateOauth2CredentialProviderResult.h>
#include <aws/bedrock-agentcore-control/model/CreateOnlineEvaluationConfigResult.h>
#include <aws/bedrock-agentcore-control/model/CreatePolicyEngineResult.h>
#include <aws/bedrock-agentcore-control/model/CreatePolicyResult.h>
#include <aws/bedrock-agentcore-control/model/CreateRegistryRecordResult.h>
#include <aws/bedrock-agentcore-control/model/CreateRegistryResult.h>
#include <aws/bedrock-agentcore-control/model/CreateWorkloadIdentityResult.h>
#include <aws/bedrock-agentcore-control/model/DeleteAgentRuntimeEndpointResult.h>
#include <aws/bedrock-agentcore-control/model/DeleteAgentRuntimeResult.h>
#include <aws/bedrock-agentcore-control/model/DeleteApiKeyCredentialProviderResult.h>
#include <aws/bedrock-agentcore-control/model/DeleteBrowserProfileResult.h>
#include <aws/bedrock-agentcore-control/model/DeleteBrowserResult.h>
#include <aws/bedrock-agentcore-control/model/DeleteCodeInterpreterResult.h>
#include <aws/bedrock-agentcore-control/model/DeleteConfigurationBundleResult.h>
#include <aws/bedrock-agentcore-control/model/DeleteEvaluatorResult.h>
#include <aws/bedrock-agentcore-control/model/DeleteGatewayResult.h>
#include <aws/bedrock-agentcore-control/model/DeleteGatewayRuleResult.h>
#include <aws/bedrock-agentcore-control/model/DeleteGatewayTargetResult.h>
#include <aws/bedrock-agentcore-control/model/DeleteHarnessResult.h>
#include <aws/bedrock-agentcore-control/model/DeleteMemoryResult.h>
#include <aws/bedrock-agentcore-control/model/DeleteOauth2CredentialProviderResult.h>
#include <aws/bedrock-agentcore-control/model/DeleteOnlineEvaluationConfigResult.h>
#include <aws/bedrock-agentcore-control/model/DeletePolicyEngineResult.h>
#include <aws/bedrock-agentcore-control/model/DeletePolicyResult.h>
#include <aws/bedrock-agentcore-control/model/DeleteRegistryRecordResult.h>
#include <aws/bedrock-agentcore-control/model/DeleteRegistryResult.h>
#include <aws/bedrock-agentcore-control/model/DeleteResourcePolicyResult.h>
#include <aws/bedrock-agentcore-control/model/DeleteWorkloadIdentityResult.h>
#include <aws/bedrock-agentcore-control/model/GetAgentRuntimeEndpointResult.h>
#include <aws/bedrock-agentcore-control/model/GetAgentRuntimeResult.h>
#include <aws/bedrock-agentcore-control/model/GetApiKeyCredentialProviderResult.h>
#include <aws/bedrock-agentcore-control/model/GetBrowserProfileResult.h>
#include <aws/bedrock-agentcore-control/model/GetBrowserResult.h>
#include <aws/bedrock-agentcore-control/model/GetCodeInterpreterResult.h>
#include <aws/bedrock-agentcore-control/model/GetConfigurationBundleResult.h>
#include <aws/bedrock-agentcore-control/model/GetConfigurationBundleVersionResult.h>
#include <aws/bedrock-agentcore-control/model/GetEvaluatorResult.h>
#include <aws/bedrock-agentcore-control/model/GetGatewayResult.h>
#include <aws/bedrock-agentcore-control/model/GetGatewayRuleResult.h>
#include <aws/bedrock-agentcore-control/model/GetGatewayTargetResult.h>
#include <aws/bedrock-agentcore-control/model/GetHarnessResult.h>
#include <aws/bedrock-agentcore-control/model/GetMemoryResult.h>
#include <aws/bedrock-agentcore-control/model/GetOauth2CredentialProviderResult.h>
#include <aws/bedrock-agentcore-control/model/GetOnlineEvaluationConfigResult.h>
#include <aws/bedrock-agentcore-control/model/GetPolicyEngineResult.h>
#include <aws/bedrock-agentcore-control/model/GetPolicyGenerationResult.h>
#include <aws/bedrock-agentcore-control/model/GetPolicyResult.h>
#include <aws/bedrock-agentcore-control/model/GetRegistryRecordResult.h>
#include <aws/bedrock-agentcore-control/model/GetRegistryResult.h>
#include <aws/bedrock-agentcore-control/model/GetResourcePolicyResult.h>
#include <aws/bedrock-agentcore-control/model/GetTokenVaultRequest.h>
#include <aws/bedrock-agentcore-control/model/GetTokenVaultResult.h>
#include <aws/bedrock-agentcore-control/model/GetWorkloadIdentityResult.h>
#include <aws/bedrock-agentcore-control/model/ListAgentRuntimeEndpointsResult.h>
#include <aws/bedrock-agentcore-control/model/ListAgentRuntimeVersionsResult.h>
#include <aws/bedrock-agentcore-control/model/ListAgentRuntimesRequest.h>
#include <aws/bedrock-agentcore-control/model/ListAgentRuntimesResult.h>
#include <aws/bedrock-agentcore-control/model/ListApiKeyCredentialProvidersRequest.h>
#include <aws/bedrock-agentcore-control/model/ListApiKeyCredentialProvidersResult.h>
#include <aws/bedrock-agentcore-control/model/ListBrowserProfilesRequest.h>
#include <aws/bedrock-agentcore-control/model/ListBrowserProfilesResult.h>
#include <aws/bedrock-agentcore-control/model/ListBrowsersRequest.h>
#include <aws/bedrock-agentcore-control/model/ListBrowsersResult.h>
#include <aws/bedrock-agentcore-control/model/ListCodeInterpretersRequest.h>
#include <aws/bedrock-agentcore-control/model/ListCodeInterpretersResult.h>
#include <aws/bedrock-agentcore-control/model/ListConfigurationBundleVersionsResult.h>
#include <aws/bedrock-agentcore-control/model/ListConfigurationBundlesRequest.h>
#include <aws/bedrock-agentcore-control/model/ListConfigurationBundlesResult.h>
#include <aws/bedrock-agentcore-control/model/ListEvaluatorsRequest.h>
#include <aws/bedrock-agentcore-control/model/ListEvaluatorsResult.h>
#include <aws/bedrock-agentcore-control/model/ListGatewayRulesResult.h>
#include <aws/bedrock-agentcore-control/model/ListGatewayTargetsResult.h>
#include <aws/bedrock-agentcore-control/model/ListGatewaysRequest.h>
#include <aws/bedrock-agentcore-control/model/ListGatewaysResult.h>
#include <aws/bedrock-agentcore-control/model/ListHarnessesRequest.h>
#include <aws/bedrock-agentcore-control/model/ListHarnessesResult.h>
#include <aws/bedrock-agentcore-control/model/ListMemoriesRequest.h>
#include <aws/bedrock-agentcore-control/model/ListMemoriesResult.h>
#include <aws/bedrock-agentcore-control/model/ListOauth2CredentialProvidersRequest.h>
#include <aws/bedrock-agentcore-control/model/ListOauth2CredentialProvidersResult.h>
#include <aws/bedrock-agentcore-control/model/ListOnlineEvaluationConfigsRequest.h>
#include <aws/bedrock-agentcore-control/model/ListOnlineEvaluationConfigsResult.h>
#include <aws/bedrock-agentcore-control/model/ListPoliciesResult.h>
#include <aws/bedrock-agentcore-control/model/ListPolicyEnginesRequest.h>
#include <aws/bedrock-agentcore-control/model/ListPolicyEnginesResult.h>
#include <aws/bedrock-agentcore-control/model/ListPolicyGenerationAssetsResult.h>
#include <aws/bedrock-agentcore-control/model/ListPolicyGenerationsResult.h>
#include <aws/bedrock-agentcore-control/model/ListRegistriesRequest.h>
#include <aws/bedrock-agentcore-control/model/ListRegistriesResult.h>
#include <aws/bedrock-agentcore-control/model/ListRegistryRecordsResult.h>
#include <aws/bedrock-agentcore-control/model/ListTagsForResourceResult.h>
#include <aws/bedrock-agentcore-control/model/ListWorkloadIdentitiesRequest.h>
#include <aws/bedrock-agentcore-control/model/ListWorkloadIdentitiesResult.h>
#include <aws/bedrock-agentcore-control/model/PutResourcePolicyResult.h>
#include <aws/bedrock-agentcore-control/model/SetTokenVaultCMKResult.h>
#include <aws/bedrock-agentcore-control/model/StartPolicyGenerationResult.h>
#include <aws/bedrock-agentcore-control/model/SubmitRegistryRecordForApprovalResult.h>
#include <aws/bedrock-agentcore-control/model/SynchronizeGatewayTargetsResult.h>
#include <aws/bedrock-agentcore-control/model/TagResourceResult.h>
#include <aws/bedrock-agentcore-control/model/UntagResourceResult.h>
#include <aws/bedrock-agentcore-control/model/UpdateAgentRuntimeEndpointResult.h>
#include <aws/bedrock-agentcore-control/model/UpdateAgentRuntimeResult.h>
#include <aws/bedrock-agentcore-control/model/UpdateApiKeyCredentialProviderResult.h>
#include <aws/bedrock-agentcore-control/model/UpdateConfigurationBundleResult.h>
#include <aws/bedrock-agentcore-control/model/UpdateEvaluatorResult.h>
#include <aws/bedrock-agentcore-control/model/UpdateGatewayResult.h>
#include <aws/bedrock-agentcore-control/model/UpdateGatewayRuleResult.h>
#include <aws/bedrock-agentcore-control/model/UpdateGatewayTargetResult.h>
#include <aws/bedrock-agentcore-control/model/UpdateHarnessResult.h>
#include <aws/bedrock-agentcore-control/model/UpdateMemoryResult.h>
#include <aws/bedrock-agentcore-control/model/UpdateOauth2CredentialProviderResult.h>
#include <aws/bedrock-agentcore-control/model/UpdateOnlineEvaluationConfigResult.h>
#include <aws/bedrock-agentcore-control/model/UpdatePolicyEngineResult.h>
#include <aws/bedrock-agentcore-control/model/UpdatePolicyResult.h>
#include <aws/bedrock-agentcore-control/model/UpdateRegistryRecordResult.h>
#include <aws/bedrock-agentcore-control/model/UpdateRegistryRecordStatusResult.h>
#include <aws/bedrock-agentcore-control/model/UpdateRegistryResult.h>
#include <aws/bedrock-agentcore-control/model/UpdateWorkloadIdentityResult.h>
/* End of service model headers required in BedrockAgentCoreControlClient header */

namespace Aws {
namespace Http {
class HttpClient;
class HttpClientFactory;
}  // namespace Http

namespace Utils {
template <typename R, typename E>
class Outcome;

namespace Threading {
class Executor;
}  // namespace Threading
}  // namespace Utils

namespace Auth {
class AWSCredentials;
class AWSCredentialsProvider;
}  // namespace Auth

namespace Client {
class RetryStrategy;
}  // namespace Client

namespace BedrockAgentCoreControl {
using BedrockAgentCoreControlClientConfiguration = Aws::Client::GenericClientConfiguration;
using BedrockAgentCoreControlEndpointProviderBase = Aws::BedrockAgentCoreControl::Endpoint::BedrockAgentCoreControlEndpointProviderBase;
using BedrockAgentCoreControlEndpointProvider = Aws::BedrockAgentCoreControl::Endpoint::BedrockAgentCoreControlEndpointProvider;

namespace Model {
/* Service model forward declarations required in BedrockAgentCoreControlClient header */
class CreateAgentRuntimeRequest;
class CreateAgentRuntimeEndpointRequest;
class CreateApiKeyCredentialProviderRequest;
class CreateBrowserRequest;
class CreateBrowserProfileRequest;
class CreateCodeInterpreterRequest;
class CreateConfigurationBundleRequest;
class CreateEvaluatorRequest;
class CreateGatewayRequest;
class CreateGatewayRuleRequest;
class CreateGatewayTargetRequest;
class CreateHarnessRequest;
class CreateMemoryRequest;
class CreateOauth2CredentialProviderRequest;
class CreateOnlineEvaluationConfigRequest;
class CreatePolicyRequest;
class CreatePolicyEngineRequest;
class CreateRegistryRequest;
class CreateRegistryRecordRequest;
class CreateWorkloadIdentityRequest;
class DeleteAgentRuntimeRequest;
class DeleteAgentRuntimeEndpointRequest;
class DeleteApiKeyCredentialProviderRequest;
class DeleteBrowserRequest;
class DeleteBrowserProfileRequest;
class DeleteCodeInterpreterRequest;
class DeleteConfigurationBundleRequest;
class DeleteEvaluatorRequest;
class DeleteGatewayRequest;
class DeleteGatewayRuleRequest;
class DeleteGatewayTargetRequest;
class DeleteHarnessRequest;
class DeleteMemoryRequest;
class DeleteOauth2CredentialProviderRequest;
class DeleteOnlineEvaluationConfigRequest;
class DeletePolicyRequest;
class DeletePolicyEngineRequest;
class DeleteRegistryRequest;
class DeleteRegistryRecordRequest;
class DeleteResourcePolicyRequest;
class DeleteWorkloadIdentityRequest;
class GetAgentRuntimeRequest;
class GetAgentRuntimeEndpointRequest;
class GetApiKeyCredentialProviderRequest;
class GetBrowserRequest;
class GetBrowserProfileRequest;
class GetCodeInterpreterRequest;
class GetConfigurationBundleRequest;
class GetConfigurationBundleVersionRequest;
class GetEvaluatorRequest;
class GetGatewayRequest;
class GetGatewayRuleRequest;
class GetGatewayTargetRequest;
class GetHarnessRequest;
class GetMemoryRequest;
class GetOauth2CredentialProviderRequest;
class GetOnlineEvaluationConfigRequest;
class GetPolicyRequest;
class GetPolicyEngineRequest;
class GetPolicyGenerationRequest;
class GetRegistryRequest;
class GetRegistryRecordRequest;
class GetResourcePolicyRequest;
class GetTokenVaultRequest;
class GetWorkloadIdentityRequest;
class ListAgentRuntimeEndpointsRequest;
class ListAgentRuntimeVersionsRequest;
class ListAgentRuntimesRequest;
class ListApiKeyCredentialProvidersRequest;
class ListBrowserProfilesRequest;
class ListBrowsersRequest;
class ListCodeInterpretersRequest;
class ListConfigurationBundleVersionsRequest;
class ListConfigurationBundlesRequest;
class ListEvaluatorsRequest;
class ListGatewayRulesRequest;
class ListGatewayTargetsRequest;
class ListGatewaysRequest;
class ListHarnessesRequest;
class ListMemoriesRequest;
class ListOauth2CredentialProvidersRequest;
class ListOnlineEvaluationConfigsRequest;
class ListPoliciesRequest;
class ListPolicyEnginesRequest;
class ListPolicyGenerationAssetsRequest;
class ListPolicyGenerationsRequest;
class ListRegistriesRequest;
class ListRegistryRecordsRequest;
class ListTagsForResourceRequest;
class ListWorkloadIdentitiesRequest;
class PutResourcePolicyRequest;
class SetTokenVaultCMKRequest;
class StartPolicyGenerationRequest;
class SubmitRegistryRecordForApprovalRequest;
class SynchronizeGatewayTargetsRequest;
class TagResourceRequest;
class UntagResourceRequest;
class UpdateAgentRuntimeRequest;
class UpdateAgentRuntimeEndpointRequest;
class UpdateApiKeyCredentialProviderRequest;
class UpdateConfigurationBundleRequest;
class UpdateEvaluatorRequest;
class UpdateGatewayRequest;
class UpdateGatewayRuleRequest;
class UpdateGatewayTargetRequest;
class UpdateHarnessRequest;
class UpdateMemoryRequest;
class UpdateOauth2CredentialProviderRequest;
class UpdateOnlineEvaluationConfigRequest;
class UpdatePolicyRequest;
class UpdatePolicyEngineRequest;
class UpdateRegistryRequest;
class UpdateRegistryRecordRequest;
class UpdateRegistryRecordStatusRequest;
class UpdateWorkloadIdentityRequest;
/* End of service model forward declarations required in BedrockAgentCoreControlClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<CreateAgentRuntimeResult, BedrockAgentCoreControlError> CreateAgentRuntimeOutcome;
typedef Aws::Utils::Outcome<CreateAgentRuntimeEndpointResult, BedrockAgentCoreControlError> CreateAgentRuntimeEndpointOutcome;
typedef Aws::Utils::Outcome<CreateApiKeyCredentialProviderResult, BedrockAgentCoreControlError> CreateApiKeyCredentialProviderOutcome;
typedef Aws::Utils::Outcome<CreateBrowserResult, BedrockAgentCoreControlError> CreateBrowserOutcome;
typedef Aws::Utils::Outcome<CreateBrowserProfileResult, BedrockAgentCoreControlError> CreateBrowserProfileOutcome;
typedef Aws::Utils::Outcome<CreateCodeInterpreterResult, BedrockAgentCoreControlError> CreateCodeInterpreterOutcome;
typedef Aws::Utils::Outcome<CreateConfigurationBundleResult, BedrockAgentCoreControlError> CreateConfigurationBundleOutcome;
typedef Aws::Utils::Outcome<CreateEvaluatorResult, BedrockAgentCoreControlError> CreateEvaluatorOutcome;
typedef Aws::Utils::Outcome<CreateGatewayResult, BedrockAgentCoreControlError> CreateGatewayOutcome;
typedef Aws::Utils::Outcome<CreateGatewayRuleResult, BedrockAgentCoreControlError> CreateGatewayRuleOutcome;
typedef Aws::Utils::Outcome<CreateGatewayTargetResult, BedrockAgentCoreControlError> CreateGatewayTargetOutcome;
typedef Aws::Utils::Outcome<CreateHarnessResult, BedrockAgentCoreControlError> CreateHarnessOutcome;
typedef Aws::Utils::Outcome<CreateMemoryResult, BedrockAgentCoreControlError> CreateMemoryOutcome;
typedef Aws::Utils::Outcome<CreateOauth2CredentialProviderResult, BedrockAgentCoreControlError> CreateOauth2CredentialProviderOutcome;
typedef Aws::Utils::Outcome<CreateOnlineEvaluationConfigResult, BedrockAgentCoreControlError> CreateOnlineEvaluationConfigOutcome;
typedef Aws::Utils::Outcome<CreatePolicyResult, BedrockAgentCoreControlError> CreatePolicyOutcome;
typedef Aws::Utils::Outcome<CreatePolicyEngineResult, BedrockAgentCoreControlError> CreatePolicyEngineOutcome;
typedef Aws::Utils::Outcome<CreateRegistryResult, BedrockAgentCoreControlError> CreateRegistryOutcome;
typedef Aws::Utils::Outcome<CreateRegistryRecordResult, BedrockAgentCoreControlError> CreateRegistryRecordOutcome;
typedef Aws::Utils::Outcome<CreateWorkloadIdentityResult, BedrockAgentCoreControlError> CreateWorkloadIdentityOutcome;
typedef Aws::Utils::Outcome<DeleteAgentRuntimeResult, BedrockAgentCoreControlError> DeleteAgentRuntimeOutcome;
typedef Aws::Utils::Outcome<DeleteAgentRuntimeEndpointResult, BedrockAgentCoreControlError> DeleteAgentRuntimeEndpointOutcome;
typedef Aws::Utils::Outcome<DeleteApiKeyCredentialProviderResult, BedrockAgentCoreControlError> DeleteApiKeyCredentialProviderOutcome;
typedef Aws::Utils::Outcome<DeleteBrowserResult, BedrockAgentCoreControlError> DeleteBrowserOutcome;
typedef Aws::Utils::Outcome<DeleteBrowserProfileResult, BedrockAgentCoreControlError> DeleteBrowserProfileOutcome;
typedef Aws::Utils::Outcome<DeleteCodeInterpreterResult, BedrockAgentCoreControlError> DeleteCodeInterpreterOutcome;
typedef Aws::Utils::Outcome<DeleteConfigurationBundleResult, BedrockAgentCoreControlError> DeleteConfigurationBundleOutcome;
typedef Aws::Utils::Outcome<DeleteEvaluatorResult, BedrockAgentCoreControlError> DeleteEvaluatorOutcome;
typedef Aws::Utils::Outcome<DeleteGatewayResult, BedrockAgentCoreControlError> DeleteGatewayOutcome;
typedef Aws::Utils::Outcome<DeleteGatewayRuleResult, BedrockAgentCoreControlError> DeleteGatewayRuleOutcome;
typedef Aws::Utils::Outcome<DeleteGatewayTargetResult, BedrockAgentCoreControlError> DeleteGatewayTargetOutcome;
typedef Aws::Utils::Outcome<DeleteHarnessResult, BedrockAgentCoreControlError> DeleteHarnessOutcome;
typedef Aws::Utils::Outcome<DeleteMemoryResult, BedrockAgentCoreControlError> DeleteMemoryOutcome;
typedef Aws::Utils::Outcome<DeleteOauth2CredentialProviderResult, BedrockAgentCoreControlError> DeleteOauth2CredentialProviderOutcome;
typedef Aws::Utils::Outcome<DeleteOnlineEvaluationConfigResult, BedrockAgentCoreControlError> DeleteOnlineEvaluationConfigOutcome;
typedef Aws::Utils::Outcome<DeletePolicyResult, BedrockAgentCoreControlError> DeletePolicyOutcome;
typedef Aws::Utils::Outcome<DeletePolicyEngineResult, BedrockAgentCoreControlError> DeletePolicyEngineOutcome;
typedef Aws::Utils::Outcome<DeleteRegistryResult, BedrockAgentCoreControlError> DeleteRegistryOutcome;
typedef Aws::Utils::Outcome<DeleteRegistryRecordResult, BedrockAgentCoreControlError> DeleteRegistryRecordOutcome;
typedef Aws::Utils::Outcome<DeleteResourcePolicyResult, BedrockAgentCoreControlError> DeleteResourcePolicyOutcome;
typedef Aws::Utils::Outcome<DeleteWorkloadIdentityResult, BedrockAgentCoreControlError> DeleteWorkloadIdentityOutcome;
typedef Aws::Utils::Outcome<GetAgentRuntimeResult, BedrockAgentCoreControlError> GetAgentRuntimeOutcome;
typedef Aws::Utils::Outcome<GetAgentRuntimeEndpointResult, BedrockAgentCoreControlError> GetAgentRuntimeEndpointOutcome;
typedef Aws::Utils::Outcome<GetApiKeyCredentialProviderResult, BedrockAgentCoreControlError> GetApiKeyCredentialProviderOutcome;
typedef Aws::Utils::Outcome<GetBrowserResult, BedrockAgentCoreControlError> GetBrowserOutcome;
typedef Aws::Utils::Outcome<GetBrowserProfileResult, BedrockAgentCoreControlError> GetBrowserProfileOutcome;
typedef Aws::Utils::Outcome<GetCodeInterpreterResult, BedrockAgentCoreControlError> GetCodeInterpreterOutcome;
typedef Aws::Utils::Outcome<GetConfigurationBundleResult, BedrockAgentCoreControlError> GetConfigurationBundleOutcome;
typedef Aws::Utils::Outcome<GetConfigurationBundleVersionResult, BedrockAgentCoreControlError> GetConfigurationBundleVersionOutcome;
typedef Aws::Utils::Outcome<GetEvaluatorResult, BedrockAgentCoreControlError> GetEvaluatorOutcome;
typedef Aws::Utils::Outcome<GetGatewayResult, BedrockAgentCoreControlError> GetGatewayOutcome;
typedef Aws::Utils::Outcome<GetGatewayRuleResult, BedrockAgentCoreControlError> GetGatewayRuleOutcome;
typedef Aws::Utils::Outcome<GetGatewayTargetResult, BedrockAgentCoreControlError> GetGatewayTargetOutcome;
typedef Aws::Utils::Outcome<GetHarnessResult, BedrockAgentCoreControlError> GetHarnessOutcome;
typedef Aws::Utils::Outcome<GetMemoryResult, BedrockAgentCoreControlError> GetMemoryOutcome;
typedef Aws::Utils::Outcome<GetOauth2CredentialProviderResult, BedrockAgentCoreControlError> GetOauth2CredentialProviderOutcome;
typedef Aws::Utils::Outcome<GetOnlineEvaluationConfigResult, BedrockAgentCoreControlError> GetOnlineEvaluationConfigOutcome;
typedef Aws::Utils::Outcome<GetPolicyResult, BedrockAgentCoreControlError> GetPolicyOutcome;
typedef Aws::Utils::Outcome<GetPolicyEngineResult, BedrockAgentCoreControlError> GetPolicyEngineOutcome;
typedef Aws::Utils::Outcome<GetPolicyGenerationResult, BedrockAgentCoreControlError> GetPolicyGenerationOutcome;
typedef Aws::Utils::Outcome<GetRegistryResult, BedrockAgentCoreControlError> GetRegistryOutcome;
typedef Aws::Utils::Outcome<GetRegistryRecordResult, BedrockAgentCoreControlError> GetRegistryRecordOutcome;
typedef Aws::Utils::Outcome<GetResourcePolicyResult, BedrockAgentCoreControlError> GetResourcePolicyOutcome;
typedef Aws::Utils::Outcome<GetTokenVaultResult, BedrockAgentCoreControlError> GetTokenVaultOutcome;
typedef Aws::Utils::Outcome<GetWorkloadIdentityResult, BedrockAgentCoreControlError> GetWorkloadIdentityOutcome;
typedef Aws::Utils::Outcome<ListAgentRuntimeEndpointsResult, BedrockAgentCoreControlError> ListAgentRuntimeEndpointsOutcome;
typedef Aws::Utils::Outcome<ListAgentRuntimeVersionsResult, BedrockAgentCoreControlError> ListAgentRuntimeVersionsOutcome;
typedef Aws::Utils::Outcome<ListAgentRuntimesResult, BedrockAgentCoreControlError> ListAgentRuntimesOutcome;
typedef Aws::Utils::Outcome<ListApiKeyCredentialProvidersResult, BedrockAgentCoreControlError> ListApiKeyCredentialProvidersOutcome;
typedef Aws::Utils::Outcome<ListBrowserProfilesResult, BedrockAgentCoreControlError> ListBrowserProfilesOutcome;
typedef Aws::Utils::Outcome<ListBrowsersResult, BedrockAgentCoreControlError> ListBrowsersOutcome;
typedef Aws::Utils::Outcome<ListCodeInterpretersResult, BedrockAgentCoreControlError> ListCodeInterpretersOutcome;
typedef Aws::Utils::Outcome<ListConfigurationBundleVersionsResult, BedrockAgentCoreControlError> ListConfigurationBundleVersionsOutcome;
typedef Aws::Utils::Outcome<ListConfigurationBundlesResult, BedrockAgentCoreControlError> ListConfigurationBundlesOutcome;
typedef Aws::Utils::Outcome<ListEvaluatorsResult, BedrockAgentCoreControlError> ListEvaluatorsOutcome;
typedef Aws::Utils::Outcome<ListGatewayRulesResult, BedrockAgentCoreControlError> ListGatewayRulesOutcome;
typedef Aws::Utils::Outcome<ListGatewayTargetsResult, BedrockAgentCoreControlError> ListGatewayTargetsOutcome;
typedef Aws::Utils::Outcome<ListGatewaysResult, BedrockAgentCoreControlError> ListGatewaysOutcome;
typedef Aws::Utils::Outcome<ListHarnessesResult, BedrockAgentCoreControlError> ListHarnessesOutcome;
typedef Aws::Utils::Outcome<ListMemoriesResult, BedrockAgentCoreControlError> ListMemoriesOutcome;
typedef Aws::Utils::Outcome<ListOauth2CredentialProvidersResult, BedrockAgentCoreControlError> ListOauth2CredentialProvidersOutcome;
typedef Aws::Utils::Outcome<ListOnlineEvaluationConfigsResult, BedrockAgentCoreControlError> ListOnlineEvaluationConfigsOutcome;
typedef Aws::Utils::Outcome<ListPoliciesResult, BedrockAgentCoreControlError> ListPoliciesOutcome;
typedef Aws::Utils::Outcome<ListPolicyEnginesResult, BedrockAgentCoreControlError> ListPolicyEnginesOutcome;
typedef Aws::Utils::Outcome<ListPolicyGenerationAssetsResult, BedrockAgentCoreControlError> ListPolicyGenerationAssetsOutcome;
typedef Aws::Utils::Outcome<ListPolicyGenerationsResult, BedrockAgentCoreControlError> ListPolicyGenerationsOutcome;
typedef Aws::Utils::Outcome<ListRegistriesResult, BedrockAgentCoreControlError> ListRegistriesOutcome;
typedef Aws::Utils::Outcome<ListRegistryRecordsResult, BedrockAgentCoreControlError> ListRegistryRecordsOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, BedrockAgentCoreControlError> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<ListWorkloadIdentitiesResult, BedrockAgentCoreControlError> ListWorkloadIdentitiesOutcome;
typedef Aws::Utils::Outcome<PutResourcePolicyResult, BedrockAgentCoreControlError> PutResourcePolicyOutcome;
typedef Aws::Utils::Outcome<SetTokenVaultCMKResult, BedrockAgentCoreControlError> SetTokenVaultCMKOutcome;
typedef Aws::Utils::Outcome<StartPolicyGenerationResult, BedrockAgentCoreControlError> StartPolicyGenerationOutcome;
typedef Aws::Utils::Outcome<SubmitRegistryRecordForApprovalResult, BedrockAgentCoreControlError> SubmitRegistryRecordForApprovalOutcome;
typedef Aws::Utils::Outcome<SynchronizeGatewayTargetsResult, BedrockAgentCoreControlError> SynchronizeGatewayTargetsOutcome;
typedef Aws::Utils::Outcome<TagResourceResult, BedrockAgentCoreControlError> TagResourceOutcome;
typedef Aws::Utils::Outcome<UntagResourceResult, BedrockAgentCoreControlError> UntagResourceOutcome;
typedef Aws::Utils::Outcome<UpdateAgentRuntimeResult, BedrockAgentCoreControlError> UpdateAgentRuntimeOutcome;
typedef Aws::Utils::Outcome<UpdateAgentRuntimeEndpointResult, BedrockAgentCoreControlError> UpdateAgentRuntimeEndpointOutcome;
typedef Aws::Utils::Outcome<UpdateApiKeyCredentialProviderResult, BedrockAgentCoreControlError> UpdateApiKeyCredentialProviderOutcome;
typedef Aws::Utils::Outcome<UpdateConfigurationBundleResult, BedrockAgentCoreControlError> UpdateConfigurationBundleOutcome;
typedef Aws::Utils::Outcome<UpdateEvaluatorResult, BedrockAgentCoreControlError> UpdateEvaluatorOutcome;
typedef Aws::Utils::Outcome<UpdateGatewayResult, BedrockAgentCoreControlError> UpdateGatewayOutcome;
typedef Aws::Utils::Outcome<UpdateGatewayRuleResult, BedrockAgentCoreControlError> UpdateGatewayRuleOutcome;
typedef Aws::Utils::Outcome<UpdateGatewayTargetResult, BedrockAgentCoreControlError> UpdateGatewayTargetOutcome;
typedef Aws::Utils::Outcome<UpdateHarnessResult, BedrockAgentCoreControlError> UpdateHarnessOutcome;
typedef Aws::Utils::Outcome<UpdateMemoryResult, BedrockAgentCoreControlError> UpdateMemoryOutcome;
typedef Aws::Utils::Outcome<UpdateOauth2CredentialProviderResult, BedrockAgentCoreControlError> UpdateOauth2CredentialProviderOutcome;
typedef Aws::Utils::Outcome<UpdateOnlineEvaluationConfigResult, BedrockAgentCoreControlError> UpdateOnlineEvaluationConfigOutcome;
typedef Aws::Utils::Outcome<UpdatePolicyResult, BedrockAgentCoreControlError> UpdatePolicyOutcome;
typedef Aws::Utils::Outcome<UpdatePolicyEngineResult, BedrockAgentCoreControlError> UpdatePolicyEngineOutcome;
typedef Aws::Utils::Outcome<UpdateRegistryResult, BedrockAgentCoreControlError> UpdateRegistryOutcome;
typedef Aws::Utils::Outcome<UpdateRegistryRecordResult, BedrockAgentCoreControlError> UpdateRegistryRecordOutcome;
typedef Aws::Utils::Outcome<UpdateRegistryRecordStatusResult, BedrockAgentCoreControlError> UpdateRegistryRecordStatusOutcome;
typedef Aws::Utils::Outcome<UpdateWorkloadIdentityResult, BedrockAgentCoreControlError> UpdateWorkloadIdentityOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<CreateAgentRuntimeOutcome> CreateAgentRuntimeOutcomeCallable;
typedef std::future<CreateAgentRuntimeEndpointOutcome> CreateAgentRuntimeEndpointOutcomeCallable;
typedef std::future<CreateApiKeyCredentialProviderOutcome> CreateApiKeyCredentialProviderOutcomeCallable;
typedef std::future<CreateBrowserOutcome> CreateBrowserOutcomeCallable;
typedef std::future<CreateBrowserProfileOutcome> CreateBrowserProfileOutcomeCallable;
typedef std::future<CreateCodeInterpreterOutcome> CreateCodeInterpreterOutcomeCallable;
typedef std::future<CreateConfigurationBundleOutcome> CreateConfigurationBundleOutcomeCallable;
typedef std::future<CreateEvaluatorOutcome> CreateEvaluatorOutcomeCallable;
typedef std::future<CreateGatewayOutcome> CreateGatewayOutcomeCallable;
typedef std::future<CreateGatewayRuleOutcome> CreateGatewayRuleOutcomeCallable;
typedef std::future<CreateGatewayTargetOutcome> CreateGatewayTargetOutcomeCallable;
typedef std::future<CreateHarnessOutcome> CreateHarnessOutcomeCallable;
typedef std::future<CreateMemoryOutcome> CreateMemoryOutcomeCallable;
typedef std::future<CreateOauth2CredentialProviderOutcome> CreateOauth2CredentialProviderOutcomeCallable;
typedef std::future<CreateOnlineEvaluationConfigOutcome> CreateOnlineEvaluationConfigOutcomeCallable;
typedef std::future<CreatePolicyOutcome> CreatePolicyOutcomeCallable;
typedef std::future<CreatePolicyEngineOutcome> CreatePolicyEngineOutcomeCallable;
typedef std::future<CreateRegistryOutcome> CreateRegistryOutcomeCallable;
typedef std::future<CreateRegistryRecordOutcome> CreateRegistryRecordOutcomeCallable;
typedef std::future<CreateWorkloadIdentityOutcome> CreateWorkloadIdentityOutcomeCallable;
typedef std::future<DeleteAgentRuntimeOutcome> DeleteAgentRuntimeOutcomeCallable;
typedef std::future<DeleteAgentRuntimeEndpointOutcome> DeleteAgentRuntimeEndpointOutcomeCallable;
typedef std::future<DeleteApiKeyCredentialProviderOutcome> DeleteApiKeyCredentialProviderOutcomeCallable;
typedef std::future<DeleteBrowserOutcome> DeleteBrowserOutcomeCallable;
typedef std::future<DeleteBrowserProfileOutcome> DeleteBrowserProfileOutcomeCallable;
typedef std::future<DeleteCodeInterpreterOutcome> DeleteCodeInterpreterOutcomeCallable;
typedef std::future<DeleteConfigurationBundleOutcome> DeleteConfigurationBundleOutcomeCallable;
typedef std::future<DeleteEvaluatorOutcome> DeleteEvaluatorOutcomeCallable;
typedef std::future<DeleteGatewayOutcome> DeleteGatewayOutcomeCallable;
typedef std::future<DeleteGatewayRuleOutcome> DeleteGatewayRuleOutcomeCallable;
typedef std::future<DeleteGatewayTargetOutcome> DeleteGatewayTargetOutcomeCallable;
typedef std::future<DeleteHarnessOutcome> DeleteHarnessOutcomeCallable;
typedef std::future<DeleteMemoryOutcome> DeleteMemoryOutcomeCallable;
typedef std::future<DeleteOauth2CredentialProviderOutcome> DeleteOauth2CredentialProviderOutcomeCallable;
typedef std::future<DeleteOnlineEvaluationConfigOutcome> DeleteOnlineEvaluationConfigOutcomeCallable;
typedef std::future<DeletePolicyOutcome> DeletePolicyOutcomeCallable;
typedef std::future<DeletePolicyEngineOutcome> DeletePolicyEngineOutcomeCallable;
typedef std::future<DeleteRegistryOutcome> DeleteRegistryOutcomeCallable;
typedef std::future<DeleteRegistryRecordOutcome> DeleteRegistryRecordOutcomeCallable;
typedef std::future<DeleteResourcePolicyOutcome> DeleteResourcePolicyOutcomeCallable;
typedef std::future<DeleteWorkloadIdentityOutcome> DeleteWorkloadIdentityOutcomeCallable;
typedef std::future<GetAgentRuntimeOutcome> GetAgentRuntimeOutcomeCallable;
typedef std::future<GetAgentRuntimeEndpointOutcome> GetAgentRuntimeEndpointOutcomeCallable;
typedef std::future<GetApiKeyCredentialProviderOutcome> GetApiKeyCredentialProviderOutcomeCallable;
typedef std::future<GetBrowserOutcome> GetBrowserOutcomeCallable;
typedef std::future<GetBrowserProfileOutcome> GetBrowserProfileOutcomeCallable;
typedef std::future<GetCodeInterpreterOutcome> GetCodeInterpreterOutcomeCallable;
typedef std::future<GetConfigurationBundleOutcome> GetConfigurationBundleOutcomeCallable;
typedef std::future<GetConfigurationBundleVersionOutcome> GetConfigurationBundleVersionOutcomeCallable;
typedef std::future<GetEvaluatorOutcome> GetEvaluatorOutcomeCallable;
typedef std::future<GetGatewayOutcome> GetGatewayOutcomeCallable;
typedef std::future<GetGatewayRuleOutcome> GetGatewayRuleOutcomeCallable;
typedef std::future<GetGatewayTargetOutcome> GetGatewayTargetOutcomeCallable;
typedef std::future<GetHarnessOutcome> GetHarnessOutcomeCallable;
typedef std::future<GetMemoryOutcome> GetMemoryOutcomeCallable;
typedef std::future<GetOauth2CredentialProviderOutcome> GetOauth2CredentialProviderOutcomeCallable;
typedef std::future<GetOnlineEvaluationConfigOutcome> GetOnlineEvaluationConfigOutcomeCallable;
typedef std::future<GetPolicyOutcome> GetPolicyOutcomeCallable;
typedef std::future<GetPolicyEngineOutcome> GetPolicyEngineOutcomeCallable;
typedef std::future<GetPolicyGenerationOutcome> GetPolicyGenerationOutcomeCallable;
typedef std::future<GetRegistryOutcome> GetRegistryOutcomeCallable;
typedef std::future<GetRegistryRecordOutcome> GetRegistryRecordOutcomeCallable;
typedef std::future<GetResourcePolicyOutcome> GetResourcePolicyOutcomeCallable;
typedef std::future<GetTokenVaultOutcome> GetTokenVaultOutcomeCallable;
typedef std::future<GetWorkloadIdentityOutcome> GetWorkloadIdentityOutcomeCallable;
typedef std::future<ListAgentRuntimeEndpointsOutcome> ListAgentRuntimeEndpointsOutcomeCallable;
typedef std::future<ListAgentRuntimeVersionsOutcome> ListAgentRuntimeVersionsOutcomeCallable;
typedef std::future<ListAgentRuntimesOutcome> ListAgentRuntimesOutcomeCallable;
typedef std::future<ListApiKeyCredentialProvidersOutcome> ListApiKeyCredentialProvidersOutcomeCallable;
typedef std::future<ListBrowserProfilesOutcome> ListBrowserProfilesOutcomeCallable;
typedef std::future<ListBrowsersOutcome> ListBrowsersOutcomeCallable;
typedef std::future<ListCodeInterpretersOutcome> ListCodeInterpretersOutcomeCallable;
typedef std::future<ListConfigurationBundleVersionsOutcome> ListConfigurationBundleVersionsOutcomeCallable;
typedef std::future<ListConfigurationBundlesOutcome> ListConfigurationBundlesOutcomeCallable;
typedef std::future<ListEvaluatorsOutcome> ListEvaluatorsOutcomeCallable;
typedef std::future<ListGatewayRulesOutcome> ListGatewayRulesOutcomeCallable;
typedef std::future<ListGatewayTargetsOutcome> ListGatewayTargetsOutcomeCallable;
typedef std::future<ListGatewaysOutcome> ListGatewaysOutcomeCallable;
typedef std::future<ListHarnessesOutcome> ListHarnessesOutcomeCallable;
typedef std::future<ListMemoriesOutcome> ListMemoriesOutcomeCallable;
typedef std::future<ListOauth2CredentialProvidersOutcome> ListOauth2CredentialProvidersOutcomeCallable;
typedef std::future<ListOnlineEvaluationConfigsOutcome> ListOnlineEvaluationConfigsOutcomeCallable;
typedef std::future<ListPoliciesOutcome> ListPoliciesOutcomeCallable;
typedef std::future<ListPolicyEnginesOutcome> ListPolicyEnginesOutcomeCallable;
typedef std::future<ListPolicyGenerationAssetsOutcome> ListPolicyGenerationAssetsOutcomeCallable;
typedef std::future<ListPolicyGenerationsOutcome> ListPolicyGenerationsOutcomeCallable;
typedef std::future<ListRegistriesOutcome> ListRegistriesOutcomeCallable;
typedef std::future<ListRegistryRecordsOutcome> ListRegistryRecordsOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<ListWorkloadIdentitiesOutcome> ListWorkloadIdentitiesOutcomeCallable;
typedef std::future<PutResourcePolicyOutcome> PutResourcePolicyOutcomeCallable;
typedef std::future<SetTokenVaultCMKOutcome> SetTokenVaultCMKOutcomeCallable;
typedef std::future<StartPolicyGenerationOutcome> StartPolicyGenerationOutcomeCallable;
typedef std::future<SubmitRegistryRecordForApprovalOutcome> SubmitRegistryRecordForApprovalOutcomeCallable;
typedef std::future<SynchronizeGatewayTargetsOutcome> SynchronizeGatewayTargetsOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
typedef std::future<UpdateAgentRuntimeOutcome> UpdateAgentRuntimeOutcomeCallable;
typedef std::future<UpdateAgentRuntimeEndpointOutcome> UpdateAgentRuntimeEndpointOutcomeCallable;
typedef std::future<UpdateApiKeyCredentialProviderOutcome> UpdateApiKeyCredentialProviderOutcomeCallable;
typedef std::future<UpdateConfigurationBundleOutcome> UpdateConfigurationBundleOutcomeCallable;
typedef std::future<UpdateEvaluatorOutcome> UpdateEvaluatorOutcomeCallable;
typedef std::future<UpdateGatewayOutcome> UpdateGatewayOutcomeCallable;
typedef std::future<UpdateGatewayRuleOutcome> UpdateGatewayRuleOutcomeCallable;
typedef std::future<UpdateGatewayTargetOutcome> UpdateGatewayTargetOutcomeCallable;
typedef std::future<UpdateHarnessOutcome> UpdateHarnessOutcomeCallable;
typedef std::future<UpdateMemoryOutcome> UpdateMemoryOutcomeCallable;
typedef std::future<UpdateOauth2CredentialProviderOutcome> UpdateOauth2CredentialProviderOutcomeCallable;
typedef std::future<UpdateOnlineEvaluationConfigOutcome> UpdateOnlineEvaluationConfigOutcomeCallable;
typedef std::future<UpdatePolicyOutcome> UpdatePolicyOutcomeCallable;
typedef std::future<UpdatePolicyEngineOutcome> UpdatePolicyEngineOutcomeCallable;
typedef std::future<UpdateRegistryOutcome> UpdateRegistryOutcomeCallable;
typedef std::future<UpdateRegistryRecordOutcome> UpdateRegistryRecordOutcomeCallable;
typedef std::future<UpdateRegistryRecordStatusOutcome> UpdateRegistryRecordStatusOutcomeCallable;
typedef std::future<UpdateWorkloadIdentityOutcome> UpdateWorkloadIdentityOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class BedrockAgentCoreControlClient;

/* Service model async handlers definitions */
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::CreateAgentRuntimeRequest&,
                           const Model::CreateAgentRuntimeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateAgentRuntimeResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::CreateAgentRuntimeEndpointRequest&,
                           const Model::CreateAgentRuntimeEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateAgentRuntimeEndpointResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::CreateApiKeyCredentialProviderRequest&,
                           const Model::CreateApiKeyCredentialProviderOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateApiKeyCredentialProviderResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::CreateBrowserRequest&, const Model::CreateBrowserOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateBrowserResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::CreateBrowserProfileRequest&,
                           const Model::CreateBrowserProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateBrowserProfileResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::CreateCodeInterpreterRequest&,
                           const Model::CreateCodeInterpreterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateCodeInterpreterResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::CreateConfigurationBundleRequest&,
                           const Model::CreateConfigurationBundleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateConfigurationBundleResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::CreateEvaluatorRequest&, const Model::CreateEvaluatorOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateEvaluatorResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::CreateGatewayRequest&, const Model::CreateGatewayOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateGatewayResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::CreateGatewayRuleRequest&,
                           const Model::CreateGatewayRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateGatewayRuleResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::CreateGatewayTargetRequest&,
                           const Model::CreateGatewayTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateGatewayTargetResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::CreateHarnessRequest&, const Model::CreateHarnessOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateHarnessResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::CreateMemoryRequest&, const Model::CreateMemoryOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateMemoryResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::CreateOauth2CredentialProviderRequest&,
                           const Model::CreateOauth2CredentialProviderOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateOauth2CredentialProviderResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::CreateOnlineEvaluationConfigRequest&,
                           const Model::CreateOnlineEvaluationConfigOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateOnlineEvaluationConfigResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::CreatePolicyRequest&, const Model::CreatePolicyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreatePolicyResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::CreatePolicyEngineRequest&,
                           const Model::CreatePolicyEngineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreatePolicyEngineResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::CreateRegistryRequest&, const Model::CreateRegistryOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateRegistryResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::CreateRegistryRecordRequest&,
                           const Model::CreateRegistryRecordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateRegistryRecordResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::CreateWorkloadIdentityRequest&,
                           const Model::CreateWorkloadIdentityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateWorkloadIdentityResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::DeleteAgentRuntimeRequest&,
                           const Model::DeleteAgentRuntimeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteAgentRuntimeResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::DeleteAgentRuntimeEndpointRequest&,
                           const Model::DeleteAgentRuntimeEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteAgentRuntimeEndpointResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::DeleteApiKeyCredentialProviderRequest&,
                           const Model::DeleteApiKeyCredentialProviderOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteApiKeyCredentialProviderResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::DeleteBrowserRequest&, const Model::DeleteBrowserOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteBrowserResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::DeleteBrowserProfileRequest&,
                           const Model::DeleteBrowserProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteBrowserProfileResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::DeleteCodeInterpreterRequest&,
                           const Model::DeleteCodeInterpreterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteCodeInterpreterResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::DeleteConfigurationBundleRequest&,
                           const Model::DeleteConfigurationBundleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteConfigurationBundleResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::DeleteEvaluatorRequest&, const Model::DeleteEvaluatorOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteEvaluatorResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::DeleteGatewayRequest&, const Model::DeleteGatewayOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteGatewayResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::DeleteGatewayRuleRequest&,
                           const Model::DeleteGatewayRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteGatewayRuleResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::DeleteGatewayTargetRequest&,
                           const Model::DeleteGatewayTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteGatewayTargetResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::DeleteHarnessRequest&, const Model::DeleteHarnessOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteHarnessResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::DeleteMemoryRequest&, const Model::DeleteMemoryOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteMemoryResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::DeleteOauth2CredentialProviderRequest&,
                           const Model::DeleteOauth2CredentialProviderOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteOauth2CredentialProviderResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::DeleteOnlineEvaluationConfigRequest&,
                           const Model::DeleteOnlineEvaluationConfigOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteOnlineEvaluationConfigResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::DeletePolicyRequest&, const Model::DeletePolicyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeletePolicyResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::DeletePolicyEngineRequest&,
                           const Model::DeletePolicyEngineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeletePolicyEngineResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::DeleteRegistryRequest&, const Model::DeleteRegistryOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteRegistryResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::DeleteRegistryRecordRequest&,
                           const Model::DeleteRegistryRecordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteRegistryRecordResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::DeleteResourcePolicyRequest&,
                           const Model::DeleteResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteResourcePolicyResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::DeleteWorkloadIdentityRequest&,
                           const Model::DeleteWorkloadIdentityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteWorkloadIdentityResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::GetAgentRuntimeRequest&, const Model::GetAgentRuntimeOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAgentRuntimeResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::GetAgentRuntimeEndpointRequest&,
                           const Model::GetAgentRuntimeEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAgentRuntimeEndpointResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::GetApiKeyCredentialProviderRequest&,
                           const Model::GetApiKeyCredentialProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetApiKeyCredentialProviderResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::GetBrowserRequest&, const Model::GetBrowserOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetBrowserResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::GetBrowserProfileRequest&,
                           const Model::GetBrowserProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetBrowserProfileResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::GetCodeInterpreterRequest&,
                           const Model::GetCodeInterpreterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetCodeInterpreterResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::GetConfigurationBundleRequest&,
                           const Model::GetConfigurationBundleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetConfigurationBundleResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::GetConfigurationBundleVersionRequest&,
                           const Model::GetConfigurationBundleVersionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetConfigurationBundleVersionResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::GetEvaluatorRequest&, const Model::GetEvaluatorOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetEvaluatorResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::GetGatewayRequest&, const Model::GetGatewayOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetGatewayResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::GetGatewayRuleRequest&, const Model::GetGatewayRuleOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetGatewayRuleResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::GetGatewayTargetRequest&,
                           const Model::GetGatewayTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetGatewayTargetResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::GetHarnessRequest&, const Model::GetHarnessOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetHarnessResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::GetMemoryRequest&, const Model::GetMemoryOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetMemoryResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::GetOauth2CredentialProviderRequest&,
                           const Model::GetOauth2CredentialProviderOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetOauth2CredentialProviderResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::GetOnlineEvaluationConfigRequest&,
                           const Model::GetOnlineEvaluationConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetOnlineEvaluationConfigResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::GetPolicyRequest&, const Model::GetPolicyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetPolicyResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::GetPolicyEngineRequest&, const Model::GetPolicyEngineOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetPolicyEngineResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::GetPolicyGenerationRequest&,
                           const Model::GetPolicyGenerationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetPolicyGenerationResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::GetRegistryRequest&, const Model::GetRegistryOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetRegistryResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::GetRegistryRecordRequest&,
                           const Model::GetRegistryRecordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetRegistryRecordResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::GetResourcePolicyRequest&,
                           const Model::GetResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetResourcePolicyResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::GetTokenVaultRequest&, const Model::GetTokenVaultOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetTokenVaultResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::GetWorkloadIdentityRequest&,
                           const Model::GetWorkloadIdentityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetWorkloadIdentityResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::ListAgentRuntimeEndpointsRequest&,
                           const Model::ListAgentRuntimeEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAgentRuntimeEndpointsResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::ListAgentRuntimeVersionsRequest&,
                           const Model::ListAgentRuntimeVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAgentRuntimeVersionsResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::ListAgentRuntimesRequest&,
                           const Model::ListAgentRuntimesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListAgentRuntimesResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::ListApiKeyCredentialProvidersRequest&,
                           const Model::ListApiKeyCredentialProvidersOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListApiKeyCredentialProvidersResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::ListBrowserProfilesRequest&,
                           const Model::ListBrowserProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListBrowserProfilesResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::ListBrowsersRequest&, const Model::ListBrowsersOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListBrowsersResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::ListCodeInterpretersRequest&,
                           const Model::ListCodeInterpretersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListCodeInterpretersResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::ListConfigurationBundleVersionsRequest&,
                           const Model::ListConfigurationBundleVersionsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListConfigurationBundleVersionsResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::ListConfigurationBundlesRequest&,
                           const Model::ListConfigurationBundlesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListConfigurationBundlesResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::ListEvaluatorsRequest&, const Model::ListEvaluatorsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListEvaluatorsResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::ListGatewayRulesRequest&,
                           const Model::ListGatewayRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListGatewayRulesResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::ListGatewayTargetsRequest&,
                           const Model::ListGatewayTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListGatewayTargetsResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::ListGatewaysRequest&, const Model::ListGatewaysOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListGatewaysResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::ListHarnessesRequest&, const Model::ListHarnessesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListHarnessesResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::ListMemoriesRequest&, const Model::ListMemoriesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListMemoriesResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::ListOauth2CredentialProvidersRequest&,
                           const Model::ListOauth2CredentialProvidersOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListOauth2CredentialProvidersResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::ListOnlineEvaluationConfigsRequest&,
                           const Model::ListOnlineEvaluationConfigsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListOnlineEvaluationConfigsResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::ListPoliciesRequest&, const Model::ListPoliciesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListPoliciesResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::ListPolicyEnginesRequest&,
                           const Model::ListPolicyEnginesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListPolicyEnginesResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::ListPolicyGenerationAssetsRequest&,
                           const Model::ListPolicyGenerationAssetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListPolicyGenerationAssetsResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::ListPolicyGenerationsRequest&,
                           const Model::ListPolicyGenerationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListPolicyGenerationsResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::ListRegistriesRequest&, const Model::ListRegistriesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListRegistriesResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::ListRegistryRecordsRequest&,
                           const Model::ListRegistryRecordsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListRegistryRecordsResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::ListTagsForResourceRequest&,
                           const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::ListWorkloadIdentitiesRequest&,
                           const Model::ListWorkloadIdentitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListWorkloadIdentitiesResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::PutResourcePolicyRequest&,
                           const Model::PutResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutResourcePolicyResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::SetTokenVaultCMKRequest&,
                           const Model::SetTokenVaultCMKOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SetTokenVaultCMKResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::StartPolicyGenerationRequest&,
                           const Model::StartPolicyGenerationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartPolicyGenerationResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::SubmitRegistryRecordForApprovalRequest&,
                           const Model::SubmitRegistryRecordForApprovalOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SubmitRegistryRecordForApprovalResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::SynchronizeGatewayTargetsRequest&,
                           const Model::SynchronizeGatewayTargetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SynchronizeGatewayTargetsResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::UpdateAgentRuntimeRequest&,
                           const Model::UpdateAgentRuntimeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateAgentRuntimeResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::UpdateAgentRuntimeEndpointRequest&,
                           const Model::UpdateAgentRuntimeEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateAgentRuntimeEndpointResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::UpdateApiKeyCredentialProviderRequest&,
                           const Model::UpdateApiKeyCredentialProviderOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateApiKeyCredentialProviderResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::UpdateConfigurationBundleRequest&,
                           const Model::UpdateConfigurationBundleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateConfigurationBundleResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::UpdateEvaluatorRequest&, const Model::UpdateEvaluatorOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateEvaluatorResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::UpdateGatewayRequest&, const Model::UpdateGatewayOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateGatewayResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::UpdateGatewayRuleRequest&,
                           const Model::UpdateGatewayRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateGatewayRuleResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::UpdateGatewayTargetRequest&,
                           const Model::UpdateGatewayTargetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateGatewayTargetResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::UpdateHarnessRequest&, const Model::UpdateHarnessOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateHarnessResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::UpdateMemoryRequest&, const Model::UpdateMemoryOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateMemoryResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::UpdateOauth2CredentialProviderRequest&,
                           const Model::UpdateOauth2CredentialProviderOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateOauth2CredentialProviderResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::UpdateOnlineEvaluationConfigRequest&,
                           const Model::UpdateOnlineEvaluationConfigOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateOnlineEvaluationConfigResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::UpdatePolicyRequest&, const Model::UpdatePolicyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdatePolicyResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::UpdatePolicyEngineRequest&,
                           const Model::UpdatePolicyEngineOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdatePolicyEngineResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::UpdateRegistryRequest&, const Model::UpdateRegistryOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateRegistryResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::UpdateRegistryRecordRequest&,
                           const Model::UpdateRegistryRecordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateRegistryRecordResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::UpdateRegistryRecordStatusRequest&,
                           const Model::UpdateRegistryRecordStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateRegistryRecordStatusResponseReceivedHandler;
typedef std::function<void(const BedrockAgentCoreControlClient*, const Model::UpdateWorkloadIdentityRequest&,
                           const Model::UpdateWorkloadIdentityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateWorkloadIdentityResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
