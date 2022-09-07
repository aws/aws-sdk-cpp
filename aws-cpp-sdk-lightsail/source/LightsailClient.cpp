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

static const char* SERVICE_NAME = "lightsail";
static const char* ALLOCATION_TAG = "LightsailClient";

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

void LightsailClientAllocateStaticIpAsyncHelper(LightsailClient const * const clientThis, const AllocateStaticIpRequest& request, const AllocateStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AllocateStaticIp(request), context);
}

void LightsailClient::AllocateStaticIpAsync(const AllocateStaticIpRequest& request, const AllocateStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientAllocateStaticIpAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientAttachCertificateToDistributionAsyncHelper(LightsailClient const * const clientThis, const AttachCertificateToDistributionRequest& request, const AttachCertificateToDistributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AttachCertificateToDistribution(request), context);
}

void LightsailClient::AttachCertificateToDistributionAsync(const AttachCertificateToDistributionRequest& request, const AttachCertificateToDistributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientAttachCertificateToDistributionAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientAttachDiskAsyncHelper(LightsailClient const * const clientThis, const AttachDiskRequest& request, const AttachDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AttachDisk(request), context);
}

void LightsailClient::AttachDiskAsync(const AttachDiskRequest& request, const AttachDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientAttachDiskAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientAttachInstancesToLoadBalancerAsyncHelper(LightsailClient const * const clientThis, const AttachInstancesToLoadBalancerRequest& request, const AttachInstancesToLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AttachInstancesToLoadBalancer(request), context);
}

void LightsailClient::AttachInstancesToLoadBalancerAsync(const AttachInstancesToLoadBalancerRequest& request, const AttachInstancesToLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientAttachInstancesToLoadBalancerAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientAttachLoadBalancerTlsCertificateAsyncHelper(LightsailClient const * const clientThis, const AttachLoadBalancerTlsCertificateRequest& request, const AttachLoadBalancerTlsCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AttachLoadBalancerTlsCertificate(request), context);
}

void LightsailClient::AttachLoadBalancerTlsCertificateAsync(const AttachLoadBalancerTlsCertificateRequest& request, const AttachLoadBalancerTlsCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientAttachLoadBalancerTlsCertificateAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientAttachStaticIpAsyncHelper(LightsailClient const * const clientThis, const AttachStaticIpRequest& request, const AttachStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AttachStaticIp(request), context);
}

void LightsailClient::AttachStaticIpAsync(const AttachStaticIpRequest& request, const AttachStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientAttachStaticIpAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientCloseInstancePublicPortsAsyncHelper(LightsailClient const * const clientThis, const CloseInstancePublicPortsRequest& request, const CloseInstancePublicPortsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CloseInstancePublicPorts(request), context);
}

void LightsailClient::CloseInstancePublicPortsAsync(const CloseInstancePublicPortsRequest& request, const CloseInstancePublicPortsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientCloseInstancePublicPortsAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientCopySnapshotAsyncHelper(LightsailClient const * const clientThis, const CopySnapshotRequest& request, const CopySnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CopySnapshot(request), context);
}

void LightsailClient::CopySnapshotAsync(const CopySnapshotRequest& request, const CopySnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientCopySnapshotAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientCreateBucketAsyncHelper(LightsailClient const * const clientThis, const CreateBucketRequest& request, const CreateBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateBucket(request), context);
}

void LightsailClient::CreateBucketAsync(const CreateBucketRequest& request, const CreateBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientCreateBucketAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientCreateBucketAccessKeyAsyncHelper(LightsailClient const * const clientThis, const CreateBucketAccessKeyRequest& request, const CreateBucketAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateBucketAccessKey(request), context);
}

void LightsailClient::CreateBucketAccessKeyAsync(const CreateBucketAccessKeyRequest& request, const CreateBucketAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientCreateBucketAccessKeyAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientCreateCertificateAsyncHelper(LightsailClient const * const clientThis, const CreateCertificateRequest& request, const CreateCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCertificate(request), context);
}

void LightsailClient::CreateCertificateAsync(const CreateCertificateRequest& request, const CreateCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientCreateCertificateAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientCreateCloudFormationStackAsyncHelper(LightsailClient const * const clientThis, const CreateCloudFormationStackRequest& request, const CreateCloudFormationStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCloudFormationStack(request), context);
}

void LightsailClient::CreateCloudFormationStackAsync(const CreateCloudFormationStackRequest& request, const CreateCloudFormationStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientCreateCloudFormationStackAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientCreateContactMethodAsyncHelper(LightsailClient const * const clientThis, const CreateContactMethodRequest& request, const CreateContactMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateContactMethod(request), context);
}

void LightsailClient::CreateContactMethodAsync(const CreateContactMethodRequest& request, const CreateContactMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientCreateContactMethodAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientCreateContainerServiceAsyncHelper(LightsailClient const * const clientThis, const CreateContainerServiceRequest& request, const CreateContainerServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateContainerService(request), context);
}

void LightsailClient::CreateContainerServiceAsync(const CreateContainerServiceRequest& request, const CreateContainerServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientCreateContainerServiceAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientCreateContainerServiceDeploymentAsyncHelper(LightsailClient const * const clientThis, const CreateContainerServiceDeploymentRequest& request, const CreateContainerServiceDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateContainerServiceDeployment(request), context);
}

void LightsailClient::CreateContainerServiceDeploymentAsync(const CreateContainerServiceDeploymentRequest& request, const CreateContainerServiceDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientCreateContainerServiceDeploymentAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientCreateContainerServiceRegistryLoginAsyncHelper(LightsailClient const * const clientThis, const CreateContainerServiceRegistryLoginRequest& request, const CreateContainerServiceRegistryLoginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateContainerServiceRegistryLogin(request), context);
}

void LightsailClient::CreateContainerServiceRegistryLoginAsync(const CreateContainerServiceRegistryLoginRequest& request, const CreateContainerServiceRegistryLoginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientCreateContainerServiceRegistryLoginAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientCreateDiskAsyncHelper(LightsailClient const * const clientThis, const CreateDiskRequest& request, const CreateDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDisk(request), context);
}

void LightsailClient::CreateDiskAsync(const CreateDiskRequest& request, const CreateDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientCreateDiskAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientCreateDiskFromSnapshotAsyncHelper(LightsailClient const * const clientThis, const CreateDiskFromSnapshotRequest& request, const CreateDiskFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDiskFromSnapshot(request), context);
}

