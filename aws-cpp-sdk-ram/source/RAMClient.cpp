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

#include <aws/ram/RAMClient.h>
#include <aws/ram/RAMEndpoint.h>
#include <aws/ram/RAMErrorMarshaller.h>
#include <aws/ram/model/AcceptResourceShareInvitationRequest.h>
#include <aws/ram/model/AssociateResourceShareRequest.h>
#include <aws/ram/model/AssociateResourceSharePermissionRequest.h>
#include <aws/ram/model/CreateResourceShareRequest.h>
#include <aws/ram/model/DeleteResourceShareRequest.h>
#include <aws/ram/model/DisassociateResourceShareRequest.h>
#include <aws/ram/model/DisassociateResourceSharePermissionRequest.h>
#include <aws/ram/model/EnableSharingWithAwsOrganizationRequest.h>
#include <aws/ram/model/GetPermissionRequest.h>
#include <aws/ram/model/GetResourcePoliciesRequest.h>
#include <aws/ram/model/GetResourceShareAssociationsRequest.h>
#include <aws/ram/model/GetResourceShareInvitationsRequest.h>
#include <aws/ram/model/GetResourceSharesRequest.h>
#include <aws/ram/model/ListPendingInvitationResourcesRequest.h>
#include <aws/ram/model/ListPermissionVersionsRequest.h>
#include <aws/ram/model/ListPermissionsRequest.h>
#include <aws/ram/model/ListPrincipalsRequest.h>
#include <aws/ram/model/ListResourceSharePermissionsRequest.h>
#include <aws/ram/model/ListResourceTypesRequest.h>
#include <aws/ram/model/ListResourcesRequest.h>
#include <aws/ram/model/PromoteResourceShareCreatedFromPolicyRequest.h>
#include <aws/ram/model/RejectResourceShareInvitationRequest.h>
#include <aws/ram/model/TagResourceRequest.h>
#include <aws/ram/model/UntagResourceRequest.h>
#include <aws/ram/model/UpdateResourceShareRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::RAM;
using namespace Aws::RAM::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "ram";
static const char* ALLOCATION_TAG = "RAMClient";

RAMClient::RAMClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RAMErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RAMClient::RAMClient(const AWSCredentials& credentials,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RAMErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RAMClient::RAMClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<RAMErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

RAMClient::~RAMClient()
{
}

void RAMClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("RAM");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + RAMEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void RAMClient::OverrideEndpoint(const Aws::String& endpoint)
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

AcceptResourceShareInvitationOutcome RAMClient::AcceptResourceShareInvitation(const AcceptResourceShareInvitationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/acceptresourceshareinvitation");
  return AcceptResourceShareInvitationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AcceptResourceShareInvitationOutcomeCallable RAMClient::AcceptResourceShareInvitationCallable(const AcceptResourceShareInvitationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcceptResourceShareInvitationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcceptResourceShareInvitation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RAMClientAcceptResourceShareInvitationAsyncHelper(RAMClient const * const clientThis, const AcceptResourceShareInvitationRequest& request, const AcceptResourceShareInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AcceptResourceShareInvitation(request), context);
}

void RAMClient::AcceptResourceShareInvitationAsync(const AcceptResourceShareInvitationRequest& request, const AcceptResourceShareInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RAMClientAcceptResourceShareInvitationAsyncHelper( this, request, handler, context ); } );
}

AssociateResourceShareOutcome RAMClient::AssociateResourceShare(const AssociateResourceShareRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/associateresourceshare");
  return AssociateResourceShareOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateResourceShareOutcomeCallable RAMClient::AssociateResourceShareCallable(const AssociateResourceShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateResourceShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateResourceShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RAMClientAssociateResourceShareAsyncHelper(RAMClient const * const clientThis, const AssociateResourceShareRequest& request, const AssociateResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateResourceShare(request), context);
}

void RAMClient::AssociateResourceShareAsync(const AssociateResourceShareRequest& request, const AssociateResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RAMClientAssociateResourceShareAsyncHelper( this, request, handler, context ); } );
}

