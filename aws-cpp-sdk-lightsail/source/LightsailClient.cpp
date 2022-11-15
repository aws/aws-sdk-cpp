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

AllocateStaticIpOutcomeCallable LightsailClient::AllocateStaticIpCallable(const AllocateStaticIpRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AllocateStaticIpOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AllocateStaticIp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::AllocateStaticIpAsync(const AllocateStaticIpRequest& request, const AllocateStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AllocateStaticIp(request), context);
    } );
}

AttachCertificateToDistributionOutcome LightsailClient::AttachCertificateToDistribution(const AttachCertificateToDistributionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AttachCertificateToDistribution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AttachCertificateToDistribution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AttachCertificateToDistributionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AttachCertificateToDistributionOutcomeCallable LightsailClient::AttachCertificateToDistributionCallable(const AttachCertificateToDistributionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachCertificateToDistributionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachCertificateToDistribution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::AttachCertificateToDistributionAsync(const AttachCertificateToDistributionRequest& request, const AttachCertificateToDistributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AttachCertificateToDistribution(request), context);
    } );
}

AttachDiskOutcome LightsailClient::AttachDisk(const AttachDiskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AttachDisk, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AttachDisk, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AttachDiskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AttachDiskOutcomeCallable LightsailClient::AttachDiskCallable(const AttachDiskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachDiskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachDisk(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::AttachDiskAsync(const AttachDiskRequest& request, const AttachDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AttachDisk(request), context);
    } );
}

AttachInstancesToLoadBalancerOutcome LightsailClient::AttachInstancesToLoadBalancer(const AttachInstancesToLoadBalancerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AttachInstancesToLoadBalancer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AttachInstancesToLoadBalancer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AttachInstancesToLoadBalancerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AttachInstancesToLoadBalancerOutcomeCallable LightsailClient::AttachInstancesToLoadBalancerCallable(const AttachInstancesToLoadBalancerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachInstancesToLoadBalancerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachInstancesToLoadBalancer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::AttachInstancesToLoadBalancerAsync(const AttachInstancesToLoadBalancerRequest& request, const AttachInstancesToLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AttachInstancesToLoadBalancer(request), context);
    } );
}

AttachLoadBalancerTlsCertificateOutcome LightsailClient::AttachLoadBalancerTlsCertificate(const AttachLoadBalancerTlsCertificateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AttachLoadBalancerTlsCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AttachLoadBalancerTlsCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AttachLoadBalancerTlsCertificateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AttachLoadBalancerTlsCertificateOutcomeCallable LightsailClient::AttachLoadBalancerTlsCertificateCallable(const AttachLoadBalancerTlsCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachLoadBalancerTlsCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachLoadBalancerTlsCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::AttachLoadBalancerTlsCertificateAsync(const AttachLoadBalancerTlsCertificateRequest& request, const AttachLoadBalancerTlsCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AttachLoadBalancerTlsCertificate(request), context);
    } );
}

AttachStaticIpOutcome LightsailClient::AttachStaticIp(const AttachStaticIpRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AttachStaticIp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AttachStaticIp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return AttachStaticIpOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AttachStaticIpOutcomeCallable LightsailClient::AttachStaticIpCallable(const AttachStaticIpRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachStaticIpOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachStaticIp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::AttachStaticIpAsync(const AttachStaticIpRequest& request, const AttachStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AttachStaticIp(request), context);
    } );
}

CloseInstancePublicPortsOutcome LightsailClient::CloseInstancePublicPorts(const CloseInstancePublicPortsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CloseInstancePublicPorts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CloseInstancePublicPorts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CloseInstancePublicPortsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CloseInstancePublicPortsOutcomeCallable LightsailClient::CloseInstancePublicPortsCallable(const CloseInstancePublicPortsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CloseInstancePublicPortsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CloseInstancePublicPorts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::CloseInstancePublicPortsAsync(const CloseInstancePublicPortsRequest& request, const CloseInstancePublicPortsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CloseInstancePublicPorts(request), context);
    } );
}

CopySnapshotOutcome LightsailClient::CopySnapshot(const CopySnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CopySnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CopySnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CopySnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CopySnapshotOutcomeCallable LightsailClient::CopySnapshotCallable(const CopySnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CopySnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CopySnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::CopySnapshotAsync(const CopySnapshotRequest& request, const CopySnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CopySnapshot(request), context);
    } );
}

CreateBucketOutcome LightsailClient::CreateBucket(const CreateBucketRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateBucketOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBucketOutcomeCallable LightsailClient::CreateBucketCallable(const CreateBucketRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBucketOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBucket(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::CreateBucketAsync(const CreateBucketRequest& request, const CreateBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateBucket(request), context);
    } );
}

CreateBucketAccessKeyOutcome LightsailClient::CreateBucketAccessKey(const CreateBucketAccessKeyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBucketAccessKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBucketAccessKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateBucketAccessKeyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBucketAccessKeyOutcomeCallable LightsailClient::CreateBucketAccessKeyCallable(const CreateBucketAccessKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBucketAccessKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBucketAccessKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::CreateBucketAccessKeyAsync(const CreateBucketAccessKeyRequest& request, const CreateBucketAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateBucketAccessKey(request), context);
    } );
}

CreateCertificateOutcome LightsailClient::CreateCertificate(const CreateCertificateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateCertificateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCertificateOutcomeCallable LightsailClient::CreateCertificateCallable(const CreateCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::CreateCertificateAsync(const CreateCertificateRequest& request, const CreateCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateCertificate(request), context);
    } );
}

CreateCloudFormationStackOutcome LightsailClient::CreateCloudFormationStack(const CreateCloudFormationStackRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCloudFormationStack, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCloudFormationStack, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateCloudFormationStackOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCloudFormationStackOutcomeCallable LightsailClient::CreateCloudFormationStackCallable(const CreateCloudFormationStackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCloudFormationStackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCloudFormationStack(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::CreateCloudFormationStackAsync(const CreateCloudFormationStackRequest& request, const CreateCloudFormationStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateCloudFormationStack(request), context);
    } );
}

CreateContactMethodOutcome LightsailClient::CreateContactMethod(const CreateContactMethodRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateContactMethod, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateContactMethod, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateContactMethodOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateContactMethodOutcomeCallable LightsailClient::CreateContactMethodCallable(const CreateContactMethodRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateContactMethodOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateContactMethod(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::CreateContactMethodAsync(const CreateContactMethodRequest& request, const CreateContactMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateContactMethod(request), context);
    } );
}

CreateContainerServiceOutcome LightsailClient::CreateContainerService(const CreateContainerServiceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateContainerService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateContainerService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateContainerServiceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateContainerServiceOutcomeCallable LightsailClient::CreateContainerServiceCallable(const CreateContainerServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateContainerServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateContainerService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::CreateContainerServiceAsync(const CreateContainerServiceRequest& request, const CreateContainerServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateContainerService(request), context);
    } );
}

CreateContainerServiceDeploymentOutcome LightsailClient::CreateContainerServiceDeployment(const CreateContainerServiceDeploymentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateContainerServiceDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateContainerServiceDeployment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateContainerServiceDeploymentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateContainerServiceDeploymentOutcomeCallable LightsailClient::CreateContainerServiceDeploymentCallable(const CreateContainerServiceDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateContainerServiceDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateContainerServiceDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::CreateContainerServiceDeploymentAsync(const CreateContainerServiceDeploymentRequest& request, const CreateContainerServiceDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateContainerServiceDeployment(request), context);
    } );
}

CreateContainerServiceRegistryLoginOutcome LightsailClient::CreateContainerServiceRegistryLogin(const CreateContainerServiceRegistryLoginRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateContainerServiceRegistryLogin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateContainerServiceRegistryLogin, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateContainerServiceRegistryLoginOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateContainerServiceRegistryLoginOutcomeCallable LightsailClient::CreateContainerServiceRegistryLoginCallable(const CreateContainerServiceRegistryLoginRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateContainerServiceRegistryLoginOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateContainerServiceRegistryLogin(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::CreateContainerServiceRegistryLoginAsync(const CreateContainerServiceRegistryLoginRequest& request, const CreateContainerServiceRegistryLoginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateContainerServiceRegistryLogin(request), context);
    } );
}

CreateDiskOutcome LightsailClient::CreateDisk(const CreateDiskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDisk, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDisk, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDiskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDiskOutcomeCallable LightsailClient::CreateDiskCallable(const CreateDiskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDiskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDisk(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::CreateDiskAsync(const CreateDiskRequest& request, const CreateDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDisk(request), context);
    } );
}

CreateDiskFromSnapshotOutcome LightsailClient::CreateDiskFromSnapshot(const CreateDiskFromSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDiskFromSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDiskFromSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDiskFromSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDiskFromSnapshotOutcomeCallable LightsailClient::CreateDiskFromSnapshotCallable(const CreateDiskFromSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDiskFromSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDiskFromSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::CreateDiskFromSnapshotAsync(const CreateDiskFromSnapshotRequest& request, const CreateDiskFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDiskFromSnapshot(request), context);
    } );
}

CreateDiskSnapshotOutcome LightsailClient::CreateDiskSnapshot(const CreateDiskSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDiskSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDiskSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDiskSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDiskSnapshotOutcomeCallable LightsailClient::CreateDiskSnapshotCallable(const CreateDiskSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDiskSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDiskSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::CreateDiskSnapshotAsync(const CreateDiskSnapshotRequest& request, const CreateDiskSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDiskSnapshot(request), context);
    } );
}

