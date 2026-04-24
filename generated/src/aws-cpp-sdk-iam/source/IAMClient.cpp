/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/iam/IAMClient.h>
#include <aws/iam/IAMEndpointProvider.h>
#include <aws/iam/IAMErrorMarshaller.h>
#include <aws/iam/model/AcceptDelegationRequestRequest.h>
#include <aws/iam/model/AddClientIDToOpenIDConnectProviderRequest.h>
#include <aws/iam/model/AddRoleToInstanceProfileRequest.h>
#include <aws/iam/model/AddUserToGroupRequest.h>
#include <aws/iam/model/AssociateDelegationRequestRequest.h>
#include <aws/iam/model/AttachGroupPolicyRequest.h>
#include <aws/iam/model/AttachRolePolicyRequest.h>
#include <aws/iam/model/AttachUserPolicyRequest.h>
#include <aws/iam/model/ChangePasswordRequest.h>
#include <aws/iam/model/CreateAccessKeyRequest.h>
#include <aws/iam/model/CreateAccountAliasRequest.h>
#include <aws/iam/model/CreateDelegationRequestRequest.h>
#include <aws/iam/model/CreateGroupRequest.h>
#include <aws/iam/model/CreateInstanceProfileRequest.h>
#include <aws/iam/model/CreateLoginProfileRequest.h>
#include <aws/iam/model/CreateOpenIDConnectProviderRequest.h>
#include <aws/iam/model/CreatePolicyRequest.h>
#include <aws/iam/model/CreatePolicyVersionRequest.h>
#include <aws/iam/model/CreateRoleRequest.h>
#include <aws/iam/model/CreateSAMLProviderRequest.h>
#include <aws/iam/model/CreateServiceLinkedRoleRequest.h>
#include <aws/iam/model/CreateServiceSpecificCredentialRequest.h>
#include <aws/iam/model/CreateUserRequest.h>
#include <aws/iam/model/CreateVirtualMFADeviceRequest.h>
#include <aws/iam/model/DeactivateMFADeviceRequest.h>
#include <aws/iam/model/DeleteAccessKeyRequest.h>
#include <aws/iam/model/DeleteAccountAliasRequest.h>
#include <aws/iam/model/DeleteAccountPasswordPolicyRequest.h>
#include <aws/iam/model/DeleteGroupPolicyRequest.h>
#include <aws/iam/model/DeleteGroupRequest.h>
#include <aws/iam/model/DeleteInstanceProfileRequest.h>
#include <aws/iam/model/DeleteLoginProfileRequest.h>
#include <aws/iam/model/DeleteOpenIDConnectProviderRequest.h>
#include <aws/iam/model/DeletePolicyRequest.h>
#include <aws/iam/model/DeletePolicyVersionRequest.h>
#include <aws/iam/model/DeleteRolePermissionsBoundaryRequest.h>
#include <aws/iam/model/DeleteRolePolicyRequest.h>
#include <aws/iam/model/DeleteRoleRequest.h>
#include <aws/iam/model/DeleteSAMLProviderRequest.h>
#include <aws/iam/model/DeleteSSHPublicKeyRequest.h>
#include <aws/iam/model/DeleteServerCertificateRequest.h>
#include <aws/iam/model/DeleteServiceLinkedRoleRequest.h>
#include <aws/iam/model/DeleteServiceSpecificCredentialRequest.h>
#include <aws/iam/model/DeleteSigningCertificateRequest.h>
#include <aws/iam/model/DeleteUserPermissionsBoundaryRequest.h>
#include <aws/iam/model/DeleteUserPolicyRequest.h>
#include <aws/iam/model/DeleteUserRequest.h>
#include <aws/iam/model/DeleteVirtualMFADeviceRequest.h>
#include <aws/iam/model/DetachGroupPolicyRequest.h>
#include <aws/iam/model/DetachRolePolicyRequest.h>
#include <aws/iam/model/DetachUserPolicyRequest.h>
#include <aws/iam/model/DisableOrganizationsRootCredentialsManagementRequest.h>
#include <aws/iam/model/DisableOrganizationsRootSessionsRequest.h>
#include <aws/iam/model/DisableOutboundWebIdentityFederationRequest.h>
#include <aws/iam/model/EnableMFADeviceRequest.h>
#include <aws/iam/model/EnableOrganizationsRootCredentialsManagementRequest.h>
#include <aws/iam/model/EnableOrganizationsRootSessionsRequest.h>
#include <aws/iam/model/EnableOutboundWebIdentityFederationRequest.h>
#include <aws/iam/model/GenerateCredentialReportRequest.h>
#include <aws/iam/model/GenerateOrganizationsAccessReportRequest.h>
#include <aws/iam/model/GenerateServiceLastAccessedDetailsRequest.h>
#include <aws/iam/model/GetAccessKeyLastUsedRequest.h>
#include <aws/iam/model/GetAccountAuthorizationDetailsRequest.h>
#include <aws/iam/model/GetAccountPasswordPolicyRequest.h>
#include <aws/iam/model/GetAccountSummaryRequest.h>
#include <aws/iam/model/GetContextKeysForCustomPolicyRequest.h>
#include <aws/iam/model/GetContextKeysForPrincipalPolicyRequest.h>
#include <aws/iam/model/GetCredentialReportRequest.h>
#include <aws/iam/model/GetDelegationRequestRequest.h>
#include <aws/iam/model/GetGroupPolicyRequest.h>
#include <aws/iam/model/GetGroupRequest.h>
#include <aws/iam/model/GetHumanReadableSummaryRequest.h>
#include <aws/iam/model/GetInstanceProfileRequest.h>
#include <aws/iam/model/GetLoginProfileRequest.h>
#include <aws/iam/model/GetMFADeviceRequest.h>
#include <aws/iam/model/GetOpenIDConnectProviderRequest.h>
#include <aws/iam/model/GetOrganizationsAccessReportRequest.h>
#include <aws/iam/model/GetOutboundWebIdentityFederationInfoRequest.h>
#include <aws/iam/model/GetPolicyRequest.h>
#include <aws/iam/model/GetPolicyVersionRequest.h>
#include <aws/iam/model/GetRolePolicyRequest.h>
#include <aws/iam/model/GetRoleRequest.h>
#include <aws/iam/model/GetSAMLProviderRequest.h>
#include <aws/iam/model/GetSSHPublicKeyRequest.h>
#include <aws/iam/model/GetServerCertificateRequest.h>
#include <aws/iam/model/GetServiceLastAccessedDetailsRequest.h>
#include <aws/iam/model/GetServiceLastAccessedDetailsWithEntitiesRequest.h>
#include <aws/iam/model/GetServiceLinkedRoleDeletionStatusRequest.h>
#include <aws/iam/model/GetUserPolicyRequest.h>
#include <aws/iam/model/GetUserRequest.h>
#include <aws/iam/model/ListAccessKeysRequest.h>
#include <aws/iam/model/ListAccountAliasesRequest.h>
#include <aws/iam/model/ListAttachedGroupPoliciesRequest.h>
#include <aws/iam/model/ListAttachedRolePoliciesRequest.h>
#include <aws/iam/model/ListAttachedUserPoliciesRequest.h>
#include <aws/iam/model/ListDelegationRequestsRequest.h>
#include <aws/iam/model/ListEntitiesForPolicyRequest.h>
#include <aws/iam/model/ListGroupPoliciesRequest.h>
#include <aws/iam/model/ListGroupsForUserRequest.h>
#include <aws/iam/model/ListGroupsRequest.h>
#include <aws/iam/model/ListInstanceProfileTagsRequest.h>
#include <aws/iam/model/ListInstanceProfilesForRoleRequest.h>
#include <aws/iam/model/ListInstanceProfilesRequest.h>
#include <aws/iam/model/ListMFADeviceTagsRequest.h>
#include <aws/iam/model/ListMFADevicesRequest.h>
#include <aws/iam/model/ListOpenIDConnectProviderTagsRequest.h>
#include <aws/iam/model/ListOpenIDConnectProvidersRequest.h>
#include <aws/iam/model/ListOrganizationsFeaturesRequest.h>
#include <aws/iam/model/ListPoliciesGrantingServiceAccessRequest.h>
#include <aws/iam/model/ListPoliciesRequest.h>
#include <aws/iam/model/ListPolicyTagsRequest.h>
#include <aws/iam/model/ListPolicyVersionsRequest.h>
#include <aws/iam/model/ListRolePoliciesRequest.h>
#include <aws/iam/model/ListRoleTagsRequest.h>
#include <aws/iam/model/ListRolesRequest.h>
#include <aws/iam/model/ListSAMLProviderTagsRequest.h>
#include <aws/iam/model/ListSAMLProvidersRequest.h>
#include <aws/iam/model/ListSSHPublicKeysRequest.h>
#include <aws/iam/model/ListServerCertificateTagsRequest.h>
#include <aws/iam/model/ListServerCertificatesRequest.h>
#include <aws/iam/model/ListServiceSpecificCredentialsRequest.h>
#include <aws/iam/model/ListSigningCertificatesRequest.h>
#include <aws/iam/model/ListUserPoliciesRequest.h>
#include <aws/iam/model/ListUserTagsRequest.h>
#include <aws/iam/model/ListUsersRequest.h>
#include <aws/iam/model/ListVirtualMFADevicesRequest.h>
#include <aws/iam/model/PutGroupPolicyRequest.h>
#include <aws/iam/model/PutRolePermissionsBoundaryRequest.h>
#include <aws/iam/model/PutRolePolicyRequest.h>
#include <aws/iam/model/PutUserPermissionsBoundaryRequest.h>
#include <aws/iam/model/PutUserPolicyRequest.h>
#include <aws/iam/model/RejectDelegationRequestRequest.h>
#include <aws/iam/model/RemoveClientIDFromOpenIDConnectProviderRequest.h>
#include <aws/iam/model/RemoveRoleFromInstanceProfileRequest.h>
#include <aws/iam/model/RemoveUserFromGroupRequest.h>
#include <aws/iam/model/ResetServiceSpecificCredentialRequest.h>
#include <aws/iam/model/ResyncMFADeviceRequest.h>
#include <aws/iam/model/SendDelegationTokenRequest.h>
#include <aws/iam/model/SetDefaultPolicyVersionRequest.h>
#include <aws/iam/model/SetSecurityTokenServicePreferencesRequest.h>
#include <aws/iam/model/SimulateCustomPolicyRequest.h>
#include <aws/iam/model/SimulatePrincipalPolicyRequest.h>
#include <aws/iam/model/TagInstanceProfileRequest.h>
#include <aws/iam/model/TagMFADeviceRequest.h>
#include <aws/iam/model/TagOpenIDConnectProviderRequest.h>
#include <aws/iam/model/TagPolicyRequest.h>
#include <aws/iam/model/TagRoleRequest.h>
#include <aws/iam/model/TagSAMLProviderRequest.h>
#include <aws/iam/model/TagServerCertificateRequest.h>
#include <aws/iam/model/TagUserRequest.h>
#include <aws/iam/model/UntagInstanceProfileRequest.h>
#include <aws/iam/model/UntagMFADeviceRequest.h>
#include <aws/iam/model/UntagOpenIDConnectProviderRequest.h>
#include <aws/iam/model/UntagPolicyRequest.h>
#include <aws/iam/model/UntagRoleRequest.h>
#include <aws/iam/model/UntagSAMLProviderRequest.h>
#include <aws/iam/model/UntagServerCertificateRequest.h>
#include <aws/iam/model/UntagUserRequest.h>
#include <aws/iam/model/UpdateAccessKeyRequest.h>
#include <aws/iam/model/UpdateAccountPasswordPolicyRequest.h>
#include <aws/iam/model/UpdateAssumeRolePolicyRequest.h>
#include <aws/iam/model/UpdateDelegationRequestRequest.h>
#include <aws/iam/model/UpdateGroupRequest.h>
#include <aws/iam/model/UpdateLoginProfileRequest.h>
#include <aws/iam/model/UpdateOpenIDConnectProviderThumbprintRequest.h>
#include <aws/iam/model/UpdateRoleDescriptionRequest.h>
#include <aws/iam/model/UpdateRoleRequest.h>
#include <aws/iam/model/UpdateSAMLProviderRequest.h>
#include <aws/iam/model/UpdateSSHPublicKeyRequest.h>
#include <aws/iam/model/UpdateServerCertificateRequest.h>
#include <aws/iam/model/UpdateServiceSpecificCredentialRequest.h>
#include <aws/iam/model/UpdateSigningCertificateRequest.h>
#include <aws/iam/model/UpdateUserRequest.h>
#include <aws/iam/model/UploadSSHPublicKeyRequest.h>
#include <aws/iam/model/UploadServerCertificateRequest.h>
#include <aws/iam/model/UploadSigningCertificateRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::IAM;
using namespace Aws::IAM::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace IAM {
const char SERVICE_NAME[] = "iam";
const char ALLOCATION_TAG[] = "IAMClient";
}  // namespace IAM
}  // namespace Aws
const char* IAMClient::GetServiceName() { return SERVICE_NAME; }
const char* IAMClient::GetAllocationTag() { return ALLOCATION_TAG; }

