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

void Macie2ClientAcceptInvitationAsyncHelper(Macie2Client const * const clientThis, const AcceptInvitationRequest& request, const AcceptInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AcceptInvitation(request), context);
}

void Macie2Client::AcceptInvitationAsync(const AcceptInvitationRequest& request, const AcceptInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientAcceptInvitationAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientBatchGetCustomDataIdentifiersAsyncHelper(Macie2Client const * const clientThis, const BatchGetCustomDataIdentifiersRequest& request, const BatchGetCustomDataIdentifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchGetCustomDataIdentifiers(request), context);
}

void Macie2Client::BatchGetCustomDataIdentifiersAsync(const BatchGetCustomDataIdentifiersRequest& request, const BatchGetCustomDataIdentifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientBatchGetCustomDataIdentifiersAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientCreateAllowListAsyncHelper(Macie2Client const * const clientThis, const CreateAllowListRequest& request, const CreateAllowListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAllowList(request), context);
}

void Macie2Client::CreateAllowListAsync(const CreateAllowListRequest& request, const CreateAllowListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientCreateAllowListAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientCreateClassificationJobAsyncHelper(Macie2Client const * const clientThis, const CreateClassificationJobRequest& request, const CreateClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateClassificationJob(request), context);
}

void Macie2Client::CreateClassificationJobAsync(const CreateClassificationJobRequest& request, const CreateClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientCreateClassificationJobAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientCreateCustomDataIdentifierAsyncHelper(Macie2Client const * const clientThis, const CreateCustomDataIdentifierRequest& request, const CreateCustomDataIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCustomDataIdentifier(request), context);
}

void Macie2Client::CreateCustomDataIdentifierAsync(const CreateCustomDataIdentifierRequest& request, const CreateCustomDataIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientCreateCustomDataIdentifierAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientCreateFindingsFilterAsyncHelper(Macie2Client const * const clientThis, const CreateFindingsFilterRequest& request, const CreateFindingsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateFindingsFilter(request), context);
}

void Macie2Client::CreateFindingsFilterAsync(const CreateFindingsFilterRequest& request, const CreateFindingsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientCreateFindingsFilterAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientCreateInvitationsAsyncHelper(Macie2Client const * const clientThis, const CreateInvitationsRequest& request, const CreateInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateInvitations(request), context);
}

void Macie2Client::CreateInvitationsAsync(const CreateInvitationsRequest& request, const CreateInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientCreateInvitationsAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientCreateMemberAsyncHelper(Macie2Client const * const clientThis, const CreateMemberRequest& request, const CreateMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateMember(request), context);
}

void Macie2Client::CreateMemberAsync(const CreateMemberRequest& request, const CreateMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientCreateMemberAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientCreateSampleFindingsAsyncHelper(Macie2Client const * const clientThis, const CreateSampleFindingsRequest& request, const CreateSampleFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateSampleFindings(request), context);
}

void Macie2Client::CreateSampleFindingsAsync(const CreateSampleFindingsRequest& request, const CreateSampleFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientCreateSampleFindingsAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientDeclineInvitationsAsyncHelper(Macie2Client const * const clientThis, const DeclineInvitationsRequest& request, const DeclineInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeclineInvitations(request), context);
}

void Macie2Client::DeclineInvitationsAsync(const DeclineInvitationsRequest& request, const DeclineInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientDeclineInvitationsAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientDeleteAllowListAsyncHelper(Macie2Client const * const clientThis, const DeleteAllowListRequest& request, const DeleteAllowListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAllowList(request), context);
}

void Macie2Client::DeleteAllowListAsync(const DeleteAllowListRequest& request, const DeleteAllowListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientDeleteAllowListAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientDeleteCustomDataIdentifierAsyncHelper(Macie2Client const * const clientThis, const DeleteCustomDataIdentifierRequest& request, const DeleteCustomDataIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCustomDataIdentifier(request), context);
}

void Macie2Client::DeleteCustomDataIdentifierAsync(const DeleteCustomDataIdentifierRequest& request, const DeleteCustomDataIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientDeleteCustomDataIdentifierAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientDeleteFindingsFilterAsyncHelper(Macie2Client const * const clientThis, const DeleteFindingsFilterRequest& request, const DeleteFindingsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteFindingsFilter(request), context);
}

