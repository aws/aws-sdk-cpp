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

#include <aws/macie2/Macie2Client.h>
#include <aws/macie2/Macie2Endpoint.h>
#include <aws/macie2/Macie2ErrorMarshaller.h>
#include <aws/macie2/model/AcceptInvitationRequest.h>
#include <aws/macie2/model/BatchGetCustomDataIdentifiersRequest.h>
#include <aws/macie2/model/CreateAllowListRequest.h>
#include <aws/macie2/model/CreateClassificationJobRequest.h>
#include <aws/macie2/model/CreateCustomDataIdentifierRequest.h>
#include <aws/macie2/model/CreateFindingsFilterRequest.h>
#include <aws/macie2/model/CreateInvitationsRequest.h>
#include <aws/macie2/model/CreateMemberRequest.h>
#include <aws/macie2/model/CreateSampleFindingsRequest.h>
#include <aws/macie2/model/DeclineInvitationsRequest.h>
#include <aws/macie2/model/DeleteAllowListRequest.h>
#include <aws/macie2/model/DeleteCustomDataIdentifierRequest.h>
#include <aws/macie2/model/DeleteFindingsFilterRequest.h>
#include <aws/macie2/model/DeleteInvitationsRequest.h>
#include <aws/macie2/model/DeleteMemberRequest.h>
#include <aws/macie2/model/DescribeBucketsRequest.h>
#include <aws/macie2/model/DescribeClassificationJobRequest.h>
#include <aws/macie2/model/DescribeOrganizationConfigurationRequest.h>
#include <aws/macie2/model/DisableMacieRequest.h>
#include <aws/macie2/model/DisableOrganizationAdminAccountRequest.h>
#include <aws/macie2/model/DisassociateFromAdministratorAccountRequest.h>
#include <aws/macie2/model/DisassociateFromMasterAccountRequest.h>
#include <aws/macie2/model/DisassociateMemberRequest.h>
#include <aws/macie2/model/EnableMacieRequest.h>
#include <aws/macie2/model/EnableOrganizationAdminAccountRequest.h>
#include <aws/macie2/model/GetAdministratorAccountRequest.h>
#include <aws/macie2/model/GetAllowListRequest.h>
#include <aws/macie2/model/GetBucketStatisticsRequest.h>
#include <aws/macie2/model/GetClassificationExportConfigurationRequest.h>
#include <aws/macie2/model/GetCustomDataIdentifierRequest.h>
#include <aws/macie2/model/GetFindingStatisticsRequest.h>
#include <aws/macie2/model/GetFindingsRequest.h>
#include <aws/macie2/model/GetFindingsFilterRequest.h>
#include <aws/macie2/model/GetFindingsPublicationConfigurationRequest.h>
#include <aws/macie2/model/GetInvitationsCountRequest.h>
#include <aws/macie2/model/GetMacieSessionRequest.h>
#include <aws/macie2/model/GetMasterAccountRequest.h>
#include <aws/macie2/model/GetMemberRequest.h>
#include <aws/macie2/model/GetRevealConfigurationRequest.h>
#include <aws/macie2/model/GetSensitiveDataOccurrencesRequest.h>
#include <aws/macie2/model/GetSensitiveDataOccurrencesAvailabilityRequest.h>
#include <aws/macie2/model/GetUsageStatisticsRequest.h>
#include <aws/macie2/model/GetUsageTotalsRequest.h>
#include <aws/macie2/model/ListAllowListsRequest.h>
#include <aws/macie2/model/ListClassificationJobsRequest.h>
#include <aws/macie2/model/ListCustomDataIdentifiersRequest.h>
#include <aws/macie2/model/ListFindingsRequest.h>
#include <aws/macie2/model/ListFindingsFiltersRequest.h>
#include <aws/macie2/model/ListInvitationsRequest.h>
#include <aws/macie2/model/ListManagedDataIdentifiersRequest.h>
#include <aws/macie2/model/ListMembersRequest.h>
#include <aws/macie2/model/ListOrganizationAdminAccountsRequest.h>
#include <aws/macie2/model/ListTagsForResourceRequest.h>
#include <aws/macie2/model/PutClassificationExportConfigurationRequest.h>
#include <aws/macie2/model/PutFindingsPublicationConfigurationRequest.h>
#include <aws/macie2/model/SearchResourcesRequest.h>
#include <aws/macie2/model/TagResourceRequest.h>
#include <aws/macie2/model/TestCustomDataIdentifierRequest.h>
#include <aws/macie2/model/UntagResourceRequest.h>
#include <aws/macie2/model/UpdateAllowListRequest.h>
#include <aws/macie2/model/UpdateClassificationJobRequest.h>
#include <aws/macie2/model/UpdateFindingsFilterRequest.h>
#include <aws/macie2/model/UpdateMacieSessionRequest.h>
#include <aws/macie2/model/UpdateMemberSessionRequest.h>
#include <aws/macie2/model/UpdateOrganizationConfigurationRequest.h>
#include <aws/macie2/model/UpdateRevealConfigurationRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Macie2;
using namespace Aws::Macie2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "macie2";
static const char* ALLOCATION_TAG = "Macie2Client";

Macie2Client::Macie2Client(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Macie2ErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

Macie2Client::Macie2Client(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Macie2ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

Macie2Client::Macie2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Macie2ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

Macie2Client::~Macie2Client()
{
}

void Macie2Client::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Macie2");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + Macie2Endpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void Macie2Client::OverrideEndpoint(const Aws::String& endpoint)
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

AcceptInvitationOutcome Macie2Client::AcceptInvitation(const AcceptInvitationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/invitations/accept");
  return AcceptInvitationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AcceptInvitationOutcomeCallable Macie2Client::AcceptInvitationCallable(const AcceptInvitationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcceptInvitationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcceptInvitation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::AcceptInvitationAsync(const AcceptInvitationRequest& request, const AcceptInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AcceptInvitationAsyncHelper( request, handler, context ); } );
}

void Macie2Client::AcceptInvitationAsyncHelper(const AcceptInvitationRequest& request, const AcceptInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AcceptInvitation(request), context);
}

BatchGetCustomDataIdentifiersOutcome Macie2Client::BatchGetCustomDataIdentifiers(const BatchGetCustomDataIdentifiersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/custom-data-identifiers/get");
  return BatchGetCustomDataIdentifiersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGetCustomDataIdentifiersOutcomeCallable Macie2Client::BatchGetCustomDataIdentifiersCallable(const BatchGetCustomDataIdentifiersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGetCustomDataIdentifiersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGetCustomDataIdentifiers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::BatchGetCustomDataIdentifiersAsync(const BatchGetCustomDataIdentifiersRequest& request, const BatchGetCustomDataIdentifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchGetCustomDataIdentifiersAsyncHelper( request, handler, context ); } );
}

void Macie2Client::BatchGetCustomDataIdentifiersAsyncHelper(const BatchGetCustomDataIdentifiersRequest& request, const BatchGetCustomDataIdentifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchGetCustomDataIdentifiers(request), context);
}