IAMClient::IAMClient(const IAM::IAMClientConfiguration& clientConfiguration, std::shared_ptr<IAMEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IAMErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<IAMEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IAMClient::IAMClient(const AWSCredentials& credentials, std::shared_ptr<IAMEndpointProviderBase> endpointProvider,
                     const IAM::IAMClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IAMErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<IAMEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IAMClient::IAMClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<IAMEndpointProviderBase> endpointProvider, const IAM::IAMClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IAMErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<IAMEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
IAMClient::IAMClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IAMErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<IAMEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IAMClient::IAMClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IAMErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<IAMEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IAMClient::IAMClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IAMErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<IAMEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
IAMClient::~IAMClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<IAMEndpointProviderBase>& IAMClient::accessEndpointProvider() { return m_endpointProvider; }

void IAMClient::init(const IAM::IAMClientConfiguration& config) {
  AWSClient::SetServiceClientName("IAM");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "iam");
}

void IAMClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}

Aws::String IAMClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const {
  if (!m_endpointProvider) {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Presigned URL generating failed. Endpoint provider is not initialized.");
    return "";
  }
  Aws::Endpoint::EndpointParameters endpointParameters;
  endpointParameters.emplace_back(Aws::Endpoint::EndpointParameter("Region", Aws::String(region)));
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(endpointParameters);
  if (!endpointResolutionOutcome.IsSuccess()) {
    AWS_LOGSTREAM_ERROR(ALLOCATION_TAG, "Endpoint resolution failed: " << endpointResolutionOutcome.GetError().GetMessage());
    return "";
  }
  Aws::StringStream ss;
  ss << "?" << requestToConvert.SerializePayload();
  endpointResolutionOutcome.GetResult().SetQueryString(ss.str());

  return GeneratePresignedUrl(endpointResolutionOutcome.GetResult().GetURI(), Aws::Http::HttpMethod::HTTP_GET, region, 3600);
}

IAMClient::InvokeOperationOutcome IAMClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                                    Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_endpointProvider, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_telemetryProvider->getTracer(serviceName, {});
  auto meter = m_telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}