CreateDistributionOutcome LightsailClient::CreateDistribution(const CreateDistributionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDistribution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDistribution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDistributionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDistributionOutcomeCallable LightsailClient::CreateDistributionCallable(const CreateDistributionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDistributionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDistribution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::CreateDistributionAsync(const CreateDistributionRequest& request, const CreateDistributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDistribution(request), context);
    } );
}

CreateDomainOutcome LightsailClient::CreateDomain(const CreateDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDomainOutcomeCallable LightsailClient::CreateDomainCallable(const CreateDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::CreateDomainAsync(const CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDomain(request), context);
    } );
}

CreateDomainEntryOutcome LightsailClient::CreateDomainEntry(const CreateDomainEntryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDomainEntry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDomainEntry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateDomainEntryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDomainEntryOutcomeCallable LightsailClient::CreateDomainEntryCallable(const CreateDomainEntryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDomainEntryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDomainEntry(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::CreateDomainEntryAsync(const CreateDomainEntryRequest& request, const CreateDomainEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDomainEntry(request), context);
    } );
}

CreateInstanceSnapshotOutcome LightsailClient::CreateInstanceSnapshot(const CreateInstanceSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateInstanceSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateInstanceSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateInstanceSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateInstanceSnapshotOutcomeCallable LightsailClient::CreateInstanceSnapshotCallable(const CreateInstanceSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInstanceSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInstanceSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::CreateInstanceSnapshotAsync(const CreateInstanceSnapshotRequest& request, const CreateInstanceSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateInstanceSnapshot(request), context);
    } );
}

CreateInstancesOutcome LightsailClient::CreateInstances(const CreateInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateInstancesOutcomeCallable LightsailClient::CreateInstancesCallable(const CreateInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::CreateInstancesAsync(const CreateInstancesRequest& request, const CreateInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateInstances(request), context);
    } );
}

CreateInstancesFromSnapshotOutcome LightsailClient::CreateInstancesFromSnapshot(const CreateInstancesFromSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateInstancesFromSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateInstancesFromSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateInstancesFromSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateInstancesFromSnapshotOutcomeCallable LightsailClient::CreateInstancesFromSnapshotCallable(const CreateInstancesFromSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInstancesFromSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInstancesFromSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::CreateInstancesFromSnapshotAsync(const CreateInstancesFromSnapshotRequest& request, const CreateInstancesFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateInstancesFromSnapshot(request), context);
    } );
}

CreateKeyPairOutcome LightsailClient::CreateKeyPair(const CreateKeyPairRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateKeyPair, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateKeyPair, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateKeyPairOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateKeyPairOutcomeCallable LightsailClient::CreateKeyPairCallable(const CreateKeyPairRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateKeyPairOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateKeyPair(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::CreateKeyPairAsync(const CreateKeyPairRequest& request, const CreateKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateKeyPair(request), context);
    } );
}

CreateLoadBalancerOutcome LightsailClient::CreateLoadBalancer(const CreateLoadBalancerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLoadBalancer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLoadBalancer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateLoadBalancerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLoadBalancerOutcomeCallable LightsailClient::CreateLoadBalancerCallable(const CreateLoadBalancerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLoadBalancerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLoadBalancer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::CreateLoadBalancerAsync(const CreateLoadBalancerRequest& request, const CreateLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLoadBalancer(request), context);
    } );
}

CreateLoadBalancerTlsCertificateOutcome LightsailClient::CreateLoadBalancerTlsCertificate(const CreateLoadBalancerTlsCertificateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLoadBalancerTlsCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLoadBalancerTlsCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateLoadBalancerTlsCertificateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLoadBalancerTlsCertificateOutcomeCallable LightsailClient::CreateLoadBalancerTlsCertificateCallable(const CreateLoadBalancerTlsCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLoadBalancerTlsCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLoadBalancerTlsCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::CreateLoadBalancerTlsCertificateAsync(const CreateLoadBalancerTlsCertificateRequest& request, const CreateLoadBalancerTlsCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLoadBalancerTlsCertificate(request), context);
    } );
}

CreateRelationalDatabaseOutcome LightsailClient::CreateRelationalDatabase(const CreateRelationalDatabaseRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRelationalDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRelationalDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateRelationalDatabaseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRelationalDatabaseOutcomeCallable LightsailClient::CreateRelationalDatabaseCallable(const CreateRelationalDatabaseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRelationalDatabaseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRelationalDatabase(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::CreateRelationalDatabaseAsync(const CreateRelationalDatabaseRequest& request, const CreateRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateRelationalDatabase(request), context);
    } );
}

CreateRelationalDatabaseFromSnapshotOutcome LightsailClient::CreateRelationalDatabaseFromSnapshot(const CreateRelationalDatabaseFromSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRelationalDatabaseFromSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRelationalDatabaseFromSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateRelationalDatabaseFromSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRelationalDatabaseFromSnapshotOutcomeCallable LightsailClient::CreateRelationalDatabaseFromSnapshotCallable(const CreateRelationalDatabaseFromSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRelationalDatabaseFromSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRelationalDatabaseFromSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::CreateRelationalDatabaseFromSnapshotAsync(const CreateRelationalDatabaseFromSnapshotRequest& request, const CreateRelationalDatabaseFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateRelationalDatabaseFromSnapshot(request), context);
    } );
}

CreateRelationalDatabaseSnapshotOutcome LightsailClient::CreateRelationalDatabaseSnapshot(const CreateRelationalDatabaseSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRelationalDatabaseSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateRelationalDatabaseSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateRelationalDatabaseSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRelationalDatabaseSnapshotOutcomeCallable LightsailClient::CreateRelationalDatabaseSnapshotCallable(const CreateRelationalDatabaseSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRelationalDatabaseSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRelationalDatabaseSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::CreateRelationalDatabaseSnapshotAsync(const CreateRelationalDatabaseSnapshotRequest& request, const CreateRelationalDatabaseSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateRelationalDatabaseSnapshot(request), context);
    } );
}

DeleteAlarmOutcome LightsailClient::DeleteAlarm(const DeleteAlarmRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAlarm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAlarm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteAlarmOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAlarmOutcomeCallable LightsailClient::DeleteAlarmCallable(const DeleteAlarmRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAlarmOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAlarm(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::DeleteAlarmAsync(const DeleteAlarmRequest& request, const DeleteAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAlarm(request), context);
    } );
}

DeleteAutoSnapshotOutcome LightsailClient::DeleteAutoSnapshot(const DeleteAutoSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteAutoSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteAutoSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteAutoSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteAutoSnapshotOutcomeCallable LightsailClient::DeleteAutoSnapshotCallable(const DeleteAutoSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAutoSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAutoSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::DeleteAutoSnapshotAsync(const DeleteAutoSnapshotRequest& request, const DeleteAutoSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteAutoSnapshot(request), context);
    } );
}

DeleteBucketOutcome LightsailClient::DeleteBucket(const DeleteBucketRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteBucketOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteBucketOutcomeCallable LightsailClient::DeleteBucketCallable(const DeleteBucketRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBucketOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBucket(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::DeleteBucketAsync(const DeleteBucketRequest& request, const DeleteBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBucket(request), context);
    } );
}

DeleteBucketAccessKeyOutcome LightsailClient::DeleteBucketAccessKey(const DeleteBucketAccessKeyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBucketAccessKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBucketAccessKey, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteBucketAccessKeyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteBucketAccessKeyOutcomeCallable LightsailClient::DeleteBucketAccessKeyCallable(const DeleteBucketAccessKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBucketAccessKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBucketAccessKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::DeleteBucketAccessKeyAsync(const DeleteBucketAccessKeyRequest& request, const DeleteBucketAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteBucketAccessKey(request), context);
    } );
}

DeleteCertificateOutcome LightsailClient::DeleteCertificate(const DeleteCertificateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteCertificateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteCertificateOutcomeCallable LightsailClient::DeleteCertificateCallable(const DeleteCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::DeleteCertificateAsync(const DeleteCertificateRequest& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteCertificate(request), context);
    } );
}

DeleteContactMethodOutcome LightsailClient::DeleteContactMethod(const DeleteContactMethodRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteContactMethod, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteContactMethod, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteContactMethodOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteContactMethodOutcomeCallable LightsailClient::DeleteContactMethodCallable(const DeleteContactMethodRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteContactMethodOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteContactMethod(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::DeleteContactMethodAsync(const DeleteContactMethodRequest& request, const DeleteContactMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteContactMethod(request), context);
    } );
}

DeleteContainerImageOutcome LightsailClient::DeleteContainerImage(const DeleteContainerImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteContainerImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteContainerImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteContainerImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteContainerImageOutcomeCallable LightsailClient::DeleteContainerImageCallable(const DeleteContainerImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteContainerImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteContainerImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::DeleteContainerImageAsync(const DeleteContainerImageRequest& request, const DeleteContainerImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteContainerImage(request), context);
    } );
}

