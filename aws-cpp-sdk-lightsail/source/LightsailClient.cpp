/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
#include <aws/lightsail/model/AttachDiskRequest.h>
#include <aws/lightsail/model/AttachInstancesToLoadBalancerRequest.h>
#include <aws/lightsail/model/AttachLoadBalancerTlsCertificateRequest.h>
#include <aws/lightsail/model/AttachStaticIpRequest.h>
#include <aws/lightsail/model/CloseInstancePublicPortsRequest.h>
#include <aws/lightsail/model/CopySnapshotRequest.h>
#include <aws/lightsail/model/CreateCloudFormationStackRequest.h>
#include <aws/lightsail/model/CreateDiskRequest.h>
#include <aws/lightsail/model/CreateDiskFromSnapshotRequest.h>
#include <aws/lightsail/model/CreateDiskSnapshotRequest.h>
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
#include <aws/lightsail/model/DeleteDiskRequest.h>
#include <aws/lightsail/model/DeleteDiskSnapshotRequest.h>
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
#include <aws/lightsail/model/DetachDiskRequest.h>
#include <aws/lightsail/model/DetachInstancesFromLoadBalancerRequest.h>
#include <aws/lightsail/model/DetachStaticIpRequest.h>
#include <aws/lightsail/model/DownloadDefaultKeyPairRequest.h>
#include <aws/lightsail/model/ExportSnapshotRequest.h>
#include <aws/lightsail/model/GetActiveNamesRequest.h>
#include <aws/lightsail/model/GetBlueprintsRequest.h>
#include <aws/lightsail/model/GetBundlesRequest.h>
#include <aws/lightsail/model/GetCloudFormationStackRecordsRequest.h>
#include <aws/lightsail/model/GetDiskRequest.h>
#include <aws/lightsail/model/GetDiskSnapshotRequest.h>
#include <aws/lightsail/model/GetDiskSnapshotsRequest.h>
#include <aws/lightsail/model/GetDisksRequest.h>
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
#include <aws/lightsail/model/PutInstancePublicPortsRequest.h>
#include <aws/lightsail/model/RebootInstanceRequest.h>
#include <aws/lightsail/model/RebootRelationalDatabaseRequest.h>
#include <aws/lightsail/model/ReleaseStaticIpRequest.h>
#include <aws/lightsail/model/StartInstanceRequest.h>
#include <aws/lightsail/model/StartRelationalDatabaseRequest.h>
#include <aws/lightsail/model/StopInstanceRequest.h>
#include <aws/lightsail/model/StopRelationalDatabaseRequest.h>
#include <aws/lightsail/model/TagResourceRequest.h>
#include <aws/lightsail/model/UnpeerVpcRequest.h>
#include <aws/lightsail/model/UntagResourceRequest.h>
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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<LightsailErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LightsailClient::LightsailClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<LightsailErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LightsailClient::LightsailClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<LightsailErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LightsailClient::~LightsailClient()
{
}

void LightsailClient::init(const ClientConfiguration& config)
{
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
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AllocateStaticIpOutcome(AllocateStaticIpResult(outcome.GetResult()));
  }
  else
  {
    return AllocateStaticIpOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->AllocateStaticIpAsyncHelper( request, handler, context ); } );
}

void LightsailClient::AllocateStaticIpAsyncHelper(const AllocateStaticIpRequest& request, const AllocateStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AllocateStaticIp(request), context);
}

AttachDiskOutcome LightsailClient::AttachDisk(const AttachDiskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AttachDiskOutcome(AttachDiskResult(outcome.GetResult()));
  }
  else
  {
    return AttachDiskOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->AttachDiskAsyncHelper( request, handler, context ); } );
}

void LightsailClient::AttachDiskAsyncHelper(const AttachDiskRequest& request, const AttachDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachDisk(request), context);
}

AttachInstancesToLoadBalancerOutcome LightsailClient::AttachInstancesToLoadBalancer(const AttachInstancesToLoadBalancerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AttachInstancesToLoadBalancerOutcome(AttachInstancesToLoadBalancerResult(outcome.GetResult()));
  }
  else
  {
    return AttachInstancesToLoadBalancerOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->AttachInstancesToLoadBalancerAsyncHelper( request, handler, context ); } );
}

void LightsailClient::AttachInstancesToLoadBalancerAsyncHelper(const AttachInstancesToLoadBalancerRequest& request, const AttachInstancesToLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachInstancesToLoadBalancer(request), context);
}

AttachLoadBalancerTlsCertificateOutcome LightsailClient::AttachLoadBalancerTlsCertificate(const AttachLoadBalancerTlsCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AttachLoadBalancerTlsCertificateOutcome(AttachLoadBalancerTlsCertificateResult(outcome.GetResult()));
  }
  else
  {
    return AttachLoadBalancerTlsCertificateOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->AttachLoadBalancerTlsCertificateAsyncHelper( request, handler, context ); } );
}

void LightsailClient::AttachLoadBalancerTlsCertificateAsyncHelper(const AttachLoadBalancerTlsCertificateRequest& request, const AttachLoadBalancerTlsCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachLoadBalancerTlsCertificate(request), context);
}

AttachStaticIpOutcome LightsailClient::AttachStaticIp(const AttachStaticIpRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AttachStaticIpOutcome(AttachStaticIpResult(outcome.GetResult()));
  }
  else
  {
    return AttachStaticIpOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->AttachStaticIpAsyncHelper( request, handler, context ); } );
}

void LightsailClient::AttachStaticIpAsyncHelper(const AttachStaticIpRequest& request, const AttachStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachStaticIp(request), context);
}

CloseInstancePublicPortsOutcome LightsailClient::CloseInstancePublicPorts(const CloseInstancePublicPortsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CloseInstancePublicPortsOutcome(CloseInstancePublicPortsResult(outcome.GetResult()));
  }
  else
  {
    return CloseInstancePublicPortsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CloseInstancePublicPortsAsyncHelper( request, handler, context ); } );
}

void LightsailClient::CloseInstancePublicPortsAsyncHelper(const CloseInstancePublicPortsRequest& request, const CloseInstancePublicPortsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CloseInstancePublicPorts(request), context);
}

CopySnapshotOutcome LightsailClient::CopySnapshot(const CopySnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CopySnapshotOutcome(CopySnapshotResult(outcome.GetResult()));
  }
  else
  {
    return CopySnapshotOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CopySnapshotAsyncHelper( request, handler, context ); } );
}

