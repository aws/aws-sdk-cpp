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
#include <aws/guardduty/GuardDutyClient.h>
#include <aws/guardduty/GuardDutyEndpoint.h>
#include <aws/guardduty/GuardDutyErrorMarshaller.h>
#include <aws/guardduty/model/AcceptInvitationRequest.h>
#include <aws/guardduty/model/ArchiveFindingsRequest.h>
#include <aws/guardduty/model/CreateDetectorRequest.h>
#include <aws/guardduty/model/CreateFilterRequest.h>
#include <aws/guardduty/model/CreateIPSetRequest.h>
#include <aws/guardduty/model/CreateMembersRequest.h>
#include <aws/guardduty/model/CreateSampleFindingsRequest.h>
#include <aws/guardduty/model/CreateThreatIntelSetRequest.h>
#include <aws/guardduty/model/DeclineInvitationsRequest.h>
#include <aws/guardduty/model/DeleteDetectorRequest.h>
#include <aws/guardduty/model/DeleteFilterRequest.h>
#include <aws/guardduty/model/DeleteIPSetRequest.h>
#include <aws/guardduty/model/DeleteInvitationsRequest.h>
#include <aws/guardduty/model/DeleteMembersRequest.h>
#include <aws/guardduty/model/DeleteThreatIntelSetRequest.h>
#include <aws/guardduty/model/DisassociateFromMasterAccountRequest.h>
#include <aws/guardduty/model/DisassociateMembersRequest.h>
#include <aws/guardduty/model/GetDetectorRequest.h>
#include <aws/guardduty/model/GetFilterRequest.h>
#include <aws/guardduty/model/GetFindingsRequest.h>
#include <aws/guardduty/model/GetFindingsStatisticsRequest.h>
#include <aws/guardduty/model/GetIPSetRequest.h>
#include <aws/guardduty/model/GetInvitationsCountRequest.h>
#include <aws/guardduty/model/GetMasterAccountRequest.h>
#include <aws/guardduty/model/GetMembersRequest.h>
#include <aws/guardduty/model/GetThreatIntelSetRequest.h>
#include <aws/guardduty/model/InviteMembersRequest.h>
#include <aws/guardduty/model/ListDetectorsRequest.h>
#include <aws/guardduty/model/ListFiltersRequest.h>
#include <aws/guardduty/model/ListFindingsRequest.h>
#include <aws/guardduty/model/ListIPSetsRequest.h>
#include <aws/guardduty/model/ListInvitationsRequest.h>
#include <aws/guardduty/model/ListMembersRequest.h>
#include <aws/guardduty/model/ListThreatIntelSetsRequest.h>
#include <aws/guardduty/model/StartMonitoringMembersRequest.h>
#include <aws/guardduty/model/StopMonitoringMembersRequest.h>
#include <aws/guardduty/model/UnarchiveFindingsRequest.h>
#include <aws/guardduty/model/UpdateDetectorRequest.h>
#include <aws/guardduty/model/UpdateFilterRequest.h>
#include <aws/guardduty/model/UpdateFindingsFeedbackRequest.h>
#include <aws/guardduty/model/UpdateIPSetRequest.h>
#include <aws/guardduty/model/UpdateThreatIntelSetRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::GuardDuty;
using namespace Aws::GuardDuty::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "guardduty";
static const char* ALLOCATION_TAG = "GuardDutyClient";


GuardDutyClient::GuardDutyClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<GuardDutyErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GuardDutyClient::GuardDutyClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<GuardDutyErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GuardDutyClient::GuardDutyClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<GuardDutyErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GuardDutyClient::~GuardDutyClient()
{
}

void GuardDutyClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << GuardDutyEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

AcceptInvitationOutcome GuardDutyClient::AcceptInvitation(const AcceptInvitationRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/detector/";
  ss << request.GetDetectorId();
  ss << "/master";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AcceptInvitationOutcome(AcceptInvitationResult(outcome.GetResult()));
  }
  else
  {
    return AcceptInvitationOutcome(outcome.GetError());
  }
}

