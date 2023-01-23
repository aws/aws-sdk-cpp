/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/lightsail/LightsailClient.h>
#include <aws/lightsail/LightsailErrorMarshaller.h>
#include <aws/lightsail/LightsailEndpointProvider.h>
#include <aws/lightsail/model/AllocateStaticIpRequest.h>
#include <aws/lightsail/model/AttachCertificateToDistributionRequest.h>
#include <aws/lightsail/model/AttachDiskRequest.h>
#include <aws/lightsail/model/AttachInstancesToLoadBalancerRequest.h>
#include <aws/lightsail/model/AttachLoadBalancerTlsCertificateRequest.h>
#include <aws/lightsail/model/AttachStaticIpRequest.h>
#include <aws/lightsail/model/CloseInstancePublicPortsRequest.h>
#include <aws/lightsail/model/CopySnapshotRequest.h>
#include <aws/lightsail/model/CreateBucketRequest.h>
#include <aws/lightsail/model/CreateBucketAccessKeyRequest.h>
#include <aws/lightsail/model/CreateCertificateRequest.h>
#include <aws/lightsail/model/CreateCloudFormationStackRequest.h>
#include <aws/lightsail/model/CreateContactMethodRequest.h>
#include <aws/lightsail/model/CreateContainerServiceRequest.h>
#include <aws/lightsail/model/CreateContainerServiceDeploymentRequest.h>
#include <aws/lightsail/model/CreateContainerServiceRegistryLoginRequest.h>
#include <aws/lightsail/model/CreateDiskRequest.h>
#include <aws/lightsail/model/CreateDiskFromSnapshotRequest.h>
#include <aws/lightsail/model/CreateDiskSnapshotRequest.h>
#include <aws/lightsail/model/CreateDistributionRequest.h>
#include <aws/lightsail/model/CreateDomainRequest.h>
#include <aws/lightsail/model/CreateDomainEntryRequest.h>
#include <aws/lightsail/model/CreateInstanceSnapshotRequest.h>
#include <aws/lightsail/model/CreateInstancesRequest.h>
#include <aws/lightsail/model/CreateInstancesFromSnapshotRequest.h>
#include <aws/lightsail/model/CreateKeyPairRequest.h>
#include <aws/lightsail/model/CreateLoadBalancerRequest.h>
#include <aws/lightsail/model/CreateLoadBalancerTlsCertificateRequest.h>
#include <aws/lightsail/model/CreateRelationalDatabaseRequest.h>
#include <aws/lightsail/model/CreateRelationalDatabaseFromSnapshotRequest.h>
#include <aws/lightsail/model/CreateRelationalDatabaseSnapshotRequest.h>
#include <aws/lightsail/model/DeleteAlarmRequest.h>
#include <aws/lightsail/model/DeleteAutoSnapshotRequest.h>
#include <aws/lightsail/model/DeleteBucketRequest.h>
#include <aws/lightsail/model/DeleteBucketAccessKeyRequest.h>
#include <aws/lightsail/model/DeleteCertificateRequest.h>
#include <aws/lightsail/model/DeleteContactMethodRequest.h>
#include <aws/lightsail/model/DeleteContainerImageRequest.h>
#include <aws/lightsail/model/DeleteContainerServiceRequest.h>
#include <aws/lightsail/model/DeleteDiskRequest.h>
#include <aws/lightsail/model/DeleteDiskSnapshotRequest.h>
#include <aws/lightsail/model/DeleteDistributionRequest.h>
#include <aws/lightsail/model/DeleteDomainRequest.h>
#include <aws/lightsail/model/DeleteDomainEntryRequest.h>
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
#include <aws/lightsail/model/GetInstanceRequest.h>
#include <aws/lightsail/model/GetInstanceAccessDetailsRequest.h>
#include <aws/lightsail/model/GetInstanceMetricDataRequest.h>
#include <aws/lightsail/model/GetInstancePortStatesRequest.h>
#include <aws/lightsail/model/GetInstanceSnapshotRequest.h>
#include <aws/lightsail/model/GetInstanceSnapshotsRequest.h>
#include <aws/lightsail/model/GetInstanceStateRequest.h>
#include <aws/lightsail/model/GetInstancesRequest.h>
#include <aws/lightsail/model/GetKeyPairRequest.h>
#include <aws/lightsail/model/GetKeyPairsRequest.h>
#include <aws/lightsail/model/GetLoadBalancerRequest.h>
#include <aws/lightsail/model/GetLoadBalancerMetricDataRequest.h>
#include <aws/lightsail/model/GetLoadBalancerTlsCertificatesRequest.h>
#include <aws/lightsail/model/GetLoadBalancerTlsPoliciesRequest.h>
#include <aws/lightsail/model/GetLoadBalancersRequest.h>
#include <aws/lightsail/model/GetOperationRequest.h>
#include <aws/lightsail/model/GetOperationsRequest.h>
#include <aws/lightsail/model/GetOperationsForResourceRequest.h>
#include <aws/lightsail/model/GetRegionsRequest.h>
#include <aws/lightsail/model/GetRelationalDatabaseRequest.h>
#include <aws/lightsail/model/GetRelationalDatabaseBlueprintsRequest.h>
#include <aws/lightsail/model/GetRelationalDatabaseBundlesRequest.h>
#include <aws/lightsail/model/GetRelationalDatabaseEventsRequest.h>
#include <aws/lightsail/model/GetRelationalDatabaseLogEventsRequest.h>
#include <aws/lightsail/model/GetRelationalDatabaseLogStreamsRequest.h>
#include <aws/lightsail/model/GetRelationalDatabaseMasterUserPasswordRequest.h>
#include <aws/lightsail/model/GetRelationalDatabaseMetricDataRequest.h>
#include <aws/lightsail/model/GetRelationalDatabaseParametersRequest.h>
#include <aws/lightsail/model/GetRelationalDatabaseSnapshotRequest.h>
#include <aws/lightsail/model/GetRelationalDatabaseSnapshotsRequest.h>
#include <aws/lightsail/model/GetRelationalDatabasesRequest.h>
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
#include <aws/lightsail/model/StartInstanceRequest.h>
#include <aws/lightsail/model/StartRelationalDatabaseRequest.h>
#include <aws/lightsail/model/StopInstanceRequest.h>
#include <aws/lightsail/model/StopRelationalDatabaseRequest.h>
#include <aws/lightsail/model/TagResourceRequest.h>
#include <aws/lightsail/model/TestAlarmRequest.h>
#include <aws/lightsail/model/UnpeerVpcRequest.h>
#include <aws/lightsail/model/UntagResourceRequest.h>
#include <aws/lightsail/model/UpdateBucketRequest.h>
#include <aws/lightsail/model/UpdateBucketBundleRequest.h>
#include <aws/lightsail/model/UpdateContainerServiceRequest.h>
#include <aws/lightsail/model/UpdateDistributionRequest.h>
#include <aws/lightsail/model/UpdateDistributionBundleRequest.h>
#include <aws/lightsail/model/UpdateDomainEntryRequest.h>
#include <aws/lightsail/model/UpdateInstanceMetadataOptionsRequest.h>
#include <aws/lightsail/model/UpdateLoadBalancerAttributeRequest.h>
#include <aws/lightsail/model/UpdateRelationalDatabaseRequest.h>
#include <aws/lightsail/model/UpdateRelationalDatabaseParametersRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Lightsail;
using namespace Aws::Lightsail::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* LightsailClient::SERVICE_NAME = "lightsail";
const char* LightsailClient::ALLOCATION_TAG = "LightsailClient";