DeleteContainerServiceOutcome LightsailClient::DeleteContainerService(const DeleteContainerServiceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteContainerService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteContainerService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteContainerServiceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteContainerServiceOutcomeCallable LightsailClient::DeleteContainerServiceCallable(const DeleteContainerServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteContainerServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteContainerService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::DeleteContainerServiceAsync(const DeleteContainerServiceRequest& request, const DeleteContainerServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteContainerService(request), context);
    } );
}

DeleteDiskOutcome LightsailClient::DeleteDisk(const DeleteDiskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDisk, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDisk, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDiskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDiskOutcomeCallable LightsailClient::DeleteDiskCallable(const DeleteDiskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDiskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDisk(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::DeleteDiskAsync(const DeleteDiskRequest& request, const DeleteDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDisk(request), context);
    } );
}

DeleteDiskSnapshotOutcome LightsailClient::DeleteDiskSnapshot(const DeleteDiskSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDiskSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDiskSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDiskSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDiskSnapshotOutcomeCallable LightsailClient::DeleteDiskSnapshotCallable(const DeleteDiskSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDiskSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDiskSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::DeleteDiskSnapshotAsync(const DeleteDiskSnapshotRequest& request, const DeleteDiskSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDiskSnapshot(request), context);
    } );
}

DeleteDistributionOutcome LightsailClient::DeleteDistribution(const DeleteDistributionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDistribution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDistribution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDistributionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDistributionOutcomeCallable LightsailClient::DeleteDistributionCallable(const DeleteDistributionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDistributionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDistribution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::DeleteDistributionAsync(const DeleteDistributionRequest& request, const DeleteDistributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDistribution(request), context);
    } );
}

DeleteDomainOutcome LightsailClient::DeleteDomain(const DeleteDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDomainOutcomeCallable LightsailClient::DeleteDomainCallable(const DeleteDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::DeleteDomainAsync(const DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDomain(request), context);
    } );
}

DeleteDomainEntryOutcome LightsailClient::DeleteDomainEntry(const DeleteDomainEntryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDomainEntry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDomainEntry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteDomainEntryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDomainEntryOutcomeCallable LightsailClient::DeleteDomainEntryCallable(const DeleteDomainEntryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDomainEntryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDomainEntry(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::DeleteDomainEntryAsync(const DeleteDomainEntryRequest& request, const DeleteDomainEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDomainEntry(request), context);
    } );
}

DeleteInstanceOutcome LightsailClient::DeleteInstance(const DeleteInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteInstanceOutcomeCallable LightsailClient::DeleteInstanceCallable(const DeleteInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::DeleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteInstance(request), context);
    } );
}

DeleteInstanceSnapshotOutcome LightsailClient::DeleteInstanceSnapshot(const DeleteInstanceSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteInstanceSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteInstanceSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteInstanceSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteInstanceSnapshotOutcomeCallable LightsailClient::DeleteInstanceSnapshotCallable(const DeleteInstanceSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInstanceSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInstanceSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::DeleteInstanceSnapshotAsync(const DeleteInstanceSnapshotRequest& request, const DeleteInstanceSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteInstanceSnapshot(request), context);
    } );
}

DeleteKeyPairOutcome LightsailClient::DeleteKeyPair(const DeleteKeyPairRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteKeyPair, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteKeyPair, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteKeyPairOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteKeyPairOutcomeCallable LightsailClient::DeleteKeyPairCallable(const DeleteKeyPairRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteKeyPairOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteKeyPair(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::DeleteKeyPairAsync(const DeleteKeyPairRequest& request, const DeleteKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteKeyPair(request), context);
    } );
}

DeleteKnownHostKeysOutcome LightsailClient::DeleteKnownHostKeys(const DeleteKnownHostKeysRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteKnownHostKeys, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteKnownHostKeys, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteKnownHostKeysOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteKnownHostKeysOutcomeCallable LightsailClient::DeleteKnownHostKeysCallable(const DeleteKnownHostKeysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteKnownHostKeysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteKnownHostKeys(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::DeleteKnownHostKeysAsync(const DeleteKnownHostKeysRequest& request, const DeleteKnownHostKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteKnownHostKeys(request), context);
    } );
}

DeleteLoadBalancerOutcome LightsailClient::DeleteLoadBalancer(const DeleteLoadBalancerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLoadBalancer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLoadBalancer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteLoadBalancerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteLoadBalancerOutcomeCallable LightsailClient::DeleteLoadBalancerCallable(const DeleteLoadBalancerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLoadBalancerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLoadBalancer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::DeleteLoadBalancerAsync(const DeleteLoadBalancerRequest& request, const DeleteLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteLoadBalancer(request), context);
    } );
}

DeleteLoadBalancerTlsCertificateOutcome LightsailClient::DeleteLoadBalancerTlsCertificate(const DeleteLoadBalancerTlsCertificateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLoadBalancerTlsCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLoadBalancerTlsCertificate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteLoadBalancerTlsCertificateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteLoadBalancerTlsCertificateOutcomeCallable LightsailClient::DeleteLoadBalancerTlsCertificateCallable(const DeleteLoadBalancerTlsCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLoadBalancerTlsCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLoadBalancerTlsCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::DeleteLoadBalancerTlsCertificateAsync(const DeleteLoadBalancerTlsCertificateRequest& request, const DeleteLoadBalancerTlsCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteLoadBalancerTlsCertificate(request), context);
    } );
}

DeleteRelationalDatabaseOutcome LightsailClient::DeleteRelationalDatabase(const DeleteRelationalDatabaseRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRelationalDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRelationalDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteRelationalDatabaseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRelationalDatabaseOutcomeCallable LightsailClient::DeleteRelationalDatabaseCallable(const DeleteRelationalDatabaseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRelationalDatabaseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRelationalDatabase(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::DeleteRelationalDatabaseAsync(const DeleteRelationalDatabaseRequest& request, const DeleteRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteRelationalDatabase(request), context);
    } );
}

DeleteRelationalDatabaseSnapshotOutcome LightsailClient::DeleteRelationalDatabaseSnapshot(const DeleteRelationalDatabaseSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRelationalDatabaseSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRelationalDatabaseSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteRelationalDatabaseSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRelationalDatabaseSnapshotOutcomeCallable LightsailClient::DeleteRelationalDatabaseSnapshotCallable(const DeleteRelationalDatabaseSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRelationalDatabaseSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRelationalDatabaseSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::DeleteRelationalDatabaseSnapshotAsync(const DeleteRelationalDatabaseSnapshotRequest& request, const DeleteRelationalDatabaseSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteRelationalDatabaseSnapshot(request), context);
    } );
}

DetachCertificateFromDistributionOutcome LightsailClient::DetachCertificateFromDistribution(const DetachCertificateFromDistributionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DetachCertificateFromDistribution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DetachCertificateFromDistribution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DetachCertificateFromDistributionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetachCertificateFromDistributionOutcomeCallable LightsailClient::DetachCertificateFromDistributionCallable(const DetachCertificateFromDistributionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachCertificateFromDistributionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachCertificateFromDistribution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::DetachCertificateFromDistributionAsync(const DetachCertificateFromDistributionRequest& request, const DetachCertificateFromDistributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DetachCertificateFromDistribution(request), context);
    } );
}

DetachDiskOutcome LightsailClient::DetachDisk(const DetachDiskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DetachDisk, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DetachDisk, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DetachDiskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetachDiskOutcomeCallable LightsailClient::DetachDiskCallable(const DetachDiskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachDiskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachDisk(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::DetachDiskAsync(const DetachDiskRequest& request, const DetachDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DetachDisk(request), context);
    } );
}

DetachInstancesFromLoadBalancerOutcome LightsailClient::DetachInstancesFromLoadBalancer(const DetachInstancesFromLoadBalancerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DetachInstancesFromLoadBalancer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DetachInstancesFromLoadBalancer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DetachInstancesFromLoadBalancerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetachInstancesFromLoadBalancerOutcomeCallable LightsailClient::DetachInstancesFromLoadBalancerCallable(const DetachInstancesFromLoadBalancerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachInstancesFromLoadBalancerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachInstancesFromLoadBalancer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::DetachInstancesFromLoadBalancerAsync(const DetachInstancesFromLoadBalancerRequest& request, const DetachInstancesFromLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DetachInstancesFromLoadBalancer(request), context);
    } );
}

DetachStaticIpOutcome LightsailClient::DetachStaticIp(const DetachStaticIpRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DetachStaticIp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DetachStaticIp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DetachStaticIpOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetachStaticIpOutcomeCallable LightsailClient::DetachStaticIpCallable(const DetachStaticIpRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachStaticIpOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachStaticIp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::DetachStaticIpAsync(const DetachStaticIpRequest& request, const DetachStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DetachStaticIp(request), context);
    } );
}

DisableAddOnOutcome LightsailClient::DisableAddOn(const DisableAddOnRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableAddOn, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableAddOn, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DisableAddOnOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableAddOnOutcomeCallable LightsailClient::DisableAddOnCallable(const DisableAddOnRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableAddOnOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableAddOn(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::DisableAddOnAsync(const DisableAddOnRequest& request, const DisableAddOnResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisableAddOn(request), context);
    } );
}