AcceptInvitationOutcomeCallable GuardDutyClient::AcceptInvitationCallable(const AcceptInvitationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcceptInvitationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcceptInvitation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::AcceptInvitationAsync(const AcceptInvitationRequest& request, const AcceptInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AcceptInvitationAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::AcceptInvitationAsyncHelper(const AcceptInvitationRequest& request, const AcceptInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AcceptInvitation(request), context);
}

ArchiveFindingsOutcome GuardDutyClient::ArchiveFindings(const ArchiveFindingsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/detector/";
  ss << request.GetDetectorId();
  ss << "/findings/archive";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ArchiveFindingsOutcome(ArchiveFindingsResult(outcome.GetResult()));
  }
  else
  {
    return ArchiveFindingsOutcome(outcome.GetError());
  }
}

ArchiveFindingsOutcomeCallable GuardDutyClient::ArchiveFindingsCallable(const ArchiveFindingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ArchiveFindingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ArchiveFindings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::ArchiveFindingsAsync(const ArchiveFindingsRequest& request, const ArchiveFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ArchiveFindingsAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::ArchiveFindingsAsyncHelper(const ArchiveFindingsRequest& request, const ArchiveFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ArchiveFindings(request), context);
}

CreateDetectorOutcome GuardDutyClient::CreateDetector(const CreateDetectorRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/detector";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDetectorOutcome(CreateDetectorResult(outcome.GetResult()));
  }
  else
  {
    return CreateDetectorOutcome(outcome.GetError());
  }
}

CreateDetectorOutcomeCallable GuardDutyClient::CreateDetectorCallable(const CreateDetectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDetectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDetector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::CreateDetectorAsync(const CreateDetectorRequest& request, const CreateDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDetectorAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::CreateDetectorAsyncHelper(const CreateDetectorRequest& request, const CreateDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDetector(request), context);
}

CreateFilterOutcome GuardDutyClient::CreateFilter(const CreateFilterRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/detector/";
  ss << request.GetDetectorId();
  ss << "/filter";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateFilterOutcome(CreateFilterResult(outcome.GetResult()));
  }
  else
  {
    return CreateFilterOutcome(outcome.GetError());
  }
}

CreateFilterOutcomeCallable GuardDutyClient::CreateFilterCallable(const CreateFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::CreateFilterAsync(const CreateFilterRequest& request, const CreateFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateFilterAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::CreateFilterAsyncHelper(const CreateFilterRequest& request, const CreateFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFilter(request), context);
}

CreateIPSetOutcome GuardDutyClient::CreateIPSet(const CreateIPSetRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/detector/";
  ss << request.GetDetectorId();
  ss << "/ipset";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateIPSetOutcome(CreateIPSetResult(outcome.GetResult()));
  }
  else
  {
    return CreateIPSetOutcome(outcome.GetError());
  }
}

CreateIPSetOutcomeCallable GuardDutyClient::CreateIPSetCallable(const CreateIPSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateIPSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateIPSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::CreateIPSetAsync(const CreateIPSetRequest& request, const CreateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateIPSetAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::CreateIPSetAsyncHelper(const CreateIPSetRequest& request, const CreateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateIPSet(request), context);
}

CreateMembersOutcome GuardDutyClient::CreateMembers(const CreateMembersRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/detector/";
  ss << request.GetDetectorId();
  ss << "/member";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateMembersOutcome(CreateMembersResult(outcome.GetResult()));
  }
  else
  {
    return CreateMembersOutcome(outcome.GetError());
  }
}

CreateMembersOutcomeCallable GuardDutyClient::CreateMembersCallable(const CreateMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::CreateMembersAsync(const CreateMembersRequest& request, const CreateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateMembersAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::CreateMembersAsyncHelper(const CreateMembersRequest& request, const CreateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateMembers(request), context);
}

CreateSampleFindingsOutcome GuardDutyClient::CreateSampleFindings(const CreateSampleFindingsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/detector/";
  ss << request.GetDetectorId();
  ss << "/findings/create";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateSampleFindingsOutcome(CreateSampleFindingsResult(outcome.GetResult()));
  }
  else
  {
    return CreateSampleFindingsOutcome(outcome.GetError());
  }
}

CreateSampleFindingsOutcomeCallable GuardDutyClient::CreateSampleFindingsCallable(const CreateSampleFindingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSampleFindingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSampleFindings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::CreateSampleFindingsAsync(const CreateSampleFindingsRequest& request, const CreateSampleFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSampleFindingsAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::CreateSampleFindingsAsyncHelper(const CreateSampleFindingsRequest& request, const CreateSampleFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSampleFindings(request), context);
}

CreateThreatIntelSetOutcome GuardDutyClient::CreateThreatIntelSet(const CreateThreatIntelSetRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/detector/";
  ss << request.GetDetectorId();
  ss << "/threatintelset";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateThreatIntelSetOutcome(CreateThreatIntelSetResult(outcome.GetResult()));
  }
  else
  {
    return CreateThreatIntelSetOutcome(outcome.GetError());
  }
}

