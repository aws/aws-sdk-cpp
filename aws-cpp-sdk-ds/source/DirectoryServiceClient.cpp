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

#include <aws/ds/DirectoryServiceClient.h>
#include <aws/ds/DirectoryServiceEndpoint.h>
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
#include <aws/ds/model/CreateLogSubscriptionRequest.h>
#include <aws/ds/model/CreateMicrosoftADRequest.h>
#include <aws/ds/model/CreateSnapshotRequest.h>
#include <aws/ds/model/CreateTrustRequest.h>
#include <aws/ds/model/DeleteConditionalForwarderRequest.h>
#include <aws/ds/model/DeleteDirectoryRequest.h>
#include <aws/ds/model/DeleteLogSubscriptionRequest.h>
#include <aws/ds/model/DeleteSnapshotRequest.h>
#include <aws/ds/model/DeleteTrustRequest.h>
#include <aws/ds/model/DeregisterCertificateRequest.h>
#include <aws/ds/model/DeregisterEventTopicRequest.h>
#include <aws/ds/model/DescribeCertificateRequest.h>
#include <aws/ds/model/DescribeClientAuthenticationSettingsRequest.h>
#include <aws/ds/model/DescribeConditionalForwardersRequest.h>
#include <aws/ds/model/DescribeDirectoriesRequest.h>
#include <aws/ds/model/DescribeDomainControllersRequest.h>
#include <aws/ds/model/DescribeEventTopicsRequest.h>
#include <aws/ds/model/DescribeLDAPSSettingsRequest.h>
#include <aws/ds/model/DescribeRegionsRequest.h>
#include <aws/ds/model/DescribeSettingsRequest.h>
#include <aws/ds/model/DescribeSharedDirectoriesRequest.h>
#include <aws/ds/model/DescribeSnapshotsRequest.h>
#include <aws/ds/model/DescribeTrustsRequest.h>
#include <aws/ds/model/DisableClientAuthenticationRequest.h>
#include <aws/ds/model/DisableLDAPSRequest.h>
#include <aws/ds/model/DisableRadiusRequest.h>
#include <aws/ds/model/DisableSsoRequest.h>
#include <aws/ds/model/EnableClientAuthenticationRequest.h>
#include <aws/ds/model/EnableLDAPSRequest.h>
#include <aws/ds/model/EnableRadiusRequest.h>
#include <aws/ds/model/EnableSsoRequest.h>
#include <aws/ds/model/GetDirectoryLimitsRequest.h>
#include <aws/ds/model/GetSnapshotLimitsRequest.h>
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
#include <aws/ds/model/StartSchemaExtensionRequest.h>
#include <aws/ds/model/UnshareDirectoryRequest.h>
#include <aws/ds/model/UpdateConditionalForwarderRequest.h>
#include <aws/ds/model/UpdateNumberOfDomainControllersRequest.h>
#include <aws/ds/model/UpdateRadiusRequest.h>
#include <aws/ds/model/UpdateSettingsRequest.h>
#include <aws/ds/model/UpdateTrustRequest.h>
#include <aws/ds/model/VerifyTrustRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DirectoryService;
using namespace Aws::DirectoryService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "ds";
static const char* ALLOCATION_TAG = "DirectoryServiceClient";

DirectoryServiceClient::DirectoryServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DirectoryServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DirectoryServiceClient::DirectoryServiceClient(const AWSCredentials& credentials,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DirectoryServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DirectoryServiceClient::DirectoryServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DirectoryServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DirectoryServiceClient::~DirectoryServiceClient()
{
}

void DirectoryServiceClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Directory Service");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + DirectoryServiceEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void DirectoryServiceClient::OverrideEndpoint(const Aws::String& endpoint)
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

AcceptSharedDirectoryOutcome DirectoryServiceClient::AcceptSharedDirectory(const AcceptSharedDirectoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AcceptSharedDirectoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AcceptSharedDirectoryOutcomeCallable DirectoryServiceClient::AcceptSharedDirectoryCallable(const AcceptSharedDirectoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcceptSharedDirectoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcceptSharedDirectory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientAcceptSharedDirectoryAsyncHelper(DirectoryServiceClient const * const clientThis, const AcceptSharedDirectoryRequest& request, const AcceptSharedDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AcceptSharedDirectory(request), context);
}

void DirectoryServiceClient::AcceptSharedDirectoryAsync(const AcceptSharedDirectoryRequest& request, const AcceptSharedDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientAcceptSharedDirectoryAsyncHelper( this, request, handler, context ); } );
}

AddIpRoutesOutcome DirectoryServiceClient::AddIpRoutes(const AddIpRoutesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddIpRoutesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddIpRoutesOutcomeCallable DirectoryServiceClient::AddIpRoutesCallable(const AddIpRoutesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddIpRoutesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddIpRoutes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientAddIpRoutesAsyncHelper(DirectoryServiceClient const * const clientThis, const AddIpRoutesRequest& request, const AddIpRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddIpRoutes(request), context);
}

void DirectoryServiceClient::AddIpRoutesAsync(const AddIpRoutesRequest& request, const AddIpRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientAddIpRoutesAsyncHelper( this, request, handler, context ); } );
}

AddRegionOutcome DirectoryServiceClient::AddRegion(const AddRegionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddRegionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddRegionOutcomeCallable DirectoryServiceClient::AddRegionCallable(const AddRegionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddRegionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddRegion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientAddRegionAsyncHelper(DirectoryServiceClient const * const clientThis, const AddRegionRequest& request, const AddRegionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddRegion(request), context);
}

void DirectoryServiceClient::AddRegionAsync(const AddRegionRequest& request, const AddRegionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientAddRegionAsyncHelper( this, request, handler, context ); } );
}

