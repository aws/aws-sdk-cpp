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

void RAMClient::AcceptResourceShareInvitationAsync(const AcceptResourceShareInvitationRequest& request, const AcceptResourceShareInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AcceptResourceShareInvitationAsyncHelper( request, handler, context ); } );
}

void RAMClient::AcceptResourceShareInvitationAsyncHelper(const AcceptResourceShareInvitationRequest& request, const AcceptResourceShareInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AcceptResourceShareInvitation(request), context);
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

void RAMClient::AssociateResourceShareAsync(const AssociateResourceShareRequest& request, const AssociateResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateResourceShareAsyncHelper( request, handler, context ); } );
}

void RAMClient::AssociateResourceShareAsyncHelper(const AssociateResourceShareRequest& request, const AssociateResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateResourceShare(request), context);
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

void RAMClient::AssociateResourceSharePermissionAsync(const AssociateResourceSharePermissionRequest& request, const AssociateResourceSharePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateResourceSharePermissionAsyncHelper( request, handler, context ); } );
}

void RAMClient::AssociateResourceSharePermissionAsyncHelper(const AssociateResourceSharePermissionRequest& request, const AssociateResourceSharePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateResourceSharePermission(request), context);
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

void RAMClient::CreateResourceShareAsync(const CreateResourceShareRequest& request, const CreateResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateResourceShareAsyncHelper( request, handler, context ); } );
}

void RAMClient::CreateResourceShareAsyncHelper(const CreateResourceShareRequest& request, const CreateResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateResourceShare(request), context);
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

void RAMClient::DeleteResourceShareAsync(const DeleteResourceShareRequest& request, const DeleteResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteResourceShareAsyncHelper( request, handler, context ); } );
}

void RAMClient::DeleteResourceShareAsyncHelper(const DeleteResourceShareRequest& request, const DeleteResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteResourceShare(request), context);
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

void RAMClient::DisassociateResourceShareAsync(const DisassociateResourceShareRequest& request, const DisassociateResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateResourceShareAsyncHelper( request, handler, context ); } );
}

void RAMClient::DisassociateResourceShareAsyncHelper(const DisassociateResourceShareRequest& request, const DisassociateResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateResourceShare(request), context);
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

void RAMClient::DisassociateResourceSharePermissionAsync(const DisassociateResourceSharePermissionRequest& request, const DisassociateResourceSharePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateResourceSharePermissionAsyncHelper( request, handler, context ); } );
}

void RAMClient::DisassociateResourceSharePermissionAsyncHelper(const DisassociateResourceSharePermissionRequest& request, const DisassociateResourceSharePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateResourceSharePermission(request), context);
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

void RAMClient::EnableSharingWithAwsOrganizationAsync(const EnableSharingWithAwsOrganizationRequest& request, const EnableSharingWithAwsOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->EnableSharingWithAwsOrganizationAsyncHelper( request, handler, context ); } );
}

void RAMClient::EnableSharingWithAwsOrganizationAsyncHelper(const EnableSharingWithAwsOrganizationRequest& request, const EnableSharingWithAwsOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableSharingWithAwsOrganization(request), context);
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

void RAMClient::GetPermissionAsync(const GetPermissionRequest& request, const GetPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetPermissionAsyncHelper( request, handler, context ); } );
}

void RAMClient::GetPermissionAsyncHelper(const GetPermissionRequest& request, const GetPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPermission(request), context);
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

void RAMClient::GetResourcePoliciesAsync(const GetResourcePoliciesRequest& request, const GetResourcePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetResourcePoliciesAsyncHelper( request, handler, context ); } );
}

void RAMClient::GetResourcePoliciesAsyncHelper(const GetResourcePoliciesRequest& request, const GetResourcePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetResourcePolicies(request), context);
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

void RAMClient::GetResourceShareAssociationsAsync(const GetResourceShareAssociationsRequest& request, const GetResourceShareAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetResourceShareAssociationsAsyncHelper( request, handler, context ); } );
}

void RAMClient::GetResourceShareAssociationsAsyncHelper(const GetResourceShareAssociationsRequest& request, const GetResourceShareAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetResourceShareAssociations(request), context);
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

void RAMClient::GetResourceShareInvitationsAsync(const GetResourceShareInvitationsRequest& request, const GetResourceShareInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetResourceShareInvitationsAsyncHelper( request, handler, context ); } );
}