void LightsailClient::CopySnapshotAsyncHelper(const CopySnapshotRequest& request, const CopySnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CopySnapshot(request), context);
}

CreateCloudFormationStackOutcome LightsailClient::CreateCloudFormationStack(const CreateCloudFormationStackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateCloudFormationStackOutcome(CreateCloudFormationStackResult(outcome.GetResult()));
  }
  else
  {
    return CreateCloudFormationStackOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateCloudFormationStackAsyncHelper( request, handler, context ); } );
}

void LightsailClient::CreateCloudFormationStackAsyncHelper(const CreateCloudFormationStackRequest& request, const CreateCloudFormationStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCloudFormationStack(request), context);
}

CreateDiskOutcome LightsailClient::CreateDisk(const CreateDiskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDiskOutcome(CreateDiskResult(outcome.GetResult()));
  }
  else
  {
    return CreateDiskOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateDiskAsyncHelper( request, handler, context ); } );
}

void LightsailClient::CreateDiskAsyncHelper(const CreateDiskRequest& request, const CreateDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDisk(request), context);
}

CreateDiskFromSnapshotOutcome LightsailClient::CreateDiskFromSnapshot(const CreateDiskFromSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDiskFromSnapshotOutcome(CreateDiskFromSnapshotResult(outcome.GetResult()));
  }
  else
  {
    return CreateDiskFromSnapshotOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateDiskFromSnapshotAsyncHelper( request, handler, context ); } );
}

void LightsailClient::CreateDiskFromSnapshotAsyncHelper(const CreateDiskFromSnapshotRequest& request, const CreateDiskFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDiskFromSnapshot(request), context);
}

CreateDiskSnapshotOutcome LightsailClient::CreateDiskSnapshot(const CreateDiskSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDiskSnapshotOutcome(CreateDiskSnapshotResult(outcome.GetResult()));
  }
  else
  {
    return CreateDiskSnapshotOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateDiskSnapshotAsyncHelper( request, handler, context ); } );
}

void LightsailClient::CreateDiskSnapshotAsyncHelper(const CreateDiskSnapshotRequest& request, const CreateDiskSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDiskSnapshot(request), context);
}

CreateDomainOutcome LightsailClient::CreateDomain(const CreateDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDomainOutcome(CreateDomainResult(outcome.GetResult()));
  }
  else
  {
    return CreateDomainOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateDomainAsyncHelper( request, handler, context ); } );
}

void LightsailClient::CreateDomainAsyncHelper(const CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDomain(request), context);
}

CreateDomainEntryOutcome LightsailClient::CreateDomainEntry(const CreateDomainEntryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDomainEntryOutcome(CreateDomainEntryResult(outcome.GetResult()));
  }
  else
  {
    return CreateDomainEntryOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateDomainEntryAsyncHelper( request, handler, context ); } );
}

void LightsailClient::CreateDomainEntryAsyncHelper(const CreateDomainEntryRequest& request, const CreateDomainEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDomainEntry(request), context);
}

CreateInstanceSnapshotOutcome LightsailClient::CreateInstanceSnapshot(const CreateInstanceSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateInstanceSnapshotOutcome(CreateInstanceSnapshotResult(outcome.GetResult()));
  }
  else
  {
    return CreateInstanceSnapshotOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateInstanceSnapshotAsyncHelper( request, handler, context ); } );
}

void LightsailClient::CreateInstanceSnapshotAsyncHelper(const CreateInstanceSnapshotRequest& request, const CreateInstanceSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateInstanceSnapshot(request), context);
}

CreateInstancesOutcome LightsailClient::CreateInstances(const CreateInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateInstancesOutcome(CreateInstancesResult(outcome.GetResult()));
  }
  else
  {
    return CreateInstancesOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateInstancesAsyncHelper( request, handler, context ); } );
}

void LightsailClient::CreateInstancesAsyncHelper(const CreateInstancesRequest& request, const CreateInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateInstances(request), context);
}

CreateInstancesFromSnapshotOutcome LightsailClient::CreateInstancesFromSnapshot(const CreateInstancesFromSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateInstancesFromSnapshotOutcome(CreateInstancesFromSnapshotResult(outcome.GetResult()));
  }
  else
  {
    return CreateInstancesFromSnapshotOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateInstancesFromSnapshotAsyncHelper( request, handler, context ); } );
}

void LightsailClient::CreateInstancesFromSnapshotAsyncHelper(const CreateInstancesFromSnapshotRequest& request, const CreateInstancesFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateInstancesFromSnapshot(request), context);
}

CreateKeyPairOutcome LightsailClient::CreateKeyPair(const CreateKeyPairRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateKeyPairOutcome(CreateKeyPairResult(outcome.GetResult()));
  }
  else
  {
    return CreateKeyPairOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateKeyPairAsyncHelper( request, handler, context ); } );
}

void LightsailClient::CreateKeyPairAsyncHelper(const CreateKeyPairRequest& request, const CreateKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateKeyPair(request), context);
}

CreateLoadBalancerOutcome LightsailClient::CreateLoadBalancer(const CreateLoadBalancerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateLoadBalancerOutcome(CreateLoadBalancerResult(outcome.GetResult()));
  }
  else
  {
    return CreateLoadBalancerOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateLoadBalancerAsyncHelper( request, handler, context ); } );
}

void LightsailClient::CreateLoadBalancerAsyncHelper(const CreateLoadBalancerRequest& request, const CreateLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateLoadBalancer(request), context);
}

CreateLoadBalancerTlsCertificateOutcome LightsailClient::CreateLoadBalancerTlsCertificate(const CreateLoadBalancerTlsCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateLoadBalancerTlsCertificateOutcome(CreateLoadBalancerTlsCertificateResult(outcome.GetResult()));
  }
  else
  {
    return CreateLoadBalancerTlsCertificateOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateLoadBalancerTlsCertificateAsyncHelper( request, handler, context ); } );
}

void LightsailClient::CreateLoadBalancerTlsCertificateAsyncHelper(const CreateLoadBalancerTlsCertificateRequest& request, const CreateLoadBalancerTlsCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateLoadBalancerTlsCertificate(request), context);
}

CreateRelationalDatabaseOutcome LightsailClient::CreateRelationalDatabase(const CreateRelationalDatabaseRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateRelationalDatabaseOutcome(CreateRelationalDatabaseResult(outcome.GetResult()));
  }
  else
  {
    return CreateRelationalDatabaseOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateRelationalDatabaseAsyncHelper( request, handler, context ); } );
}