AssociateResourceSharePermissionOutcome RAMClient::AssociateResourceSharePermission(const AssociateResourceSharePermissionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/associateresourcesharepermission");
  return AssociateResourceSharePermissionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateResourceSharePermissionOutcomeCallable RAMClient::AssociateResourceSharePermissionCallable(const AssociateResourceSharePermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateResourceSharePermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateResourceSharePermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RAMClientAssociateResourceSharePermissionAsyncHelper(RAMClient const * const clientThis, const AssociateResourceSharePermissionRequest& request, const AssociateResourceSharePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateResourceSharePermission(request), context);
}

void RAMClient::AssociateResourceSharePermissionAsync(const AssociateResourceSharePermissionRequest& request, const AssociateResourceSharePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RAMClientAssociateResourceSharePermissionAsyncHelper( this, request, handler, context ); } );
}

CreateResourceShareOutcome RAMClient::CreateResourceShare(const CreateResourceShareRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/createresourceshare");
  return CreateResourceShareOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateResourceShareOutcomeCallable RAMClient::CreateResourceShareCallable(const CreateResourceShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateResourceShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateResourceShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RAMClientCreateResourceShareAsyncHelper(RAMClient const * const clientThis, const CreateResourceShareRequest& request, const CreateResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateResourceShare(request), context);
}

void RAMClient::CreateResourceShareAsync(const CreateResourceShareRequest& request, const CreateResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RAMClientCreateResourceShareAsyncHelper( this, request, handler, context ); } );
}

DeleteResourceShareOutcome RAMClient::DeleteResourceShare(const DeleteResourceShareRequest& request) const
{
  if (!request.ResourceShareArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteResourceShare", "Required field: ResourceShareArn, is not set");
    return DeleteResourceShareOutcome(Aws::Client::AWSError<RAMErrors>(RAMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceShareArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/deleteresourceshare");
  return DeleteResourceShareOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourceShareOutcomeCallable RAMClient::DeleteResourceShareCallable(const DeleteResourceShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourceShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResourceShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RAMClientDeleteResourceShareAsyncHelper(RAMClient const * const clientThis, const DeleteResourceShareRequest& request, const DeleteResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteResourceShare(request), context);
}

void RAMClient::DeleteResourceShareAsync(const DeleteResourceShareRequest& request, const DeleteResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RAMClientDeleteResourceShareAsyncHelper( this, request, handler, context ); } );
}

DisassociateResourceShareOutcome RAMClient::DisassociateResourceShare(const DisassociateResourceShareRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/disassociateresourceshare");
  return DisassociateResourceShareOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateResourceShareOutcomeCallable RAMClient::DisassociateResourceShareCallable(const DisassociateResourceShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateResourceShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateResourceShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RAMClientDisassociateResourceShareAsyncHelper(RAMClient const * const clientThis, const DisassociateResourceShareRequest& request, const DisassociateResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateResourceShare(request), context);
}

void RAMClient::DisassociateResourceShareAsync(const DisassociateResourceShareRequest& request, const DisassociateResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RAMClientDisassociateResourceShareAsyncHelper( this, request, handler, context ); } );
}

DisassociateResourceSharePermissionOutcome RAMClient::DisassociateResourceSharePermission(const DisassociateResourceSharePermissionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/disassociateresourcesharepermission");
  return DisassociateResourceSharePermissionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateResourceSharePermissionOutcomeCallable RAMClient::DisassociateResourceSharePermissionCallable(const DisassociateResourceSharePermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateResourceSharePermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateResourceSharePermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RAMClientDisassociateResourceSharePermissionAsyncHelper(RAMClient const * const clientThis, const DisassociateResourceSharePermissionRequest& request, const DisassociateResourceSharePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateResourceSharePermission(request), context);
}

void RAMClient::DisassociateResourceSharePermissionAsync(const DisassociateResourceSharePermissionRequest& request, const DisassociateResourceSharePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RAMClientDisassociateResourceSharePermissionAsyncHelper( this, request, handler, context ); } );
}