CreateThreatIntelSetOutcomeCallable GuardDutyClient::CreateThreatIntelSetCallable(const CreateThreatIntelSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateThreatIntelSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateThreatIntelSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::CreateThreatIntelSetAsync(const CreateThreatIntelSetRequest& request, const CreateThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateThreatIntelSetAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::CreateThreatIntelSetAsyncHelper(const CreateThreatIntelSetRequest& request, const CreateThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateThreatIntelSet(request), context);
}

DeclineInvitationsOutcome GuardDutyClient::DeclineInvitations(const DeclineInvitationsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/invitation/decline";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeclineInvitationsOutcome(DeclineInvitationsResult(outcome.GetResult()));
  }
  else
  {
    return DeclineInvitationsOutcome(outcome.GetError());
  }
}

DeclineInvitationsOutcomeCallable GuardDutyClient::DeclineInvitationsCallable(const DeclineInvitationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeclineInvitationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeclineInvitations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::DeclineInvitationsAsync(const DeclineInvitationsRequest& request, const DeclineInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeclineInvitationsAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::DeclineInvitationsAsyncHelper(const DeclineInvitationsRequest& request, const DeclineInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeclineInvitations(request), context);
}

DeleteDetectorOutcome GuardDutyClient::DeleteDetector(const DeleteDetectorRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/detector/";
  ss << request.GetDetectorId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDetectorOutcome(DeleteDetectorResult(outcome.GetResult()));
  }
  else
  {
    return DeleteDetectorOutcome(outcome.GetError());
  }
}

DeleteDetectorOutcomeCallable GuardDutyClient::DeleteDetectorCallable(const DeleteDetectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDetectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDetector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::DeleteDetectorAsync(const DeleteDetectorRequest& request, const DeleteDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDetectorAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::DeleteDetectorAsyncHelper(const DeleteDetectorRequest& request, const DeleteDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDetector(request), context);
}

DeleteFilterOutcome GuardDutyClient::DeleteFilter(const DeleteFilterRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/detector/";
  ss << request.GetDetectorId();
  ss << "/filter/";
  ss << request.GetFilterName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteFilterOutcome(DeleteFilterResult(outcome.GetResult()));
  }
  else
  {
    return DeleteFilterOutcome(outcome.GetError());
  }
}

DeleteFilterOutcomeCallable GuardDutyClient::DeleteFilterCallable(const DeleteFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::DeleteFilterAsync(const DeleteFilterRequest& request, const DeleteFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFilterAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::DeleteFilterAsyncHelper(const DeleteFilterRequest& request, const DeleteFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFilter(request), context);
}

DeleteIPSetOutcome GuardDutyClient::DeleteIPSet(const DeleteIPSetRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/detector/";
  ss << request.GetDetectorId();
  ss << "/ipset/";
  ss << request.GetIpSetId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteIPSetOutcome(DeleteIPSetResult(outcome.GetResult()));
  }
  else
  {
    return DeleteIPSetOutcome(outcome.GetError());
  }
}

DeleteIPSetOutcomeCallable GuardDutyClient::DeleteIPSetCallable(const DeleteIPSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIPSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIPSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::DeleteIPSetAsync(const DeleteIPSetRequest& request, const DeleteIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteIPSetAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::DeleteIPSetAsyncHelper(const DeleteIPSetRequest& request, const DeleteIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteIPSet(request), context);
}

DeleteInvitationsOutcome GuardDutyClient::DeleteInvitations(const DeleteInvitationsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/invitation/delete";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteInvitationsOutcome(DeleteInvitationsResult(outcome.GetResult()));
  }
  else
  {
    return DeleteInvitationsOutcome(outcome.GetError());
  }
}

DeleteInvitationsOutcomeCallable GuardDutyClient::DeleteInvitationsCallable(const DeleteInvitationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInvitationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInvitations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::DeleteInvitationsAsync(const DeleteInvitationsRequest& request, const DeleteInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteInvitationsAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::DeleteInvitationsAsyncHelper(const DeleteInvitationsRequest& request, const DeleteInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteInvitations(request), context);
}

DeleteMembersOutcome GuardDutyClient::DeleteMembers(const DeleteMembersRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/detector/";
  ss << request.GetDetectorId();
  ss << "/member/delete";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteMembersOutcome(DeleteMembersResult(outcome.GetResult()));
  }
  else
  {
    return DeleteMembersOutcome(outcome.GetError());
  }
}