void LightsailClient::CreateRelationalDatabaseAsyncHelper(const CreateRelationalDatabaseRequest& request, const CreateRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRelationalDatabase(request), context);
}

CreateRelationalDatabaseFromSnapshotOutcome LightsailClient::CreateRelationalDatabaseFromSnapshot(const CreateRelationalDatabaseFromSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateRelationalDatabaseFromSnapshotOutcome(CreateRelationalDatabaseFromSnapshotResult(outcome.GetResult()));
  }
  else
  {
    return CreateRelationalDatabaseFromSnapshotOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateRelationalDatabaseFromSnapshotAsyncHelper( request, handler, context ); } );
}

void LightsailClient::CreateRelationalDatabaseFromSnapshotAsyncHelper(const CreateRelationalDatabaseFromSnapshotRequest& request, const CreateRelationalDatabaseFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRelationalDatabaseFromSnapshot(request), context);
}

CreateRelationalDatabaseSnapshotOutcome LightsailClient::CreateRelationalDatabaseSnapshot(const CreateRelationalDatabaseSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateRelationalDatabaseSnapshotOutcome(CreateRelationalDatabaseSnapshotResult(outcome.GetResult()));
  }
  else
  {
    return CreateRelationalDatabaseSnapshotOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateRelationalDatabaseSnapshotAsyncHelper( request, handler, context ); } );
}

void LightsailClient::CreateRelationalDatabaseSnapshotAsyncHelper(const CreateRelationalDatabaseSnapshotRequest& request, const CreateRelationalDatabaseSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRelationalDatabaseSnapshot(request), context);
}

DeleteDiskOutcome LightsailClient::DeleteDisk(const DeleteDiskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDiskOutcome(DeleteDiskResult(outcome.GetResult()));
  }
  else
  {
    return DeleteDiskOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDiskAsyncHelper( request, handler, context ); } );
}

void LightsailClient::DeleteDiskAsyncHelper(const DeleteDiskRequest& request, const DeleteDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDisk(request), context);
}

DeleteDiskSnapshotOutcome LightsailClient::DeleteDiskSnapshot(const DeleteDiskSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDiskSnapshotOutcome(DeleteDiskSnapshotResult(outcome.GetResult()));
  }
  else
  {
    return DeleteDiskSnapshotOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDiskSnapshotAsyncHelper( request, handler, context ); } );
}

void LightsailClient::DeleteDiskSnapshotAsyncHelper(const DeleteDiskSnapshotRequest& request, const DeleteDiskSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDiskSnapshot(request), context);
}

DeleteDomainOutcome LightsailClient::DeleteDomain(const DeleteDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDomainOutcome(DeleteDomainResult(outcome.GetResult()));
  }
  else
  {
    return DeleteDomainOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDomainAsyncHelper( request, handler, context ); } );
}

void LightsailClient::DeleteDomainAsyncHelper(const DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDomain(request), context);
}

DeleteDomainEntryOutcome LightsailClient::DeleteDomainEntry(const DeleteDomainEntryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDomainEntryOutcome(DeleteDomainEntryResult(outcome.GetResult()));
  }
  else
  {
    return DeleteDomainEntryOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDomainEntryAsyncHelper( request, handler, context ); } );
}

void LightsailClient::DeleteDomainEntryAsyncHelper(const DeleteDomainEntryRequest& request, const DeleteDomainEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDomainEntry(request), context);
}

DeleteInstanceOutcome LightsailClient::DeleteInstance(const DeleteInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteInstanceOutcome(DeleteInstanceResult(outcome.GetResult()));
  }
  else
  {
    return DeleteInstanceOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteInstanceAsyncHelper( request, handler, context ); } );
}

void LightsailClient::DeleteInstanceAsyncHelper(const DeleteInstanceRequest& request, const DeleteInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteInstance(request), context);
}

DeleteInstanceSnapshotOutcome LightsailClient::DeleteInstanceSnapshot(const DeleteInstanceSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteInstanceSnapshotOutcome(DeleteInstanceSnapshotResult(outcome.GetResult()));
  }
  else
  {
    return DeleteInstanceSnapshotOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteInstanceSnapshotAsyncHelper( request, handler, context ); } );
}

void LightsailClient::DeleteInstanceSnapshotAsyncHelper(const DeleteInstanceSnapshotRequest& request, const DeleteInstanceSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteInstanceSnapshot(request), context);
}

DeleteKeyPairOutcome LightsailClient::DeleteKeyPair(const DeleteKeyPairRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteKeyPairOutcome(DeleteKeyPairResult(outcome.GetResult()));
  }
  else
  {
    return DeleteKeyPairOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteKeyPairAsyncHelper( request, handler, context ); } );
}

void LightsailClient::DeleteKeyPairAsyncHelper(const DeleteKeyPairRequest& request, const DeleteKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteKeyPair(request), context);
}

DeleteKnownHostKeysOutcome LightsailClient::DeleteKnownHostKeys(const DeleteKnownHostKeysRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteKnownHostKeysOutcome(DeleteKnownHostKeysResult(outcome.GetResult()));
  }
  else
  {
    return DeleteKnownHostKeysOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteKnownHostKeysAsyncHelper( request, handler, context ); } );
}

void LightsailClient::DeleteKnownHostKeysAsyncHelper(const DeleteKnownHostKeysRequest& request, const DeleteKnownHostKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteKnownHostKeys(request), context);
}

DeleteLoadBalancerOutcome LightsailClient::DeleteLoadBalancer(const DeleteLoadBalancerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteLoadBalancerOutcome(DeleteLoadBalancerResult(outcome.GetResult()));
  }
  else
  {
    return DeleteLoadBalancerOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteLoadBalancerAsyncHelper( request, handler, context ); } );
}

void LightsailClient::DeleteLoadBalancerAsyncHelper(const DeleteLoadBalancerRequest& request, const DeleteLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteLoadBalancer(request), context);
}

DeleteLoadBalancerTlsCertificateOutcome LightsailClient::DeleteLoadBalancerTlsCertificate(const DeleteLoadBalancerTlsCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteLoadBalancerTlsCertificateOutcome(DeleteLoadBalancerTlsCertificateResult(outcome.GetResult()));
  }
  else
  {
    return DeleteLoadBalancerTlsCertificateOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteLoadBalancerTlsCertificateAsyncHelper( request, handler, context ); } );
}