AddTagsToResourceOutcome DirectoryServiceClient::AddTagsToResource(const AddTagsToResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddTagsToResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddTagsToResourceOutcomeCallable DirectoryServiceClient::AddTagsToResourceCallable(const AddTagsToResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsToResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTagsToResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientAddTagsToResourceAsyncHelper(DirectoryServiceClient const * const clientThis, const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddTagsToResource(request), context);
}

void DirectoryServiceClient::AddTagsToResourceAsync(const AddTagsToResourceRequest& request, const AddTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientAddTagsToResourceAsyncHelper( this, request, handler, context ); } );
}

CancelSchemaExtensionOutcome DirectoryServiceClient::CancelSchemaExtension(const CancelSchemaExtensionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CancelSchemaExtensionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelSchemaExtensionOutcomeCallable DirectoryServiceClient::CancelSchemaExtensionCallable(const CancelSchemaExtensionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelSchemaExtensionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelSchemaExtension(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientCancelSchemaExtensionAsyncHelper(DirectoryServiceClient const * const clientThis, const CancelSchemaExtensionRequest& request, const CancelSchemaExtensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CancelSchemaExtension(request), context);
}

void DirectoryServiceClient::CancelSchemaExtensionAsync(const CancelSchemaExtensionRequest& request, const CancelSchemaExtensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientCancelSchemaExtensionAsyncHelper( this, request, handler, context ); } );
}

ConnectDirectoryOutcome DirectoryServiceClient::ConnectDirectory(const ConnectDirectoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ConnectDirectoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ConnectDirectoryOutcomeCallable DirectoryServiceClient::ConnectDirectoryCallable(const ConnectDirectoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ConnectDirectoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ConnectDirectory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientConnectDirectoryAsyncHelper(DirectoryServiceClient const * const clientThis, const ConnectDirectoryRequest& request, const ConnectDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ConnectDirectory(request), context);
}

void DirectoryServiceClient::ConnectDirectoryAsync(const ConnectDirectoryRequest& request, const ConnectDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientConnectDirectoryAsyncHelper( this, request, handler, context ); } );
}

CreateAliasOutcome DirectoryServiceClient::CreateAlias(const CreateAliasRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAliasOutcomeCallable DirectoryServiceClient::CreateAliasCallable(const CreateAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientCreateAliasAsyncHelper(DirectoryServiceClient const * const clientThis, const CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAlias(request), context);
}

void DirectoryServiceClient::CreateAliasAsync(const CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientCreateAliasAsyncHelper( this, request, handler, context ); } );
}

CreateComputerOutcome DirectoryServiceClient::CreateComputer(const CreateComputerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateComputerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateComputerOutcomeCallable DirectoryServiceClient::CreateComputerCallable(const CreateComputerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateComputerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateComputer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientCreateComputerAsyncHelper(DirectoryServiceClient const * const clientThis, const CreateComputerRequest& request, const CreateComputerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateComputer(request), context);
}

void DirectoryServiceClient::CreateComputerAsync(const CreateComputerRequest& request, const CreateComputerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientCreateComputerAsyncHelper( this, request, handler, context ); } );
}

CreateConditionalForwarderOutcome DirectoryServiceClient::CreateConditionalForwarder(const CreateConditionalForwarderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateConditionalForwarderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateConditionalForwarderOutcomeCallable DirectoryServiceClient::CreateConditionalForwarderCallable(const CreateConditionalForwarderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateConditionalForwarderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConditionalForwarder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientCreateConditionalForwarderAsyncHelper(DirectoryServiceClient const * const clientThis, const CreateConditionalForwarderRequest& request, const CreateConditionalForwarderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateConditionalForwarder(request), context);
}

void DirectoryServiceClient::CreateConditionalForwarderAsync(const CreateConditionalForwarderRequest& request, const CreateConditionalForwarderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientCreateConditionalForwarderAsyncHelper( this, request, handler, context ); } );
}

CreateDirectoryOutcome DirectoryServiceClient::CreateDirectory(const CreateDirectoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDirectoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDirectoryOutcomeCallable DirectoryServiceClient::CreateDirectoryCallable(const CreateDirectoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDirectoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDirectory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientCreateDirectoryAsyncHelper(DirectoryServiceClient const * const clientThis, const CreateDirectoryRequest& request, const CreateDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDirectory(request), context);
}

void DirectoryServiceClient::CreateDirectoryAsync(const CreateDirectoryRequest& request, const CreateDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientCreateDirectoryAsyncHelper( this, request, handler, context ); } );
}

CreateLogSubscriptionOutcome DirectoryServiceClient::CreateLogSubscription(const CreateLogSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateLogSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLogSubscriptionOutcomeCallable DirectoryServiceClient::CreateLogSubscriptionCallable(const CreateLogSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLogSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLogSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientCreateLogSubscriptionAsyncHelper(DirectoryServiceClient const * const clientThis, const CreateLogSubscriptionRequest& request, const CreateLogSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateLogSubscription(request), context);
}

void DirectoryServiceClient::CreateLogSubscriptionAsync(const CreateLogSubscriptionRequest& request, const CreateLogSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientCreateLogSubscriptionAsyncHelper( this, request, handler, context ); } );
}

CreateMicrosoftADOutcome DirectoryServiceClient::CreateMicrosoftAD(const CreateMicrosoftADRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateMicrosoftADOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMicrosoftADOutcomeCallable DirectoryServiceClient::CreateMicrosoftADCallable(const CreateMicrosoftADRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMicrosoftADOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMicrosoftAD(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientCreateMicrosoftADAsyncHelper(DirectoryServiceClient const * const clientThis, const CreateMicrosoftADRequest& request, const CreateMicrosoftADResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateMicrosoftAD(request), context);
}

void DirectoryServiceClient::CreateMicrosoftADAsync(const CreateMicrosoftADRequest& request, const CreateMicrosoftADResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientCreateMicrosoftADAsyncHelper( this, request, handler, context ); } );
}