void LightsailClient::CreateDiskFromSnapshotAsync(const CreateDiskFromSnapshotRequest& request, const CreateDiskFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientCreateDiskFromSnapshotAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientCreateDiskSnapshotAsyncHelper(LightsailClient const * const clientThis, const CreateDiskSnapshotRequest& request, const CreateDiskSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDiskSnapshot(request), context);
}

void LightsailClient::CreateDiskSnapshotAsync(const CreateDiskSnapshotRequest& request, const CreateDiskSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientCreateDiskSnapshotAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientCreateDistributionAsyncHelper(LightsailClient const * const clientThis, const CreateDistributionRequest& request, const CreateDistributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDistribution(request), context);
}

void LightsailClient::CreateDistributionAsync(const CreateDistributionRequest& request, const CreateDistributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientCreateDistributionAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientCreateDomainAsyncHelper(LightsailClient const * const clientThis, const CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDomain(request), context);
}

void LightsailClient::CreateDomainAsync(const CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientCreateDomainAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientCreateDomainEntryAsyncHelper(LightsailClient const * const clientThis, const CreateDomainEntryRequest& request, const CreateDomainEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDomainEntry(request), context);
}

void LightsailClient::CreateDomainEntryAsync(const CreateDomainEntryRequest& request, const CreateDomainEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientCreateDomainEntryAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientCreateInstanceSnapshotAsyncHelper(LightsailClient const * const clientThis, const CreateInstanceSnapshotRequest& request, const CreateInstanceSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateInstanceSnapshot(request), context);
}

void LightsailClient::CreateInstanceSnapshotAsync(const CreateInstanceSnapshotRequest& request, const CreateInstanceSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientCreateInstanceSnapshotAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientCreateInstancesAsyncHelper(LightsailClient const * const clientThis, const CreateInstancesRequest& request, const CreateInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateInstances(request), context);
}

void LightsailClient::CreateInstancesAsync(const CreateInstancesRequest& request, const CreateInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientCreateInstancesAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientCreateInstancesFromSnapshotAsyncHelper(LightsailClient const * const clientThis, const CreateInstancesFromSnapshotRequest& request, const CreateInstancesFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateInstancesFromSnapshot(request), context);
}

void LightsailClient::CreateInstancesFromSnapshotAsync(const CreateInstancesFromSnapshotRequest& request, const CreateInstancesFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientCreateInstancesFromSnapshotAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientCreateKeyPairAsyncHelper(LightsailClient const * const clientThis, const CreateKeyPairRequest& request, const CreateKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateKeyPair(request), context);
}

void LightsailClient::CreateKeyPairAsync(const CreateKeyPairRequest& request, const CreateKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientCreateKeyPairAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientCreateLoadBalancerAsyncHelper(LightsailClient const * const clientThis, const CreateLoadBalancerRequest& request, const CreateLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateLoadBalancer(request), context);
}

void LightsailClient::CreateLoadBalancerAsync(const CreateLoadBalancerRequest& request, const CreateLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientCreateLoadBalancerAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientCreateLoadBalancerTlsCertificateAsyncHelper(LightsailClient const * const clientThis, const CreateLoadBalancerTlsCertificateRequest& request, const CreateLoadBalancerTlsCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateLoadBalancerTlsCertificate(request), context);
}

void LightsailClient::CreateLoadBalancerTlsCertificateAsync(const CreateLoadBalancerTlsCertificateRequest& request, const CreateLoadBalancerTlsCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientCreateLoadBalancerTlsCertificateAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientCreateRelationalDatabaseAsyncHelper(LightsailClient const * const clientThis, const CreateRelationalDatabaseRequest& request, const CreateRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateRelationalDatabase(request), context);
}

void LightsailClient::CreateRelationalDatabaseAsync(const CreateRelationalDatabaseRequest& request, const CreateRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientCreateRelationalDatabaseAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientCreateRelationalDatabaseFromSnapshotAsyncHelper(LightsailClient const * const clientThis, const CreateRelationalDatabaseFromSnapshotRequest& request, const CreateRelationalDatabaseFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateRelationalDatabaseFromSnapshot(request), context);
}

void LightsailClient::CreateRelationalDatabaseFromSnapshotAsync(const CreateRelationalDatabaseFromSnapshotRequest& request, const CreateRelationalDatabaseFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientCreateRelationalDatabaseFromSnapshotAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientCreateRelationalDatabaseSnapshotAsyncHelper(LightsailClient const * const clientThis, const CreateRelationalDatabaseSnapshotRequest& request, const CreateRelationalDatabaseSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateRelationalDatabaseSnapshot(request), context);
}

void LightsailClient::CreateRelationalDatabaseSnapshotAsync(const CreateRelationalDatabaseSnapshotRequest& request, const CreateRelationalDatabaseSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientCreateRelationalDatabaseSnapshotAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientDeleteAlarmAsyncHelper(LightsailClient const * const clientThis, const DeleteAlarmRequest& request, const DeleteAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAlarm(request), context);
}

void LightsailClient::DeleteAlarmAsync(const DeleteAlarmRequest& request, const DeleteAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientDeleteAlarmAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientDeleteAutoSnapshotAsyncHelper(LightsailClient const * const clientThis, const DeleteAutoSnapshotRequest& request, const DeleteAutoSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAutoSnapshot(request), context);
}

void LightsailClient::DeleteAutoSnapshotAsync(const DeleteAutoSnapshotRequest& request, const DeleteAutoSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientDeleteAutoSnapshotAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientDeleteBucketAsyncHelper(LightsailClient const * const clientThis, const DeleteBucketRequest& request, const DeleteBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteBucket(request), context);
}

void LightsailClient::DeleteBucketAsync(const DeleteBucketRequest& request, const DeleteBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientDeleteBucketAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientDeleteBucketAccessKeyAsyncHelper(LightsailClient const * const clientThis, const DeleteBucketAccessKeyRequest& request, const DeleteBucketAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteBucketAccessKey(request), context);
}

void LightsailClient::DeleteBucketAccessKeyAsync(const DeleteBucketAccessKeyRequest& request, const DeleteBucketAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientDeleteBucketAccessKeyAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientDeleteCertificateAsyncHelper(LightsailClient const * const clientThis, const DeleteCertificateRequest& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCertificate(request), context);
}

void LightsailClient::DeleteCertificateAsync(const DeleteCertificateRequest& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientDeleteCertificateAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientDeleteContactMethodAsyncHelper(LightsailClient const * const clientThis, const DeleteContactMethodRequest& request, const DeleteContactMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteContactMethod(request), context);
}

