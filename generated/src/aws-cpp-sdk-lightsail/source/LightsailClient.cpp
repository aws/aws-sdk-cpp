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
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AllocateStaticIpOutcome(result.GetResultWithOwnership())
                            : AllocateStaticIpOutcome(std::move(result.GetError()));
}

AttachCertificateToDistributionOutcome LightsailClient::AttachCertificateToDistribution(
    const AttachCertificateToDistributionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AttachCertificateToDistributionOutcome(result.GetResultWithOwnership())
                            : AttachCertificateToDistributionOutcome(std::move(result.GetError()));
}

AttachDiskOutcome LightsailClient::AttachDisk(const AttachDiskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AttachDiskOutcome(result.GetResultWithOwnership()) : AttachDiskOutcome(std::move(result.GetError()));
}

AttachInstancesToLoadBalancerOutcome LightsailClient::AttachInstancesToLoadBalancer(
    const AttachInstancesToLoadBalancerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AttachInstancesToLoadBalancerOutcome(result.GetResultWithOwnership())
                            : AttachInstancesToLoadBalancerOutcome(std::move(result.GetError()));
}

AttachLoadBalancerTlsCertificateOutcome LightsailClient::AttachLoadBalancerTlsCertificate(
    const AttachLoadBalancerTlsCertificateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AttachLoadBalancerTlsCertificateOutcome(result.GetResultWithOwnership())
                            : AttachLoadBalancerTlsCertificateOutcome(std::move(result.GetError()));
}

AttachStaticIpOutcome LightsailClient::AttachStaticIp(const AttachStaticIpRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AttachStaticIpOutcome(result.GetResultWithOwnership()) : AttachStaticIpOutcome(std::move(result.GetError()));
}

CloseInstancePublicPortsOutcome LightsailClient::CloseInstancePublicPorts(const CloseInstancePublicPortsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CloseInstancePublicPortsOutcome(result.GetResultWithOwnership())
                            : CloseInstancePublicPortsOutcome(std::move(result.GetError()));
}

CopySnapshotOutcome LightsailClient::CopySnapshot(const CopySnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CopySnapshotOutcome(result.GetResultWithOwnership()) : CopySnapshotOutcome(std::move(result.GetError()));
}

CreateBucketOutcome LightsailClient::CreateBucket(const CreateBucketRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateBucketOutcome(result.GetResultWithOwnership()) : CreateBucketOutcome(std::move(result.GetError()));
}

CreateBucketAccessKeyOutcome LightsailClient::CreateBucketAccessKey(const CreateBucketAccessKeyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateBucketAccessKeyOutcome(result.GetResultWithOwnership())
                            : CreateBucketAccessKeyOutcome(std::move(result.GetError()));
}

CreateCertificateOutcome LightsailClient::CreateCertificate(const CreateCertificateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCertificateOutcome(result.GetResultWithOwnership())
                            : CreateCertificateOutcome(std::move(result.GetError()));
}

CreateCloudFormationStackOutcome LightsailClient::CreateCloudFormationStack(const CreateCloudFormationStackRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCloudFormationStackOutcome(result.GetResultWithOwnership())
                            : CreateCloudFormationStackOutcome(std::move(result.GetError()));
}

CreateContactMethodOutcome LightsailClient::CreateContactMethod(const CreateContactMethodRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateContactMethodOutcome(result.GetResultWithOwnership())
                            : CreateContactMethodOutcome(std::move(result.GetError()));
}

CreateContainerServiceOutcome LightsailClient::CreateContainerService(const CreateContainerServiceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateContainerServiceOutcome(result.GetResultWithOwnership())
                            : CreateContainerServiceOutcome(std::move(result.GetError()));
}

CreateContainerServiceDeploymentOutcome LightsailClient::CreateContainerServiceDeployment(
    const CreateContainerServiceDeploymentRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateContainerServiceDeploymentOutcome(result.GetResultWithOwnership())
                            : CreateContainerServiceDeploymentOutcome(std::move(result.GetError()));
}

CreateContainerServiceRegistryLoginOutcome LightsailClient::CreateContainerServiceRegistryLogin(
    const CreateContainerServiceRegistryLoginRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateContainerServiceRegistryLoginOutcome(result.GetResultWithOwnership())
                            : CreateContainerServiceRegistryLoginOutcome(std::move(result.GetError()));
}

CreateDiskOutcome LightsailClient::CreateDisk(const CreateDiskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDiskOutcome(result.GetResultWithOwnership()) : CreateDiskOutcome(std::move(result.GetError()));
}

CreateDiskFromSnapshotOutcome LightsailClient::CreateDiskFromSnapshot(const CreateDiskFromSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDiskFromSnapshotOutcome(result.GetResultWithOwnership())
                            : CreateDiskFromSnapshotOutcome(std::move(result.GetError()));
}

CreateDiskSnapshotOutcome LightsailClient::CreateDiskSnapshot(const CreateDiskSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDiskSnapshotOutcome(result.GetResultWithOwnership())
                            : CreateDiskSnapshotOutcome(std::move(result.GetError()));
}

CreateDistributionOutcome LightsailClient::CreateDistribution(const CreateDistributionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDistributionOutcome(result.GetResultWithOwnership())
                            : CreateDistributionOutcome(std::move(result.GetError()));
}