AcceptDelegationRequestOutcome IAMClient::AcceptDelegationRequest(const AcceptDelegationRequestRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AcceptDelegationRequestOutcome(result.GetResultWithOwnership())
                            : AcceptDelegationRequestOutcome(std::move(result.GetError()));
}

AddClientIDToOpenIDConnectProviderOutcome IAMClient::AddClientIDToOpenIDConnectProvider(
    const AddClientIDToOpenIDConnectProviderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddClientIDToOpenIDConnectProviderOutcome(result.GetResultWithOwnership())
                            : AddClientIDToOpenIDConnectProviderOutcome(std::move(result.GetError()));
}

AddRoleToInstanceProfileOutcome IAMClient::AddRoleToInstanceProfile(const AddRoleToInstanceProfileRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddRoleToInstanceProfileOutcome(result.GetResultWithOwnership())
                            : AddRoleToInstanceProfileOutcome(std::move(result.GetError()));
}

AddUserToGroupOutcome IAMClient::AddUserToGroup(const AddUserToGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddUserToGroupOutcome(result.GetResultWithOwnership()) : AddUserToGroupOutcome(std::move(result.GetError()));
}

AssociateDelegationRequestOutcome IAMClient::AssociateDelegationRequest(const AssociateDelegationRequestRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateDelegationRequestOutcome(result.GetResultWithOwnership())
                            : AssociateDelegationRequestOutcome(std::move(result.GetError()));
}

AttachGroupPolicyOutcome IAMClient::AttachGroupPolicy(const AttachGroupPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AttachGroupPolicyOutcome(result.GetResultWithOwnership())
                            : AttachGroupPolicyOutcome(std::move(result.GetError()));
}

AttachRolePolicyOutcome IAMClient::AttachRolePolicy(const AttachRolePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AttachRolePolicyOutcome(result.GetResultWithOwnership())
                            : AttachRolePolicyOutcome(std::move(result.GetError()));
}

AttachUserPolicyOutcome IAMClient::AttachUserPolicy(const AttachUserPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AttachUserPolicyOutcome(result.GetResultWithOwnership())
                            : AttachUserPolicyOutcome(std::move(result.GetError()));
}

ChangePasswordOutcome IAMClient::ChangePassword(const ChangePasswordRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ChangePasswordOutcome(result.GetResultWithOwnership()) : ChangePasswordOutcome(std::move(result.GetError()));
}

CreateAccessKeyOutcome IAMClient::CreateAccessKey(const CreateAccessKeyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAccessKeyOutcome(result.GetResultWithOwnership())
                            : CreateAccessKeyOutcome(std::move(result.GetError()));
}

CreateAccountAliasOutcome IAMClient::CreateAccountAlias(const CreateAccountAliasRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAccountAliasOutcome(result.GetResultWithOwnership())
                            : CreateAccountAliasOutcome(std::move(result.GetError()));
}

CreateDelegationRequestOutcome IAMClient::CreateDelegationRequest(const CreateDelegationRequestRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDelegationRequestOutcome(result.GetResultWithOwnership())
                            : CreateDelegationRequestOutcome(std::move(result.GetError()));
}

CreateGroupOutcome IAMClient::CreateGroup(const CreateGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateGroupOutcome(result.GetResultWithOwnership()) : CreateGroupOutcome(std::move(result.GetError()));
}

CreateInstanceProfileOutcome IAMClient::CreateInstanceProfile(const CreateInstanceProfileRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateInstanceProfileOutcome(result.GetResultWithOwnership())
                            : CreateInstanceProfileOutcome(std::move(result.GetError()));
}

CreateLoginProfileOutcome IAMClient::CreateLoginProfile(const CreateLoginProfileRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateLoginProfileOutcome(result.GetResultWithOwnership())
                            : CreateLoginProfileOutcome(std::move(result.GetError()));
}

CreateOpenIDConnectProviderOutcome IAMClient::CreateOpenIDConnectProvider(const CreateOpenIDConnectProviderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateOpenIDConnectProviderOutcome(result.GetResultWithOwnership())
                            : CreateOpenIDConnectProviderOutcome(std::move(result.GetError()));
}

CreatePolicyOutcome IAMClient::CreatePolicy(const CreatePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePolicyOutcome(result.GetResultWithOwnership()) : CreatePolicyOutcome(std::move(result.GetError()));
}

CreatePolicyVersionOutcome IAMClient::CreatePolicyVersion(const CreatePolicyVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePolicyVersionOutcome(result.GetResultWithOwnership())
                            : CreatePolicyVersionOutcome(std::move(result.GetError()));
}

CreateRoleOutcome IAMClient::CreateRole(const CreateRoleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRoleOutcome(result.GetResultWithOwnership()) : CreateRoleOutcome(std::move(result.GetError()));
}

CreateSAMLProviderOutcome IAMClient::CreateSAMLProvider(const CreateSAMLProviderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSAMLProviderOutcome(result.GetResultWithOwnership())
                            : CreateSAMLProviderOutcome(std::move(result.GetError()));
}

CreateServiceLinkedRoleOutcome IAMClient::CreateServiceLinkedRole(const CreateServiceLinkedRoleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateServiceLinkedRoleOutcome(result.GetResultWithOwnership())
                            : CreateServiceLinkedRoleOutcome(std::move(result.GetError()));
}

CreateServiceSpecificCredentialOutcome IAMClient::CreateServiceSpecificCredential(
    const CreateServiceSpecificCredentialRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateServiceSpecificCredentialOutcome(result.GetResultWithOwnership())
                            : CreateServiceSpecificCredentialOutcome(std::move(result.GetError()));
}

CreateUserOutcome IAMClient::CreateUser(const CreateUserRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateUserOutcome(result.GetResultWithOwnership()) : CreateUserOutcome(std::move(result.GetError()));
}

CreateVirtualMFADeviceOutcome IAMClient::CreateVirtualMFADevice(const CreateVirtualMFADeviceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateVirtualMFADeviceOutcome(result.GetResultWithOwnership())
                            : CreateVirtualMFADeviceOutcome(std::move(result.GetError()));
}

DeactivateMFADeviceOutcome IAMClient::DeactivateMFADevice(const DeactivateMFADeviceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeactivateMFADeviceOutcome(result.GetResultWithOwnership())
                            : DeactivateMFADeviceOutcome(std::move(result.GetError()));
}

DeleteAccessKeyOutcome IAMClient::DeleteAccessKey(const DeleteAccessKeyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAccessKeyOutcome(result.GetResultWithOwnership())
                            : DeleteAccessKeyOutcome(std::move(result.GetError()));
}

DeleteAccountAliasOutcome IAMClient::DeleteAccountAlias(const DeleteAccountAliasRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAccountAliasOutcome(result.GetResultWithOwnership())
                            : DeleteAccountAliasOutcome(std::move(result.GetError()));
}

DeleteAccountPasswordPolicyOutcome IAMClient::DeleteAccountPasswordPolicy(const DeleteAccountPasswordPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAccountPasswordPolicyOutcome(result.GetResultWithOwnership())
                            : DeleteAccountPasswordPolicyOutcome(std::move(result.GetError()));
}

DeleteGroupOutcome IAMClient::DeleteGroup(const DeleteGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteGroupOutcome(result.GetResultWithOwnership()) : DeleteGroupOutcome(std::move(result.GetError()));
}

DeleteGroupPolicyOutcome IAMClient::DeleteGroupPolicy(const DeleteGroupPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteGroupPolicyOutcome(result.GetResultWithOwnership())
                            : DeleteGroupPolicyOutcome(std::move(result.GetError()));
}

DeleteInstanceProfileOutcome IAMClient::DeleteInstanceProfile(const DeleteInstanceProfileRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteInstanceProfileOutcome(result.GetResultWithOwnership())
                            : DeleteInstanceProfileOutcome(std::move(result.GetError()));
}