void LightsailClient::DeleteContactMethodAsync(const DeleteContactMethodRequest& request, const DeleteContactMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientDeleteContactMethodAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientDeleteContainerImageAsyncHelper(LightsailClient const * const clientThis, const DeleteContainerImageRequest& request, const DeleteContainerImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteContainerImage(request), context);
}

void LightsailClient::DeleteContainerImageAsync(const DeleteContainerImageRequest& request, const DeleteContainerImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientDeleteContainerImageAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientDeleteContainerServiceAsyncHelper(LightsailClient const * const clientThis, const DeleteContainerServiceRequest& request, const DeleteContainerServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteContainerService(request), context);
}

void LightsailClient::DeleteContainerServiceAsync(const DeleteContainerServiceRequest& request, const DeleteContainerServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientDeleteContainerServiceAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientDeleteDiskAsyncHelper(LightsailClient const * const clientThis, const DeleteDiskRequest& request, const DeleteDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDisk(request), context);
}

void LightsailClient::DeleteDiskAsync(const DeleteDiskRequest& request, const DeleteDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientDeleteDiskAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientDeleteDiskSnapshotAsyncHelper(LightsailClient const * const clientThis, const DeleteDiskSnapshotRequest& request, const DeleteDiskSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDiskSnapshot(request), context);
}

void LightsailClient::DeleteDiskSnapshotAsync(const DeleteDiskSnapshotRequest& request, const DeleteDiskSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientDeleteDiskSnapshotAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientDeleteDistributionAsyncHelper(LightsailClient const * const clientThis, const DeleteDistributionRequest& request, const DeleteDistributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDistribution(request), context);
}

void LightsailClient::DeleteDistributionAsync(const DeleteDistributionRequest& request, const DeleteDistributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientDeleteDistributionAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientDeleteDomainAsyncHelper(LightsailClient const * const clientThis, const DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDomain(request), context);
}

void LightsailClient::DeleteDomainAsync(const DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientDeleteDomainAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientDeleteDomainEntryAsyncHelper(LightsailClient const * const clientThis, const DeleteDomainEntryRequest& request, const DeleteDomainEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDomainEntry(request), context);
}

void LightsailClient::DeleteDomainEntryAsync(const DeleteDomainEntryRequest& request, const DeleteDomainEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientDeleteDomainEntryAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientDeleteInstanceAsyncHelper(LightsailClient const * const clientThis, const DeleteInstanceRequest& request, const DeleteInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteInstance(request), context);
}

void LightsailClient::DeleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientDeleteInstanceAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientDeleteInstanceSnapshotAsyncHelper(LightsailClient const * const clientThis, const DeleteInstanceSnapshotRequest& request, const DeleteInstanceSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteInstanceSnapshot(request), context);
}

void LightsailClient::DeleteInstanceSnapshotAsync(const DeleteInstanceSnapshotRequest& request, const DeleteInstanceSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientDeleteInstanceSnapshotAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientDeleteKeyPairAsyncHelper(LightsailClient const * const clientThis, const DeleteKeyPairRequest& request, const DeleteKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteKeyPair(request), context);
}

void LightsailClient::DeleteKeyPairAsync(const DeleteKeyPairRequest& request, const DeleteKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientDeleteKeyPairAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientDeleteKnownHostKeysAsyncHelper(LightsailClient const * const clientThis, const DeleteKnownHostKeysRequest& request, const DeleteKnownHostKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteKnownHostKeys(request), context);
}

void LightsailClient::DeleteKnownHostKeysAsync(const DeleteKnownHostKeysRequest& request, const DeleteKnownHostKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientDeleteKnownHostKeysAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientDeleteLoadBalancerAsyncHelper(LightsailClient const * const clientThis, const DeleteLoadBalancerRequest& request, const DeleteLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteLoadBalancer(request), context);
}

void LightsailClient::DeleteLoadBalancerAsync(const DeleteLoadBalancerRequest& request, const DeleteLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientDeleteLoadBalancerAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientDeleteLoadBalancerTlsCertificateAsyncHelper(LightsailClient const * const clientThis, const DeleteLoadBalancerTlsCertificateRequest& request, const DeleteLoadBalancerTlsCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteLoadBalancerTlsCertificate(request), context);
}

void LightsailClient::DeleteLoadBalancerTlsCertificateAsync(const DeleteLoadBalancerTlsCertificateRequest& request, const DeleteLoadBalancerTlsCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientDeleteLoadBalancerTlsCertificateAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientDeleteRelationalDatabaseAsyncHelper(LightsailClient const * const clientThis, const DeleteRelationalDatabaseRequest& request, const DeleteRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRelationalDatabase(request), context);
}

void LightsailClient::DeleteRelationalDatabaseAsync(const DeleteRelationalDatabaseRequest& request, const DeleteRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientDeleteRelationalDatabaseAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientDeleteRelationalDatabaseSnapshotAsyncHelper(LightsailClient const * const clientThis, const DeleteRelationalDatabaseSnapshotRequest& request, const DeleteRelationalDatabaseSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRelationalDatabaseSnapshot(request), context);
}

void LightsailClient::DeleteRelationalDatabaseSnapshotAsync(const DeleteRelationalDatabaseSnapshotRequest& request, const DeleteRelationalDatabaseSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientDeleteRelationalDatabaseSnapshotAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientDetachCertificateFromDistributionAsyncHelper(LightsailClient const * const clientThis, const DetachCertificateFromDistributionRequest& request, const DetachCertificateFromDistributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DetachCertificateFromDistribution(request), context);
}

void LightsailClient::DetachCertificateFromDistributionAsync(const DetachCertificateFromDistributionRequest& request, const DetachCertificateFromDistributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientDetachCertificateFromDistributionAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientDetachDiskAsyncHelper(LightsailClient const * const clientThis, const DetachDiskRequest& request, const DetachDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DetachDisk(request), context);
}

void LightsailClient::DetachDiskAsync(const DetachDiskRequest& request, const DetachDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientDetachDiskAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientDetachInstancesFromLoadBalancerAsyncHelper(LightsailClient const * const clientThis, const DetachInstancesFromLoadBalancerRequest& request, const DetachInstancesFromLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DetachInstancesFromLoadBalancer(request), context);
}

void LightsailClient::DetachInstancesFromLoadBalancerAsync(const DetachInstancesFromLoadBalancerRequest& request, const DetachInstancesFromLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientDetachInstancesFromLoadBalancerAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientDetachStaticIpAsyncHelper(LightsailClient const * const clientThis, const DetachStaticIpRequest& request, const DetachStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DetachStaticIp(request), context);
}