CreateDomainOutcome LightsailClient::CreateDomain(const CreateDomainRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDomainOutcome(result.GetResultWithOwnership()) : CreateDomainOutcome(std::move(result.GetError()));
}

CreateDomainEntryOutcome LightsailClient::CreateDomainEntry(const CreateDomainEntryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDomainEntryOutcome(result.GetResultWithOwnership())
                            : CreateDomainEntryOutcome(std::move(result.GetError()));
}

CreateGUISessionAccessDetailsOutcome LightsailClient::CreateGUISessionAccessDetails(
    const CreateGUISessionAccessDetailsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateGUISessionAccessDetailsOutcome(result.GetResultWithOwnership())
                            : CreateGUISessionAccessDetailsOutcome(std::move(result.GetError()));
}

CreateInstanceSnapshotOutcome LightsailClient::CreateInstanceSnapshot(const CreateInstanceSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateInstanceSnapshotOutcome(result.GetResultWithOwnership())
                            : CreateInstanceSnapshotOutcome(std::move(result.GetError()));
}

CreateInstancesOutcome LightsailClient::CreateInstances(const CreateInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateInstancesOutcome(result.GetResultWithOwnership())
                            : CreateInstancesOutcome(std::move(result.GetError()));
}

CreateInstancesFromSnapshotOutcome LightsailClient::CreateInstancesFromSnapshot(const CreateInstancesFromSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateInstancesFromSnapshotOutcome(result.GetResultWithOwnership())
                            : CreateInstancesFromSnapshotOutcome(std::move(result.GetError()));
}

CreateKeyPairOutcome LightsailClient::CreateKeyPair(const CreateKeyPairRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateKeyPairOutcome(result.GetResultWithOwnership()) : CreateKeyPairOutcome(std::move(result.GetError()));
}

CreateLoadBalancerOutcome LightsailClient::CreateLoadBalancer(const CreateLoadBalancerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateLoadBalancerOutcome(result.GetResultWithOwnership())
                            : CreateLoadBalancerOutcome(std::move(result.GetError()));
}

CreateLoadBalancerTlsCertificateOutcome LightsailClient::CreateLoadBalancerTlsCertificate(
    const CreateLoadBalancerTlsCertificateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateLoadBalancerTlsCertificateOutcome(result.GetResultWithOwnership())
                            : CreateLoadBalancerTlsCertificateOutcome(std::move(result.GetError()));
}

CreateRelationalDatabaseOutcome LightsailClient::CreateRelationalDatabase(const CreateRelationalDatabaseRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRelationalDatabaseOutcome(result.GetResultWithOwnership())
                            : CreateRelationalDatabaseOutcome(std::move(result.GetError()));
}

CreateRelationalDatabaseFromSnapshotOutcome LightsailClient::CreateRelationalDatabaseFromSnapshot(
    const CreateRelationalDatabaseFromSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRelationalDatabaseFromSnapshotOutcome(result.GetResultWithOwnership())
                            : CreateRelationalDatabaseFromSnapshotOutcome(std::move(result.GetError()));
}

CreateRelationalDatabaseSnapshotOutcome LightsailClient::CreateRelationalDatabaseSnapshot(
    const CreateRelationalDatabaseSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRelationalDatabaseSnapshotOutcome(result.GetResultWithOwnership())
                            : CreateRelationalDatabaseSnapshotOutcome(std::move(result.GetError()));
}

DeleteAlarmOutcome LightsailClient::DeleteAlarm(const DeleteAlarmRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAlarmOutcome(result.GetResultWithOwnership()) : DeleteAlarmOutcome(std::move(result.GetError()));
}

DeleteAutoSnapshotOutcome LightsailClient::DeleteAutoSnapshot(const DeleteAutoSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAutoSnapshotOutcome(result.GetResultWithOwnership())
                            : DeleteAutoSnapshotOutcome(std::move(result.GetError()));
}

DeleteBucketOutcome LightsailClient::DeleteBucket(const DeleteBucketRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteBucketOutcome(result.GetResultWithOwnership()) : DeleteBucketOutcome(std::move(result.GetError()));
}

DeleteBucketAccessKeyOutcome LightsailClient::DeleteBucketAccessKey(const DeleteBucketAccessKeyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteBucketAccessKeyOutcome(result.GetResultWithOwnership())
                            : DeleteBucketAccessKeyOutcome(std::move(result.GetError()));
}

DeleteCertificateOutcome LightsailClient::DeleteCertificate(const DeleteCertificateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteCertificateOutcome(result.GetResultWithOwnership())
                            : DeleteCertificateOutcome(std::move(result.GetError()));
}

DeleteContactMethodOutcome LightsailClient::DeleteContactMethod(const DeleteContactMethodRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteContactMethodOutcome(result.GetResultWithOwnership())
                            : DeleteContactMethodOutcome(std::move(result.GetError()));
}

DeleteContainerImageOutcome LightsailClient::DeleteContainerImage(const DeleteContainerImageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteContainerImageOutcome(result.GetResultWithOwnership())
                            : DeleteContainerImageOutcome(std::move(result.GetError()));
}