CreateSnapshotOutcome DirectoryServiceClient::CreateSnapshot(const CreateSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSnapshotOutcomeCallable DirectoryServiceClient::CreateSnapshotCallable(const CreateSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientCreateSnapshotAsyncHelper(DirectoryServiceClient const * const clientThis, const CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateSnapshot(request), context);
}

void DirectoryServiceClient::CreateSnapshotAsync(const CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientCreateSnapshotAsyncHelper( this, request, handler, context ); } );
}

CreateTrustOutcome DirectoryServiceClient::CreateTrust(const CreateTrustRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateTrustOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTrustOutcomeCallable DirectoryServiceClient::CreateTrustCallable(const CreateTrustRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTrustOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTrust(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientCreateTrustAsyncHelper(DirectoryServiceClient const * const clientThis, const CreateTrustRequest& request, const CreateTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateTrust(request), context);
}

void DirectoryServiceClient::CreateTrustAsync(const CreateTrustRequest& request, const CreateTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientCreateTrustAsyncHelper( this, request, handler, context ); } );
}

DeleteConditionalForwarderOutcome DirectoryServiceClient::DeleteConditionalForwarder(const DeleteConditionalForwarderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteConditionalForwarderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteConditionalForwarderOutcomeCallable DirectoryServiceClient::DeleteConditionalForwarderCallable(const DeleteConditionalForwarderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteConditionalForwarderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConditionalForwarder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientDeleteConditionalForwarderAsyncHelper(DirectoryServiceClient const * const clientThis, const DeleteConditionalForwarderRequest& request, const DeleteConditionalForwarderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteConditionalForwarder(request), context);
}

void DirectoryServiceClient::DeleteConditionalForwarderAsync(const DeleteConditionalForwarderRequest& request, const DeleteConditionalForwarderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientDeleteConditionalForwarderAsyncHelper( this, request, handler, context ); } );
}

DeleteDirectoryOutcome DirectoryServiceClient::DeleteDirectory(const DeleteDirectoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDirectoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDirectoryOutcomeCallable DirectoryServiceClient::DeleteDirectoryCallable(const DeleteDirectoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDirectoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDirectory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientDeleteDirectoryAsyncHelper(DirectoryServiceClient const * const clientThis, const DeleteDirectoryRequest& request, const DeleteDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDirectory(request), context);
}

void DirectoryServiceClient::DeleteDirectoryAsync(const DeleteDirectoryRequest& request, const DeleteDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientDeleteDirectoryAsyncHelper( this, request, handler, context ); } );
}

DeleteLogSubscriptionOutcome DirectoryServiceClient::DeleteLogSubscription(const DeleteLogSubscriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteLogSubscriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteLogSubscriptionOutcomeCallable DirectoryServiceClient::DeleteLogSubscriptionCallable(const DeleteLogSubscriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLogSubscriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLogSubscription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientDeleteLogSubscriptionAsyncHelper(DirectoryServiceClient const * const clientThis, const DeleteLogSubscriptionRequest& request, const DeleteLogSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteLogSubscription(request), context);
}

void DirectoryServiceClient::DeleteLogSubscriptionAsync(const DeleteLogSubscriptionRequest& request, const DeleteLogSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientDeleteLogSubscriptionAsyncHelper( this, request, handler, context ); } );
}

DeleteSnapshotOutcome DirectoryServiceClient::DeleteSnapshot(const DeleteSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteSnapshotOutcomeCallable DirectoryServiceClient::DeleteSnapshotCallable(const DeleteSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientDeleteSnapshotAsyncHelper(DirectoryServiceClient const * const clientThis, const DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSnapshot(request), context);
}

void DirectoryServiceClient::DeleteSnapshotAsync(const DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientDeleteSnapshotAsyncHelper( this, request, handler, context ); } );
}

DeleteTrustOutcome DirectoryServiceClient::DeleteTrust(const DeleteTrustRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteTrustOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTrustOutcomeCallable DirectoryServiceClient::DeleteTrustCallable(const DeleteTrustRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTrustOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTrust(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientDeleteTrustAsyncHelper(DirectoryServiceClient const * const clientThis, const DeleteTrustRequest& request, const DeleteTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteTrust(request), context);
}

void DirectoryServiceClient::DeleteTrustAsync(const DeleteTrustRequest& request, const DeleteTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientDeleteTrustAsyncHelper( this, request, handler, context ); } );
}

DeregisterCertificateOutcome DirectoryServiceClient::DeregisterCertificate(const DeregisterCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeregisterCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterCertificateOutcomeCallable DirectoryServiceClient::DeregisterCertificateCallable(const DeregisterCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientDeregisterCertificateAsyncHelper(DirectoryServiceClient const * const clientThis, const DeregisterCertificateRequest& request, const DeregisterCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeregisterCertificate(request), context);
}

void DirectoryServiceClient::DeregisterCertificateAsync(const DeregisterCertificateRequest& request, const DeregisterCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientDeregisterCertificateAsyncHelper( this, request, handler, context ); } );
}

DeregisterEventTopicOutcome DirectoryServiceClient::DeregisterEventTopic(const DeregisterEventTopicRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeregisterEventTopicOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterEventTopicOutcomeCallable DirectoryServiceClient::DeregisterEventTopicCallable(const DeregisterEventTopicRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterEventTopicOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterEventTopic(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientDeregisterEventTopicAsyncHelper(DirectoryServiceClient const * const clientThis, const DeregisterEventTopicRequest& request, const DeregisterEventTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeregisterEventTopic(request), context);
}

void DirectoryServiceClient::DeregisterEventTopicAsync(const DeregisterEventTopicRequest& request, const DeregisterEventTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientDeregisterEventTopicAsyncHelper( this, request, handler, context ); } );
}

DescribeCertificateOutcome DirectoryServiceClient::DescribeCertificate(const DescribeCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeCertificateOutcomeCallable DirectoryServiceClient::DescribeCertificateCallable(const DescribeCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientDescribeCertificateAsyncHelper(DirectoryServiceClient const * const clientThis, const DescribeCertificateRequest& request, const DescribeCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeCertificate(request), context);
}

void DirectoryServiceClient::DescribeCertificateAsync(const DescribeCertificateRequest& request, const DescribeCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientDescribeCertificateAsyncHelper( this, request, handler, context ); } );
}