void LightsailClient::DeleteLoadBalancerTlsCertificateAsyncHelper(const DeleteLoadBalancerTlsCertificateRequest& request, const DeleteLoadBalancerTlsCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteLoadBalancerTlsCertificate(request), context);
}

DeleteRelationalDatabaseOutcome LightsailClient::DeleteRelationalDatabase(const DeleteRelationalDatabaseRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteRelationalDatabaseOutcome(DeleteRelationalDatabaseResult(outcome.GetResult()));
  }
  else
  {
    return DeleteRelationalDatabaseOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRelationalDatabaseAsyncHelper( request, handler, context ); } );
}

void LightsailClient::DeleteRelationalDatabaseAsyncHelper(const DeleteRelationalDatabaseRequest& request, const DeleteRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRelationalDatabase(request), context);
}

DeleteRelationalDatabaseSnapshotOutcome LightsailClient::DeleteRelationalDatabaseSnapshot(const DeleteRelationalDatabaseSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteRelationalDatabaseSnapshotOutcome(DeleteRelationalDatabaseSnapshotResult(outcome.GetResult()));
  }
  else
  {
    return DeleteRelationalDatabaseSnapshotOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRelationalDatabaseSnapshotAsyncHelper( request, handler, context ); } );
}

void LightsailClient::DeleteRelationalDatabaseSnapshotAsyncHelper(const DeleteRelationalDatabaseSnapshotRequest& request, const DeleteRelationalDatabaseSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRelationalDatabaseSnapshot(request), context);
}

DetachDiskOutcome LightsailClient::DetachDisk(const DetachDiskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DetachDiskOutcome(DetachDiskResult(outcome.GetResult()));
  }
  else
  {
    return DetachDiskOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DetachDiskAsyncHelper( request, handler, context ); } );
}

void LightsailClient::DetachDiskAsyncHelper(const DetachDiskRequest& request, const DetachDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetachDisk(request), context);
}

DetachInstancesFromLoadBalancerOutcome LightsailClient::DetachInstancesFromLoadBalancer(const DetachInstancesFromLoadBalancerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DetachInstancesFromLoadBalancerOutcome(DetachInstancesFromLoadBalancerResult(outcome.GetResult()));
  }
  else
  {
    return DetachInstancesFromLoadBalancerOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DetachInstancesFromLoadBalancerAsyncHelper( request, handler, context ); } );
}

void LightsailClient::DetachInstancesFromLoadBalancerAsyncHelper(const DetachInstancesFromLoadBalancerRequest& request, const DetachInstancesFromLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetachInstancesFromLoadBalancer(request), context);
}

DetachStaticIpOutcome LightsailClient::DetachStaticIp(const DetachStaticIpRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DetachStaticIpOutcome(DetachStaticIpResult(outcome.GetResult()));
  }
  else
  {
    return DetachStaticIpOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DetachStaticIpAsyncHelper( request, handler, context ); } );
}

void LightsailClient::DetachStaticIpAsyncHelper(const DetachStaticIpRequest& request, const DetachStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetachStaticIp(request), context);
}

DownloadDefaultKeyPairOutcome LightsailClient::DownloadDefaultKeyPair(const DownloadDefaultKeyPairRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DownloadDefaultKeyPairOutcome(DownloadDefaultKeyPairResult(outcome.GetResult()));
  }
  else
  {
    return DownloadDefaultKeyPairOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DownloadDefaultKeyPairAsyncHelper( request, handler, context ); } );
}

void LightsailClient::DownloadDefaultKeyPairAsyncHelper(const DownloadDefaultKeyPairRequest& request, const DownloadDefaultKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DownloadDefaultKeyPair(request), context);
}

ExportSnapshotOutcome LightsailClient::ExportSnapshot(const ExportSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ExportSnapshotOutcome(ExportSnapshotResult(outcome.GetResult()));
  }
  else
  {
    return ExportSnapshotOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ExportSnapshotAsyncHelper( request, handler, context ); } );
}

void LightsailClient::ExportSnapshotAsyncHelper(const ExportSnapshotRequest& request, const ExportSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ExportSnapshot(request), context);
}

GetActiveNamesOutcome LightsailClient::GetActiveNames(const GetActiveNamesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetActiveNamesOutcome(GetActiveNamesResult(outcome.GetResult()));
  }
  else
  {
    return GetActiveNamesOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetActiveNamesAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetActiveNamesAsyncHelper(const GetActiveNamesRequest& request, const GetActiveNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetActiveNames(request), context);
}

GetBlueprintsOutcome LightsailClient::GetBlueprints(const GetBlueprintsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetBlueprintsOutcome(GetBlueprintsResult(outcome.GetResult()));
  }
  else
  {
    return GetBlueprintsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetBlueprintsAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetBlueprintsAsyncHelper(const GetBlueprintsRequest& request, const GetBlueprintsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBlueprints(request), context);
}

GetBundlesOutcome LightsailClient::GetBundles(const GetBundlesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetBundlesOutcome(GetBundlesResult(outcome.GetResult()));
  }
  else
  {
    return GetBundlesOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetBundlesAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetBundlesAsyncHelper(const GetBundlesRequest& request, const GetBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBundles(request), context);
}

GetCloudFormationStackRecordsOutcome LightsailClient::GetCloudFormationStackRecords(const GetCloudFormationStackRecordsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetCloudFormationStackRecordsOutcome(GetCloudFormationStackRecordsResult(outcome.GetResult()));
  }
  else
  {
    return GetCloudFormationStackRecordsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetCloudFormationStackRecordsAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetCloudFormationStackRecordsAsyncHelper(const GetCloudFormationStackRecordsRequest& request, const GetCloudFormationStackRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCloudFormationStackRecords(request), context);
}

GetDiskOutcome LightsailClient::GetDisk(const GetDiskRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDiskOutcome(GetDiskResult(outcome.GetResult()));
  }
  else
  {
    return GetDiskOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetDiskAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetDiskAsyncHelper(const GetDiskRequest& request, const GetDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDisk(request), context);
}

GetDiskSnapshotOutcome LightsailClient::GetDiskSnapshot(const GetDiskSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDiskSnapshotOutcome(GetDiskSnapshotResult(outcome.GetResult()));
  }
  else
  {
    return GetDiskSnapshotOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetDiskSnapshotAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetDiskSnapshotAsyncHelper(const GetDiskSnapshotRequest& request, const GetDiskSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDiskSnapshot(request), context);
}

