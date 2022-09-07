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

#include <aws/guardduty/GuardDutyClient.h>
#include <aws/guardduty/GuardDutyEndpoint.h>
#include <aws/guardduty/GuardDutyErrorMarshaller.h>
#include <aws/guardduty/model/AcceptAdministratorInvitationRequest.h>
#include <aws/guardduty/model/ArchiveFindingsRequest.h>
#include <aws/guardduty/model/CreateDetectorRequest.h>
#include <aws/guardduty/model/CreateFilterRequest.h>
#include <aws/guardduty/model/CreateIPSetRequest.h>
#include <aws/guardduty/model/CreateMembersRequest.h>
#include <aws/guardduty/model/CreatePublishingDestinationRequest.h>
#include <aws/guardduty/model/CreateSampleFindingsRequest.h>
#include <aws/guardduty/model/CreateThreatIntelSetRequest.h>
#include <aws/guardduty/model/DeclineInvitationsRequest.h>
#include <aws/guardduty/model/DeleteDetectorRequest.h>
#include <aws/guardduty/model/DeleteFilterRequest.h>
#include <aws/guardduty/model/DeleteIPSetRequest.h>
#include <aws/guardduty/model/DeleteInvitationsRequest.h>
#include <aws/guardduty/model/DeleteMembersRequest.h>
#include <aws/guardduty/model/DeletePublishingDestinationRequest.h>
#include <aws/guardduty/model/DeleteThreatIntelSetRequest.h>
#include <aws/guardduty/model/DescribeMalwareScansRequest.h>
#include <aws/guardduty/model/DescribeOrganizationConfigurationRequest.h>
#include <aws/guardduty/model/DescribePublishingDestinationRequest.h>
#include <aws/guardduty/model/DisableOrganizationAdminAccountRequest.h>
#include <aws/guardduty/model/DisassociateFromAdministratorAccountRequest.h>
#include <aws/guardduty/model/DisassociateMembersRequest.h>
#include <aws/guardduty/model/EnableOrganizationAdminAccountRequest.h>
#include <aws/guardduty/model/GetAdministratorAccountRequest.h>
#include <aws/guardduty/model/GetDetectorRequest.h>
#include <aws/guardduty/model/GetFilterRequest.h>
#include <aws/guardduty/model/GetFindingsRequest.h>
#include <aws/guardduty/model/GetFindingsStatisticsRequest.h>
#include <aws/guardduty/model/GetIPSetRequest.h>
#include <aws/guardduty/model/GetInvitationsCountRequest.h>
#include <aws/guardduty/model/GetMalwareScanSettingsRequest.h>
#include <aws/guardduty/model/GetMemberDetectorsRequest.h>
#include <aws/guardduty/model/GetMembersRequest.h>
#include <aws/guardduty/model/GetRemainingFreeTrialDaysRequest.h>
#include <aws/guardduty/model/GetThreatIntelSetRequest.h>
#include <aws/guardduty/model/GetUsageStatisticsRequest.h>
#include <aws/guardduty/model/InviteMembersRequest.h>
#include <aws/guardduty/model/ListDetectorsRequest.h>
#include <aws/guardduty/model/ListFiltersRequest.h>
#include <aws/guardduty/model/ListFindingsRequest.h>
#include <aws/guardduty/model/ListIPSetsRequest.h>
#include <aws/guardduty/model/ListInvitationsRequest.h>
#include <aws/guardduty/model/ListMembersRequest.h>
#include <aws/guardduty/model/ListOrganizationAdminAccountsRequest.h>
#include <aws/guardduty/model/ListPublishingDestinationsRequest.h>
#include <aws/guardduty/model/ListTagsForResourceRequest.h>
#include <aws/guardduty/model/ListThreatIntelSetsRequest.h>
#include <aws/guardduty/model/StartMonitoringMembersRequest.h>
#include <aws/guardduty/model/StopMonitoringMembersRequest.h>
#include <aws/guardduty/model/TagResourceRequest.h>
#include <aws/guardduty/model/UnarchiveFindingsRequest.h>
#include <aws/guardduty/model/UntagResourceRequest.h>
#include <aws/guardduty/model/UpdateDetectorRequest.h>
#include <aws/guardduty/model/UpdateFilterRequest.h>
#include <aws/guardduty/model/UpdateFindingsFeedbackRequest.h>
#include <aws/guardduty/model/UpdateIPSetRequest.h>
#include <aws/guardduty/model/UpdateMalwareScanSettingsRequest.h>
#include <aws/guardduty/model/UpdateMemberDetectorsRequest.h>
#include <aws/guardduty/model/UpdateOrganizationConfigurationRequest.h>
#include <aws/guardduty/model/UpdatePublishingDestinationRequest.h>
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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GuardDutyErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GuardDutyClient::GuardDutyClient(const AWSCredentials& credentials,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GuardDutyErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GuardDutyClient::GuardDutyClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GuardDutyErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GuardDutyClient::~GuardDutyClient()
{
}

void GuardDutyClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("GuardDuty");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + GuardDutyEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void GuardDutyClient::OverrideEndpoint(const Aws::String& endpoint)
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

AcceptAdministratorInvitationOutcome GuardDutyClient::AcceptAdministratorInvitation(const AcceptAdministratorInvitationRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AcceptAdministratorInvitation", "Required field: DetectorId, is not set");
    return AcceptAdministratorInvitationOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/administrator");
  return AcceptAdministratorInvitationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AcceptAdministratorInvitationOutcomeCallable GuardDutyClient::AcceptAdministratorInvitationCallable(const AcceptAdministratorInvitationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcceptAdministratorInvitationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcceptAdministratorInvitation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientAcceptAdministratorInvitationAsyncHelper(GuardDutyClient const * const clientThis, const AcceptAdministratorInvitationRequest& request, const AcceptAdministratorInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AcceptAdministratorInvitation(request), context);
}

void GuardDutyClient::AcceptAdministratorInvitationAsync(const AcceptAdministratorInvitationRequest& request, const AcceptAdministratorInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientAcceptAdministratorInvitationAsyncHelper( this, request, handler, context ); } );
}

ArchiveFindingsOutcome GuardDutyClient::ArchiveFindings(const ArchiveFindingsRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ArchiveFindings", "Required field: DetectorId, is not set");
    return ArchiveFindingsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/findings/archive");
  return ArchiveFindingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ArchiveFindingsOutcomeCallable GuardDutyClient::ArchiveFindingsCallable(const ArchiveFindingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ArchiveFindingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ArchiveFindings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientArchiveFindingsAsyncHelper(GuardDutyClient const * const clientThis, const ArchiveFindingsRequest& request, const ArchiveFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ArchiveFindings(request), context);
}

void GuardDutyClient::ArchiveFindingsAsync(const ArchiveFindingsRequest& request, const ArchiveFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientArchiveFindingsAsyncHelper( this, request, handler, context ); } );
}