DeleteLoginProfileOutcome IAMClient::DeleteLoginProfile(const DeleteLoginProfileRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteLoginProfileOutcome(result.GetResultWithOwnership())
                            : DeleteLoginProfileOutcome(std::move(result.GetError()));
}

DeleteOpenIDConnectProviderOutcome IAMClient::DeleteOpenIDConnectProvider(const DeleteOpenIDConnectProviderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteOpenIDConnectProviderOutcome(result.GetResultWithOwnership())
                            : DeleteOpenIDConnectProviderOutcome(std::move(result.GetError()));
}

DeletePolicyOutcome IAMClient::DeletePolicy(const DeletePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeletePolicyOutcome(result.GetResultWithOwnership()) : DeletePolicyOutcome(std::move(result.GetError()));
}

DeletePolicyVersionOutcome IAMClient::DeletePolicyVersion(const DeletePolicyVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeletePolicyVersionOutcome(result.GetResultWithOwnership())
                            : DeletePolicyVersionOutcome(std::move(result.GetError()));
}

DeleteRoleOutcome IAMClient::DeleteRole(const DeleteRoleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteRoleOutcome(result.GetResultWithOwnership()) : DeleteRoleOutcome(std::move(result.GetError()));
}

DeleteRolePermissionsBoundaryOutcome IAMClient::DeleteRolePermissionsBoundary(const DeleteRolePermissionsBoundaryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteRolePermissionsBoundaryOutcome(result.GetResultWithOwnership())
                            : DeleteRolePermissionsBoundaryOutcome(std::move(result.GetError()));
}

DeleteRolePolicyOutcome IAMClient::DeleteRolePolicy(const DeleteRolePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteRolePolicyOutcome(result.GetResultWithOwnership())
                            : DeleteRolePolicyOutcome(std::move(result.GetError()));
}

DeleteSAMLProviderOutcome IAMClient::DeleteSAMLProvider(const DeleteSAMLProviderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSAMLProviderOutcome(result.GetResultWithOwnership())
                            : DeleteSAMLProviderOutcome(std::move(result.GetError()));
}

DeleteSSHPublicKeyOutcome IAMClient::DeleteSSHPublicKey(const DeleteSSHPublicKeyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSSHPublicKeyOutcome(result.GetResultWithOwnership())
                            : DeleteSSHPublicKeyOutcome(std::move(result.GetError()));
}

DeleteServerCertificateOutcome IAMClient::DeleteServerCertificate(const DeleteServerCertificateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteServerCertificateOutcome(result.GetResultWithOwnership())
                            : DeleteServerCertificateOutcome(std::move(result.GetError()));
}

DeleteServiceLinkedRoleOutcome IAMClient::DeleteServiceLinkedRole(const DeleteServiceLinkedRoleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteServiceLinkedRoleOutcome(result.GetResultWithOwnership())
                            : DeleteServiceLinkedRoleOutcome(std::move(result.GetError()));
}

DeleteServiceSpecificCredentialOutcome IAMClient::DeleteServiceSpecificCredential(
    const DeleteServiceSpecificCredentialRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteServiceSpecificCredentialOutcome(result.GetResultWithOwnership())
                            : DeleteServiceSpecificCredentialOutcome(std::move(result.GetError()));
}

DeleteSigningCertificateOutcome IAMClient::DeleteSigningCertificate(const DeleteSigningCertificateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSigningCertificateOutcome(result.GetResultWithOwnership())
                            : DeleteSigningCertificateOutcome(std::move(result.GetError()));
}

DeleteUserOutcome IAMClient::DeleteUser(const DeleteUserRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteUserOutcome(result.GetResultWithOwnership()) : DeleteUserOutcome(std::move(result.GetError()));
}

DeleteUserPermissionsBoundaryOutcome IAMClient::DeleteUserPermissionsBoundary(const DeleteUserPermissionsBoundaryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteUserPermissionsBoundaryOutcome(result.GetResultWithOwnership())
                            : DeleteUserPermissionsBoundaryOutcome(std::move(result.GetError()));
}

DeleteUserPolicyOutcome IAMClient::DeleteUserPolicy(const DeleteUserPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteUserPolicyOutcome(result.GetResultWithOwnership())
                            : DeleteUserPolicyOutcome(std::move(result.GetError()));
}

DeleteVirtualMFADeviceOutcome IAMClient::DeleteVirtualMFADevice(const DeleteVirtualMFADeviceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteVirtualMFADeviceOutcome(result.GetResultWithOwnership())
                            : DeleteVirtualMFADeviceOutcome(std::move(result.GetError()));
}

DetachGroupPolicyOutcome IAMClient::DetachGroupPolicy(const DetachGroupPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DetachGroupPolicyOutcome(result.GetResultWithOwnership())
                            : DetachGroupPolicyOutcome(std::move(result.GetError()));
}

DetachRolePolicyOutcome IAMClient::DetachRolePolicy(const DetachRolePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DetachRolePolicyOutcome(result.GetResultWithOwnership())
                            : DetachRolePolicyOutcome(std::move(result.GetError()));
}

DetachUserPolicyOutcome IAMClient::DetachUserPolicy(const DetachUserPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DetachUserPolicyOutcome(result.GetResultWithOwnership())
                            : DetachUserPolicyOutcome(std::move(result.GetError()));
}

DisableOrganizationsRootCredentialsManagementOutcome IAMClient::DisableOrganizationsRootCredentialsManagement(
    const DisableOrganizationsRootCredentialsManagementRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableOrganizationsRootCredentialsManagementOutcome(result.GetResultWithOwnership())
                            : DisableOrganizationsRootCredentialsManagementOutcome(std::move(result.GetError()));
}

DisableOrganizationsRootSessionsOutcome IAMClient::DisableOrganizationsRootSessions(
    const DisableOrganizationsRootSessionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableOrganizationsRootSessionsOutcome(result.GetResultWithOwnership())
                            : DisableOrganizationsRootSessionsOutcome(std::move(result.GetError()));
}

DisableOutboundWebIdentityFederationOutcome IAMClient::DisableOutboundWebIdentityFederation(
    const DisableOutboundWebIdentityFederationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableOutboundWebIdentityFederationOutcome(result.GetResultWithOwnership())
                            : DisableOutboundWebIdentityFederationOutcome(std::move(result.GetError()));
}

EnableMFADeviceOutcome IAMClient::EnableMFADevice(const EnableMFADeviceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableMFADeviceOutcome(result.GetResultWithOwnership())
                            : EnableMFADeviceOutcome(std::move(result.GetError()));
}

EnableOrganizationsRootCredentialsManagementOutcome IAMClient::EnableOrganizationsRootCredentialsManagement(
    const EnableOrganizationsRootCredentialsManagementRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableOrganizationsRootCredentialsManagementOutcome(result.GetResultWithOwnership())
                            : EnableOrganizationsRootCredentialsManagementOutcome(std::move(result.GetError()));
}

EnableOrganizationsRootSessionsOutcome IAMClient::EnableOrganizationsRootSessions(
    const EnableOrganizationsRootSessionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableOrganizationsRootSessionsOutcome(result.GetResultWithOwnership())
                            : EnableOrganizationsRootSessionsOutcome(std::move(result.GetError()));
}

EnableOutboundWebIdentityFederationOutcome IAMClient::EnableOutboundWebIdentityFederation(
    const EnableOutboundWebIdentityFederationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableOutboundWebIdentityFederationOutcome(result.GetResultWithOwnership())
                            : EnableOutboundWebIdentityFederationOutcome(std::move(result.GetError()));
}