GetDiskSnapshotsOutcome LightsailClient::GetDiskSnapshots(const GetDiskSnapshotsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDiskSnapshotsOutcome(GetDiskSnapshotsResult(outcome.GetResult()));
  }
  else
  {
    return GetDiskSnapshotsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetDiskSnapshotsAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetDiskSnapshotsAsyncHelper(const GetDiskSnapshotsRequest& request, const GetDiskSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDiskSnapshots(request), context);
}

GetDisksOutcome LightsailClient::GetDisks(const GetDisksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDisksOutcome(GetDisksResult(outcome.GetResult()));
  }
  else
  {
    return GetDisksOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetDisksAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetDisksAsyncHelper(const GetDisksRequest& request, const GetDisksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDisks(request), context);
}

GetDomainOutcome LightsailClient::GetDomain(const GetDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDomainOutcome(GetDomainResult(outcome.GetResult()));
  }
  else
  {
    return GetDomainOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetDomainAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetDomainAsyncHelper(const GetDomainRequest& request, const GetDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDomain(request), context);
}

GetDomainsOutcome LightsailClient::GetDomains(const GetDomainsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDomainsOutcome(GetDomainsResult(outcome.GetResult()));
  }
  else
  {
    return GetDomainsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetDomainsAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetDomainsAsyncHelper(const GetDomainsRequest& request, const GetDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDomains(request), context);
}

GetExportSnapshotRecordsOutcome LightsailClient::GetExportSnapshotRecords(const GetExportSnapshotRecordsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetExportSnapshotRecordsOutcome(GetExportSnapshotRecordsResult(outcome.GetResult()));
  }
  else
  {
    return GetExportSnapshotRecordsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetExportSnapshotRecordsAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetExportSnapshotRecordsAsyncHelper(const GetExportSnapshotRecordsRequest& request, const GetExportSnapshotRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetExportSnapshotRecords(request), context);
}

GetInstanceOutcome LightsailClient::GetInstance(const GetInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetInstanceOutcome(GetInstanceResult(outcome.GetResult()));
  }
  else
  {
    return GetInstanceOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetInstanceAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetInstanceAsyncHelper(const GetInstanceRequest& request, const GetInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetInstance(request), context);
}

GetInstanceAccessDetailsOutcome LightsailClient::GetInstanceAccessDetails(const GetInstanceAccessDetailsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetInstanceAccessDetailsOutcome(GetInstanceAccessDetailsResult(outcome.GetResult()));
  }
  else
  {
    return GetInstanceAccessDetailsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetInstanceAccessDetailsAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetInstanceAccessDetailsAsyncHelper(const GetInstanceAccessDetailsRequest& request, const GetInstanceAccessDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetInstanceAccessDetails(request), context);
}

GetInstanceMetricDataOutcome LightsailClient::GetInstanceMetricData(const GetInstanceMetricDataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetInstanceMetricDataOutcome(GetInstanceMetricDataResult(outcome.GetResult()));
  }
  else
  {
    return GetInstanceMetricDataOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetInstanceMetricDataAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetInstanceMetricDataAsyncHelper(const GetInstanceMetricDataRequest& request, const GetInstanceMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetInstanceMetricData(request), context);
}

GetInstancePortStatesOutcome LightsailClient::GetInstancePortStates(const GetInstancePortStatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetInstancePortStatesOutcome(GetInstancePortStatesResult(outcome.GetResult()));
  }
  else
  {
    return GetInstancePortStatesOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetInstancePortStatesAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetInstancePortStatesAsyncHelper(const GetInstancePortStatesRequest& request, const GetInstancePortStatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetInstancePortStates(request), context);
}

GetInstanceSnapshotOutcome LightsailClient::GetInstanceSnapshot(const GetInstanceSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetInstanceSnapshotOutcome(GetInstanceSnapshotResult(outcome.GetResult()));
  }
  else
  {
    return GetInstanceSnapshotOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetInstanceSnapshotAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetInstanceSnapshotAsyncHelper(const GetInstanceSnapshotRequest& request, const GetInstanceSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetInstanceSnapshot(request), context);
}

GetInstanceSnapshotsOutcome LightsailClient::GetInstanceSnapshots(const GetInstanceSnapshotsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetInstanceSnapshotsOutcome(GetInstanceSnapshotsResult(outcome.GetResult()));
  }
  else
  {
    return GetInstanceSnapshotsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetInstanceSnapshotsAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetInstanceSnapshotsAsyncHelper(const GetInstanceSnapshotsRequest& request, const GetInstanceSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetInstanceSnapshots(request), context);
}

GetInstanceStateOutcome LightsailClient::GetInstanceState(const GetInstanceStateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetInstanceStateOutcome(GetInstanceStateResult(outcome.GetResult()));
  }
  else
  {
    return GetInstanceStateOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetInstanceStateAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetInstanceStateAsyncHelper(const GetInstanceStateRequest& request, const GetInstanceStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetInstanceState(request), context);
}

GetInstancesOutcome LightsailClient::GetInstances(const GetInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetInstancesOutcome(GetInstancesResult(outcome.GetResult()));
  }
  else
  {
    return GetInstancesOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetInstancesAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetInstancesAsyncHelper(const GetInstancesRequest& request, const GetInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetInstances(request), context);
}

GetKeyPairOutcome LightsailClient::GetKeyPair(const GetKeyPairRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetKeyPairOutcome(GetKeyPairResult(outcome.GetResult()));
  }
  else
  {
    return GetKeyPairOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetKeyPairAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetKeyPairAsyncHelper(const GetKeyPairRequest& request, const GetKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetKeyPair(request), context);
}

GetKeyPairsOutcome LightsailClient::GetKeyPairs(const GetKeyPairsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetKeyPairsOutcome(GetKeyPairsResult(outcome.GetResult()));
  }
  else
  {
    return GetKeyPairsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetKeyPairsAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetKeyPairsAsyncHelper(const GetKeyPairsRequest& request, const GetKeyPairsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetKeyPairs(request), context);
}

GetLoadBalancerOutcome LightsailClient::GetLoadBalancer(const GetLoadBalancerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetLoadBalancerOutcome(GetLoadBalancerResult(outcome.GetResult()));
  }
  else
  {
    return GetLoadBalancerOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetLoadBalancerAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetLoadBalancerAsyncHelper(const GetLoadBalancerRequest& request, const GetLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetLoadBalancer(request), context);
}