void LightsailClient::DetachStaticIpAsync(const DetachStaticIpRequest& request, const DetachStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientDetachStaticIpAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientDisableAddOnAsyncHelper(LightsailClient const * const clientThis, const DisableAddOnRequest& request, const DisableAddOnResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisableAddOn(request), context);
}

void LightsailClient::DisableAddOnAsync(const DisableAddOnRequest& request, const DisableAddOnResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientDisableAddOnAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientDownloadDefaultKeyPairAsyncHelper(LightsailClient const * const clientThis, const DownloadDefaultKeyPairRequest& request, const DownloadDefaultKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DownloadDefaultKeyPair(request), context);
}

void LightsailClient::DownloadDefaultKeyPairAsync(const DownloadDefaultKeyPairRequest& request, const DownloadDefaultKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientDownloadDefaultKeyPairAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientEnableAddOnAsyncHelper(LightsailClient const * const clientThis, const EnableAddOnRequest& request, const EnableAddOnResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->EnableAddOn(request), context);
}

void LightsailClient::EnableAddOnAsync(const EnableAddOnRequest& request, const EnableAddOnResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientEnableAddOnAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientExportSnapshotAsyncHelper(LightsailClient const * const clientThis, const ExportSnapshotRequest& request, const ExportSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ExportSnapshot(request), context);
}

void LightsailClient::ExportSnapshotAsync(const ExportSnapshotRequest& request, const ExportSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientExportSnapshotAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetActiveNamesAsyncHelper(LightsailClient const * const clientThis, const GetActiveNamesRequest& request, const GetActiveNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetActiveNames(request), context);
}

void LightsailClient::GetActiveNamesAsync(const GetActiveNamesRequest& request, const GetActiveNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetActiveNamesAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetAlarmsAsyncHelper(LightsailClient const * const clientThis, const GetAlarmsRequest& request, const GetAlarmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAlarms(request), context);
}

void LightsailClient::GetAlarmsAsync(const GetAlarmsRequest& request, const GetAlarmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetAlarmsAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetAutoSnapshotsAsyncHelper(LightsailClient const * const clientThis, const GetAutoSnapshotsRequest& request, const GetAutoSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAutoSnapshots(request), context);
}

void LightsailClient::GetAutoSnapshotsAsync(const GetAutoSnapshotsRequest& request, const GetAutoSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetAutoSnapshotsAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetBlueprintsAsyncHelper(LightsailClient const * const clientThis, const GetBlueprintsRequest& request, const GetBlueprintsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetBlueprints(request), context);
}

void LightsailClient::GetBlueprintsAsync(const GetBlueprintsRequest& request, const GetBlueprintsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetBlueprintsAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetBucketAccessKeysAsyncHelper(LightsailClient const * const clientThis, const GetBucketAccessKeysRequest& request, const GetBucketAccessKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetBucketAccessKeys(request), context);
}

void LightsailClient::GetBucketAccessKeysAsync(const GetBucketAccessKeysRequest& request, const GetBucketAccessKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetBucketAccessKeysAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetBucketBundlesAsyncHelper(LightsailClient const * const clientThis, const GetBucketBundlesRequest& request, const GetBucketBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetBucketBundles(request), context);
}

void LightsailClient::GetBucketBundlesAsync(const GetBucketBundlesRequest& request, const GetBucketBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetBucketBundlesAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetBucketMetricDataAsyncHelper(LightsailClient const * const clientThis, const GetBucketMetricDataRequest& request, const GetBucketMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetBucketMetricData(request), context);
}

void LightsailClient::GetBucketMetricDataAsync(const GetBucketMetricDataRequest& request, const GetBucketMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetBucketMetricDataAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetBucketsAsyncHelper(LightsailClient const * const clientThis, const GetBucketsRequest& request, const GetBucketsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetBuckets(request), context);
}

void LightsailClient::GetBucketsAsync(const GetBucketsRequest& request, const GetBucketsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetBucketsAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetBundlesAsyncHelper(LightsailClient const * const clientThis, const GetBundlesRequest& request, const GetBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetBundles(request), context);
}

void LightsailClient::GetBundlesAsync(const GetBundlesRequest& request, const GetBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetBundlesAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetCertificatesAsyncHelper(LightsailClient const * const clientThis, const GetCertificatesRequest& request, const GetCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCertificates(request), context);
}

void LightsailClient::GetCertificatesAsync(const GetCertificatesRequest& request, const GetCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetCertificatesAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetCloudFormationStackRecordsAsyncHelper(LightsailClient const * const clientThis, const GetCloudFormationStackRecordsRequest& request, const GetCloudFormationStackRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCloudFormationStackRecords(request), context);
}

void LightsailClient::GetCloudFormationStackRecordsAsync(const GetCloudFormationStackRecordsRequest& request, const GetCloudFormationStackRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetCloudFormationStackRecordsAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetContactMethodsAsyncHelper(LightsailClient const * const clientThis, const GetContactMethodsRequest& request, const GetContactMethodsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetContactMethods(request), context);
}

void LightsailClient::GetContactMethodsAsync(const GetContactMethodsRequest& request, const GetContactMethodsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetContactMethodsAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetContainerAPIMetadataAsyncHelper(LightsailClient const * const clientThis, const GetContainerAPIMetadataRequest& request, const GetContainerAPIMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetContainerAPIMetadata(request), context);
}

void LightsailClient::GetContainerAPIMetadataAsync(const GetContainerAPIMetadataRequest& request, const GetContainerAPIMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetContainerAPIMetadataAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetContainerImagesAsyncHelper(LightsailClient const * const clientThis, const GetContainerImagesRequest& request, const GetContainerImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetContainerImages(request), context);
}

void LightsailClient::GetContainerImagesAsync(const GetContainerImagesRequest& request, const GetContainerImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetContainerImagesAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetContainerLogAsyncHelper(LightsailClient const * const clientThis, const GetContainerLogRequest& request, const GetContainerLogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetContainerLog(request), context);
}

void LightsailClient::GetContainerLogAsync(const GetContainerLogRequest& request, const GetContainerLogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetContainerLogAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetContainerServiceDeploymentsAsyncHelper(LightsailClient const * const clientThis, const GetContainerServiceDeploymentsRequest& request, const GetContainerServiceDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetContainerServiceDeployments(request), context);
}

void LightsailClient::GetContainerServiceDeploymentsAsync(const GetContainerServiceDeploymentsRequest& request, const GetContainerServiceDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetContainerServiceDeploymentsAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetContainerServiceMetricDataAsyncHelper(LightsailClient const * const clientThis, const GetContainerServiceMetricDataRequest& request, const GetContainerServiceMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetContainerServiceMetricData(request), context);
}