DownloadDefaultKeyPairOutcome LightsailClient::DownloadDefaultKeyPair(const DownloadDefaultKeyPairRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DownloadDefaultKeyPair, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DownloadDefaultKeyPair, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DownloadDefaultKeyPairOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DownloadDefaultKeyPairOutcomeCallable LightsailClient::DownloadDefaultKeyPairCallable(const DownloadDefaultKeyPairRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DownloadDefaultKeyPairOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DownloadDefaultKeyPair(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::DownloadDefaultKeyPairAsync(const DownloadDefaultKeyPairRequest& request, const DownloadDefaultKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DownloadDefaultKeyPair(request), context);
    } );
}

EnableAddOnOutcome LightsailClient::EnableAddOn(const EnableAddOnRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableAddOn, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableAddOn, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return EnableAddOnOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableAddOnOutcomeCallable LightsailClient::EnableAddOnCallable(const EnableAddOnRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableAddOnOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableAddOn(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::EnableAddOnAsync(const EnableAddOnRequest& request, const EnableAddOnResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, EnableAddOn(request), context);
    } );
}

ExportSnapshotOutcome LightsailClient::ExportSnapshot(const ExportSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExportSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExportSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ExportSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExportSnapshotOutcomeCallable LightsailClient::ExportSnapshotCallable(const ExportSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExportSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExportSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::ExportSnapshotAsync(const ExportSnapshotRequest& request, const ExportSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ExportSnapshot(request), context);
    } );
}

GetActiveNamesOutcome LightsailClient::GetActiveNames(const GetActiveNamesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetActiveNames, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetActiveNames, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetActiveNamesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetActiveNamesOutcomeCallable LightsailClient::GetActiveNamesCallable(const GetActiveNamesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetActiveNamesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetActiveNames(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetActiveNamesAsync(const GetActiveNamesRequest& request, const GetActiveNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetActiveNames(request), context);
    } );
}

GetAlarmsOutcome LightsailClient::GetAlarms(const GetAlarmsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAlarms, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAlarms, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetAlarmsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAlarmsOutcomeCallable LightsailClient::GetAlarmsCallable(const GetAlarmsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAlarmsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAlarms(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetAlarmsAsync(const GetAlarmsRequest& request, const GetAlarmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAlarms(request), context);
    } );
}

GetAutoSnapshotsOutcome LightsailClient::GetAutoSnapshots(const GetAutoSnapshotsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAutoSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAutoSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetAutoSnapshotsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAutoSnapshotsOutcomeCallable LightsailClient::GetAutoSnapshotsCallable(const GetAutoSnapshotsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAutoSnapshotsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAutoSnapshots(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetAutoSnapshotsAsync(const GetAutoSnapshotsRequest& request, const GetAutoSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAutoSnapshots(request), context);
    } );
}

GetBlueprintsOutcome LightsailClient::GetBlueprints(const GetBlueprintsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBlueprints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBlueprints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetBlueprintsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBlueprintsOutcomeCallable LightsailClient::GetBlueprintsCallable(const GetBlueprintsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBlueprintsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBlueprints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetBlueprintsAsync(const GetBlueprintsRequest& request, const GetBlueprintsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBlueprints(request), context);
    } );
}

GetBucketAccessKeysOutcome LightsailClient::GetBucketAccessKeys(const GetBucketAccessKeysRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketAccessKeys, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketAccessKeys, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetBucketAccessKeysOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBucketAccessKeysOutcomeCallable LightsailClient::GetBucketAccessKeysCallable(const GetBucketAccessKeysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketAccessKeysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketAccessKeys(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetBucketAccessKeysAsync(const GetBucketAccessKeysRequest& request, const GetBucketAccessKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketAccessKeys(request), context);
    } );
}

GetBucketBundlesOutcome LightsailClient::GetBucketBundles(const GetBucketBundlesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketBundles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketBundles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetBucketBundlesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBucketBundlesOutcomeCallable LightsailClient::GetBucketBundlesCallable(const GetBucketBundlesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketBundlesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketBundles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetBucketBundlesAsync(const GetBucketBundlesRequest& request, const GetBucketBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketBundles(request), context);
    } );
}

GetBucketMetricDataOutcome LightsailClient::GetBucketMetricData(const GetBucketMetricDataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBucketMetricData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBucketMetricData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetBucketMetricDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBucketMetricDataOutcomeCallable LightsailClient::GetBucketMetricDataCallable(const GetBucketMetricDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketMetricDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketMetricData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetBucketMetricDataAsync(const GetBucketMetricDataRequest& request, const GetBucketMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBucketMetricData(request), context);
    } );
}

GetBucketsOutcome LightsailClient::GetBuckets(const GetBucketsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBuckets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBuckets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetBucketsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBucketsOutcomeCallable LightsailClient::GetBucketsCallable(const GetBucketsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBuckets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetBucketsAsync(const GetBucketsRequest& request, const GetBucketsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBuckets(request), context);
    } );
}

GetBundlesOutcome LightsailClient::GetBundles(const GetBundlesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBundles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBundles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetBundlesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBundlesOutcomeCallable LightsailClient::GetBundlesCallable(const GetBundlesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBundlesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBundles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetBundlesAsync(const GetBundlesRequest& request, const GetBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetBundles(request), context);
    } );
}

GetCertificatesOutcome LightsailClient::GetCertificates(const GetCertificatesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCertificates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCertificates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetCertificatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCertificatesOutcomeCallable LightsailClient::GetCertificatesCallable(const GetCertificatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCertificatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCertificates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetCertificatesAsync(const GetCertificatesRequest& request, const GetCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetCertificates(request), context);
    } );
}

GetCloudFormationStackRecordsOutcome LightsailClient::GetCloudFormationStackRecords(const GetCloudFormationStackRecordsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCloudFormationStackRecords, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCloudFormationStackRecords, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetCloudFormationStackRecordsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetCloudFormationStackRecordsOutcomeCallable LightsailClient::GetCloudFormationStackRecordsCallable(const GetCloudFormationStackRecordsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCloudFormationStackRecordsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCloudFormationStackRecords(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetCloudFormationStackRecordsAsync(const GetCloudFormationStackRecordsRequest& request, const GetCloudFormationStackRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetCloudFormationStackRecords(request), context);
    } );
}

GetContactMethodsOutcome LightsailClient::GetContactMethods(const GetContactMethodsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetContactMethods, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetContactMethods, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetContactMethodsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetContactMethodsOutcomeCallable LightsailClient::GetContactMethodsCallable(const GetContactMethodsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetContactMethodsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetContactMethods(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetContactMethodsAsync(const GetContactMethodsRequest& request, const GetContactMethodsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetContactMethods(request), context);
    } );
}

GetContainerAPIMetadataOutcome LightsailClient::GetContainerAPIMetadata(const GetContainerAPIMetadataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetContainerAPIMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetContainerAPIMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetContainerAPIMetadataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetContainerAPIMetadataOutcomeCallable LightsailClient::GetContainerAPIMetadataCallable(const GetContainerAPIMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetContainerAPIMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetContainerAPIMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetContainerAPIMetadataAsync(const GetContainerAPIMetadataRequest& request, const GetContainerAPIMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetContainerAPIMetadata(request), context);
    } );
}

GetContainerImagesOutcome LightsailClient::GetContainerImages(const GetContainerImagesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetContainerImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetContainerImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetContainerImagesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetContainerImagesOutcomeCallable LightsailClient::GetContainerImagesCallable(const GetContainerImagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetContainerImagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetContainerImages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetContainerImagesAsync(const GetContainerImagesRequest& request, const GetContainerImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetContainerImages(request), context);
    } );
}

GetContainerLogOutcome LightsailClient::GetContainerLog(const GetContainerLogRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetContainerLog, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetContainerLog, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetContainerLogOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetContainerLogOutcomeCallable LightsailClient::GetContainerLogCallable(const GetContainerLogRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetContainerLogOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetContainerLog(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetContainerLogAsync(const GetContainerLogRequest& request, const GetContainerLogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetContainerLog(request), context);
    } );
}

GetContainerServiceDeploymentsOutcome LightsailClient::GetContainerServiceDeployments(const GetContainerServiceDeploymentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetContainerServiceDeployments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetContainerServiceDeployments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetContainerServiceDeploymentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetContainerServiceDeploymentsOutcomeCallable LightsailClient::GetContainerServiceDeploymentsCallable(const GetContainerServiceDeploymentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetContainerServiceDeploymentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetContainerServiceDeployments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetContainerServiceDeploymentsAsync(const GetContainerServiceDeploymentsRequest& request, const GetContainerServiceDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetContainerServiceDeployments(request), context);
    } );
}

GetContainerServiceMetricDataOutcome LightsailClient::GetContainerServiceMetricData(const GetContainerServiceMetricDataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetContainerServiceMetricData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetContainerServiceMetricData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetContainerServiceMetricDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetContainerServiceMetricDataOutcomeCallable LightsailClient::GetContainerServiceMetricDataCallable(const GetContainerServiceMetricDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetContainerServiceMetricDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetContainerServiceMetricData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetContainerServiceMetricDataAsync(const GetContainerServiceMetricDataRequest& request, const GetContainerServiceMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetContainerServiceMetricData(request), context);
    } );
}

GetContainerServicePowersOutcome LightsailClient::GetContainerServicePowers(const GetContainerServicePowersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetContainerServicePowers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetContainerServicePowers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetContainerServicePowersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetContainerServicePowersOutcomeCallable LightsailClient::GetContainerServicePowersCallable(const GetContainerServicePowersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetContainerServicePowersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetContainerServicePowers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetContainerServicePowersAsync(const GetContainerServicePowersRequest& request, const GetContainerServicePowersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetContainerServicePowers(request), context);
    } );
}