GetLoadBalancerMetricDataOutcome LightsailClient::GetLoadBalancerMetricData(const GetLoadBalancerMetricDataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetLoadBalancerMetricDataOutcome(GetLoadBalancerMetricDataResult(outcome.GetResult()));
  }
  else
  {
    return GetLoadBalancerMetricDataOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetLoadBalancerMetricDataAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetLoadBalancerMetricDataAsyncHelper(const GetLoadBalancerMetricDataRequest& request, const GetLoadBalancerMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetLoadBalancerMetricData(request), context);
}

GetLoadBalancerTlsCertificatesOutcome LightsailClient::GetLoadBalancerTlsCertificates(const GetLoadBalancerTlsCertificatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetLoadBalancerTlsCertificatesOutcome(GetLoadBalancerTlsCertificatesResult(outcome.GetResult()));
  }
  else
  {
    return GetLoadBalancerTlsCertificatesOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetLoadBalancerTlsCertificatesAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetLoadBalancerTlsCertificatesAsyncHelper(const GetLoadBalancerTlsCertificatesRequest& request, const GetLoadBalancerTlsCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetLoadBalancerTlsCertificates(request), context);
}

GetLoadBalancersOutcome LightsailClient::GetLoadBalancers(const GetLoadBalancersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetLoadBalancersOutcome(GetLoadBalancersResult(outcome.GetResult()));
  }
  else
  {
    return GetLoadBalancersOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetLoadBalancersAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetLoadBalancersAsyncHelper(const GetLoadBalancersRequest& request, const GetLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetLoadBalancers(request), context);
}

GetOperationOutcome LightsailClient::GetOperation(const GetOperationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetOperationOutcome(GetOperationResult(outcome.GetResult()));
  }
  else
  {
    return GetOperationOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetOperationAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetOperationAsyncHelper(const GetOperationRequest& request, const GetOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetOperation(request), context);
}

GetOperationsOutcome LightsailClient::GetOperations(const GetOperationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetOperationsOutcome(GetOperationsResult(outcome.GetResult()));
  }
  else
  {
    return GetOperationsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetOperationsAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetOperationsAsyncHelper(const GetOperationsRequest& request, const GetOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetOperations(request), context);
}

GetOperationsForResourceOutcome LightsailClient::GetOperationsForResource(const GetOperationsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetOperationsForResourceOutcome(GetOperationsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return GetOperationsForResourceOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetOperationsForResourceAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetOperationsForResourceAsyncHelper(const GetOperationsForResourceRequest& request, const GetOperationsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetOperationsForResource(request), context);
}

GetRegionsOutcome LightsailClient::GetRegions(const GetRegionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRegionsOutcome(GetRegionsResult(outcome.GetResult()));
  }
  else
  {
    return GetRegionsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetRegionsAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetRegionsAsyncHelper(const GetRegionsRequest& request, const GetRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRegions(request), context);
}

GetRelationalDatabaseOutcome LightsailClient::GetRelationalDatabase(const GetRelationalDatabaseRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRelationalDatabaseOutcome(GetRelationalDatabaseResult(outcome.GetResult()));
  }
  else
  {
    return GetRelationalDatabaseOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetRelationalDatabaseAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetRelationalDatabaseAsyncHelper(const GetRelationalDatabaseRequest& request, const GetRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRelationalDatabase(request), context);
}

GetRelationalDatabaseBlueprintsOutcome LightsailClient::GetRelationalDatabaseBlueprints(const GetRelationalDatabaseBlueprintsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRelationalDatabaseBlueprintsOutcome(GetRelationalDatabaseBlueprintsResult(outcome.GetResult()));
  }
  else
  {
    return GetRelationalDatabaseBlueprintsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetRelationalDatabaseBlueprintsAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetRelationalDatabaseBlueprintsAsyncHelper(const GetRelationalDatabaseBlueprintsRequest& request, const GetRelationalDatabaseBlueprintsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRelationalDatabaseBlueprints(request), context);
}

GetRelationalDatabaseBundlesOutcome LightsailClient::GetRelationalDatabaseBundles(const GetRelationalDatabaseBundlesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRelationalDatabaseBundlesOutcome(GetRelationalDatabaseBundlesResult(outcome.GetResult()));
  }
  else
  {
    return GetRelationalDatabaseBundlesOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetRelationalDatabaseBundlesAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetRelationalDatabaseBundlesAsyncHelper(const GetRelationalDatabaseBundlesRequest& request, const GetRelationalDatabaseBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRelationalDatabaseBundles(request), context);
}

GetRelationalDatabaseEventsOutcome LightsailClient::GetRelationalDatabaseEvents(const GetRelationalDatabaseEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRelationalDatabaseEventsOutcome(GetRelationalDatabaseEventsResult(outcome.GetResult()));
  }
  else
  {
    return GetRelationalDatabaseEventsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetRelationalDatabaseEventsAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetRelationalDatabaseEventsAsyncHelper(const GetRelationalDatabaseEventsRequest& request, const GetRelationalDatabaseEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRelationalDatabaseEvents(request), context);
}

GetRelationalDatabaseLogEventsOutcome LightsailClient::GetRelationalDatabaseLogEvents(const GetRelationalDatabaseLogEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRelationalDatabaseLogEventsOutcome(GetRelationalDatabaseLogEventsResult(outcome.GetResult()));
  }
  else
  {
    return GetRelationalDatabaseLogEventsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetRelationalDatabaseLogEventsAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetRelationalDatabaseLogEventsAsyncHelper(const GetRelationalDatabaseLogEventsRequest& request, const GetRelationalDatabaseLogEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRelationalDatabaseLogEvents(request), context);
}

GetRelationalDatabaseLogStreamsOutcome LightsailClient::GetRelationalDatabaseLogStreams(const GetRelationalDatabaseLogStreamsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRelationalDatabaseLogStreamsOutcome(GetRelationalDatabaseLogStreamsResult(outcome.GetResult()));
  }
  else
  {
    return GetRelationalDatabaseLogStreamsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetRelationalDatabaseLogStreamsAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetRelationalDatabaseLogStreamsAsyncHelper(const GetRelationalDatabaseLogStreamsRequest& request, const GetRelationalDatabaseLogStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRelationalDatabaseLogStreams(request), context);
}

GetRelationalDatabaseMasterUserPasswordOutcome LightsailClient::GetRelationalDatabaseMasterUserPassword(const GetRelationalDatabaseMasterUserPasswordRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRelationalDatabaseMasterUserPasswordOutcome(GetRelationalDatabaseMasterUserPasswordResult(outcome.GetResult()));
  }
  else
  {
    return GetRelationalDatabaseMasterUserPasswordOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetRelationalDatabaseMasterUserPasswordAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetRelationalDatabaseMasterUserPasswordAsyncHelper(const GetRelationalDatabaseMasterUserPasswordRequest& request, const GetRelationalDatabaseMasterUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRelationalDatabaseMasterUserPassword(request), context);
}

GetRelationalDatabaseMetricDataOutcome LightsailClient::GetRelationalDatabaseMetricData(const GetRelationalDatabaseMetricDataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRelationalDatabaseMetricDataOutcome(GetRelationalDatabaseMetricDataResult(outcome.GetResult()));
  }
  else
  {
    return GetRelationalDatabaseMetricDataOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetRelationalDatabaseMetricDataAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetRelationalDatabaseMetricDataAsyncHelper(const GetRelationalDatabaseMetricDataRequest& request, const GetRelationalDatabaseMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRelationalDatabaseMetricData(request), context);
}

GetRelationalDatabaseParametersOutcome LightsailClient::GetRelationalDatabaseParameters(const GetRelationalDatabaseParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRelationalDatabaseParametersOutcome(GetRelationalDatabaseParametersResult(outcome.GetResult()));
  }
  else
  {
    return GetRelationalDatabaseParametersOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetRelationalDatabaseParametersAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetRelationalDatabaseParametersAsyncHelper(const GetRelationalDatabaseParametersRequest& request, const GetRelationalDatabaseParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRelationalDatabaseParameters(request), context);
}

GetRelationalDatabaseSnapshotOutcome LightsailClient::GetRelationalDatabaseSnapshot(const GetRelationalDatabaseSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRelationalDatabaseSnapshotOutcome(GetRelationalDatabaseSnapshotResult(outcome.GetResult()));
  }
  else
  {
    return GetRelationalDatabaseSnapshotOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetRelationalDatabaseSnapshotAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetRelationalDatabaseSnapshotAsyncHelper(const GetRelationalDatabaseSnapshotRequest& request, const GetRelationalDatabaseSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRelationalDatabaseSnapshot(request), context);
}

GetRelationalDatabaseSnapshotsOutcome LightsailClient::GetRelationalDatabaseSnapshots(const GetRelationalDatabaseSnapshotsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRelationalDatabaseSnapshotsOutcome(GetRelationalDatabaseSnapshotsResult(outcome.GetResult()));
  }
  else
  {
    return GetRelationalDatabaseSnapshotsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetRelationalDatabaseSnapshotsAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetRelationalDatabaseSnapshotsAsyncHelper(const GetRelationalDatabaseSnapshotsRequest& request, const GetRelationalDatabaseSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRelationalDatabaseSnapshots(request), context);
}

GetRelationalDatabasesOutcome LightsailClient::GetRelationalDatabases(const GetRelationalDatabasesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRelationalDatabasesOutcome(GetRelationalDatabasesResult(outcome.GetResult()));
  }
  else
  {
    return GetRelationalDatabasesOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetRelationalDatabasesAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetRelationalDatabasesAsyncHelper(const GetRelationalDatabasesRequest& request, const GetRelationalDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRelationalDatabases(request), context);
}

GetStaticIpOutcome LightsailClient::GetStaticIp(const GetStaticIpRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetStaticIpOutcome(GetStaticIpResult(outcome.GetResult()));
  }
  else
  {
    return GetStaticIpOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetStaticIpAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetStaticIpAsyncHelper(const GetStaticIpRequest& request, const GetStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetStaticIp(request), context);
}

GetStaticIpsOutcome LightsailClient::GetStaticIps(const GetStaticIpsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetStaticIpsOutcome(GetStaticIpsResult(outcome.GetResult()));
  }
  else
  {
    return GetStaticIpsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->GetStaticIpsAsyncHelper( request, handler, context ); } );
}