LightsailClient::LightsailClient(const Lightsail::LightsailClientConfiguration& clientConfiguration,
                                 std::shared_ptr<LightsailEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LightsailErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

LightsailClient::LightsailClient(const AWSCredentials& credentials,
                                 std::shared_ptr<LightsailEndpointProviderBase> endpointProvider,
                                 const Lightsail::LightsailClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LightsailErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

LightsailClient::LightsailClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<LightsailEndpointProviderBase> endpointProvider,
                                 const Lightsail::LightsailClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LightsailErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  LightsailClient::LightsailClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LightsailErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<LightsailEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

LightsailClient::LightsailClient(const AWSCredentials& credentials,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LightsailErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<LightsailEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

LightsailClient::LightsailClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LightsailErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<LightsailEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
LightsailClient::~LightsailClient()
{
}

std::shared_ptr<LightsailEndpointProviderBase>& LightsailClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void LightsailClient::init(const Lightsail::LightsailClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Lightsail");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void LightsailClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AllocateStaticIpOutcome LightsailClient::AllocateStaticIp(const AllocateStaticIpRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AllocateStaticIp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AllocateStaticIp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AllocateStaticIpOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AttachCertificateToDistributionOutcome LightsailClient::AttachCertificateToDistribution(const AttachCertificateToDistributionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AttachCertificateToDistribution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AttachCertificateToDistribution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AttachCertificateToDistributionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AttachDiskOutcome LightsailClient::AttachDisk(const AttachDiskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AttachDisk, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AttachDisk, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AttachDiskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AttachInstancesToLoadBalancerOutcome LightsailClient::AttachInstancesToLoadBalancer(const AttachInstancesToLoadBalancerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AttachInstancesToLoadBalancer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AttachInstancesToLoadBalancer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AttachInstancesToLoadBalancerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AttachLoadBalancerTlsCertificateOutcome LightsailClient::AttachLoadBalancerTlsCertificate(const AttachLoadBalancerTlsCertificateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AttachLoadBalancerTlsCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AttachLoadBalancerTlsCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AttachLoadBalancerTlsCertificateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AttachStaticIpOutcome LightsailClient::AttachStaticIp(const AttachStaticIpRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AttachStaticIp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AttachStaticIp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AttachStaticIpOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CloseInstancePublicPortsOutcome LightsailClient::CloseInstancePublicPorts(const CloseInstancePublicPortsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CloseInstancePublicPorts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CloseInstancePublicPorts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CloseInstancePublicPortsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CopySnapshotOutcome LightsailClient::CopySnapshot(const CopySnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CopySnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CopySnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CopySnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBucketOutcome LightsailClient::CreateBucket(const CreateBucketRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateBucketOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBucketAccessKeyOutcome LightsailClient::CreateBucketAccessKey(const CreateBucketAccessKeyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBucketAccessKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBucketAccessKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateBucketAccessKeyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCertificateOutcome LightsailClient::CreateCertificate(const CreateCertificateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateCertificateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCloudFormationStackOutcome LightsailClient::CreateCloudFormationStack(const CreateCloudFormationStackRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCloudFormationStack, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCloudFormationStack, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateCloudFormationStackOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateContactMethodOutcome LightsailClient::CreateContactMethod(const CreateContactMethodRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateContactMethod, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateContactMethod, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateContactMethodOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateContainerServiceOutcome LightsailClient::CreateContainerService(const CreateContainerServiceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateContainerService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateContainerService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateContainerServiceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateContainerServiceDeploymentOutcome LightsailClient::CreateContainerServiceDeployment(const CreateContainerServiceDeploymentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateContainerServiceDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateContainerServiceDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateContainerServiceDeploymentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateContainerServiceRegistryLoginOutcome LightsailClient::CreateContainerServiceRegistryLogin(const CreateContainerServiceRegistryLoginRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateContainerServiceRegistryLogin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateContainerServiceRegistryLogin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateContainerServiceRegistryLoginOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDiskOutcome LightsailClient::CreateDisk(const CreateDiskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDisk, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDisk, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDiskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDiskFromSnapshotOutcome LightsailClient::CreateDiskFromSnapshot(const CreateDiskFromSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDiskFromSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDiskFromSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDiskFromSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDiskSnapshotOutcome LightsailClient::CreateDiskSnapshot(const CreateDiskSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDiskSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDiskSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDiskSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDistributionOutcome LightsailClient::CreateDistribution(const CreateDistributionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDistribution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDistribution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDistributionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDomainOutcome LightsailClient::CreateDomain(const CreateDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDomainEntryOutcome LightsailClient::CreateDomainEntry(const CreateDomainEntryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDomainEntry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDomainEntry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDomainEntryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateInstanceSnapshotOutcome LightsailClient::CreateInstanceSnapshot(const CreateInstanceSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateInstanceSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateInstanceSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateInstanceSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateInstancesOutcome LightsailClient::CreateInstances(const CreateInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateInstancesFromSnapshotOutcome LightsailClient::CreateInstancesFromSnapshot(const CreateInstancesFromSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateInstancesFromSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateInstancesFromSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateInstancesFromSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateKeyPairOutcome LightsailClient::CreateKeyPair(const CreateKeyPairRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateKeyPair, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateKeyPair, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateKeyPairOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLoadBalancerOutcome LightsailClient::CreateLoadBalancer(const CreateLoadBalancerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLoadBalancer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLoadBalancer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateLoadBalancerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLoadBalancerTlsCertificateOutcome LightsailClient::CreateLoadBalancerTlsCertificate(const CreateLoadBalancerTlsCertificateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLoadBalancerTlsCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLoadBalancerTlsCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateLoadBalancerTlsCertificateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRelationalDatabaseOutcome LightsailClient::CreateRelationalDatabase(const CreateRelationalDatabaseRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRelationalDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRelationalDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateRelationalDatabaseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRelationalDatabaseFromSnapshotOutcome LightsailClient::CreateRelationalDatabaseFromSnapshot(const CreateRelationalDatabaseFromSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRelationalDatabaseFromSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRelationalDatabaseFromSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateRelationalDatabaseFromSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRelationalDatabaseSnapshotOutcome LightsailClient::CreateRelationalDatabaseSnapshot(const CreateRelationalDatabaseSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRelationalDatabaseSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRelationalDatabaseSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateRelationalDatabaseSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAlarmOutcome LightsailClient::DeleteAlarm(const DeleteAlarmRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAlarm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAlarm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteAlarmOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAutoSnapshotOutcome LightsailClient::DeleteAutoSnapshot(const DeleteAutoSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAutoSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAutoSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteAutoSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteBucketOutcome LightsailClient::DeleteBucket(const DeleteBucketRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteBucketOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteBucketAccessKeyOutcome LightsailClient::DeleteBucketAccessKey(const DeleteBucketAccessKeyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketAccessKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketAccessKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteBucketAccessKeyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCertificateOutcome LightsailClient::DeleteCertificate(const DeleteCertificateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteCertificateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteContactMethodOutcome LightsailClient::DeleteContactMethod(const DeleteContactMethodRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteContactMethod, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteContactMethod, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteContactMethodOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteContainerImageOutcome LightsailClient::DeleteContainerImage(const DeleteContainerImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteContainerImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteContainerImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteContainerImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteContainerServiceOutcome LightsailClient::DeleteContainerService(const DeleteContainerServiceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteContainerService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteContainerService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteContainerServiceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDiskOutcome LightsailClient::DeleteDisk(const DeleteDiskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDisk, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDisk, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDiskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDiskSnapshotOutcome LightsailClient::DeleteDiskSnapshot(const DeleteDiskSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDiskSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDiskSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDiskSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDistributionOutcome LightsailClient::DeleteDistribution(const DeleteDistributionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDistribution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDistribution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDistributionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDomainOutcome LightsailClient::DeleteDomain(const DeleteDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDomainEntryOutcome LightsailClient::DeleteDomainEntry(const DeleteDomainEntryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDomainEntry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDomainEntry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDomainEntryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteInstanceOutcome LightsailClient::DeleteInstance(const DeleteInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteInstanceSnapshotOutcome LightsailClient::DeleteInstanceSnapshot(const DeleteInstanceSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteInstanceSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteInstanceSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteInstanceSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteKeyPairOutcome LightsailClient::DeleteKeyPair(const DeleteKeyPairRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteKeyPair, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteKeyPair, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteKeyPairOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteKnownHostKeysOutcome LightsailClient::DeleteKnownHostKeys(const DeleteKnownHostKeysRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteKnownHostKeys, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteKnownHostKeys, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteKnownHostKeysOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteLoadBalancerOutcome LightsailClient::DeleteLoadBalancer(const DeleteLoadBalancerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLoadBalancer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLoadBalancer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteLoadBalancerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteLoadBalancerTlsCertificateOutcome LightsailClient::DeleteLoadBalancerTlsCertificate(const DeleteLoadBalancerTlsCertificateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLoadBalancerTlsCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLoadBalancerTlsCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteLoadBalancerTlsCertificateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRelationalDatabaseOutcome LightsailClient::DeleteRelationalDatabase(const DeleteRelationalDatabaseRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRelationalDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRelationalDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteRelationalDatabaseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRelationalDatabaseSnapshotOutcome LightsailClient::DeleteRelationalDatabaseSnapshot(const DeleteRelationalDatabaseSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRelationalDatabaseSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRelationalDatabaseSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteRelationalDatabaseSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetachCertificateFromDistributionOutcome LightsailClient::DetachCertificateFromDistribution(const DetachCertificateFromDistributionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DetachCertificateFromDistribution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DetachCertificateFromDistribution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DetachCertificateFromDistributionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetachDiskOutcome LightsailClient::DetachDisk(const DetachDiskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DetachDisk, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DetachDisk, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DetachDiskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetachInstancesFromLoadBalancerOutcome LightsailClient::DetachInstancesFromLoadBalancer(const DetachInstancesFromLoadBalancerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DetachInstancesFromLoadBalancer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DetachInstancesFromLoadBalancer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DetachInstancesFromLoadBalancerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetachStaticIpOutcome LightsailClient::DetachStaticIp(const DetachStaticIpRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DetachStaticIp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DetachStaticIp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DetachStaticIpOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableAddOnOutcome LightsailClient::DisableAddOn(const DisableAddOnRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableAddOn, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableAddOn, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableAddOnOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DownloadDefaultKeyPairOutcome LightsailClient::DownloadDefaultKeyPair(const DownloadDefaultKeyPairRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DownloadDefaultKeyPair, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DownloadDefaultKeyPair, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DownloadDefaultKeyPairOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableAddOnOutcome LightsailClient::EnableAddOn(const EnableAddOnRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableAddOn, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableAddOn, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableAddOnOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExportSnapshotOutcome LightsailClient::ExportSnapshot(const ExportSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExportSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExportSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ExportSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetActiveNamesOutcome LightsailClient::GetActiveNames(const GetActiveNamesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetActiveNames, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetActiveNames, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetActiveNamesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAlarmsOutcome LightsailClient::GetAlarms(const GetAlarmsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAlarms, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAlarms, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetAlarmsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAutoSnapshotsOutcome LightsailClient::GetAutoSnapshots(const GetAutoSnapshotsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAutoSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAutoSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetAutoSnapshotsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBlueprintsOutcome LightsailClient::GetBlueprints(const GetBlueprintsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBlueprints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBlueprints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetBlueprintsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBucketAccessKeysOutcome LightsailClient::GetBucketAccessKeys(const GetBucketAccessKeysRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketAccessKeys, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketAccessKeys, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetBucketAccessKeysOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBucketBundlesOutcome LightsailClient::GetBucketBundles(const GetBucketBundlesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketBundles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketBundles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetBucketBundlesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBucketMetricDataOutcome LightsailClient::GetBucketMetricData(const GetBucketMetricDataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketMetricData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketMetricData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetBucketMetricDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBucketsOutcome LightsailClient::GetBuckets(const GetBucketsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBuckets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBuckets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetBucketsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBundlesOutcome LightsailClient::GetBundles(const GetBundlesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBundles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBundles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetBundlesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCertificatesOutcome LightsailClient::GetCertificates(const GetCertificatesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCertificates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCertificates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetCertificatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCloudFormationStackRecordsOutcome LightsailClient::GetCloudFormationStackRecords(const GetCloudFormationStackRecordsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCloudFormationStackRecords, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCloudFormationStackRecords, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetCloudFormationStackRecordsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetContactMethodsOutcome LightsailClient::GetContactMethods(const GetContactMethodsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetContactMethods, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetContactMethods, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetContactMethodsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetContainerAPIMetadataOutcome LightsailClient::GetContainerAPIMetadata(const GetContainerAPIMetadataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetContainerAPIMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetContainerAPIMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetContainerAPIMetadataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetContainerImagesOutcome LightsailClient::GetContainerImages(const GetContainerImagesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetContainerImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetContainerImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetContainerImagesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetContainerLogOutcome LightsailClient::GetContainerLog(const GetContainerLogRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetContainerLog, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetContainerLog, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetContainerLogOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetContainerServiceDeploymentsOutcome LightsailClient::GetContainerServiceDeployments(const GetContainerServiceDeploymentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetContainerServiceDeployments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetContainerServiceDeployments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetContainerServiceDeploymentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetContainerServiceMetricDataOutcome LightsailClient::GetContainerServiceMetricData(const GetContainerServiceMetricDataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetContainerServiceMetricData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetContainerServiceMetricData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetContainerServiceMetricDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetContainerServicePowersOutcome LightsailClient::GetContainerServicePowers(const GetContainerServicePowersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetContainerServicePowers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetContainerServicePowers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetContainerServicePowersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetContainerServicesOutcome LightsailClient::GetContainerServices(const GetContainerServicesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetContainerServices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetContainerServices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetContainerServicesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDiskOutcome LightsailClient::GetDisk(const GetDiskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDisk, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDisk, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDiskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDiskSnapshotOutcome LightsailClient::GetDiskSnapshot(const GetDiskSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDiskSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDiskSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDiskSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDiskSnapshotsOutcome LightsailClient::GetDiskSnapshots(const GetDiskSnapshotsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDiskSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDiskSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDiskSnapshotsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDisksOutcome LightsailClient::GetDisks(const GetDisksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDisks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDisks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDisksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDistributionBundlesOutcome LightsailClient::GetDistributionBundles(const GetDistributionBundlesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDistributionBundles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDistributionBundles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDistributionBundlesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDistributionLatestCacheResetOutcome LightsailClient::GetDistributionLatestCacheReset(const GetDistributionLatestCacheResetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDistributionLatestCacheReset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDistributionLatestCacheReset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDistributionLatestCacheResetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDistributionMetricDataOutcome LightsailClient::GetDistributionMetricData(const GetDistributionMetricDataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDistributionMetricData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDistributionMetricData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDistributionMetricDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDistributionsOutcome LightsailClient::GetDistributions(const GetDistributionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDistributions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDistributions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDistributionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDomainOutcome LightsailClient::GetDomain(const GetDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDomainsOutcome LightsailClient::GetDomains(const GetDomainsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDomains, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDomains, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDomainsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetExportSnapshotRecordsOutcome LightsailClient::GetExportSnapshotRecords(const GetExportSnapshotRecordsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetExportSnapshotRecords, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetExportSnapshotRecords, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetExportSnapshotRecordsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInstanceOutcome LightsailClient::GetInstance(const GetInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInstanceAccessDetailsOutcome LightsailClient::GetInstanceAccessDetails(const GetInstanceAccessDetailsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInstanceAccessDetails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInstanceAccessDetails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetInstanceAccessDetailsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInstanceMetricDataOutcome LightsailClient::GetInstanceMetricData(const GetInstanceMetricDataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInstanceMetricData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInstanceMetricData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetInstanceMetricDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInstancePortStatesOutcome LightsailClient::GetInstancePortStates(const GetInstancePortStatesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInstancePortStates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInstancePortStates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetInstancePortStatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInstanceSnapshotOutcome LightsailClient::GetInstanceSnapshot(const GetInstanceSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInstanceSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInstanceSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetInstanceSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInstanceSnapshotsOutcome LightsailClient::GetInstanceSnapshots(const GetInstanceSnapshotsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInstanceSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInstanceSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetInstanceSnapshotsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInstanceStateOutcome LightsailClient::GetInstanceState(const GetInstanceStateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInstanceState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInstanceState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetInstanceStateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInstancesOutcome LightsailClient::GetInstances(const GetInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetKeyPairOutcome LightsailClient::GetKeyPair(const GetKeyPairRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetKeyPair, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetKeyPair, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetKeyPairOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetKeyPairsOutcome LightsailClient::GetKeyPairs(const GetKeyPairsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetKeyPairs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetKeyPairs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetKeyPairsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLoadBalancerOutcome LightsailClient::GetLoadBalancer(const GetLoadBalancerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLoadBalancer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLoadBalancer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetLoadBalancerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLoadBalancerMetricDataOutcome LightsailClient::GetLoadBalancerMetricData(const GetLoadBalancerMetricDataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLoadBalancerMetricData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLoadBalancerMetricData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetLoadBalancerMetricDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLoadBalancerTlsCertificatesOutcome LightsailClient::GetLoadBalancerTlsCertificates(const GetLoadBalancerTlsCertificatesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLoadBalancerTlsCertificates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLoadBalancerTlsCertificates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetLoadBalancerTlsCertificatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLoadBalancerTlsPoliciesOutcome LightsailClient::GetLoadBalancerTlsPolicies(const GetLoadBalancerTlsPoliciesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLoadBalancerTlsPolicies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLoadBalancerTlsPolicies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetLoadBalancerTlsPoliciesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLoadBalancersOutcome LightsailClient::GetLoadBalancers(const GetLoadBalancersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLoadBalancers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLoadBalancers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetLoadBalancersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetOperationOutcome LightsailClient::GetOperation(const GetOperationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetOperationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetOperationsOutcome LightsailClient::GetOperations(const GetOperationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetOperations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetOperations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetOperationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetOperationsForResourceOutcome LightsailClient::GetOperationsForResource(const GetOperationsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetOperationsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetOperationsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetOperationsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRegionsOutcome LightsailClient::GetRegions(const GetRegionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRegions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRegions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRegionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRelationalDatabaseOutcome LightsailClient::GetRelationalDatabase(const GetRelationalDatabaseRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRelationalDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRelationalDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRelationalDatabaseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRelationalDatabaseBlueprintsOutcome LightsailClient::GetRelationalDatabaseBlueprints(const GetRelationalDatabaseBlueprintsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRelationalDatabaseBlueprints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRelationalDatabaseBlueprints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRelationalDatabaseBlueprintsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRelationalDatabaseBundlesOutcome LightsailClient::GetRelationalDatabaseBundles(const GetRelationalDatabaseBundlesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRelationalDatabaseBundles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRelationalDatabaseBundles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRelationalDatabaseBundlesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRelationalDatabaseEventsOutcome LightsailClient::GetRelationalDatabaseEvents(const GetRelationalDatabaseEventsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRelationalDatabaseEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRelationalDatabaseEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRelationalDatabaseEventsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRelationalDatabaseLogEventsOutcome LightsailClient::GetRelationalDatabaseLogEvents(const GetRelationalDatabaseLogEventsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRelationalDatabaseLogEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRelationalDatabaseLogEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRelationalDatabaseLogEventsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRelationalDatabaseLogStreamsOutcome LightsailClient::GetRelationalDatabaseLogStreams(const GetRelationalDatabaseLogStreamsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRelationalDatabaseLogStreams, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRelationalDatabaseLogStreams, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRelationalDatabaseLogStreamsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRelationalDatabaseMasterUserPasswordOutcome LightsailClient::GetRelationalDatabaseMasterUserPassword(const GetRelationalDatabaseMasterUserPasswordRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRelationalDatabaseMasterUserPassword, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRelationalDatabaseMasterUserPassword, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRelationalDatabaseMasterUserPasswordOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRelationalDatabaseMetricDataOutcome LightsailClient::GetRelationalDatabaseMetricData(const GetRelationalDatabaseMetricDataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRelationalDatabaseMetricData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRelationalDatabaseMetricData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRelationalDatabaseMetricDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRelationalDatabaseParametersOutcome LightsailClient::GetRelationalDatabaseParameters(const GetRelationalDatabaseParametersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRelationalDatabaseParameters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRelationalDatabaseParameters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRelationalDatabaseParametersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRelationalDatabaseSnapshotOutcome LightsailClient::GetRelationalDatabaseSnapshot(const GetRelationalDatabaseSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRelationalDatabaseSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRelationalDatabaseSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRelationalDatabaseSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRelationalDatabaseSnapshotsOutcome LightsailClient::GetRelationalDatabaseSnapshots(const GetRelationalDatabaseSnapshotsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRelationalDatabaseSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRelationalDatabaseSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRelationalDatabaseSnapshotsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRelationalDatabasesOutcome LightsailClient::GetRelationalDatabases(const GetRelationalDatabasesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRelationalDatabases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRelationalDatabases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRelationalDatabasesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetStaticIpOutcome LightsailClient::GetStaticIp(const GetStaticIpRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetStaticIp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetStaticIp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetStaticIpOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetStaticIpsOutcome LightsailClient::GetStaticIps(const GetStaticIpsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetStaticIps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetStaticIps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetStaticIpsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportKeyPairOutcome LightsailClient::ImportKeyPair(const ImportKeyPairRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportKeyPair, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportKeyPair, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ImportKeyPairOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

IsVpcPeeredOutcome LightsailClient::IsVpcPeered(const IsVpcPeeredRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, IsVpcPeered, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, IsVpcPeered, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return IsVpcPeeredOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

OpenInstancePublicPortsOutcome LightsailClient::OpenInstancePublicPorts(const OpenInstancePublicPortsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, OpenInstancePublicPorts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, OpenInstancePublicPorts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return OpenInstancePublicPortsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PeerVpcOutcome LightsailClient::PeerVpc(const PeerVpcRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PeerVpc, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PeerVpc, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PeerVpcOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutAlarmOutcome LightsailClient::PutAlarm(const PutAlarmRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutAlarm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutAlarm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutAlarmOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutInstancePublicPortsOutcome LightsailClient::PutInstancePublicPorts(const PutInstancePublicPortsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutInstancePublicPorts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutInstancePublicPorts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutInstancePublicPortsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RebootInstanceOutcome LightsailClient::RebootInstance(const RebootInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RebootInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RebootInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RebootInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RebootRelationalDatabaseOutcome LightsailClient::RebootRelationalDatabase(const RebootRelationalDatabaseRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RebootRelationalDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RebootRelationalDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RebootRelationalDatabaseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterContainerImageOutcome LightsailClient::RegisterContainerImage(const RegisterContainerImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterContainerImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterContainerImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RegisterContainerImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ReleaseStaticIpOutcome LightsailClient::ReleaseStaticIp(const ReleaseStaticIpRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReleaseStaticIp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReleaseStaticIp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ReleaseStaticIpOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ResetDistributionCacheOutcome LightsailClient::ResetDistributionCache(const ResetDistributionCacheRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResetDistributionCache, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResetDistributionCache, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ResetDistributionCacheOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendContactMethodVerificationOutcome LightsailClient::SendContactMethodVerification(const SendContactMethodVerificationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendContactMethodVerification, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SendContactMethodVerification, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SendContactMethodVerificationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetIpAddressTypeOutcome LightsailClient::SetIpAddressType(const SetIpAddressTypeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetIpAddressType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetIpAddressType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetIpAddressTypeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetResourceAccessForBucketOutcome LightsailClient::SetResourceAccessForBucket(const SetResourceAccessForBucketRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetResourceAccessForBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetResourceAccessForBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetResourceAccessForBucketOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartInstanceOutcome LightsailClient::StartInstance(const StartInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartRelationalDatabaseOutcome LightsailClient::StartRelationalDatabase(const StartRelationalDatabaseRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartRelationalDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartRelationalDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartRelationalDatabaseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopInstanceOutcome LightsailClient::StopInstance(const StopInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopRelationalDatabaseOutcome LightsailClient::StopRelationalDatabase(const StopRelationalDatabaseRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopRelationalDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopRelationalDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopRelationalDatabaseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome LightsailClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TestAlarmOutcome LightsailClient::TestAlarm(const TestAlarmRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TestAlarm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TestAlarm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TestAlarmOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UnpeerVpcOutcome LightsailClient::UnpeerVpc(const UnpeerVpcRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UnpeerVpc, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UnpeerVpc, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UnpeerVpcOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome LightsailClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateBucketOutcome LightsailClient::UpdateBucket(const UpdateBucketRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateBucketOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateBucketBundleOutcome LightsailClient::UpdateBucketBundle(const UpdateBucketBundleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBucketBundle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBucketBundle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateBucketBundleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateContainerServiceOutcome LightsailClient::UpdateContainerService(const UpdateContainerServiceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateContainerService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateContainerService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateContainerServiceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDistributionOutcome LightsailClient::UpdateDistribution(const UpdateDistributionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDistribution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDistribution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateDistributionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDistributionBundleOutcome LightsailClient::UpdateDistributionBundle(const UpdateDistributionBundleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDistributionBundle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDistributionBundle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateDistributionBundleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDomainEntryOutcome LightsailClient::UpdateDomainEntry(const UpdateDomainEntryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDomainEntry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDomainEntry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateDomainEntryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateInstanceMetadataOptionsOutcome LightsailClient::UpdateInstanceMetadataOptions(const UpdateInstanceMetadataOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateInstanceMetadataOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateInstanceMetadataOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateInstanceMetadataOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateLoadBalancerAttributeOutcome LightsailClient::UpdateLoadBalancerAttribute(const UpdateLoadBalancerAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateLoadBalancerAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateLoadBalancerAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateLoadBalancerAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRelationalDatabaseOutcome LightsailClient::UpdateRelationalDatabase(const UpdateRelationalDatabaseRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRelationalDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRelationalDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateRelationalDatabaseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRelationalDatabaseParametersOutcome LightsailClient::UpdateRelationalDatabaseParameters(const UpdateRelationalDatabaseParametersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRelationalDatabaseParameters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRelationalDatabaseParameters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateRelationalDatabaseParametersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