CreateDetectorOutcome GuardDutyClient::CreateDetector(const CreateDetectorRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector");
  return CreateDetectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDetectorOutcomeCallable GuardDutyClient::CreateDetectorCallable(const CreateDetectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDetectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDetector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientCreateDetectorAsyncHelper(GuardDutyClient const * const clientThis, const CreateDetectorRequest& request, const CreateDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDetector(request), context);
}

void GuardDutyClient::CreateDetectorAsync(const CreateDetectorRequest& request, const CreateDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientCreateDetectorAsyncHelper( this, request, handler, context ); } );
}

CreateFilterOutcome GuardDutyClient::CreateFilter(const CreateFilterRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateFilter", "Required field: DetectorId, is not set");
    return CreateFilterOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/filter");
  return CreateFilterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFilterOutcomeCallable GuardDutyClient::CreateFilterCallable(const CreateFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientCreateFilterAsyncHelper(GuardDutyClient const * const clientThis, const CreateFilterRequest& request, const CreateFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateFilter(request), context);
}

void GuardDutyClient::CreateFilterAsync(const CreateFilterRequest& request, const CreateFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientCreateFilterAsyncHelper( this, request, handler, context ); } );
}

CreateIPSetOutcome GuardDutyClient::CreateIPSet(const CreateIPSetRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateIPSet", "Required field: DetectorId, is not set");
    return CreateIPSetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/ipset");
  return CreateIPSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateIPSetOutcomeCallable GuardDutyClient::CreateIPSetCallable(const CreateIPSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateIPSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateIPSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientCreateIPSetAsyncHelper(GuardDutyClient const * const clientThis, const CreateIPSetRequest& request, const CreateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateIPSet(request), context);
}

void GuardDutyClient::CreateIPSetAsync(const CreateIPSetRequest& request, const CreateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientCreateIPSetAsyncHelper( this, request, handler, context ); } );
}

CreateMembersOutcome GuardDutyClient::CreateMembers(const CreateMembersRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateMembers", "Required field: DetectorId, is not set");
    return CreateMembersOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/member");
  return CreateMembersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMembersOutcomeCallable GuardDutyClient::CreateMembersCallable(const CreateMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientCreateMembersAsyncHelper(GuardDutyClient const * const clientThis, const CreateMembersRequest& request, const CreateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateMembers(request), context);
}

void GuardDutyClient::CreateMembersAsync(const CreateMembersRequest& request, const CreateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientCreateMembersAsyncHelper( this, request, handler, context ); } );
}

CreatePublishingDestinationOutcome GuardDutyClient::CreatePublishingDestination(const CreatePublishingDestinationRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreatePublishingDestination", "Required field: DetectorId, is not set");
    return CreatePublishingDestinationOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/publishingDestination");
  return CreatePublishingDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePublishingDestinationOutcomeCallable GuardDutyClient::CreatePublishingDestinationCallable(const CreatePublishingDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePublishingDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePublishingDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientCreatePublishingDestinationAsyncHelper(GuardDutyClient const * const clientThis, const CreatePublishingDestinationRequest& request, const CreatePublishingDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePublishingDestination(request), context);
}

void GuardDutyClient::CreatePublishingDestinationAsync(const CreatePublishingDestinationRequest& request, const CreatePublishingDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientCreatePublishingDestinationAsyncHelper( this, request, handler, context ); } );
}

CreateSampleFindingsOutcome GuardDutyClient::CreateSampleFindings(const CreateSampleFindingsRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSampleFindings", "Required field: DetectorId, is not set");
    return CreateSampleFindingsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/findings/create");
  return CreateSampleFindingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSampleFindingsOutcomeCallable GuardDutyClient::CreateSampleFindingsCallable(const CreateSampleFindingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSampleFindingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSampleFindings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientCreateSampleFindingsAsyncHelper(GuardDutyClient const * const clientThis, const CreateSampleFindingsRequest& request, const CreateSampleFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateSampleFindings(request), context);
}

void GuardDutyClient::CreateSampleFindingsAsync(const CreateSampleFindingsRequest& request, const CreateSampleFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientCreateSampleFindingsAsyncHelper( this, request, handler, context ); } );
}

CreateThreatIntelSetOutcome GuardDutyClient::CreateThreatIntelSet(const CreateThreatIntelSetRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateThreatIntelSet", "Required field: DetectorId, is not set");
    return CreateThreatIntelSetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/threatintelset");
  return CreateThreatIntelSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateThreatIntelSetOutcomeCallable GuardDutyClient::CreateThreatIntelSetCallable(const CreateThreatIntelSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateThreatIntelSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateThreatIntelSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientCreateThreatIntelSetAsyncHelper(GuardDutyClient const * const clientThis, const CreateThreatIntelSetRequest& request, const CreateThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateThreatIntelSet(request), context);
}

void GuardDutyClient::CreateThreatIntelSetAsync(const CreateThreatIntelSetRequest& request, const CreateThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientCreateThreatIntelSetAsyncHelper( this, request, handler, context ); } );
}

DeclineInvitationsOutcome GuardDutyClient::DeclineInvitations(const DeclineInvitationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/invitation/decline");
  return DeclineInvitationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeclineInvitationsOutcomeCallable GuardDutyClient::DeclineInvitationsCallable(const DeclineInvitationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeclineInvitationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeclineInvitations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientDeclineInvitationsAsyncHelper(GuardDutyClient const * const clientThis, const DeclineInvitationsRequest& request, const DeclineInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeclineInvitations(request), context);
}

void GuardDutyClient::DeclineInvitationsAsync(const DeclineInvitationsRequest& request, const DeclineInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientDeclineInvitationsAsyncHelper( this, request, handler, context ); } );
}

DeleteDetectorOutcome GuardDutyClient::DeleteDetector(const DeleteDetectorRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDetector", "Required field: DetectorId, is not set");
    return DeleteDetectorOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  return DeleteDetectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDetectorOutcomeCallable GuardDutyClient::DeleteDetectorCallable(const DeleteDetectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDetectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDetector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientDeleteDetectorAsyncHelper(GuardDutyClient const * const clientThis, const DeleteDetectorRequest& request, const DeleteDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDetector(request), context);
}

void GuardDutyClient::DeleteDetectorAsync(const DeleteDetectorRequest& request, const DeleteDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientDeleteDetectorAsyncHelper( this, request, handler, context ); } );
}

