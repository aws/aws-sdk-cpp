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
#include <aws/lightsail/LightsailClient.h>
#include <aws/lightsail/LightsailEndpointProvider.h>
#include <aws/lightsail/LightsailErrorMarshaller.h>
#include <aws/lightsail/model/AllocateStaticIpRequest.h>
#include <aws/lightsail/model/AttachCertificateToDistributionRequest.h>
#include <aws/lightsail/model/AttachDiskRequest.h>
#include <aws/lightsail/model/AttachInstancesToLoadBalancerRequest.h>
#include <aws/lightsail/model/AttachLoadBalancerTlsCertificateRequest.h>
#include <aws/lightsail/model/AttachStaticIpRequest.h>
#include <aws/lightsail/model/CloseInstancePublicPortsRequest.h>
#include <aws/lightsail/model/CopySnapshotRequest.h>
#include <aws/lightsail/model/CreateBucketAccessKeyRequest.h>
#include <aws/lightsail/model/CreateBucketRequest.h>
#include <aws/lightsail/model/CreateCertificateRequest.h>
#include <aws/lightsail/model/CreateCloudFormationStackRequest.h>
#include <aws/lightsail/model/CreateContactMethodRequest.h>
#include <aws/lightsail/model/CreateContainerServiceDeploymentRequest.h>
#include <aws/lightsail/model/CreateContainerServiceRegistryLoginRequest.h>
#include <aws/lightsail/model/CreateContainerServiceRequest.h>
#include <aws/lightsail/model/CreateDiskFromSnapshotRequest.h>
#include <aws/lightsail/model/CreateDiskRequest.h>
#include <aws/lightsail/model/CreateDiskSnapshotRequest.h>
#include <aws/lightsail/model/CreateDistributionRequest.h>
#include <aws/lightsail/model/CreateDomainEntryRequest.h>
#include <aws/lightsail/model/CreateDomainRequest.h>
#include <aws/lightsail/model/CreateGUISessionAccessDetailsRequest.h>
#include <aws/lightsail/model/CreateInstanceSnapshotRequest.h>
#include <aws/lightsail/model/CreateInstancesFromSnapshotRequest.h>
#include <aws/lightsail/model/CreateInstancesRequest.h>
#include <aws/lightsail/model/CreateKeyPairRequest.h>
#include <aws/lightsail/model/CreateLoadBalancerRequest.h>
#include <aws/lightsail/model/CreateLoadBalancerTlsCertificateRequest.h>
#include <aws/lightsail/model/CreateRelationalDatabaseFromSnapshotRequest.h>
#include <aws/lightsail/model/CreateRelationalDatabaseRequest.h>
#include <aws/lightsail/model/CreateRelationalDatabaseSnapshotRequest.h>
#include <aws/lightsail/model/DeleteAlarmRequest.h>
#include <aws/lightsail/model/DeleteAutoSnapshotRequest.h>
#include <aws/lightsail/model/DeleteBucketAccessKeyRequest.h>
#include <aws/lightsail/model/DeleteBucketRequest.h>
#include <aws/lightsail/model/DeleteCertificateRequest.h>
#include <aws/lightsail/model/DeleteContactMethodRequest.h>
#include <aws/lightsail/model/DeleteContainerImageRequest.h>
#include <aws/lightsail/model/DeleteContainerServiceRequest.h>
#include <aws/lightsail/model/DeleteDiskRequest.h>
#include <aws/lightsail/model/DeleteDiskSnapshotRequest.h>
#include <aws/lightsail/model/DeleteDistributionRequest.h>
#include <aws/lightsail/model/DeleteDomainEntryRequest.h>
#include <aws/lightsail/model/DeleteDomainRequest.h>
#include <aws/lightsail/model/DeleteInstanceRequest.h>
#include <aws/lightsail/model/DeleteInstanceSnapshotRequest.h>
#include <aws/lightsail/model/DeleteKeyPairRequest.h>
#include <aws/lightsail/model/DeleteKnownHostKeysRequest.h>
#include <aws/lightsail/model/DeleteLoadBalancerRequest.h>
#include <aws/lightsail/model/DeleteLoadBalancerTlsCertificateRequest.h>
#include <aws/lightsail/model/DeleteRelationalDatabaseRequest.h>
#include <aws/lightsail/model/DeleteRelationalDatabaseSnapshotRequest.h>
#include <aws/lightsail/model/DetachCertificateFromDistributionRequest.h>
#include <aws/lightsail/model/DetachDiskRequest.h>
#include <aws/lightsail/model/DetachInstancesFromLoadBalancerRequest.h>
#include <aws/lightsail/model/DetachStaticIpRequest.h>
#include <aws/lightsail/model/DisableAddOnRequest.h>
#include <aws/lightsail/model/DownloadDefaultKeyPairRequest.h>
#include <aws/lightsail/model/EnableAddOnRequest.h>
#include <aws/lightsail/model/ExportSnapshotRequest.h>
#include <aws/lightsail/model/GetActiveNamesRequest.h>
#include <aws/lightsail/model/GetAlarmsRequest.h>
#include <aws/lightsail/model/GetAutoSnapshotsRequest.h>
#include <aws/lightsail/model/GetBlueprintsRequest.h>
#include <aws/lightsail/model/GetBucketAccessKeysRequest.h>
#include <aws/lightsail/model/GetBucketBundlesRequest.h>
#include <aws/lightsail/model/GetBucketMetricDataRequest.h>
#include <aws/lightsail/model/GetBucketsRequest.h>
#include <aws/lightsail/model/GetBundlesRequest.h>
#include <aws/lightsail/model/GetCertificatesRequest.h>
#include <aws/lightsail/model/GetCloudFormationStackRecordsRequest.h>
#include <aws/lightsail/model/GetContactMethodsRequest.h>
#include <aws/lightsail/model/GetContainerAPIMetadataRequest.h>
#include <aws/lightsail/model/GetContainerImagesRequest.h>
#include <aws/lightsail/model/GetContainerLogRequest.h>
#include <aws/lightsail/model/GetContainerServiceDeploymentsRequest.h>
#include <aws/lightsail/model/GetContainerServiceMetricDataRequest.h>
#include <aws/lightsail/model/GetContainerServicePowersRequest.h>
#include <aws/lightsail/model/GetContainerServicesRequest.h>
#include <aws/lightsail/model/GetCostEstimateRequest.h>
#include <aws/lightsail/model/GetDiskRequest.h>
#include <aws/lightsail/model/GetDiskSnapshotRequest.h>
#include <aws/lightsail/model/GetDiskSnapshotsRequest.h>
#include <aws/lightsail/model/GetDisksRequest.h>
#include <aws/lightsail/model/GetDistributionBundlesRequest.h>
#include <aws/lightsail/model/GetDistributionLatestCacheResetRequest.h>
#include <aws/lightsail/model/GetDistributionMetricDataRequest.h>
#include <aws/lightsail/model/GetDistributionsRequest.h>
#include <aws/lightsail/model/GetDomainRequest.h>
#include <aws/lightsail/model/GetDomainsRequest.h>
#include <aws/lightsail/model/GetExportSnapshotRecordsRequest.h>
#include <aws/lightsail/model/GetInstanceAccessDetailsRequest.h>
#include <aws/lightsail/model/GetInstanceMetricDataRequest.h>
#include <aws/lightsail/model/GetInstancePortStatesRequest.h>
#include <aws/lightsail/model/GetInstanceRequest.h>
#include <aws/lightsail/model/GetInstanceSnapshotRequest.h>
#include <aws/lightsail/model/GetInstanceSnapshotsRequest.h>
#include <aws/lightsail/model/GetInstanceStateRequest.h>
#include <aws/lightsail/model/GetInstancesRequest.h>
#include <aws/lightsail/model/GetKeyPairRequest.h>
#include <aws/lightsail/model/GetKeyPairsRequest.h>
#include <aws/lightsail/model/GetLoadBalancerMetricDataRequest.h>
#include <aws/lightsail/model/GetLoadBalancerRequest.h>
#include <aws/lightsail/model/GetLoadBalancerTlsCertificatesRequest.h>
#include <aws/lightsail/model/GetLoadBalancerTlsPoliciesRequest.h>
#include <aws/lightsail/model/GetLoadBalancersRequest.h>
#include <aws/lightsail/model/GetOperationRequest.h>
#include <aws/lightsail/model/GetOperationsForResourceRequest.h>
#include <aws/lightsail/model/GetOperationsRequest.h>
#include <aws/lightsail/model/GetRegionsRequest.h>
#include <aws/lightsail/model/GetRelationalDatabaseBlueprintsRequest.h>
#include <aws/lightsail/model/GetRelationalDatabaseBundlesRequest.h>
#include <aws/lightsail/model/GetRelationalDatabaseEventsRequest.h>
#include <aws/lightsail/model/GetRelationalDatabaseLogEventsRequest.h>
#include <aws/lightsail/model/GetRelationalDatabaseLogStreamsRequest.h>
#include <aws/lightsail/model/GetRelationalDatabaseMasterUserPasswordRequest.h>
#include <aws/lightsail/model/GetRelationalDatabaseMetricDataRequest.h>
#include <aws/lightsail/model/GetRelationalDatabaseParametersRequest.h>
#include <aws/lightsail/model/GetRelationalDatabaseRequest.h>
#include <aws/lightsail/model/GetRelationalDatabaseSnapshotRequest.h>
#include <aws/lightsail/model/GetRelationalDatabaseSnapshotsRequest.h>
#include <aws/lightsail/model/GetRelationalDatabasesRequest.h>
#include <aws/lightsail/model/GetSetupHistoryRequest.h>
#include <aws/lightsail/model/GetStaticIpRequest.h>
#include <aws/lightsail/model/GetStaticIpsRequest.h>
#include <aws/lightsail/model/ImportKeyPairRequest.h>
#include <aws/lightsail/model/IsVpcPeeredRequest.h>
#include <aws/lightsail/model/OpenInstancePublicPortsRequest.h>
#include <aws/lightsail/model/PeerVpcRequest.h>
#include <aws/lightsail/model/PutAlarmRequest.h>
#include <aws/lightsail/model/PutInstancePublicPortsRequest.h>
#include <aws/lightsail/model/RebootInstanceRequest.h>
#include <aws/lightsail/model/RebootRelationalDatabaseRequest.h>
#include <aws/lightsail/model/RegisterContainerImageRequest.h>
#include <aws/lightsail/model/ReleaseStaticIpRequest.h>
#include <aws/lightsail/model/ResetDistributionCacheRequest.h>
#include <aws/lightsail/model/SendContactMethodVerificationRequest.h>
#include <aws/lightsail/model/SetIpAddressTypeRequest.h>
#include <aws/lightsail/model/SetResourceAccessForBucketRequest.h>
#include <aws/lightsail/model/SetupInstanceHttpsRequest.h>
#include <aws/lightsail/model/StartGUISessionRequest.h>
#include <aws/lightsail/model/StartInstanceRequest.h>
#include <aws/lightsail/model/StartRelationalDatabaseRequest.h>
#include <aws/lightsail/model/StopGUISessionRequest.h>
#include <aws/lightsail/model/StopInstanceRequest.h>
#include <aws/lightsail/model/StopRelationalDatabaseRequest.h>
#include <aws/lightsail/model/TagResourceRequest.h>
#include <aws/lightsail/model/TestAlarmRequest.h>
#include <aws/lightsail/model/UnpeerVpcRequest.h>
#include <aws/lightsail/model/UntagResourceRequest.h>
#include <aws/lightsail/model/UpdateBucketBundleRequest.h>
#include <aws/lightsail/model/UpdateBucketRequest.h>
#include <aws/lightsail/model/UpdateContainerServiceRequest.h>
#include <aws/lightsail/model/UpdateDistributionBundleRequest.h>
#include <aws/lightsail/model/UpdateDistributionRequest.h>
#include <aws/lightsail/model/UpdateDomainEntryRequest.h>
#include <aws/lightsail/model/UpdateInstanceMetadataOptionsRequest.h>
#include <aws/lightsail/model/UpdateLoadBalancerAttributeRequest.h>
#include <aws/lightsail/model/UpdateRelationalDatabaseParametersRequest.h>
#include <aws/lightsail/model/UpdateRelationalDatabaseRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Lightsail;
using namespace Aws::Lightsail::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Lightsail {
const char SERVICE_NAME[] = "lightsail";
const char ALLOCATION_TAG[] = "LightsailClient";
}  // namespace Lightsail
}  // namespace Aws
const char* LightsailClient::GetServiceName() { return SERVICE_NAME; }
const char* LightsailClient::GetAllocationTag() { return ALLOCATION_TAG; }