DeleteContainerServiceOutcome LightsailClient::DeleteContainerService(const DeleteContainerServiceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteContainerServiceOutcome(result.GetResultWithOwnership())
                            : DeleteContainerServiceOutcome(std::move(result.GetError()));
}

DeleteDiskOutcome LightsailClient::DeleteDisk(const DeleteDiskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDiskOutcome(result.GetResultWithOwnership()) : DeleteDiskOutcome(std::move(result.GetError()));
}

DeleteDiskSnapshotOutcome LightsailClient::DeleteDiskSnapshot(const DeleteDiskSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDiskSnapshotOutcome(result.GetResultWithOwnership())
                            : DeleteDiskSnapshotOutcome(std::move(result.GetError()));
}

DeleteDistributionOutcome LightsailClient::DeleteDistribution(const DeleteDistributionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDistributionOutcome(result.GetResultWithOwnership())
                            : DeleteDistributionOutcome(std::move(result.GetError()));
}

DeleteDomainOutcome LightsailClient::DeleteDomain(const DeleteDomainRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDomainOutcome(result.GetResultWithOwnership()) : DeleteDomainOutcome(std::move(result.GetError()));
}

DeleteDomainEntryOutcome LightsailClient::DeleteDomainEntry(const DeleteDomainEntryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteDomainEntryOutcome(result.GetResultWithOwnership())
                            : DeleteDomainEntryOutcome(std::move(result.GetError()));
}

DeleteInstanceOutcome LightsailClient::DeleteInstance(const DeleteInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteInstanceOutcome(result.GetResultWithOwnership()) : DeleteInstanceOutcome(std::move(result.GetError()));
}

DeleteInstanceSnapshotOutcome LightsailClient::DeleteInstanceSnapshot(const DeleteInstanceSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteInstanceSnapshotOutcome(result.GetResultWithOwnership())
                            : DeleteInstanceSnapshotOutcome(std::move(result.GetError()));
}

DeleteKeyPairOutcome LightsailClient::DeleteKeyPair(const DeleteKeyPairRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteKeyPairOutcome(result.GetResultWithOwnership()) : DeleteKeyPairOutcome(std::move(result.GetError()));
}

DeleteKnownHostKeysOutcome LightsailClient::DeleteKnownHostKeys(const DeleteKnownHostKeysRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteKnownHostKeysOutcome(result.GetResultWithOwnership())
                            : DeleteKnownHostKeysOutcome(std::move(result.GetError()));
}

DeleteLoadBalancerOutcome LightsailClient::DeleteLoadBalancer(const DeleteLoadBalancerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteLoadBalancerOutcome(result.GetResultWithOwnership())
                            : DeleteLoadBalancerOutcome(std::move(result.GetError()));
}

DeleteLoadBalancerTlsCertificateOutcome LightsailClient::DeleteLoadBalancerTlsCertificate(
    const DeleteLoadBalancerTlsCertificateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteLoadBalancerTlsCertificateOutcome(result.GetResultWithOwnership())
                            : DeleteLoadBalancerTlsCertificateOutcome(std::move(result.GetError()));
}

DeleteRelationalDatabaseOutcome LightsailClient::DeleteRelationalDatabase(const DeleteRelationalDatabaseRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteRelationalDatabaseOutcome(result.GetResultWithOwnership())
                            : DeleteRelationalDatabaseOutcome(std::move(result.GetError()));
}

DeleteRelationalDatabaseSnapshotOutcome LightsailClient::DeleteRelationalDatabaseSnapshot(
    const DeleteRelationalDatabaseSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteRelationalDatabaseSnapshotOutcome(result.GetResultWithOwnership())
                            : DeleteRelationalDatabaseSnapshotOutcome(std::move(result.GetError()));
}

DetachCertificateFromDistributionOutcome LightsailClient::DetachCertificateFromDistribution(
    const DetachCertificateFromDistributionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DetachCertificateFromDistributionOutcome(result.GetResultWithOwnership())
                            : DetachCertificateFromDistributionOutcome(std::move(result.GetError()));
}

DetachDiskOutcome LightsailClient::DetachDisk(const DetachDiskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DetachDiskOutcome(result.GetResultWithOwnership()) : DetachDiskOutcome(std::move(result.GetError()));
}

DetachInstancesFromLoadBalancerOutcome LightsailClient::DetachInstancesFromLoadBalancer(
    const DetachInstancesFromLoadBalancerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DetachInstancesFromLoadBalancerOutcome(result.GetResultWithOwnership())
                            : DetachInstancesFromLoadBalancerOutcome(std::move(result.GetError()));
}

DetachStaticIpOutcome LightsailClient::DetachStaticIp(const DetachStaticIpRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DetachStaticIpOutcome(result.GetResultWithOwnership()) : DetachStaticIpOutcome(std::move(result.GetError()));
}

DisableAddOnOutcome LightsailClient::DisableAddOn(const DisableAddOnRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableAddOnOutcome(result.GetResultWithOwnership()) : DisableAddOnOutcome(std::move(result.GetError()));
}

DownloadDefaultKeyPairOutcome LightsailClient::DownloadDefaultKeyPair(const DownloadDefaultKeyPairRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DownloadDefaultKeyPairOutcome(result.GetResultWithOwnership())
                            : DownloadDefaultKeyPairOutcome(std::move(result.GetError()));
}