void RAMClient::GetResourceShareInvitationsAsyncHelper(const GetResourceShareInvitationsRequest& request, const GetResourceShareInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetResourceShareInvitations(request), context);
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

void RAMClient::GetResourceSharesAsync(const GetResourceSharesRequest& request, const GetResourceSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetResourceSharesAsyncHelper( request, handler, context ); } );
}

void RAMClient::GetResourceSharesAsyncHelper(const GetResourceSharesRequest& request, const GetResourceSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetResourceShares(request), context);
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

void RAMClient::ListPendingInvitationResourcesAsync(const ListPendingInvitationResourcesRequest& request, const ListPendingInvitationResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPendingInvitationResourcesAsyncHelper( request, handler, context ); } );
}

void RAMClient::ListPendingInvitationResourcesAsyncHelper(const ListPendingInvitationResourcesRequest& request, const ListPendingInvitationResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPendingInvitationResources(request), context);
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

void RAMClient::ListPermissionVersionsAsync(const ListPermissionVersionsRequest& request, const ListPermissionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPermissionVersionsAsyncHelper( request, handler, context ); } );
}

void RAMClient::ListPermissionVersionsAsyncHelper(const ListPermissionVersionsRequest& request, const ListPermissionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPermissionVersions(request), context);
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

void RAMClient::ListPermissionsAsync(const ListPermissionsRequest& request, const ListPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPermissionsAsyncHelper( request, handler, context ); } );
}

void RAMClient::ListPermissionsAsyncHelper(const ListPermissionsRequest& request, const ListPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPermissions(request), context);
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

void RAMClient::ListPrincipalsAsync(const ListPrincipalsRequest& request, const ListPrincipalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPrincipalsAsyncHelper( request, handler, context ); } );
}

void RAMClient::ListPrincipalsAsyncHelper(const ListPrincipalsRequest& request, const ListPrincipalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListPrincipals(request), context);
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

void RAMClient::ListResourceSharePermissionsAsync(const ListResourceSharePermissionsRequest& request, const ListResourceSharePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListResourceSharePermissionsAsyncHelper( request, handler, context ); } );
}

void RAMClient::ListResourceSharePermissionsAsyncHelper(const ListResourceSharePermissionsRequest& request, const ListResourceSharePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListResourceSharePermissions(request), context);
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

void RAMClient::ListResourceTypesAsync(const ListResourceTypesRequest& request, const ListResourceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListResourceTypesAsyncHelper( request, handler, context ); } );
}

void RAMClient::ListResourceTypesAsyncHelper(const ListResourceTypesRequest& request, const ListResourceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListResourceTypes(request), context);
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

void RAMClient::ListResourcesAsync(const ListResourcesRequest& request, const ListResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListResourcesAsyncHelper( request, handler, context ); } );
}

void RAMClient::ListResourcesAsyncHelper(const ListResourcesRequest& request, const ListResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListResources(request), context);
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

void RAMClient::PromoteResourceShareCreatedFromPolicyAsync(const PromoteResourceShareCreatedFromPolicyRequest& request, const PromoteResourceShareCreatedFromPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PromoteResourceShareCreatedFromPolicyAsyncHelper( request, handler, context ); } );
}

void RAMClient::PromoteResourceShareCreatedFromPolicyAsyncHelper(const PromoteResourceShareCreatedFromPolicyRequest& request, const PromoteResourceShareCreatedFromPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PromoteResourceShareCreatedFromPolicy(request), context);
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

void RAMClient::RejectResourceShareInvitationAsync(const RejectResourceShareInvitationRequest& request, const RejectResourceShareInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RejectResourceShareInvitationAsyncHelper( request, handler, context ); } );
}

void RAMClient::RejectResourceShareInvitationAsyncHelper(const RejectResourceShareInvitationRequest& request, const RejectResourceShareInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RejectResourceShareInvitation(request), context);
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

void RAMClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void RAMClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
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

void RAMClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void RAMClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
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

void RAMClient::UpdateResourceShareAsync(const UpdateResourceShareRequest& request, const UpdateResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateResourceShareAsyncHelper( request, handler, context ); } );
}

void RAMClient::UpdateResourceShareAsyncHelper(const UpdateResourceShareRequest& request, const UpdateResourceShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateResourceShare(request), context);
}