LightsailClient::LightsailClient(const Lightsail::LightsailClientConfiguration& clientConfiguration,
                                 std::shared_ptr<LightsailEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LightsailErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<LightsailEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LightsailClient::LightsailClient(const AWSCredentials& credentials, std::shared_ptr<LightsailEndpointProviderBase> endpointProvider,
                                 const Lightsail::LightsailClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LightsailErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<LightsailEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LightsailClient::LightsailClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<LightsailEndpointProviderBase> endpointProvider,
                                 const Lightsail::LightsailClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LightsailErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<LightsailEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
LightsailClient::LightsailClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LightsailErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LightsailEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LightsailClient::LightsailClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LightsailErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LightsailEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LightsailClient::LightsailClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LightsailErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LightsailEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
LightsailClient::~LightsailClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<LightsailEndpointProviderBase>& LightsailClient::accessEndpointProvider() { return m_endpointProvider; }

void LightsailClient::init(const Lightsail::LightsailClientConfiguration& config) {
  AWSClient::SetServiceClientName("Lightsail");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "lightsail");
}

void LightsailClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
LightsailClient::InvokeOperationOutcome LightsailClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

AllocateStaticIpOutcome LightsailClient::AllocateStaticIp(const AllocateStaticIpRequest& request) const {
  return AllocateStaticIpOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AttachCertificateToDistributionOutcome LightsailClient::AttachCertificateToDistribution(
    const AttachCertificateToDistributionRequest& request) const {
  return AttachCertificateToDistributionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AttachDiskOutcome LightsailClient::AttachDisk(const AttachDiskRequest& request) const {
  return AttachDiskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AttachInstancesToLoadBalancerOutcome LightsailClient::AttachInstancesToLoadBalancer(
    const AttachInstancesToLoadBalancerRequest& request) const {
  return AttachInstancesToLoadBalancerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AttachLoadBalancerTlsCertificateOutcome LightsailClient::AttachLoadBalancerTlsCertificate(
    const AttachLoadBalancerTlsCertificateRequest& request) const {
  return AttachLoadBalancerTlsCertificateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AttachStaticIpOutcome LightsailClient::AttachStaticIp(const AttachStaticIpRequest& request) const {
  return AttachStaticIpOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CloseInstancePublicPortsOutcome LightsailClient::CloseInstancePublicPorts(const CloseInstancePublicPortsRequest& request) const {
  return CloseInstancePublicPortsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CopySnapshotOutcome LightsailClient::CopySnapshot(const CopySnapshotRequest& request) const {
  return CopySnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateBucketOutcome LightsailClient::CreateBucket(const CreateBucketRequest& request) const {
  return CreateBucketOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateBucketAccessKeyOutcome LightsailClient::CreateBucketAccessKey(const CreateBucketAccessKeyRequest& request) const {
  return CreateBucketAccessKeyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCertificateOutcome LightsailClient::CreateCertificate(const CreateCertificateRequest& request) const {
  return CreateCertificateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCloudFormationStackOutcome LightsailClient::CreateCloudFormationStack(const CreateCloudFormationStackRequest& request) const {
  return CreateCloudFormationStackOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateContactMethodOutcome LightsailClient::CreateContactMethod(const CreateContactMethodRequest& request) const {
  return CreateContactMethodOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateContainerServiceOutcome LightsailClient::CreateContainerService(const CreateContainerServiceRequest& request) const {
  return CreateContainerServiceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateContainerServiceDeploymentOutcome LightsailClient::CreateContainerServiceDeployment(
    const CreateContainerServiceDeploymentRequest& request) const {
  return CreateContainerServiceDeploymentOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateContainerServiceRegistryLoginOutcome LightsailClient::CreateContainerServiceRegistryLogin(
    const CreateContainerServiceRegistryLoginRequest& request) const {
  return CreateContainerServiceRegistryLoginOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDiskOutcome LightsailClient::CreateDisk(const CreateDiskRequest& request) const {
  return CreateDiskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDiskFromSnapshotOutcome LightsailClient::CreateDiskFromSnapshot(const CreateDiskFromSnapshotRequest& request) const {
  return CreateDiskFromSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDiskSnapshotOutcome LightsailClient::CreateDiskSnapshot(const CreateDiskSnapshotRequest& request) const {
  return CreateDiskSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDistributionOutcome LightsailClient::CreateDistribution(const CreateDistributionRequest& request) const {
  return CreateDistributionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDomainOutcome LightsailClient::CreateDomain(const CreateDomainRequest& request) const {
  return CreateDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDomainEntryOutcome LightsailClient::CreateDomainEntry(const CreateDomainEntryRequest& request) const {
  return CreateDomainEntryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateGUISessionAccessDetailsOutcome LightsailClient::CreateGUISessionAccessDetails(
    const CreateGUISessionAccessDetailsRequest& request) const {
  return CreateGUISessionAccessDetailsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateInstanceSnapshotOutcome LightsailClient::CreateInstanceSnapshot(const CreateInstanceSnapshotRequest& request) const {
  return CreateInstanceSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateInstancesOutcome LightsailClient::CreateInstances(const CreateInstancesRequest& request) const {
  return CreateInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateInstancesFromSnapshotOutcome LightsailClient::CreateInstancesFromSnapshot(const CreateInstancesFromSnapshotRequest& request) const {
  return CreateInstancesFromSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateKeyPairOutcome LightsailClient::CreateKeyPair(const CreateKeyPairRequest& request) const {
  return CreateKeyPairOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLoadBalancerOutcome LightsailClient::CreateLoadBalancer(const CreateLoadBalancerRequest& request) const {
  return CreateLoadBalancerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLoadBalancerTlsCertificateOutcome LightsailClient::CreateLoadBalancerTlsCertificate(
    const CreateLoadBalancerTlsCertificateRequest& request) const {
  return CreateLoadBalancerTlsCertificateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRelationalDatabaseOutcome LightsailClient::CreateRelationalDatabase(const CreateRelationalDatabaseRequest& request) const {
  return CreateRelationalDatabaseOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRelationalDatabaseFromSnapshotOutcome LightsailClient::CreateRelationalDatabaseFromSnapshot(
    const CreateRelationalDatabaseFromSnapshotRequest& request) const {
  return CreateRelationalDatabaseFromSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRelationalDatabaseSnapshotOutcome LightsailClient::CreateRelationalDatabaseSnapshot(
    const CreateRelationalDatabaseSnapshotRequest& request) const {
  return CreateRelationalDatabaseSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAlarmOutcome LightsailClient::DeleteAlarm(const DeleteAlarmRequest& request) const {
  return DeleteAlarmOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAutoSnapshotOutcome LightsailClient::DeleteAutoSnapshot(const DeleteAutoSnapshotRequest& request) const {
  return DeleteAutoSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteBucketOutcome LightsailClient::DeleteBucket(const DeleteBucketRequest& request) const {
  return DeleteBucketOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteBucketAccessKeyOutcome LightsailClient::DeleteBucketAccessKey(const DeleteBucketAccessKeyRequest& request) const {
  return DeleteBucketAccessKeyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteCertificateOutcome LightsailClient::DeleteCertificate(const DeleteCertificateRequest& request) const {
  return DeleteCertificateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteContactMethodOutcome LightsailClient::DeleteContactMethod(const DeleteContactMethodRequest& request) const {
  return DeleteContactMethodOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteContainerImageOutcome LightsailClient::DeleteContainerImage(const DeleteContainerImageRequest& request) const {
  return DeleteContainerImageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteContainerServiceOutcome LightsailClient::DeleteContainerService(const DeleteContainerServiceRequest& request) const {
  return DeleteContainerServiceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDiskOutcome LightsailClient::DeleteDisk(const DeleteDiskRequest& request) const {
  return DeleteDiskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDiskSnapshotOutcome LightsailClient::DeleteDiskSnapshot(const DeleteDiskSnapshotRequest& request) const {
  return DeleteDiskSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDistributionOutcome LightsailClient::DeleteDistribution(const DeleteDistributionRequest& request) const {
  return DeleteDistributionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDomainOutcome LightsailClient::DeleteDomain(const DeleteDomainRequest& request) const {
  return DeleteDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDomainEntryOutcome LightsailClient::DeleteDomainEntry(const DeleteDomainEntryRequest& request) const {
  return DeleteDomainEntryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteInstanceOutcome LightsailClient::DeleteInstance(const DeleteInstanceRequest& request) const {
  return DeleteInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteInstanceSnapshotOutcome LightsailClient::DeleteInstanceSnapshot(const DeleteInstanceSnapshotRequest& request) const {
  return DeleteInstanceSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteKeyPairOutcome LightsailClient::DeleteKeyPair(const DeleteKeyPairRequest& request) const {
  return DeleteKeyPairOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteKnownHostKeysOutcome LightsailClient::DeleteKnownHostKeys(const DeleteKnownHostKeysRequest& request) const {
  return DeleteKnownHostKeysOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLoadBalancerOutcome LightsailClient::DeleteLoadBalancer(const DeleteLoadBalancerRequest& request) const {
  return DeleteLoadBalancerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLoadBalancerTlsCertificateOutcome LightsailClient::DeleteLoadBalancerTlsCertificate(
    const DeleteLoadBalancerTlsCertificateRequest& request) const {
  return DeleteLoadBalancerTlsCertificateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRelationalDatabaseOutcome LightsailClient::DeleteRelationalDatabase(const DeleteRelationalDatabaseRequest& request) const {
  return DeleteRelationalDatabaseOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteRelationalDatabaseSnapshotOutcome LightsailClient::DeleteRelationalDatabaseSnapshot(
    const DeleteRelationalDatabaseSnapshotRequest& request) const {
  return DeleteRelationalDatabaseSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetachCertificateFromDistributionOutcome LightsailClient::DetachCertificateFromDistribution(
    const DetachCertificateFromDistributionRequest& request) const {
  return DetachCertificateFromDistributionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetachDiskOutcome LightsailClient::DetachDisk(const DetachDiskRequest& request) const {
  return DetachDiskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetachInstancesFromLoadBalancerOutcome LightsailClient::DetachInstancesFromLoadBalancer(
    const DetachInstancesFromLoadBalancerRequest& request) const {
  return DetachInstancesFromLoadBalancerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetachStaticIpOutcome LightsailClient::DetachStaticIp(const DetachStaticIpRequest& request) const {
  return DetachStaticIpOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableAddOnOutcome LightsailClient::DisableAddOn(const DisableAddOnRequest& request) const {
  return DisableAddOnOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DownloadDefaultKeyPairOutcome LightsailClient::DownloadDefaultKeyPair(const DownloadDefaultKeyPairRequest& request) const {
  return DownloadDefaultKeyPairOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableAddOnOutcome LightsailClient::EnableAddOn(const EnableAddOnRequest& request) const {
  return EnableAddOnOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ExportSnapshotOutcome LightsailClient::ExportSnapshot(const ExportSnapshotRequest& request) const {
  return ExportSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetActiveNamesOutcome LightsailClient::GetActiveNames(const GetActiveNamesRequest& request) const {
  return GetActiveNamesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAlarmsOutcome LightsailClient::GetAlarms(const GetAlarmsRequest& request) const {
  return GetAlarmsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAutoSnapshotsOutcome LightsailClient::GetAutoSnapshots(const GetAutoSnapshotsRequest& request) const {
  return GetAutoSnapshotsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetBlueprintsOutcome LightsailClient::GetBlueprints(const GetBlueprintsRequest& request) const {
  return GetBlueprintsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetBucketAccessKeysOutcome LightsailClient::GetBucketAccessKeys(const GetBucketAccessKeysRequest& request) const {
  return GetBucketAccessKeysOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetBucketBundlesOutcome LightsailClient::GetBucketBundles(const GetBucketBundlesRequest& request) const {
  return GetBucketBundlesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetBucketMetricDataOutcome LightsailClient::GetBucketMetricData(const GetBucketMetricDataRequest& request) const {
  return GetBucketMetricDataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetBucketsOutcome LightsailClient::GetBuckets(const GetBucketsRequest& request) const {
  return GetBucketsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetBundlesOutcome LightsailClient::GetBundles(const GetBundlesRequest& request) const {
  return GetBundlesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCertificatesOutcome LightsailClient::GetCertificates(const GetCertificatesRequest& request) const {
  return GetCertificatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCloudFormationStackRecordsOutcome LightsailClient::GetCloudFormationStackRecords(
    const GetCloudFormationStackRecordsRequest& request) const {
  return GetCloudFormationStackRecordsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetContactMethodsOutcome LightsailClient::GetContactMethods(const GetContactMethodsRequest& request) const {
  return GetContactMethodsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetContainerAPIMetadataOutcome LightsailClient::GetContainerAPIMetadata(const GetContainerAPIMetadataRequest& request) const {
  return GetContainerAPIMetadataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetContainerImagesOutcome LightsailClient::GetContainerImages(const GetContainerImagesRequest& request) const {
  return GetContainerImagesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetContainerLogOutcome LightsailClient::GetContainerLog(const GetContainerLogRequest& request) const {
  return GetContainerLogOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetContainerServiceDeploymentsOutcome LightsailClient::GetContainerServiceDeployments(
    const GetContainerServiceDeploymentsRequest& request) const {
  return GetContainerServiceDeploymentsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetContainerServiceMetricDataOutcome LightsailClient::GetContainerServiceMetricData(
    const GetContainerServiceMetricDataRequest& request) const {
  return GetContainerServiceMetricDataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetContainerServicePowersOutcome LightsailClient::GetContainerServicePowers(const GetContainerServicePowersRequest& request) const {
  return GetContainerServicePowersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetContainerServicesOutcome LightsailClient::GetContainerServices(const GetContainerServicesRequest& request) const {
  return GetContainerServicesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCostEstimateOutcome LightsailClient::GetCostEstimate(const GetCostEstimateRequest& request) const {
  return GetCostEstimateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDiskOutcome LightsailClient::GetDisk(const GetDiskRequest& request) const {
  return GetDiskOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDiskSnapshotOutcome LightsailClient::GetDiskSnapshot(const GetDiskSnapshotRequest& request) const {
  return GetDiskSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDiskSnapshotsOutcome LightsailClient::GetDiskSnapshots(const GetDiskSnapshotsRequest& request) const {
  return GetDiskSnapshotsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDisksOutcome LightsailClient::GetDisks(const GetDisksRequest& request) const {
  return GetDisksOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDistributionBundlesOutcome LightsailClient::GetDistributionBundles(const GetDistributionBundlesRequest& request) const {
  return GetDistributionBundlesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDistributionLatestCacheResetOutcome LightsailClient::GetDistributionLatestCacheReset(
    const GetDistributionLatestCacheResetRequest& request) const {
  return GetDistributionLatestCacheResetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDistributionMetricDataOutcome LightsailClient::GetDistributionMetricData(const GetDistributionMetricDataRequest& request) const {
  return GetDistributionMetricDataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDistributionsOutcome LightsailClient::GetDistributions(const GetDistributionsRequest& request) const {
  return GetDistributionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDomainOutcome LightsailClient::GetDomain(const GetDomainRequest& request) const {
  return GetDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDomainsOutcome LightsailClient::GetDomains(const GetDomainsRequest& request) const {
  return GetDomainsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetExportSnapshotRecordsOutcome LightsailClient::GetExportSnapshotRecords(const GetExportSnapshotRecordsRequest& request) const {
  return GetExportSnapshotRecordsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetInstanceOutcome LightsailClient::GetInstance(const GetInstanceRequest& request) const {
  return GetInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetInstanceAccessDetailsOutcome LightsailClient::GetInstanceAccessDetails(const GetInstanceAccessDetailsRequest& request) const {
  return GetInstanceAccessDetailsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetInstanceMetricDataOutcome LightsailClient::GetInstanceMetricData(const GetInstanceMetricDataRequest& request) const {
  return GetInstanceMetricDataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetInstancePortStatesOutcome LightsailClient::GetInstancePortStates(const GetInstancePortStatesRequest& request) const {
  return GetInstancePortStatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetInstanceSnapshotOutcome LightsailClient::GetInstanceSnapshot(const GetInstanceSnapshotRequest& request) const {
  return GetInstanceSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetInstanceSnapshotsOutcome LightsailClient::GetInstanceSnapshots(const GetInstanceSnapshotsRequest& request) const {
  return GetInstanceSnapshotsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetInstanceStateOutcome LightsailClient::GetInstanceState(const GetInstanceStateRequest& request) const {
  return GetInstanceStateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetInstancesOutcome LightsailClient::GetInstances(const GetInstancesRequest& request) const {
  return GetInstancesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetKeyPairOutcome LightsailClient::GetKeyPair(const GetKeyPairRequest& request) const {
  return GetKeyPairOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetKeyPairsOutcome LightsailClient::GetKeyPairs(const GetKeyPairsRequest& request) const {
  return GetKeyPairsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetLoadBalancerOutcome LightsailClient::GetLoadBalancer(const GetLoadBalancerRequest& request) const {
  return GetLoadBalancerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetLoadBalancerMetricDataOutcome LightsailClient::GetLoadBalancerMetricData(const GetLoadBalancerMetricDataRequest& request) const {
  return GetLoadBalancerMetricDataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetLoadBalancerTlsCertificatesOutcome LightsailClient::GetLoadBalancerTlsCertificates(
    const GetLoadBalancerTlsCertificatesRequest& request) const {
  return GetLoadBalancerTlsCertificatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetLoadBalancerTlsPoliciesOutcome LightsailClient::GetLoadBalancerTlsPolicies(const GetLoadBalancerTlsPoliciesRequest& request) const {
  return GetLoadBalancerTlsPoliciesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetLoadBalancersOutcome LightsailClient::GetLoadBalancers(const GetLoadBalancersRequest& request) const {
  return GetLoadBalancersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetOperationOutcome LightsailClient::GetOperation(const GetOperationRequest& request) const {
  return GetOperationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetOperationsOutcome LightsailClient::GetOperations(const GetOperationsRequest& request) const {
  return GetOperationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetOperationsForResourceOutcome LightsailClient::GetOperationsForResource(const GetOperationsForResourceRequest& request) const {
  return GetOperationsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRegionsOutcome LightsailClient::GetRegions(const GetRegionsRequest& request) const {
  return GetRegionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRelationalDatabaseOutcome LightsailClient::GetRelationalDatabase(const GetRelationalDatabaseRequest& request) const {
  return GetRelationalDatabaseOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRelationalDatabaseBlueprintsOutcome LightsailClient::GetRelationalDatabaseBlueprints(
    const GetRelationalDatabaseBlueprintsRequest& request) const {
  return GetRelationalDatabaseBlueprintsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRelationalDatabaseBundlesOutcome LightsailClient::GetRelationalDatabaseBundles(
    const GetRelationalDatabaseBundlesRequest& request) const {
  return GetRelationalDatabaseBundlesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRelationalDatabaseEventsOutcome LightsailClient::GetRelationalDatabaseEvents(const GetRelationalDatabaseEventsRequest& request) const {
  return GetRelationalDatabaseEventsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRelationalDatabaseLogEventsOutcome LightsailClient::GetRelationalDatabaseLogEvents(
    const GetRelationalDatabaseLogEventsRequest& request) const {
  return GetRelationalDatabaseLogEventsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRelationalDatabaseLogStreamsOutcome LightsailClient::GetRelationalDatabaseLogStreams(
    const GetRelationalDatabaseLogStreamsRequest& request) const {
  return GetRelationalDatabaseLogStreamsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRelationalDatabaseMasterUserPasswordOutcome LightsailClient::GetRelationalDatabaseMasterUserPassword(
    const GetRelationalDatabaseMasterUserPasswordRequest& request) const {
  return GetRelationalDatabaseMasterUserPasswordOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRelationalDatabaseMetricDataOutcome LightsailClient::GetRelationalDatabaseMetricData(
    const GetRelationalDatabaseMetricDataRequest& request) const {
  return GetRelationalDatabaseMetricDataOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRelationalDatabaseParametersOutcome LightsailClient::GetRelationalDatabaseParameters(
    const GetRelationalDatabaseParametersRequest& request) const {
  return GetRelationalDatabaseParametersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRelationalDatabaseSnapshotOutcome LightsailClient::GetRelationalDatabaseSnapshot(
    const GetRelationalDatabaseSnapshotRequest& request) const {
  return GetRelationalDatabaseSnapshotOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRelationalDatabaseSnapshotsOutcome LightsailClient::GetRelationalDatabaseSnapshots(
    const GetRelationalDatabaseSnapshotsRequest& request) const {
  return GetRelationalDatabaseSnapshotsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRelationalDatabasesOutcome LightsailClient::GetRelationalDatabases(const GetRelationalDatabasesRequest& request) const {
  return GetRelationalDatabasesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSetupHistoryOutcome LightsailClient::GetSetupHistory(const GetSetupHistoryRequest& request) const {
  return GetSetupHistoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetStaticIpOutcome LightsailClient::GetStaticIp(const GetStaticIpRequest& request) const {
  return GetStaticIpOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetStaticIpsOutcome LightsailClient::GetStaticIps(const GetStaticIpsRequest& request) const {
  return GetStaticIpsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ImportKeyPairOutcome LightsailClient::ImportKeyPair(const ImportKeyPairRequest& request) const {
  return ImportKeyPairOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

IsVpcPeeredOutcome LightsailClient::IsVpcPeered(const IsVpcPeeredRequest& request) const {
  return IsVpcPeeredOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

OpenInstancePublicPortsOutcome LightsailClient::OpenInstancePublicPorts(const OpenInstancePublicPortsRequest& request) const {
  return OpenInstancePublicPortsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PeerVpcOutcome LightsailClient::PeerVpc(const PeerVpcRequest& request) const {
  return PeerVpcOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutAlarmOutcome LightsailClient::PutAlarm(const PutAlarmRequest& request) const {
  return PutAlarmOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutInstancePublicPortsOutcome LightsailClient::PutInstancePublicPorts(const PutInstancePublicPortsRequest& request) const {
  return PutInstancePublicPortsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RebootInstanceOutcome LightsailClient::RebootInstance(const RebootInstanceRequest& request) const {
  return RebootInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RebootRelationalDatabaseOutcome LightsailClient::RebootRelationalDatabase(const RebootRelationalDatabaseRequest& request) const {
  return RebootRelationalDatabaseOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterContainerImageOutcome LightsailClient::RegisterContainerImage(const RegisterContainerImageRequest& request) const {
  return RegisterContainerImageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ReleaseStaticIpOutcome LightsailClient::ReleaseStaticIp(const ReleaseStaticIpRequest& request) const {
  return ReleaseStaticIpOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ResetDistributionCacheOutcome LightsailClient::ResetDistributionCache(const ResetDistributionCacheRequest& request) const {
  return ResetDistributionCacheOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SendContactMethodVerificationOutcome LightsailClient::SendContactMethodVerification(
    const SendContactMethodVerificationRequest& request) const {
  return SendContactMethodVerificationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetIpAddressTypeOutcome LightsailClient::SetIpAddressType(const SetIpAddressTypeRequest& request) const {
  return SetIpAddressTypeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetResourceAccessForBucketOutcome LightsailClient::SetResourceAccessForBucket(const SetResourceAccessForBucketRequest& request) const {
  return SetResourceAccessForBucketOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SetupInstanceHttpsOutcome LightsailClient::SetupInstanceHttps(const SetupInstanceHttpsRequest& request) const {
  return SetupInstanceHttpsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartGUISessionOutcome LightsailClient::StartGUISession(const StartGUISessionRequest& request) const {
  return StartGUISessionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartInstanceOutcome LightsailClient::StartInstance(const StartInstanceRequest& request) const {
  return StartInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartRelationalDatabaseOutcome LightsailClient::StartRelationalDatabase(const StartRelationalDatabaseRequest& request) const {
  return StartRelationalDatabaseOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopGUISessionOutcome LightsailClient::StopGUISession(const StopGUISessionRequest& request) const {
  return StopGUISessionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopInstanceOutcome LightsailClient::StopInstance(const StopInstanceRequest& request) const {
  return StopInstanceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopRelationalDatabaseOutcome LightsailClient::StopRelationalDatabase(const StopRelationalDatabaseRequest& request) const {
  return StopRelationalDatabaseOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome LightsailClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TestAlarmOutcome LightsailClient::TestAlarm(const TestAlarmRequest& request) const {
  return TestAlarmOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UnpeerVpcOutcome LightsailClient::UnpeerVpc(const UnpeerVpcRequest& request) const {
  return UnpeerVpcOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome LightsailClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateBucketOutcome LightsailClient::UpdateBucket(const UpdateBucketRequest& request) const {
  return UpdateBucketOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateBucketBundleOutcome LightsailClient::UpdateBucketBundle(const UpdateBucketBundleRequest& request) const {
  return UpdateBucketBundleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateContainerServiceOutcome LightsailClient::UpdateContainerService(const UpdateContainerServiceRequest& request) const {
  return UpdateContainerServiceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDistributionOutcome LightsailClient::UpdateDistribution(const UpdateDistributionRequest& request) const {
  return UpdateDistributionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDistributionBundleOutcome LightsailClient::UpdateDistributionBundle(const UpdateDistributionBundleRequest& request) const {
  return UpdateDistributionBundleOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDomainEntryOutcome LightsailClient::UpdateDomainEntry(const UpdateDomainEntryRequest& request) const {
  return UpdateDomainEntryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateInstanceMetadataOptionsOutcome LightsailClient::UpdateInstanceMetadataOptions(
    const UpdateInstanceMetadataOptionsRequest& request) const {
  return UpdateInstanceMetadataOptionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateLoadBalancerAttributeOutcome LightsailClient::UpdateLoadBalancerAttribute(const UpdateLoadBalancerAttributeRequest& request) const {
  return UpdateLoadBalancerAttributeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateRelationalDatabaseOutcome LightsailClient::UpdateRelationalDatabase(const UpdateRelationalDatabaseRequest& request) const {
  return UpdateRelationalDatabaseOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateRelationalDatabaseParametersOutcome LightsailClient::UpdateRelationalDatabaseParameters(
    const UpdateRelationalDatabaseParametersRequest& request) const {
  return UpdateRelationalDatabaseParametersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
