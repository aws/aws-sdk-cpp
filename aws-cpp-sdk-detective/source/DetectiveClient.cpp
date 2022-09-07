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

#include <aws/detective/DetectiveClient.h>
#include <aws/detective/DetectiveEndpoint.h>
#include <aws/detective/DetectiveErrorMarshaller.h>
#include <aws/detective/model/AcceptInvitationRequest.h>
#include <aws/detective/model/BatchGetGraphMemberDatasourcesRequest.h>
#include <aws/detective/model/BatchGetMembershipDatasourcesRequest.h>
#include <aws/detective/model/CreateGraphRequest.h>
#include <aws/detective/model/CreateMembersRequest.h>
#include <aws/detective/model/DeleteGraphRequest.h>
#include <aws/detective/model/DeleteMembersRequest.h>
#include <aws/detective/model/DescribeOrganizationConfigurationRequest.h>
#include <aws/detective/model/DisassociateMembershipRequest.h>
#include <aws/detective/model/EnableOrganizationAdminAccountRequest.h>
#include <aws/detective/model/GetMembersRequest.h>
#include <aws/detective/model/ListDatasourcePackagesRequest.h>
#include <aws/detective/model/ListGraphsRequest.h>
#include <aws/detective/model/ListInvitationsRequest.h>
#include <aws/detective/model/ListMembersRequest.h>
#include <aws/detective/model/ListOrganizationAdminAccountsRequest.h>
#include <aws/detective/model/ListTagsForResourceRequest.h>
#include <aws/detective/model/RejectInvitationRequest.h>
#include <aws/detective/model/StartMonitoringMemberRequest.h>
#include <aws/detective/model/TagResourceRequest.h>
#include <aws/detective/model/UntagResourceRequest.h>
#include <aws/detective/model/UpdateDatasourcePackagesRequest.h>
#include <aws/detective/model/UpdateOrganizationConfigurationRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Detective;
using namespace Aws::Detective::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "detective";
static const char* ALLOCATION_TAG = "DetectiveClient";

DetectiveClient::DetectiveClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DetectiveErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DetectiveClient::DetectiveClient(const AWSCredentials& credentials,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DetectiveErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DetectiveClient::DetectiveClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<DetectiveErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DetectiveClient::~DetectiveClient()
{
}

void DetectiveClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Detective");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + DetectiveEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void DetectiveClient::OverrideEndpoint(const Aws::String& endpoint)
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

AcceptInvitationOutcome DetectiveClient::AcceptInvitation(const AcceptInvitationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/invitation");
  return AcceptInvitationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

AcceptInvitationOutcomeCallable DetectiveClient::AcceptInvitationCallable(const AcceptInvitationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcceptInvitationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcceptInvitation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DetectiveClientAcceptInvitationAsyncHelper(DetectiveClient const * const clientThis, const AcceptInvitationRequest& request, const AcceptInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AcceptInvitation(request), context);
}

void DetectiveClient::AcceptInvitationAsync(const AcceptInvitationRequest& request, const AcceptInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DetectiveClientAcceptInvitationAsyncHelper( this, request, handler, context ); } );
}

BatchGetGraphMemberDatasourcesOutcome DetectiveClient::BatchGetGraphMemberDatasources(const BatchGetGraphMemberDatasourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/graph/datasources/get");
  return BatchGetGraphMemberDatasourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetGraphMemberDatasourcesOutcomeCallable DetectiveClient::BatchGetGraphMemberDatasourcesCallable(const BatchGetGraphMemberDatasourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetGraphMemberDatasourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetGraphMemberDatasources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DetectiveClientBatchGetGraphMemberDatasourcesAsyncHelper(DetectiveClient const * const clientThis, const BatchGetGraphMemberDatasourcesRequest& request, const BatchGetGraphMemberDatasourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetGraphMemberDatasources(request), context);
}

void DetectiveClient::BatchGetGraphMemberDatasourcesAsync(const BatchGetGraphMemberDatasourcesRequest& request, const BatchGetGraphMemberDatasourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DetectiveClientBatchGetGraphMemberDatasourcesAsyncHelper( this, request, handler, context ); } );
}

BatchGetMembershipDatasourcesOutcome DetectiveClient::BatchGetMembershipDatasources(const BatchGetMembershipDatasourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/membership/datasources/get");
  return BatchGetMembershipDatasourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetMembershipDatasourcesOutcomeCallable DetectiveClient::BatchGetMembershipDatasourcesCallable(const BatchGetMembershipDatasourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetMembershipDatasourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetMembershipDatasources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DetectiveClientBatchGetMembershipDatasourcesAsyncHelper(DetectiveClient const * const clientThis, const BatchGetMembershipDatasourcesRequest& request, const BatchGetMembershipDatasourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetMembershipDatasources(request), context);
}

void DetectiveClient::BatchGetMembershipDatasourcesAsync(const BatchGetMembershipDatasourcesRequest& request, const BatchGetMembershipDatasourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DetectiveClientBatchGetMembershipDatasourcesAsyncHelper( this, request, handler, context ); } );
}