DescribeClientAuthenticationSettingsOutcome DirectoryServiceClient::DescribeClientAuthenticationSettings(const DescribeClientAuthenticationSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeClientAuthenticationSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeClientAuthenticationSettingsOutcomeCallable DirectoryServiceClient::DescribeClientAuthenticationSettingsCallable(const DescribeClientAuthenticationSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeClientAuthenticationSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeClientAuthenticationSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientDescribeClientAuthenticationSettingsAsyncHelper(DirectoryServiceClient const * const clientThis, const DescribeClientAuthenticationSettingsRequest& request, const DescribeClientAuthenticationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeClientAuthenticationSettings(request), context);
}

void DirectoryServiceClient::DescribeClientAuthenticationSettingsAsync(const DescribeClientAuthenticationSettingsRequest& request, const DescribeClientAuthenticationSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientDescribeClientAuthenticationSettingsAsyncHelper( this, request, handler, context ); } );
}

DescribeConditionalForwardersOutcome DirectoryServiceClient::DescribeConditionalForwarders(const DescribeConditionalForwardersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeConditionalForwardersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeConditionalForwardersOutcomeCallable DirectoryServiceClient::DescribeConditionalForwardersCallable(const DescribeConditionalForwardersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeConditionalForwardersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConditionalForwarders(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientDescribeConditionalForwardersAsyncHelper(DirectoryServiceClient const * const clientThis, const DescribeConditionalForwardersRequest& request, const DescribeConditionalForwardersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeConditionalForwarders(request), context);
}

void DirectoryServiceClient::DescribeConditionalForwardersAsync(const DescribeConditionalForwardersRequest& request, const DescribeConditionalForwardersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientDescribeConditionalForwardersAsyncHelper( this, request, handler, context ); } );
}

DescribeDirectoriesOutcome DirectoryServiceClient::DescribeDirectories(const DescribeDirectoriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDirectoriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDirectoriesOutcomeCallable DirectoryServiceClient::DescribeDirectoriesCallable(const DescribeDirectoriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDirectoriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDirectories(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientDescribeDirectoriesAsyncHelper(DirectoryServiceClient const * const clientThis, const DescribeDirectoriesRequest& request, const DescribeDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDirectories(request), context);
}

void DirectoryServiceClient::DescribeDirectoriesAsync(const DescribeDirectoriesRequest& request, const DescribeDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientDescribeDirectoriesAsyncHelper( this, request, handler, context ); } );
}

DescribeDomainControllersOutcome DirectoryServiceClient::DescribeDomainControllers(const DescribeDomainControllersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDomainControllersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDomainControllersOutcomeCallable DirectoryServiceClient::DescribeDomainControllersCallable(const DescribeDomainControllersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDomainControllersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDomainControllers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientDescribeDomainControllersAsyncHelper(DirectoryServiceClient const * const clientThis, const DescribeDomainControllersRequest& request, const DescribeDomainControllersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDomainControllers(request), context);
}

void DirectoryServiceClient::DescribeDomainControllersAsync(const DescribeDomainControllersRequest& request, const DescribeDomainControllersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientDescribeDomainControllersAsyncHelper( this, request, handler, context ); } );
}

DescribeEventTopicsOutcome DirectoryServiceClient::DescribeEventTopics(const DescribeEventTopicsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEventTopicsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEventTopicsOutcomeCallable DirectoryServiceClient::DescribeEventTopicsCallable(const DescribeEventTopicsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventTopicsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEventTopics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientDescribeEventTopicsAsyncHelper(DirectoryServiceClient const * const clientThis, const DescribeEventTopicsRequest& request, const DescribeEventTopicsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeEventTopics(request), context);
}

void DirectoryServiceClient::DescribeEventTopicsAsync(const DescribeEventTopicsRequest& request, const DescribeEventTopicsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientDescribeEventTopicsAsyncHelper( this, request, handler, context ); } );
}

DescribeLDAPSSettingsOutcome DirectoryServiceClient::DescribeLDAPSSettings(const DescribeLDAPSSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeLDAPSSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeLDAPSSettingsOutcomeCallable DirectoryServiceClient::DescribeLDAPSSettingsCallable(const DescribeLDAPSSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLDAPSSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLDAPSSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientDescribeLDAPSSettingsAsyncHelper(DirectoryServiceClient const * const clientThis, const DescribeLDAPSSettingsRequest& request, const DescribeLDAPSSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeLDAPSSettings(request), context);
}

void DirectoryServiceClient::DescribeLDAPSSettingsAsync(const DescribeLDAPSSettingsRequest& request, const DescribeLDAPSSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientDescribeLDAPSSettingsAsyncHelper( this, request, handler, context ); } );
}

DescribeRegionsOutcome DirectoryServiceClient::DescribeRegions(const DescribeRegionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeRegionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRegionsOutcomeCallable DirectoryServiceClient::DescribeRegionsCallable(const DescribeRegionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRegionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRegions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientDescribeRegionsAsyncHelper(DirectoryServiceClient const * const clientThis, const DescribeRegionsRequest& request, const DescribeRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeRegions(request), context);
}

void DirectoryServiceClient::DescribeRegionsAsync(const DescribeRegionsRequest& request, const DescribeRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientDescribeRegionsAsyncHelper( this, request, handler, context ); } );
}

DescribeSettingsOutcome DirectoryServiceClient::DescribeSettings(const DescribeSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSettingsOutcomeCallable DirectoryServiceClient::DescribeSettingsCallable(const DescribeSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientDescribeSettingsAsyncHelper(DirectoryServiceClient const * const clientThis, const DescribeSettingsRequest& request, const DescribeSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeSettings(request), context);
}

void DirectoryServiceClient::DescribeSettingsAsync(const DescribeSettingsRequest& request, const DescribeSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientDescribeSettingsAsyncHelper( this, request, handler, context ); } );
}

