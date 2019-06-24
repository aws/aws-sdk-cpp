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

#include <aws/securityhub/SecurityHubClient.h>
#include <aws/securityhub/SecurityHubEndpoint.h>
#include <aws/securityhub/SecurityHubErrorMarshaller.h>
#include <aws/securityhub/model/AcceptInvitationRequest.h>
#include <aws/securityhub/model/BatchDisableStandardsRequest.h>
#include <aws/securityhub/model/BatchEnableStandardsRequest.h>
#include <aws/securityhub/model/BatchImportFindingsRequest.h>
#include <aws/securityhub/model/CreateActionTargetRequest.h>
#include <aws/securityhub/model/CreateInsightRequest.h>
#include <aws/securityhub/model/CreateMembersRequest.h>
#include <aws/securityhub/model/DeclineInvitationsRequest.h>
#include <aws/securityhub/model/DeleteActionTargetRequest.h>
#include <aws/securityhub/model/DeleteInsightRequest.h>
#include <aws/securityhub/model/DeleteInvitationsRequest.h>
#include <aws/securityhub/model/DeleteMembersRequest.h>
#include <aws/securityhub/model/DescribeActionTargetsRequest.h>
#include <aws/securityhub/model/DescribeHubRequest.h>
#include <aws/securityhub/model/DescribeProductsRequest.h>
#include <aws/securityhub/model/DisableImportFindingsForProductRequest.h>
#include <aws/securityhub/model/DisableSecurityHubRequest.h>
#include <aws/securityhub/model/DisassociateFromMasterAccountRequest.h>
#include <aws/securityhub/model/DisassociateMembersRequest.h>
#include <aws/securityhub/model/EnableImportFindingsForProductRequest.h>
#include <aws/securityhub/model/EnableSecurityHubRequest.h>
#include <aws/securityhub/model/GetEnabledStandardsRequest.h>
#include <aws/securityhub/model/GetFindingsRequest.h>
#include <aws/securityhub/model/GetInsightResultsRequest.h>
#include <aws/securityhub/model/GetInsightsRequest.h>
#include <aws/securityhub/model/GetInvitationsCountRequest.h>
#include <aws/securityhub/model/GetMasterAccountRequest.h>
#include <aws/securityhub/model/GetMembersRequest.h>
#include <aws/securityhub/model/InviteMembersRequest.h>
#include <aws/securityhub/model/ListEnabledProductsForImportRequest.h>
#include <aws/securityhub/model/ListInvitationsRequest.h>
#include <aws/securityhub/model/ListMembersRequest.h>
#include <aws/securityhub/model/ListTagsForResourceRequest.h>
#include <aws/securityhub/model/TagResourceRequest.h>
#include <aws/securityhub/model/UntagResourceRequest.h>
#include <aws/securityhub/model/UpdateActionTargetRequest.h>
#include <aws/securityhub/model/UpdateFindingsRequest.h>
#include <aws/securityhub/model/UpdateInsightRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SecurityHub;
using namespace Aws::SecurityHub::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "securityhub";
static const char* ALLOCATION_TAG = "SecurityHubClient";


SecurityHubClient::SecurityHubClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SecurityHubErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SecurityHubClient::SecurityHubClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SecurityHubErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SecurityHubClient::SecurityHubClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<SecurityHubErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SecurityHubClient::~SecurityHubClient()
{
}

void SecurityHubClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + SecurityHubEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void SecurityHubClient::OverrideEndpoint(const Aws::String& endpoint)
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