GetContainerServicesOutcome LightsailClient::GetContainerServices(const GetContainerServicesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetContainerServices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetContainerServices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetContainerServicesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetContainerServicesOutcomeCallable LightsailClient::GetContainerServicesCallable(const GetContainerServicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetContainerServicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetContainerServices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetContainerServicesAsync(const GetContainerServicesRequest& request, const GetContainerServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetContainerServices(request), context);
    } );
}

GetDiskOutcome LightsailClient::GetDisk(const GetDiskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDisk, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDisk, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDiskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDiskOutcomeCallable LightsailClient::GetDiskCallable(const GetDiskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDiskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDisk(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetDiskAsync(const GetDiskRequest& request, const GetDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDisk(request), context);
    } );
}

GetDiskSnapshotOutcome LightsailClient::GetDiskSnapshot(const GetDiskSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDiskSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDiskSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDiskSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDiskSnapshotOutcomeCallable LightsailClient::GetDiskSnapshotCallable(const GetDiskSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDiskSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDiskSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetDiskSnapshotAsync(const GetDiskSnapshotRequest& request, const GetDiskSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDiskSnapshot(request), context);
    } );
}

GetDiskSnapshotsOutcome LightsailClient::GetDiskSnapshots(const GetDiskSnapshotsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDiskSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDiskSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDiskSnapshotsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDiskSnapshotsOutcomeCallable LightsailClient::GetDiskSnapshotsCallable(const GetDiskSnapshotsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDiskSnapshotsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDiskSnapshots(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetDiskSnapshotsAsync(const GetDiskSnapshotsRequest& request, const GetDiskSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDiskSnapshots(request), context);
    } );
}

GetDisksOutcome LightsailClient::GetDisks(const GetDisksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDisks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDisks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDisksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDisksOutcomeCallable LightsailClient::GetDisksCallable(const GetDisksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDisksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDisks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetDisksAsync(const GetDisksRequest& request, const GetDisksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDisks(request), context);
    } );
}

GetDistributionBundlesOutcome LightsailClient::GetDistributionBundles(const GetDistributionBundlesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDistributionBundles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDistributionBundles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDistributionBundlesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDistributionBundlesOutcomeCallable LightsailClient::GetDistributionBundlesCallable(const GetDistributionBundlesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDistributionBundlesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDistributionBundles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetDistributionBundlesAsync(const GetDistributionBundlesRequest& request, const GetDistributionBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDistributionBundles(request), context);
    } );
}

GetDistributionLatestCacheResetOutcome LightsailClient::GetDistributionLatestCacheReset(const GetDistributionLatestCacheResetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDistributionLatestCacheReset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDistributionLatestCacheReset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDistributionLatestCacheResetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDistributionLatestCacheResetOutcomeCallable LightsailClient::GetDistributionLatestCacheResetCallable(const GetDistributionLatestCacheResetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDistributionLatestCacheResetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDistributionLatestCacheReset(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetDistributionLatestCacheResetAsync(const GetDistributionLatestCacheResetRequest& request, const GetDistributionLatestCacheResetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDistributionLatestCacheReset(request), context);
    } );
}

GetDistributionMetricDataOutcome LightsailClient::GetDistributionMetricData(const GetDistributionMetricDataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDistributionMetricData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDistributionMetricData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDistributionMetricDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDistributionMetricDataOutcomeCallable LightsailClient::GetDistributionMetricDataCallable(const GetDistributionMetricDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDistributionMetricDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDistributionMetricData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetDistributionMetricDataAsync(const GetDistributionMetricDataRequest& request, const GetDistributionMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDistributionMetricData(request), context);
    } );
}

GetDistributionsOutcome LightsailClient::GetDistributions(const GetDistributionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDistributions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDistributions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDistributionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDistributionsOutcomeCallable LightsailClient::GetDistributionsCallable(const GetDistributionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDistributionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDistributions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetDistributionsAsync(const GetDistributionsRequest& request, const GetDistributionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDistributions(request), context);
    } );
}

GetDomainOutcome LightsailClient::GetDomain(const GetDomainRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDomain, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDomainOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDomainOutcomeCallable LightsailClient::GetDomainCallable(const GetDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetDomainAsync(const GetDomainRequest& request, const GetDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDomain(request), context);
    } );
}

GetDomainsOutcome LightsailClient::GetDomains(const GetDomainsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDomains, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDomains, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDomainsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDomainsOutcomeCallable LightsailClient::GetDomainsCallable(const GetDomainsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDomainsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDomains(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetDomainsAsync(const GetDomainsRequest& request, const GetDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDomains(request), context);
    } );
}

GetExportSnapshotRecordsOutcome LightsailClient::GetExportSnapshotRecords(const GetExportSnapshotRecordsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetExportSnapshotRecords, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetExportSnapshotRecords, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetExportSnapshotRecordsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetExportSnapshotRecordsOutcomeCallable LightsailClient::GetExportSnapshotRecordsCallable(const GetExportSnapshotRecordsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetExportSnapshotRecordsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetExportSnapshotRecords(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetExportSnapshotRecordsAsync(const GetExportSnapshotRecordsRequest& request, const GetExportSnapshotRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetExportSnapshotRecords(request), context);
    } );
}

GetInstanceOutcome LightsailClient::GetInstance(const GetInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInstanceOutcomeCallable LightsailClient::GetInstanceCallable(const GetInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetInstanceAsync(const GetInstanceRequest& request, const GetInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetInstance(request), context);
    } );
}

GetInstanceAccessDetailsOutcome LightsailClient::GetInstanceAccessDetails(const GetInstanceAccessDetailsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInstanceAccessDetails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInstanceAccessDetails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetInstanceAccessDetailsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInstanceAccessDetailsOutcomeCallable LightsailClient::GetInstanceAccessDetailsCallable(const GetInstanceAccessDetailsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInstanceAccessDetailsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInstanceAccessDetails(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetInstanceAccessDetailsAsync(const GetInstanceAccessDetailsRequest& request, const GetInstanceAccessDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetInstanceAccessDetails(request), context);
    } );
}

GetInstanceMetricDataOutcome LightsailClient::GetInstanceMetricData(const GetInstanceMetricDataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInstanceMetricData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInstanceMetricData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetInstanceMetricDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInstanceMetricDataOutcomeCallable LightsailClient::GetInstanceMetricDataCallable(const GetInstanceMetricDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInstanceMetricDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInstanceMetricData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetInstanceMetricDataAsync(const GetInstanceMetricDataRequest& request, const GetInstanceMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetInstanceMetricData(request), context);
    } );
}

GetInstancePortStatesOutcome LightsailClient::GetInstancePortStates(const GetInstancePortStatesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInstancePortStates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInstancePortStates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetInstancePortStatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInstancePortStatesOutcomeCallable LightsailClient::GetInstancePortStatesCallable(const GetInstancePortStatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInstancePortStatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInstancePortStates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetInstancePortStatesAsync(const GetInstancePortStatesRequest& request, const GetInstancePortStatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetInstancePortStates(request), context);
    } );
}

GetInstanceSnapshotOutcome LightsailClient::GetInstanceSnapshot(const GetInstanceSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInstanceSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInstanceSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetInstanceSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInstanceSnapshotOutcomeCallable LightsailClient::GetInstanceSnapshotCallable(const GetInstanceSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInstanceSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInstanceSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetInstanceSnapshotAsync(const GetInstanceSnapshotRequest& request, const GetInstanceSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetInstanceSnapshot(request), context);
    } );
}

GetInstanceSnapshotsOutcome LightsailClient::GetInstanceSnapshots(const GetInstanceSnapshotsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInstanceSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInstanceSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetInstanceSnapshotsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInstanceSnapshotsOutcomeCallable LightsailClient::GetInstanceSnapshotsCallable(const GetInstanceSnapshotsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInstanceSnapshotsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInstanceSnapshots(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetInstanceSnapshotsAsync(const GetInstanceSnapshotsRequest& request, const GetInstanceSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetInstanceSnapshots(request), context);
    } );
}

GetInstanceStateOutcome LightsailClient::GetInstanceState(const GetInstanceStateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInstanceState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInstanceState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetInstanceStateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInstanceStateOutcomeCallable LightsailClient::GetInstanceStateCallable(const GetInstanceStateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInstanceStateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInstanceState(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetInstanceStateAsync(const GetInstanceStateRequest& request, const GetInstanceStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetInstanceState(request), context);
    } );
}

GetInstancesOutcome LightsailClient::GetInstances(const GetInstancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInstances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetInstancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInstancesOutcomeCallable LightsailClient::GetInstancesCallable(const GetInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetInstancesAsync(const GetInstancesRequest& request, const GetInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetInstances(request), context);
    } );
}

GetKeyPairOutcome LightsailClient::GetKeyPair(const GetKeyPairRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetKeyPair, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetKeyPair, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetKeyPairOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetKeyPairOutcomeCallable LightsailClient::GetKeyPairCallable(const GetKeyPairRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetKeyPairOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetKeyPair(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetKeyPairAsync(const GetKeyPairRequest& request, const GetKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetKeyPair(request), context);
    } );
}

GetKeyPairsOutcome LightsailClient::GetKeyPairs(const GetKeyPairsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetKeyPairs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetKeyPairs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetKeyPairsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetKeyPairsOutcomeCallable LightsailClient::GetKeyPairsCallable(const GetKeyPairsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetKeyPairsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetKeyPairs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetKeyPairsAsync(const GetKeyPairsRequest& request, const GetKeyPairsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetKeyPairs(request), context);
    } );
}

