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

#include <aws/securityhub/SecurityHubClient.h>
#include <aws/securityhub/SecurityHubEndpoint.h>
#include <aws/securityhub/SecurityHubErrorMarshaller.h>
#include <aws/securityhub/model/AcceptInvitationRequest.h>
#include <aws/securityhub/model/BatchDisableStandardsRequest.h>
#include <aws/securityhub/model/BatchEnableStandardsRequest.h>
#include <aws/securityhub/model/BatchImportFindingsRequest.h>
#include <aws/securityhub/model/BatchUpdateFindingsRequest.h>
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
#include <aws/securityhub/model/DescribeOrganizationConfigurationRequest.h>
#include <aws/securityhub/model/DescribeProductsRequest.h>
#include <aws/securityhub/model/DescribeStandardsRequest.h>
#include <aws/securityhub/model/DescribeStandardsControlsRequest.h>
#include <aws/securityhub/model/DisableImportFindingsForProductRequest.h>
#include <aws/securityhub/model/DisableOrganizationAdminAccountRequest.h>
#include <aws/securityhub/model/DisableSecurityHubRequest.h>
#include <aws/securityhub/model/DisassociateFromMasterAccountRequest.h>
#include <aws/securityhub/model/DisassociateMembersRequest.h>
#include <aws/securityhub/model/EnableImportFindingsForProductRequest.h>
#include <aws/securityhub/model/EnableOrganizationAdminAccountRequest.h>
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
#include <aws/securityhub/model/ListOrganizationAdminAccountsRequest.h>
#include <aws/securityhub/model/ListTagsForResourceRequest.h>
#include <aws/securityhub/model/TagResourceRequest.h>
#include <aws/securityhub/model/UntagResourceRequest.h>
#include <aws/securityhub/model/UpdateActionTargetRequest.h>
#include <aws/securityhub/model/UpdateFindingsRequest.h>
#include <aws/securityhub/model/UpdateInsightRequest.h>
#include <aws/securityhub/model/UpdateOrganizationConfigurationRequest.h>
#include <aws/securityhub/model/UpdateSecurityHubConfigurationRequest.h>
#include <aws/securityhub/model/UpdateStandardsControlRequest.h>

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
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<SecurityHubErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SecurityHubClient::SecurityHubClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<SecurityHubErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

SecurityHubClient::SecurityHubClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
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
  SetServiceClientName("SecurityHub");
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
  return AcceptInvitationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return BatchDisableStandardsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return BatchEnableStandardsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return BatchImportFindingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