CreateAllowListOutcome Macie2Client::CreateAllowList(const CreateAllowListRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/allow-lists");
  return CreateAllowListOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAllowListOutcomeCallable Macie2Client::CreateAllowListCallable(const CreateAllowListRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAllowListOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAllowList(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::CreateAllowListAsync(const CreateAllowListRequest& request, const CreateAllowListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAllowListAsyncHelper( request, handler, context ); } );
}

void Macie2Client::CreateAllowListAsyncHelper(const CreateAllowListRequest& request, const CreateAllowListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAllowList(request), context);
}

CreateClassificationJobOutcome Macie2Client::CreateClassificationJob(const CreateClassificationJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/jobs");
  return CreateClassificationJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateClassificationJobOutcomeCallable Macie2Client::CreateClassificationJobCallable(const CreateClassificationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateClassificationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateClassificationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::CreateClassificationJobAsync(const CreateClassificationJobRequest& request, const CreateClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateClassificationJobAsyncHelper( request, handler, context ); } );
}

void Macie2Client::CreateClassificationJobAsyncHelper(const CreateClassificationJobRequest& request, const CreateClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateClassificationJob(request), context);
}

CreateCustomDataIdentifierOutcome Macie2Client::CreateCustomDataIdentifier(const CreateCustomDataIdentifierRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/custom-data-identifiers");
  return CreateCustomDataIdentifierOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCustomDataIdentifierOutcomeCallable Macie2Client::CreateCustomDataIdentifierCallable(const CreateCustomDataIdentifierRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCustomDataIdentifierOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCustomDataIdentifier(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::CreateCustomDataIdentifierAsync(const CreateCustomDataIdentifierRequest& request, const CreateCustomDataIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCustomDataIdentifierAsyncHelper( request, handler, context ); } );
}

void Macie2Client::CreateCustomDataIdentifierAsyncHelper(const CreateCustomDataIdentifierRequest& request, const CreateCustomDataIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCustomDataIdentifier(request), context);
}

CreateFindingsFilterOutcome Macie2Client::CreateFindingsFilter(const CreateFindingsFilterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/findingsfilters");
  return CreateFindingsFilterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFindingsFilterOutcomeCallable Macie2Client::CreateFindingsFilterCallable(const CreateFindingsFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFindingsFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFindingsFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::CreateFindingsFilterAsync(const CreateFindingsFilterRequest& request, const CreateFindingsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateFindingsFilterAsyncHelper( request, handler, context ); } );
}

void Macie2Client::CreateFindingsFilterAsyncHelper(const CreateFindingsFilterRequest& request, const CreateFindingsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFindingsFilter(request), context);
}

CreateInvitationsOutcome Macie2Client::CreateInvitations(const CreateInvitationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/invitations");
  return CreateInvitationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateInvitationsOutcomeCallable Macie2Client::CreateInvitationsCallable(const CreateInvitationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateInvitationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInvitations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::CreateInvitationsAsync(const CreateInvitationsRequest& request, const CreateInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateInvitationsAsyncHelper( request, handler, context ); } );
}

void Macie2Client::CreateInvitationsAsyncHelper(const CreateInvitationsRequest& request, const CreateInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateInvitations(request), context);
}

CreateMemberOutcome Macie2Client::CreateMember(const CreateMemberRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/members");
  return CreateMemberOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMemberOutcomeCallable Macie2Client::CreateMemberCallable(const CreateMemberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMemberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMember(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::CreateMemberAsync(const CreateMemberRequest& request, const CreateMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateMemberAsyncHelper( request, handler, context ); } );
}

void Macie2Client::CreateMemberAsyncHelper(const CreateMemberRequest& request, const CreateMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateMember(request), context);
}

CreateSampleFindingsOutcome Macie2Client::CreateSampleFindings(const CreateSampleFindingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/findings/sample");
  return CreateSampleFindingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSampleFindingsOutcomeCallable Macie2Client::CreateSampleFindingsCallable(const CreateSampleFindingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSampleFindingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSampleFindings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::CreateSampleFindingsAsync(const CreateSampleFindingsRequest& request, const CreateSampleFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateSampleFindingsAsyncHelper( request, handler, context ); } );
}

void Macie2Client::CreateSampleFindingsAsyncHelper(const CreateSampleFindingsRequest& request, const CreateSampleFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateSampleFindings(request), context);
}

DeclineInvitationsOutcome Macie2Client::DeclineInvitations(const DeclineInvitationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/invitations/decline");
  return DeclineInvitationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeclineInvitationsOutcomeCallable Macie2Client::DeclineInvitationsCallable(const DeclineInvitationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeclineInvitationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeclineInvitations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::DeclineInvitationsAsync(const DeclineInvitationsRequest& request, const DeclineInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeclineInvitationsAsyncHelper( request, handler, context ); } );
}

void Macie2Client::DeclineInvitationsAsyncHelper(const DeclineInvitationsRequest& request, const DeclineInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeclineInvitations(request), context);
}

DeleteAllowListOutcome Macie2Client::DeleteAllowList(const DeleteAllowListRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAllowList", "Required field: Id, is not set");
    return DeleteAllowListOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/allow-lists/");
  uri.AddPathSegment(request.GetId());
  return DeleteAllowListOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAllowListOutcomeCallable Macie2Client::DeleteAllowListCallable(const DeleteAllowListRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAllowListOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAllowList(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::DeleteAllowListAsync(const DeleteAllowListRequest& request, const DeleteAllowListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAllowListAsyncHelper( request, handler, context ); } );
}

void Macie2Client::DeleteAllowListAsyncHelper(const DeleteAllowListRequest& request, const DeleteAllowListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAllowList(request), context);
}