void LightsailClient::GetStaticIpsAsyncHelper(const GetStaticIpsRequest& request, const GetStaticIpsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetStaticIps(request), context);
}

ImportKeyPairOutcome LightsailClient::ImportKeyPair(const ImportKeyPairRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ImportKeyPairOutcome(ImportKeyPairResult(outcome.GetResult()));
  }
  else
  {
    return ImportKeyPairOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ImportKeyPairAsyncHelper( request, handler, context ); } );
}

void LightsailClient::ImportKeyPairAsyncHelper(const ImportKeyPairRequest& request, const ImportKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ImportKeyPair(request), context);
}

IsVpcPeeredOutcome LightsailClient::IsVpcPeered(const IsVpcPeeredRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return IsVpcPeeredOutcome(IsVpcPeeredResult(outcome.GetResult()));
  }
  else
  {
    return IsVpcPeeredOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->IsVpcPeeredAsyncHelper( request, handler, context ); } );
}

void LightsailClient::IsVpcPeeredAsyncHelper(const IsVpcPeeredRequest& request, const IsVpcPeeredResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, IsVpcPeered(request), context);
}

OpenInstancePublicPortsOutcome LightsailClient::OpenInstancePublicPorts(const OpenInstancePublicPortsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return OpenInstancePublicPortsOutcome(OpenInstancePublicPortsResult(outcome.GetResult()));
  }
  else
  {
    return OpenInstancePublicPortsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->OpenInstancePublicPortsAsyncHelper( request, handler, context ); } );
}

void LightsailClient::OpenInstancePublicPortsAsyncHelper(const OpenInstancePublicPortsRequest& request, const OpenInstancePublicPortsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, OpenInstancePublicPorts(request), context);
}

PeerVpcOutcome LightsailClient::PeerVpc(const PeerVpcRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PeerVpcOutcome(PeerVpcResult(outcome.GetResult()));
  }
  else
  {
    return PeerVpcOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->PeerVpcAsyncHelper( request, handler, context ); } );
}

void LightsailClient::PeerVpcAsyncHelper(const PeerVpcRequest& request, const PeerVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PeerVpc(request), context);
}

PutInstancePublicPortsOutcome LightsailClient::PutInstancePublicPorts(const PutInstancePublicPortsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutInstancePublicPortsOutcome(PutInstancePublicPortsResult(outcome.GetResult()));
  }
  else
  {
    return PutInstancePublicPortsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->PutInstancePublicPortsAsyncHelper( request, handler, context ); } );
}

void LightsailClient::PutInstancePublicPortsAsyncHelper(const PutInstancePublicPortsRequest& request, const PutInstancePublicPortsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutInstancePublicPorts(request), context);
}