void Macie2Client::DeleteFindingsFilterAsync(const DeleteFindingsFilterRequest& request, const DeleteFindingsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientDeleteFindingsFilterAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientDeleteInvitationsAsyncHelper(Macie2Client const * const clientThis, const DeleteInvitationsRequest& request, const DeleteInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteInvitations(request), context);
}

void Macie2Client::DeleteInvitationsAsync(const DeleteInvitationsRequest& request, const DeleteInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientDeleteInvitationsAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientDeleteMemberAsyncHelper(Macie2Client const * const clientThis, const DeleteMemberRequest& request, const DeleteMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteMember(request), context);
}

void Macie2Client::DeleteMemberAsync(const DeleteMemberRequest& request, const DeleteMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientDeleteMemberAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientDescribeBucketsAsyncHelper(Macie2Client const * const clientThis, const DescribeBucketsRequest& request, const DescribeBucketsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeBuckets(request), context);
}

void Macie2Client::DescribeBucketsAsync(const DescribeBucketsRequest& request, const DescribeBucketsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientDescribeBucketsAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientDescribeClassificationJobAsyncHelper(Macie2Client const * const clientThis, const DescribeClassificationJobRequest& request, const DescribeClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeClassificationJob(request), context);
}

void Macie2Client::DescribeClassificationJobAsync(const DescribeClassificationJobRequest& request, const DescribeClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientDescribeClassificationJobAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientDescribeOrganizationConfigurationAsyncHelper(Macie2Client const * const clientThis, const DescribeOrganizationConfigurationRequest& request, const DescribeOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeOrganizationConfiguration(request), context);
}

void Macie2Client::DescribeOrganizationConfigurationAsync(const DescribeOrganizationConfigurationRequest& request, const DescribeOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientDescribeOrganizationConfigurationAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientDisableMacieAsyncHelper(Macie2Client const * const clientThis, const DisableMacieRequest& request, const DisableMacieResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisableMacie(request), context);
}

void Macie2Client::DisableMacieAsync(const DisableMacieRequest& request, const DisableMacieResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientDisableMacieAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientDisableOrganizationAdminAccountAsyncHelper(Macie2Client const * const clientThis, const DisableOrganizationAdminAccountRequest& request, const DisableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisableOrganizationAdminAccount(request), context);
}

void Macie2Client::DisableOrganizationAdminAccountAsync(const DisableOrganizationAdminAccountRequest& request, const DisableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientDisableOrganizationAdminAccountAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientDisassociateFromAdministratorAccountAsyncHelper(Macie2Client const * const clientThis, const DisassociateFromAdministratorAccountRequest& request, const DisassociateFromAdministratorAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateFromAdministratorAccount(request), context);
}

void Macie2Client::DisassociateFromAdministratorAccountAsync(const DisassociateFromAdministratorAccountRequest& request, const DisassociateFromAdministratorAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientDisassociateFromAdministratorAccountAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientDisassociateFromMasterAccountAsyncHelper(Macie2Client const * const clientThis, const DisassociateFromMasterAccountRequest& request, const DisassociateFromMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateFromMasterAccount(request), context);
}

void Macie2Client::DisassociateFromMasterAccountAsync(const DisassociateFromMasterAccountRequest& request, const DisassociateFromMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientDisassociateFromMasterAccountAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientDisassociateMemberAsyncHelper(Macie2Client const * const clientThis, const DisassociateMemberRequest& request, const DisassociateMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateMember(request), context);
}

void Macie2Client::DisassociateMemberAsync(const DisassociateMemberRequest& request, const DisassociateMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientDisassociateMemberAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientEnableMacieAsyncHelper(Macie2Client const * const clientThis, const EnableMacieRequest& request, const EnableMacieResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->EnableMacie(request), context);
}

void Macie2Client::EnableMacieAsync(const EnableMacieRequest& request, const EnableMacieResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientEnableMacieAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientEnableOrganizationAdminAccountAsyncHelper(Macie2Client const * const clientThis, const EnableOrganizationAdminAccountRequest& request, const EnableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->EnableOrganizationAdminAccount(request), context);
}

void Macie2Client::EnableOrganizationAdminAccountAsync(const EnableOrganizationAdminAccountRequest& request, const EnableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientEnableOrganizationAdminAccountAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientGetAdministratorAccountAsyncHelper(Macie2Client const * const clientThis, const GetAdministratorAccountRequest& request, const GetAdministratorAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAdministratorAccount(request), context);
}