DeleteCustomDataIdentifierOutcome Macie2Client::DeleteCustomDataIdentifier(const DeleteCustomDataIdentifierRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCustomDataIdentifier", "Required field: Id, is not set");
    return DeleteCustomDataIdentifierOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/custom-data-identifiers/");
  uri.AddPathSegment(request.GetId());
  return DeleteCustomDataIdentifierOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteCustomDataIdentifierOutcomeCallable Macie2Client::DeleteCustomDataIdentifierCallable(const DeleteCustomDataIdentifierRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCustomDataIdentifierOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCustomDataIdentifier(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::DeleteCustomDataIdentifierAsync(const DeleteCustomDataIdentifierRequest& request, const DeleteCustomDataIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCustomDataIdentifierAsyncHelper( request, handler, context ); } );
}

void Macie2Client::DeleteCustomDataIdentifierAsyncHelper(const DeleteCustomDataIdentifierRequest& request, const DeleteCustomDataIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCustomDataIdentifier(request), context);
}

DeleteFindingsFilterOutcome Macie2Client::DeleteFindingsFilter(const DeleteFindingsFilterRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFindingsFilter", "Required field: Id, is not set");
    return DeleteFindingsFilterOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/findingsfilters/");
  uri.AddPathSegment(request.GetId());
  return DeleteFindingsFilterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteFindingsFilterOutcomeCallable Macie2Client::DeleteFindingsFilterCallable(const DeleteFindingsFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFindingsFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFindingsFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::DeleteFindingsFilterAsync(const DeleteFindingsFilterRequest& request, const DeleteFindingsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFindingsFilterAsyncHelper( request, handler, context ); } );
}

void Macie2Client::DeleteFindingsFilterAsyncHelper(const DeleteFindingsFilterRequest& request, const DeleteFindingsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFindingsFilter(request), context);
}

DeleteInvitationsOutcome Macie2Client::DeleteInvitations(const DeleteInvitationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/invitations/delete");
  return DeleteInvitationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteInvitationsOutcomeCallable Macie2Client::DeleteInvitationsCallable(const DeleteInvitationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInvitationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInvitations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::DeleteInvitationsAsync(const DeleteInvitationsRequest& request, const DeleteInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteInvitationsAsyncHelper( request, handler, context ); } );
}

void Macie2Client::DeleteInvitationsAsyncHelper(const DeleteInvitationsRequest& request, const DeleteInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteInvitations(request), context);
}

DeleteMemberOutcome Macie2Client::DeleteMember(const DeleteMemberRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMember", "Required field: Id, is not set");
    return DeleteMemberOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/members/");
  uri.AddPathSegment(request.GetId());
  return DeleteMemberOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteMemberOutcomeCallable Macie2Client::DeleteMemberCallable(const DeleteMemberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMemberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMember(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::DeleteMemberAsync(const DeleteMemberRequest& request, const DeleteMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteMemberAsyncHelper( request, handler, context ); } );
}

void Macie2Client::DeleteMemberAsyncHelper(const DeleteMemberRequest& request, const DeleteMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteMember(request), context);
}

DescribeBucketsOutcome Macie2Client::DescribeBuckets(const DescribeBucketsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasources/s3");
  return DescribeBucketsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeBucketsOutcomeCallable Macie2Client::DescribeBucketsCallable(const DescribeBucketsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeBucketsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeBuckets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::DescribeBucketsAsync(const DescribeBucketsRequest& request, const DescribeBucketsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeBucketsAsyncHelper( request, handler, context ); } );
}

void Macie2Client::DescribeBucketsAsyncHelper(const DescribeBucketsRequest& request, const DescribeBucketsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeBuckets(request), context);
}

DescribeClassificationJobOutcome Macie2Client::DescribeClassificationJob(const DescribeClassificationJobRequest& request) const
{
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeClassificationJob", "Required field: JobId, is not set");
    return DescribeClassificationJobOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/jobs/");
  uri.AddPathSegment(request.GetJobId());
  return DescribeClassificationJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeClassificationJobOutcomeCallable Macie2Client::DescribeClassificationJobCallable(const DescribeClassificationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeClassificationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeClassificationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::DescribeClassificationJobAsync(const DescribeClassificationJobRequest& request, const DescribeClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeClassificationJobAsyncHelper( request, handler, context ); } );
}

void Macie2Client::DescribeClassificationJobAsyncHelper(const DescribeClassificationJobRequest& request, const DescribeClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeClassificationJob(request), context);
}

DescribeOrganizationConfigurationOutcome Macie2Client::DescribeOrganizationConfiguration(const DescribeOrganizationConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/admin/configuration");
  return DescribeOrganizationConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeOrganizationConfigurationOutcomeCallable Macie2Client::DescribeOrganizationConfigurationCallable(const DescribeOrganizationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOrganizationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOrganizationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::DescribeOrganizationConfigurationAsync(const DescribeOrganizationConfigurationRequest& request, const DescribeOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeOrganizationConfigurationAsyncHelper( request, handler, context ); } );
}

void Macie2Client::DescribeOrganizationConfigurationAsyncHelper(const DescribeOrganizationConfigurationRequest& request, const DescribeOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeOrganizationConfiguration(request), context);
}

DisableMacieOutcome Macie2Client::DisableMacie(const DisableMacieRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/macie");
  return DisableMacieOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisableMacieOutcomeCallable Macie2Client::DisableMacieCallable(const DisableMacieRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableMacieOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableMacie(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::DisableMacieAsync(const DisableMacieRequest& request, const DisableMacieResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisableMacieAsyncHelper( request, handler, context ); } );
}

void Macie2Client::DisableMacieAsyncHelper(const DisableMacieRequest& request, const DisableMacieResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableMacie(request), context);
}

DisableOrganizationAdminAccountOutcome Macie2Client::DisableOrganizationAdminAccount(const DisableOrganizationAdminAccountRequest& request) const
{
  if (!request.AdminAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisableOrganizationAdminAccount", "Required field: AdminAccountId, is not set");
    return DisableOrganizationAdminAccountOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AdminAccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/admin");
  return DisableOrganizationAdminAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisableOrganizationAdminAccountOutcomeCallable Macie2Client::DisableOrganizationAdminAccountCallable(const DisableOrganizationAdminAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableOrganizationAdminAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableOrganizationAdminAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::DisableOrganizationAdminAccountAsync(const DisableOrganizationAdminAccountRequest& request, const DisableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisableOrganizationAdminAccountAsyncHelper( request, handler, context ); } );
}

void Macie2Client::DisableOrganizationAdminAccountAsyncHelper(const DisableOrganizationAdminAccountRequest& request, const DisableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableOrganizationAdminAccount(request), context);
}