EnableAddOnOutcome LightsailClient::EnableAddOn(const EnableAddOnRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableAddOnOutcome(result.GetResultWithOwnership()) : EnableAddOnOutcome(std::move(result.GetError()));
}

ExportSnapshotOutcome LightsailClient::ExportSnapshot(const ExportSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ExportSnapshotOutcome(result.GetResultWithOwnership()) : ExportSnapshotOutcome(std::move(result.GetError()));
}

GetActiveNamesOutcome LightsailClient::GetActiveNames(const GetActiveNamesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetActiveNamesOutcome(result.GetResultWithOwnership()) : GetActiveNamesOutcome(std::move(result.GetError()));
}

GetAlarmsOutcome LightsailClient::GetAlarms(const GetAlarmsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAlarmsOutcome(result.GetResultWithOwnership()) : GetAlarmsOutcome(std::move(result.GetError()));
}

GetAutoSnapshotsOutcome LightsailClient::GetAutoSnapshots(const GetAutoSnapshotsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAutoSnapshotsOutcome(result.GetResultWithOwnership())
                            : GetAutoSnapshotsOutcome(std::move(result.GetError()));
}

GetBlueprintsOutcome LightsailClient::GetBlueprints(const GetBlueprintsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetBlueprintsOutcome(result.GetResultWithOwnership()) : GetBlueprintsOutcome(std::move(result.GetError()));
}

GetBucketAccessKeysOutcome LightsailClient::GetBucketAccessKeys(const GetBucketAccessKeysRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetBucketAccessKeysOutcome(result.GetResultWithOwnership())
                            : GetBucketAccessKeysOutcome(std::move(result.GetError()));
}

GetBucketBundlesOutcome LightsailClient::GetBucketBundles(const GetBucketBundlesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetBucketBundlesOutcome(result.GetResultWithOwnership())
                            : GetBucketBundlesOutcome(std::move(result.GetError()));
}

GetBucketMetricDataOutcome LightsailClient::GetBucketMetricData(const GetBucketMetricDataRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetBucketMetricDataOutcome(result.GetResultWithOwnership())
                            : GetBucketMetricDataOutcome(std::move(result.GetError()));
}

GetBucketsOutcome LightsailClient::GetBuckets(const GetBucketsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetBucketsOutcome(result.GetResultWithOwnership()) : GetBucketsOutcome(std::move(result.GetError()));
}

GetBundlesOutcome LightsailClient::GetBundles(const GetBundlesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetBundlesOutcome(result.GetResultWithOwnership()) : GetBundlesOutcome(std::move(result.GetError()));
}

GetCertificatesOutcome LightsailClient::GetCertificates(const GetCertificatesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCertificatesOutcome(result.GetResultWithOwnership())
                            : GetCertificatesOutcome(std::move(result.GetError()));
}

GetCloudFormationStackRecordsOutcome LightsailClient::GetCloudFormationStackRecords(
    const GetCloudFormationStackRecordsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCloudFormationStackRecordsOutcome(result.GetResultWithOwnership())
                            : GetCloudFormationStackRecordsOutcome(std::move(result.GetError()));
}

GetContactMethodsOutcome LightsailClient::GetContactMethods(const GetContactMethodsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetContactMethodsOutcome(result.GetResultWithOwnership())
                            : GetContactMethodsOutcome(std::move(result.GetError()));
}

GetContainerAPIMetadataOutcome LightsailClient::GetContainerAPIMetadata(const GetContainerAPIMetadataRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetContainerAPIMetadataOutcome(result.GetResultWithOwnership())
                            : GetContainerAPIMetadataOutcome(std::move(result.GetError()));
}

GetContainerImagesOutcome LightsailClient::GetContainerImages(const GetContainerImagesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetContainerImagesOutcome(result.GetResultWithOwnership())
                            : GetContainerImagesOutcome(std::move(result.GetError()));
}

GetContainerLogOutcome LightsailClient::GetContainerLog(const GetContainerLogRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetContainerLogOutcome(result.GetResultWithOwnership())
                            : GetContainerLogOutcome(std::move(result.GetError()));
}

GetContainerServiceDeploymentsOutcome LightsailClient::GetContainerServiceDeployments(
    const GetContainerServiceDeploymentsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetContainerServiceDeploymentsOutcome(result.GetResultWithOwnership())
                            : GetContainerServiceDeploymentsOutcome(std::move(result.GetError()));
}

GetContainerServiceMetricDataOutcome LightsailClient::GetContainerServiceMetricData(
    const GetContainerServiceMetricDataRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetContainerServiceMetricDataOutcome(result.GetResultWithOwnership())
                            : GetContainerServiceMetricDataOutcome(std::move(result.GetError()));
}

GetContainerServicePowersOutcome LightsailClient::GetContainerServicePowers(const GetContainerServicePowersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetContainerServicePowersOutcome(result.GetResultWithOwnership())
                            : GetContainerServicePowersOutcome(std::move(result.GetError()));
}

GetContainerServicesOutcome LightsailClient::GetContainerServices(const GetContainerServicesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetContainerServicesOutcome(result.GetResultWithOwnership())
                            : GetContainerServicesOutcome(std::move(result.GetError()));
}