DescribeSharedDirectoriesOutcome DirectoryServiceClient::DescribeSharedDirectories(const DescribeSharedDirectoriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeSharedDirectoriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSharedDirectoriesOutcomeCallable DirectoryServiceClient::DescribeSharedDirectoriesCallable(const DescribeSharedDirectoriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSharedDirectoriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSharedDirectories(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientDescribeSharedDirectoriesAsyncHelper(DirectoryServiceClient const * const clientThis, const DescribeSharedDirectoriesRequest& request, const DescribeSharedDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeSharedDirectories(request), context);
}

void DirectoryServiceClient::DescribeSharedDirectoriesAsync(const DescribeSharedDirectoriesRequest& request, const DescribeSharedDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientDescribeSharedDirectoriesAsyncHelper( this, request, handler, context ); } );
}

DescribeSnapshotsOutcome DirectoryServiceClient::DescribeSnapshots(const DescribeSnapshotsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeSnapshotsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSnapshotsOutcomeCallable DirectoryServiceClient::DescribeSnapshotsCallable(const DescribeSnapshotsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSnapshotsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSnapshots(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientDescribeSnapshotsAsyncHelper(DirectoryServiceClient const * const clientThis, const DescribeSnapshotsRequest& request, const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeSnapshots(request), context);
}

void DirectoryServiceClient::DescribeSnapshotsAsync(const DescribeSnapshotsRequest& request, const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientDescribeSnapshotsAsyncHelper( this, request, handler, context ); } );
}

DescribeTrustsOutcome DirectoryServiceClient::DescribeTrusts(const DescribeTrustsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTrustsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTrustsOutcomeCallable DirectoryServiceClient::DescribeTrustsCallable(const DescribeTrustsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTrustsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTrusts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientDescribeTrustsAsyncHelper(DirectoryServiceClient const * const clientThis, const DescribeTrustsRequest& request, const DescribeTrustsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTrusts(request), context);
}

void DirectoryServiceClient::DescribeTrustsAsync(const DescribeTrustsRequest& request, const DescribeTrustsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientDescribeTrustsAsyncHelper( this, request, handler, context ); } );
}

DisableClientAuthenticationOutcome DirectoryServiceClient::DisableClientAuthentication(const DisableClientAuthenticationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisableClientAuthenticationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableClientAuthenticationOutcomeCallable DirectoryServiceClient::DisableClientAuthenticationCallable(const DisableClientAuthenticationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableClientAuthenticationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableClientAuthentication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientDisableClientAuthenticationAsyncHelper(DirectoryServiceClient const * const clientThis, const DisableClientAuthenticationRequest& request, const DisableClientAuthenticationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisableClientAuthentication(request), context);
}

void DirectoryServiceClient::DisableClientAuthenticationAsync(const DisableClientAuthenticationRequest& request, const DisableClientAuthenticationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientDisableClientAuthenticationAsyncHelper( this, request, handler, context ); } );
}

DisableLDAPSOutcome DirectoryServiceClient::DisableLDAPS(const DisableLDAPSRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisableLDAPSOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableLDAPSOutcomeCallable DirectoryServiceClient::DisableLDAPSCallable(const DisableLDAPSRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableLDAPSOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableLDAPS(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientDisableLDAPSAsyncHelper(DirectoryServiceClient const * const clientThis, const DisableLDAPSRequest& request, const DisableLDAPSResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisableLDAPS(request), context);
}

void DirectoryServiceClient::DisableLDAPSAsync(const DisableLDAPSRequest& request, const DisableLDAPSResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientDisableLDAPSAsyncHelper( this, request, handler, context ); } );
}

DisableRadiusOutcome DirectoryServiceClient::DisableRadius(const DisableRadiusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisableRadiusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableRadiusOutcomeCallable DirectoryServiceClient::DisableRadiusCallable(const DisableRadiusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableRadiusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableRadius(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientDisableRadiusAsyncHelper(DirectoryServiceClient const * const clientThis, const DisableRadiusRequest& request, const DisableRadiusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisableRadius(request), context);
}

void DirectoryServiceClient::DisableRadiusAsync(const DisableRadiusRequest& request, const DisableRadiusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientDisableRadiusAsyncHelper( this, request, handler, context ); } );
}

DisableSsoOutcome DirectoryServiceClient::DisableSso(const DisableSsoRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisableSsoOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableSsoOutcomeCallable DirectoryServiceClient::DisableSsoCallable(const DisableSsoRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableSsoOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableSso(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientDisableSsoAsyncHelper(DirectoryServiceClient const * const clientThis, const DisableSsoRequest& request, const DisableSsoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisableSso(request), context);
}

void DirectoryServiceClient::DisableSsoAsync(const DisableSsoRequest& request, const DisableSsoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientDisableSsoAsyncHelper( this, request, handler, context ); } );
}

EnableClientAuthenticationOutcome DirectoryServiceClient::EnableClientAuthentication(const EnableClientAuthenticationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return EnableClientAuthenticationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableClientAuthenticationOutcomeCallable DirectoryServiceClient::EnableClientAuthenticationCallable(const EnableClientAuthenticationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableClientAuthenticationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableClientAuthentication(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientEnableClientAuthenticationAsyncHelper(DirectoryServiceClient const * const clientThis, const EnableClientAuthenticationRequest& request, const EnableClientAuthenticationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->EnableClientAuthentication(request), context);
}

void DirectoryServiceClient::EnableClientAuthenticationAsync(const EnableClientAuthenticationRequest& request, const EnableClientAuthenticationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientEnableClientAuthenticationAsyncHelper( this, request, handler, context ); } );
}

EnableLDAPSOutcome DirectoryServiceClient::EnableLDAPS(const EnableLDAPSRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return EnableLDAPSOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableLDAPSOutcomeCallable DirectoryServiceClient::EnableLDAPSCallable(const EnableLDAPSRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableLDAPSOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableLDAPS(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientEnableLDAPSAsyncHelper(DirectoryServiceClient const * const clientThis, const EnableLDAPSRequest& request, const EnableLDAPSResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->EnableLDAPS(request), context);
}

void DirectoryServiceClient::EnableLDAPSAsync(const EnableLDAPSRequest& request, const EnableLDAPSResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientEnableLDAPSAsyncHelper( this, request, handler, context ); } );
}