DisassociateFromAdministratorAccountOutcome Macie2Client::DisassociateFromAdministratorAccount(const DisassociateFromAdministratorAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/administrator/disassociate");
  return DisassociateFromAdministratorAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateFromAdministratorAccountOutcomeCallable Macie2Client::DisassociateFromAdministratorAccountCallable(const DisassociateFromAdministratorAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateFromAdministratorAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateFromAdministratorAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::DisassociateFromAdministratorAccountAsync(const DisassociateFromAdministratorAccountRequest& request, const DisassociateFromAdministratorAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateFromAdministratorAccountAsyncHelper( request, handler, context ); } );
}

void Macie2Client::DisassociateFromAdministratorAccountAsyncHelper(const DisassociateFromAdministratorAccountRequest& request, const DisassociateFromAdministratorAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateFromAdministratorAccount(request), context);
}

DisassociateFromMasterAccountOutcome Macie2Client::DisassociateFromMasterAccount(const DisassociateFromMasterAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/master/disassociate");
  return DisassociateFromMasterAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateFromMasterAccountOutcomeCallable Macie2Client::DisassociateFromMasterAccountCallable(const DisassociateFromMasterAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateFromMasterAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateFromMasterAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::DisassociateFromMasterAccountAsync(const DisassociateFromMasterAccountRequest& request, const DisassociateFromMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateFromMasterAccountAsyncHelper( request, handler, context ); } );
}

void Macie2Client::DisassociateFromMasterAccountAsyncHelper(const DisassociateFromMasterAccountRequest& request, const DisassociateFromMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateFromMasterAccount(request), context);
}

DisassociateMemberOutcome Macie2Client::DisassociateMember(const DisassociateMemberRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateMember", "Required field: Id, is not set");
    return DisassociateMemberOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/members/disassociate/");
  uri.AddPathSegment(request.GetId());
  return DisassociateMemberOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateMemberOutcomeCallable Macie2Client::DisassociateMemberCallable(const DisassociateMemberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateMemberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateMember(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::DisassociateMemberAsync(const DisassociateMemberRequest& request, const DisassociateMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateMemberAsyncHelper( request, handler, context ); } );
}

void Macie2Client::DisassociateMemberAsyncHelper(const DisassociateMemberRequest& request, const DisassociateMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateMember(request), context);
}

EnableMacieOutcome Macie2Client::EnableMacie(const EnableMacieRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/macie");
  return EnableMacieOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableMacieOutcomeCallable Macie2Client::EnableMacieCallable(const EnableMacieRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableMacieOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableMacie(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::EnableMacieAsync(const EnableMacieRequest& request, const EnableMacieResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->EnableMacieAsyncHelper( request, handler, context ); } );
}

void Macie2Client::EnableMacieAsyncHelper(const EnableMacieRequest& request, const EnableMacieResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableMacie(request), context);
}

EnableOrganizationAdminAccountOutcome Macie2Client::EnableOrganizationAdminAccount(const EnableOrganizationAdminAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/admin");
  return EnableOrganizationAdminAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableOrganizationAdminAccountOutcomeCallable Macie2Client::EnableOrganizationAdminAccountCallable(const EnableOrganizationAdminAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableOrganizationAdminAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableOrganizationAdminAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::EnableOrganizationAdminAccountAsync(const EnableOrganizationAdminAccountRequest& request, const EnableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->EnableOrganizationAdminAccountAsyncHelper( request, handler, context ); } );
}

void Macie2Client::EnableOrganizationAdminAccountAsyncHelper(const EnableOrganizationAdminAccountRequest& request, const EnableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableOrganizationAdminAccount(request), context);
}

GetAdministratorAccountOutcome Macie2Client::GetAdministratorAccount(const GetAdministratorAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/administrator");
  return GetAdministratorAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAdministratorAccountOutcomeCallable Macie2Client::GetAdministratorAccountCallable(const GetAdministratorAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAdministratorAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAdministratorAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetAdministratorAccountAsync(const GetAdministratorAccountRequest& request, const GetAdministratorAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAdministratorAccountAsyncHelper( request, handler, context ); } );
}

void Macie2Client::GetAdministratorAccountAsyncHelper(const GetAdministratorAccountRequest& request, const GetAdministratorAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAdministratorAccount(request), context);
}

GetAllowListOutcome Macie2Client::GetAllowList(const GetAllowListRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAllowList", "Required field: Id, is not set");
    return GetAllowListOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/allow-lists/");
  uri.AddPathSegment(request.GetId());
  return GetAllowListOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAllowListOutcomeCallable Macie2Client::GetAllowListCallable(const GetAllowListRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAllowListOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAllowList(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetAllowListAsync(const GetAllowListRequest& request, const GetAllowListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAllowListAsyncHelper( request, handler, context ); } );
}

void Macie2Client::GetAllowListAsyncHelper(const GetAllowListRequest& request, const GetAllowListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAllowList(request), context);
}

GetBucketStatisticsOutcome Macie2Client::GetBucketStatistics(const GetBucketStatisticsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasources/s3/statistics");
  return GetBucketStatisticsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBucketStatisticsOutcomeCallable Macie2Client::GetBucketStatisticsCallable(const GetBucketStatisticsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBucketStatisticsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBucketStatistics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetBucketStatisticsAsync(const GetBucketStatisticsRequest& request, const GetBucketStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetBucketStatisticsAsyncHelper( request, handler, context ); } );
}

void Macie2Client::GetBucketStatisticsAsyncHelper(const GetBucketStatisticsRequest& request, const GetBucketStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBucketStatistics(request), context);
}