CreateGraphOutcome DetectiveClient::CreateGraph(const CreateGraphRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/graph");
  return CreateGraphOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateGraphOutcomeCallable DetectiveClient::CreateGraphCallable(const CreateGraphRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGraphOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGraph(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DetectiveClientCreateGraphAsyncHelper(DetectiveClient const * const clientThis, const CreateGraphRequest& request, const CreateGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateGraph(request), context);
}

void DetectiveClient::CreateGraphAsync(const CreateGraphRequest& request, const CreateGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DetectiveClientCreateGraphAsyncHelper( this, request, handler, context ); } );
}

CreateMembersOutcome DetectiveClient::CreateMembers(const CreateMembersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/graph/members");
  return CreateMembersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMembersOutcomeCallable DetectiveClient::CreateMembersCallable(const CreateMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DetectiveClientCreateMembersAsyncHelper(DetectiveClient const * const clientThis, const CreateMembersRequest& request, const CreateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateMembers(request), context);
}

void DetectiveClient::CreateMembersAsync(const CreateMembersRequest& request, const CreateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DetectiveClientCreateMembersAsyncHelper( this, request, handler, context ); } );
}

DeleteGraphOutcome DetectiveClient::DeleteGraph(const DeleteGraphRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/graph/removal");
  return DeleteGraphOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteGraphOutcomeCallable DetectiveClient::DeleteGraphCallable(const DeleteGraphRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGraphOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGraph(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DetectiveClientDeleteGraphAsyncHelper(DetectiveClient const * const clientThis, const DeleteGraphRequest& request, const DeleteGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteGraph(request), context);
}

void DetectiveClient::DeleteGraphAsync(const DeleteGraphRequest& request, const DeleteGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DetectiveClientDeleteGraphAsyncHelper( this, request, handler, context ); } );
}

DeleteMembersOutcome DetectiveClient::DeleteMembers(const DeleteMembersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/graph/members/removal");
  return DeleteMembersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteMembersOutcomeCallable DetectiveClient::DeleteMembersCallable(const DeleteMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DetectiveClientDeleteMembersAsyncHelper(DetectiveClient const * const clientThis, const DeleteMembersRequest& request, const DeleteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteMembers(request), context);
}

void DetectiveClient::DeleteMembersAsync(const DeleteMembersRequest& request, const DeleteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DetectiveClientDeleteMembersAsyncHelper( this, request, handler, context ); } );
}

DescribeOrganizationConfigurationOutcome DetectiveClient::DescribeOrganizationConfiguration(const DescribeOrganizationConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/orgs/describeOrganizationConfiguration");
  return DescribeOrganizationConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeOrganizationConfigurationOutcomeCallable DetectiveClient::DescribeOrganizationConfigurationCallable(const DescribeOrganizationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOrganizationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOrganizationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DetectiveClientDescribeOrganizationConfigurationAsyncHelper(DetectiveClient const * const clientThis, const DescribeOrganizationConfigurationRequest& request, const DescribeOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeOrganizationConfiguration(request), context);
}

void DetectiveClient::DescribeOrganizationConfigurationAsync(const DescribeOrganizationConfigurationRequest& request, const DescribeOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DetectiveClientDescribeOrganizationConfigurationAsyncHelper( this, request, handler, context ); } );
}

DisableOrganizationAdminAccountOutcome DetectiveClient::DisableOrganizationAdminAccount() const
{
  Aws::StringStream ss;
  ss << m_uri << "/orgs/disableAdminAccount";
  return DisableOrganizationAdminAccountOutcome(MakeRequest(ss.str(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER, "DisableOrganizationAdminAccount"));
}

DisableOrganizationAdminAccountOutcomeCallable DetectiveClient::DisableOrganizationAdminAccountCallable() const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableOrganizationAdminAccountOutcome() > >(ALLOCATION_TAG, [this](){ return this->DisableOrganizationAdminAccount(); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DetectiveClientDisableOrganizationAdminAccountAsyncHelper(DetectiveClient const * const clientThis, const DisableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, clientThis->DisableOrganizationAdminAccount(), context);
}

void DetectiveClient::DisableOrganizationAdminAccountAsync(const DisableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, handler, context](){ DetectiveClientDisableOrganizationAdminAccountAsyncHelper( this, handler, context ); } );
}