DeleteMembersOutcomeCallable GuardDutyClient::DeleteMembersCallable(const DeleteMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::DeleteMembersAsync(const DeleteMembersRequest& request, const DeleteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteMembersAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::DeleteMembersAsyncHelper(const DeleteMembersRequest& request, const DeleteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteMembers(request), context);
}

DeleteThreatIntelSetOutcome GuardDutyClient::DeleteThreatIntelSet(const DeleteThreatIntelSetRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/detector/";
  ss << request.GetDetectorId();
  ss << "/threatintelset/";
  ss << request.GetThreatIntelSetId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteThreatIntelSetOutcome(DeleteThreatIntelSetResult(outcome.GetResult()));
  }
  else
  {
    return DeleteThreatIntelSetOutcome(outcome.GetError());
  }
}

DeleteThreatIntelSetOutcomeCallable GuardDutyClient::DeleteThreatIntelSetCallable(const DeleteThreatIntelSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteThreatIntelSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteThreatIntelSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::DeleteThreatIntelSetAsync(const DeleteThreatIntelSetRequest& request, const DeleteThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteThreatIntelSetAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::DeleteThreatIntelSetAsyncHelper(const DeleteThreatIntelSetRequest& request, const DeleteThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteThreatIntelSet(request), context);
}

DisassociateFromMasterAccountOutcome GuardDutyClient::DisassociateFromMasterAccount(const DisassociateFromMasterAccountRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/detector/";
  ss << request.GetDetectorId();
  ss << "/master/disassociate";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociateFromMasterAccountOutcome(DisassociateFromMasterAccountResult(outcome.GetResult()));
  }
  else
  {
    return DisassociateFromMasterAccountOutcome(outcome.GetError());
  }
}

DisassociateFromMasterAccountOutcomeCallable GuardDutyClient::DisassociateFromMasterAccountCallable(const DisassociateFromMasterAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateFromMasterAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateFromMasterAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::DisassociateFromMasterAccountAsync(const DisassociateFromMasterAccountRequest& request, const DisassociateFromMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateFromMasterAccountAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::DisassociateFromMasterAccountAsyncHelper(const DisassociateFromMasterAccountRequest& request, const DisassociateFromMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateFromMasterAccount(request), context);
}

DisassociateMembersOutcome GuardDutyClient::DisassociateMembers(const DisassociateMembersRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/detector/";
  ss << request.GetDetectorId();
  ss << "/member/disassociate";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociateMembersOutcome(DisassociateMembersResult(outcome.GetResult()));
  }
  else
  {
    return DisassociateMembersOutcome(outcome.GetError());
  }
}

DisassociateMembersOutcomeCallable GuardDutyClient::DisassociateMembersCallable(const DisassociateMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::DisassociateMembersAsync(const DisassociateMembersRequest& request, const DisassociateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateMembersAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::DisassociateMembersAsyncHelper(const DisassociateMembersRequest& request, const DisassociateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateMembers(request), context);
}

GetDetectorOutcome GuardDutyClient::GetDetector(const GetDetectorRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/detector/";
  ss << request.GetDetectorId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDetectorOutcome(GetDetectorResult(outcome.GetResult()));
  }
  else
  {
    return GetDetectorOutcome(outcome.GetError());
  }
}

GetDetectorOutcomeCallable GuardDutyClient::GetDetectorCallable(const GetDetectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDetectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDetector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::GetDetectorAsync(const GetDetectorRequest& request, const GetDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDetectorAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::GetDetectorAsyncHelper(const GetDetectorRequest& request, const GetDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDetector(request), context);
}

GetFilterOutcome GuardDutyClient::GetFilter(const GetFilterRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/detector/";
  ss << request.GetDetectorId();
  ss << "/filter/";
  ss << request.GetFilterName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetFilterOutcome(GetFilterResult(outcome.GetResult()));
  }
  else
  {
    return GetFilterOutcome(outcome.GetError());
  }
}