GenerateCredentialReportOutcome IAMClient::GenerateCredentialReport(const GenerateCredentialReportRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GenerateCredentialReportOutcome(result.GetResultWithOwnership())
                            : GenerateCredentialReportOutcome(std::move(result.GetError()));
}

GenerateOrganizationsAccessReportOutcome IAMClient::GenerateOrganizationsAccessReport(
    const GenerateOrganizationsAccessReportRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GenerateOrganizationsAccessReportOutcome(result.GetResultWithOwnership())
                            : GenerateOrganizationsAccessReportOutcome(std::move(result.GetError()));
}

GenerateServiceLastAccessedDetailsOutcome IAMClient::GenerateServiceLastAccessedDetails(
    const GenerateServiceLastAccessedDetailsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GenerateServiceLastAccessedDetailsOutcome(result.GetResultWithOwnership())
                            : GenerateServiceLastAccessedDetailsOutcome(std::move(result.GetError()));
}

GetAccessKeyLastUsedOutcome IAMClient::GetAccessKeyLastUsed(const GetAccessKeyLastUsedRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAccessKeyLastUsedOutcome(result.GetResultWithOwnership())
                            : GetAccessKeyLastUsedOutcome(std::move(result.GetError()));
}

GetAccountAuthorizationDetailsOutcome IAMClient::GetAccountAuthorizationDetails(
    const GetAccountAuthorizationDetailsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAccountAuthorizationDetailsOutcome(result.GetResultWithOwnership())
                            : GetAccountAuthorizationDetailsOutcome(std::move(result.GetError()));
}

GetAccountPasswordPolicyOutcome IAMClient::GetAccountPasswordPolicy(const GetAccountPasswordPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAccountPasswordPolicyOutcome(result.GetResultWithOwnership())
                            : GetAccountPasswordPolicyOutcome(std::move(result.GetError()));
}

GetAccountSummaryOutcome IAMClient::GetAccountSummary(const GetAccountSummaryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAccountSummaryOutcome(result.GetResultWithOwnership())
                            : GetAccountSummaryOutcome(std::move(result.GetError()));
}

GetContextKeysForCustomPolicyOutcome IAMClient::GetContextKeysForCustomPolicy(const GetContextKeysForCustomPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetContextKeysForCustomPolicyOutcome(result.GetResultWithOwnership())
                            : GetContextKeysForCustomPolicyOutcome(std::move(result.GetError()));
}

GetContextKeysForPrincipalPolicyOutcome IAMClient::GetContextKeysForPrincipalPolicy(
    const GetContextKeysForPrincipalPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetContextKeysForPrincipalPolicyOutcome(result.GetResultWithOwnership())
                            : GetContextKeysForPrincipalPolicyOutcome(std::move(result.GetError()));
}

GetCredentialReportOutcome IAMClient::GetCredentialReport(const GetCredentialReportRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCredentialReportOutcome(result.GetResultWithOwnership())
                            : GetCredentialReportOutcome(std::move(result.GetError()));
}

GetDelegationRequestOutcome IAMClient::GetDelegationRequest(const GetDelegationRequestRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDelegationRequestOutcome(result.GetResultWithOwnership())
                            : GetDelegationRequestOutcome(std::move(result.GetError()));
}

GetGroupOutcome IAMClient::GetGroup(const GetGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetGroupOutcome(result.GetResultWithOwnership()) : GetGroupOutcome(std::move(result.GetError()));
}

GetGroupPolicyOutcome IAMClient::GetGroupPolicy(const GetGroupPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetGroupPolicyOutcome(result.GetResultWithOwnership()) : GetGroupPolicyOutcome(std::move(result.GetError()));
}

GetHumanReadableSummaryOutcome IAMClient::GetHumanReadableSummary(const GetHumanReadableSummaryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetHumanReadableSummaryOutcome(result.GetResultWithOwnership())
                            : GetHumanReadableSummaryOutcome(std::move(result.GetError()));
}

GetInstanceProfileOutcome IAMClient::GetInstanceProfile(const GetInstanceProfileRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetInstanceProfileOutcome(result.GetResultWithOwnership())
                            : GetInstanceProfileOutcome(std::move(result.GetError()));
}

GetLoginProfileOutcome IAMClient::GetLoginProfile(const GetLoginProfileRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetLoginProfileOutcome(result.GetResultWithOwnership())
                            : GetLoginProfileOutcome(std::move(result.GetError()));
}

GetMFADeviceOutcome IAMClient::GetMFADevice(const GetMFADeviceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetMFADeviceOutcome(result.GetResultWithOwnership()) : GetMFADeviceOutcome(std::move(result.GetError()));
}

GetOpenIDConnectProviderOutcome IAMClient::GetOpenIDConnectProvider(const GetOpenIDConnectProviderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetOpenIDConnectProviderOutcome(result.GetResultWithOwnership())
                            : GetOpenIDConnectProviderOutcome(std::move(result.GetError()));
}

GetOrganizationsAccessReportOutcome IAMClient::GetOrganizationsAccessReport(const GetOrganizationsAccessReportRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetOrganizationsAccessReportOutcome(result.GetResultWithOwnership())
                            : GetOrganizationsAccessReportOutcome(std::move(result.GetError()));
}

GetOutboundWebIdentityFederationInfoOutcome IAMClient::GetOutboundWebIdentityFederationInfo(
    const GetOutboundWebIdentityFederationInfoRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetOutboundWebIdentityFederationInfoOutcome(result.GetResultWithOwnership())
                            : GetOutboundWebIdentityFederationInfoOutcome(std::move(result.GetError()));
}

GetPolicyOutcome IAMClient::GetPolicy(const GetPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetPolicyOutcome(result.GetResultWithOwnership()) : GetPolicyOutcome(std::move(result.GetError()));
}

GetPolicyVersionOutcome IAMClient::GetPolicyVersion(const GetPolicyVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetPolicyVersionOutcome(result.GetResultWithOwnership())
                            : GetPolicyVersionOutcome(std::move(result.GetError()));
}

GetRoleOutcome IAMClient::GetRole(const GetRoleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetRoleOutcome(result.GetResultWithOwnership()) : GetRoleOutcome(std::move(result.GetError()));
}

GetRolePolicyOutcome IAMClient::GetRolePolicy(const GetRolePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetRolePolicyOutcome(result.GetResultWithOwnership()) : GetRolePolicyOutcome(std::move(result.GetError()));
}

GetSAMLProviderOutcome IAMClient::GetSAMLProvider(const GetSAMLProviderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetSAMLProviderOutcome(result.GetResultWithOwnership())
                            : GetSAMLProviderOutcome(std::move(result.GetError()));
}

GetSSHPublicKeyOutcome IAMClient::GetSSHPublicKey(const GetSSHPublicKeyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetSSHPublicKeyOutcome(result.GetResultWithOwnership())
                            : GetSSHPublicKeyOutcome(std::move(result.GetError()));
}

GetServerCertificateOutcome IAMClient::GetServerCertificate(const GetServerCertificateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetServerCertificateOutcome(result.GetResultWithOwnership())
                            : GetServerCertificateOutcome(std::move(result.GetError()));
}

GetServiceLastAccessedDetailsOutcome IAMClient::GetServiceLastAccessedDetails(const GetServiceLastAccessedDetailsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetServiceLastAccessedDetailsOutcome(result.GetResultWithOwnership())
                            : GetServiceLastAccessedDetailsOutcome(std::move(result.GetError()));
}

GetServiceLastAccessedDetailsWithEntitiesOutcome IAMClient::GetServiceLastAccessedDetailsWithEntities(
    const GetServiceLastAccessedDetailsWithEntitiesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetServiceLastAccessedDetailsWithEntitiesOutcome(result.GetResultWithOwnership())
                            : GetServiceLastAccessedDetailsWithEntitiesOutcome(std::move(result.GetError()));
}

