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
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/guardduty/GuardDutyClient.h>
#include <aws/guardduty/GuardDutyErrorMarshaller.h>
#include <aws/guardduty/GuardDutyEndpointProvider.h>
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
#include <aws/guardduty/model/GetCoverageStatisticsRequest.h>
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
#include <aws/guardduty/model/ListCoverageRequest.h>
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
#include <aws/guardduty/model/StartMalwareScanRequest.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* GuardDutyClient::SERVICE_NAME = "guardduty";
const char* GuardDutyClient::ALLOCATION_TAG = "GuardDutyClient";

GuardDutyClient::GuardDutyClient(const GuardDuty::GuardDutyClientConfiguration& clientConfiguration,
                                 std::shared_ptr<GuardDutyEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GuardDutyErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

GuardDutyClient::GuardDutyClient(const AWSCredentials& credentials,
                                 std::shared_ptr<GuardDutyEndpointProviderBase> endpointProvider,
                                 const GuardDuty::GuardDutyClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GuardDutyErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

GuardDutyClient::GuardDutyClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<GuardDutyEndpointProviderBase> endpointProvider,
                                 const GuardDuty::GuardDutyClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GuardDutyErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  GuardDutyClient::GuardDutyClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GuardDutyErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<GuardDutyEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

GuardDutyClient::GuardDutyClient(const AWSCredentials& credentials,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GuardDutyErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<GuardDutyEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

GuardDutyClient::GuardDutyClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GuardDutyErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<GuardDutyEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
GuardDutyClient::~GuardDutyClient()
{
}

std::shared_ptr<GuardDutyEndpointProviderBase>& GuardDutyClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void GuardDutyClient::init(const GuardDuty::GuardDutyClientConfiguration& config)
{
  AWSClient::SetServiceClientName("GuardDuty");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void GuardDutyClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AcceptAdministratorInvitationOutcome GuardDutyClient::AcceptAdministratorInvitation(const AcceptAdministratorInvitationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AcceptAdministratorInvitation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AcceptAdministratorInvitation", "Required field: DetectorId, is not set");
    return AcceptAdministratorInvitationOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AcceptAdministratorInvitation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/administrator");
  return AcceptAdministratorInvitationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ArchiveFindingsOutcome GuardDutyClient::ArchiveFindings(const ArchiveFindingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ArchiveFindings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ArchiveFindings", "Required field: DetectorId, is not set");
    return ArchiveFindingsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ArchiveFindings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/findings/archive");
  return ArchiveFindingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDetectorOutcome GuardDutyClient::CreateDetector(const CreateDetectorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector");
  return CreateDetectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFilterOutcome GuardDutyClient::CreateFilter(const CreateFilterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateFilter", "Required field: DetectorId, is not set");
    return CreateFilterOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/filter");
  return CreateFilterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateIPSetOutcome GuardDutyClient::CreateIPSet(const CreateIPSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateIPSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateIPSet", "Required field: DetectorId, is not set");
    return CreateIPSetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateIPSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ipset");
  return CreateIPSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMembersOutcome GuardDutyClient::CreateMembers(const CreateMembersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateMembers", "Required field: DetectorId, is not set");
    return CreateMembersOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/member");
  return CreateMembersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePublishingDestinationOutcome GuardDutyClient::CreatePublishingDestination(const CreatePublishingDestinationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreatePublishingDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreatePublishingDestination", "Required field: DetectorId, is not set");
    return CreatePublishingDestinationOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreatePublishingDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/publishingDestination");
  return CreatePublishingDestinationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSampleFindingsOutcome GuardDutyClient::CreateSampleFindings(const CreateSampleFindingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSampleFindings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateSampleFindings", "Required field: DetectorId, is not set");
    return CreateSampleFindingsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSampleFindings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/findings/create");
  return CreateSampleFindingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateThreatIntelSetOutcome GuardDutyClient::CreateThreatIntelSet(const CreateThreatIntelSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateThreatIntelSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateThreatIntelSet", "Required field: DetectorId, is not set");
    return CreateThreatIntelSetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateThreatIntelSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/threatintelset");
  return CreateThreatIntelSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeclineInvitationsOutcome GuardDutyClient::DeclineInvitations(const DeclineInvitationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeclineInvitations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeclineInvitations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/invitation/decline");
  return DeclineInvitationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDetectorOutcome GuardDutyClient::DeleteDetector(const DeleteDetectorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDetector", "Required field: DetectorId, is not set");
    return DeleteDetectorOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  return DeleteDetectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteFilterOutcome GuardDutyClient::DeleteFilter(const DeleteFilterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/filter/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFilterName());
  return DeleteFilterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteIPSetOutcome GuardDutyClient::DeleteIPSet(const DeleteIPSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteIPSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteIPSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ipset/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIpSetId());
  return DeleteIPSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteInvitationsOutcome GuardDutyClient::DeleteInvitations(const DeleteInvitationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteInvitations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteInvitations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/invitation/delete");
  return DeleteInvitationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteMembersOutcome GuardDutyClient::DeleteMembers(const DeleteMembersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMembers", "Required field: DetectorId, is not set");
    return DeleteMembersOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/member/delete");
  return DeleteMembersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeletePublishingDestinationOutcome GuardDutyClient::DeletePublishingDestination(const DeletePublishingDestinationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeletePublishingDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeletePublishingDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/publishingDestination/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDestinationId());
  return DeletePublishingDestinationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteThreatIntelSetOutcome GuardDutyClient::DeleteThreatIntelSet(const DeleteThreatIntelSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteThreatIntelSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteThreatIntelSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/threatintelset/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThreatIntelSetId());
  return DeleteThreatIntelSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DescribeMalwareScansOutcome GuardDutyClient::DescribeMalwareScans(const DescribeMalwareScansRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeMalwareScans, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeMalwareScans", "Required field: DetectorId, is not set");
    return DescribeMalwareScansOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeMalwareScans, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/malware-scans");
  return DescribeMalwareScansOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeOrganizationConfigurationOutcome GuardDutyClient::DescribeOrganizationConfiguration(const DescribeOrganizationConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeOrganizationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeOrganizationConfiguration", "Required field: DetectorId, is not set");
    return DescribeOrganizationConfigurationOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeOrganizationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/admin");
  return DescribeOrganizationConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribePublishingDestinationOutcome GuardDutyClient::DescribePublishingDestination(const DescribePublishingDestinationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribePublishingDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribePublishingDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/publishingDestination/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDestinationId());
  return DescribePublishingDestinationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DisableOrganizationAdminAccountOutcome GuardDutyClient::DisableOrganizationAdminAccount(const DisableOrganizationAdminAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisableOrganizationAdminAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisableOrganizationAdminAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/admin/disable");
  return DisableOrganizationAdminAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateFromAdministratorAccountOutcome GuardDutyClient::DisassociateFromAdministratorAccount(const DisassociateFromAdministratorAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateFromAdministratorAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateFromAdministratorAccount", "Required field: DetectorId, is not set");
    return DisassociateFromAdministratorAccountOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateFromAdministratorAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/administrator/disassociate");
  return DisassociateFromAdministratorAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateMembersOutcome GuardDutyClient::DisassociateMembers(const DisassociateMembersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateMembers", "Required field: DetectorId, is not set");
    return DisassociateMembersOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/member/disassociate");
  return DisassociateMembersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EnableOrganizationAdminAccountOutcome GuardDutyClient::EnableOrganizationAdminAccount(const EnableOrganizationAdminAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EnableOrganizationAdminAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EnableOrganizationAdminAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/admin/enable");
  return EnableOrganizationAdminAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetAdministratorAccountOutcome GuardDutyClient::GetAdministratorAccount(const GetAdministratorAccountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAdministratorAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAdministratorAccount", "Required field: DetectorId, is not set");
    return GetAdministratorAccountOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAdministratorAccount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/administrator");
  return GetAdministratorAccountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCoverageStatisticsOutcome GuardDutyClient::GetCoverageStatistics(const GetCoverageStatisticsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetCoverageStatistics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCoverageStatistics", "Required field: DetectorId, is not set");
    return GetCoverageStatisticsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetCoverageStatistics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/coverage/statistics");
  return GetCoverageStatisticsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDetectorOutcome GuardDutyClient::GetDetector(const GetDetectorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDetector", "Required field: DetectorId, is not set");
    return GetDetectorOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  return GetDetectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetFilterOutcome GuardDutyClient::GetFilter(const GetFilterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/filter/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFilterName());
  return GetFilterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetFindingsOutcome GuardDutyClient::GetFindings(const GetFindingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFindings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFindings", "Required field: DetectorId, is not set");
    return GetFindingsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFindings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/findings/get");
  return GetFindingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetFindingsStatisticsOutcome GuardDutyClient::GetFindingsStatistics(const GetFindingsStatisticsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFindingsStatistics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFindingsStatistics", "Required field: DetectorId, is not set");
    return GetFindingsStatisticsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFindingsStatistics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/findings/statistics");
  return GetFindingsStatisticsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetIPSetOutcome GuardDutyClient::GetIPSet(const GetIPSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetIPSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetIPSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ipset/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIpSetId());
  return GetIPSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetInvitationsCountOutcome GuardDutyClient::GetInvitationsCount(const GetInvitationsCountRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetInvitationsCount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetInvitationsCount, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/invitation/count");
  return GetInvitationsCountOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetMalwareScanSettingsOutcome GuardDutyClient::GetMalwareScanSettings(const GetMalwareScanSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMalwareScanSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMalwareScanSettings", "Required field: DetectorId, is not set");
    return GetMalwareScanSettingsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMalwareScanSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/malware-scan-settings");
  return GetMalwareScanSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetMemberDetectorsOutcome GuardDutyClient::GetMemberDetectors(const GetMemberDetectorsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMemberDetectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMemberDetectors", "Required field: DetectorId, is not set");
    return GetMemberDetectorsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMemberDetectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/member/detector/get");
  return GetMemberDetectorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMembersOutcome GuardDutyClient::GetMembers(const GetMembersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMembers", "Required field: DetectorId, is not set");
    return GetMembersOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/member/get");
  return GetMembersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRemainingFreeTrialDaysOutcome GuardDutyClient::GetRemainingFreeTrialDays(const GetRemainingFreeTrialDaysRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRemainingFreeTrialDays, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRemainingFreeTrialDays", "Required field: DetectorId, is not set");
    return GetRemainingFreeTrialDaysOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRemainingFreeTrialDays, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/freeTrial/daysRemaining");
  return GetRemainingFreeTrialDaysOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetThreatIntelSetOutcome GuardDutyClient::GetThreatIntelSet(const GetThreatIntelSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetThreatIntelSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetThreatIntelSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/threatintelset/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThreatIntelSetId());
  return GetThreatIntelSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetUsageStatisticsOutcome GuardDutyClient::GetUsageStatistics(const GetUsageStatisticsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetUsageStatistics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUsageStatistics", "Required field: DetectorId, is not set");
    return GetUsageStatisticsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetUsageStatistics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/usage/statistics");
  return GetUsageStatisticsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

InviteMembersOutcome GuardDutyClient::InviteMembers(const InviteMembersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InviteMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InviteMembers", "Required field: DetectorId, is not set");
    return InviteMembersOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, InviteMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/member/invite");
  return InviteMembersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListCoverageOutcome GuardDutyClient::ListCoverage(const ListCoverageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCoverage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListCoverage", "Required field: DetectorId, is not set");
    return ListCoverageOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCoverage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/coverage");
  return ListCoverageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDetectorsOutcome GuardDutyClient::ListDetectors(const ListDetectorsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDetectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDetectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector");
  return ListDetectorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListFiltersOutcome GuardDutyClient::ListFilters(const ListFiltersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFilters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFilters", "Required field: DetectorId, is not set");
    return ListFiltersOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFilters, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/filter");
  return ListFiltersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListFindingsOutcome GuardDutyClient::ListFindings(const ListFindingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFindings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFindings", "Required field: DetectorId, is not set");
    return ListFindingsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFindings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/findings");
  return ListFindingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListIPSetsOutcome GuardDutyClient::ListIPSets(const ListIPSetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIPSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIPSets", "Required field: DetectorId, is not set");
    return ListIPSetsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListIPSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ipset");
  return ListIPSetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListInvitationsOutcome GuardDutyClient::ListInvitations(const ListInvitationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListInvitations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListInvitations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/invitation");
  return ListInvitationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListMembersOutcome GuardDutyClient::ListMembers(const ListMembersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMembers", "Required field: DetectorId, is not set");
    return ListMembersOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/member");
  return ListMembersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListOrganizationAdminAccountsOutcome GuardDutyClient::ListOrganizationAdminAccounts(const ListOrganizationAdminAccountsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListOrganizationAdminAccounts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListOrganizationAdminAccounts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/admin");
  return ListOrganizationAdminAccountsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListPublishingDestinationsOutcome GuardDutyClient::ListPublishingDestinations(const ListPublishingDestinationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPublishingDestinations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListPublishingDestinations", "Required field: DetectorId, is not set");
    return ListPublishingDestinationsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPublishingDestinations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/publishingDestination");
  return ListPublishingDestinationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome GuardDutyClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListThreatIntelSetsOutcome GuardDutyClient::ListThreatIntelSets(const ListThreatIntelSetsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListThreatIntelSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListThreatIntelSets", "Required field: DetectorId, is not set");
    return ListThreatIntelSetsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListThreatIntelSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/threatintelset");
  return ListThreatIntelSetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

StartMalwareScanOutcome GuardDutyClient::StartMalwareScan(const StartMalwareScanRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartMalwareScan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartMalwareScan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/malware-scan/start");
  return StartMalwareScanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartMonitoringMembersOutcome GuardDutyClient::StartMonitoringMembers(const StartMonitoringMembersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartMonitoringMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartMonitoringMembers", "Required field: DetectorId, is not set");
    return StartMonitoringMembersOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartMonitoringMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/member/start");
  return StartMonitoringMembersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopMonitoringMembersOutcome GuardDutyClient::StopMonitoringMembers(const StopMonitoringMembersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopMonitoringMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopMonitoringMembers", "Required field: DetectorId, is not set");
    return StopMonitoringMembersOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopMonitoringMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/member/stop");
  return StopMonitoringMembersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome GuardDutyClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UnarchiveFindingsOutcome GuardDutyClient::UnarchiveFindings(const UnarchiveFindingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UnarchiveFindings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UnarchiveFindings", "Required field: DetectorId, is not set");
    return UnarchiveFindingsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UnarchiveFindings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/findings/unarchive");
  return UnarchiveFindingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome GuardDutyClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UpdateDetectorOutcome GuardDutyClient::UpdateDetector(const UpdateDetectorRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDetector", "Required field: DetectorId, is not set");
    return UpdateDetectorOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDetector, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  return UpdateDetectorOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateFilterOutcome GuardDutyClient::UpdateFilter(const UpdateFilterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/filter/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFilterName());
  return UpdateFilterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateFindingsFeedbackOutcome GuardDutyClient::UpdateFindingsFeedback(const UpdateFindingsFeedbackRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFindingsFeedback, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFindingsFeedback", "Required field: DetectorId, is not set");
    return UpdateFindingsFeedbackOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFindingsFeedback, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/findings/feedback");
  return UpdateFindingsFeedbackOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateIPSetOutcome GuardDutyClient::UpdateIPSet(const UpdateIPSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateIPSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateIPSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ipset/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIpSetId());
  return UpdateIPSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateMalwareScanSettingsOutcome GuardDutyClient::UpdateMalwareScanSettings(const UpdateMalwareScanSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMalwareScanSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMalwareScanSettings", "Required field: DetectorId, is not set");
    return UpdateMalwareScanSettingsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateMalwareScanSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/malware-scan-settings");
  return UpdateMalwareScanSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateMemberDetectorsOutcome GuardDutyClient::UpdateMemberDetectors(const UpdateMemberDetectorsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMemberDetectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMemberDetectors", "Required field: DetectorId, is not set");
    return UpdateMemberDetectorsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateMemberDetectors, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/member/detector/update");
  return UpdateMemberDetectorsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateOrganizationConfigurationOutcome GuardDutyClient::UpdateOrganizationConfiguration(const UpdateOrganizationConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateOrganizationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DetectorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateOrganizationConfiguration", "Required field: DetectorId, is not set");
    return UpdateOrganizationConfigurationOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateOrganizationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/admin");
  return UpdateOrganizationConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePublishingDestinationOutcome GuardDutyClient::UpdatePublishingDestination(const UpdatePublishingDestinationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePublishingDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePublishingDestination, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/publishingDestination/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDestinationId());
  return UpdatePublishingDestinationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateThreatIntelSetOutcome GuardDutyClient::UpdateThreatIntelSet(const UpdateThreatIntelSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateThreatIntelSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateThreatIntelSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/threatintelset/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThreatIntelSetId());
  return UpdateThreatIntelSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