GetFilterOutcomeCallable GuardDutyClient::GetFilterCallable(const GetFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::GetFilterAsync(const GetFilterRequest& request, const GetFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFilterAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::GetFilterAsyncHelper(const GetFilterRequest& request, const GetFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFilter(request), context);
}

GetFindingsOutcome GuardDutyClient::GetFindings(const GetFindingsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/detector/";
  ss << request.GetDetectorId();
  ss << "/findings/get";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetFindingsOutcome(GetFindingsResult(outcome.GetResult()));
  }
  else
  {
    return GetFindingsOutcome(outcome.GetError());
  }
}

GetFindingsOutcomeCallable GuardDutyClient::GetFindingsCallable(const GetFindingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFindingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFindings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::GetFindingsAsync(const GetFindingsRequest& request, const GetFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFindingsAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::GetFindingsAsyncHelper(const GetFindingsRequest& request, const GetFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFindings(request), context);
}

GetFindingsStatisticsOutcome GuardDutyClient::GetFindingsStatistics(const GetFindingsStatisticsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/detector/";
  ss << request.GetDetectorId();
  ss << "/findings/statistics";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetFindingsStatisticsOutcome(GetFindingsStatisticsResult(outcome.GetResult()));
  }
  else
  {
    return GetFindingsStatisticsOutcome(outcome.GetError());
  }
}

GetFindingsStatisticsOutcomeCallable GuardDutyClient::GetFindingsStatisticsCallable(const GetFindingsStatisticsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFindingsStatisticsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFindingsStatistics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::GetFindingsStatisticsAsync(const GetFindingsStatisticsRequest& request, const GetFindingsStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFindingsStatisticsAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::GetFindingsStatisticsAsyncHelper(const GetFindingsStatisticsRequest& request, const GetFindingsStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFindingsStatistics(request), context);
}

GetIPSetOutcome GuardDutyClient::GetIPSet(const GetIPSetRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/detector/";
  ss << request.GetDetectorId();
  ss << "/ipset/";
  ss << request.GetIpSetId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetIPSetOutcome(GetIPSetResult(outcome.GetResult()));
  }
  else
  {
    return GetIPSetOutcome(outcome.GetError());
  }
}

GetIPSetOutcomeCallable GuardDutyClient::GetIPSetCallable(const GetIPSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIPSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIPSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::GetIPSetAsync(const GetIPSetRequest& request, const GetIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetIPSetAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::GetIPSetAsyncHelper(const GetIPSetRequest& request, const GetIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetIPSet(request), context);
}

GetInvitationsCountOutcome GuardDutyClient::GetInvitationsCount(const GetInvitationsCountRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/invitation/count";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetInvitationsCountOutcome(GetInvitationsCountResult(outcome.GetResult()));
  }
  else
  {
    return GetInvitationsCountOutcome(outcome.GetError());
  }
}

GetInvitationsCountOutcomeCallable GuardDutyClient::GetInvitationsCountCallable(const GetInvitationsCountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInvitationsCountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInvitationsCount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::GetInvitationsCountAsync(const GetInvitationsCountRequest& request, const GetInvitationsCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetInvitationsCountAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::GetInvitationsCountAsyncHelper(const GetInvitationsCountRequest& request, const GetInvitationsCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetInvitationsCount(request), context);
}

GetMasterAccountOutcome GuardDutyClient::GetMasterAccount(const GetMasterAccountRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/detector/";
  ss << request.GetDetectorId();
  ss << "/master";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetMasterAccountOutcome(GetMasterAccountResult(outcome.GetResult()));
  }
  else
  {
    return GetMasterAccountOutcome(outcome.GetError());
  }
}

GetMasterAccountOutcomeCallable GuardDutyClient::GetMasterAccountCallable(const GetMasterAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMasterAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMasterAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::GetMasterAccountAsync(const GetMasterAccountRequest& request, const GetMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetMasterAccountAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::GetMasterAccountAsyncHelper(const GetMasterAccountRequest& request, const GetMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetMasterAccount(request), context);
}

GetMembersOutcome GuardDutyClient::GetMembers(const GetMembersRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/detector/";
  ss << request.GetDetectorId();
  ss << "/member/get";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetMembersOutcome(GetMembersResult(outcome.GetResult()));
  }
  else
  {
    return GetMembersOutcome(outcome.GetError());
  }
}