EnableSharingWithAwsOrganizationOutcome RAMClient::EnableSharingWithAwsOrganization(const EnableSharingWithAwsOrganizationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/enablesharingwithawsorganization");
  return EnableSharingWithAwsOrganizationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableSharingWithAwsOrganizationOutcomeCallable RAMClient::EnableSharingWithAwsOrganizationCallable(const EnableSharingWithAwsOrganizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableSharingWithAwsOrganizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableSharingWithAwsOrganization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RAMClientEnableSharingWithAwsOrganizationAsyncHelper(RAMClient const * const clientThis, const EnableSharingWithAwsOrganizationRequest& request, const EnableSharingWithAwsOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->EnableSharingWithAwsOrganization(request), context);
}

void RAMClient::EnableSharingWithAwsOrganizationAsync(const EnableSharingWithAwsOrganizationRequest& request, const EnableSharingWithAwsOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RAMClientEnableSharingWithAwsOrganizationAsyncHelper( this, request, handler, context ); } );
}

GetPermissionOutcome RAMClient::GetPermission(const GetPermissionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/getpermission");
  return GetPermissionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPermissionOutcomeCallable RAMClient::GetPermissionCallable(const GetPermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RAMClientGetPermissionAsyncHelper(RAMClient const * const clientThis, const GetPermissionRequest& request, const GetPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetPermission(request), context);
}

void RAMClient::GetPermissionAsync(const GetPermissionRequest& request, const GetPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RAMClientGetPermissionAsyncHelper( this, request, handler, context ); } );
}

GetResourcePoliciesOutcome RAMClient::GetResourcePolicies(const GetResourcePoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/getresourcepolicies");
  return GetResourcePoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetResourcePoliciesOutcomeCallable RAMClient::GetResourcePoliciesCallable(const GetResourcePoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourcePoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResourcePolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RAMClientGetResourcePoliciesAsyncHelper(RAMClient const * const clientThis, const GetResourcePoliciesRequest& request, const GetResourcePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetResourcePolicies(request), context);
}

void RAMClient::GetResourcePoliciesAsync(const GetResourcePoliciesRequest& request, const GetResourcePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RAMClientGetResourcePoliciesAsyncHelper( this, request, handler, context ); } );
}

GetResourceShareAssociationsOutcome RAMClient::GetResourceShareAssociations(const GetResourceShareAssociationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/getresourceshareassociations");
  return GetResourceShareAssociationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetResourceShareAssociationsOutcomeCallable RAMClient::GetResourceShareAssociationsCallable(const GetResourceShareAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourceShareAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResourceShareAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RAMClientGetResourceShareAssociationsAsyncHelper(RAMClient const * const clientThis, const GetResourceShareAssociationsRequest& request, const GetResourceShareAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetResourceShareAssociations(request), context);
}

void RAMClient::GetResourceShareAssociationsAsync(const GetResourceShareAssociationsRequest& request, const GetResourceShareAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RAMClientGetResourceShareAssociationsAsyncHelper( this, request, handler, context ); } );
}

GetResourceShareInvitationsOutcome RAMClient::GetResourceShareInvitations(const GetResourceShareInvitationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/getresourceshareinvitations");
  return GetResourceShareInvitationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetResourceShareInvitationsOutcomeCallable RAMClient::GetResourceShareInvitationsCallable(const GetResourceShareInvitationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourceShareInvitationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResourceShareInvitations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RAMClientGetResourceShareInvitationsAsyncHelper(RAMClient const * const clientThis, const GetResourceShareInvitationsRequest& request, const GetResourceShareInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetResourceShareInvitations(request), context);
}

void RAMClient::GetResourceShareInvitationsAsync(const GetResourceShareInvitationsRequest& request, const GetResourceShareInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RAMClientGetResourceShareInvitationsAsyncHelper( this, request, handler, context ); } );
}

GetResourceSharesOutcome RAMClient::GetResourceShares(const GetResourceSharesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/getresourceshares");
  return GetResourceSharesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetResourceSharesOutcomeCallable RAMClient::GetResourceSharesCallable(const GetResourceSharesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourceSharesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResourceShares(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RAMClientGetResourceSharesAsyncHelper(RAMClient const * const clientThis, const GetResourceSharesRequest& request, const GetResourceSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetResourceShares(request), context);
}

void RAMClient::GetResourceSharesAsync(const GetResourceSharesRequest& request, const GetResourceSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RAMClientGetResourceSharesAsyncHelper( this, request, handler, context ); } );
}