void Macie2Client::GetAdministratorAccountAsync(const GetAdministratorAccountRequest& request, const GetAdministratorAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientGetAdministratorAccountAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientGetAllowListAsyncHelper(Macie2Client const * const clientThis, const GetAllowListRequest& request, const GetAllowListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAllowList(request), context);
}

void Macie2Client::GetAllowListAsync(const GetAllowListRequest& request, const GetAllowListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientGetAllowListAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientGetBucketStatisticsAsyncHelper(Macie2Client const * const clientThis, const GetBucketStatisticsRequest& request, const GetBucketStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetBucketStatistics(request), context);
}

void Macie2Client::GetBucketStatisticsAsync(const GetBucketStatisticsRequest& request, const GetBucketStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientGetBucketStatisticsAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientGetClassificationExportConfigurationAsyncHelper(Macie2Client const * const clientThis, const GetClassificationExportConfigurationRequest& request, const GetClassificationExportConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetClassificationExportConfiguration(request), context);
}

void Macie2Client::GetClassificationExportConfigurationAsync(const GetClassificationExportConfigurationRequest& request, const GetClassificationExportConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientGetClassificationExportConfigurationAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientGetCustomDataIdentifierAsyncHelper(Macie2Client const * const clientThis, const GetCustomDataIdentifierRequest& request, const GetCustomDataIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCustomDataIdentifier(request), context);
}

void Macie2Client::GetCustomDataIdentifierAsync(const GetCustomDataIdentifierRequest& request, const GetCustomDataIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientGetCustomDataIdentifierAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientGetFindingStatisticsAsyncHelper(Macie2Client const * const clientThis, const GetFindingStatisticsRequest& request, const GetFindingStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetFindingStatistics(request), context);
}

void Macie2Client::GetFindingStatisticsAsync(const GetFindingStatisticsRequest& request, const GetFindingStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientGetFindingStatisticsAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientGetFindingsAsyncHelper(Macie2Client const * const clientThis, const GetFindingsRequest& request, const GetFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetFindings(request), context);
}

void Macie2Client::GetFindingsAsync(const GetFindingsRequest& request, const GetFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientGetFindingsAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientGetFindingsFilterAsyncHelper(Macie2Client const * const clientThis, const GetFindingsFilterRequest& request, const GetFindingsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetFindingsFilter(request), context);
}

void Macie2Client::GetFindingsFilterAsync(const GetFindingsFilterRequest& request, const GetFindingsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientGetFindingsFilterAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientGetFindingsPublicationConfigurationAsyncHelper(Macie2Client const * const clientThis, const GetFindingsPublicationConfigurationRequest& request, const GetFindingsPublicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetFindingsPublicationConfiguration(request), context);
}

void Macie2Client::GetFindingsPublicationConfigurationAsync(const GetFindingsPublicationConfigurationRequest& request, const GetFindingsPublicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientGetFindingsPublicationConfigurationAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientGetInvitationsCountAsyncHelper(Macie2Client const * const clientThis, const GetInvitationsCountRequest& request, const GetInvitationsCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetInvitationsCount(request), context);
}

void Macie2Client::GetInvitationsCountAsync(const GetInvitationsCountRequest& request, const GetInvitationsCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientGetInvitationsCountAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientGetMacieSessionAsyncHelper(Macie2Client const * const clientThis, const GetMacieSessionRequest& request, const GetMacieSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMacieSession(request), context);
}

void Macie2Client::GetMacieSessionAsync(const GetMacieSessionRequest& request, const GetMacieSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientGetMacieSessionAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientGetMasterAccountAsyncHelper(Macie2Client const * const clientThis, const GetMasterAccountRequest& request, const GetMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMasterAccount(request), context);
}

void Macie2Client::GetMasterAccountAsync(const GetMasterAccountRequest& request, const GetMasterAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientGetMasterAccountAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientGetMemberAsyncHelper(Macie2Client const * const clientThis, const GetMemberRequest& request, const GetMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMember(request), context);
}

void Macie2Client::GetMemberAsync(const GetMemberRequest& request, const GetMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientGetMemberAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientGetRevealConfigurationAsyncHelper(Macie2Client const * const clientThis, const GetRevealConfigurationRequest& request, const GetRevealConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRevealConfiguration(request), context);
}

void Macie2Client::GetRevealConfigurationAsync(const GetRevealConfigurationRequest& request, const GetRevealConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientGetRevealConfigurationAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientGetSensitiveDataOccurrencesAsyncHelper(Macie2Client const * const clientThis, const GetSensitiveDataOccurrencesRequest& request, const GetSensitiveDataOccurrencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSensitiveDataOccurrences(request), context);
}