GetServiceLinkedRoleDeletionStatusOutcome IAMClient::GetServiceLinkedRoleDeletionStatus(
    const GetServiceLinkedRoleDeletionStatusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetServiceLinkedRoleDeletionStatusOutcome(result.GetResultWithOwnership())
                            : GetServiceLinkedRoleDeletionStatusOutcome(std::move(result.GetError()));
}

GetUserOutcome IAMClient::GetUser(const GetUserRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetUserOutcome(result.GetResultWithOwnership()) : GetUserOutcome(std::move(result.GetError()));
}

GetUserPolicyOutcome IAMClient::GetUserPolicy(const GetUserPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetUserPolicyOutcome(result.GetResultWithOwnership()) : GetUserPolicyOutcome(std::move(result.GetError()));
}

ListAccessKeysOutcome IAMClient::ListAccessKeys(const ListAccessKeysRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAccessKeysOutcome(result.GetResultWithOwnership()) : ListAccessKeysOutcome(std::move(result.GetError()));
}

ListAccountAliasesOutcome IAMClient::ListAccountAliases(const ListAccountAliasesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAccountAliasesOutcome(result.GetResultWithOwnership())
                            : ListAccountAliasesOutcome(std::move(result.GetError()));
}

ListAttachedGroupPoliciesOutcome IAMClient::ListAttachedGroupPolicies(const ListAttachedGroupPoliciesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAttachedGroupPoliciesOutcome(result.GetResultWithOwnership())
                            : ListAttachedGroupPoliciesOutcome(std::move(result.GetError()));
}

ListAttachedRolePoliciesOutcome IAMClient::ListAttachedRolePolicies(const ListAttachedRolePoliciesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAttachedRolePoliciesOutcome(result.GetResultWithOwnership())
                            : ListAttachedRolePoliciesOutcome(std::move(result.GetError()));
}

ListAttachedUserPoliciesOutcome IAMClient::ListAttachedUserPolicies(const ListAttachedUserPoliciesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAttachedUserPoliciesOutcome(result.GetResultWithOwnership())
                            : ListAttachedUserPoliciesOutcome(std::move(result.GetError()));
}

ListDelegationRequestsOutcome IAMClient::ListDelegationRequests(const ListDelegationRequestsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDelegationRequestsOutcome(result.GetResultWithOwnership())
                            : ListDelegationRequestsOutcome(std::move(result.GetError()));
}

ListEntitiesForPolicyOutcome IAMClient::ListEntitiesForPolicy(const ListEntitiesForPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListEntitiesForPolicyOutcome(result.GetResultWithOwnership())
                            : ListEntitiesForPolicyOutcome(std::move(result.GetError()));
}

ListGroupPoliciesOutcome IAMClient::ListGroupPolicies(const ListGroupPoliciesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListGroupPoliciesOutcome(result.GetResultWithOwnership())
                            : ListGroupPoliciesOutcome(std::move(result.GetError()));
}

ListGroupsOutcome IAMClient::ListGroups(const ListGroupsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListGroupsOutcome(result.GetResultWithOwnership()) : ListGroupsOutcome(std::move(result.GetError()));
}

ListGroupsForUserOutcome IAMClient::ListGroupsForUser(const ListGroupsForUserRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListGroupsForUserOutcome(result.GetResultWithOwnership())
                            : ListGroupsForUserOutcome(std::move(result.GetError()));
}

ListInstanceProfileTagsOutcome IAMClient::ListInstanceProfileTags(const ListInstanceProfileTagsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListInstanceProfileTagsOutcome(result.GetResultWithOwnership())
                            : ListInstanceProfileTagsOutcome(std::move(result.GetError()));
}

ListInstanceProfilesOutcome IAMClient::ListInstanceProfiles(const ListInstanceProfilesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListInstanceProfilesOutcome(result.GetResultWithOwnership())
                            : ListInstanceProfilesOutcome(std::move(result.GetError()));
}

ListInstanceProfilesForRoleOutcome IAMClient::ListInstanceProfilesForRole(const ListInstanceProfilesForRoleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListInstanceProfilesForRoleOutcome(result.GetResultWithOwnership())
                            : ListInstanceProfilesForRoleOutcome(std::move(result.GetError()));
}

ListMFADeviceTagsOutcome IAMClient::ListMFADeviceTags(const ListMFADeviceTagsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListMFADeviceTagsOutcome(result.GetResultWithOwnership())
                            : ListMFADeviceTagsOutcome(std::move(result.GetError()));
}

ListMFADevicesOutcome IAMClient::ListMFADevices(const ListMFADevicesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListMFADevicesOutcome(result.GetResultWithOwnership()) : ListMFADevicesOutcome(std::move(result.GetError()));
}

ListOpenIDConnectProviderTagsOutcome IAMClient::ListOpenIDConnectProviderTags(const ListOpenIDConnectProviderTagsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListOpenIDConnectProviderTagsOutcome(result.GetResultWithOwnership())
                            : ListOpenIDConnectProviderTagsOutcome(std::move(result.GetError()));
}

ListOpenIDConnectProvidersOutcome IAMClient::ListOpenIDConnectProviders(const ListOpenIDConnectProvidersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListOpenIDConnectProvidersOutcome(result.GetResultWithOwnership())
                            : ListOpenIDConnectProvidersOutcome(std::move(result.GetError()));
}

ListOrganizationsFeaturesOutcome IAMClient::ListOrganizationsFeatures(const ListOrganizationsFeaturesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListOrganizationsFeaturesOutcome(result.GetResultWithOwnership())
                            : ListOrganizationsFeaturesOutcome(std::move(result.GetError()));
}

ListPoliciesOutcome IAMClient::ListPolicies(const ListPoliciesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPoliciesOutcome(result.GetResultWithOwnership()) : ListPoliciesOutcome(std::move(result.GetError()));
}

ListPoliciesGrantingServiceAccessOutcome IAMClient::ListPoliciesGrantingServiceAccess(
    const ListPoliciesGrantingServiceAccessRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPoliciesGrantingServiceAccessOutcome(result.GetResultWithOwnership())
                            : ListPoliciesGrantingServiceAccessOutcome(std::move(result.GetError()));
}

ListPolicyTagsOutcome IAMClient::ListPolicyTags(const ListPolicyTagsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPolicyTagsOutcome(result.GetResultWithOwnership()) : ListPolicyTagsOutcome(std::move(result.GetError()));
}

ListPolicyVersionsOutcome IAMClient::ListPolicyVersions(const ListPolicyVersionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPolicyVersionsOutcome(result.GetResultWithOwnership())
                            : ListPolicyVersionsOutcome(std::move(result.GetError()));
}

ListRolePoliciesOutcome IAMClient::ListRolePolicies(const ListRolePoliciesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListRolePoliciesOutcome(result.GetResultWithOwnership())
                            : ListRolePoliciesOutcome(std::move(result.GetError()));
}

ListRoleTagsOutcome IAMClient::ListRoleTags(const ListRoleTagsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListRoleTagsOutcome(result.GetResultWithOwnership()) : ListRoleTagsOutcome(std::move(result.GetError()));
}

ListRolesOutcome IAMClient::ListRoles(const ListRolesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListRolesOutcome(result.GetResultWithOwnership()) : ListRolesOutcome(std::move(result.GetError()));
}

ListSAMLProviderTagsOutcome IAMClient::ListSAMLProviderTags(const ListSAMLProviderTagsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListSAMLProviderTagsOutcome(result.GetResultWithOwnership())
                            : ListSAMLProviderTagsOutcome(std::move(result.GetError()));
}