ListPendingInvitationResourcesOutcome RAMClient::ListPendingInvitationResources(const ListPendingInvitationResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/listpendinginvitationresources");
  return ListPendingInvitationResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPendingInvitationResourcesOutcomeCallable RAMClient::ListPendingInvitationResourcesCallable(const ListPendingInvitationResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPendingInvitationResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPendingInvitationResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RAMClientListPendingInvitationResourcesAsyncHelper(RAMClient const * const clientThis, const ListPendingInvitationResourcesRequest& request, const ListPendingInvitationResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPendingInvitationResources(request), context);
}

void RAMClient::ListPendingInvitationResourcesAsync(const ListPendingInvitationResourcesRequest& request, const ListPendingInvitationResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RAMClientListPendingInvitationResourcesAsyncHelper( this, request, handler, context ); } );
}

ListPermissionVersionsOutcome RAMClient::ListPermissionVersions(const ListPermissionVersionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/listpermissionversions");
  return ListPermissionVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPermissionVersionsOutcomeCallable RAMClient::ListPermissionVersionsCallable(const ListPermissionVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPermissionVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPermissionVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RAMClientListPermissionVersionsAsyncHelper(RAMClient const * const clientThis, const ListPermissionVersionsRequest& request, const ListPermissionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPermissionVersions(request), context);
}

void RAMClient::ListPermissionVersionsAsync(const ListPermissionVersionsRequest& request, const ListPermissionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RAMClientListPermissionVersionsAsyncHelper( this, request, handler, context ); } );
}

ListPermissionsOutcome RAMClient::ListPermissions(const ListPermissionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/listpermissions");
  return ListPermissionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPermissionsOutcomeCallable RAMClient::ListPermissionsCallable(const ListPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RAMClientListPermissionsAsyncHelper(RAMClient const * const clientThis, const ListPermissionsRequest& request, const ListPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPermissions(request), context);
}

void RAMClient::ListPermissionsAsync(const ListPermissionsRequest& request, const ListPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RAMClientListPermissionsAsyncHelper( this, request, handler, context ); } );
}

ListPrincipalsOutcome RAMClient::ListPrincipals(const ListPrincipalsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/listprincipals");
  return ListPrincipalsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPrincipalsOutcomeCallable RAMClient::ListPrincipalsCallable(const ListPrincipalsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPrincipalsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPrincipals(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RAMClientListPrincipalsAsyncHelper(RAMClient const * const clientThis, const ListPrincipalsRequest& request, const ListPrincipalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPrincipals(request), context);
}

void RAMClient::ListPrincipalsAsync(const ListPrincipalsRequest& request, const ListPrincipalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RAMClientListPrincipalsAsyncHelper( this, request, handler, context ); } );
}

ListResourceSharePermissionsOutcome RAMClient::ListResourceSharePermissions(const ListResourceSharePermissionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/listresourcesharepermissions");
  return ListResourceSharePermissionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResourceSharePermissionsOutcomeCallable RAMClient::ListResourceSharePermissionsCallable(const ListResourceSharePermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourceSharePermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResourceSharePermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RAMClientListResourceSharePermissionsAsyncHelper(RAMClient const * const clientThis, const ListResourceSharePermissionsRequest& request, const ListResourceSharePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListResourceSharePermissions(request), context);
}

void RAMClient::ListResourceSharePermissionsAsync(const ListResourceSharePermissionsRequest& request, const ListResourceSharePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RAMClientListResourceSharePermissionsAsyncHelper( this, request, handler, context ); } );
}

