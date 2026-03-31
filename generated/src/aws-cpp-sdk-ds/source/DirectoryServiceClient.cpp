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
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/ds/DirectoryServiceClient.h>
#include <aws/ds/DirectoryServiceEndpointProvider.h>
#include <aws/ds/DirectoryServiceErrorMarshaller.h>
#include <aws/ds/model/AcceptSharedDirectoryRequest.h>
#include <aws/ds/model/AddIpRoutesRequest.h>
#include <aws/ds/model/AddRegionRequest.h>
#include <aws/ds/model/AddTagsToResourceRequest.h>
#include <aws/ds/model/CancelSchemaExtensionRequest.h>
#include <aws/ds/model/ConnectDirectoryRequest.h>
#include <aws/ds/model/CreateAliasRequest.h>
#include <aws/ds/model/CreateComputerRequest.h>
#include <aws/ds/model/CreateConditionalForwarderRequest.h>
#include <aws/ds/model/CreateDirectoryRequest.h>
#include <aws/ds/model/CreateHybridADRequest.h>
#include <aws/ds/model/CreateLogSubscriptionRequest.h>
#include <aws/ds/model/CreateMicrosoftADRequest.h>
#include <aws/ds/model/CreateSnapshotRequest.h>
#include <aws/ds/model/CreateTrustRequest.h>
#include <aws/ds/model/DeleteADAssessmentRequest.h>
#include <aws/ds/model/DeleteConditionalForwarderRequest.h>
#include <aws/ds/model/DeleteDirectoryRequest.h>
#include <aws/ds/model/DeleteLogSubscriptionRequest.h>
#include <aws/ds/model/DeleteSnapshotRequest.h>
#include <aws/ds/model/DeleteTrustRequest.h>
#include <aws/ds/model/DeregisterCertificateRequest.h>
#include <aws/ds/model/DeregisterEventTopicRequest.h>
#include <aws/ds/model/DescribeADAssessmentRequest.h>
#include <aws/ds/model/DescribeCAEnrollmentPolicyRequest.h>
#include <aws/ds/model/DescribeCertificateRequest.h>
#include <aws/ds/model/DescribeClientAuthenticationSettingsRequest.h>
#include <aws/ds/model/DescribeConditionalForwardersRequest.h>
#include <aws/ds/model/DescribeDirectoriesRequest.h>
#include <aws/ds/model/DescribeDirectoryDataAccessRequest.h>
#include <aws/ds/model/DescribeDomainControllersRequest.h>
#include <aws/ds/model/DescribeEventTopicsRequest.h>
#include <aws/ds/model/DescribeHybridADUpdateRequest.h>
#include <aws/ds/model/DescribeLDAPSSettingsRequest.h>
#include <aws/ds/model/DescribeRegionsRequest.h>
#include <aws/ds/model/DescribeSettingsRequest.h>
#include <aws/ds/model/DescribeSharedDirectoriesRequest.h>
#include <aws/ds/model/DescribeSnapshotsRequest.h>
#include <aws/ds/model/DescribeTrustsRequest.h>
#include <aws/ds/model/DescribeUpdateDirectoryRequest.h>
#include <aws/ds/model/DisableCAEnrollmentPolicyRequest.h>
#include <aws/ds/model/DisableClientAuthenticationRequest.h>
#include <aws/ds/model/DisableDirectoryDataAccessRequest.h>
#include <aws/ds/model/DisableLDAPSRequest.h>
#include <aws/ds/model/DisableRadiusRequest.h>
#include <aws/ds/model/DisableSsoRequest.h>
#include <aws/ds/model/EnableCAEnrollmentPolicyRequest.h>
#include <aws/ds/model/EnableClientAuthenticationRequest.h>
#include <aws/ds/model/EnableDirectoryDataAccessRequest.h>
#include <aws/ds/model/EnableLDAPSRequest.h>
#include <aws/ds/model/EnableRadiusRequest.h>
#include <aws/ds/model/EnableSsoRequest.h>
#include <aws/ds/model/GetDirectoryLimitsRequest.h>
#include <aws/ds/model/GetSnapshotLimitsRequest.h>
#include <aws/ds/model/ListADAssessmentsRequest.h>
#include <aws/ds/model/ListCertificatesRequest.h>
#include <aws/ds/model/ListIpRoutesRequest.h>
#include <aws/ds/model/ListLogSubscriptionsRequest.h>
#include <aws/ds/model/ListSchemaExtensionsRequest.h>
#include <aws/ds/model/ListTagsForResourceRequest.h>
#include <aws/ds/model/RegisterCertificateRequest.h>
#include <aws/ds/model/RegisterEventTopicRequest.h>
#include <aws/ds/model/RejectSharedDirectoryRequest.h>
#include <aws/ds/model/RemoveIpRoutesRequest.h>
#include <aws/ds/model/RemoveRegionRequest.h>
#include <aws/ds/model/RemoveTagsFromResourceRequest.h>
#include <aws/ds/model/ResetUserPasswordRequest.h>
#include <aws/ds/model/RestoreFromSnapshotRequest.h>
#include <aws/ds/model/ShareDirectoryRequest.h>
#include <aws/ds/model/StartADAssessmentRequest.h>
#include <aws/ds/model/StartSchemaExtensionRequest.h>
#include <aws/ds/model/UnshareDirectoryRequest.h>
#include <aws/ds/model/UpdateConditionalForwarderRequest.h>
#include <aws/ds/model/UpdateDirectorySetupRequest.h>
#include <aws/ds/model/UpdateHybridADRequest.h>
#include <aws/ds/model/UpdateNumberOfDomainControllersRequest.h>
#include <aws/ds/model/UpdateRadiusRequest.h>
#include <aws/ds/model/UpdateSettingsRequest.h>
#include <aws/ds/model/UpdateTrustRequest.h>
#include <aws/ds/model/VerifyTrustRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DirectoryService;
using namespace Aws::DirectoryService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace DirectoryService {
const char SERVICE_NAME[] = "ds";
const char ALLOCATION_TAG[] = "DirectoryServiceClient";
}  // namespace DirectoryService
}  // namespace Aws
const char* DirectoryServiceClient::GetServiceName() { return SERVICE_NAME; }
const char* DirectoryServiceClient::GetAllocationTag() { return ALLOCATION_TAG; }