DisassociateMembershipOutcome DetectiveClient::DisassociateMembership(const DisassociateMembershipRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/membership/removal");
  return DisassociateMembershipOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateMembershipOutcomeCallable DetectiveClient::DisassociateMembershipCallable(const DisassociateMembershipRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateMembershipOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateMembership(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DetectiveClientDisassociateMembershipAsyncHelper(DetectiveClient const * const clientThis, const DisassociateMembershipRequest& request, const DisassociateMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateMembership(request), context);
}

void DetectiveClient::DisassociateMembershipAsync(const DisassociateMembershipRequest& request, const DisassociateMembershipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DetectiveClientDisassociateMembershipAsyncHelper( this, request, handler, context ); } );
}

EnableOrganizationAdminAccountOutcome DetectiveClient::EnableOrganizationAdminAccount(const EnableOrganizationAdminAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/orgs/enableAdminAccount");
  return EnableOrganizationAdminAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableOrganizationAdminAccountOutcomeCallable DetectiveClient::EnableOrganizationAdminAccountCallable(const EnableOrganizationAdminAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableOrganizationAdminAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableOrganizationAdminAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DetectiveClientEnableOrganizationAdminAccountAsyncHelper(DetectiveClient const * const clientThis, const EnableOrganizationAdminAccountRequest& request, const EnableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->EnableOrganizationAdminAccount(request), context);
}

void DetectiveClient::EnableOrganizationAdminAccountAsync(const EnableOrganizationAdminAccountRequest& request, const EnableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DetectiveClientEnableOrganizationAdminAccountAsyncHelper( this, request, handler, context ); } );
}

GetMembersOutcome DetectiveClient::GetMembers(const GetMembersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/graph/members/get");
  return GetMembersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMembersOutcomeCallable DetectiveClient::GetMembersCallable(const GetMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DetectiveClientGetMembersAsyncHelper(DetectiveClient const * const clientThis, const GetMembersRequest& request, const GetMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMembers(request), context);
}

void DetectiveClient::GetMembersAsync(const GetMembersRequest& request, const GetMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DetectiveClientGetMembersAsyncHelper( this, request, handler, context ); } );
}

ListDatasourcePackagesOutcome DetectiveClient::ListDatasourcePackages(const ListDatasourcePackagesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/graph/datasources/list");
  return ListDatasourcePackagesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDatasourcePackagesOutcomeCallable DetectiveClient::ListDatasourcePackagesCallable(const ListDatasourcePackagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDatasourcePackagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDatasourcePackages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DetectiveClientListDatasourcePackagesAsyncHelper(DetectiveClient const * const clientThis, const ListDatasourcePackagesRequest& request, const ListDatasourcePackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDatasourcePackages(request), context);
}

void DetectiveClient::ListDatasourcePackagesAsync(const ListDatasourcePackagesRequest& request, const ListDatasourcePackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DetectiveClientListDatasourcePackagesAsyncHelper( this, request, handler, context ); } );
}

ListGraphsOutcome DetectiveClient::ListGraphs(const ListGraphsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/graphs/list");
  return ListGraphsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListGraphsOutcomeCallable DetectiveClient::ListGraphsCallable(const ListGraphsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGraphsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGraphs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DetectiveClientListGraphsAsyncHelper(DetectiveClient const * const clientThis, const ListGraphsRequest& request, const ListGraphsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListGraphs(request), context);
}

void DetectiveClient::ListGraphsAsync(const ListGraphsRequest& request, const ListGraphsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DetectiveClientListGraphsAsyncHelper( this, request, handler, context ); } );
}

ListInvitationsOutcome DetectiveClient::ListInvitations(const ListInvitationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/invitations/list");
  return ListInvitationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListInvitationsOutcomeCallable DetectiveClient::ListInvitationsCallable(const ListInvitationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInvitationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInvitations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DetectiveClientListInvitationsAsyncHelper(DetectiveClient const * const clientThis, const ListInvitationsRequest& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListInvitations(request), context);
}

void DetectiveClient::ListInvitationsAsync(const ListInvitationsRequest& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DetectiveClientListInvitationsAsyncHelper( this, request, handler, context ); } );
}

ListMembersOutcome DetectiveClient::ListMembers(const ListMembersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/graph/members/list");
  return ListMembersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListMembersOutcomeCallable DetectiveClient::ListMembersCallable(const ListMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DetectiveClientListMembersAsyncHelper(DetectiveClient const * const clientThis, const ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListMembers(request), context);
}

void DetectiveClient::ListMembersAsync(const ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DetectiveClientListMembersAsyncHelper( this, request, handler, context ); } );
}