GetClassificationExportConfigurationOutcome Macie2Client::GetClassificationExportConfiguration(const GetClassificationExportConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/classification-export-configuration");
  return GetClassificationExportConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetClassificationExportConfigurationOutcomeCallable Macie2Client::GetClassificationExportConfigurationCallable(const GetClassificationExportConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetClassificationExportConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetClassificationExportConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetClassificationExportConfigurationAsync(const GetClassificationExportConfigurationRequest& request, const GetClassificationExportConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetClassificationExportConfigurationAsyncHelper( request, handler, context ); } );
}

void Macie2Client::GetClassificationExportConfigurationAsyncHelper(const GetClassificationExportConfigurationRequest& request, const GetClassificationExportConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetClassificationExportConfiguration(request), context);
}

GetCustomDataIdentifierOutcome Macie2Client::GetCustomDataIdentifier(const GetCustomDataIdentifierRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCustomDataIdentifier", "Required field: Id, is not set");
    return GetCustomDataIdentifierOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/custom-data-identifiers/");
  uri.AddPathSegment(request.GetId());
  return GetCustomDataIdentifierOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCustomDataIdentifierOutcomeCallable Macie2Client::GetCustomDataIdentifierCallable(const GetCustomDataIdentifierRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCustomDataIdentifierOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCustomDataIdentifier(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetCustomDataIdentifierAsync(const GetCustomDataIdentifierRequest& request, const GetCustomDataIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCustomDataIdentifierAsyncHelper( request, handler, context ); } );
}

void Macie2Client::GetCustomDataIdentifierAsyncHelper(const GetCustomDataIdentifierRequest& request, const GetCustomDataIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCustomDataIdentifier(request), context);
}

GetFindingStatisticsOutcome Macie2Client::GetFindingStatistics(const GetFindingStatisticsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/findings/statistics");
  return GetFindingStatisticsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetFindingStatisticsOutcomeCallable Macie2Client::GetFindingStatisticsCallable(const GetFindingStatisticsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFindingStatisticsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFindingStatistics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetFindingStatisticsAsync(const GetFindingStatisticsRequest& request, const GetFindingStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFindingStatisticsAsyncHelper( request, handler, context ); } );
}

void Macie2Client::GetFindingStatisticsAsyncHelper(const GetFindingStatisticsRequest& request, const GetFindingStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFindingStatistics(request), context);
}

GetFindingsOutcome Macie2Client::GetFindings(const GetFindingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/findings/describe");
  return GetFindingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetFindingsOutcomeCallable Macie2Client::GetFindingsCallable(const GetFindingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFindingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFindings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetFindingsAsync(const GetFindingsRequest& request, const GetFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFindingsAsyncHelper( request, handler, context ); } );
}

void Macie2Client::GetFindingsAsyncHelper(const GetFindingsRequest& request, const GetFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFindings(request), context);
}

GetFindingsFilterOutcome Macie2Client::GetFindingsFilter(const GetFindingsFilterRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFindingsFilter", "Required field: Id, is not set");
    return GetFindingsFilterOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/findingsfilters/");
  uri.AddPathSegment(request.GetId());
  return GetFindingsFilterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetFindingsFilterOutcomeCallable Macie2Client::GetFindingsFilterCallable(const GetFindingsFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFindingsFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFindingsFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetFindingsFilterAsync(const GetFindingsFilterRequest& request, const GetFindingsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFindingsFilterAsyncHelper( request, handler, context ); } );
}

void Macie2Client::GetFindingsFilterAsyncHelper(const GetFindingsFilterRequest& request, const GetFindingsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFindingsFilter(request), context);
}

GetFindingsPublicationConfigurationOutcome Macie2Client::GetFindingsPublicationConfiguration(const GetFindingsPublicationConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/findings-publication-configuration");
  return GetFindingsPublicationConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetFindingsPublicationConfigurationOutcomeCallable Macie2Client::GetFindingsPublicationConfigurationCallable(const GetFindingsPublicationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFindingsPublicationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFindingsPublicationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetFindingsPublicationConfigurationAsync(const GetFindingsPublicationConfigurationRequest& request, const GetFindingsPublicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetFindingsPublicationConfigurationAsyncHelper( request, handler, context ); } );
}

void Macie2Client::GetFindingsPublicationConfigurationAsyncHelper(const GetFindingsPublicationConfigurationRequest& request, const GetFindingsPublicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetFindingsPublicationConfiguration(request), context);
}

GetInvitationsCountOutcome Macie2Client::GetInvitationsCount(const GetInvitationsCountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/invitations/count");
  return GetInvitationsCountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetInvitationsCountOutcomeCallable Macie2Client::GetInvitationsCountCallable(const GetInvitationsCountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInvitationsCountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInvitationsCount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetInvitationsCountAsync(const GetInvitationsCountRequest& request, const GetInvitationsCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetInvitationsCountAsyncHelper( request, handler, context ); } );
}

void Macie2Client::GetInvitationsCountAsyncHelper(const GetInvitationsCountRequest& request, const GetInvitationsCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetInvitationsCount(request), context);
}

GetMacieSessionOutcome Macie2Client::GetMacieSession(const GetMacieSessionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/macie");
  return GetMacieSessionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetMacieSessionOutcomeCallable Macie2Client::GetMacieSessionCallable(const GetMacieSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMacieSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMacieSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetMacieSessionAsync(const GetMacieSessionRequest& request, const GetMacieSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetMacieSessionAsyncHelper( request, handler, context ); } );
}

void Macie2Client::GetMacieSessionAsyncHelper(const GetMacieSessionRequest& request, const GetMacieSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetMacieSession(request), context);
}

GetMasterAccountOutcome Macie2Client::GetMasterAccount(const GetMasterAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/master");
  return GetMasterAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetMasterAccountOutcomeCallable Macie2Client::GetMasterAccountCallable(const GetMasterAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMasterAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMasterAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetMasterAccountAsync(const GetMasterAccountRequest& request, const GetMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetMasterAccountAsyncHelper( request, handler, context ); } );
}

void Macie2Client::GetMasterAccountAsyncHelper(const GetMasterAccountRequest& request, const GetMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetMasterAccount(request), context);
}

GetMemberOutcome Macie2Client::GetMember(const GetMemberRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMember", "Required field: Id, is not set");
    return GetMemberOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/members/");
  uri.AddPathSegment(request.GetId());
  return GetMemberOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetMemberOutcomeCallable Macie2Client::GetMemberCallable(const GetMemberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMemberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMember(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetMemberAsync(const GetMemberRequest& request, const GetMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetMemberAsyncHelper( request, handler, context ); } );
}

void Macie2Client::GetMemberAsyncHelper(const GetMemberRequest& request, const GetMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetMember(request), context);
}