DeleteFilterOutcome GuardDutyClient::DeleteFilter(const DeleteFilterRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFilter", "Required field: DetectorId, is not set");
    return DeleteFilterOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  if (!request.FilterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFilter", "Required field: FilterName, is not set");
    return DeleteFilterOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FilterName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/filter/");
  uri.AddPathSegment(request.GetFilterName());
  return DeleteFilterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteFilterOutcomeCallable GuardDutyClient::DeleteFilterCallable(const DeleteFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientDeleteFilterAsyncHelper(GuardDutyClient const * const clientThis, const DeleteFilterRequest& request, const DeleteFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteFilter(request), context);
}

void GuardDutyClient::DeleteFilterAsync(const DeleteFilterRequest& request, const DeleteFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientDeleteFilterAsyncHelper( this, request, handler, context ); } );
}

DeleteIPSetOutcome GuardDutyClient::DeleteIPSet(const DeleteIPSetRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIPSet", "Required field: DetectorId, is not set");
    return DeleteIPSetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  if (!request.IpSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIPSet", "Required field: IpSetId, is not set");
    return DeleteIPSetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IpSetId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/ipset/");
  uri.AddPathSegment(request.GetIpSetId());
  return DeleteIPSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteIPSetOutcomeCallable GuardDutyClient::DeleteIPSetCallable(const DeleteIPSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIPSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIPSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientDeleteIPSetAsyncHelper(GuardDutyClient const * const clientThis, const DeleteIPSetRequest& request, const DeleteIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteIPSet(request), context);
}

void GuardDutyClient::DeleteIPSetAsync(const DeleteIPSetRequest& request, const DeleteIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientDeleteIPSetAsyncHelper( this, request, handler, context ); } );
}

DeleteInvitationsOutcome GuardDutyClient::DeleteInvitations(const DeleteInvitationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/invitation/delete");
  return DeleteInvitationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteInvitationsOutcomeCallable GuardDutyClient::DeleteInvitationsCallable(const DeleteInvitationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteInvitationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInvitations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientDeleteInvitationsAsyncHelper(GuardDutyClient const * const clientThis, const DeleteInvitationsRequest& request, const DeleteInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteInvitations(request), context);
}

void GuardDutyClient::DeleteInvitationsAsync(const DeleteInvitationsRequest& request, const DeleteInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientDeleteInvitationsAsyncHelper( this, request, handler, context ); } );
}

DeleteMembersOutcome GuardDutyClient::DeleteMembers(const DeleteMembersRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMembers", "Required field: DetectorId, is not set");
    return DeleteMembersOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/member/delete");
  return DeleteMembersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteMembersOutcomeCallable GuardDutyClient::DeleteMembersCallable(const DeleteMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientDeleteMembersAsyncHelper(GuardDutyClient const * const clientThis, const DeleteMembersRequest& request, const DeleteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteMembers(request), context);
}

void GuardDutyClient::DeleteMembersAsync(const DeleteMembersRequest& request, const DeleteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientDeleteMembersAsyncHelper( this, request, handler, context ); } );
}

DeletePublishingDestinationOutcome GuardDutyClient::DeletePublishingDestination(const DeletePublishingDestinationRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePublishingDestination", "Required field: DetectorId, is not set");
    return DeletePublishingDestinationOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  if (!request.DestinationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeletePublishingDestination", "Required field: DestinationId, is not set");
    return DeletePublishingDestinationOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DestinationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/publishingDestination/");
  uri.AddPathSegment(request.GetDestinationId());
  return DeletePublishingDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeletePublishingDestinationOutcomeCallable GuardDutyClient::DeletePublishingDestinationCallable(const DeletePublishingDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeletePublishingDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeletePublishingDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientDeletePublishingDestinationAsyncHelper(GuardDutyClient const * const clientThis, const DeletePublishingDestinationRequest& request, const DeletePublishingDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeletePublishingDestination(request), context);
}

void GuardDutyClient::DeletePublishingDestinationAsync(const DeletePublishingDestinationRequest& request, const DeletePublishingDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientDeletePublishingDestinationAsyncHelper( this, request, handler, context ); } );
}

DeleteThreatIntelSetOutcome GuardDutyClient::DeleteThreatIntelSet(const DeleteThreatIntelSetRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteThreatIntelSet", "Required field: DetectorId, is not set");
    return DeleteThreatIntelSetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  if (!request.ThreatIntelSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteThreatIntelSet", "Required field: ThreatIntelSetId, is not set");
    return DeleteThreatIntelSetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThreatIntelSetId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/threatintelset/");
  uri.AddPathSegment(request.GetThreatIntelSetId());
  return DeleteThreatIntelSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteThreatIntelSetOutcomeCallable GuardDutyClient::DeleteThreatIntelSetCallable(const DeleteThreatIntelSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteThreatIntelSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteThreatIntelSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientDeleteThreatIntelSetAsyncHelper(GuardDutyClient const * const clientThis, const DeleteThreatIntelSetRequest& request, const DeleteThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteThreatIntelSet(request), context);
}

void GuardDutyClient::DeleteThreatIntelSetAsync(const DeleteThreatIntelSetRequest& request, const DeleteThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientDeleteThreatIntelSetAsyncHelper( this, request, handler, context ); } );
}

DescribeMalwareScansOutcome GuardDutyClient::DescribeMalwareScans(const DescribeMalwareScansRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeMalwareScans", "Required field: DetectorId, is not set");
    return DescribeMalwareScansOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/malware-scans");
  return DescribeMalwareScansOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeMalwareScansOutcomeCallable GuardDutyClient::DescribeMalwareScansCallable(const DescribeMalwareScansRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMalwareScansOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMalwareScans(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientDescribeMalwareScansAsyncHelper(GuardDutyClient const * const clientThis, const DescribeMalwareScansRequest& request, const DescribeMalwareScansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeMalwareScans(request), context);
}

void GuardDutyClient::DescribeMalwareScansAsync(const DescribeMalwareScansRequest& request, const DescribeMalwareScansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientDescribeMalwareScansAsyncHelper( this, request, handler, context ); } );
}

DescribeOrganizationConfigurationOutcome GuardDutyClient::DescribeOrganizationConfiguration(const DescribeOrganizationConfigurationRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeOrganizationConfiguration", "Required field: DetectorId, is not set");
    return DescribeOrganizationConfigurationOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/admin");
  return DescribeOrganizationConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeOrganizationConfigurationOutcomeCallable GuardDutyClient::DescribeOrganizationConfigurationCallable(const DescribeOrganizationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeOrganizationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeOrganizationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientDescribeOrganizationConfigurationAsyncHelper(GuardDutyClient const * const clientThis, const DescribeOrganizationConfigurationRequest& request, const DescribeOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeOrganizationConfiguration(request), context);
}

void GuardDutyClient::DescribeOrganizationConfigurationAsync(const DescribeOrganizationConfigurationRequest& request, const DescribeOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientDescribeOrganizationConfigurationAsyncHelper( this, request, handler, context ); } );
}