GetCostEstimateOutcome LightsailClient::GetCostEstimate(const GetCostEstimateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCostEstimateOutcome(result.GetResultWithOwnership())
                            : GetCostEstimateOutcome(std::move(result.GetError()));
}

GetDiskOutcome LightsailClient::GetDisk(const GetDiskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDiskOutcome(result.GetResultWithOwnership()) : GetDiskOutcome(std::move(result.GetError()));
}

GetDiskSnapshotOutcome LightsailClient::GetDiskSnapshot(const GetDiskSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDiskSnapshotOutcome(result.GetResultWithOwnership())
                            : GetDiskSnapshotOutcome(std::move(result.GetError()));
}

GetDiskSnapshotsOutcome LightsailClient::GetDiskSnapshots(const GetDiskSnapshotsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDiskSnapshotsOutcome(result.GetResultWithOwnership())
                            : GetDiskSnapshotsOutcome(std::move(result.GetError()));
}

GetDisksOutcome LightsailClient::GetDisks(const GetDisksRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDisksOutcome(result.GetResultWithOwnership()) : GetDisksOutcome(std::move(result.GetError()));
}

GetDistributionBundlesOutcome LightsailClient::GetDistributionBundles(const GetDistributionBundlesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDistributionBundlesOutcome(result.GetResultWithOwnership())
                            : GetDistributionBundlesOutcome(std::move(result.GetError()));
}

GetDistributionLatestCacheResetOutcome LightsailClient::GetDistributionLatestCacheReset(
    const GetDistributionLatestCacheResetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDistributionLatestCacheResetOutcome(result.GetResultWithOwnership())
                            : GetDistributionLatestCacheResetOutcome(std::move(result.GetError()));
}

GetDistributionMetricDataOutcome LightsailClient::GetDistributionMetricData(const GetDistributionMetricDataRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDistributionMetricDataOutcome(result.GetResultWithOwnership())
                            : GetDistributionMetricDataOutcome(std::move(result.GetError()));
}

GetDistributionsOutcome LightsailClient::GetDistributions(const GetDistributionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDistributionsOutcome(result.GetResultWithOwnership())
                            : GetDistributionsOutcome(std::move(result.GetError()));
}

GetDomainOutcome LightsailClient::GetDomain(const GetDomainRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDomainOutcome(result.GetResultWithOwnership()) : GetDomainOutcome(std::move(result.GetError()));
}

GetDomainsOutcome LightsailClient::GetDomains(const GetDomainsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDomainsOutcome(result.GetResultWithOwnership()) : GetDomainsOutcome(std::move(result.GetError()));
}

GetExportSnapshotRecordsOutcome LightsailClient::GetExportSnapshotRecords(const GetExportSnapshotRecordsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetExportSnapshotRecordsOutcome(result.GetResultWithOwnership())
                            : GetExportSnapshotRecordsOutcome(std::move(result.GetError()));
}

GetInstanceOutcome LightsailClient::GetInstance(const GetInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetInstanceOutcome(result.GetResultWithOwnership()) : GetInstanceOutcome(std::move(result.GetError()));
}

GetInstanceAccessDetailsOutcome LightsailClient::GetInstanceAccessDetails(const GetInstanceAccessDetailsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetInstanceAccessDetailsOutcome(result.GetResultWithOwnership())
                            : GetInstanceAccessDetailsOutcome(std::move(result.GetError()));
}

GetInstanceMetricDataOutcome LightsailClient::GetInstanceMetricData(const GetInstanceMetricDataRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetInstanceMetricDataOutcome(result.GetResultWithOwnership())
                            : GetInstanceMetricDataOutcome(std::move(result.GetError()));
}

GetInstancePortStatesOutcome LightsailClient::GetInstancePortStates(const GetInstancePortStatesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetInstancePortStatesOutcome(result.GetResultWithOwnership())
                            : GetInstancePortStatesOutcome(std::move(result.GetError()));
}

GetInstanceSnapshotOutcome LightsailClient::GetInstanceSnapshot(const GetInstanceSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetInstanceSnapshotOutcome(result.GetResultWithOwnership())
                            : GetInstanceSnapshotOutcome(std::move(result.GetError()));
}

GetInstanceSnapshotsOutcome LightsailClient::GetInstanceSnapshots(const GetInstanceSnapshotsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetInstanceSnapshotsOutcome(result.GetResultWithOwnership())
                            : GetInstanceSnapshotsOutcome(std::move(result.GetError()));
}

GetInstanceStateOutcome LightsailClient::GetInstanceState(const GetInstanceStateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetInstanceStateOutcome(result.GetResultWithOwnership())
                            : GetInstanceStateOutcome(std::move(result.GetError()));
}

GetInstancesOutcome LightsailClient::GetInstances(const GetInstancesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetInstancesOutcome(result.GetResultWithOwnership()) : GetInstancesOutcome(std::move(result.GetError()));
}

GetKeyPairOutcome LightsailClient::GetKeyPair(const GetKeyPairRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetKeyPairOutcome(result.GetResultWithOwnership()) : GetKeyPairOutcome(std::move(result.GetError()));
}