ListSAMLProvidersOutcome IAMClient::ListSAMLProviders(const ListSAMLProvidersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListSAMLProvidersOutcome(result.GetResultWithOwnership())
                            : ListSAMLProvidersOutcome(std::move(result.GetError()));
}

ListSSHPublicKeysOutcome IAMClient::ListSSHPublicKeys(const ListSSHPublicKeysRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListSSHPublicKeysOutcome(result.GetResultWithOwnership())
                            : ListSSHPublicKeysOutcome(std::move(result.GetError()));
}

ListServerCertificateTagsOutcome IAMClient::ListServerCertificateTags(const ListServerCertificateTagsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListServerCertificateTagsOutcome(result.GetResultWithOwnership())
                            : ListServerCertificateTagsOutcome(std::move(result.GetError()));
}

ListServerCertificatesOutcome IAMClient::ListServerCertificates(const ListServerCertificatesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListServerCertificatesOutcome(result.GetResultWithOwnership())
                            : ListServerCertificatesOutcome(std::move(result.GetError()));
}

ListServiceSpecificCredentialsOutcome IAMClient::ListServiceSpecificCredentials(
    const ListServiceSpecificCredentialsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListServiceSpecificCredentialsOutcome(result.GetResultWithOwnership())
                            : ListServiceSpecificCredentialsOutcome(std::move(result.GetError()));
}

ListSigningCertificatesOutcome IAMClient::ListSigningCertificates(const ListSigningCertificatesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListSigningCertificatesOutcome(result.GetResultWithOwnership())
                            : ListSigningCertificatesOutcome(std::move(result.GetError()));
}

ListUserPoliciesOutcome IAMClient::ListUserPolicies(const ListUserPoliciesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListUserPoliciesOutcome(result.GetResultWithOwnership())
                            : ListUserPoliciesOutcome(std::move(result.GetError()));
}

ListUserTagsOutcome IAMClient::ListUserTags(const ListUserTagsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListUserTagsOutcome(result.GetResultWithOwnership()) : ListUserTagsOutcome(std::move(result.GetError()));
}

ListUsersOutcome IAMClient::ListUsers(const ListUsersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListUsersOutcome(result.GetResultWithOwnership()) : ListUsersOutcome(std::move(result.GetError()));
}

ListVirtualMFADevicesOutcome IAMClient::ListVirtualMFADevices(const ListVirtualMFADevicesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListVirtualMFADevicesOutcome(result.GetResultWithOwnership())
                            : ListVirtualMFADevicesOutcome(std::move(result.GetError()));
}

PutGroupPolicyOutcome IAMClient::PutGroupPolicy(const PutGroupPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutGroupPolicyOutcome(result.GetResultWithOwnership()) : PutGroupPolicyOutcome(std::move(result.GetError()));
}

PutRolePermissionsBoundaryOutcome IAMClient::PutRolePermissionsBoundary(const PutRolePermissionsBoundaryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutRolePermissionsBoundaryOutcome(result.GetResultWithOwnership())
                            : PutRolePermissionsBoundaryOutcome(std::move(result.GetError()));
}

PutRolePolicyOutcome IAMClient::PutRolePolicy(const PutRolePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutRolePolicyOutcome(result.GetResultWithOwnership()) : PutRolePolicyOutcome(std::move(result.GetError()));
}

PutUserPermissionsBoundaryOutcome IAMClient::PutUserPermissionsBoundary(const PutUserPermissionsBoundaryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutUserPermissionsBoundaryOutcome(result.GetResultWithOwnership())
                            : PutUserPermissionsBoundaryOutcome(std::move(result.GetError()));
}

PutUserPolicyOutcome IAMClient::PutUserPolicy(const PutUserPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutUserPolicyOutcome(result.GetResultWithOwnership()) : PutUserPolicyOutcome(std::move(result.GetError()));
}

RejectDelegationRequestOutcome IAMClient::RejectDelegationRequest(const RejectDelegationRequestRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RejectDelegationRequestOutcome(result.GetResultWithOwnership())
                            : RejectDelegationRequestOutcome(std::move(result.GetError()));
}

RemoveClientIDFromOpenIDConnectProviderOutcome IAMClient::RemoveClientIDFromOpenIDConnectProvider(
    const RemoveClientIDFromOpenIDConnectProviderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RemoveClientIDFromOpenIDConnectProviderOutcome(result.GetResultWithOwnership())
                            : RemoveClientIDFromOpenIDConnectProviderOutcome(std::move(result.GetError()));
}

RemoveRoleFromInstanceProfileOutcome IAMClient::RemoveRoleFromInstanceProfile(const RemoveRoleFromInstanceProfileRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RemoveRoleFromInstanceProfileOutcome(result.GetResultWithOwnership())
                            : RemoveRoleFromInstanceProfileOutcome(std::move(result.GetError()));
}

RemoveUserFromGroupOutcome IAMClient::RemoveUserFromGroup(const RemoveUserFromGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RemoveUserFromGroupOutcome(result.GetResultWithOwnership())
                            : RemoveUserFromGroupOutcome(std::move(result.GetError()));
}

ResetServiceSpecificCredentialOutcome IAMClient::ResetServiceSpecificCredential(
    const ResetServiceSpecificCredentialRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ResetServiceSpecificCredentialOutcome(result.GetResultWithOwnership())
                            : ResetServiceSpecificCredentialOutcome(std::move(result.GetError()));
}

ResyncMFADeviceOutcome IAMClient::ResyncMFADevice(const ResyncMFADeviceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ResyncMFADeviceOutcome(result.GetResultWithOwnership())
                            : ResyncMFADeviceOutcome(std::move(result.GetError()));
}

SendDelegationTokenOutcome IAMClient::SendDelegationToken(const SendDelegationTokenRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SendDelegationTokenOutcome(result.GetResultWithOwnership())
                            : SendDelegationTokenOutcome(std::move(result.GetError()));
}

SetDefaultPolicyVersionOutcome IAMClient::SetDefaultPolicyVersion(const SetDefaultPolicyVersionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SetDefaultPolicyVersionOutcome(result.GetResultWithOwnership())
                            : SetDefaultPolicyVersionOutcome(std::move(result.GetError()));
}

SetSecurityTokenServicePreferencesOutcome IAMClient::SetSecurityTokenServicePreferences(
    const SetSecurityTokenServicePreferencesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SetSecurityTokenServicePreferencesOutcome(result.GetResultWithOwnership())
                            : SetSecurityTokenServicePreferencesOutcome(std::move(result.GetError()));
}

SimulateCustomPolicyOutcome IAMClient::SimulateCustomPolicy(const SimulateCustomPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SimulateCustomPolicyOutcome(result.GetResultWithOwnership())
                            : SimulateCustomPolicyOutcome(std::move(result.GetError()));
}

SimulatePrincipalPolicyOutcome IAMClient::SimulatePrincipalPolicy(const SimulatePrincipalPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SimulatePrincipalPolicyOutcome(result.GetResultWithOwnership())
                            : SimulatePrincipalPolicyOutcome(std::move(result.GetError()));
}

TagInstanceProfileOutcome IAMClient::TagInstanceProfile(const TagInstanceProfileRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagInstanceProfileOutcome(result.GetResultWithOwnership())
                            : TagInstanceProfileOutcome(std::move(result.GetError()));
}

TagMFADeviceOutcome IAMClient::TagMFADevice(const TagMFADeviceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagMFADeviceOutcome(result.GetResultWithOwnership()) : TagMFADeviceOutcome(std::move(result.GetError()));
}

TagOpenIDConnectProviderOutcome IAMClient::TagOpenIDConnectProvider(const TagOpenIDConnectProviderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagOpenIDConnectProviderOutcome(result.GetResultWithOwnership())
                            : TagOpenIDConnectProviderOutcome(std::move(result.GetError()));
}