DescribePublishingDestinationOutcome GuardDutyClient::DescribePublishingDestination(const DescribePublishingDestinationRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribePublishingDestination", "Required field: DetectorId, is not set");
    return DescribePublishingDestinationOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  if (!request.DestinationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribePublishingDestination", "Required field: DestinationId, is not set");
    return DescribePublishingDestinationOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DestinationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/publishingDestination/");
  uri.AddPathSegment(request.GetDestinationId());
  return DescribePublishingDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribePublishingDestinationOutcomeCallable GuardDutyClient::DescribePublishingDestinationCallable(const DescribePublishingDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePublishingDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePublishingDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientDescribePublishingDestinationAsyncHelper(GuardDutyClient const * const clientThis, const DescribePublishingDestinationRequest& request, const DescribePublishingDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribePublishingDestination(request), context);
}

void GuardDutyClient::DescribePublishingDestinationAsync(const DescribePublishingDestinationRequest& request, const DescribePublishingDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientDescribePublishingDestinationAsyncHelper( this, request, handler, context ); } );
}

DisableOrganizationAdminAccountOutcome GuardDutyClient::DisableOrganizationAdminAccount(const DisableOrganizationAdminAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/admin/disable");
  return DisableOrganizationAdminAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisableOrganizationAdminAccountOutcomeCallable GuardDutyClient::DisableOrganizationAdminAccountCallable(const DisableOrganizationAdminAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableOrganizationAdminAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableOrganizationAdminAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientDisableOrganizationAdminAccountAsyncHelper(GuardDutyClient const * const clientThis, const DisableOrganizationAdminAccountRequest& request, const DisableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisableOrganizationAdminAccount(request), context);
}

void GuardDutyClient::DisableOrganizationAdminAccountAsync(const DisableOrganizationAdminAccountRequest& request, const DisableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientDisableOrganizationAdminAccountAsyncHelper( this, request, handler, context ); } );
}

DisassociateFromAdministratorAccountOutcome GuardDutyClient::DisassociateFromAdministratorAccount(const DisassociateFromAdministratorAccountRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateFromAdministratorAccount", "Required field: DetectorId, is not set");
    return DisassociateFromAdministratorAccountOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/administrator/disassociate");
  return DisassociateFromAdministratorAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateFromAdministratorAccountOutcomeCallable GuardDutyClient::DisassociateFromAdministratorAccountCallable(const DisassociateFromAdministratorAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateFromAdministratorAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateFromAdministratorAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientDisassociateFromAdministratorAccountAsyncHelper(GuardDutyClient const * const clientThis, const DisassociateFromAdministratorAccountRequest& request, const DisassociateFromAdministratorAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateFromAdministratorAccount(request), context);
}

void GuardDutyClient::DisassociateFromAdministratorAccountAsync(const DisassociateFromAdministratorAccountRequest& request, const DisassociateFromAdministratorAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientDisassociateFromAdministratorAccountAsyncHelper( this, request, handler, context ); } );
}

DisassociateMembersOutcome GuardDutyClient::DisassociateMembers(const DisassociateMembersRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateMembers", "Required field: DetectorId, is not set");
    return DisassociateMembersOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/member/disassociate");
  return DisassociateMembersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateMembersOutcomeCallable GuardDutyClient::DisassociateMembersCallable(const DisassociateMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientDisassociateMembersAsyncHelper(GuardDutyClient const * const clientThis, const DisassociateMembersRequest& request, const DisassociateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateMembers(request), context);
}

void GuardDutyClient::DisassociateMembersAsync(const DisassociateMembersRequest& request, const DisassociateMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientDisassociateMembersAsyncHelper( this, request, handler, context ); } );
}

EnableOrganizationAdminAccountOutcome GuardDutyClient::EnableOrganizationAdminAccount(const EnableOrganizationAdminAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/admin/enable");
  return EnableOrganizationAdminAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableOrganizationAdminAccountOutcomeCallable GuardDutyClient::EnableOrganizationAdminAccountCallable(const EnableOrganizationAdminAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableOrganizationAdminAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableOrganizationAdminAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientEnableOrganizationAdminAccountAsyncHelper(GuardDutyClient const * const clientThis, const EnableOrganizationAdminAccountRequest& request, const EnableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->EnableOrganizationAdminAccount(request), context);
}

void GuardDutyClient::EnableOrganizationAdminAccountAsync(const EnableOrganizationAdminAccountRequest& request, const EnableOrganizationAdminAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientEnableOrganizationAdminAccountAsyncHelper( this, request, handler, context ); } );
}

GetAdministratorAccountOutcome GuardDutyClient::GetAdministratorAccount(const GetAdministratorAccountRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAdministratorAccount", "Required field: DetectorId, is not set");
    return GetAdministratorAccountOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/administrator");
  return GetAdministratorAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAdministratorAccountOutcomeCallable GuardDutyClient::GetAdministratorAccountCallable(const GetAdministratorAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAdministratorAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAdministratorAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientGetAdministratorAccountAsyncHelper(GuardDutyClient const * const clientThis, const GetAdministratorAccountRequest& request, const GetAdministratorAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAdministratorAccount(request), context);
}

void GuardDutyClient::GetAdministratorAccountAsync(const GetAdministratorAccountRequest& request, const GetAdministratorAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientGetAdministratorAccountAsyncHelper( this, request, handler, context ); } );
}

GetDetectorOutcome GuardDutyClient::GetDetector(const GetDetectorRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDetector", "Required field: DetectorId, is not set");
    return GetDetectorOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  return GetDetectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDetectorOutcomeCallable GuardDutyClient::GetDetectorCallable(const GetDetectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDetectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDetector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientGetDetectorAsyncHelper(GuardDutyClient const * const clientThis, const GetDetectorRequest& request, const GetDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDetector(request), context);
}

void GuardDutyClient::GetDetectorAsync(const GetDetectorRequest& request, const GetDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientGetDetectorAsyncHelper( this, request, handler, context ); } );
}

GetFilterOutcome GuardDutyClient::GetFilter(const GetFilterRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFilter", "Required field: DetectorId, is not set");
    return GetFilterOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  if (!request.FilterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFilter", "Required field: FilterName, is not set");
    return GetFilterOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FilterName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/filter/");
  uri.AddPathSegment(request.GetFilterName());
  return GetFilterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetFilterOutcomeCallable GuardDutyClient::GetFilterCallable(const GetFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientGetFilterAsyncHelper(GuardDutyClient const * const clientThis, const GetFilterRequest& request, const GetFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetFilter(request), context);
}

void GuardDutyClient::GetFilterAsync(const GetFilterRequest& request, const GetFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientGetFilterAsyncHelper( this, request, handler, context ); } );
}