EnableRadiusOutcome DirectoryServiceClient::EnableRadius(const EnableRadiusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return EnableRadiusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableRadiusOutcomeCallable DirectoryServiceClient::EnableRadiusCallable(const EnableRadiusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableRadiusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableRadius(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientEnableRadiusAsyncHelper(DirectoryServiceClient const * const clientThis, const EnableRadiusRequest& request, const EnableRadiusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->EnableRadius(request), context);
}

void DirectoryServiceClient::EnableRadiusAsync(const EnableRadiusRequest& request, const EnableRadiusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientEnableRadiusAsyncHelper( this, request, handler, context ); } );
}

EnableSsoOutcome DirectoryServiceClient::EnableSso(const EnableSsoRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return EnableSsoOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableSsoOutcomeCallable DirectoryServiceClient::EnableSsoCallable(const EnableSsoRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableSsoOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableSso(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientEnableSsoAsyncHelper(DirectoryServiceClient const * const clientThis, const EnableSsoRequest& request, const EnableSsoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->EnableSso(request), context);
}

void DirectoryServiceClient::EnableSsoAsync(const EnableSsoRequest& request, const EnableSsoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientEnableSsoAsyncHelper( this, request, handler, context ); } );
}

GetDirectoryLimitsOutcome DirectoryServiceClient::GetDirectoryLimits(const GetDirectoryLimitsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetDirectoryLimitsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDirectoryLimitsOutcomeCallable DirectoryServiceClient::GetDirectoryLimitsCallable(const GetDirectoryLimitsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDirectoryLimitsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDirectoryLimits(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientGetDirectoryLimitsAsyncHelper(DirectoryServiceClient const * const clientThis, const GetDirectoryLimitsRequest& request, const GetDirectoryLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDirectoryLimits(request), context);
}

void DirectoryServiceClient::GetDirectoryLimitsAsync(const GetDirectoryLimitsRequest& request, const GetDirectoryLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientGetDirectoryLimitsAsyncHelper( this, request, handler, context ); } );
}

GetSnapshotLimitsOutcome DirectoryServiceClient::GetSnapshotLimits(const GetSnapshotLimitsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetSnapshotLimitsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetSnapshotLimitsOutcomeCallable DirectoryServiceClient::GetSnapshotLimitsCallable(const GetSnapshotLimitsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSnapshotLimitsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSnapshotLimits(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientGetSnapshotLimitsAsyncHelper(DirectoryServiceClient const * const clientThis, const GetSnapshotLimitsRequest& request, const GetSnapshotLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSnapshotLimits(request), context);
}

void DirectoryServiceClient::GetSnapshotLimitsAsync(const GetSnapshotLimitsRequest& request, const GetSnapshotLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientGetSnapshotLimitsAsyncHelper( this, request, handler, context ); } );
}

ListCertificatesOutcome DirectoryServiceClient::ListCertificates(const ListCertificatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListCertificatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCertificatesOutcomeCallable DirectoryServiceClient::ListCertificatesCallable(const ListCertificatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCertificatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCertificates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientListCertificatesAsyncHelper(DirectoryServiceClient const * const clientThis, const ListCertificatesRequest& request, const ListCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListCertificates(request), context);
}

void DirectoryServiceClient::ListCertificatesAsync(const ListCertificatesRequest& request, const ListCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientListCertificatesAsyncHelper( this, request, handler, context ); } );
}

ListIpRoutesOutcome DirectoryServiceClient::ListIpRoutes(const ListIpRoutesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListIpRoutesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListIpRoutesOutcomeCallable DirectoryServiceClient::ListIpRoutesCallable(const ListIpRoutesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIpRoutesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIpRoutes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientListIpRoutesAsyncHelper(DirectoryServiceClient const * const clientThis, const ListIpRoutesRequest& request, const ListIpRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListIpRoutes(request), context);
}

void DirectoryServiceClient::ListIpRoutesAsync(const ListIpRoutesRequest& request, const ListIpRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientListIpRoutesAsyncHelper( this, request, handler, context ); } );
}

ListLogSubscriptionsOutcome DirectoryServiceClient::ListLogSubscriptions(const ListLogSubscriptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListLogSubscriptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLogSubscriptionsOutcomeCallable DirectoryServiceClient::ListLogSubscriptionsCallable(const ListLogSubscriptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLogSubscriptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLogSubscriptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientListLogSubscriptionsAsyncHelper(DirectoryServiceClient const * const clientThis, const ListLogSubscriptionsRequest& request, const ListLogSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListLogSubscriptions(request), context);
}

void DirectoryServiceClient::ListLogSubscriptionsAsync(const ListLogSubscriptionsRequest& request, const ListLogSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientListLogSubscriptionsAsyncHelper( this, request, handler, context ); } );
}