GetLoadBalancerOutcome LightsailClient::GetLoadBalancer(const GetLoadBalancerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLoadBalancer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLoadBalancer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetLoadBalancerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLoadBalancerOutcomeCallable LightsailClient::GetLoadBalancerCallable(const GetLoadBalancerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLoadBalancerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLoadBalancer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetLoadBalancerAsync(const GetLoadBalancerRequest& request, const GetLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLoadBalancer(request), context);
    } );
}

GetLoadBalancerMetricDataOutcome LightsailClient::GetLoadBalancerMetricData(const GetLoadBalancerMetricDataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLoadBalancerMetricData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLoadBalancerMetricData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetLoadBalancerMetricDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLoadBalancerMetricDataOutcomeCallable LightsailClient::GetLoadBalancerMetricDataCallable(const GetLoadBalancerMetricDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLoadBalancerMetricDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLoadBalancerMetricData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetLoadBalancerMetricDataAsync(const GetLoadBalancerMetricDataRequest& request, const GetLoadBalancerMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLoadBalancerMetricData(request), context);
    } );
}

GetLoadBalancerTlsCertificatesOutcome LightsailClient::GetLoadBalancerTlsCertificates(const GetLoadBalancerTlsCertificatesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLoadBalancerTlsCertificates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLoadBalancerTlsCertificates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetLoadBalancerTlsCertificatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLoadBalancerTlsCertificatesOutcomeCallable LightsailClient::GetLoadBalancerTlsCertificatesCallable(const GetLoadBalancerTlsCertificatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLoadBalancerTlsCertificatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLoadBalancerTlsCertificates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetLoadBalancerTlsCertificatesAsync(const GetLoadBalancerTlsCertificatesRequest& request, const GetLoadBalancerTlsCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLoadBalancerTlsCertificates(request), context);
    } );
}

GetLoadBalancerTlsPoliciesOutcome LightsailClient::GetLoadBalancerTlsPolicies(const GetLoadBalancerTlsPoliciesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLoadBalancerTlsPolicies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLoadBalancerTlsPolicies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetLoadBalancerTlsPoliciesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLoadBalancerTlsPoliciesOutcomeCallable LightsailClient::GetLoadBalancerTlsPoliciesCallable(const GetLoadBalancerTlsPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLoadBalancerTlsPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLoadBalancerTlsPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetLoadBalancerTlsPoliciesAsync(const GetLoadBalancerTlsPoliciesRequest& request, const GetLoadBalancerTlsPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLoadBalancerTlsPolicies(request), context);
    } );
}

GetLoadBalancersOutcome LightsailClient::GetLoadBalancers(const GetLoadBalancersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLoadBalancers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLoadBalancers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetLoadBalancersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLoadBalancersOutcomeCallable LightsailClient::GetLoadBalancersCallable(const GetLoadBalancersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLoadBalancersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLoadBalancers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetLoadBalancersAsync(const GetLoadBalancersRequest& request, const GetLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLoadBalancers(request), context);
    } );
}

GetOperationOutcome LightsailClient::GetOperation(const GetOperationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetOperation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetOperationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetOperationOutcomeCallable LightsailClient::GetOperationCallable(const GetOperationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOperationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOperation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetOperationAsync(const GetOperationRequest& request, const GetOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetOperation(request), context);
    } );
}

GetOperationsOutcome LightsailClient::GetOperations(const GetOperationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetOperations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetOperations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetOperationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetOperationsOutcomeCallable LightsailClient::GetOperationsCallable(const GetOperationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOperationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOperations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetOperationsAsync(const GetOperationsRequest& request, const GetOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetOperations(request), context);
    } );
}

GetOperationsForResourceOutcome LightsailClient::GetOperationsForResource(const GetOperationsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetOperationsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetOperationsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetOperationsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetOperationsForResourceOutcomeCallable LightsailClient::GetOperationsForResourceCallable(const GetOperationsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOperationsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOperationsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetOperationsForResourceAsync(const GetOperationsForResourceRequest& request, const GetOperationsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetOperationsForResource(request), context);
    } );
}

GetRegionsOutcome LightsailClient::GetRegions(const GetRegionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRegions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRegions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRegionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRegionsOutcomeCallable LightsailClient::GetRegionsCallable(const GetRegionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRegionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRegions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetRegionsAsync(const GetRegionsRequest& request, const GetRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRegions(request), context);
    } );
}

GetRelationalDatabaseOutcome LightsailClient::GetRelationalDatabase(const GetRelationalDatabaseRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRelationalDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRelationalDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRelationalDatabaseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRelationalDatabaseOutcomeCallable LightsailClient::GetRelationalDatabaseCallable(const GetRelationalDatabaseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRelationalDatabaseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRelationalDatabase(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetRelationalDatabaseAsync(const GetRelationalDatabaseRequest& request, const GetRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRelationalDatabase(request), context);
    } );
}

GetRelationalDatabaseBlueprintsOutcome LightsailClient::GetRelationalDatabaseBlueprints(const GetRelationalDatabaseBlueprintsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRelationalDatabaseBlueprints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRelationalDatabaseBlueprints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRelationalDatabaseBlueprintsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRelationalDatabaseBlueprintsOutcomeCallable LightsailClient::GetRelationalDatabaseBlueprintsCallable(const GetRelationalDatabaseBlueprintsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRelationalDatabaseBlueprintsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRelationalDatabaseBlueprints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetRelationalDatabaseBlueprintsAsync(const GetRelationalDatabaseBlueprintsRequest& request, const GetRelationalDatabaseBlueprintsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRelationalDatabaseBlueprints(request), context);
    } );
}

GetRelationalDatabaseBundlesOutcome LightsailClient::GetRelationalDatabaseBundles(const GetRelationalDatabaseBundlesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRelationalDatabaseBundles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRelationalDatabaseBundles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRelationalDatabaseBundlesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRelationalDatabaseBundlesOutcomeCallable LightsailClient::GetRelationalDatabaseBundlesCallable(const GetRelationalDatabaseBundlesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRelationalDatabaseBundlesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRelationalDatabaseBundles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetRelationalDatabaseBundlesAsync(const GetRelationalDatabaseBundlesRequest& request, const GetRelationalDatabaseBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRelationalDatabaseBundles(request), context);
    } );
}

GetRelationalDatabaseEventsOutcome LightsailClient::GetRelationalDatabaseEvents(const GetRelationalDatabaseEventsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRelationalDatabaseEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRelationalDatabaseEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRelationalDatabaseEventsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRelationalDatabaseEventsOutcomeCallable LightsailClient::GetRelationalDatabaseEventsCallable(const GetRelationalDatabaseEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRelationalDatabaseEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRelationalDatabaseEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetRelationalDatabaseEventsAsync(const GetRelationalDatabaseEventsRequest& request, const GetRelationalDatabaseEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRelationalDatabaseEvents(request), context);
    } );
}

GetRelationalDatabaseLogEventsOutcome LightsailClient::GetRelationalDatabaseLogEvents(const GetRelationalDatabaseLogEventsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRelationalDatabaseLogEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRelationalDatabaseLogEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRelationalDatabaseLogEventsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRelationalDatabaseLogEventsOutcomeCallable LightsailClient::GetRelationalDatabaseLogEventsCallable(const GetRelationalDatabaseLogEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRelationalDatabaseLogEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRelationalDatabaseLogEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetRelationalDatabaseLogEventsAsync(const GetRelationalDatabaseLogEventsRequest& request, const GetRelationalDatabaseLogEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRelationalDatabaseLogEvents(request), context);
    } );
}

GetRelationalDatabaseLogStreamsOutcome LightsailClient::GetRelationalDatabaseLogStreams(const GetRelationalDatabaseLogStreamsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRelationalDatabaseLogStreams, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRelationalDatabaseLogStreams, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRelationalDatabaseLogStreamsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRelationalDatabaseLogStreamsOutcomeCallable LightsailClient::GetRelationalDatabaseLogStreamsCallable(const GetRelationalDatabaseLogStreamsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRelationalDatabaseLogStreamsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRelationalDatabaseLogStreams(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetRelationalDatabaseLogStreamsAsync(const GetRelationalDatabaseLogStreamsRequest& request, const GetRelationalDatabaseLogStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRelationalDatabaseLogStreams(request), context);
    } );
}

GetRelationalDatabaseMasterUserPasswordOutcome LightsailClient::GetRelationalDatabaseMasterUserPassword(const GetRelationalDatabaseMasterUserPasswordRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRelationalDatabaseMasterUserPassword, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRelationalDatabaseMasterUserPassword, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRelationalDatabaseMasterUserPasswordOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRelationalDatabaseMasterUserPasswordOutcomeCallable LightsailClient::GetRelationalDatabaseMasterUserPasswordCallable(const GetRelationalDatabaseMasterUserPasswordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRelationalDatabaseMasterUserPasswordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRelationalDatabaseMasterUserPassword(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetRelationalDatabaseMasterUserPasswordAsync(const GetRelationalDatabaseMasterUserPasswordRequest& request, const GetRelationalDatabaseMasterUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRelationalDatabaseMasterUserPassword(request), context);
    } );
}