GetMembersOutcomeCallable GuardDutyClient::GetMembersCallable(const GetMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::GetMembersAsync(const GetMembersRequest& request, const GetMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetMembersAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::GetMembersAsyncHelper(const GetMembersRequest& request, const GetMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetMembers(request), context);
}

GetThreatIntelSetOutcome GuardDutyClient::GetThreatIntelSet(const GetThreatIntelSetRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/detector/";
  ss << request.GetDetectorId();
  ss << "/threatintelset/";
  ss << request.GetThreatIntelSetId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetThreatIntelSetOutcome(GetThreatIntelSetResult(outcome.GetResult()));
  }
  else
  {
    return GetThreatIntelSetOutcome(outcome.GetError());
  }
}

GetThreatIntelSetOutcomeCallable GuardDutyClient::GetThreatIntelSetCallable(const GetThreatIntelSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetThreatIntelSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetThreatIntelSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::GetThreatIntelSetAsync(const GetThreatIntelSetRequest& request, const GetThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetThreatIntelSetAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::GetThreatIntelSetAsyncHelper(const GetThreatIntelSetRequest& request, const GetThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetThreatIntelSet(request), context);
}

InviteMembersOutcome GuardDutyClient::InviteMembers(const InviteMembersRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/detector/";
  ss << request.GetDetectorId();
  ss << "/member/invite";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return InviteMembersOutcome(InviteMembersResult(outcome.GetResult()));
  }
  else
  {
    return InviteMembersOutcome(outcome.GetError());
  }
}

InviteMembersOutcomeCallable GuardDutyClient::InviteMembersCallable(const InviteMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< InviteMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->InviteMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::InviteMembersAsync(const InviteMembersRequest& request, const InviteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->InviteMembersAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::InviteMembersAsyncHelper(const InviteMembersRequest& request, const InviteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, InviteMembers(request), context);
}

ListDetectorsOutcome GuardDutyClient::ListDetectors(const ListDetectorsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/detector";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDetectorsOutcome(ListDetectorsResult(outcome.GetResult()));
  }
  else
  {
    return ListDetectorsOutcome(outcome.GetError());
  }
}

ListDetectorsOutcomeCallable GuardDutyClient::ListDetectorsCallable(const ListDetectorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDetectorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDetectors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::ListDetectorsAsync(const ListDetectorsRequest& request, const ListDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDetectorsAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::ListDetectorsAsyncHelper(const ListDetectorsRequest& request, const ListDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDetectors(request), context);
}

ListFiltersOutcome GuardDutyClient::ListFilters(const ListFiltersRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/detector/";
  ss << request.GetDetectorId();
  ss << "/filter";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListFiltersOutcome(ListFiltersResult(outcome.GetResult()));
  }
  else
  {
    return ListFiltersOutcome(outcome.GetError());
  }
}

ListFiltersOutcomeCallable GuardDutyClient::ListFiltersCallable(const ListFiltersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFiltersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFilters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::ListFiltersAsync(const ListFiltersRequest& request, const ListFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListFiltersAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::ListFiltersAsyncHelper(const ListFiltersRequest& request, const ListFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFilters(request), context);
}

ListFindingsOutcome GuardDutyClient::ListFindings(const ListFindingsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/detector/";
  ss << request.GetDetectorId();
  ss << "/findings";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListFindingsOutcome(ListFindingsResult(outcome.GetResult()));
  }
  else
  {
    return ListFindingsOutcome(outcome.GetError());
  }
}

ListFindingsOutcomeCallable GuardDutyClient::ListFindingsCallable(const ListFindingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFindingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFindings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::ListFindingsAsync(const ListFindingsRequest& request, const ListFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListFindingsAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::ListFindingsAsyncHelper(const ListFindingsRequest& request, const ListFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFindings(request), context);
}

ListIPSetsOutcome GuardDutyClient::ListIPSets(const ListIPSetsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/detector/";
  ss << request.GetDetectorId();
  ss << "/ipset";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListIPSetsOutcome(ListIPSetsResult(outcome.GetResult()));
  }
  else
  {
    return ListIPSetsOutcome(outcome.GetError());
  }
}

ListIPSetsOutcomeCallable GuardDutyClient::ListIPSetsCallable(const ListIPSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIPSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIPSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::ListIPSetsAsync(const ListIPSetsRequest& request, const ListIPSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListIPSetsAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::ListIPSetsAsyncHelper(const ListIPSetsRequest& request, const ListIPSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListIPSets(request), context);
}

ListInvitationsOutcome GuardDutyClient::ListInvitations(const ListInvitationsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/invitation";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListInvitationsOutcome(ListInvitationsResult(outcome.GetResult()));
  }
  else
  {
    return ListInvitationsOutcome(outcome.GetError());
  }
}