GetRevealConfigurationOutcome Macie2Client::GetRevealConfiguration(const GetRevealConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/reveal-configuration");
  return GetRevealConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetRevealConfigurationOutcomeCallable Macie2Client::GetRevealConfigurationCallable(const GetRevealConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRevealConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRevealConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetRevealConfigurationAsync(const GetRevealConfigurationRequest& request, const GetRevealConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRevealConfigurationAsyncHelper( request, handler, context ); } );
}

void Macie2Client::GetRevealConfigurationAsyncHelper(const GetRevealConfigurationRequest& request, const GetRevealConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRevealConfiguration(request), context);
}

GetSensitiveDataOccurrencesOutcome Macie2Client::GetSensitiveDataOccurrences(const GetSensitiveDataOccurrencesRequest& request) const
{
  if (!request.FindingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSensitiveDataOccurrences", "Required field: FindingId, is not set");
    return GetSensitiveDataOccurrencesOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FindingId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/findings/");
  uri.AddPathSegment(request.GetFindingId());
  uri.AddPathSegments("/reveal");
  return GetSensitiveDataOccurrencesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSensitiveDataOccurrencesOutcomeCallable Macie2Client::GetSensitiveDataOccurrencesCallable(const GetSensitiveDataOccurrencesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSensitiveDataOccurrencesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSensitiveDataOccurrences(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetSensitiveDataOccurrencesAsync(const GetSensitiveDataOccurrencesRequest& request, const GetSensitiveDataOccurrencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSensitiveDataOccurrencesAsyncHelper( request, handler, context ); } );
}

void Macie2Client::GetSensitiveDataOccurrencesAsyncHelper(const GetSensitiveDataOccurrencesRequest& request, const GetSensitiveDataOccurrencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSensitiveDataOccurrences(request), context);
}

GetSensitiveDataOccurrencesAvailabilityOutcome Macie2Client::GetSensitiveDataOccurrencesAvailability(const GetSensitiveDataOccurrencesAvailabilityRequest& request) const
{
  if (!request.FindingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSensitiveDataOccurrencesAvailability", "Required field: FindingId, is not set");
    return GetSensitiveDataOccurrencesAvailabilityOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FindingId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/findings/");
  uri.AddPathSegment(request.GetFindingId());
  uri.AddPathSegments("/reveal/availability");
  return GetSensitiveDataOccurrencesAvailabilityOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSensitiveDataOccurrencesAvailabilityOutcomeCallable Macie2Client::GetSensitiveDataOccurrencesAvailabilityCallable(const GetSensitiveDataOccurrencesAvailabilityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSensitiveDataOccurrencesAvailabilityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSensitiveDataOccurrencesAvailability(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetSensitiveDataOccurrencesAvailabilityAsync(const GetSensitiveDataOccurrencesAvailabilityRequest& request, const GetSensitiveDataOccurrencesAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSensitiveDataOccurrencesAvailabilityAsyncHelper( request, handler, context ); } );
}

void Macie2Client::GetSensitiveDataOccurrencesAvailabilityAsyncHelper(const GetSensitiveDataOccurrencesAvailabilityRequest& request, const GetSensitiveDataOccurrencesAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSensitiveDataOccurrencesAvailability(request), context);
}

GetUsageStatisticsOutcome Macie2Client::GetUsageStatistics(const GetUsageStatisticsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/usage/statistics");
  return GetUsageStatisticsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetUsageStatisticsOutcomeCallable Macie2Client::GetUsageStatisticsCallable(const GetUsageStatisticsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUsageStatisticsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUsageStatistics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetUsageStatisticsAsync(const GetUsageStatisticsRequest& request, const GetUsageStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetUsageStatisticsAsyncHelper( request, handler, context ); } );
}

void Macie2Client::GetUsageStatisticsAsyncHelper(const GetUsageStatisticsRequest& request, const GetUsageStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetUsageStatistics(request), context);
}

GetUsageTotalsOutcome Macie2Client::GetUsageTotals(const GetUsageTotalsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/usage");
  return GetUsageTotalsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetUsageTotalsOutcomeCallable Macie2Client::GetUsageTotalsCallable(const GetUsageTotalsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUsageTotalsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUsageTotals(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::GetUsageTotalsAsync(const GetUsageTotalsRequest& request, const GetUsageTotalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetUsageTotalsAsyncHelper( request, handler, context ); } );
}

void Macie2Client::GetUsageTotalsAsyncHelper(const GetUsageTotalsRequest& request, const GetUsageTotalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetUsageTotals(request), context);
}

ListAllowListsOutcome Macie2Client::ListAllowLists(const ListAllowListsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/allow-lists");
  return ListAllowListsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAllowListsOutcomeCallable Macie2Client::ListAllowListsCallable(const ListAllowListsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAllowListsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAllowLists(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::ListAllowListsAsync(const ListAllowListsRequest& request, const ListAllowListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListAllowListsAsyncHelper( request, handler, context ); } );
}

void Macie2Client::ListAllowListsAsyncHelper(const ListAllowListsRequest& request, const ListAllowListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAllowLists(request), context);
}

ListClassificationJobsOutcome Macie2Client::ListClassificationJobs(const ListClassificationJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/jobs/list");
  return ListClassificationJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListClassificationJobsOutcomeCallable Macie2Client::ListClassificationJobsCallable(const ListClassificationJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListClassificationJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListClassificationJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::ListClassificationJobsAsync(const ListClassificationJobsRequest& request, const ListClassificationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListClassificationJobsAsyncHelper( request, handler, context ); } );
}

void Macie2Client::ListClassificationJobsAsyncHelper(const ListClassificationJobsRequest& request, const ListClassificationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListClassificationJobs(request), context);
}

ListCustomDataIdentifiersOutcome Macie2Client::ListCustomDataIdentifiers(const ListCustomDataIdentifiersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/custom-data-identifiers/list");
  return ListCustomDataIdentifiersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCustomDataIdentifiersOutcomeCallable Macie2Client::ListCustomDataIdentifiersCallable(const ListCustomDataIdentifiersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCustomDataIdentifiersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCustomDataIdentifiers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::ListCustomDataIdentifiersAsync(const ListCustomDataIdentifiersRequest& request, const ListCustomDataIdentifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListCustomDataIdentifiersAsyncHelper( request, handler, context ); } );
}