ListResourceTypesOutcome RAMClient::ListResourceTypes(const ListResourceTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/listresourcetypes");
  return ListResourceTypesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResourceTypesOutcomeCallable RAMClient::ListResourceTypesCallable(const ListResourceTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourceTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResourceTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RAMClientListResourceTypesAsyncHelper(RAMClient const * const clientThis, const ListResourceTypesRequest& request, const ListResourceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListResourceTypes(request), context);
}

void RAMClient::ListResourceTypesAsync(const ListResourceTypesRequest& request, const ListResourceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RAMClientListResourceTypesAsyncHelper( this, request, handler, context ); } );
}

ListResourcesOutcome RAMClient::ListResources(const ListResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/listresources");
  return ListResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResourcesOutcomeCallable RAMClient::ListResourcesCallable(const ListResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RAMClientListResourcesAsyncHelper(RAMClient const * const clientThis, const ListResourcesRequest& request, const ListResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListResources(request), context);
}

void RAMClient::ListResourcesAsync(const ListResourcesRequest& request, const ListResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RAMClientListResourcesAsyncHelper( this, request, handler, context ); } );
}

PromoteResourceShareCreatedFromPolicyOutcome RAMClient::PromoteResourceShareCreatedFromPolicy(const PromoteResourceShareCreatedFromPolicyRequest& request) const
{
  if (!request.ResourceShareArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PromoteResourceShareCreatedFromPolicy", "Required field: ResourceShareArn, is not set");
    return PromoteResourceShareCreatedFromPolicyOutcome(Aws::Client::AWSError<RAMErrors>(RAMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceShareArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/promoteresourcesharecreatedfrompolicy");
  return PromoteResourceShareCreatedFromPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PromoteResourceShareCreatedFromPolicyOutcomeCallable RAMClient::PromoteResourceShareCreatedFromPolicyCallable(const PromoteResourceShareCreatedFromPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PromoteResourceShareCreatedFromPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PromoteResourceShareCreatedFromPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RAMClientPromoteResourceShareCreatedFromPolicyAsyncHelper(RAMClient const * const clientThis, const PromoteResourceShareCreatedFromPolicyRequest& request, const PromoteResourceShareCreatedFromPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PromoteResourceShareCreatedFromPolicy(request), context);
}

void RAMClient::PromoteResourceShareCreatedFromPolicyAsync(const PromoteResourceShareCreatedFromPolicyRequest& request, const PromoteResourceShareCreatedFromPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RAMClientPromoteResourceShareCreatedFromPolicyAsyncHelper( this, request, handler, context ); } );
}

RejectResourceShareInvitationOutcome RAMClient::RejectResourceShareInvitation(const RejectResourceShareInvitationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/rejectresourceshareinvitation");
  return RejectResourceShareInvitationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RejectResourceShareInvitationOutcomeCallable RAMClient::RejectResourceShareInvitationCallable(const RejectResourceShareInvitationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RejectResourceShareInvitationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RejectResourceShareInvitation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RAMClientRejectResourceShareInvitationAsyncHelper(RAMClient const * const clientThis, const RejectResourceShareInvitationRequest& request, const RejectResourceShareInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RejectResourceShareInvitation(request), context);
}

void RAMClient::RejectResourceShareInvitationAsync(const RejectResourceShareInvitationRequest& request, const RejectResourceShareInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RAMClientRejectResourceShareInvitationAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome RAMClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tagresource");
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable RAMClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RAMClientTagResourceAsyncHelper(RAMClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void RAMClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RAMClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome RAMClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/untagresource");
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable RAMClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RAMClientUntagResourceAsyncHelper(RAMClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void RAMClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RAMClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateResourceShareOutcome RAMClient::UpdateResourceShare(const UpdateResourceShareRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/updateresourceshare");
  return UpdateResourceShareOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateResourceShareOutcomeCallable RAMClient::UpdateResourceShareCallable(const UpdateResourceShareRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateResourceShareOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateResourceShare(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void RAMClientUpdateResourceShareAsyncHelper(RAMClient const * const clientThis, const UpdateResourceShareRequest& request, const UpdateResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateResourceShare(request), context);
}

void RAMClient::UpdateResourceShareAsync(const UpdateResourceShareRequest& request, const UpdateResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ RAMClientUpdateResourceShareAsyncHelper( this, request, handler, context ); } );
}