GetKeyPairsOutcome LightsailClient::GetKeyPairs(const GetKeyPairsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetKeyPairsOutcome(result.GetResultWithOwnership()) : GetKeyPairsOutcome(std::move(result.GetError()));
}

GetLoadBalancerOutcome LightsailClient::GetLoadBalancer(const GetLoadBalancerRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetLoadBalancerOutcome(result.GetResultWithOwnership())
                            : GetLoadBalancerOutcome(std::move(result.GetError()));
}

GetLoadBalancerMetricDataOutcome LightsailClient::GetLoadBalancerMetricData(const GetLoadBalancerMetricDataRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetLoadBalancerMetricDataOutcome(result.GetResultWithOwnership())
                            : GetLoadBalancerMetricDataOutcome(std::move(result.GetError()));
}

GetLoadBalancerTlsCertificatesOutcome LightsailClient::GetLoadBalancerTlsCertificates(
    const GetLoadBalancerTlsCertificatesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetLoadBalancerTlsCertificatesOutcome(result.GetResultWithOwnership())
                            : GetLoadBalancerTlsCertificatesOutcome(std::move(result.GetError()));
}

GetLoadBalancerTlsPoliciesOutcome LightsailClient::GetLoadBalancerTlsPolicies(const GetLoadBalancerTlsPoliciesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetLoadBalancerTlsPoliciesOutcome(result.GetResultWithOwnership())
                            : GetLoadBalancerTlsPoliciesOutcome(std::move(result.GetError()));
}

GetLoadBalancersOutcome LightsailClient::GetLoadBalancers(const GetLoadBalancersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetLoadBalancersOutcome(result.GetResultWithOwnership())
                            : GetLoadBalancersOutcome(std::move(result.GetError()));
}

GetOperationOutcome LightsailClient::GetOperation(const GetOperationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetOperationOutcome(result.GetResultWithOwnership()) : GetOperationOutcome(std::move(result.GetError()));
}

GetOperationsOutcome LightsailClient::GetOperations(const GetOperationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetOperationsOutcome(result.GetResultWithOwnership()) : GetOperationsOutcome(std::move(result.GetError()));
}

GetOperationsForResourceOutcome LightsailClient::GetOperationsForResource(const GetOperationsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetOperationsForResourceOutcome(result.GetResultWithOwnership())
                            : GetOperationsForResourceOutcome(std::move(result.GetError()));
}

GetRegionsOutcome LightsailClient::GetRegions(const GetRegionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetRegionsOutcome(result.GetResultWithOwnership()) : GetRegionsOutcome(std::move(result.GetError()));
}

GetRelationalDatabaseOutcome LightsailClient::GetRelationalDatabase(const GetRelationalDatabaseRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetRelationalDatabaseOutcome(result.GetResultWithOwnership())
                            : GetRelationalDatabaseOutcome(std::move(result.GetError()));
}

GetRelationalDatabaseBlueprintsOutcome LightsailClient::GetRelationalDatabaseBlueprints(
    const GetRelationalDatabaseBlueprintsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetRelationalDatabaseBlueprintsOutcome(result.GetResultWithOwnership())
                            : GetRelationalDatabaseBlueprintsOutcome(std::move(result.GetError()));
}

GetRelationalDatabaseBundlesOutcome LightsailClient::GetRelationalDatabaseBundles(
    const GetRelationalDatabaseBundlesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetRelationalDatabaseBundlesOutcome(result.GetResultWithOwnership())
                            : GetRelationalDatabaseBundlesOutcome(std::move(result.GetError()));
}

GetRelationalDatabaseEventsOutcome LightsailClient::GetRelationalDatabaseEvents(const GetRelationalDatabaseEventsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetRelationalDatabaseEventsOutcome(result.GetResultWithOwnership())
                            : GetRelationalDatabaseEventsOutcome(std::move(result.GetError()));
}

GetRelationalDatabaseLogEventsOutcome LightsailClient::GetRelationalDatabaseLogEvents(
    const GetRelationalDatabaseLogEventsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetRelationalDatabaseLogEventsOutcome(result.GetResultWithOwnership())
                            : GetRelationalDatabaseLogEventsOutcome(std::move(result.GetError()));
}

GetRelationalDatabaseLogStreamsOutcome LightsailClient::GetRelationalDatabaseLogStreams(
    const GetRelationalDatabaseLogStreamsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetRelationalDatabaseLogStreamsOutcome(result.GetResultWithOwnership())
                            : GetRelationalDatabaseLogStreamsOutcome(std::move(result.GetError()));
}

GetRelationalDatabaseMasterUserPasswordOutcome LightsailClient::GetRelationalDatabaseMasterUserPassword(
    const GetRelationalDatabaseMasterUserPasswordRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetRelationalDatabaseMasterUserPasswordOutcome(result.GetResultWithOwnership())
                            : GetRelationalDatabaseMasterUserPasswordOutcome(std::move(result.GetError()));
}

GetRelationalDatabaseMetricDataOutcome LightsailClient::GetRelationalDatabaseMetricData(
    const GetRelationalDatabaseMetricDataRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetRelationalDatabaseMetricDataOutcome(result.GetResultWithOwnership())
                            : GetRelationalDatabaseMetricDataOutcome(std::move(result.GetError()));
}

