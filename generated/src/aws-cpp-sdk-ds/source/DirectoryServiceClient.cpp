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
  return AcceptSharedDirectoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AddIpRoutesOutcome DirectoryServiceClient::AddIpRoutes(const AddIpRoutesRequest& request) const {
  return AddIpRoutesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AddRegionOutcome DirectoryServiceClient::AddRegion(const AddRegionRequest& request) const {
  return AddRegionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AddTagsToResourceOutcome DirectoryServiceClient::AddTagsToResource(const AddTagsToResourceRequest& request) const {
  return AddTagsToResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelSchemaExtensionOutcome DirectoryServiceClient::CancelSchemaExtension(const CancelSchemaExtensionRequest& request) const {
  return CancelSchemaExtensionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ConnectDirectoryOutcome DirectoryServiceClient::ConnectDirectory(const ConnectDirectoryRequest& request) const {
  return ConnectDirectoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAliasOutcome DirectoryServiceClient::CreateAlias(const CreateAliasRequest& request) const {
  return CreateAliasOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateComputerOutcome DirectoryServiceClient::CreateComputer(const CreateComputerRequest& request) const {
  return CreateComputerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateConditionalForwarderOutcome DirectoryServiceClient::CreateConditionalForwarder(
    const CreateConditionalForwarderRequest& request) const {
  return CreateConditionalForwarderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDirectoryOutcome DirectoryServiceClient::CreateDirectory(const CreateDirectoryRequest& request) const {
  return CreateDirectoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateHybridADOutcome DirectoryServiceClient::CreateHybridAD(const CreateHybridADRequest& request) const {
  return CreateHybridADOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLogSubscriptionOutcome DirectoryServiceClient::CreateLogSubscription(const CreateLogSubscriptionRequest& request) const {
  return CreateLogSubscriptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateMicrosoftADOutcome DirectoryServiceClient::CreateMicrosoftAD(const CreateMicrosoftADRequest& request) const {
  return CreateMicrosoftADOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSnapshotOutcome DirectoryServiceClient::CreateSnapshot(const CreateSnapshotRequest& request) const {
  return CreateSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTrustOutcome DirectoryServiceClient::CreateTrust(const CreateTrustRequest& request) const {
  return CreateTrustOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteADAssessmentOutcome DirectoryServiceClient::DeleteADAssessment(const DeleteADAssessmentRequest& request) const {
  return DeleteADAssessmentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteConditionalForwarderOutcome DirectoryServiceClient::DeleteConditionalForwarder(
    const DeleteConditionalForwarderRequest& request) const {
  return DeleteConditionalForwarderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDirectoryOutcome DirectoryServiceClient::DeleteDirectory(const DeleteDirectoryRequest& request) const {
  return DeleteDirectoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLogSubscriptionOutcome DirectoryServiceClient::DeleteLogSubscription(const DeleteLogSubscriptionRequest& request) const {
  return DeleteLogSubscriptionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSnapshotOutcome DirectoryServiceClient::DeleteSnapshot(const DeleteSnapshotRequest& request) const {
  return DeleteSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteTrustOutcome DirectoryServiceClient::DeleteTrust(const DeleteTrustRequest& request) const {
  return DeleteTrustOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeregisterCertificateOutcome DirectoryServiceClient::DeregisterCertificate(const DeregisterCertificateRequest& request) const {
  return DeregisterCertificateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeregisterEventTopicOutcome DirectoryServiceClient::DeregisterEventTopic(const DeregisterEventTopicRequest& request) const {
  return DeregisterEventTopicOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeADAssessmentOutcome DirectoryServiceClient::DescribeADAssessment(const DescribeADAssessmentRequest& request) const {
  return DescribeADAssessmentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCAEnrollmentPolicyOutcome DirectoryServiceClient::DescribeCAEnrollmentPolicy(
    const DescribeCAEnrollmentPolicyRequest& request) const {
  return DescribeCAEnrollmentPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeCertificateOutcome DirectoryServiceClient::DescribeCertificate(const DescribeCertificateRequest& request) const {
  return DescribeCertificateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeClientAuthenticationSettingsOutcome DirectoryServiceClient::DescribeClientAuthenticationSettings(
    const DescribeClientAuthenticationSettingsRequest& request) const {
  return DescribeClientAuthenticationSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeConditionalForwardersOutcome DirectoryServiceClient::DescribeConditionalForwarders(
    const DescribeConditionalForwardersRequest& request) const {
  return DescribeConditionalForwardersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDirectoriesOutcome DirectoryServiceClient::DescribeDirectories(const DescribeDirectoriesRequest& request) const {
  return DescribeDirectoriesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDirectoryDataAccessOutcome DirectoryServiceClient::DescribeDirectoryDataAccess(
    const DescribeDirectoryDataAccessRequest& request) const {
  return DescribeDirectoryDataAccessOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDomainControllersOutcome DirectoryServiceClient::DescribeDomainControllers(const DescribeDomainControllersRequest& request) const {
  return DescribeDomainControllersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeEventTopicsOutcome DirectoryServiceClient::DescribeEventTopics(const DescribeEventTopicsRequest& request) const {
  return DescribeEventTopicsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeHybridADUpdateOutcome DirectoryServiceClient::DescribeHybridADUpdate(const DescribeHybridADUpdateRequest& request) const {
  return DescribeHybridADUpdateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLDAPSSettingsOutcome DirectoryServiceClient::DescribeLDAPSSettings(const DescribeLDAPSSettingsRequest& request) const {
  return DescribeLDAPSSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRegionsOutcome DirectoryServiceClient::DescribeRegions(const DescribeRegionsRequest& request) const {
  return DescribeRegionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSettingsOutcome DirectoryServiceClient::DescribeSettings(const DescribeSettingsRequest& request) const {
  return DescribeSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSharedDirectoriesOutcome DirectoryServiceClient::DescribeSharedDirectories(const DescribeSharedDirectoriesRequest& request) const {
  return DescribeSharedDirectoriesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSnapshotsOutcome DirectoryServiceClient::DescribeSnapshots(const DescribeSnapshotsRequest& request) const {
  return DescribeSnapshotsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTrustsOutcome DirectoryServiceClient::DescribeTrusts(const DescribeTrustsRequest& request) const {
  return DescribeTrustsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeUpdateDirectoryOutcome DirectoryServiceClient::DescribeUpdateDirectory(const DescribeUpdateDirectoryRequest& request) const {
  return DescribeUpdateDirectoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableCAEnrollmentPolicyOutcome DirectoryServiceClient::DisableCAEnrollmentPolicy(const DisableCAEnrollmentPolicyRequest& request) const {
  return DisableCAEnrollmentPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableClientAuthenticationOutcome DirectoryServiceClient::DisableClientAuthentication(
    const DisableClientAuthenticationRequest& request) const {
  return DisableClientAuthenticationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableDirectoryDataAccessOutcome DirectoryServiceClient::DisableDirectoryDataAccess(
    const DisableDirectoryDataAccessRequest& request) const {
  return DisableDirectoryDataAccessOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableLDAPSOutcome DirectoryServiceClient::DisableLDAPS(const DisableLDAPSRequest& request) const {
  return DisableLDAPSOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableRadiusOutcome DirectoryServiceClient::DisableRadius(const DisableRadiusRequest& request) const {
  return DisableRadiusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableSsoOutcome DirectoryServiceClient::DisableSso(const DisableSsoRequest& request) const {
  return DisableSsoOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableCAEnrollmentPolicyOutcome DirectoryServiceClient::EnableCAEnrollmentPolicy(const EnableCAEnrollmentPolicyRequest& request) const {
  return EnableCAEnrollmentPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableClientAuthenticationOutcome DirectoryServiceClient::EnableClientAuthentication(
    const EnableClientAuthenticationRequest& request) const {
  return EnableClientAuthenticationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableDirectoryDataAccessOutcome DirectoryServiceClient::EnableDirectoryDataAccess(const EnableDirectoryDataAccessRequest& request) const {
  return EnableDirectoryDataAccessOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableLDAPSOutcome DirectoryServiceClient::EnableLDAPS(const EnableLDAPSRequest& request) const {
  return EnableLDAPSOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableRadiusOutcome DirectoryServiceClient::EnableRadius(const EnableRadiusRequest& request) const {
  return EnableRadiusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableSsoOutcome DirectoryServiceClient::EnableSso(const EnableSsoRequest& request) const {
  return EnableSsoOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDirectoryLimitsOutcome DirectoryServiceClient::GetDirectoryLimits(const GetDirectoryLimitsRequest& request) const {
  return GetDirectoryLimitsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSnapshotLimitsOutcome DirectoryServiceClient::GetSnapshotLimits(const GetSnapshotLimitsRequest& request) const {
  return GetSnapshotLimitsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListADAssessmentsOutcome DirectoryServiceClient::ListADAssessments(const ListADAssessmentsRequest& request) const {
  return ListADAssessmentsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCertificatesOutcome DirectoryServiceClient::ListCertificates(const ListCertificatesRequest& request) const {
  return ListCertificatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListIpRoutesOutcome DirectoryServiceClient::ListIpRoutes(const ListIpRoutesRequest& request) const {
  return ListIpRoutesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLogSubscriptionsOutcome DirectoryServiceClient::ListLogSubscriptions(const ListLogSubscriptionsRequest& request) const {
  return ListLogSubscriptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSchemaExtensionsOutcome DirectoryServiceClient::ListSchemaExtensions(const ListSchemaExtensionsRequest& request) const {
  return ListSchemaExtensionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome DirectoryServiceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterCertificateOutcome DirectoryServiceClient::RegisterCertificate(const RegisterCertificateRequest& request) const {
  return RegisterCertificateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterEventTopicOutcome DirectoryServiceClient::RegisterEventTopic(const RegisterEventTopicRequest& request) const {
  return RegisterEventTopicOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RejectSharedDirectoryOutcome DirectoryServiceClient::RejectSharedDirectory(const RejectSharedDirectoryRequest& request) const {
  return RejectSharedDirectoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveIpRoutesOutcome DirectoryServiceClient::RemoveIpRoutes(const RemoveIpRoutesRequest& request) const {
  return RemoveIpRoutesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveRegionOutcome DirectoryServiceClient::RemoveRegion(const RemoveRegionRequest& request) const {
  return RemoveRegionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveTagsFromResourceOutcome DirectoryServiceClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const {
  return RemoveTagsFromResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ResetUserPasswordOutcome DirectoryServiceClient::ResetUserPassword(const ResetUserPasswordRequest& request) const {
  return ResetUserPasswordOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RestoreFromSnapshotOutcome DirectoryServiceClient::RestoreFromSnapshot(const RestoreFromSnapshotRequest& request) const {
  return RestoreFromSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ShareDirectoryOutcome DirectoryServiceClient::ShareDirectory(const ShareDirectoryRequest& request) const {
  return ShareDirectoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartADAssessmentOutcome DirectoryServiceClient::StartADAssessment(const StartADAssessmentRequest& request) const {
  return StartADAssessmentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartSchemaExtensionOutcome DirectoryServiceClient::StartSchemaExtension(const StartSchemaExtensionRequest& request) const {
  return StartSchemaExtensionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UnshareDirectoryOutcome DirectoryServiceClient::UnshareDirectory(const UnshareDirectoryRequest& request) const {
  return UnshareDirectoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateConditionalForwarderOutcome DirectoryServiceClient::UpdateConditionalForwarder(
    const UpdateConditionalForwarderRequest& request) const {
  return UpdateConditionalForwarderOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDirectorySetupOutcome DirectoryServiceClient::UpdateDirectorySetup(const UpdateDirectorySetupRequest& request) const {
  return UpdateDirectorySetupOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateHybridADOutcome DirectoryServiceClient::UpdateHybridAD(const UpdateHybridADRequest& request) const {
  return UpdateHybridADOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateNumberOfDomainControllersOutcome DirectoryServiceClient::UpdateNumberOfDomainControllers(
    const UpdateNumberOfDomainControllersRequest& request) const {
  return UpdateNumberOfDomainControllersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateRadiusOutcome DirectoryServiceClient::UpdateRadius(const UpdateRadiusRequest& request) const {
  return UpdateRadiusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSettingsOutcome DirectoryServiceClient::UpdateSettings(const UpdateSettingsRequest& request) const {
  return UpdateSettingsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateTrustOutcome DirectoryServiceClient::UpdateTrust(const UpdateTrustRequest& request) const {
  return UpdateTrustOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

VerifyTrustOutcome DirectoryServiceClient::VerifyTrust(const VerifyTrustRequest& request) const {
  return VerifyTrustOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