GetFindingsOutcome GuardDutyClient::GetFindings(const GetFindingsRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFindings", "Required field: DetectorId, is not set");
    return GetFindingsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/findings/get");
  return GetFindingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetFindingsOutcomeCallable GuardDutyClient::GetFindingsCallable(const GetFindingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFindingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFindings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientGetFindingsAsyncHelper(GuardDutyClient const * const clientThis, const GetFindingsRequest& request, const GetFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetFindings(request), context);
}

void GuardDutyClient::GetFindingsAsync(const GetFindingsRequest& request, const GetFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientGetFindingsAsyncHelper( this, request, handler, context ); } );
}

GetFindingsStatisticsOutcome GuardDutyClient::GetFindingsStatistics(const GetFindingsStatisticsRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFindingsStatistics", "Required field: DetectorId, is not set");
    return GetFindingsStatisticsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/findings/statistics");
  return GetFindingsStatisticsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetFindingsStatisticsOutcomeCallable GuardDutyClient::GetFindingsStatisticsCallable(const GetFindingsStatisticsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFindingsStatisticsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFindingsStatistics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientGetFindingsStatisticsAsyncHelper(GuardDutyClient const * const clientThis, const GetFindingsStatisticsRequest& request, const GetFindingsStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetFindingsStatistics(request), context);
}

void GuardDutyClient::GetFindingsStatisticsAsync(const GetFindingsStatisticsRequest& request, const GetFindingsStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientGetFindingsStatisticsAsyncHelper( this, request, handler, context ); } );
}

GetIPSetOutcome GuardDutyClient::GetIPSet(const GetIPSetRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIPSet", "Required field: DetectorId, is not set");
    return GetIPSetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  if (!request.IpSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIPSet", "Required field: IpSetId, is not set");
    return GetIPSetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IpSetId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/ipset/");
  uri.AddPathSegment(request.GetIpSetId());
  return GetIPSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetIPSetOutcomeCallable GuardDutyClient::GetIPSetCallable(const GetIPSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIPSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIPSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientGetIPSetAsyncHelper(GuardDutyClient const * const clientThis, const GetIPSetRequest& request, const GetIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetIPSet(request), context);
}

void GuardDutyClient::GetIPSetAsync(const GetIPSetRequest& request, const GetIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientGetIPSetAsyncHelper( this, request, handler, context ); } );
}

GetInvitationsCountOutcome GuardDutyClient::GetInvitationsCount(const GetInvitationsCountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/invitation/count");
  return GetInvitationsCountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetInvitationsCountOutcomeCallable GuardDutyClient::GetInvitationsCountCallable(const GetInvitationsCountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInvitationsCountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInvitationsCount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientGetInvitationsCountAsyncHelper(GuardDutyClient const * const clientThis, const GetInvitationsCountRequest& request, const GetInvitationsCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetInvitationsCount(request), context);
}

void GuardDutyClient::GetInvitationsCountAsync(const GetInvitationsCountRequest& request, const GetInvitationsCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientGetInvitationsCountAsyncHelper( this, request, handler, context ); } );
}

GetMalwareScanSettingsOutcome GuardDutyClient::GetMalwareScanSettings(const GetMalwareScanSettingsRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMalwareScanSettings", "Required field: DetectorId, is not set");
    return GetMalwareScanSettingsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/malware-scan-settings");
  return GetMalwareScanSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetMalwareScanSettingsOutcomeCallable GuardDutyClient::GetMalwareScanSettingsCallable(const GetMalwareScanSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMalwareScanSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMalwareScanSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientGetMalwareScanSettingsAsyncHelper(GuardDutyClient const * const clientThis, const GetMalwareScanSettingsRequest& request, const GetMalwareScanSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMalwareScanSettings(request), context);
}

void GuardDutyClient::GetMalwareScanSettingsAsync(const GetMalwareScanSettingsRequest& request, const GetMalwareScanSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientGetMalwareScanSettingsAsyncHelper( this, request, handler, context ); } );
}

GetMemberDetectorsOutcome GuardDutyClient::GetMemberDetectors(const GetMemberDetectorsRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMemberDetectors", "Required field: DetectorId, is not set");
    return GetMemberDetectorsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/member/detector/get");
  return GetMemberDetectorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMemberDetectorsOutcomeCallable GuardDutyClient::GetMemberDetectorsCallable(const GetMemberDetectorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMemberDetectorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMemberDetectors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientGetMemberDetectorsAsyncHelper(GuardDutyClient const * const clientThis, const GetMemberDetectorsRequest& request, const GetMemberDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMemberDetectors(request), context);
}

void GuardDutyClient::GetMemberDetectorsAsync(const GetMemberDetectorsRequest& request, const GetMemberDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientGetMemberDetectorsAsyncHelper( this, request, handler, context ); } );
}

GetMembersOutcome GuardDutyClient::GetMembers(const GetMembersRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMembers", "Required field: DetectorId, is not set");
    return GetMembersOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/member/get");
  return GetMembersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMembersOutcomeCallable GuardDutyClient::GetMembersCallable(const GetMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientGetMembersAsyncHelper(GuardDutyClient const * const clientThis, const GetMembersRequest& request, const GetMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMembers(request), context);
}

void GuardDutyClient::GetMembersAsync(const GetMembersRequest& request, const GetMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientGetMembersAsyncHelper( this, request, handler, context ); } );
}

GetRemainingFreeTrialDaysOutcome GuardDutyClient::GetRemainingFreeTrialDays(const GetRemainingFreeTrialDaysRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRemainingFreeTrialDays", "Required field: DetectorId, is not set");
    return GetRemainingFreeTrialDaysOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/freeTrial/daysRemaining");
  return GetRemainingFreeTrialDaysOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRemainingFreeTrialDaysOutcomeCallable GuardDutyClient::GetRemainingFreeTrialDaysCallable(const GetRemainingFreeTrialDaysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRemainingFreeTrialDaysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRemainingFreeTrialDays(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientGetRemainingFreeTrialDaysAsyncHelper(GuardDutyClient const * const clientThis, const GetRemainingFreeTrialDaysRequest& request, const GetRemainingFreeTrialDaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRemainingFreeTrialDays(request), context);
}

void GuardDutyClient::GetRemainingFreeTrialDaysAsync(const GetRemainingFreeTrialDaysRequest& request, const GetRemainingFreeTrialDaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientGetRemainingFreeTrialDaysAsyncHelper( this, request, handler, context ); } );
}