TagPolicyOutcome IAMClient::TagPolicy(const TagPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagPolicyOutcome(result.GetResultWithOwnership()) : TagPolicyOutcome(std::move(result.GetError()));
}

TagRoleOutcome IAMClient::TagRole(const TagRoleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagRoleOutcome(result.GetResultWithOwnership()) : TagRoleOutcome(std::move(result.GetError()));
}

TagSAMLProviderOutcome IAMClient::TagSAMLProvider(const TagSAMLProviderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagSAMLProviderOutcome(result.GetResultWithOwnership())
                            : TagSAMLProviderOutcome(std::move(result.GetError()));
}

TagServerCertificateOutcome IAMClient::TagServerCertificate(const TagServerCertificateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagServerCertificateOutcome(result.GetResultWithOwnership())
                            : TagServerCertificateOutcome(std::move(result.GetError()));
}

TagUserOutcome IAMClient::TagUser(const TagUserRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagUserOutcome(result.GetResultWithOwnership()) : TagUserOutcome(std::move(result.GetError()));
}

UntagInstanceProfileOutcome IAMClient::UntagInstanceProfile(const UntagInstanceProfileRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagInstanceProfileOutcome(result.GetResultWithOwnership())
                            : UntagInstanceProfileOutcome(std::move(result.GetError()));
}

UntagMFADeviceOutcome IAMClient::UntagMFADevice(const UntagMFADeviceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagMFADeviceOutcome(result.GetResultWithOwnership()) : UntagMFADeviceOutcome(std::move(result.GetError()));
}

UntagOpenIDConnectProviderOutcome IAMClient::UntagOpenIDConnectProvider(const UntagOpenIDConnectProviderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagOpenIDConnectProviderOutcome(result.GetResultWithOwnership())
                            : UntagOpenIDConnectProviderOutcome(std::move(result.GetError()));
}

UntagPolicyOutcome IAMClient::UntagPolicy(const UntagPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagPolicyOutcome(result.GetResultWithOwnership()) : UntagPolicyOutcome(std::move(result.GetError()));
}

UntagRoleOutcome IAMClient::UntagRole(const UntagRoleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagRoleOutcome(result.GetResultWithOwnership()) : UntagRoleOutcome(std::move(result.GetError()));
}

UntagSAMLProviderOutcome IAMClient::UntagSAMLProvider(const UntagSAMLProviderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagSAMLProviderOutcome(result.GetResultWithOwnership())
                            : UntagSAMLProviderOutcome(std::move(result.GetError()));
}

UntagServerCertificateOutcome IAMClient::UntagServerCertificate(const UntagServerCertificateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagServerCertificateOutcome(result.GetResultWithOwnership())
                            : UntagServerCertificateOutcome(std::move(result.GetError()));
}

UntagUserOutcome IAMClient::UntagUser(const UntagUserRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagUserOutcome(result.GetResultWithOwnership()) : UntagUserOutcome(std::move(result.GetError()));
}

UpdateAccessKeyOutcome IAMClient::UpdateAccessKey(const UpdateAccessKeyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateAccessKeyOutcome(result.GetResultWithOwnership())
                            : UpdateAccessKeyOutcome(std::move(result.GetError()));
}

UpdateAccountPasswordPolicyOutcome IAMClient::UpdateAccountPasswordPolicy(const UpdateAccountPasswordPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateAccountPasswordPolicyOutcome(result.GetResultWithOwnership())
                            : UpdateAccountPasswordPolicyOutcome(std::move(result.GetError()));
}

UpdateAssumeRolePolicyOutcome IAMClient::UpdateAssumeRolePolicy(const UpdateAssumeRolePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateAssumeRolePolicyOutcome(result.GetResultWithOwnership())
                            : UpdateAssumeRolePolicyOutcome(std::move(result.GetError()));
}

UpdateDelegationRequestOutcome IAMClient::UpdateDelegationRequest(const UpdateDelegationRequestRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateDelegationRequestOutcome(result.GetResultWithOwnership())
                            : UpdateDelegationRequestOutcome(std::move(result.GetError()));
}

UpdateGroupOutcome IAMClient::UpdateGroup(const UpdateGroupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateGroupOutcome(result.GetResultWithOwnership()) : UpdateGroupOutcome(std::move(result.GetError()));
}

UpdateLoginProfileOutcome IAMClient::UpdateLoginProfile(const UpdateLoginProfileRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateLoginProfileOutcome(result.GetResultWithOwnership())
                            : UpdateLoginProfileOutcome(std::move(result.GetError()));
}

UpdateOpenIDConnectProviderThumbprintOutcome IAMClient::UpdateOpenIDConnectProviderThumbprint(
    const UpdateOpenIDConnectProviderThumbprintRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateOpenIDConnectProviderThumbprintOutcome(result.GetResultWithOwnership())
                            : UpdateOpenIDConnectProviderThumbprintOutcome(std::move(result.GetError()));
}

UpdateRoleOutcome IAMClient::UpdateRole(const UpdateRoleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateRoleOutcome(result.GetResultWithOwnership()) : UpdateRoleOutcome(std::move(result.GetError()));
}

UpdateRoleDescriptionOutcome IAMClient::UpdateRoleDescription(const UpdateRoleDescriptionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateRoleDescriptionOutcome(result.GetResultWithOwnership())
                            : UpdateRoleDescriptionOutcome(std::move(result.GetError()));
}

UpdateSAMLProviderOutcome IAMClient::UpdateSAMLProvider(const UpdateSAMLProviderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateSAMLProviderOutcome(result.GetResultWithOwnership())
                            : UpdateSAMLProviderOutcome(std::move(result.GetError()));
}

UpdateSSHPublicKeyOutcome IAMClient::UpdateSSHPublicKey(const UpdateSSHPublicKeyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateSSHPublicKeyOutcome(result.GetResultWithOwnership())
                            : UpdateSSHPublicKeyOutcome(std::move(result.GetError()));
}

UpdateServerCertificateOutcome IAMClient::UpdateServerCertificate(const UpdateServerCertificateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateServerCertificateOutcome(result.GetResultWithOwnership())
                            : UpdateServerCertificateOutcome(std::move(result.GetError()));
}

UpdateServiceSpecificCredentialOutcome IAMClient::UpdateServiceSpecificCredential(
    const UpdateServiceSpecificCredentialRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateServiceSpecificCredentialOutcome(result.GetResultWithOwnership())
                            : UpdateServiceSpecificCredentialOutcome(std::move(result.GetError()));
}

UpdateSigningCertificateOutcome IAMClient::UpdateSigningCertificate(const UpdateSigningCertificateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateSigningCertificateOutcome(result.GetResultWithOwnership())
                            : UpdateSigningCertificateOutcome(std::move(result.GetError()));
}

UpdateUserOutcome IAMClient::UpdateUser(const UpdateUserRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateUserOutcome(result.GetResultWithOwnership()) : UpdateUserOutcome(std::move(result.GetError()));
}

UploadSSHPublicKeyOutcome IAMClient::UploadSSHPublicKey(const UploadSSHPublicKeyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UploadSSHPublicKeyOutcome(result.GetResultWithOwnership())
                            : UploadSSHPublicKeyOutcome(std::move(result.GetError()));
}

UploadServerCertificateOutcome IAMClient::UploadServerCertificate(const UploadServerCertificateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UploadServerCertificateOutcome(result.GetResultWithOwnership())
                            : UploadServerCertificateOutcome(std::move(result.GetError()));
}

UploadSigningCertificateOutcome IAMClient::UploadSigningCertificate(const UploadSigningCertificateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UploadSigningCertificateOutcome(result.GetResultWithOwnership())
                            : UploadSigningCertificateOutcome(std::move(result.GetError()));
}