GetRelationalDatabaseMetricDataOutcome LightsailClient::GetRelationalDatabaseMetricData(const GetRelationalDatabaseMetricDataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRelationalDatabaseMetricData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRelationalDatabaseMetricData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRelationalDatabaseMetricDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRelationalDatabaseMetricDataOutcomeCallable LightsailClient::GetRelationalDatabaseMetricDataCallable(const GetRelationalDatabaseMetricDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRelationalDatabaseMetricDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRelationalDatabaseMetricData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetRelationalDatabaseMetricDataAsync(const GetRelationalDatabaseMetricDataRequest& request, const GetRelationalDatabaseMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRelationalDatabaseMetricData(request), context);
    } );
}

GetRelationalDatabaseParametersOutcome LightsailClient::GetRelationalDatabaseParameters(const GetRelationalDatabaseParametersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRelationalDatabaseParameters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRelationalDatabaseParameters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRelationalDatabaseParametersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRelationalDatabaseParametersOutcomeCallable LightsailClient::GetRelationalDatabaseParametersCallable(const GetRelationalDatabaseParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRelationalDatabaseParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRelationalDatabaseParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetRelationalDatabaseParametersAsync(const GetRelationalDatabaseParametersRequest& request, const GetRelationalDatabaseParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRelationalDatabaseParameters(request), context);
    } );
}

GetRelationalDatabaseSnapshotOutcome LightsailClient::GetRelationalDatabaseSnapshot(const GetRelationalDatabaseSnapshotRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRelationalDatabaseSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRelationalDatabaseSnapshot, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRelationalDatabaseSnapshotOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRelationalDatabaseSnapshotOutcomeCallable LightsailClient::GetRelationalDatabaseSnapshotCallable(const GetRelationalDatabaseSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRelationalDatabaseSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRelationalDatabaseSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetRelationalDatabaseSnapshotAsync(const GetRelationalDatabaseSnapshotRequest& request, const GetRelationalDatabaseSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRelationalDatabaseSnapshot(request), context);
    } );
}

GetRelationalDatabaseSnapshotsOutcome LightsailClient::GetRelationalDatabaseSnapshots(const GetRelationalDatabaseSnapshotsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRelationalDatabaseSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRelationalDatabaseSnapshots, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRelationalDatabaseSnapshotsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRelationalDatabaseSnapshotsOutcomeCallable LightsailClient::GetRelationalDatabaseSnapshotsCallable(const GetRelationalDatabaseSnapshotsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRelationalDatabaseSnapshotsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRelationalDatabaseSnapshots(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetRelationalDatabaseSnapshotsAsync(const GetRelationalDatabaseSnapshotsRequest& request, const GetRelationalDatabaseSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRelationalDatabaseSnapshots(request), context);
    } );
}

GetRelationalDatabasesOutcome LightsailClient::GetRelationalDatabases(const GetRelationalDatabasesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRelationalDatabases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRelationalDatabases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRelationalDatabasesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRelationalDatabasesOutcomeCallable LightsailClient::GetRelationalDatabasesCallable(const GetRelationalDatabasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRelationalDatabasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRelationalDatabases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetRelationalDatabasesAsync(const GetRelationalDatabasesRequest& request, const GetRelationalDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRelationalDatabases(request), context);
    } );
}

GetStaticIpOutcome LightsailClient::GetStaticIp(const GetStaticIpRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetStaticIp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetStaticIp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetStaticIpOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetStaticIpOutcomeCallable LightsailClient::GetStaticIpCallable(const GetStaticIpRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStaticIpOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStaticIp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetStaticIpAsync(const GetStaticIpRequest& request, const GetStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetStaticIp(request), context);
    } );
}

GetStaticIpsOutcome LightsailClient::GetStaticIps(const GetStaticIpsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetStaticIps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetStaticIps, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetStaticIpsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetStaticIpsOutcomeCallable LightsailClient::GetStaticIpsCallable(const GetStaticIpsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStaticIpsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStaticIps(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::GetStaticIpsAsync(const GetStaticIpsRequest& request, const GetStaticIpsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetStaticIps(request), context);
    } );
}

ImportKeyPairOutcome LightsailClient::ImportKeyPair(const ImportKeyPairRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportKeyPair, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportKeyPair, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ImportKeyPairOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportKeyPairOutcomeCallable LightsailClient::ImportKeyPairCallable(const ImportKeyPairRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportKeyPairOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportKeyPair(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::ImportKeyPairAsync(const ImportKeyPairRequest& request, const ImportKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ImportKeyPair(request), context);
    } );
}

IsVpcPeeredOutcome LightsailClient::IsVpcPeered(const IsVpcPeeredRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, IsVpcPeered, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, IsVpcPeered, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return IsVpcPeeredOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

IsVpcPeeredOutcomeCallable LightsailClient::IsVpcPeeredCallable(const IsVpcPeeredRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< IsVpcPeeredOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->IsVpcPeered(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::IsVpcPeeredAsync(const IsVpcPeeredRequest& request, const IsVpcPeeredResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, IsVpcPeered(request), context);
    } );
}

OpenInstancePublicPortsOutcome LightsailClient::OpenInstancePublicPorts(const OpenInstancePublicPortsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, OpenInstancePublicPorts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, OpenInstancePublicPorts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return OpenInstancePublicPortsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

OpenInstancePublicPortsOutcomeCallable LightsailClient::OpenInstancePublicPortsCallable(const OpenInstancePublicPortsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< OpenInstancePublicPortsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->OpenInstancePublicPorts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::OpenInstancePublicPortsAsync(const OpenInstancePublicPortsRequest& request, const OpenInstancePublicPortsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, OpenInstancePublicPorts(request), context);
    } );
}

PeerVpcOutcome LightsailClient::PeerVpc(const PeerVpcRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PeerVpc, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PeerVpc, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PeerVpcOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PeerVpcOutcomeCallable LightsailClient::PeerVpcCallable(const PeerVpcRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PeerVpcOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PeerVpc(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::PeerVpcAsync(const PeerVpcRequest& request, const PeerVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PeerVpc(request), context);
    } );
}

PutAlarmOutcome LightsailClient::PutAlarm(const PutAlarmRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutAlarm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutAlarm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutAlarmOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutAlarmOutcomeCallable LightsailClient::PutAlarmCallable(const PutAlarmRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAlarmOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAlarm(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::PutAlarmAsync(const PutAlarmRequest& request, const PutAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutAlarm(request), context);
    } );
}

PutInstancePublicPortsOutcome LightsailClient::PutInstancePublicPorts(const PutInstancePublicPortsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutInstancePublicPorts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutInstancePublicPorts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutInstancePublicPortsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutInstancePublicPortsOutcomeCallable LightsailClient::PutInstancePublicPortsCallable(const PutInstancePublicPortsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutInstancePublicPortsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutInstancePublicPorts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::PutInstancePublicPortsAsync(const PutInstancePublicPortsRequest& request, const PutInstancePublicPortsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutInstancePublicPorts(request), context);
    } );
}

RebootInstanceOutcome LightsailClient::RebootInstance(const RebootInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RebootInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RebootInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RebootInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RebootInstanceOutcomeCallable LightsailClient::RebootInstanceCallable(const RebootInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RebootInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RebootInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::RebootInstanceAsync(const RebootInstanceRequest& request, const RebootInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RebootInstance(request), context);
    } );
}

RebootRelationalDatabaseOutcome LightsailClient::RebootRelationalDatabase(const RebootRelationalDatabaseRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RebootRelationalDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RebootRelationalDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RebootRelationalDatabaseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RebootRelationalDatabaseOutcomeCallable LightsailClient::RebootRelationalDatabaseCallable(const RebootRelationalDatabaseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RebootRelationalDatabaseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RebootRelationalDatabase(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::RebootRelationalDatabaseAsync(const RebootRelationalDatabaseRequest& request, const RebootRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RebootRelationalDatabase(request), context);
    } );
}

RegisterContainerImageOutcome LightsailClient::RegisterContainerImage(const RegisterContainerImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterContainerImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterContainerImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return RegisterContainerImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterContainerImageOutcomeCallable LightsailClient::RegisterContainerImageCallable(const RegisterContainerImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterContainerImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterContainerImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::RegisterContainerImageAsync(const RegisterContainerImageRequest& request, const RegisterContainerImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RegisterContainerImage(request), context);
    } );
}

ReleaseStaticIpOutcome LightsailClient::ReleaseStaticIp(const ReleaseStaticIpRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReleaseStaticIp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReleaseStaticIp, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ReleaseStaticIpOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ReleaseStaticIpOutcomeCallable LightsailClient::ReleaseStaticIpCallable(const ReleaseStaticIpRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ReleaseStaticIpOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReleaseStaticIp(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::ReleaseStaticIpAsync(const ReleaseStaticIpRequest& request, const ReleaseStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ReleaseStaticIp(request), context);
    } );
}

ResetDistributionCacheOutcome LightsailClient::ResetDistributionCache(const ResetDistributionCacheRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ResetDistributionCache, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ResetDistributionCache, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ResetDistributionCacheOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ResetDistributionCacheOutcomeCallable LightsailClient::ResetDistributionCacheCallable(const ResetDistributionCacheRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetDistributionCacheOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetDistributionCache(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::ResetDistributionCacheAsync(const ResetDistributionCacheRequest& request, const ResetDistributionCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ResetDistributionCache(request), context);
    } );
}