GetThreatIntelSetOutcome GuardDutyClient::GetThreatIntelSet(const GetThreatIntelSetRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetThreatIntelSet", "Required field: DetectorId, is not set");
    return GetThreatIntelSetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  if (!request.ThreatIntelSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetThreatIntelSet", "Required field: ThreatIntelSetId, is not set");
    return GetThreatIntelSetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThreatIntelSetId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/threatintelset/");
  uri.AddPathSegment(request.GetThreatIntelSetId());
  return GetThreatIntelSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetThreatIntelSetOutcomeCallable GuardDutyClient::GetThreatIntelSetCallable(const GetThreatIntelSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetThreatIntelSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetThreatIntelSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientGetThreatIntelSetAsyncHelper(GuardDutyClient const * const clientThis, const GetThreatIntelSetRequest& request, const GetThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetThreatIntelSet(request), context);
}

void GuardDutyClient::GetThreatIntelSetAsync(const GetThreatIntelSetRequest& request, const GetThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientGetThreatIntelSetAsyncHelper( this, request, handler, context ); } );
}

GetUsageStatisticsOutcome GuardDutyClient::GetUsageStatistics(const GetUsageStatisticsRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUsageStatistics", "Required field: DetectorId, is not set");
    return GetUsageStatisticsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/usage/statistics");
  return GetUsageStatisticsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetUsageStatisticsOutcomeCallable GuardDutyClient::GetUsageStatisticsCallable(const GetUsageStatisticsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUsageStatisticsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUsageStatistics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientGetUsageStatisticsAsyncHelper(GuardDutyClient const * const clientThis, const GetUsageStatisticsRequest& request, const GetUsageStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetUsageStatistics(request), context);
}

void GuardDutyClient::GetUsageStatisticsAsync(const GetUsageStatisticsRequest& request, const GetUsageStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientGetUsageStatisticsAsyncHelper( this, request, handler, context ); } );
}

InviteMembersOutcome GuardDutyClient::InviteMembers(const InviteMembersRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InviteMembers", "Required field: DetectorId, is not set");
    return InviteMembersOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/member/invite");
  return InviteMembersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

InviteMembersOutcomeCallable GuardDutyClient::InviteMembersCallable(const InviteMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< InviteMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->InviteMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientInviteMembersAsyncHelper(GuardDutyClient const * const clientThis, const InviteMembersRequest& request, const InviteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->InviteMembers(request), context);
}

void GuardDutyClient::InviteMembersAsync(const InviteMembersRequest& request, const InviteMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientInviteMembersAsyncHelper( this, request, handler, context ); } );
}

ListDetectorsOutcome GuardDutyClient::ListDetectors(const ListDetectorsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector");
  return ListDetectorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDetectorsOutcomeCallable GuardDutyClient::ListDetectorsCallable(const ListDetectorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDetectorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDetectors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientListDetectorsAsyncHelper(GuardDutyClient const * const clientThis, const ListDetectorsRequest& request, const ListDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDetectors(request), context);
}

void GuardDutyClient::ListDetectorsAsync(const ListDetectorsRequest& request, const ListDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientListDetectorsAsyncHelper( this, request, handler, context ); } );
}

ListFiltersOutcome GuardDutyClient::ListFilters(const ListFiltersRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFilters", "Required field: DetectorId, is not set");
    return ListFiltersOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/filter");
  return ListFiltersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListFiltersOutcomeCallable GuardDutyClient::ListFiltersCallable(const ListFiltersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFiltersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFilters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientListFiltersAsyncHelper(GuardDutyClient const * const clientThis, const ListFiltersRequest& request, const ListFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListFilters(request), context);
}

void GuardDutyClient::ListFiltersAsync(const ListFiltersRequest& request, const ListFiltersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientListFiltersAsyncHelper( this, request, handler, context ); } );
}

ListFindingsOutcome GuardDutyClient::ListFindings(const ListFindingsRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFindings", "Required field: DetectorId, is not set");
    return ListFindingsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/findings");
  return ListFindingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFindingsOutcomeCallable GuardDutyClient::ListFindingsCallable(const ListFindingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFindingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFindings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientListFindingsAsyncHelper(GuardDutyClient const * const clientThis, const ListFindingsRequest& request, const ListFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListFindings(request), context);
}

void GuardDutyClient::ListFindingsAsync(const ListFindingsRequest& request, const ListFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientListFindingsAsyncHelper( this, request, handler, context ); } );
}

ListIPSetsOutcome GuardDutyClient::ListIPSets(const ListIPSetsRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIPSets", "Required field: DetectorId, is not set");
    return ListIPSetsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/ipset");
  return ListIPSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListIPSetsOutcomeCallable GuardDutyClient::ListIPSetsCallable(const ListIPSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListIPSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListIPSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientListIPSetsAsyncHelper(GuardDutyClient const * const clientThis, const ListIPSetsRequest& request, const ListIPSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListIPSets(request), context);
}

void GuardDutyClient::ListIPSetsAsync(const ListIPSetsRequest& request, const ListIPSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientListIPSetsAsyncHelper( this, request, handler, context ); } );
}

ListInvitationsOutcome GuardDutyClient::ListInvitations(const ListInvitationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/invitation");
  return ListInvitationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListInvitationsOutcomeCallable GuardDutyClient::ListInvitationsCallable(const ListInvitationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInvitationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInvitations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientListInvitationsAsyncHelper(GuardDutyClient const * const clientThis, const ListInvitationsRequest& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListInvitations(request), context);
}

void GuardDutyClient::ListInvitationsAsync(const ListInvitationsRequest& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientListInvitationsAsyncHelper( this, request, handler, context ); } );
}

ListMembersOutcome GuardDutyClient::ListMembers(const ListMembersRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMembers", "Required field: DetectorId, is not set");
    return ListMembersOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/member");
  return ListMembersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListMembersOutcomeCallable GuardDutyClient::ListMembersCallable(const ListMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientListMembersAsyncHelper(GuardDutyClient const * const clientThis, const ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListMembers(request), context);
}

void GuardDutyClient::ListMembersAsync(const ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientListMembersAsyncHelper( this, request, handler, context ); } );
}

ListOrganizationAdminAccountsOutcome GuardDutyClient::ListOrganizationAdminAccounts(const ListOrganizationAdminAccountsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/admin");
  return ListOrganizationAdminAccountsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListOrganizationAdminAccountsOutcomeCallable GuardDutyClient::ListOrganizationAdminAccountsCallable(const ListOrganizationAdminAccountsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOrganizationAdminAccountsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOrganizationAdminAccounts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientListOrganizationAdminAccountsAsyncHelper(GuardDutyClient const * const clientThis, const ListOrganizationAdminAccountsRequest& request, const ListOrganizationAdminAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListOrganizationAdminAccounts(request), context);
}

void GuardDutyClient::ListOrganizationAdminAccountsAsync(const ListOrganizationAdminAccountsRequest& request, const ListOrganizationAdminAccountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientListOrganizationAdminAccountsAsyncHelper( this, request, handler, context ); } );
}