void Macie2Client::GetSensitiveDataOccurrencesAsync(const GetSensitiveDataOccurrencesRequest& request, const GetSensitiveDataOccurrencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientGetSensitiveDataOccurrencesAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientGetSensitiveDataOccurrencesAvailabilityAsyncHelper(Macie2Client const * const clientThis, const GetSensitiveDataOccurrencesAvailabilityRequest& request, const GetSensitiveDataOccurrencesAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSensitiveDataOccurrencesAvailability(request), context);
}

void Macie2Client::GetSensitiveDataOccurrencesAvailabilityAsync(const GetSensitiveDataOccurrencesAvailabilityRequest& request, const GetSensitiveDataOccurrencesAvailabilityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientGetSensitiveDataOccurrencesAvailabilityAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientGetUsageStatisticsAsyncHelper(Macie2Client const * const clientThis, const GetUsageStatisticsRequest& request, const GetUsageStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetUsageStatistics(request), context);
}

void Macie2Client::GetUsageStatisticsAsync(const GetUsageStatisticsRequest& request, const GetUsageStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientGetUsageStatisticsAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientGetUsageTotalsAsyncHelper(Macie2Client const * const clientThis, const GetUsageTotalsRequest& request, const GetUsageTotalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetUsageTotals(request), context);
}

void Macie2Client::GetUsageTotalsAsync(const GetUsageTotalsRequest& request, const GetUsageTotalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientGetUsageTotalsAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientListAllowListsAsyncHelper(Macie2Client const * const clientThis, const ListAllowListsRequest& request, const ListAllowListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAllowLists(request), context);
}

void Macie2Client::ListAllowListsAsync(const ListAllowListsRequest& request, const ListAllowListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientListAllowListsAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientListClassificationJobsAsyncHelper(Macie2Client const * const clientThis, const ListClassificationJobsRequest& request, const ListClassificationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListClassificationJobs(request), context);
}

void Macie2Client::ListClassificationJobsAsync(const ListClassificationJobsRequest& request, const ListClassificationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientListClassificationJobsAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientListCustomDataIdentifiersAsyncHelper(Macie2Client const * const clientThis, const ListCustomDataIdentifiersRequest& request, const ListCustomDataIdentifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListCustomDataIdentifiers(request), context);
}

void Macie2Client::ListCustomDataIdentifiersAsync(const ListCustomDataIdentifiersRequest& request, const ListCustomDataIdentifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientListCustomDataIdentifiersAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientListFindingsAsyncHelper(Macie2Client const * const clientThis, const ListFindingsRequest& request, const ListFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListFindings(request), context);
}

void Macie2Client::ListFindingsAsync(const ListFindingsRequest& request, const ListFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientListFindingsAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientListFindingsFiltersAsyncHelper(Macie2Client const * const clientThis, const ListFindingsFiltersRequest& request, const ListFindingsFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListFindingsFilters(request), context);
}

void Macie2Client::ListFindingsFiltersAsync(const ListFindingsFiltersRequest& request, const ListFindingsFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientListFindingsFiltersAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientListInvitationsAsyncHelper(Macie2Client const * const clientThis, const ListInvitationsRequest& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListInvitations(request), context);
}

void Macie2Client::ListInvitationsAsync(const ListInvitationsRequest& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientListInvitationsAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientListManagedDataIdentifiersAsyncHelper(Macie2Client const * const clientThis, const ListManagedDataIdentifiersRequest& request, const ListManagedDataIdentifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListManagedDataIdentifiers(request), context);
}

void Macie2Client::ListManagedDataIdentifiersAsync(const ListManagedDataIdentifiersRequest& request, const ListManagedDataIdentifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientListManagedDataIdentifiersAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientListMembersAsyncHelper(Macie2Client const * const clientThis, const ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListMembers(request), context);
}

void Macie2Client::ListMembersAsync(const ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientListMembersAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientListOrganizationAdminAccountsAsyncHelper(Macie2Client const * const clientThis, const ListOrganizationAdminAccountsRequest& request, const ListOrganizationAdminAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListOrganizationAdminAccounts(request), context);
}