GetRelationalDatabaseParametersOutcome LightsailClient::GetRelationalDatabaseParameters(
    const GetRelationalDatabaseParametersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetRelationalDatabaseParametersOutcome(result.GetResultWithOwnership())
                            : GetRelationalDatabaseParametersOutcome(std::move(result.GetError()));
}

GetRelationalDatabaseSnapshotOutcome LightsailClient::GetRelationalDatabaseSnapshot(
    const GetRelationalDatabaseSnapshotRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetRelationalDatabaseSnapshotOutcome(result.GetResultWithOwnership())
                            : GetRelationalDatabaseSnapshotOutcome(std::move(result.GetError()));
}

GetRelationalDatabaseSnapshotsOutcome LightsailClient::GetRelationalDatabaseSnapshots(
    const GetRelationalDatabaseSnapshotsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetRelationalDatabaseSnapshotsOutcome(result.GetResultWithOwnership())
                            : GetRelationalDatabaseSnapshotsOutcome(std::move(result.GetError()));
}

GetRelationalDatabasesOutcome LightsailClient::GetRelationalDatabases(const GetRelationalDatabasesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetRelationalDatabasesOutcome(result.GetResultWithOwnership())
                            : GetRelationalDatabasesOutcome(std::move(result.GetError()));
}

GetSetupHistoryOutcome LightsailClient::GetSetupHistory(const GetSetupHistoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetSetupHistoryOutcome(result.GetResultWithOwnership())
                            : GetSetupHistoryOutcome(std::move(result.GetError()));
}

GetStaticIpOutcome LightsailClient::GetStaticIp(const GetStaticIpRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetStaticIpOutcome(result.GetResultWithOwnership()) : GetStaticIpOutcome(std::move(result.GetError()));
}

GetStaticIpsOutcome LightsailClient::GetStaticIps(const GetStaticIpsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetStaticIpsOutcome(result.GetResultWithOwnership()) : GetStaticIpsOutcome(std::move(result.GetError()));
}

ImportKeyPairOutcome LightsailClient::ImportKeyPair(const ImportKeyPairRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ImportKeyPairOutcome(result.GetResultWithOwnership()) : ImportKeyPairOutcome(std::move(result.GetError()));
}

IsVpcPeeredOutcome LightsailClient::IsVpcPeered(const IsVpcPeeredRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? IsVpcPeeredOutcome(result.GetResultWithOwnership()) : IsVpcPeeredOutcome(std::move(result.GetError()));
}

OpenInstancePublicPortsOutcome LightsailClient::OpenInstancePublicPorts(const OpenInstancePublicPortsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? OpenInstancePublicPortsOutcome(result.GetResultWithOwnership())
                            : OpenInstancePublicPortsOutcome(std::move(result.GetError()));
}

PeerVpcOutcome LightsailClient::PeerVpc(const PeerVpcRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PeerVpcOutcome(result.GetResultWithOwnership()) : PeerVpcOutcome(std::move(result.GetError()));
}

PutAlarmOutcome LightsailClient::PutAlarm(const PutAlarmRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutAlarmOutcome(result.GetResultWithOwnership()) : PutAlarmOutcome(std::move(result.GetError()));
}

PutInstancePublicPortsOutcome LightsailClient::PutInstancePublicPorts(const PutInstancePublicPortsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutInstancePublicPortsOutcome(result.GetResultWithOwnership())
                            : PutInstancePublicPortsOutcome(std::move(result.GetError()));
}

RebootInstanceOutcome LightsailClient::RebootInstance(const RebootInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RebootInstanceOutcome(result.GetResultWithOwnership()) : RebootInstanceOutcome(std::move(result.GetError()));
}

RebootRelationalDatabaseOutcome LightsailClient::RebootRelationalDatabase(const RebootRelationalDatabaseRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RebootRelationalDatabaseOutcome(result.GetResultWithOwnership())
                            : RebootRelationalDatabaseOutcome(std::move(result.GetError()));
}

RegisterContainerImageOutcome LightsailClient::RegisterContainerImage(const RegisterContainerImageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterContainerImageOutcome(result.GetResultWithOwnership())
                            : RegisterContainerImageOutcome(std::move(result.GetError()));
}

ReleaseStaticIpOutcome LightsailClient::ReleaseStaticIp(const ReleaseStaticIpRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ReleaseStaticIpOutcome(result.GetResultWithOwnership())
                            : ReleaseStaticIpOutcome(std::move(result.GetError()));
}

ResetDistributionCacheOutcome LightsailClient::ResetDistributionCache(const ResetDistributionCacheRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ResetDistributionCacheOutcome(result.GetResultWithOwnership())
                            : ResetDistributionCacheOutcome(std::move(result.GetError()));
}

SendContactMethodVerificationOutcome LightsailClient::SendContactMethodVerification(
    const SendContactMethodVerificationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SendContactMethodVerificationOutcome(result.GetResultWithOwnership())
                            : SendContactMethodVerificationOutcome(std::move(result.GetError()));
}

SetIpAddressTypeOutcome LightsailClient::SetIpAddressType(const SetIpAddressTypeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SetIpAddressTypeOutcome(result.GetResultWithOwnership())
                            : SetIpAddressTypeOutcome(std::move(result.GetError()));
}