BatchUpdateFindingsOutcome SecurityHubClient::BatchUpdateFindings(const BatchUpdateFindingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/findings/batchupdate";
  uri.SetPath(uri.GetPath() + ss.str());
  return BatchUpdateFindingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

BatchUpdateFindingsOutcomeCallable SecurityHubClient::BatchUpdateFindingsCallable(const BatchUpdateFindingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchUpdateFindingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchUpdateFindings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::BatchUpdateFindingsAsync(const BatchUpdateFindingsRequest& request, const BatchUpdateFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchUpdateFindingsAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::BatchUpdateFindingsAsyncHelper(const BatchUpdateFindingsRequest& request, const BatchUpdateFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchUpdateFindings(request), context);
}

CreateActionTargetOutcome SecurityHubClient::CreateActionTarget(const CreateActionTargetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/actionTargets";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateActionTargetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return CreateInsightOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return CreateMembersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return DeclineInvitationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return DeleteActionTargetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  return DeleteInsightOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  return DeleteInvitationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return DeleteMembersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return DescribeActionTargetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return DescribeHubOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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

DescribeOrganizationConfigurationOutcome SecurityHubClient::DescribeOrganizationConfiguration(const DescribeOrganizationConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/organization/configuration";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeOrganizationConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeOrganizationConfigurationOutcomeCallable SecurityHubClient::DescribeOrganizationConfigurationCallable(const DescribeOrganizationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOrganizationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOrganizationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::DescribeOrganizationConfigurationAsync(const DescribeOrganizationConfigurationRequest& request, const DescribeOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeOrganizationConfigurationAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::DescribeOrganizationConfigurationAsyncHelper(const DescribeOrganizationConfigurationRequest& request, const DescribeOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeOrganizationConfiguration(request), context);
}

DescribeProductsOutcome SecurityHubClient::DescribeProducts(const DescribeProductsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/products";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeProductsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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

DescribeStandardsOutcome SecurityHubClient::DescribeStandards(const DescribeStandardsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/standards";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeStandardsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeStandardsOutcomeCallable SecurityHubClient::DescribeStandardsCallable(const DescribeStandardsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStandardsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStandards(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::DescribeStandardsAsync(const DescribeStandardsRequest& request, const DescribeStandardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeStandardsAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::DescribeStandardsAsyncHelper(const DescribeStandardsRequest& request, const DescribeStandardsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeStandards(request), context);
}

DescribeStandardsControlsOutcome SecurityHubClient::DescribeStandardsControls(const DescribeStandardsControlsRequest& request) const
{
  if (!request.StandardsSubscriptionArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeStandardsControls", "Required field: StandardsSubscriptionArn, is not set");
    return DescribeStandardsControlsOutcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StandardsSubscriptionArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/standards/controls/";
  ss << request.GetStandardsSubscriptionArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeStandardsControlsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeStandardsControlsOutcomeCallable SecurityHubClient::DescribeStandardsControlsCallable(const DescribeStandardsControlsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeStandardsControlsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeStandardsControls(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::DescribeStandardsControlsAsync(const DescribeStandardsControlsRequest& request, const DescribeStandardsControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeStandardsControlsAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::DescribeStandardsControlsAsyncHelper(const DescribeStandardsControlsRequest& request, const DescribeStandardsControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeStandardsControls(request), context);
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
  return DisableImportFindingsForProductOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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

DisableOrganizationAdminAccountOutcome SecurityHubClient::DisableOrganizationAdminAccount(const DisableOrganizationAdminAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/organization/admin/disable";
  uri.SetPath(uri.GetPath() + ss.str());
  return DisableOrganizationAdminAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableOrganizationAdminAccountOutcomeCallable SecurityHubClient::DisableOrganizationAdminAccountCallable(const DisableOrganizationAdminAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableOrganizationAdminAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableOrganizationAdminAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::DisableOrganizationAdminAccountAsync(const DisableOrganizationAdminAccountRequest& request, const DisableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisableOrganizationAdminAccountAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::DisableOrganizationAdminAccountAsyncHelper(const DisableOrganizationAdminAccountRequest& request, const DisableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableOrganizationAdminAccount(request), context);
}

DisableSecurityHubOutcome SecurityHubClient::DisableSecurityHub(const DisableSecurityHubRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts";
  uri.SetPath(uri.GetPath() + ss.str());
  return DisableSecurityHubOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  return DisassociateFromMasterAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return DisassociateMembersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return EnableImportFindingsForProductOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

EnableOrganizationAdminAccountOutcome SecurityHubClient::EnableOrganizationAdminAccount(const EnableOrganizationAdminAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/organization/admin/enable";
  uri.SetPath(uri.GetPath() + ss.str());
  return EnableOrganizationAdminAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableOrganizationAdminAccountOutcomeCallable SecurityHubClient::EnableOrganizationAdminAccountCallable(const EnableOrganizationAdminAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableOrganizationAdminAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableOrganizationAdminAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::EnableOrganizationAdminAccountAsync(const EnableOrganizationAdminAccountRequest& request, const EnableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->EnableOrganizationAdminAccountAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::EnableOrganizationAdminAccountAsyncHelper(const EnableOrganizationAdminAccountRequest& request, const EnableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableOrganizationAdminAccount(request), context);
}

EnableSecurityHubOutcome SecurityHubClient::EnableSecurityHub(const EnableSecurityHubRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts";
  uri.SetPath(uri.GetPath() + ss.str());
  return EnableSecurityHubOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return GetEnabledStandardsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return GetFindingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return GetInsightResultsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  return GetInsightsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return GetInvitationsCountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  return GetMasterAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  return GetMembersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return InviteMembersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return ListEnabledProductsForImportOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  return ListInvitationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  return ListMembersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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

ListOrganizationAdminAccountsOutcome SecurityHubClient::ListOrganizationAdminAccounts(const ListOrganizationAdminAccountsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/organization/admin";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListOrganizationAdminAccountsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListOrganizationAdminAccountsOutcomeCallable SecurityHubClient::ListOrganizationAdminAccountsCallable(const ListOrganizationAdminAccountsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOrganizationAdminAccountsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOrganizationAdminAccounts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::ListOrganizationAdminAccountsAsync(const ListOrganizationAdminAccountsRequest& request, const ListOrganizationAdminAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListOrganizationAdminAccountsAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::ListOrganizationAdminAccountsAsyncHelper(const ListOrganizationAdminAccountsRequest& request, const ListOrganizationAdminAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListOrganizationAdminAccounts(request), context);
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
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  return UpdateActionTargetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
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
  return UpdateFindingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
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
  return UpdateInsightOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
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

UpdateOrganizationConfigurationOutcome SecurityHubClient::UpdateOrganizationConfiguration(const UpdateOrganizationConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/organization/configuration";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateOrganizationConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateOrganizationConfigurationOutcomeCallable SecurityHubClient::UpdateOrganizationConfigurationCallable(const UpdateOrganizationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateOrganizationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateOrganizationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::UpdateOrganizationConfigurationAsync(const UpdateOrganizationConfigurationRequest& request, const UpdateOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateOrganizationConfigurationAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::UpdateOrganizationConfigurationAsyncHelper(const UpdateOrganizationConfigurationRequest& request, const UpdateOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateOrganizationConfiguration(request), context);
}

UpdateSecurityHubConfigurationOutcome SecurityHubClient::UpdateSecurityHubConfiguration(const UpdateSecurityHubConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/accounts";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateSecurityHubConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateSecurityHubConfigurationOutcomeCallable SecurityHubClient::UpdateSecurityHubConfigurationCallable(const UpdateSecurityHubConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSecurityHubConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSecurityHubConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::UpdateSecurityHubConfigurationAsync(const UpdateSecurityHubConfigurationRequest& request, const UpdateSecurityHubConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSecurityHubConfigurationAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::UpdateSecurityHubConfigurationAsyncHelper(const UpdateSecurityHubConfigurationRequest& request, const UpdateSecurityHubConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSecurityHubConfiguration(request), context);
}

UpdateStandardsControlOutcome SecurityHubClient::UpdateStandardsControl(const UpdateStandardsControlRequest& request) const
{
  if (!request.StandardsControlArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateStandardsControl", "Required field: StandardsControlArn, is not set");
    return UpdateStandardsControlOutcome(Aws::Client::AWSError<SecurityHubErrors>(SecurityHubErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StandardsControlArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/standards/control/";
  ss << request.GetStandardsControlArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateStandardsControlOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateStandardsControlOutcomeCallable SecurityHubClient::UpdateStandardsControlCallable(const UpdateStandardsControlRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStandardsControlOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStandardsControl(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void SecurityHubClient::UpdateStandardsControlAsync(const UpdateStandardsControlRequest& request, const UpdateStandardsControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateStandardsControlAsyncHelper( request, handler, context ); } );
}

void SecurityHubClient::UpdateStandardsControlAsyncHelper(const UpdateStandardsControlRequest& request, const UpdateStandardsControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateStandardsControl(request), context);
}