void LightsailClient::GetContainerServiceMetricDataAsync(const GetContainerServiceMetricDataRequest& request, const GetContainerServiceMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetContainerServiceMetricDataAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetContainerServicePowersAsyncHelper(LightsailClient const * const clientThis, const GetContainerServicePowersRequest& request, const GetContainerServicePowersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetContainerServicePowers(request), context);
}

void LightsailClient::GetContainerServicePowersAsync(const GetContainerServicePowersRequest& request, const GetContainerServicePowersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetContainerServicePowersAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetContainerServicesAsyncHelper(LightsailClient const * const clientThis, const GetContainerServicesRequest& request, const GetContainerServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetContainerServices(request), context);
}

void LightsailClient::GetContainerServicesAsync(const GetContainerServicesRequest& request, const GetContainerServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetContainerServicesAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetDiskAsyncHelper(LightsailClient const * const clientThis, const GetDiskRequest& request, const GetDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDisk(request), context);
}

void LightsailClient::GetDiskAsync(const GetDiskRequest& request, const GetDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetDiskAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetDiskSnapshotAsyncHelper(LightsailClient const * const clientThis, const GetDiskSnapshotRequest& request, const GetDiskSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDiskSnapshot(request), context);
}

void LightsailClient::GetDiskSnapshotAsync(const GetDiskSnapshotRequest& request, const GetDiskSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetDiskSnapshotAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetDiskSnapshotsAsyncHelper(LightsailClient const * const clientThis, const GetDiskSnapshotsRequest& request, const GetDiskSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDiskSnapshots(request), context);
}

void LightsailClient::GetDiskSnapshotsAsync(const GetDiskSnapshotsRequest& request, const GetDiskSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetDiskSnapshotsAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetDisksAsyncHelper(LightsailClient const * const clientThis, const GetDisksRequest& request, const GetDisksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDisks(request), context);
}

void LightsailClient::GetDisksAsync(const GetDisksRequest& request, const GetDisksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetDisksAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetDistributionBundlesAsyncHelper(LightsailClient const * const clientThis, const GetDistributionBundlesRequest& request, const GetDistributionBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDistributionBundles(request), context);
}

void LightsailClient::GetDistributionBundlesAsync(const GetDistributionBundlesRequest& request, const GetDistributionBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetDistributionBundlesAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetDistributionLatestCacheResetAsyncHelper(LightsailClient const * const clientThis, const GetDistributionLatestCacheResetRequest& request, const GetDistributionLatestCacheResetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDistributionLatestCacheReset(request), context);
}

void LightsailClient::GetDistributionLatestCacheResetAsync(const GetDistributionLatestCacheResetRequest& request, const GetDistributionLatestCacheResetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetDistributionLatestCacheResetAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetDistributionMetricDataAsyncHelper(LightsailClient const * const clientThis, const GetDistributionMetricDataRequest& request, const GetDistributionMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDistributionMetricData(request), context);
}

void LightsailClient::GetDistributionMetricDataAsync(const GetDistributionMetricDataRequest& request, const GetDistributionMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetDistributionMetricDataAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetDistributionsAsyncHelper(LightsailClient const * const clientThis, const GetDistributionsRequest& request, const GetDistributionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDistributions(request), context);
}

void LightsailClient::GetDistributionsAsync(const GetDistributionsRequest& request, const GetDistributionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetDistributionsAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetDomainAsyncHelper(LightsailClient const * const clientThis, const GetDomainRequest& request, const GetDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDomain(request), context);
}

void LightsailClient::GetDomainAsync(const GetDomainRequest& request, const GetDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetDomainAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetDomainsAsyncHelper(LightsailClient const * const clientThis, const GetDomainsRequest& request, const GetDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDomains(request), context);
}

void LightsailClient::GetDomainsAsync(const GetDomainsRequest& request, const GetDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetDomainsAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetExportSnapshotRecordsAsyncHelper(LightsailClient const * const clientThis, const GetExportSnapshotRecordsRequest& request, const GetExportSnapshotRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetExportSnapshotRecords(request), context);
}

void LightsailClient::GetExportSnapshotRecordsAsync(const GetExportSnapshotRecordsRequest& request, const GetExportSnapshotRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetExportSnapshotRecordsAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetInstanceAsyncHelper(LightsailClient const * const clientThis, const GetInstanceRequest& request, const GetInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetInstance(request), context);
}

void LightsailClient::GetInstanceAsync(const GetInstanceRequest& request, const GetInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetInstanceAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetInstanceAccessDetailsAsyncHelper(LightsailClient const * const clientThis, const GetInstanceAccessDetailsRequest& request, const GetInstanceAccessDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetInstanceAccessDetails(request), context);
}

void LightsailClient::GetInstanceAccessDetailsAsync(const GetInstanceAccessDetailsRequest& request, const GetInstanceAccessDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetInstanceAccessDetailsAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetInstanceMetricDataAsyncHelper(LightsailClient const * const clientThis, const GetInstanceMetricDataRequest& request, const GetInstanceMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetInstanceMetricData(request), context);
}

void LightsailClient::GetInstanceMetricDataAsync(const GetInstanceMetricDataRequest& request, const GetInstanceMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetInstanceMetricDataAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetInstancePortStatesAsyncHelper(LightsailClient const * const clientThis, const GetInstancePortStatesRequest& request, const GetInstancePortStatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetInstancePortStates(request), context);
}

void LightsailClient::GetInstancePortStatesAsync(const GetInstancePortStatesRequest& request, const GetInstancePortStatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetInstancePortStatesAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetInstanceSnapshotAsyncHelper(LightsailClient const * const clientThis, const GetInstanceSnapshotRequest& request, const GetInstanceSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetInstanceSnapshot(request), context);
}

void LightsailClient::GetInstanceSnapshotAsync(const GetInstanceSnapshotRequest& request, const GetInstanceSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetInstanceSnapshotAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetInstanceSnapshotsAsyncHelper(LightsailClient const * const clientThis, const GetInstanceSnapshotsRequest& request, const GetInstanceSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetInstanceSnapshots(request), context);
}

void LightsailClient::GetInstanceSnapshotsAsync(const GetInstanceSnapshotsRequest& request, const GetInstanceSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetInstanceSnapshotsAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetInstanceStateAsyncHelper(LightsailClient const * const clientThis, const GetInstanceStateRequest& request, const GetInstanceStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetInstanceState(request), context);
}