void Macie2Client::ListOrganizationAdminAccountsAsync(const ListOrganizationAdminAccountsRequest& request, const ListOrganizationAdminAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientListOrganizationAdminAccountsAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientListTagsForResourceAsyncHelper(Macie2Client const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void Macie2Client::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientPutClassificationExportConfigurationAsyncHelper(Macie2Client const * const clientThis, const PutClassificationExportConfigurationRequest& request, const PutClassificationExportConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutClassificationExportConfiguration(request), context);
}

void Macie2Client::PutClassificationExportConfigurationAsync(const PutClassificationExportConfigurationRequest& request, const PutClassificationExportConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientPutClassificationExportConfigurationAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientPutFindingsPublicationConfigurationAsyncHelper(Macie2Client const * const clientThis, const PutFindingsPublicationConfigurationRequest& request, const PutFindingsPublicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutFindingsPublicationConfiguration(request), context);
}

void Macie2Client::PutFindingsPublicationConfigurationAsync(const PutFindingsPublicationConfigurationRequest& request, const PutFindingsPublicationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientPutFindingsPublicationConfigurationAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientSearchResourcesAsyncHelper(Macie2Client const * const clientThis, const SearchResourcesRequest& request, const SearchResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SearchResources(request), context);
}

void Macie2Client::SearchResourcesAsync(const SearchResourcesRequest& request, const SearchResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientSearchResourcesAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientTagResourceAsyncHelper(Macie2Client const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void Macie2Client::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientTagResourceAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientTestCustomDataIdentifierAsyncHelper(Macie2Client const * const clientThis, const TestCustomDataIdentifierRequest& request, const TestCustomDataIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TestCustomDataIdentifier(request), context);
}

void Macie2Client::TestCustomDataIdentifierAsync(const TestCustomDataIdentifierRequest& request, const TestCustomDataIdentifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientTestCustomDataIdentifierAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientUntagResourceAsyncHelper(Macie2Client const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void Macie2Client::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientUntagResourceAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientUpdateAllowListAsyncHelper(Macie2Client const * const clientThis, const UpdateAllowListRequest& request, const UpdateAllowListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAllowList(request), context);
}

void Macie2Client::UpdateAllowListAsync(const UpdateAllowListRequest& request, const UpdateAllowListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientUpdateAllowListAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientUpdateClassificationJobAsyncHelper(Macie2Client const * const clientThis, const UpdateClassificationJobRequest& request, const UpdateClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateClassificationJob(request), context);
}

void Macie2Client::UpdateClassificationJobAsync(const UpdateClassificationJobRequest& request, const UpdateClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientUpdateClassificationJobAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientUpdateFindingsFilterAsyncHelper(Macie2Client const * const clientThis, const UpdateFindingsFilterRequest& request, const UpdateFindingsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateFindingsFilter(request), context);
}

void Macie2Client::UpdateFindingsFilterAsync(const UpdateFindingsFilterRequest& request, const UpdateFindingsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientUpdateFindingsFilterAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientUpdateMacieSessionAsyncHelper(Macie2Client const * const clientThis, const UpdateMacieSessionRequest& request, const UpdateMacieSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateMacieSession(request), context);
}

void Macie2Client::UpdateMacieSessionAsync(const UpdateMacieSessionRequest& request, const UpdateMacieSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientUpdateMacieSessionAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientUpdateMemberSessionAsyncHelper(Macie2Client const * const clientThis, const UpdateMemberSessionRequest& request, const UpdateMemberSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateMemberSession(request), context);
}

void Macie2Client::UpdateMemberSessionAsync(const UpdateMemberSessionRequest& request, const UpdateMemberSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientUpdateMemberSessionAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientUpdateOrganizationConfigurationAsyncHelper(Macie2Client const * const clientThis, const UpdateOrganizationConfigurationRequest& request, const UpdateOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateOrganizationConfiguration(request), context);
}

void Macie2Client::UpdateOrganizationConfigurationAsync(const UpdateOrganizationConfigurationRequest& request, const UpdateOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientUpdateOrganizationConfigurationAsyncHelper( this, request, handler, context ); } );
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

void Macie2ClientUpdateRevealConfigurationAsyncHelper(Macie2Client const * const clientThis, const UpdateRevealConfigurationRequest& request, const UpdateRevealConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRevealConfiguration(request), context);
}

void Macie2Client::UpdateRevealConfigurationAsync(const UpdateRevealConfigurationRequest& request, const UpdateRevealConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ Macie2ClientUpdateRevealConfigurationAsyncHelper( this, request, handler, context ); } );
}