ListSchemaExtensionsOutcome DirectoryServiceClient::ListSchemaExtensions(const ListSchemaExtensionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSchemaExtensionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSchemaExtensionsOutcomeCallable DirectoryServiceClient::ListSchemaExtensionsCallable(const ListSchemaExtensionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSchemaExtensionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSchemaExtensions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientListSchemaExtensionsAsyncHelper(DirectoryServiceClient const * const clientThis, const ListSchemaExtensionsRequest& request, const ListSchemaExtensionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSchemaExtensions(request), context);
}

void DirectoryServiceClient::ListSchemaExtensionsAsync(const ListSchemaExtensionsRequest& request, const ListSchemaExtensionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientListSchemaExtensionsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome DirectoryServiceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable DirectoryServiceClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientListTagsForResourceAsyncHelper(DirectoryServiceClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void DirectoryServiceClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

RegisterCertificateOutcome DirectoryServiceClient::RegisterCertificate(const RegisterCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RegisterCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterCertificateOutcomeCallable DirectoryServiceClient::RegisterCertificateCallable(const RegisterCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientRegisterCertificateAsyncHelper(DirectoryServiceClient const * const clientThis, const RegisterCertificateRequest& request, const RegisterCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterCertificate(request), context);
}

void DirectoryServiceClient::RegisterCertificateAsync(const RegisterCertificateRequest& request, const RegisterCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientRegisterCertificateAsyncHelper( this, request, handler, context ); } );
}

RegisterEventTopicOutcome DirectoryServiceClient::RegisterEventTopic(const RegisterEventTopicRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RegisterEventTopicOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterEventTopicOutcomeCallable DirectoryServiceClient::RegisterEventTopicCallable(const RegisterEventTopicRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterEventTopicOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterEventTopic(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientRegisterEventTopicAsyncHelper(DirectoryServiceClient const * const clientThis, const RegisterEventTopicRequest& request, const RegisterEventTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterEventTopic(request), context);
}

void DirectoryServiceClient::RegisterEventTopicAsync(const RegisterEventTopicRequest& request, const RegisterEventTopicResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientRegisterEventTopicAsyncHelper( this, request, handler, context ); } );
}

RejectSharedDirectoryOutcome DirectoryServiceClient::RejectSharedDirectory(const RejectSharedDirectoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RejectSharedDirectoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RejectSharedDirectoryOutcomeCallable DirectoryServiceClient::RejectSharedDirectoryCallable(const RejectSharedDirectoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RejectSharedDirectoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RejectSharedDirectory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientRejectSharedDirectoryAsyncHelper(DirectoryServiceClient const * const clientThis, const RejectSharedDirectoryRequest& request, const RejectSharedDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RejectSharedDirectory(request), context);
}

void DirectoryServiceClient::RejectSharedDirectoryAsync(const RejectSharedDirectoryRequest& request, const RejectSharedDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientRejectSharedDirectoryAsyncHelper( this, request, handler, context ); } );
}

RemoveIpRoutesOutcome DirectoryServiceClient::RemoveIpRoutes(const RemoveIpRoutesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveIpRoutesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveIpRoutesOutcomeCallable DirectoryServiceClient::RemoveIpRoutesCallable(const RemoveIpRoutesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveIpRoutesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveIpRoutes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientRemoveIpRoutesAsyncHelper(DirectoryServiceClient const * const clientThis, const RemoveIpRoutesRequest& request, const RemoveIpRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveIpRoutes(request), context);
}

void DirectoryServiceClient::RemoveIpRoutesAsync(const RemoveIpRoutesRequest& request, const RemoveIpRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientRemoveIpRoutesAsyncHelper( this, request, handler, context ); } );
}

RemoveRegionOutcome DirectoryServiceClient::RemoveRegion(const RemoveRegionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveRegionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveRegionOutcomeCallable DirectoryServiceClient::RemoveRegionCallable(const RemoveRegionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveRegionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveRegion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientRemoveRegionAsyncHelper(DirectoryServiceClient const * const clientThis, const RemoveRegionRequest& request, const RemoveRegionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveRegion(request), context);
}

void DirectoryServiceClient::RemoveRegionAsync(const RemoveRegionRequest& request, const RemoveRegionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientRemoveRegionAsyncHelper( this, request, handler, context ); } );
}

RemoveTagsFromResourceOutcome DirectoryServiceClient::RemoveTagsFromResource(const RemoveTagsFromResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveTagsFromResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveTagsFromResourceOutcomeCallable DirectoryServiceClient::RemoveTagsFromResourceCallable(const RemoveTagsFromResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsFromResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTagsFromResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientRemoveTagsFromResourceAsyncHelper(DirectoryServiceClient const * const clientThis, const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveTagsFromResource(request), context);
}

void DirectoryServiceClient::RemoveTagsFromResourceAsync(const RemoveTagsFromResourceRequest& request, const RemoveTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientRemoveTagsFromResourceAsyncHelper( this, request, handler, context ); } );
}

ResetUserPasswordOutcome DirectoryServiceClient::ResetUserPassword(const ResetUserPasswordRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ResetUserPasswordOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ResetUserPasswordOutcomeCallable DirectoryServiceClient::ResetUserPasswordCallable(const ResetUserPasswordRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetUserPasswordOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetUserPassword(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientResetUserPasswordAsyncHelper(DirectoryServiceClient const * const clientThis, const ResetUserPasswordRequest& request, const ResetUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ResetUserPassword(request), context);
}

void DirectoryServiceClient::ResetUserPasswordAsync(const ResetUserPasswordRequest& request, const ResetUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientResetUserPasswordAsyncHelper( this, request, handler, context ); } );
}

RestoreFromSnapshotOutcome DirectoryServiceClient::RestoreFromSnapshot(const RestoreFromSnapshotRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RestoreFromSnapshotOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RestoreFromSnapshotOutcomeCallable DirectoryServiceClient::RestoreFromSnapshotCallable(const RestoreFromSnapshotRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RestoreFromSnapshotOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RestoreFromSnapshot(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientRestoreFromSnapshotAsyncHelper(DirectoryServiceClient const * const clientThis, const RestoreFromSnapshotRequest& request, const RestoreFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RestoreFromSnapshot(request), context);
}

void DirectoryServiceClient::RestoreFromSnapshotAsync(const RestoreFromSnapshotRequest& request, const RestoreFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientRestoreFromSnapshotAsyncHelper( this, request, handler, context ); } );
}

ShareDirectoryOutcome DirectoryServiceClient::ShareDirectory(const ShareDirectoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ShareDirectoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ShareDirectoryOutcomeCallable DirectoryServiceClient::ShareDirectoryCallable(const ShareDirectoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ShareDirectoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ShareDirectory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientShareDirectoryAsyncHelper(DirectoryServiceClient const * const clientThis, const ShareDirectoryRequest& request, const ShareDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ShareDirectory(request), context);
}

void DirectoryServiceClient::ShareDirectoryAsync(const ShareDirectoryRequest& request, const ShareDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientShareDirectoryAsyncHelper( this, request, handler, context ); } );
}