ListOrganizationAdminAccountsOutcome DetectiveClient::ListOrganizationAdminAccounts(const ListOrganizationAdminAccountsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/orgs/adminAccountslist");
  return ListOrganizationAdminAccountsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListOrganizationAdminAccountsOutcomeCallable DetectiveClient::ListOrganizationAdminAccountsCallable(const ListOrganizationAdminAccountsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOrganizationAdminAccountsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOrganizationAdminAccounts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DetectiveClientListOrganizationAdminAccountsAsyncHelper(DetectiveClient const * const clientThis, const ListOrganizationAdminAccountsRequest& request, const ListOrganizationAdminAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListOrganizationAdminAccounts(request), context);
}

void DetectiveClient::ListOrganizationAdminAccountsAsync(const ListOrganizationAdminAccountsRequest& request, const ListOrganizationAdminAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DetectiveClientListOrganizationAdminAccountsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome DetectiveClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<DetectiveErrors>(DetectiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable DetectiveClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DetectiveClientListTagsForResourceAsyncHelper(DetectiveClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void DetectiveClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DetectiveClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

RejectInvitationOutcome DetectiveClient::RejectInvitation(const RejectInvitationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/invitation/removal");
  return RejectInvitationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RejectInvitationOutcomeCallable DetectiveClient::RejectInvitationCallable(const RejectInvitationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RejectInvitationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RejectInvitation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DetectiveClientRejectInvitationAsyncHelper(DetectiveClient const * const clientThis, const RejectInvitationRequest& request, const RejectInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RejectInvitation(request), context);
}

void DetectiveClient::RejectInvitationAsync(const RejectInvitationRequest& request, const RejectInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DetectiveClientRejectInvitationAsyncHelper( this, request, handler, context ); } );
}

StartMonitoringMemberOutcome DetectiveClient::StartMonitoringMember(const StartMonitoringMemberRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/graph/member/monitoringstate");
  return StartMonitoringMemberOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartMonitoringMemberOutcomeCallable DetectiveClient::StartMonitoringMemberCallable(const StartMonitoringMemberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartMonitoringMemberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartMonitoringMember(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DetectiveClientStartMonitoringMemberAsyncHelper(DetectiveClient const * const clientThis, const StartMonitoringMemberRequest& request, const StartMonitoringMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartMonitoringMember(request), context);
}

void DetectiveClient::StartMonitoringMemberAsync(const StartMonitoringMemberRequest& request, const StartMonitoringMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DetectiveClientStartMonitoringMemberAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome DetectiveClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<DetectiveErrors>(DetectiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable DetectiveClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DetectiveClientTagResourceAsyncHelper(DetectiveClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void DetectiveClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DetectiveClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome DetectiveClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<DetectiveErrors>(DetectiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<DetectiveErrors>(DetectiveErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable DetectiveClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DetectiveClientUntagResourceAsyncHelper(DetectiveClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void DetectiveClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DetectiveClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateDatasourcePackagesOutcome DetectiveClient::UpdateDatasourcePackages(const UpdateDatasourcePackagesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/graph/datasources/update");
  return UpdateDatasourcePackagesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDatasourcePackagesOutcomeCallable DetectiveClient::UpdateDatasourcePackagesCallable(const UpdateDatasourcePackagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDatasourcePackagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDatasourcePackages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DetectiveClientUpdateDatasourcePackagesAsyncHelper(DetectiveClient const * const clientThis, const UpdateDatasourcePackagesRequest& request, const UpdateDatasourcePackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDatasourcePackages(request), context);
}

void DetectiveClient::UpdateDatasourcePackagesAsync(const UpdateDatasourcePackagesRequest& request, const UpdateDatasourcePackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DetectiveClientUpdateDatasourcePackagesAsyncHelper( this, request, handler, context ); } );
}

UpdateOrganizationConfigurationOutcome DetectiveClient::UpdateOrganizationConfiguration(const UpdateOrganizationConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/orgs/updateOrganizationConfiguration");
  return UpdateOrganizationConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateOrganizationConfigurationOutcomeCallable DetectiveClient::UpdateOrganizationConfigurationCallable(const UpdateOrganizationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateOrganizationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateOrganizationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DetectiveClientUpdateOrganizationConfigurationAsyncHelper(DetectiveClient const * const clientThis, const UpdateOrganizationConfigurationRequest& request, const UpdateOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateOrganizationConfiguration(request), context);
}

void DetectiveClient::UpdateOrganizationConfigurationAsync(const UpdateOrganizationConfigurationRequest& request, const UpdateOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ DetectiveClientUpdateOrganizationConfigurationAsyncHelper( this, request, handler, context ); } );
}