SetResourceAccessForBucketOutcome LightsailClient::SetResourceAccessForBucket(const SetResourceAccessForBucketRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SetResourceAccessForBucketOutcome(result.GetResultWithOwnership())
                            : SetResourceAccessForBucketOutcome(std::move(result.GetError()));
}

SetupInstanceHttpsOutcome LightsailClient::SetupInstanceHttps(const SetupInstanceHttpsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SetupInstanceHttpsOutcome(result.GetResultWithOwnership())
                            : SetupInstanceHttpsOutcome(std::move(result.GetError()));
}

StartGUISessionOutcome LightsailClient::StartGUISession(const StartGUISessionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartGUISessionOutcome(result.GetResultWithOwnership())
                            : StartGUISessionOutcome(std::move(result.GetError()));
}

StartInstanceOutcome LightsailClient::StartInstance(const StartInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartInstanceOutcome(result.GetResultWithOwnership()) : StartInstanceOutcome(std::move(result.GetError()));
}

StartRelationalDatabaseOutcome LightsailClient::StartRelationalDatabase(const StartRelationalDatabaseRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartRelationalDatabaseOutcome(result.GetResultWithOwnership())
                            : StartRelationalDatabaseOutcome(std::move(result.GetError()));
}

StopGUISessionOutcome LightsailClient::StopGUISession(const StopGUISessionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopGUISessionOutcome(result.GetResultWithOwnership()) : StopGUISessionOutcome(std::move(result.GetError()));
}

StopInstanceOutcome LightsailClient::StopInstance(const StopInstanceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopInstanceOutcome(result.GetResultWithOwnership()) : StopInstanceOutcome(std::move(result.GetError()));
}

StopRelationalDatabaseOutcome LightsailClient::StopRelationalDatabase(const StopRelationalDatabaseRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopRelationalDatabaseOutcome(result.GetResultWithOwnership())
                            : StopRelationalDatabaseOutcome(std::move(result.GetError()));
}

TagResourceOutcome LightsailClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

TestAlarmOutcome LightsailClient::TestAlarm(const TestAlarmRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TestAlarmOutcome(result.GetResultWithOwnership()) : TestAlarmOutcome(std::move(result.GetError()));
}

UnpeerVpcOutcome LightsailClient::UnpeerVpc(const UnpeerVpcRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UnpeerVpcOutcome(result.GetResultWithOwnership()) : UnpeerVpcOutcome(std::move(result.GetError()));
}

UntagResourceOutcome LightsailClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateBucketOutcome LightsailClient::UpdateBucket(const UpdateBucketRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateBucketOutcome(result.GetResultWithOwnership()) : UpdateBucketOutcome(std::move(result.GetError()));
}

UpdateBucketBundleOutcome LightsailClient::UpdateBucketBundle(const UpdateBucketBundleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateBucketBundleOutcome(result.GetResultWithOwnership())
                            : UpdateBucketBundleOutcome(std::move(result.GetError()));
}

UpdateContainerServiceOutcome LightsailClient::UpdateContainerService(const UpdateContainerServiceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateContainerServiceOutcome(result.GetResultWithOwnership())
                            : UpdateContainerServiceOutcome(std::move(result.GetError()));
}

UpdateDistributionOutcome LightsailClient::UpdateDistribution(const UpdateDistributionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateDistributionOutcome(result.GetResultWithOwnership())
                            : UpdateDistributionOutcome(std::move(result.GetError()));
}

UpdateDistributionBundleOutcome LightsailClient::UpdateDistributionBundle(const UpdateDistributionBundleRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateDistributionBundleOutcome(result.GetResultWithOwnership())
                            : UpdateDistributionBundleOutcome(std::move(result.GetError()));
}

UpdateDomainEntryOutcome LightsailClient::UpdateDomainEntry(const UpdateDomainEntryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateDomainEntryOutcome(result.GetResultWithOwnership())
                            : UpdateDomainEntryOutcome(std::move(result.GetError()));
}

UpdateInstanceMetadataOptionsOutcome LightsailClient::UpdateInstanceMetadataOptions(
    const UpdateInstanceMetadataOptionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateInstanceMetadataOptionsOutcome(result.GetResultWithOwnership())
                            : UpdateInstanceMetadataOptionsOutcome(std::move(result.GetError()));
}

UpdateLoadBalancerAttributeOutcome LightsailClient::UpdateLoadBalancerAttribute(const UpdateLoadBalancerAttributeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateLoadBalancerAttributeOutcome(result.GetResultWithOwnership())
                            : UpdateLoadBalancerAttributeOutcome(std::move(result.GetError()));
}

UpdateRelationalDatabaseOutcome LightsailClient::UpdateRelationalDatabase(const UpdateRelationalDatabaseRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateRelationalDatabaseOutcome(result.GetResultWithOwnership())
                            : UpdateRelationalDatabaseOutcome(std::move(result.GetError()));
}

UpdateRelationalDatabaseParametersOutcome LightsailClient::UpdateRelationalDatabaseParameters(
    const UpdateRelationalDatabaseParametersRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateRelationalDatabaseParametersOutcome(result.GetResultWithOwnership())
                            : UpdateRelationalDatabaseParametersOutcome(std::move(result.GetError()));
}