void LightsailClient::GetInstanceStateAsync(const GetInstanceStateRequest& request, const GetInstanceStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetInstanceStateAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetInstancesAsyncHelper(LightsailClient const * const clientThis, const GetInstancesRequest& request, const GetInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetInstances(request), context);
}

void LightsailClient::GetInstancesAsync(const GetInstancesRequest& request, const GetInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetInstancesAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetKeyPairAsyncHelper(LightsailClient const * const clientThis, const GetKeyPairRequest& request, const GetKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetKeyPair(request), context);
}

void LightsailClient::GetKeyPairAsync(const GetKeyPairRequest& request, const GetKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetKeyPairAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetKeyPairsAsyncHelper(LightsailClient const * const clientThis, const GetKeyPairsRequest& request, const GetKeyPairsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetKeyPairs(request), context);
}

void LightsailClient::GetKeyPairsAsync(const GetKeyPairsRequest& request, const GetKeyPairsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetKeyPairsAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetLoadBalancerAsyncHelper(LightsailClient const * const clientThis, const GetLoadBalancerRequest& request, const GetLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetLoadBalancer(request), context);
}

void LightsailClient::GetLoadBalancerAsync(const GetLoadBalancerRequest& request, const GetLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetLoadBalancerAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetLoadBalancerMetricDataAsyncHelper(LightsailClient const * const clientThis, const GetLoadBalancerMetricDataRequest& request, const GetLoadBalancerMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetLoadBalancerMetricData(request), context);
}

void LightsailClient::GetLoadBalancerMetricDataAsync(const GetLoadBalancerMetricDataRequest& request, const GetLoadBalancerMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetLoadBalancerMetricDataAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetLoadBalancerTlsCertificatesAsyncHelper(LightsailClient const * const clientThis, const GetLoadBalancerTlsCertificatesRequest& request, const GetLoadBalancerTlsCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetLoadBalancerTlsCertificates(request), context);
}

void LightsailClient::GetLoadBalancerTlsCertificatesAsync(const GetLoadBalancerTlsCertificatesRequest& request, const GetLoadBalancerTlsCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetLoadBalancerTlsCertificatesAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetLoadBalancerTlsPoliciesAsyncHelper(LightsailClient const * const clientThis, const GetLoadBalancerTlsPoliciesRequest& request, const GetLoadBalancerTlsPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetLoadBalancerTlsPolicies(request), context);
}

void LightsailClient::GetLoadBalancerTlsPoliciesAsync(const GetLoadBalancerTlsPoliciesRequest& request, const GetLoadBalancerTlsPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetLoadBalancerTlsPoliciesAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetLoadBalancersAsyncHelper(LightsailClient const * const clientThis, const GetLoadBalancersRequest& request, const GetLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetLoadBalancers(request), context);
}

void LightsailClient::GetLoadBalancersAsync(const GetLoadBalancersRequest& request, const GetLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetLoadBalancersAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetOperationAsyncHelper(LightsailClient const * const clientThis, const GetOperationRequest& request, const GetOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetOperation(request), context);
}

void LightsailClient::GetOperationAsync(const GetOperationRequest& request, const GetOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetOperationAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetOperationsAsyncHelper(LightsailClient const * const clientThis, const GetOperationsRequest& request, const GetOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetOperations(request), context);
}

void LightsailClient::GetOperationsAsync(const GetOperationsRequest& request, const GetOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetOperationsAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetOperationsForResourceAsyncHelper(LightsailClient const * const clientThis, const GetOperationsForResourceRequest& request, const GetOperationsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetOperationsForResource(request), context);
}

void LightsailClient::GetOperationsForResourceAsync(const GetOperationsForResourceRequest& request, const GetOperationsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetOperationsForResourceAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetRegionsAsyncHelper(LightsailClient const * const clientThis, const GetRegionsRequest& request, const GetRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRegions(request), context);
}

void LightsailClient::GetRegionsAsync(const GetRegionsRequest& request, const GetRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetRegionsAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetRelationalDatabaseAsyncHelper(LightsailClient const * const clientThis, const GetRelationalDatabaseRequest& request, const GetRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRelationalDatabase(request), context);
}

void LightsailClient::GetRelationalDatabaseAsync(const GetRelationalDatabaseRequest& request, const GetRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetRelationalDatabaseAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetRelationalDatabaseBlueprintsAsyncHelper(LightsailClient const * const clientThis, const GetRelationalDatabaseBlueprintsRequest& request, const GetRelationalDatabaseBlueprintsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRelationalDatabaseBlueprints(request), context);
}

void LightsailClient::GetRelationalDatabaseBlueprintsAsync(const GetRelationalDatabaseBlueprintsRequest& request, const GetRelationalDatabaseBlueprintsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetRelationalDatabaseBlueprintsAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetRelationalDatabaseBundlesAsyncHelper(LightsailClient const * const clientThis, const GetRelationalDatabaseBundlesRequest& request, const GetRelationalDatabaseBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRelationalDatabaseBundles(request), context);
}

void LightsailClient::GetRelationalDatabaseBundlesAsync(const GetRelationalDatabaseBundlesRequest& request, const GetRelationalDatabaseBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetRelationalDatabaseBundlesAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetRelationalDatabaseEventsAsyncHelper(LightsailClient const * const clientThis, const GetRelationalDatabaseEventsRequest& request, const GetRelationalDatabaseEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRelationalDatabaseEvents(request), context);
}

void LightsailClient::GetRelationalDatabaseEventsAsync(const GetRelationalDatabaseEventsRequest& request, const GetRelationalDatabaseEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetRelationalDatabaseEventsAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetRelationalDatabaseLogEventsAsyncHelper(LightsailClient const * const clientThis, const GetRelationalDatabaseLogEventsRequest& request, const GetRelationalDatabaseLogEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRelationalDatabaseLogEvents(request), context);
}

void LightsailClient::GetRelationalDatabaseLogEventsAsync(const GetRelationalDatabaseLogEventsRequest& request, const GetRelationalDatabaseLogEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetRelationalDatabaseLogEventsAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetRelationalDatabaseLogStreamsAsyncHelper(LightsailClient const * const clientThis, const GetRelationalDatabaseLogStreamsRequest& request, const GetRelationalDatabaseLogStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRelationalDatabaseLogStreams(request), context);
}

void LightsailClient::GetRelationalDatabaseLogStreamsAsync(const GetRelationalDatabaseLogStreamsRequest& request, const GetRelationalDatabaseLogStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetRelationalDatabaseLogStreamsAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetRelationalDatabaseMasterUserPasswordAsyncHelper(LightsailClient const * const clientThis, const GetRelationalDatabaseMasterUserPasswordRequest& request, const GetRelationalDatabaseMasterUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRelationalDatabaseMasterUserPassword(request), context);
}