ListPublishingDestinationsOutcome GuardDutyClient::ListPublishingDestinations(const ListPublishingDestinationsRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPublishingDestinations", "Required field: DetectorId, is not set");
    return ListPublishingDestinationsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/publishingDestination");
  return ListPublishingDestinationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPublishingDestinationsOutcomeCallable GuardDutyClient::ListPublishingDestinationsCallable(const ListPublishingDestinationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPublishingDestinationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPublishingDestinations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientListPublishingDestinationsAsyncHelper(GuardDutyClient const * const clientThis, const ListPublishingDestinationsRequest& request, const ListPublishingDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListPublishingDestinations(request), context);
}

void GuardDutyClient::ListPublishingDestinationsAsync(const ListPublishingDestinationsRequest& request, const ListPublishingDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientListPublishingDestinationsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome GuardDutyClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable GuardDutyClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientListTagsForResourceAsyncHelper(GuardDutyClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void GuardDutyClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListThreatIntelSetsOutcome GuardDutyClient::ListThreatIntelSets(const ListThreatIntelSetsRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListThreatIntelSets", "Required field: DetectorId, is not set");
    return ListThreatIntelSetsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/threatintelset");
  return ListThreatIntelSetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListThreatIntelSetsOutcomeCallable GuardDutyClient::ListThreatIntelSetsCallable(const ListThreatIntelSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListThreatIntelSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListThreatIntelSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientListThreatIntelSetsAsyncHelper(GuardDutyClient const * const clientThis, const ListThreatIntelSetsRequest& request, const ListThreatIntelSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListThreatIntelSets(request), context);
}

void GuardDutyClient::ListThreatIntelSetsAsync(const ListThreatIntelSetsRequest& request, const ListThreatIntelSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientListThreatIntelSetsAsyncHelper( this, request, handler, context ); } );
}

StartMonitoringMembersOutcome GuardDutyClient::StartMonitoringMembers(const StartMonitoringMembersRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartMonitoringMembers", "Required field: DetectorId, is not set");
    return StartMonitoringMembersOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/member/start");
  return StartMonitoringMembersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartMonitoringMembersOutcomeCallable GuardDutyClient::StartMonitoringMembersCallable(const StartMonitoringMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartMonitoringMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartMonitoringMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientStartMonitoringMembersAsyncHelper(GuardDutyClient const * const clientThis, const StartMonitoringMembersRequest& request, const StartMonitoringMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartMonitoringMembers(request), context);
}

void GuardDutyClient::StartMonitoringMembersAsync(const StartMonitoringMembersRequest& request, const StartMonitoringMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientStartMonitoringMembersAsyncHelper( this, request, handler, context ); } );
}

StopMonitoringMembersOutcome GuardDutyClient::StopMonitoringMembers(const StopMonitoringMembersRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopMonitoringMembers", "Required field: DetectorId, is not set");
    return StopMonitoringMembersOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/member/stop");
  return StopMonitoringMembersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopMonitoringMembersOutcomeCallable GuardDutyClient::StopMonitoringMembersCallable(const StopMonitoringMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopMonitoringMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopMonitoringMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientStopMonitoringMembersAsyncHelper(GuardDutyClient const * const clientThis, const StopMonitoringMembersRequest& request, const StopMonitoringMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopMonitoringMembers(request), context);
}

void GuardDutyClient::StopMonitoringMembersAsync(const StopMonitoringMembersRequest& request, const StopMonitoringMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientStopMonitoringMembersAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome GuardDutyClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable GuardDutyClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientTagResourceAsyncHelper(GuardDutyClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void GuardDutyClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UnarchiveFindingsOutcome GuardDutyClient::UnarchiveFindings(const UnarchiveFindingsRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UnarchiveFindings", "Required field: DetectorId, is not set");
    return UnarchiveFindingsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/findings/unarchive");
  return UnarchiveFindingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UnarchiveFindingsOutcomeCallable GuardDutyClient::UnarchiveFindingsCallable(const UnarchiveFindingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UnarchiveFindingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UnarchiveFindings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientUnarchiveFindingsAsyncHelper(GuardDutyClient const * const clientThis, const UnarchiveFindingsRequest& request, const UnarchiveFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UnarchiveFindings(request), context);
}

void GuardDutyClient::UnarchiveFindingsAsync(const UnarchiveFindingsRequest& request, const UnarchiveFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientUnarchiveFindingsAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome GuardDutyClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable GuardDutyClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientUntagResourceAsyncHelper(GuardDutyClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void GuardDutyClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateDetectorOutcome GuardDutyClient::UpdateDetector(const UpdateDetectorRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDetector", "Required field: DetectorId, is not set");
    return UpdateDetectorOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  return UpdateDetectorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDetectorOutcomeCallable GuardDutyClient::UpdateDetectorCallable(const UpdateDetectorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDetectorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDetector(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientUpdateDetectorAsyncHelper(GuardDutyClient const * const clientThis, const UpdateDetectorRequest& request, const UpdateDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDetector(request), context);
}

void GuardDutyClient::UpdateDetectorAsync(const UpdateDetectorRequest& request, const UpdateDetectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientUpdateDetectorAsyncHelper( this, request, handler, context ); } );
}

UpdateFilterOutcome GuardDutyClient::UpdateFilter(const UpdateFilterRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFilter", "Required field: DetectorId, is not set");
    return UpdateFilterOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  if (!request.FilterNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFilter", "Required field: FilterName, is not set");
    return UpdateFilterOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FilterName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/filter/");
  uri.AddPathSegment(request.GetFilterName());
  return UpdateFilterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateFilterOutcomeCallable GuardDutyClient::UpdateFilterCallable(const UpdateFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientUpdateFilterAsyncHelper(GuardDutyClient const * const clientThis, const UpdateFilterRequest& request, const UpdateFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateFilter(request), context);
}

void GuardDutyClient::UpdateFilterAsync(const UpdateFilterRequest& request, const UpdateFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientUpdateFilterAsyncHelper( this, request, handler, context ); } );
}

UpdateFindingsFeedbackOutcome GuardDutyClient::UpdateFindingsFeedback(const UpdateFindingsFeedbackRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFindingsFeedback", "Required field: DetectorId, is not set");
    return UpdateFindingsFeedbackOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/findings/feedback");
  return UpdateFindingsFeedbackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateFindingsFeedbackOutcomeCallable GuardDutyClient::UpdateFindingsFeedbackCallable(const UpdateFindingsFeedbackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFindingsFeedbackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFindingsFeedback(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientUpdateFindingsFeedbackAsyncHelper(GuardDutyClient const * const clientThis, const UpdateFindingsFeedbackRequest& request, const UpdateFindingsFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateFindingsFeedback(request), context);
}

void GuardDutyClient::UpdateFindingsFeedbackAsync(const UpdateFindingsFeedbackRequest& request, const UpdateFindingsFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientUpdateFindingsFeedbackAsyncHelper( this, request, handler, context ); } );
}

UpdateIPSetOutcome GuardDutyClient::UpdateIPSet(const UpdateIPSetRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIPSet", "Required field: DetectorId, is not set");
    return UpdateIPSetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  if (!request.IpSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIPSet", "Required field: IpSetId, is not set");
    return UpdateIPSetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IpSetId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/ipset/");
  uri.AddPathSegment(request.GetIpSetId());
  return UpdateIPSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateIPSetOutcomeCallable GuardDutyClient::UpdateIPSetCallable(const UpdateIPSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateIPSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateIPSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientUpdateIPSetAsyncHelper(GuardDutyClient const * const clientThis, const UpdateIPSetRequest& request, const UpdateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateIPSet(request), context);
}

void GuardDutyClient::UpdateIPSetAsync(const UpdateIPSetRequest& request, const UpdateIPSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientUpdateIPSetAsyncHelper( this, request, handler, context ); } );
}

UpdateMalwareScanSettingsOutcome GuardDutyClient::UpdateMalwareScanSettings(const UpdateMalwareScanSettingsRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMalwareScanSettings", "Required field: DetectorId, is not set");
    return UpdateMalwareScanSettingsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/malware-scan-settings");
  return UpdateMalwareScanSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateMalwareScanSettingsOutcomeCallable GuardDutyClient::UpdateMalwareScanSettingsCallable(const UpdateMalwareScanSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMalwareScanSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMalwareScanSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientUpdateMalwareScanSettingsAsyncHelper(GuardDutyClient const * const clientThis, const UpdateMalwareScanSettingsRequest& request, const UpdateMalwareScanSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateMalwareScanSettings(request), context);
}

void GuardDutyClient::UpdateMalwareScanSettingsAsync(const UpdateMalwareScanSettingsRequest& request, const UpdateMalwareScanSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientUpdateMalwareScanSettingsAsyncHelper( this, request, handler, context ); } );
}

UpdateMemberDetectorsOutcome GuardDutyClient::UpdateMemberDetectors(const UpdateMemberDetectorsRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMemberDetectors", "Required field: DetectorId, is not set");
    return UpdateMemberDetectorsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/member/detector/update");
  return UpdateMemberDetectorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateMemberDetectorsOutcomeCallable GuardDutyClient::UpdateMemberDetectorsCallable(const UpdateMemberDetectorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMemberDetectorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMemberDetectors(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientUpdateMemberDetectorsAsyncHelper(GuardDutyClient const * const clientThis, const UpdateMemberDetectorsRequest& request, const UpdateMemberDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateMemberDetectors(request), context);
}

void GuardDutyClient::UpdateMemberDetectorsAsync(const UpdateMemberDetectorsRequest& request, const UpdateMemberDetectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientUpdateMemberDetectorsAsyncHelper( this, request, handler, context ); } );
}

UpdateOrganizationConfigurationOutcome GuardDutyClient::UpdateOrganizationConfiguration(const UpdateOrganizationConfigurationRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateOrganizationConfiguration", "Required field: DetectorId, is not set");
    return UpdateOrganizationConfigurationOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/admin");
  return UpdateOrganizationConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateOrganizationConfigurationOutcomeCallable GuardDutyClient::UpdateOrganizationConfigurationCallable(const UpdateOrganizationConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateOrganizationConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateOrganizationConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientUpdateOrganizationConfigurationAsyncHelper(GuardDutyClient const * const clientThis, const UpdateOrganizationConfigurationRequest& request, const UpdateOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateOrganizationConfiguration(request), context);
}

void GuardDutyClient::UpdateOrganizationConfigurationAsync(const UpdateOrganizationConfigurationRequest& request, const UpdateOrganizationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientUpdateOrganizationConfigurationAsyncHelper( this, request, handler, context ); } );
}

UpdatePublishingDestinationOutcome GuardDutyClient::UpdatePublishingDestination(const UpdatePublishingDestinationRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePublishingDestination", "Required field: DetectorId, is not set");
    return UpdatePublishingDestinationOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  if (!request.DestinationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePublishingDestination", "Required field: DestinationId, is not set");
    return UpdatePublishingDestinationOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DestinationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/publishingDestination/");
  uri.AddPathSegment(request.GetDestinationId());
  return UpdatePublishingDestinationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePublishingDestinationOutcomeCallable GuardDutyClient::UpdatePublishingDestinationCallable(const UpdatePublishingDestinationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePublishingDestinationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePublishingDestination(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientUpdatePublishingDestinationAsyncHelper(GuardDutyClient const * const clientThis, const UpdatePublishingDestinationRequest& request, const UpdatePublishingDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdatePublishingDestination(request), context);
}

void GuardDutyClient::UpdatePublishingDestinationAsync(const UpdatePublishingDestinationRequest& request, const UpdatePublishingDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientUpdatePublishingDestinationAsyncHelper( this, request, handler, context ); } );
}

UpdateThreatIntelSetOutcome GuardDutyClient::UpdateThreatIntelSet(const UpdateThreatIntelSetRequest& request) const
{
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateThreatIntelSet", "Required field: DetectorId, is not set");
    return UpdateThreatIntelSetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  if (!request.ThreatIntelSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateThreatIntelSet", "Required field: ThreatIntelSetId, is not set");
    return UpdateThreatIntelSetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThreatIntelSetId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/detector/");
  uri.AddPathSegment(request.GetDetectorId());
  uri.AddPathSegments("/threatintelset/");
  uri.AddPathSegment(request.GetThreatIntelSetId());
  return UpdateThreatIntelSetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateThreatIntelSetOutcomeCallable GuardDutyClient::UpdateThreatIntelSetCallable(const UpdateThreatIntelSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateThreatIntelSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateThreatIntelSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GuardDutyClientUpdateThreatIntelSetAsyncHelper(GuardDutyClient const * const clientThis, const UpdateThreatIntelSetRequest& request, const UpdateThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateThreatIntelSet(request), context);
}

void GuardDutyClient::UpdateThreatIntelSetAsync(const UpdateThreatIntelSetRequest& request, const UpdateThreatIntelSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ GuardDutyClientUpdateThreatIntelSetAsyncHelper( this, request, handler, context ); } );
}