AcceptInvitationOutcome SecurityHubClient::AcceptInvitation(const AcceptInvitationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
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

AcceptInvitationOutcomeCallable SecurityHubClient::AcceptInvitationCallable(const AcceptInvitationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcceptInvitationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcceptInvitation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::AcceptInvitationAsync(const AcceptInvitationRequest& request, const AcceptInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AcceptInvitationAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::AcceptInvitationAsyncHelper(const AcceptInvitationRequest& request, const AcceptInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AcceptInvitation(request), context);
}

BatchDisableStandardsOutcome SecurityHubClient::BatchDisableStandards(const BatchDisableStandardsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/standards/deregister";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchDisableStandardsOutcome(BatchDisableStandardsResult(outcome.GetResult()));
  }
  else
  {
    return BatchDisableStandardsOutcome(outcome.GetError());
  }
}

BatchDisableStandardsOutcomeCallable SecurityHubClient::BatchDisableStandardsCallable(const BatchDisableStandardsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDisableStandardsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDisableStandards(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::BatchDisableStandardsAsync(const BatchDisableStandardsRequest& request, const BatchDisableStandardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchDisableStandardsAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::BatchDisableStandardsAsyncHelper(const BatchDisableStandardsRequest& request, const BatchDisableStandardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchDisableStandards(request), context);
}

BatchEnableStandardsOutcome SecurityHubClient::BatchEnableStandards(const BatchEnableStandardsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/standards/register";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchEnableStandardsOutcome(BatchEnableStandardsResult(outcome.GetResult()));
  }
  else
  {
    return BatchEnableStandardsOutcome(outcome.GetError());
  }
}

BatchEnableStandardsOutcomeCallable SecurityHubClient::BatchEnableStandardsCallable(const BatchEnableStandardsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchEnableStandardsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchEnableStandards(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::BatchEnableStandardsAsync(const BatchEnableStandardsRequest& request, const BatchEnableStandardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchEnableStandardsAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::BatchEnableStandardsAsyncHelper(const BatchEnableStandardsRequest& request, const BatchEnableStandardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchEnableStandards(request), context);
}

BatchImportFindingsOutcome SecurityHubClient::BatchImportFindings(const BatchImportFindingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/findings/import";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchImportFindingsOutcome(BatchImportFindingsResult(outcome.GetResult()));
  }
  else
  {
    return BatchImportFindingsOutcome(outcome.GetError());
  }
}

BatchImportFindingsOutcomeCallable SecurityHubClient::BatchImportFindingsCallable(const BatchImportFindingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchImportFindingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchImportFindings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::BatchImportFindingsAsync(const BatchImportFindingsRequest& request, const BatchImportFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchImportFindingsAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::BatchImportFindingsAsyncHelper(const BatchImportFindingsRequest& request, const BatchImportFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchImportFindings(request), context);
}

CreateActionTargetOutcome SecurityHubClient::CreateActionTarget(const CreateActionTargetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/actionTargets";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateActionTargetOutcome(CreateActionTargetResult(outcome.GetResult()));
  }
  else
  {
    return CreateActionTargetOutcome(outcome.GetError());
  }
}

CreateActionTargetOutcomeCallable SecurityHubClient::CreateActionTargetCallable(const CreateActionTargetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateActionTargetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateActionTarget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::CreateActionTargetAsync(const CreateActionTargetRequest& request, const CreateActionTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateActionTargetAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::CreateActionTargetAsyncHelper(const CreateActionTargetRequest& request, const CreateActionTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateActionTarget(request), context);
}

CreateInsightOutcome SecurityHubClient::CreateInsight(const CreateInsightRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/insights";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateInsightOutcome(CreateInsightResult(outcome.GetResult()));
  }
  else
  {
    return CreateInsightOutcome(outcome.GetError());
  }
}

CreateInsightOutcomeCallable SecurityHubClient::CreateInsightCallable(const CreateInsightRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInsightOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInsight(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::CreateInsightAsync(const CreateInsightRequest& request, const CreateInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateInsightAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::CreateInsightAsyncHelper(const CreateInsightRequest& request, const CreateInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateInsight(request), context);
}

CreateMembersOutcome SecurityHubClient::CreateMembers(const CreateMembersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/members";
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

CreateMembersOutcomeCallable SecurityHubClient::CreateMembersCallable(const CreateMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::CreateMembersAsync(const CreateMembersRequest& request, const CreateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateMembersAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::CreateMembersAsyncHelper(const CreateMembersRequest& request, const CreateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateMembers(request), context);
}

DeclineInvitationsOutcome SecurityHubClient::DeclineInvitations(const DeclineInvitationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/invitations/decline";
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

DeclineInvitationsOutcomeCallable SecurityHubClient::DeclineInvitationsCallable(const DeclineInvitationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeclineInvitationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeclineInvitations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::DeclineInvitationsAsync(const DeclineInvitationsRequest& request, const DeclineInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeclineInvitationsAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::DeclineInvitationsAsyncHelper(const DeclineInvitationsRequest& request, const DeclineInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeclineInvitations(request), context);
}

DeleteActionTargetOutcome SecurityHubClient::DeleteActionTarget(const DeleteActionTargetRequest& request) const
{
  if (!request.ActionTargetArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteActionTarget", "Required field: ActionTargetArn, is not set");
    return DeleteActionTargetOutcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ActionTargetArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/actionTargets/";
  ss << request.GetActionTargetArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteActionTargetOutcome(DeleteActionTargetResult(outcome.GetResult()));
  }
  else
  {
    return DeleteActionTargetOutcome(outcome.GetError());
  }
}

DeleteActionTargetOutcomeCallable SecurityHubClient::DeleteActionTargetCallable(const DeleteActionTargetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteActionTargetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteActionTarget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::DeleteActionTargetAsync(const DeleteActionTargetRequest& request, const DeleteActionTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteActionTargetAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::DeleteActionTargetAsyncHelper(const DeleteActionTargetRequest& request, const DeleteActionTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteActionTarget(request), context);
}

DeleteInsightOutcome SecurityHubClient::DeleteInsight(const DeleteInsightRequest& request) const
{
  if (!request.InsightArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteInsight", "Required field: InsightArn, is not set");
    return DeleteInsightOutcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InsightArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/insights/";
  ss << request.GetInsightArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteInsightOutcome(DeleteInsightResult(outcome.GetResult()));
  }
  else
  {
    return DeleteInsightOutcome(outcome.GetError());
  }
}

DeleteInsightOutcomeCallable SecurityHubClient::DeleteInsightCallable(const DeleteInsightRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInsightOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInsight(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::DeleteInsightAsync(const DeleteInsightRequest& request, const DeleteInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteInsightAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::DeleteInsightAsyncHelper(const DeleteInsightRequest& request, const DeleteInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteInsight(request), context);
}

DeleteInvitationsOutcome SecurityHubClient::DeleteInvitations(const DeleteInvitationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/invitations/delete";
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

DeleteInvitationsOutcomeCallable SecurityHubClient::DeleteInvitationsCallable(const DeleteInvitationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInvitationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInvitations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::DeleteInvitationsAsync(const DeleteInvitationsRequest& request, const DeleteInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteInvitationsAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::DeleteInvitationsAsyncHelper(const DeleteInvitationsRequest& request, const DeleteInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteInvitations(request), context);
}

DeleteMembersOutcome SecurityHubClient::DeleteMembers(const DeleteMembersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/members/delete";
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

DeleteMembersOutcomeCallable SecurityHubClient::DeleteMembersCallable(const DeleteMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::DeleteMembersAsync(const DeleteMembersRequest& request, const DeleteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteMembersAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::DeleteMembersAsyncHelper(const DeleteMembersRequest& request, const DeleteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteMembers(request), context);
}

DescribeActionTargetsOutcome SecurityHubClient::DescribeActionTargets(const DescribeActionTargetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/actionTargets/get";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeActionTargetsOutcome(DescribeActionTargetsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeActionTargetsOutcome(outcome.GetError());
  }
}

DescribeActionTargetsOutcomeCallable SecurityHubClient::DescribeActionTargetsCallable(const DescribeActionTargetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeActionTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeActionTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::DescribeActionTargetsAsync(const DescribeActionTargetsRequest& request, const DescribeActionTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeActionTargetsAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::DescribeActionTargetsAsyncHelper(const DescribeActionTargetsRequest& request, const DescribeActionTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeActionTargets(request), context);
}

DescribeHubOutcome SecurityHubClient::DescribeHub(const DescribeHubRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeHubOutcome(DescribeHubResult(outcome.GetResult()));
  }
  else
  {
    return DescribeHubOutcome(outcome.GetError());
  }
}

DescribeHubOutcomeCallable SecurityHubClient::DescribeHubCallable(const DescribeHubRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeHubOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeHub(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::DescribeHubAsync(const DescribeHubRequest& request, const DescribeHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeHubAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::DescribeHubAsyncHelper(const DescribeHubRequest& request, const DescribeHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeHub(request), context);
}

DescribeProductsOutcome SecurityHubClient::DescribeProducts(const DescribeProductsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/products";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeProductsOutcome(DescribeProductsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeProductsOutcome(outcome.GetError());
  }
}

DescribeProductsOutcomeCallable SecurityHubClient::DescribeProductsCallable(const DescribeProductsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProductsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProducts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::DescribeProductsAsync(const DescribeProductsRequest& request, const DescribeProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeProductsAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::DescribeProductsAsyncHelper(const DescribeProductsRequest& request, const DescribeProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeProducts(request), context);
}

DisableImportFindingsForProductOutcome SecurityHubClient::DisableImportFindingsForProduct(const DisableImportFindingsForProductRequest& request) const
{
  if (!request.ProductSubscriptionArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisableImportFindingsForProduct", "Required field: ProductSubscriptionArn, is not set");
    return DisableImportFindingsForProductOutcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProductSubscriptionArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/productSubscriptions/";
  ss << request.GetProductSubscriptionArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisableImportFindingsForProductOutcome(DisableImportFindingsForProductResult(outcome.GetResult()));
  }
  else
  {
    return DisableImportFindingsForProductOutcome(outcome.GetError());
  }
}

DisableImportFindingsForProductOutcomeCallable SecurityHubClient::DisableImportFindingsForProductCallable(const DisableImportFindingsForProductRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableImportFindingsForProductOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableImportFindingsForProduct(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::DisableImportFindingsForProductAsync(const DisableImportFindingsForProductRequest& request, const DisableImportFindingsForProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisableImportFindingsForProductAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::DisableImportFindingsForProductAsyncHelper(const DisableImportFindingsForProductRequest& request, const DisableImportFindingsForProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableImportFindingsForProduct(request), context);
}

DisableSecurityHubOutcome SecurityHubClient::DisableSecurityHub(const DisableSecurityHubRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisableSecurityHubOutcome(DisableSecurityHubResult(outcome.GetResult()));
  }
  else
  {
    return DisableSecurityHubOutcome(outcome.GetError());
  }
}

DisableSecurityHubOutcomeCallable SecurityHubClient::DisableSecurityHubCallable(const DisableSecurityHubRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableSecurityHubOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableSecurityHub(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::DisableSecurityHubAsync(const DisableSecurityHubRequest& request, const DisableSecurityHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisableSecurityHubAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::DisableSecurityHubAsyncHelper(const DisableSecurityHubRequest& request, const DisableSecurityHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableSecurityHub(request), context);
}

DisassociateFromMasterAccountOutcome SecurityHubClient::DisassociateFromMasterAccount(const DisassociateFromMasterAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
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

DisassociateFromMasterAccountOutcomeCallable SecurityHubClient::DisassociateFromMasterAccountCallable(const DisassociateFromMasterAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateFromMasterAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateFromMasterAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::DisassociateFromMasterAccountAsync(const DisassociateFromMasterAccountRequest& request, const DisassociateFromMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateFromMasterAccountAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::DisassociateFromMasterAccountAsyncHelper(const DisassociateFromMasterAccountRequest& request, const DisassociateFromMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateFromMasterAccount(request), context);
}

DisassociateMembersOutcome SecurityHubClient::DisassociateMembers(const DisassociateMembersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/members/disassociate";
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

DisassociateMembersOutcomeCallable SecurityHubClient::DisassociateMembersCallable(const DisassociateMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::DisassociateMembersAsync(const DisassociateMembersRequest& request, const DisassociateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateMembersAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::DisassociateMembersAsyncHelper(const DisassociateMembersRequest& request, const DisassociateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateMembers(request), context);
}

EnableImportFindingsForProductOutcome SecurityHubClient::EnableImportFindingsForProduct(const EnableImportFindingsForProductRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/productSubscriptions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return EnableImportFindingsForProductOutcome(EnableImportFindingsForProductResult(outcome.GetResult()));
  }
  else
  {
    return EnableImportFindingsForProductOutcome(outcome.GetError());
  }
}

EnableImportFindingsForProductOutcomeCallable SecurityHubClient::EnableImportFindingsForProductCallable(const EnableImportFindingsForProductRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableImportFindingsForProductOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableImportFindingsForProduct(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::EnableImportFindingsForProductAsync(const EnableImportFindingsForProductRequest& request, const EnableImportFindingsForProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->EnableImportFindingsForProductAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::EnableImportFindingsForProductAsyncHelper(const EnableImportFindingsForProductRequest& request, const EnableImportFindingsForProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableImportFindingsForProduct(request), context);
}

EnableSecurityHubOutcome SecurityHubClient::EnableSecurityHub(const EnableSecurityHubRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return EnableSecurityHubOutcome(EnableSecurityHubResult(outcome.GetResult()));
  }
  else
  {
    return EnableSecurityHubOutcome(outcome.GetError());
  }
}

EnableSecurityHubOutcomeCallable SecurityHubClient::EnableSecurityHubCallable(const EnableSecurityHubRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableSecurityHubOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableSecurityHub(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::EnableSecurityHubAsync(const EnableSecurityHubRequest& request, const EnableSecurityHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->EnableSecurityHubAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::EnableSecurityHubAsyncHelper(const EnableSecurityHubRequest& request, const EnableSecurityHubResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableSecurityHub(request), context);
}

GetEnabledStandardsOutcome SecurityHubClient::GetEnabledStandards(const GetEnabledStandardsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/standards/get";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetEnabledStandardsOutcome(GetEnabledStandardsResult(outcome.GetResult()));
  }
  else
  {
    return GetEnabledStandardsOutcome(outcome.GetError());
  }
}

GetEnabledStandardsOutcomeCallable SecurityHubClient::GetEnabledStandardsCallable(const GetEnabledStandardsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEnabledStandardsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEnabledStandards(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::GetEnabledStandardsAsync(const GetEnabledStandardsRequest& request, const GetEnabledStandardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetEnabledStandardsAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::GetEnabledStandardsAsyncHelper(const GetEnabledStandardsRequest& request, const GetEnabledStandardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEnabledStandards(request), context);
}

GetFindingsOutcome SecurityHubClient::GetFindings(const GetFindingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/findings";
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

GetFindingsOutcomeCallable SecurityHubClient::GetFindingsCallable(const GetFindingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFindingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFindings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::GetFindingsAsync(const GetFindingsRequest& request, const GetFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFindingsAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::GetFindingsAsyncHelper(const GetFindingsRequest& request, const GetFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFindings(request), context);
}

GetInsightResultsOutcome SecurityHubClient::GetInsightResults(const GetInsightResultsRequest& request) const
{
  if (!request.InsightArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetInsightResults", "Required field: InsightArn, is not set");
    return GetInsightResultsOutcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InsightArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/insights/results/";
  ss << request.GetInsightArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetInsightResultsOutcome(GetInsightResultsResult(outcome.GetResult()));
  }
  else
  {
    return GetInsightResultsOutcome(outcome.GetError());
  }
}

GetInsightResultsOutcomeCallable SecurityHubClient::GetInsightResultsCallable(const GetInsightResultsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInsightResultsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInsightResults(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::GetInsightResultsAsync(const GetInsightResultsRequest& request, const GetInsightResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetInsightResultsAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::GetInsightResultsAsyncHelper(const GetInsightResultsRequest& request, const GetInsightResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetInsightResults(request), context);
}

GetInsightsOutcome SecurityHubClient::GetInsights(const GetInsightsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/insights/get";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetInsightsOutcome(GetInsightsResult(outcome.GetResult()));
  }
  else
  {
    return GetInsightsOutcome(outcome.GetError());
  }
}

GetInsightsOutcomeCallable SecurityHubClient::GetInsightsCallable(const GetInsightsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInsightsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInsights(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::GetInsightsAsync(const GetInsightsRequest& request, const GetInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetInsightsAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::GetInsightsAsyncHelper(const GetInsightsRequest& request, const GetInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetInsights(request), context);
}

GetInvitationsCountOutcome SecurityHubClient::GetInvitationsCount(const GetInvitationsCountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/invitations/count";
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

GetInvitationsCountOutcomeCallable SecurityHubClient::GetInvitationsCountCallable(const GetInvitationsCountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInvitationsCountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInvitationsCount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::GetInvitationsCountAsync(const GetInvitationsCountRequest& request, const GetInvitationsCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetInvitationsCountAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::GetInvitationsCountAsyncHelper(const GetInvitationsCountRequest& request, const GetInvitationsCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetInvitationsCount(request), context);
}

GetMasterAccountOutcome SecurityHubClient::GetMasterAccount(const GetMasterAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
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

GetMasterAccountOutcomeCallable SecurityHubClient::GetMasterAccountCallable(const GetMasterAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMasterAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMasterAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::GetMasterAccountAsync(const GetMasterAccountRequest& request, const GetMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetMasterAccountAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::GetMasterAccountAsyncHelper(const GetMasterAccountRequest& request, const GetMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetMasterAccount(request), context);
}

GetMembersOutcome SecurityHubClient::GetMembers(const GetMembersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/members/get";
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

GetMembersOutcomeCallable SecurityHubClient::GetMembersCallable(const GetMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::GetMembersAsync(const GetMembersRequest& request, const GetMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetMembersAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::GetMembersAsyncHelper(const GetMembersRequest& request, const GetMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetMembers(request), context);
}

InviteMembersOutcome SecurityHubClient::InviteMembers(const InviteMembersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/members/invite";
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

InviteMembersOutcomeCallable SecurityHubClient::InviteMembersCallable(const InviteMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< InviteMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->InviteMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::InviteMembersAsync(const InviteMembersRequest& request, const InviteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->InviteMembersAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::InviteMembersAsyncHelper(const InviteMembersRequest& request, const InviteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, InviteMembers(request), context);
}

ListEnabledProductsForImportOutcome SecurityHubClient::ListEnabledProductsForImport(const ListEnabledProductsForImportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/productSubscriptions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListEnabledProductsForImportOutcome(ListEnabledProductsForImportResult(outcome.GetResult()));
  }
  else
  {
    return ListEnabledProductsForImportOutcome(outcome.GetError());
  }
}

ListEnabledProductsForImportOutcomeCallable SecurityHubClient::ListEnabledProductsForImportCallable(const ListEnabledProductsForImportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEnabledProductsForImportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEnabledProductsForImport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::ListEnabledProductsForImportAsync(const ListEnabledProductsForImportRequest& request, const ListEnabledProductsForImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListEnabledProductsForImportAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::ListEnabledProductsForImportAsyncHelper(const ListEnabledProductsForImportRequest& request, const ListEnabledProductsForImportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListEnabledProductsForImport(request), context);
}

ListInvitationsOutcome SecurityHubClient::ListInvitations(const ListInvitationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/invitations";
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

ListInvitationsOutcomeCallable SecurityHubClient::ListInvitationsCallable(const ListInvitationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInvitationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInvitations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::ListInvitationsAsync(const ListInvitationsRequest& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListInvitationsAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::ListInvitationsAsyncHelper(const ListInvitationsRequest& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListInvitations(request), context);
}

ListMembersOutcome SecurityHubClient::ListMembers(const ListMembersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/members";
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

ListMembersOutcomeCallable SecurityHubClient::ListMembersCallable(const ListMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::ListMembersAsync(const ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListMembersAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::ListMembersAsyncHelper(const ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListMembers(request), context);
}

ListTagsForResourceOutcome SecurityHubClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsForResourceOutcome(ListTagsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResourceOutcome(outcome.GetError());
  }
}

ListTagsForResourceOutcomeCallable SecurityHubClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

TagResourceOutcome SecurityHubClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
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

TagResourceOutcomeCallable SecurityHubClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome SecurityHubClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UntagResourceOutcome(UntagResourceResult(outcome.GetResult()));
  }
  else
  {
    return UntagResourceOutcome(outcome.GetError());
  }
}

UntagResourceOutcomeCallable SecurityHubClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateActionTargetOutcome SecurityHubClient::UpdateActionTarget(const UpdateActionTargetRequest& request) const
{
  if (!request.ActionTargetArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateActionTarget", "Required field: ActionTargetArn, is not set");
    return UpdateActionTargetOutcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ActionTargetArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/actionTargets/";
  ss << request.GetActionTargetArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateActionTargetOutcome(UpdateActionTargetResult(outcome.GetResult()));
  }
  else
  {
    return UpdateActionTargetOutcome(outcome.GetError());
  }
}

UpdateActionTargetOutcomeCallable SecurityHubClient::UpdateActionTargetCallable(const UpdateActionTargetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateActionTargetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateActionTarget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::UpdateActionTargetAsync(const UpdateActionTargetRequest& request, const UpdateActionTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateActionTargetAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::UpdateActionTargetAsyncHelper(const UpdateActionTargetRequest& request, const UpdateActionTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateActionTarget(request), context);
}

UpdateFindingsOutcome SecurityHubClient::UpdateFindings(const UpdateFindingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/findings";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateFindingsOutcome(UpdateFindingsResult(outcome.GetResult()));
  }
  else
  {
    return UpdateFindingsOutcome(outcome.GetError());
  }
}

UpdateFindingsOutcomeCallable SecurityHubClient::UpdateFindingsCallable(const UpdateFindingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFindingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFindings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::UpdateFindingsAsync(const UpdateFindingsRequest& request, const UpdateFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFindingsAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::UpdateFindingsAsyncHelper(const UpdateFindingsRequest& request, const UpdateFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFindings(request), context);
}

UpdateInsightOutcome SecurityHubClient::UpdateInsight(const UpdateInsightRequest& request) const
{
  if (!request.InsightArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateInsight", "Required field: InsightArn, is not set");
    return UpdateInsightOutcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InsightArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/insights/";
  ss << request.GetInsightArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateInsightOutcome(UpdateInsightResult(outcome.GetResult()));
  }
  else
  {
    return UpdateInsightOutcome(outcome.GetError());
  }
}

UpdateInsightOutcomeCallable SecurityHubClient::UpdateInsightCallable(const UpdateInsightRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateInsightOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateInsight(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::UpdateInsightAsync(const UpdateInsightRequest& request, const UpdateInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateInsightAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::UpdateInsightAsyncHelper(const UpdateInsightRequest& request, const UpdateInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateInsight(request), context);
}