void LightsailClient::GetRelationalDatabaseMasterUserPasswordAsync(const GetRelationalDatabaseMasterUserPasswordRequest& request, const GetRelationalDatabaseMasterUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetRelationalDatabaseMasterUserPasswordAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetRelationalDatabaseMetricDataAsyncHelper(LightsailClient const * const clientThis, const GetRelationalDatabaseMetricDataRequest& request, const GetRelationalDatabaseMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRelationalDatabaseMetricData(request), context);
}

void LightsailClient::GetRelationalDatabaseMetricDataAsync(const GetRelationalDatabaseMetricDataRequest& request, const GetRelationalDatabaseMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetRelationalDatabaseMetricDataAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetRelationalDatabaseParametersAsyncHelper(LightsailClient const * const clientThis, const GetRelationalDatabaseParametersRequest& request, const GetRelationalDatabaseParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRelationalDatabaseParameters(request), context);
}

void LightsailClient::GetRelationalDatabaseParametersAsync(const GetRelationalDatabaseParametersRequest& request, const GetRelationalDatabaseParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetRelationalDatabaseParametersAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetRelationalDatabaseSnapshotAsyncHelper(LightsailClient const * const clientThis, const GetRelationalDatabaseSnapshotRequest& request, const GetRelationalDatabaseSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRelationalDatabaseSnapshot(request), context);
}

void LightsailClient::GetRelationalDatabaseSnapshotAsync(const GetRelationalDatabaseSnapshotRequest& request, const GetRelationalDatabaseSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetRelationalDatabaseSnapshotAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetRelationalDatabaseSnapshotsAsyncHelper(LightsailClient const * const clientThis, const GetRelationalDatabaseSnapshotsRequest& request, const GetRelationalDatabaseSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRelationalDatabaseSnapshots(request), context);
}

void LightsailClient::GetRelationalDatabaseSnapshotsAsync(const GetRelationalDatabaseSnapshotsRequest& request, const GetRelationalDatabaseSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetRelationalDatabaseSnapshotsAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetRelationalDatabasesAsyncHelper(LightsailClient const * const clientThis, const GetRelationalDatabasesRequest& request, const GetRelationalDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRelationalDatabases(request), context);
}

void LightsailClient::GetRelationalDatabasesAsync(const GetRelationalDatabasesRequest& request, const GetRelationalDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetRelationalDatabasesAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetStaticIpAsyncHelper(LightsailClient const * const clientThis, const GetStaticIpRequest& request, const GetStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetStaticIp(request), context);
}

void LightsailClient::GetStaticIpAsync(const GetStaticIpRequest& request, const GetStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetStaticIpAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientGetStaticIpsAsyncHelper(LightsailClient const * const clientThis, const GetStaticIpsRequest& request, const GetStaticIpsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetStaticIps(request), context);
}

void LightsailClient::GetStaticIpsAsync(const GetStaticIpsRequest& request, const GetStaticIpsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientGetStaticIpsAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientImportKeyPairAsyncHelper(LightsailClient const * const clientThis, const ImportKeyPairRequest& request, const ImportKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ImportKeyPair(request), context);
}

void LightsailClient::ImportKeyPairAsync(const ImportKeyPairRequest& request, const ImportKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientImportKeyPairAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientIsVpcPeeredAsyncHelper(LightsailClient const * const clientThis, const IsVpcPeeredRequest& request, const IsVpcPeeredResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->IsVpcPeered(request), context);
}

void LightsailClient::IsVpcPeeredAsync(const IsVpcPeeredRequest& request, const IsVpcPeeredResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientIsVpcPeeredAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientOpenInstancePublicPortsAsyncHelper(LightsailClient const * const clientThis, const OpenInstancePublicPortsRequest& request, const OpenInstancePublicPortsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->OpenInstancePublicPorts(request), context);
}

void LightsailClient::OpenInstancePublicPortsAsync(const OpenInstancePublicPortsRequest& request, const OpenInstancePublicPortsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientOpenInstancePublicPortsAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientPeerVpcAsyncHelper(LightsailClient const * const clientThis, const PeerVpcRequest& request, const PeerVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PeerVpc(request), context);
}

void LightsailClient::PeerVpcAsync(const PeerVpcRequest& request, const PeerVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientPeerVpcAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientPutAlarmAsyncHelper(LightsailClient const * const clientThis, const PutAlarmRequest& request, const PutAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutAlarm(request), context);
}

void LightsailClient::PutAlarmAsync(const PutAlarmRequest& request, const PutAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientPutAlarmAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientPutInstancePublicPortsAsyncHelper(LightsailClient const * const clientThis, const PutInstancePublicPortsRequest& request, const PutInstancePublicPortsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutInstancePublicPorts(request), context);
}

void LightsailClient::PutInstancePublicPortsAsync(const PutInstancePublicPortsRequest& request, const PutInstancePublicPortsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientPutInstancePublicPortsAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientRebootInstanceAsyncHelper(LightsailClient const * const clientThis, const RebootInstanceRequest& request, const RebootInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RebootInstance(request), context);
}

void LightsailClient::RebootInstanceAsync(const RebootInstanceRequest& request, const RebootInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientRebootInstanceAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientRebootRelationalDatabaseAsyncHelper(LightsailClient const * const clientThis, const RebootRelationalDatabaseRequest& request, const RebootRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RebootRelationalDatabase(request), context);
}

void LightsailClient::RebootRelationalDatabaseAsync(const RebootRelationalDatabaseRequest& request, const RebootRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientRebootRelationalDatabaseAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientRegisterContainerImageAsyncHelper(LightsailClient const * const clientThis, const RegisterContainerImageRequest& request, const RegisterContainerImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterContainerImage(request), context);
}

void LightsailClient::RegisterContainerImageAsync(const RegisterContainerImageRequest& request, const RegisterContainerImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientRegisterContainerImageAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientReleaseStaticIpAsyncHelper(LightsailClient const * const clientThis, const ReleaseStaticIpRequest& request, const ReleaseStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ReleaseStaticIp(request), context);
}

void LightsailClient::ReleaseStaticIpAsync(const ReleaseStaticIpRequest& request, const ReleaseStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientReleaseStaticIpAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientResetDistributionCacheAsyncHelper(LightsailClient const * const clientThis, const ResetDistributionCacheRequest& request, const ResetDistributionCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ResetDistributionCache(request), context);
}

