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

#include <aws/lightsail/LightsailClient.h>
#include <aws/lightsail/LightsailEndpoint.h>
#include <aws/lightsail/LightsailErrorMarshaller.h>
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

const char* LightsailClient::SERVICE_NAME = "lightsail";
const char* LightsailClient::ALLOCATION_TAG = "LightsailClient";

LightsailClient::LightsailClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LightsailErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LightsailClient::LightsailClient(const AWSCredentials& credentials,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LightsailErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LightsailClient::LightsailClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LightsailErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LightsailClient::~LightsailClient()
{
}

void LightsailClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Lightsail");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + LightsailEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void LightsailClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

AllocateStaticIpOutcome LightsailClient::AllocateStaticIp(const AllocateStaticIpRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AllocateStaticIpOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return AttachCertificateToDistributionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return AttachDiskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return AttachInstancesToLoadBalancerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return AttachLoadBalancerTlsCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return AttachStaticIpOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return CloseInstancePublicPortsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return CopySnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return CreateBucketOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return CreateBucketAccessKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return CreateCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return CreateCloudFormationStackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return CreateContactMethodOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return CreateContainerServiceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return CreateContainerServiceDeploymentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return CreateContainerServiceRegistryLoginOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return CreateDiskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return CreateDiskFromSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return CreateDiskSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return CreateDistributionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return CreateDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return CreateDomainEntryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return CreateInstanceSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return CreateInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return CreateInstancesFromSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return CreateKeyPairOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return CreateLoadBalancerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return CreateLoadBalancerTlsCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return CreateRelationalDatabaseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return CreateRelationalDatabaseFromSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return CreateRelationalDatabaseSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return DeleteAlarmOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return DeleteAutoSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return DeleteBucketOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return DeleteBucketAccessKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return DeleteCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return DeleteContactMethodOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return DeleteContainerImageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return DeleteContainerServiceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return DeleteDiskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return DeleteDiskSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return DeleteDistributionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return DeleteDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return DeleteDomainEntryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return DeleteInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return DeleteInstanceSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return DeleteKeyPairOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return DeleteKnownHostKeysOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return DeleteLoadBalancerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return DeleteLoadBalancerTlsCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return DeleteRelationalDatabaseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return DeleteRelationalDatabaseSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return DetachCertificateFromDistributionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return DetachDiskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return DetachInstancesFromLoadBalancerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return DetachStaticIpOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return DisableAddOnOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return DownloadDefaultKeyPairOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return EnableAddOnOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return ExportSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetActiveNamesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetAlarmsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetAutoSnapshotsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetBlueprintsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetBucketAccessKeysOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetBucketBundlesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetBucketMetricDataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetBucketsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetBundlesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetCertificatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetCloudFormationStackRecordsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetContactMethodsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetContainerAPIMetadataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetContainerImagesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetContainerLogOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetContainerServiceDeploymentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetContainerServiceMetricDataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetContainerServicePowersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetContainerServicesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetDiskOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetDiskSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetDiskSnapshotsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetDisksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetDistributionBundlesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetDistributionLatestCacheResetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetDistributionMetricDataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetDistributionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetDomainsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetExportSnapshotRecordsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetInstanceAccessDetailsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetInstanceMetricDataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetInstancePortStatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetInstanceSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetInstanceSnapshotsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetInstanceStateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetKeyPairOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetKeyPairsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetLoadBalancerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetLoadBalancerMetricDataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetLoadBalancerTlsCertificatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetLoadBalancerTlsPoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetLoadBalancersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetOperationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetOperationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetOperationsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetRegionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetRelationalDatabaseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetRelationalDatabaseBlueprintsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetRelationalDatabaseBundlesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetRelationalDatabaseEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetRelationalDatabaseLogEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetRelationalDatabaseLogStreamsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetRelationalDatabaseMasterUserPasswordOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetRelationalDatabaseMetricDataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetRelationalDatabaseParametersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetRelationalDatabaseSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetRelationalDatabaseSnapshotsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetRelationalDatabasesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetStaticIpOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return GetStaticIpsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return ImportKeyPairOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return IsVpcPeeredOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return OpenInstancePublicPortsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return PeerVpcOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return PutAlarmOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return PutInstancePublicPortsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return RebootInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return RebootRelationalDatabaseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return RegisterContainerImageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return ReleaseStaticIpOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return ResetDistributionCacheOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return SendContactMethodVerificationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return SetIpAddressTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return SetResourceAccessForBucketOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return StartInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return StartRelationalDatabaseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return StopInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return StopRelationalDatabaseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return TestAlarmOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return UnpeerVpcOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return UpdateBucketOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return UpdateBucketBundleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return UpdateContainerServiceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return UpdateDistributionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return UpdateDistributionBundleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return UpdateDomainEntryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return UpdateInstanceMetadataOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return UpdateLoadBalancerAttributeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return UpdateRelationalDatabaseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  Aws::Http::URI uri = m_uri;
  return UpdateRelationalDatabaseParametersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