DirectoryServiceClient::DirectoryServiceClient(const DirectoryService::DirectoryServiceClientConfiguration& clientConfiguration,
                                               std::shared_ptr<DirectoryServiceEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DirectoryServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<DirectoryServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DirectoryServiceClient::DirectoryServiceClient(const AWSCredentials& credentials,
                                               std::shared_ptr<DirectoryServiceEndpointProviderBase> endpointProvider,
                                               const DirectoryService::DirectoryServiceClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DirectoryServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<DirectoryServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DirectoryServiceClient::DirectoryServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               std::shared_ptr<DirectoryServiceEndpointProviderBase> endpointProvider,
                                               const DirectoryService::DirectoryServiceClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DirectoryServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<DirectoryServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
DirectoryServiceClient::DirectoryServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DirectoryServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DirectoryServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DirectoryServiceClient::DirectoryServiceClient(const AWSCredentials& credentials,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DirectoryServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DirectoryServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DirectoryServiceClient::DirectoryServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DirectoryServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DirectoryServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
DirectoryServiceClient::~DirectoryServiceClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<DirectoryServiceEndpointProviderBase>& DirectoryServiceClient::accessEndpointProvider() { return m_endpointProvider; }

void DirectoryServiceClient::init(const DirectoryService::DirectoryServiceClientConfiguration& config) {
  AWSClient::SetServiceClientName("Directory Service");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "ds");
}

void DirectoryServiceClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
DirectoryServiceClient::InvokeOperationOutcome DirectoryServiceClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

AcceptSharedDirectoryOutcome DirectoryServiceClient::AcceptSharedDirectory(const AcceptSharedDirectoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AcceptSharedDirectoryOutcome(result.GetResultWithOwnership())
                            : AcceptSharedDirectoryOutcome(std::move(result.GetError()));
}

AddIpRoutesOutcome DirectoryServiceClient::AddIpRoutes(const AddIpRoutesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddIpRoutesOutcome(result.GetResultWithOwnership()) : AddIpRoutesOutcome(std::move(result.GetError()));
}

AddRegionOutcome DirectoryServiceClient::AddRegion(const AddRegionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddRegionOutcome(result.GetResultWithOwnership()) : AddRegionOutcome(std::move(result.GetError()));
}

AddTagsToResourceOutcome DirectoryServiceClient::AddTagsToResource(const AddTagsToResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddTagsToResourceOutcome(result.GetResultWithOwnership())
                            : AddTagsToResourceOutcome(std::move(result.GetError()));
}

CancelSchemaExtensionOutcome DirectoryServiceClient::CancelSchemaExtension(const CancelSchemaExtensionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CancelSchemaExtensionOutcome(result.GetResultWithOwnership())
                            : CancelSchemaExtensionOutcome(std::move(result.GetError()));
}

ConnectDirectoryOutcome DirectoryServiceClient::ConnectDirectory(const ConnectDirectoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ConnectDirectoryOutcome(result.GetResultWithOwnership())
                            : ConnectDirectoryOutcome(std::move(result.GetError()));
}

CreateAliasOutcome DirectoryServiceClient::CreateAlias(const CreateAliasRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAliasOutcome(result.GetResultWithOwnership()) : CreateAliasOutcome(std::move(result.GetError()));
}

CreateComputerOutcome DirectoryServiceClient::CreateComputer(const CreateComputerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateComputerOutcome(result.GetResultWithOwnership()) : CreateComputerOutcome(std::move(result.GetError()));
}

CreateConditionalForwarderOutcome DirectoryServiceClient::CreateConditionalForwarder(
    const CreateConditionalForwarderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateConditionalForwarderOutcome(result.GetResultWithOwnership())
                            : CreateConditionalForwarderOutcome(std::move(result.GetError()));
}

CreateDirectoryOutcome DirectoryServiceClient::CreateDirectory(const CreateDirectoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDirectoryOutcome(result.GetResultWithOwnership())
                            : CreateDirectoryOutcome(std::move(result.GetError()));
}

CreateHybridADOutcome DirectoryServiceClient::CreateHybridAD(const CreateHybridADRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateHybridADOutcome(result.GetResultWithOwnership()) : CreateHybridADOutcome(std::move(result.GetError()));
}

CreateLogSubscriptionOutcome DirectoryServiceClient::CreateLogSubscription(const CreateLogSubscriptionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateLogSubscriptionOutcome(result.GetResultWithOwnership())
                            : CreateLogSubscriptionOutcome(std::move(result.GetError()));
}

CreateMicrosoftADOutcome DirectoryServiceClient::CreateMicrosoftAD(const CreateMicrosoftADRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMicrosoftADOutcome(result.GetResultWithOwnership())
                            : CreateMicrosoftADOutcome(std::move(result.GetError()));
}

CreateSnapshotOutcome DirectoryServiceClient::CreateSnapshot(const CreateSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSnapshotOutcome(result.GetResultWithOwnership()) : CreateSnapshotOutcome(std::move(result.GetError()));
}

CreateTrustOutcome DirectoryServiceClient::CreateTrust(const CreateTrustRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTrustOutcome(result.GetResultWithOwnership()) : CreateTrustOutcome(std::move(result.GetError()));
}

DeleteADAssessmentOutcome DirectoryServiceClient::DeleteADAssessment(const DeleteADAssessmentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteADAssessmentOutcome(result.GetResultWithOwnership())
                            : DeleteADAssessmentOutcome(std::move(result.GetError()));
}

DeleteConditionalForwarderOutcome DirectoryServiceClient::DeleteConditionalForwarder(
    const DeleteConditionalForwarderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteConditionalForwarderOutcome(result.GetResultWithOwnership())
                            : DeleteConditionalForwarderOutcome(std::move(result.GetError()));
}

DeleteDirectoryOutcome DirectoryServiceClient::DeleteDirectory(const DeleteDirectoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDirectoryOutcome(result.GetResultWithOwnership())
                            : DeleteDirectoryOutcome(std::move(result.GetError()));
}

DeleteLogSubscriptionOutcome DirectoryServiceClient::DeleteLogSubscription(const DeleteLogSubscriptionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteLogSubscriptionOutcome(result.GetResultWithOwnership())
                            : DeleteLogSubscriptionOutcome(std::move(result.GetError()));
}

DeleteSnapshotOutcome DirectoryServiceClient::DeleteSnapshot(const DeleteSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSnapshotOutcome(result.GetResultWithOwnership()) : DeleteSnapshotOutcome(std::move(result.GetError()));
}

DeleteTrustOutcome DirectoryServiceClient::DeleteTrust(const DeleteTrustRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteTrustOutcome(result.GetResultWithOwnership()) : DeleteTrustOutcome(std::move(result.GetError()));
}

DeregisterCertificateOutcome DirectoryServiceClient::DeregisterCertificate(const DeregisterCertificateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeregisterCertificateOutcome(result.GetResultWithOwnership())
                            : DeregisterCertificateOutcome(std::move(result.GetError()));
}

DeregisterEventTopicOutcome DirectoryServiceClient::DeregisterEventTopic(const DeregisterEventTopicRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeregisterEventTopicOutcome(result.GetResultWithOwnership())
                            : DeregisterEventTopicOutcome(std::move(result.GetError()));
}

DescribeADAssessmentOutcome DirectoryServiceClient::DescribeADAssessment(const DescribeADAssessmentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeADAssessmentOutcome(result.GetResultWithOwnership())
                            : DescribeADAssessmentOutcome(std::move(result.GetError()));
}

DescribeCAEnrollmentPolicyOutcome DirectoryServiceClient::DescribeCAEnrollmentPolicy(
    const DescribeCAEnrollmentPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeCAEnrollmentPolicyOutcome(result.GetResultWithOwnership())
                            : DescribeCAEnrollmentPolicyOutcome(std::move(result.GetError()));
}

DescribeCertificateOutcome DirectoryServiceClient::DescribeCertificate(const DescribeCertificateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeCertificateOutcome(result.GetResultWithOwnership())
                            : DescribeCertificateOutcome(std::move(result.GetError()));
}

DescribeClientAuthenticationSettingsOutcome DirectoryServiceClient::DescribeClientAuthenticationSettings(
    const DescribeClientAuthenticationSettingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeClientAuthenticationSettingsOutcome(result.GetResultWithOwnership())
                            : DescribeClientAuthenticationSettingsOutcome(std::move(result.GetError()));
}

DescribeConditionalForwardersOutcome DirectoryServiceClient::DescribeConditionalForwarders(
    const DescribeConditionalForwardersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeConditionalForwardersOutcome(result.GetResultWithOwnership())
                            : DescribeConditionalForwardersOutcome(std::move(result.GetError()));
}

DescribeDirectoriesOutcome DirectoryServiceClient::DescribeDirectories(const DescribeDirectoriesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDirectoriesOutcome(result.GetResultWithOwnership())
                            : DescribeDirectoriesOutcome(std::move(result.GetError()));
}

DescribeDirectoryDataAccessOutcome DirectoryServiceClient::DescribeDirectoryDataAccess(
    const DescribeDirectoryDataAccessRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDirectoryDataAccessOutcome(result.GetResultWithOwnership())
                            : DescribeDirectoryDataAccessOutcome(std::move(result.GetError()));
}

DescribeDomainControllersOutcome DirectoryServiceClient::DescribeDomainControllers(const DescribeDomainControllersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeDomainControllersOutcome(result.GetResultWithOwnership())
                            : DescribeDomainControllersOutcome(std::move(result.GetError()));
}

DescribeEventTopicsOutcome DirectoryServiceClient::DescribeEventTopics(const DescribeEventTopicsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEventTopicsOutcome(result.GetResultWithOwnership())
                            : DescribeEventTopicsOutcome(std::move(result.GetError()));
}

DescribeHybridADUpdateOutcome DirectoryServiceClient::DescribeHybridADUpdate(const DescribeHybridADUpdateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeHybridADUpdateOutcome(result.GetResultWithOwnership())
                            : DescribeHybridADUpdateOutcome(std::move(result.GetError()));
}

DescribeLDAPSSettingsOutcome DirectoryServiceClient::DescribeLDAPSSettings(const DescribeLDAPSSettingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeLDAPSSettingsOutcome(result.GetResultWithOwnership())
                            : DescribeLDAPSSettingsOutcome(std::move(result.GetError()));
}

DescribeRegionsOutcome DirectoryServiceClient::DescribeRegions(const DescribeRegionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeRegionsOutcome(result.GetResultWithOwnership())
                            : DescribeRegionsOutcome(std::move(result.GetError()));
}

DescribeSettingsOutcome DirectoryServiceClient::DescribeSettings(const DescribeSettingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSettingsOutcome(result.GetResultWithOwnership())
                            : DescribeSettingsOutcome(std::move(result.GetError()));
}

DescribeSharedDirectoriesOutcome DirectoryServiceClient::DescribeSharedDirectories(const DescribeSharedDirectoriesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSharedDirectoriesOutcome(result.GetResultWithOwnership())
                            : DescribeSharedDirectoriesOutcome(std::move(result.GetError()));
}

DescribeSnapshotsOutcome DirectoryServiceClient::DescribeSnapshots(const DescribeSnapshotsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSnapshotsOutcome(result.GetResultWithOwnership())
                            : DescribeSnapshotsOutcome(std::move(result.GetError()));
}

DescribeTrustsOutcome DirectoryServiceClient::DescribeTrusts(const DescribeTrustsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeTrustsOutcome(result.GetResultWithOwnership()) : DescribeTrustsOutcome(std::move(result.GetError()));
}

DescribeUpdateDirectoryOutcome DirectoryServiceClient::DescribeUpdateDirectory(const DescribeUpdateDirectoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeUpdateDirectoryOutcome(result.GetResultWithOwnership())
                            : DescribeUpdateDirectoryOutcome(std::move(result.GetError()));
}

DisableCAEnrollmentPolicyOutcome DirectoryServiceClient::DisableCAEnrollmentPolicy(const DisableCAEnrollmentPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableCAEnrollmentPolicyOutcome(result.GetResultWithOwnership())
                            : DisableCAEnrollmentPolicyOutcome(std::move(result.GetError()));
}

DisableClientAuthenticationOutcome DirectoryServiceClient::DisableClientAuthentication(
    const DisableClientAuthenticationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableClientAuthenticationOutcome(result.GetResultWithOwnership())
                            : DisableClientAuthenticationOutcome(std::move(result.GetError()));
}

DisableDirectoryDataAccessOutcome DirectoryServiceClient::DisableDirectoryDataAccess(
    const DisableDirectoryDataAccessRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableDirectoryDataAccessOutcome(result.GetResultWithOwnership())
                            : DisableDirectoryDataAccessOutcome(std::move(result.GetError()));
}

DisableLDAPSOutcome DirectoryServiceClient::DisableLDAPS(const DisableLDAPSRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableLDAPSOutcome(result.GetResultWithOwnership()) : DisableLDAPSOutcome(std::move(result.GetError()));
}

DisableRadiusOutcome DirectoryServiceClient::DisableRadius(const DisableRadiusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableRadiusOutcome(result.GetResultWithOwnership()) : DisableRadiusOutcome(std::move(result.GetError()));
}

DisableSsoOutcome DirectoryServiceClient::DisableSso(const DisableSsoRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableSsoOutcome(result.GetResultWithOwnership()) : DisableSsoOutcome(std::move(result.GetError()));
}

EnableCAEnrollmentPolicyOutcome DirectoryServiceClient::EnableCAEnrollmentPolicy(const EnableCAEnrollmentPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableCAEnrollmentPolicyOutcome(result.GetResultWithOwnership())
                            : EnableCAEnrollmentPolicyOutcome(std::move(result.GetError()));
}

EnableClientAuthenticationOutcome DirectoryServiceClient::EnableClientAuthentication(
    const EnableClientAuthenticationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableClientAuthenticationOutcome(result.GetResultWithOwnership())
                            : EnableClientAuthenticationOutcome(std::move(result.GetError()));
}

EnableDirectoryDataAccessOutcome DirectoryServiceClient::EnableDirectoryDataAccess(const EnableDirectoryDataAccessRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableDirectoryDataAccessOutcome(result.GetResultWithOwnership())
                            : EnableDirectoryDataAccessOutcome(std::move(result.GetError()));
}

EnableLDAPSOutcome DirectoryServiceClient::EnableLDAPS(const EnableLDAPSRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableLDAPSOutcome(result.GetResultWithOwnership()) : EnableLDAPSOutcome(std::move(result.GetError()));
}

EnableRadiusOutcome DirectoryServiceClient::EnableRadius(const EnableRadiusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableRadiusOutcome(result.GetResultWithOwnership()) : EnableRadiusOutcome(std::move(result.GetError()));
}

EnableSsoOutcome DirectoryServiceClient::EnableSso(const EnableSsoRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableSsoOutcome(result.GetResultWithOwnership()) : EnableSsoOutcome(std::move(result.GetError()));
}

GetDirectoryLimitsOutcome DirectoryServiceClient::GetDirectoryLimits(const GetDirectoryLimitsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDirectoryLimitsOutcome(result.GetResultWithOwnership())
                            : GetDirectoryLimitsOutcome(std::move(result.GetError()));
}

GetSnapshotLimitsOutcome DirectoryServiceClient::GetSnapshotLimits(const GetSnapshotLimitsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetSnapshotLimitsOutcome(result.GetResultWithOwnership())
                            : GetSnapshotLimitsOutcome(std::move(result.GetError()));
}

ListADAssessmentsOutcome DirectoryServiceClient::ListADAssessments(const ListADAssessmentsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListADAssessmentsOutcome(result.GetResultWithOwnership())
                            : ListADAssessmentsOutcome(std::move(result.GetError()));
}

ListCertificatesOutcome DirectoryServiceClient::ListCertificates(const ListCertificatesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCertificatesOutcome(result.GetResultWithOwnership())
                            : ListCertificatesOutcome(std::move(result.GetError()));
}

ListIpRoutesOutcome DirectoryServiceClient::ListIpRoutes(const ListIpRoutesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListIpRoutesOutcome(result.GetResultWithOwnership()) : ListIpRoutesOutcome(std::move(result.GetError()));
}

ListLogSubscriptionsOutcome DirectoryServiceClient::ListLogSubscriptions(const ListLogSubscriptionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListLogSubscriptionsOutcome(result.GetResultWithOwnership())
                            : ListLogSubscriptionsOutcome(std::move(result.GetError()));
}

ListSchemaExtensionsOutcome DirectoryServiceClient::ListSchemaExtensions(const ListSchemaExtensionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListSchemaExtensionsOutcome(result.GetResultWithOwnership())
                            : ListSchemaExtensionsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome DirectoryServiceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

RegisterCertificateOutcome DirectoryServiceClient::RegisterCertificate(const RegisterCertificateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterCertificateOutcome(result.GetResultWithOwnership())
                            : RegisterCertificateOutcome(std::move(result.GetError()));
}

RegisterEventTopicOutcome DirectoryServiceClient::RegisterEventTopic(const RegisterEventTopicRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterEventTopicOutcome(result.GetResultWithOwnership())
                            : RegisterEventTopicOutcome(std::move(result.GetError()));
}

RejectSharedDirectoryOutcome DirectoryServiceClient::RejectSharedDirectory(const RejectSharedDirectoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RejectSharedDirectoryOutcome(result.GetResultWithOwnership())
                            : RejectSharedDirectoryOutcome(std::move(result.GetError()));
}

RemoveIpRoutesOutcome DirectoryServiceClient::RemoveIpRoutes(const RemoveIpRoutesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RemoveIpRoutesOutcome(result.GetResultWithOwnership()) : RemoveIpRoutesOutcome(std::move(result.GetError()));
}

RemoveRegionOutcome DirectoryServiceClient::RemoveRegion(const RemoveRegionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RemoveRegionOutcome(result.GetResultWithOwnership()) : RemoveRegionOutcome(std::move(result.GetError()));
}

RemoveTagsFromResourceOutcome DirectoryServiceClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RemoveTagsFromResourceOutcome(result.GetResultWithOwnership())
                            : RemoveTagsFromResourceOutcome(std::move(result.GetError()));
}

ResetUserPasswordOutcome DirectoryServiceClient::ResetUserPassword(const ResetUserPasswordRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ResetUserPasswordOutcome(result.GetResultWithOwnership())
                            : ResetUserPasswordOutcome(std::move(result.GetError()));
}

RestoreFromSnapshotOutcome DirectoryServiceClient::RestoreFromSnapshot(const RestoreFromSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RestoreFromSnapshotOutcome(result.GetResultWithOwnership())
                            : RestoreFromSnapshotOutcome(std::move(result.GetError()));
}

ShareDirectoryOutcome DirectoryServiceClient::ShareDirectory(const ShareDirectoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ShareDirectoryOutcome(result.GetResultWithOwnership()) : ShareDirectoryOutcome(std::move(result.GetError()));
}

StartADAssessmentOutcome DirectoryServiceClient::StartADAssessment(const StartADAssessmentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartADAssessmentOutcome(result.GetResultWithOwnership())
                            : StartADAssessmentOutcome(std::move(result.GetError()));
}

StartSchemaExtensionOutcome DirectoryServiceClient::StartSchemaExtension(const StartSchemaExtensionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartSchemaExtensionOutcome(result.GetResultWithOwnership())
                            : StartSchemaExtensionOutcome(std::move(result.GetError()));
}

UnshareDirectoryOutcome DirectoryServiceClient::UnshareDirectory(const UnshareDirectoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UnshareDirectoryOutcome(result.GetResultWithOwnership())
                            : UnshareDirectoryOutcome(std::move(result.GetError()));
}

UpdateConditionalForwarderOutcome DirectoryServiceClient::UpdateConditionalForwarder(
    const UpdateConditionalForwarderRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateConditionalForwarderOutcome(result.GetResultWithOwnership())
                            : UpdateConditionalForwarderOutcome(std::move(result.GetError()));
}

UpdateDirectorySetupOutcome DirectoryServiceClient::UpdateDirectorySetup(const UpdateDirectorySetupRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateDirectorySetupOutcome(result.GetResultWithOwnership())
                            : UpdateDirectorySetupOutcome(std::move(result.GetError()));
}

UpdateHybridADOutcome DirectoryServiceClient::UpdateHybridAD(const UpdateHybridADRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateHybridADOutcome(result.GetResultWithOwnership()) : UpdateHybridADOutcome(std::move(result.GetError()));
}

UpdateNumberOfDomainControllersOutcome DirectoryServiceClient::UpdateNumberOfDomainControllers(
    const UpdateNumberOfDomainControllersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateNumberOfDomainControllersOutcome(result.GetResultWithOwnership())
                            : UpdateNumberOfDomainControllersOutcome(std::move(result.GetError()));
}

UpdateRadiusOutcome DirectoryServiceClient::UpdateRadius(const UpdateRadiusRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateRadiusOutcome(result.GetResultWithOwnership()) : UpdateRadiusOutcome(std::move(result.GetError()));
}

UpdateSettingsOutcome DirectoryServiceClient::UpdateSettings(const UpdateSettingsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateSettingsOutcome(result.GetResultWithOwnership()) : UpdateSettingsOutcome(std::move(result.GetError()));
}

UpdateTrustOutcome DirectoryServiceClient::UpdateTrust(const UpdateTrustRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateTrustOutcome(result.GetResultWithOwnership()) : UpdateTrustOutcome(std::move(result.GetError()));
}

VerifyTrustOutcome DirectoryServiceClient::VerifyTrust(const VerifyTrustRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? VerifyTrustOutcome(result.GetResultWithOwnership()) : VerifyTrustOutcome(std::move(result.GetError()));
}