void LightsailClient::ResetDistributionCacheAsync(const ResetDistributionCacheRequest& request, const ResetDistributionCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientResetDistributionCacheAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientSendContactMethodVerificationAsyncHelper(LightsailClient const * const clientThis, const SendContactMethodVerificationRequest& request, const SendContactMethodVerificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SendContactMethodVerification(request), context);
}

void LightsailClient::SendContactMethodVerificationAsync(const SendContactMethodVerificationRequest& request, const SendContactMethodVerificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientSendContactMethodVerificationAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientSetIpAddressTypeAsyncHelper(LightsailClient const * const clientThis, const SetIpAddressTypeRequest& request, const SetIpAddressTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetIpAddressType(request), context);
}

void LightsailClient::SetIpAddressTypeAsync(const SetIpAddressTypeRequest& request, const SetIpAddressTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientSetIpAddressTypeAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientSetResourceAccessForBucketAsyncHelper(LightsailClient const * const clientThis, const SetResourceAccessForBucketRequest& request, const SetResourceAccessForBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetResourceAccessForBucket(request), context);
}

void LightsailClient::SetResourceAccessForBucketAsync(const SetResourceAccessForBucketRequest& request, const SetResourceAccessForBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientSetResourceAccessForBucketAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientStartInstanceAsyncHelper(LightsailClient const * const clientThis, const StartInstanceRequest& request, const StartInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartInstance(request), context);
}

void LightsailClient::StartInstanceAsync(const StartInstanceRequest& request, const StartInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientStartInstanceAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientStartRelationalDatabaseAsyncHelper(LightsailClient const * const clientThis, const StartRelationalDatabaseRequest& request, const StartRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartRelationalDatabase(request), context);
}

void LightsailClient::StartRelationalDatabaseAsync(const StartRelationalDatabaseRequest& request, const StartRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientStartRelationalDatabaseAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientStopInstanceAsyncHelper(LightsailClient const * const clientThis, const StopInstanceRequest& request, const StopInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopInstance(request), context);
}

void LightsailClient::StopInstanceAsync(const StopInstanceRequest& request, const StopInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientStopInstanceAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientStopRelationalDatabaseAsyncHelper(LightsailClient const * const clientThis, const StopRelationalDatabaseRequest& request, const StopRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopRelationalDatabase(request), context);
}

void LightsailClient::StopRelationalDatabaseAsync(const StopRelationalDatabaseRequest& request, const StopRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientStopRelationalDatabaseAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientTagResourceAsyncHelper(LightsailClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void LightsailClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientTagResourceAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientTestAlarmAsyncHelper(LightsailClient const * const clientThis, const TestAlarmRequest& request, const TestAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TestAlarm(request), context);
}

void LightsailClient::TestAlarmAsync(const TestAlarmRequest& request, const TestAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientTestAlarmAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientUnpeerVpcAsyncHelper(LightsailClient const * const clientThis, const UnpeerVpcRequest& request, const UnpeerVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UnpeerVpc(request), context);
}

void LightsailClient::UnpeerVpcAsync(const UnpeerVpcRequest& request, const UnpeerVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientUnpeerVpcAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientUntagResourceAsyncHelper(LightsailClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void LightsailClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientUntagResourceAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientUpdateBucketAsyncHelper(LightsailClient const * const clientThis, const UpdateBucketRequest& request, const UpdateBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateBucket(request), context);
}

void LightsailClient::UpdateBucketAsync(const UpdateBucketRequest& request, const UpdateBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientUpdateBucketAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientUpdateBucketBundleAsyncHelper(LightsailClient const * const clientThis, const UpdateBucketBundleRequest& request, const UpdateBucketBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateBucketBundle(request), context);
}

void LightsailClient::UpdateBucketBundleAsync(const UpdateBucketBundleRequest& request, const UpdateBucketBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientUpdateBucketBundleAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientUpdateContainerServiceAsyncHelper(LightsailClient const * const clientThis, const UpdateContainerServiceRequest& request, const UpdateContainerServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateContainerService(request), context);
}

void LightsailClient::UpdateContainerServiceAsync(const UpdateContainerServiceRequest& request, const UpdateContainerServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientUpdateContainerServiceAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientUpdateDistributionAsyncHelper(LightsailClient const * const clientThis, const UpdateDistributionRequest& request, const UpdateDistributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDistribution(request), context);
}

void LightsailClient::UpdateDistributionAsync(const UpdateDistributionRequest& request, const UpdateDistributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientUpdateDistributionAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientUpdateDistributionBundleAsyncHelper(LightsailClient const * const clientThis, const UpdateDistributionBundleRequest& request, const UpdateDistributionBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDistributionBundle(request), context);
}

void LightsailClient::UpdateDistributionBundleAsync(const UpdateDistributionBundleRequest& request, const UpdateDistributionBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientUpdateDistributionBundleAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientUpdateDomainEntryAsyncHelper(LightsailClient const * const clientThis, const UpdateDomainEntryRequest& request, const UpdateDomainEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDomainEntry(request), context);
}

void LightsailClient::UpdateDomainEntryAsync(const UpdateDomainEntryRequest& request, const UpdateDomainEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientUpdateDomainEntryAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientUpdateLoadBalancerAttributeAsyncHelper(LightsailClient const * const clientThis, const UpdateLoadBalancerAttributeRequest& request, const UpdateLoadBalancerAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateLoadBalancerAttribute(request), context);
}

void LightsailClient::UpdateLoadBalancerAttributeAsync(const UpdateLoadBalancerAttributeRequest& request, const UpdateLoadBalancerAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientUpdateLoadBalancerAttributeAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientUpdateRelationalDatabaseAsyncHelper(LightsailClient const * const clientThis, const UpdateRelationalDatabaseRequest& request, const UpdateRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRelationalDatabase(request), context);
}

void LightsailClient::UpdateRelationalDatabaseAsync(const UpdateRelationalDatabaseRequest& request, const UpdateRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientUpdateRelationalDatabaseAsyncHelper( this, request, handler, context ); } );
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

void LightsailClientUpdateRelationalDatabaseParametersAsyncHelper(LightsailClient const * const clientThis, const UpdateRelationalDatabaseParametersRequest& request, const UpdateRelationalDatabaseParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRelationalDatabaseParameters(request), context);
}

void LightsailClient::UpdateRelationalDatabaseParametersAsync(const UpdateRelationalDatabaseParametersRequest& request, const UpdateRelationalDatabaseParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LightsailClientUpdateRelationalDatabaseParametersAsyncHelper( this, request, handler, context ); } );
}