ListInvitationsOutcomeCallable GuardDutyClient::ListInvitationsCallable(const ListInvitationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInvitationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInvitations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::ListInvitationsAsync(const ListInvitationsRequest& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListInvitationsAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::ListInvitationsAsyncHelper(const ListInvitationsRequest& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListInvitations(request), context);
}

ListMembersOutcome GuardDutyClient::ListMembers(const ListMembersRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/detector/";
  ss << request.GetDetectorId();
  ss << "/member";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListMembersOutcome(ListMembersResult(outcome.GetResult()));
  }
  else
  {
    return ListMembersOutcome(outcome.GetError());
  }
}

ListMembersOutcomeCallable GuardDutyClient::ListMembersCallable(const ListMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::ListMembersAsync(const ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListMembersAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::ListMembersAsyncHelper(const ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListMembers(request), context);
}

ListThreatIntelSetsOutcome GuardDutyClient::ListThreatIntelSets(const ListThreatIntelSetsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/detector/";
  ss << request.GetDetectorId();
  ss << "/threatintelset";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListThreatIntelSetsOutcome(ListThreatIntelSetsResult(outcome.GetResult()));
  }
  else
  {
    return ListThreatIntelSetsOutcome(outcome.GetError());
  }
}

ListThreatIntelSetsOutcomeCallable GuardDutyClient::ListThreatIntelSetsCallable(const ListThreatIntelSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListThreatIntelSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListThreatIntelSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::ListThreatIntelSetsAsync(const ListThreatIntelSetsRequest& request, const ListThreatIntelSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListThreatIntelSetsAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::ListThreatIntelSetsAsyncHelper(const ListThreatIntelSetsRequest& request, const ListThreatIntelSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListThreatIntelSets(request), context);
}

StartMonitoringMembersOutcome GuardDutyClient::StartMonitoringMembers(const StartMonitoringMembersRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/detector/";
  ss << request.GetDetectorId();
  ss << "/member/start";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartMonitoringMembersOutcome(StartMonitoringMembersResult(outcome.GetResult()));
  }
  else
  {
    return StartMonitoringMembersOutcome(outcome.GetError());
  }
}

StartMonitoringMembersOutcomeCallable GuardDutyClient::StartMonitoringMembersCallable(const StartMonitoringMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartMonitoringMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartMonitoringMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::StartMonitoringMembersAsync(const StartMonitoringMembersRequest& request, const StartMonitoringMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartMonitoringMembersAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::StartMonitoringMembersAsyncHelper(const StartMonitoringMembersRequest& request, const StartMonitoringMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartMonitoringMembers(request), context);
}

StopMonitoringMembersOutcome GuardDutyClient::StopMonitoringMembers(const StopMonitoringMembersRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/detector/";
  ss << request.GetDetectorId();
  ss << "/member/stop";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopMonitoringMembersOutcome(StopMonitoringMembersResult(outcome.GetResult()));
  }
  else
  {
    return StopMonitoringMembersOutcome(outcome.GetError());
  }
}

StopMonitoringMembersOutcomeCallable GuardDutyClient::StopMonitoringMembersCallable(const StopMonitoringMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopMonitoringMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopMonitoringMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::StopMonitoringMembersAsync(const StopMonitoringMembersRequest& request, const StopMonitoringMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopMonitoringMembersAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::StopMonitoringMembersAsyncHelper(const StopMonitoringMembersRequest& request, const StopMonitoringMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopMonitoringMembers(request), context);
}

UnarchiveFindingsOutcome GuardDutyClient::UnarchiveFindings(const UnarchiveFindingsRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/detector/";
  ss << request.GetDetectorId();
  ss << "/findings/unarchive";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UnarchiveFindingsOutcome(UnarchiveFindingsResult(outcome.GetResult()));
  }
  else
  {
    return UnarchiveFindingsOutcome(outcome.GetError());
  }
}