void Macie2Client::ListCustomDataIdentifiersAsyncHelper(const ListCustomDataIdentifiersRequest& request, const ListCustomDataIdentifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCustomDataIdentifiers(request), context);
}

ListFindingsOutcome Macie2Client::ListFindings(const ListFindingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/findings");
  return ListFindingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFindingsOutcomeCallable Macie2Client::ListFindingsCallable(const ListFindingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFindingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFindings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::ListFindingsAsync(const ListFindingsRequest& request, const ListFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListFindingsAsyncHelper( request, handler, context ); } );
}

void Macie2Client::ListFindingsAsyncHelper(const ListFindingsRequest& request, const ListFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFindings(request), context);
}

ListFindingsFiltersOutcome Macie2Client::ListFindingsFilters(const ListFindingsFiltersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/findingsfilters");
  return ListFindingsFiltersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListFindingsFiltersOutcomeCallable Macie2Client::ListFindingsFiltersCallable(const ListFindingsFiltersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFindingsFiltersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFindingsFilters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::ListFindingsFiltersAsync(const ListFindingsFiltersRequest& request, const ListFindingsFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListFindingsFiltersAsyncHelper( request, handler, context ); } );
}

void Macie2Client::ListFindingsFiltersAsyncHelper(const ListFindingsFiltersRequest& request, const ListFindingsFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFindingsFilters(request), context);
}

ListInvitationsOutcome Macie2Client::ListInvitations(const ListInvitationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/invitations");
  return ListInvitationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListInvitationsOutcomeCallable Macie2Client::ListInvitationsCallable(const ListInvitationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInvitationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInvitations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::ListInvitationsAsync(const ListInvitationsRequest& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListInvitationsAsyncHelper( request, handler, context ); } );
}

void Macie2Client::ListInvitationsAsyncHelper(const ListInvitationsRequest& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListInvitations(request), context);
}

ListManagedDataIdentifiersOutcome Macie2Client::ListManagedDataIdentifiers(const ListManagedDataIdentifiersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/managed-data-identifiers/list");
  return ListManagedDataIdentifiersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListManagedDataIdentifiersOutcomeCallable Macie2Client::ListManagedDataIdentifiersCallable(const ListManagedDataIdentifiersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListManagedDataIdentifiersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListManagedDataIdentifiers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::ListManagedDataIdentifiersAsync(const ListManagedDataIdentifiersRequest& request, const ListManagedDataIdentifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListManagedDataIdentifiersAsyncHelper( request, handler, context ); } );
}

void Macie2Client::ListManagedDataIdentifiersAsyncHelper(const ListManagedDataIdentifiersRequest& request, const ListManagedDataIdentifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListManagedDataIdentifiers(request), context);
}

ListMembersOutcome Macie2Client::ListMembers(const ListMembersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/members");
  return ListMembersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListMembersOutcomeCallable Macie2Client::ListMembersCallable(const ListMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::ListMembersAsync(const ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListMembersAsyncHelper( request, handler, context ); } );
}

void Macie2Client::ListMembersAsyncHelper(const ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListMembers(request), context);
}

ListOrganizationAdminAccountsOutcome Macie2Client::ListOrganizationAdminAccounts(const ListOrganizationAdminAccountsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/admin");
  return ListOrganizationAdminAccountsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListOrganizationAdminAccountsOutcomeCallable Macie2Client::ListOrganizationAdminAccountsCallable(const ListOrganizationAdminAccountsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOrganizationAdminAccountsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOrganizationAdminAccounts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::ListOrganizationAdminAccountsAsync(const ListOrganizationAdminAccountsRequest& request, const ListOrganizationAdminAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListOrganizationAdminAccountsAsyncHelper( request, handler, context ); } );
}

void Macie2Client::ListOrganizationAdminAccountsAsyncHelper(const ListOrganizationAdminAccountsRequest& request, const ListOrganizationAdminAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListOrganizationAdminAccounts(request), context);
}

ListTagsForResourceOutcome Macie2Client::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable Macie2Client::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void Macie2Client::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

PutClassificationExportConfigurationOutcome Macie2Client::PutClassificationExportConfiguration(const PutClassificationExportConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/classification-export-configuration");
  return PutClassificationExportConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutClassificationExportConfigurationOutcomeCallable Macie2Client::PutClassificationExportConfigurationCallable(const PutClassificationExportConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutClassificationExportConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutClassificationExportConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::PutClassificationExportConfigurationAsync(const PutClassificationExportConfigurationRequest& request, const PutClassificationExportConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutClassificationExportConfigurationAsyncHelper( request, handler, context ); } );
}

void Macie2Client::PutClassificationExportConfigurationAsyncHelper(const PutClassificationExportConfigurationRequest& request, const PutClassificationExportConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutClassificationExportConfiguration(request), context);
}

PutFindingsPublicationConfigurationOutcome Macie2Client::PutFindingsPublicationConfiguration(const PutFindingsPublicationConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/findings-publication-configuration");
  return PutFindingsPublicationConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutFindingsPublicationConfigurationOutcomeCallable Macie2Client::PutFindingsPublicationConfigurationCallable(const PutFindingsPublicationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutFindingsPublicationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutFindingsPublicationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::PutFindingsPublicationConfigurationAsync(const PutFindingsPublicationConfigurationRequest& request, const PutFindingsPublicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutFindingsPublicationConfigurationAsyncHelper( request, handler, context ); } );
}

void Macie2Client::PutFindingsPublicationConfigurationAsyncHelper(const PutFindingsPublicationConfigurationRequest& request, const PutFindingsPublicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutFindingsPublicationConfiguration(request), context);
}

SearchResourcesOutcome Macie2Client::SearchResources(const SearchResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/datasources/search-resources");
  return SearchResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchResourcesOutcomeCallable Macie2Client::SearchResourcesCallable(const SearchResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::SearchResourcesAsync(const SearchResourcesRequest& request, const SearchResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchResourcesAsyncHelper( request, handler, context ); } );
}

void Macie2Client::SearchResourcesAsyncHelper(const SearchResourcesRequest& request, const SearchResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchResources(request), context);
}