RebootInstanceOutcome LightsailClient::RebootInstance(const RebootInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RebootInstanceOutcome(RebootInstanceResult(outcome.GetResult()));
  }
  else
  {
    return RebootInstanceOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->RebootInstanceAsyncHelper( request, handler, context ); } );
}

void LightsailClient::RebootInstanceAsyncHelper(const RebootInstanceRequest& request, const RebootInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RebootInstance(request), context);
}

RebootRelationalDatabaseOutcome LightsailClient::RebootRelationalDatabase(const RebootRelationalDatabaseRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RebootRelationalDatabaseOutcome(RebootRelationalDatabaseResult(outcome.GetResult()));
  }
  else
  {
    return RebootRelationalDatabaseOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->RebootRelationalDatabaseAsyncHelper( request, handler, context ); } );
}

void LightsailClient::RebootRelationalDatabaseAsyncHelper(const RebootRelationalDatabaseRequest& request, const RebootRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RebootRelationalDatabase(request), context);
}

ReleaseStaticIpOutcome LightsailClient::ReleaseStaticIp(const ReleaseStaticIpRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ReleaseStaticIpOutcome(ReleaseStaticIpResult(outcome.GetResult()));
  }
  else
  {
    return ReleaseStaticIpOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ReleaseStaticIpAsyncHelper( request, handler, context ); } );
}

void LightsailClient::ReleaseStaticIpAsyncHelper(const ReleaseStaticIpRequest& request, const ReleaseStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ReleaseStaticIp(request), context);
}

StartInstanceOutcome LightsailClient::StartInstance(const StartInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartInstanceOutcome(StartInstanceResult(outcome.GetResult()));
  }
  else
  {
    return StartInstanceOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->StartInstanceAsyncHelper( request, handler, context ); } );
}

void LightsailClient::StartInstanceAsyncHelper(const StartInstanceRequest& request, const StartInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartInstance(request), context);
}

StartRelationalDatabaseOutcome LightsailClient::StartRelationalDatabase(const StartRelationalDatabaseRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartRelationalDatabaseOutcome(StartRelationalDatabaseResult(outcome.GetResult()));
  }
  else
  {
    return StartRelationalDatabaseOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->StartRelationalDatabaseAsyncHelper( request, handler, context ); } );
}

void LightsailClient::StartRelationalDatabaseAsyncHelper(const StartRelationalDatabaseRequest& request, const StartRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartRelationalDatabase(request), context);
}

StopInstanceOutcome LightsailClient::StopInstance(const StopInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopInstanceOutcome(StopInstanceResult(outcome.GetResult()));
  }
  else
  {
    return StopInstanceOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->StopInstanceAsyncHelper( request, handler, context ); } );
}

void LightsailClient::StopInstanceAsyncHelper(const StopInstanceRequest& request, const StopInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopInstance(request), context);
}

StopRelationalDatabaseOutcome LightsailClient::StopRelationalDatabase(const StopRelationalDatabaseRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopRelationalDatabaseOutcome(StopRelationalDatabaseResult(outcome.GetResult()));
  }
  else
  {
    return StopRelationalDatabaseOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->StopRelationalDatabaseAsyncHelper( request, handler, context ); } );
}

void LightsailClient::StopRelationalDatabaseAsyncHelper(const StopRelationalDatabaseRequest& request, const StopRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopRelationalDatabase(request), context);
}

TagResourceOutcome LightsailClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TagResourceOutcome(TagResourceResult(outcome.GetResult()));
  }
  else
  {
    return TagResourceOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void LightsailClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UnpeerVpcOutcome LightsailClient::UnpeerVpc(const UnpeerVpcRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UnpeerVpcOutcome(UnpeerVpcResult(outcome.GetResult()));
  }
  else
  {
    return UnpeerVpcOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UnpeerVpcAsyncHelper( request, handler, context ); } );
}

void LightsailClient::UnpeerVpcAsyncHelper(const UnpeerVpcRequest& request, const UnpeerVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UnpeerVpc(request), context);
}

UntagResourceOutcome LightsailClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UntagResourceOutcome(UntagResourceResult(outcome.GetResult()));
  }
  else
  {
    return UntagResourceOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void LightsailClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateDomainEntryOutcome LightsailClient::UpdateDomainEntry(const UpdateDomainEntryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateDomainEntryOutcome(UpdateDomainEntryResult(outcome.GetResult()));
  }
  else
  {
    return UpdateDomainEntryOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDomainEntryAsyncHelper( request, handler, context ); } );
}

void LightsailClient::UpdateDomainEntryAsyncHelper(const UpdateDomainEntryRequest& request, const UpdateDomainEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDomainEntry(request), context);
}

UpdateLoadBalancerAttributeOutcome LightsailClient::UpdateLoadBalancerAttribute(const UpdateLoadBalancerAttributeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateLoadBalancerAttributeOutcome(UpdateLoadBalancerAttributeResult(outcome.GetResult()));
  }
  else
  {
    return UpdateLoadBalancerAttributeOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateLoadBalancerAttributeAsyncHelper( request, handler, context ); } );
}

void LightsailClient::UpdateLoadBalancerAttributeAsyncHelper(const UpdateLoadBalancerAttributeRequest& request, const UpdateLoadBalancerAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateLoadBalancerAttribute(request), context);
}

UpdateRelationalDatabaseOutcome LightsailClient::UpdateRelationalDatabase(const UpdateRelationalDatabaseRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateRelationalDatabaseOutcome(UpdateRelationalDatabaseResult(outcome.GetResult()));
  }
  else
  {
    return UpdateRelationalDatabaseOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRelationalDatabaseAsyncHelper( request, handler, context ); } );
}

void LightsailClient::UpdateRelationalDatabaseAsyncHelper(const UpdateRelationalDatabaseRequest& request, const UpdateRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRelationalDatabase(request), context);
}

UpdateRelationalDatabaseParametersOutcome LightsailClient::UpdateRelationalDatabaseParameters(const UpdateRelationalDatabaseParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateRelationalDatabaseParametersOutcome(UpdateRelationalDatabaseParametersResult(outcome.GetResult()));
  }
  else
  {
    return UpdateRelationalDatabaseParametersOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRelationalDatabaseParametersAsyncHelper( request, handler, context ); } );
}

void LightsailClient::UpdateRelationalDatabaseParametersAsyncHelper(const UpdateRelationalDatabaseParametersRequest& request, const UpdateRelationalDatabaseParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRelationalDatabaseParameters(request), context);
}