StartSchemaExtensionOutcome DirectoryServiceClient::StartSchemaExtension(const StartSchemaExtensionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartSchemaExtensionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartSchemaExtensionOutcomeCallable DirectoryServiceClient::StartSchemaExtensionCallable(const StartSchemaExtensionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartSchemaExtensionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartSchemaExtension(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientStartSchemaExtensionAsyncHelper(DirectoryServiceClient const * const clientThis, const StartSchemaExtensionRequest& request, const StartSchemaExtensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartSchemaExtension(request), context);
}

void DirectoryServiceClient::StartSchemaExtensionAsync(const StartSchemaExtensionRequest& request, const StartSchemaExtensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientStartSchemaExtensionAsyncHelper( this, request, handler, context ); } );
}

UnshareDirectoryOutcome DirectoryServiceClient::UnshareDirectory(const UnshareDirectoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UnshareDirectoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UnshareDirectoryOutcomeCallable DirectoryServiceClient::UnshareDirectoryCallable(const UnshareDirectoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UnshareDirectoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UnshareDirectory(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientUnshareDirectoryAsyncHelper(DirectoryServiceClient const * const clientThis, const UnshareDirectoryRequest& request, const UnshareDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UnshareDirectory(request), context);
}

void DirectoryServiceClient::UnshareDirectoryAsync(const UnshareDirectoryRequest& request, const UnshareDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientUnshareDirectoryAsyncHelper( this, request, handler, context ); } );
}

UpdateConditionalForwarderOutcome DirectoryServiceClient::UpdateConditionalForwarder(const UpdateConditionalForwarderRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateConditionalForwarderOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateConditionalForwarderOutcomeCallable DirectoryServiceClient::UpdateConditionalForwarderCallable(const UpdateConditionalForwarderRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateConditionalForwarderOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConditionalForwarder(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientUpdateConditionalForwarderAsyncHelper(DirectoryServiceClient const * const clientThis, const UpdateConditionalForwarderRequest& request, const UpdateConditionalForwarderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateConditionalForwarder(request), context);
}

void DirectoryServiceClient::UpdateConditionalForwarderAsync(const UpdateConditionalForwarderRequest& request, const UpdateConditionalForwarderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientUpdateConditionalForwarderAsyncHelper( this, request, handler, context ); } );
}

UpdateNumberOfDomainControllersOutcome DirectoryServiceClient::UpdateNumberOfDomainControllers(const UpdateNumberOfDomainControllersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateNumberOfDomainControllersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateNumberOfDomainControllersOutcomeCallable DirectoryServiceClient::UpdateNumberOfDomainControllersCallable(const UpdateNumberOfDomainControllersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateNumberOfDomainControllersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateNumberOfDomainControllers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientUpdateNumberOfDomainControllersAsyncHelper(DirectoryServiceClient const * const clientThis, const UpdateNumberOfDomainControllersRequest& request, const UpdateNumberOfDomainControllersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateNumberOfDomainControllers(request), context);
}

void DirectoryServiceClient::UpdateNumberOfDomainControllersAsync(const UpdateNumberOfDomainControllersRequest& request, const UpdateNumberOfDomainControllersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientUpdateNumberOfDomainControllersAsyncHelper( this, request, handler, context ); } );
}

UpdateRadiusOutcome DirectoryServiceClient::UpdateRadius(const UpdateRadiusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateRadiusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRadiusOutcomeCallable DirectoryServiceClient::UpdateRadiusCallable(const UpdateRadiusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRadiusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRadius(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientUpdateRadiusAsyncHelper(DirectoryServiceClient const * const clientThis, const UpdateRadiusRequest& request, const UpdateRadiusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRadius(request), context);
}

void DirectoryServiceClient::UpdateRadiusAsync(const UpdateRadiusRequest& request, const UpdateRadiusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientUpdateRadiusAsyncHelper( this, request, handler, context ); } );
}

UpdateSettingsOutcome DirectoryServiceClient::UpdateSettings(const UpdateSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSettingsOutcomeCallable DirectoryServiceClient::UpdateSettingsCallable(const UpdateSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientUpdateSettingsAsyncHelper(DirectoryServiceClient const * const clientThis, const UpdateSettingsRequest& request, const UpdateSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateSettings(request), context);
}

void DirectoryServiceClient::UpdateSettingsAsync(const UpdateSettingsRequest& request, const UpdateSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientUpdateSettingsAsyncHelper( this, request, handler, context ); } );
}

UpdateTrustOutcome DirectoryServiceClient::UpdateTrust(const UpdateTrustRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateTrustOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTrustOutcomeCallable DirectoryServiceClient::UpdateTrustCallable(const UpdateTrustRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTrustOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTrust(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientUpdateTrustAsyncHelper(DirectoryServiceClient const * const clientThis, const UpdateTrustRequest& request, const UpdateTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateTrust(request), context);
}

void DirectoryServiceClient::UpdateTrustAsync(const UpdateTrustRequest& request, const UpdateTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientUpdateTrustAsyncHelper( this, request, handler, context ); } );
}

VerifyTrustOutcome DirectoryServiceClient::VerifyTrust(const VerifyTrustRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return VerifyTrustOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

VerifyTrustOutcomeCallable DirectoryServiceClient::VerifyTrustCallable(const VerifyTrustRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< VerifyTrustOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->VerifyTrust(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectoryServiceClientVerifyTrustAsyncHelper(DirectoryServiceClient const * const clientThis, const VerifyTrustRequest& request, const VerifyTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->VerifyTrust(request), context);
}

void DirectoryServiceClient::VerifyTrustAsync(const VerifyTrustRequest& request, const VerifyTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DirectoryServiceClientVerifyTrustAsyncHelper( this, request, handler, context ); } );
}