UnarchiveFindingsOutcomeCallable GuardDutyClient::UnarchiveFindingsCallable(const UnarchiveFindingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UnarchiveFindingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UnarchiveFindings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::UnarchiveFindingsAsync(const UnarchiveFindingsRequest& request, const UnarchiveFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UnarchiveFindingsAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::UnarchiveFindingsAsyncHelper(const UnarchiveFindingsRequest& request, const UnarchiveFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UnarchiveFindings(request), context);
}

UpdateDetectorOutcome GuardDutyClient::UpdateDetector(const UpdateDetectorRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/detector/";
  ss << request.GetDetectorId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateDetectorOutcome(UpdateDetectorResult(outcome.GetResult()));
  }
  else
  {
    return UpdateDetectorOutcome(outcome.GetError());
  }
}

UpdateDetectorOutcomeCallable GuardDutyClient::UpdateDetectorCallable(const UpdateDetectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDetectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDetector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::UpdateDetectorAsync(const UpdateDetectorRequest& request, const UpdateDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDetectorAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::UpdateDetectorAsyncHelper(const UpdateDetectorRequest& request, const UpdateDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDetector(request), context);
}

UpdateFilterOutcome GuardDutyClient::UpdateFilter(const UpdateFilterRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/detector/";
  ss << request.GetDetectorId();
  ss << "/filter/";
  ss << request.GetFilterName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateFilterOutcome(UpdateFilterResult(outcome.GetResult()));
  }
  else
  {
    return UpdateFilterOutcome(outcome.GetError());
  }
}

UpdateFilterOutcomeCallable GuardDutyClient::UpdateFilterCallable(const UpdateFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::UpdateFilterAsync(const UpdateFilterRequest& request, const UpdateFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFilterAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::UpdateFilterAsyncHelper(const UpdateFilterRequest& request, const UpdateFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFilter(request), context);
}

UpdateFindingsFeedbackOutcome GuardDutyClient::UpdateFindingsFeedback(const UpdateFindingsFeedbackRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/detector/";
  ss << request.GetDetectorId();
  ss << "/findings/feedback";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateFindingsFeedbackOutcome(UpdateFindingsFeedbackResult(outcome.GetResult()));
  }
  else
  {
    return UpdateFindingsFeedbackOutcome(outcome.GetError());
  }
}

UpdateFindingsFeedbackOutcomeCallable GuardDutyClient::UpdateFindingsFeedbackCallable(const UpdateFindingsFeedbackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFindingsFeedbackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFindingsFeedback(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::UpdateFindingsFeedbackAsync(const UpdateFindingsFeedbackRequest& request, const UpdateFindingsFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFindingsFeedbackAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::UpdateFindingsFeedbackAsyncHelper(const UpdateFindingsFeedbackRequest& request, const UpdateFindingsFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFindingsFeedback(request), context);
}

UpdateIPSetOutcome GuardDutyClient::UpdateIPSet(const UpdateIPSetRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/detector/";
  ss << request.GetDetectorId();
  ss << "/ipset/";
  ss << request.GetIpSetId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateIPSetOutcome(UpdateIPSetResult(outcome.GetResult()));
  }
  else
  {
    return UpdateIPSetOutcome(outcome.GetError());
  }
}

UpdateIPSetOutcomeCallable GuardDutyClient::UpdateIPSetCallable(const UpdateIPSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateIPSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateIPSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::UpdateIPSetAsync(const UpdateIPSetRequest& request, const UpdateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateIPSetAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::UpdateIPSetAsyncHelper(const UpdateIPSetRequest& request, const UpdateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateIPSet(request), context);
}

UpdateThreatIntelSetOutcome GuardDutyClient::UpdateThreatIntelSet(const UpdateThreatIntelSetRequest& request) const
{
  Aws::StringStream ss;
  Aws::Http::URI uri = m_uri;
  ss << "/detector/";
  ss << request.GetDetectorId();
  ss << "/threatintelset/";
  ss << request.GetThreatIntelSetId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateThreatIntelSetOutcome(UpdateThreatIntelSetResult(outcome.GetResult()));
  }
  else
  {
    return UpdateThreatIntelSetOutcome(outcome.GetError());
  }
}

UpdateThreatIntelSetOutcomeCallable GuardDutyClient::UpdateThreatIntelSetCallable(const UpdateThreatIntelSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateThreatIntelSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateThreatIntelSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClient::UpdateThreatIntelSetAsync(const UpdateThreatIntelSetRequest& request, const UpdateThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateThreatIntelSetAsyncHelper( request, handler, context ); } );
}

void GuardDutyClient::UpdateThreatIntelSetAsyncHelper(const UpdateThreatIntelSetRequest& request, const UpdateThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateThreatIntelSet(request), context);
}