SendContactMethodVerificationOutcome LightsailClient::SendContactMethodVerification(const SendContactMethodVerificationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendContactMethodVerification, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SendContactMethodVerification, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SendContactMethodVerificationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendContactMethodVerificationOutcomeCallable LightsailClient::SendContactMethodVerificationCallable(const SendContactMethodVerificationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendContactMethodVerificationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendContactMethodVerification(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::SendContactMethodVerificationAsync(const SendContactMethodVerificationRequest& request, const SendContactMethodVerificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SendContactMethodVerification(request), context);
    } );
}

SetIpAddressTypeOutcome LightsailClient::SetIpAddressType(const SetIpAddressTypeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetIpAddressType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetIpAddressType, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetIpAddressTypeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetIpAddressTypeOutcomeCallable LightsailClient::SetIpAddressTypeCallable(const SetIpAddressTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetIpAddressTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetIpAddressType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::SetIpAddressTypeAsync(const SetIpAddressTypeRequest& request, const SetIpAddressTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SetIpAddressType(request), context);
    } );
}

SetResourceAccessForBucketOutcome LightsailClient::SetResourceAccessForBucket(const SetResourceAccessForBucketRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SetResourceAccessForBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SetResourceAccessForBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SetResourceAccessForBucketOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SetResourceAccessForBucketOutcomeCallable LightsailClient::SetResourceAccessForBucketCallable(const SetResourceAccessForBucketRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetResourceAccessForBucketOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetResourceAccessForBucket(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::SetResourceAccessForBucketAsync(const SetResourceAccessForBucketRequest& request, const SetResourceAccessForBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SetResourceAccessForBucket(request), context);
    } );
}

StartInstanceOutcome LightsailClient::StartInstance(const StartInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartInstanceOutcomeCallable LightsailClient::StartInstanceCallable(const StartInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::StartInstanceAsync(const StartInstanceRequest& request, const StartInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartInstance(request), context);
    } );
}

StartRelationalDatabaseOutcome LightsailClient::StartRelationalDatabase(const StartRelationalDatabaseRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartRelationalDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartRelationalDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartRelationalDatabaseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartRelationalDatabaseOutcomeCallable LightsailClient::StartRelationalDatabaseCallable(const StartRelationalDatabaseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartRelationalDatabaseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartRelationalDatabase(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::StartRelationalDatabaseAsync(const StartRelationalDatabaseRequest& request, const StartRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartRelationalDatabase(request), context);
    } );
}

StopInstanceOutcome LightsailClient::StopInstance(const StopInstanceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopInstance, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopInstanceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopInstanceOutcomeCallable LightsailClient::StopInstanceCallable(const StopInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::StopInstanceAsync(const StopInstanceRequest& request, const StopInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopInstance(request), context);
    } );
}

StopRelationalDatabaseOutcome LightsailClient::StopRelationalDatabase(const StopRelationalDatabaseRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopRelationalDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopRelationalDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopRelationalDatabaseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopRelationalDatabaseOutcomeCallable LightsailClient::StopRelationalDatabaseCallable(const StopRelationalDatabaseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopRelationalDatabaseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopRelationalDatabase(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::StopRelationalDatabaseAsync(const StopRelationalDatabaseRequest& request, const StopRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopRelationalDatabase(request), context);
    } );
}

TagResourceOutcome LightsailClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable LightsailClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

TestAlarmOutcome LightsailClient::TestAlarm(const TestAlarmRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TestAlarm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TestAlarm, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TestAlarmOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TestAlarmOutcomeCallable LightsailClient::TestAlarmCallable(const TestAlarmRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TestAlarmOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TestAlarm(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::TestAlarmAsync(const TestAlarmRequest& request, const TestAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TestAlarm(request), context);
    } );
}

UnpeerVpcOutcome LightsailClient::UnpeerVpc(const UnpeerVpcRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UnpeerVpc, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UnpeerVpc, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UnpeerVpcOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UnpeerVpcOutcomeCallable LightsailClient::UnpeerVpcCallable(const UnpeerVpcRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UnpeerVpcOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UnpeerVpc(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::UnpeerVpcAsync(const UnpeerVpcRequest& request, const UnpeerVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UnpeerVpc(request), context);
    } );
}

UntagResourceOutcome LightsailClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable LightsailClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateBucketOutcome LightsailClient::UpdateBucket(const UpdateBucketRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBucket, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateBucketOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateBucketOutcomeCallable LightsailClient::UpdateBucketCallable(const UpdateBucketRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBucketOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBucket(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::UpdateBucketAsync(const UpdateBucketRequest& request, const UpdateBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateBucket(request), context);
    } );
}

UpdateBucketBundleOutcome LightsailClient::UpdateBucketBundle(const UpdateBucketBundleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBucketBundle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBucketBundle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateBucketBundleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateBucketBundleOutcomeCallable LightsailClient::UpdateBucketBundleCallable(const UpdateBucketBundleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBucketBundleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBucketBundle(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::UpdateBucketBundleAsync(const UpdateBucketBundleRequest& request, const UpdateBucketBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateBucketBundle(request), context);
    } );
}

UpdateContainerServiceOutcome LightsailClient::UpdateContainerService(const UpdateContainerServiceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateContainerService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateContainerService, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateContainerServiceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateContainerServiceOutcomeCallable LightsailClient::UpdateContainerServiceCallable(const UpdateContainerServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateContainerServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateContainerService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::UpdateContainerServiceAsync(const UpdateContainerServiceRequest& request, const UpdateContainerServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateContainerService(request), context);
    } );
}

UpdateDistributionOutcome LightsailClient::UpdateDistribution(const UpdateDistributionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDistribution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDistribution, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateDistributionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDistributionOutcomeCallable LightsailClient::UpdateDistributionCallable(const UpdateDistributionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDistributionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDistribution(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::UpdateDistributionAsync(const UpdateDistributionRequest& request, const UpdateDistributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDistribution(request), context);
    } );
}

UpdateDistributionBundleOutcome LightsailClient::UpdateDistributionBundle(const UpdateDistributionBundleRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDistributionBundle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDistributionBundle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateDistributionBundleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDistributionBundleOutcomeCallable LightsailClient::UpdateDistributionBundleCallable(const UpdateDistributionBundleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDistributionBundleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDistributionBundle(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::UpdateDistributionBundleAsync(const UpdateDistributionBundleRequest& request, const UpdateDistributionBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDistributionBundle(request), context);
    } );
}

UpdateDomainEntryOutcome LightsailClient::UpdateDomainEntry(const UpdateDomainEntryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDomainEntry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDomainEntry, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateDomainEntryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDomainEntryOutcomeCallable LightsailClient::UpdateDomainEntryCallable(const UpdateDomainEntryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDomainEntryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDomainEntry(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::UpdateDomainEntryAsync(const UpdateDomainEntryRequest& request, const UpdateDomainEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateDomainEntry(request), context);
    } );
}

UpdateInstanceMetadataOptionsOutcome LightsailClient::UpdateInstanceMetadataOptions(const UpdateInstanceMetadataOptionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateInstanceMetadataOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateInstanceMetadataOptions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateInstanceMetadataOptionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateInstanceMetadataOptionsOutcomeCallable LightsailClient::UpdateInstanceMetadataOptionsCallable(const UpdateInstanceMetadataOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateInstanceMetadataOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateInstanceMetadataOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::UpdateInstanceMetadataOptionsAsync(const UpdateInstanceMetadataOptionsRequest& request, const UpdateInstanceMetadataOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateInstanceMetadataOptions(request), context);
    } );
}

UpdateLoadBalancerAttributeOutcome LightsailClient::UpdateLoadBalancerAttribute(const UpdateLoadBalancerAttributeRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateLoadBalancerAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateLoadBalancerAttribute, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateLoadBalancerAttributeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateLoadBalancerAttributeOutcomeCallable LightsailClient::UpdateLoadBalancerAttributeCallable(const UpdateLoadBalancerAttributeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLoadBalancerAttributeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLoadBalancerAttribute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::UpdateLoadBalancerAttributeAsync(const UpdateLoadBalancerAttributeRequest& request, const UpdateLoadBalancerAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateLoadBalancerAttribute(request), context);
    } );
}

UpdateRelationalDatabaseOutcome LightsailClient::UpdateRelationalDatabase(const UpdateRelationalDatabaseRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRelationalDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRelationalDatabase, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateRelationalDatabaseOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRelationalDatabaseOutcomeCallable LightsailClient::UpdateRelationalDatabaseCallable(const UpdateRelationalDatabaseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRelationalDatabaseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRelationalDatabase(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::UpdateRelationalDatabaseAsync(const UpdateRelationalDatabaseRequest& request, const UpdateRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateRelationalDatabase(request), context);
    } );
}

UpdateRelationalDatabaseParametersOutcome LightsailClient::UpdateRelationalDatabaseParameters(const UpdateRelationalDatabaseParametersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRelationalDatabaseParameters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRelationalDatabaseParameters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateRelationalDatabaseParametersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRelationalDatabaseParametersOutcomeCallable LightsailClient::UpdateRelationalDatabaseParametersCallable(const UpdateRelationalDatabaseParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRelationalDatabaseParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRelationalDatabaseParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LightsailClient::UpdateRelationalDatabaseParametersAsync(const UpdateRelationalDatabaseParametersRequest& request, const UpdateRelationalDatabaseParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateRelationalDatabaseParameters(request), context);
    } );
}