TagResourceOutcome Macie2Client::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable Macie2Client::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void Macie2Client::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

TestCustomDataIdentifierOutcome Macie2Client::TestCustomDataIdentifier(const TestCustomDataIdentifierRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/custom-data-identifiers/test");
  return TestCustomDataIdentifierOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TestCustomDataIdentifierOutcomeCallable Macie2Client::TestCustomDataIdentifierCallable(const TestCustomDataIdentifierRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TestCustomDataIdentifierOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TestCustomDataIdentifier(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::TestCustomDataIdentifierAsync(const TestCustomDataIdentifierRequest& request, const TestCustomDataIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TestCustomDataIdentifierAsyncHelper( request, handler, context ); } );
}

void Macie2Client::TestCustomDataIdentifierAsyncHelper(const TestCustomDataIdentifierRequest& request, const TestCustomDataIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TestCustomDataIdentifier(request), context);
}

UntagResourceOutcome Macie2Client::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable Macie2Client::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void Macie2Client::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateAllowListOutcome Macie2Client::UpdateAllowList(const UpdateAllowListRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAllowList", "Required field: Id, is not set");
    return UpdateAllowListOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/allow-lists/");
  uri.AddPathSegment(request.GetId());
  return UpdateAllowListOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAllowListOutcomeCallable Macie2Client::UpdateAllowListCallable(const UpdateAllowListRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAllowListOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAllowList(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::UpdateAllowListAsync(const UpdateAllowListRequest& request, const UpdateAllowListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAllowListAsyncHelper( request, handler, context ); } );
}

void Macie2Client::UpdateAllowListAsyncHelper(const UpdateAllowListRequest& request, const UpdateAllowListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAllowList(request), context);
}

UpdateClassificationJobOutcome Macie2Client::UpdateClassificationJob(const UpdateClassificationJobRequest& request) const
{
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateClassificationJob", "Required field: JobId, is not set");
    return UpdateClassificationJobOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/jobs/");
  uri.AddPathSegment(request.GetJobId());
  return UpdateClassificationJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateClassificationJobOutcomeCallable Macie2Client::UpdateClassificationJobCallable(const UpdateClassificationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateClassificationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateClassificationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::UpdateClassificationJobAsync(const UpdateClassificationJobRequest& request, const UpdateClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateClassificationJobAsyncHelper( request, handler, context ); } );
}

void Macie2Client::UpdateClassificationJobAsyncHelper(const UpdateClassificationJobRequest& request, const UpdateClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateClassificationJob(request), context);
}

UpdateFindingsFilterOutcome Macie2Client::UpdateFindingsFilter(const UpdateFindingsFilterRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFindingsFilter", "Required field: Id, is not set");
    return UpdateFindingsFilterOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/findingsfilters/");
  uri.AddPathSegment(request.GetId());
  return UpdateFindingsFilterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateFindingsFilterOutcomeCallable Macie2Client::UpdateFindingsFilterCallable(const UpdateFindingsFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFindingsFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFindingsFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::UpdateFindingsFilterAsync(const UpdateFindingsFilterRequest& request, const UpdateFindingsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFindingsFilterAsyncHelper( request, handler, context ); } );
}

void Macie2Client::UpdateFindingsFilterAsyncHelper(const UpdateFindingsFilterRequest& request, const UpdateFindingsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFindingsFilter(request), context);
}

UpdateMacieSessionOutcome Macie2Client::UpdateMacieSession(const UpdateMacieSessionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/macie");
  return UpdateMacieSessionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateMacieSessionOutcomeCallable Macie2Client::UpdateMacieSessionCallable(const UpdateMacieSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMacieSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMacieSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::UpdateMacieSessionAsync(const UpdateMacieSessionRequest& request, const UpdateMacieSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateMacieSessionAsyncHelper( request, handler, context ); } );
}

void Macie2Client::UpdateMacieSessionAsyncHelper(const UpdateMacieSessionRequest& request, const UpdateMacieSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateMacieSession(request), context);
}

UpdateMemberSessionOutcome Macie2Client::UpdateMemberSession(const UpdateMemberSessionRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMemberSession", "Required field: Id, is not set");
    return UpdateMemberSessionOutcome(Aws::Client::AWSError<Macie2Errors>(Macie2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/macie/members/");
  uri.AddPathSegment(request.GetId());
  return UpdateMemberSessionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateMemberSessionOutcomeCallable Macie2Client::UpdateMemberSessionCallable(const UpdateMemberSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMemberSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMemberSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::UpdateMemberSessionAsync(const UpdateMemberSessionRequest& request, const UpdateMemberSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateMemberSessionAsyncHelper( request, handler, context ); } );
}

void Macie2Client::UpdateMemberSessionAsyncHelper(const UpdateMemberSessionRequest& request, const UpdateMemberSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateMemberSession(request), context);
}

UpdateOrganizationConfigurationOutcome Macie2Client::UpdateOrganizationConfiguration(const UpdateOrganizationConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/admin/configuration");
  return UpdateOrganizationConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateOrganizationConfigurationOutcomeCallable Macie2Client::UpdateOrganizationConfigurationCallable(const UpdateOrganizationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateOrganizationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateOrganizationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::UpdateOrganizationConfigurationAsync(const UpdateOrganizationConfigurationRequest& request, const UpdateOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateOrganizationConfigurationAsyncHelper( request, handler, context ); } );
}

void Macie2Client::UpdateOrganizationConfigurationAsyncHelper(const UpdateOrganizationConfigurationRequest& request, const UpdateOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateOrganizationConfiguration(request), context);
}

UpdateRevealConfigurationOutcome Macie2Client::UpdateRevealConfiguration(const UpdateRevealConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/reveal-configuration");
  return UpdateRevealConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateRevealConfigurationOutcomeCallable Macie2Client::UpdateRevealConfigurationCallable(const UpdateRevealConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRevealConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRevealConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Macie2Client::UpdateRevealConfigurationAsync(const UpdateRevealConfigurationRequest& request, const UpdateRevealConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRevealConfigurationAsyncHelper( request, handler, context ); } );
}

void Macie2Client::UpdateRevealConfigurationAsyncHelper(const UpdateRevealConfigurationRequest& request, const UpdateRevealConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRevealConfiguration(request), context);
}

