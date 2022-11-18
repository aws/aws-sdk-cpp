/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
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

#include <aws/groundstation/GroundStationClient.h>
#include <aws/groundstation/GroundStationErrorMarshaller.h>
#include <aws/groundstation/GroundStationEndpointProvider.h>
#include <aws/groundstation/model/CancelContactRequest.h>
#include <aws/groundstation/model/CreateConfigRequest.h>
#include <aws/groundstation/model/CreateDataflowEndpointGroupRequest.h>
#include <aws/groundstation/model/CreateEphemerisRequest.h>
#include <aws/groundstation/model/CreateMissionProfileRequest.h>
#include <aws/groundstation/model/DeleteConfigRequest.h>
#include <aws/groundstation/model/DeleteDataflowEndpointGroupRequest.h>
#include <aws/groundstation/model/DeleteEphemerisRequest.h>
#include <aws/groundstation/model/DeleteMissionProfileRequest.h>
#include <aws/groundstation/model/DescribeContactRequest.h>
#include <aws/groundstation/model/DescribeEphemerisRequest.h>
#include <aws/groundstation/model/GetConfigRequest.h>
#include <aws/groundstation/model/GetDataflowEndpointGroupRequest.h>
#include <aws/groundstation/model/GetMinuteUsageRequest.h>
#include <aws/groundstation/model/GetMissionProfileRequest.h>
#include <aws/groundstation/model/GetSatelliteRequest.h>
#include <aws/groundstation/model/ListConfigsRequest.h>
#include <aws/groundstation/model/ListContactsRequest.h>
#include <aws/groundstation/model/ListDataflowEndpointGroupsRequest.h>
#include <aws/groundstation/model/ListEphemeridesRequest.h>
#include <aws/groundstation/model/ListGroundStationsRequest.h>
#include <aws/groundstation/model/ListMissionProfilesRequest.h>
#include <aws/groundstation/model/ListSatellitesRequest.h>
#include <aws/groundstation/model/ListTagsForResourceRequest.h>
#include <aws/groundstation/model/ReserveContactRequest.h>
#include <aws/groundstation/model/TagResourceRequest.h>
#include <aws/groundstation/model/UntagResourceRequest.h>
#include <aws/groundstation/model/UpdateConfigRequest.h>
#include <aws/groundstation/model/UpdateEphemerisRequest.h>
#include <aws/groundstation/model/UpdateMissionProfileRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::GroundStation;
using namespace Aws::GroundStation::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* GroundStationClient::SERVICE_NAME = "groundstation";
const char* GroundStationClient::ALLOCATION_TAG = "GroundStationClient";

GroundStationClient::GroundStationClient(const GroundStation::GroundStationClientConfiguration& clientConfiguration,
                                         std::shared_ptr<GroundStationEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GroundStationErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

GroundStationClient::GroundStationClient(const AWSCredentials& credentials,
                                         std::shared_ptr<GroundStationEndpointProviderBase> endpointProvider,
                                         const GroundStation::GroundStationClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GroundStationErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

GroundStationClient::GroundStationClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<GroundStationEndpointProviderBase> endpointProvider,
                                         const GroundStation::GroundStationClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GroundStationErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  GroundStationClient::GroundStationClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GroundStationErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<GroundStationEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

GroundStationClient::GroundStationClient(const AWSCredentials& credentials,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GroundStationErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<GroundStationEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

GroundStationClient::GroundStationClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GroundStationErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<GroundStationEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
GroundStationClient::~GroundStationClient()
{
}

std::shared_ptr<GroundStationEndpointProviderBase>& GroundStationClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void GroundStationClient::init(const GroundStation::GroundStationClientConfiguration& config)
{
  AWSClient::SetServiceClientName("GroundStation");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void GroundStationClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CancelContactOutcome GroundStationClient::CancelContact(const CancelContactRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ContactIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelContact", "Required field: ContactId, is not set");
    return CancelContactOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContactId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactId());
  return CancelContactOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

CancelContactOutcomeCallable GroundStationClient::CancelContactCallable(const CancelContactRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CancelContact, request, m_executor.get());
}

void GroundStationClient::CancelContactAsync(const CancelContactRequest& request, const CancelContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CancelContact, request, handler, context, m_executor.get());
}

CreateConfigOutcome GroundStationClient::CreateConfig(const CreateConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  return CreateConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateConfigOutcomeCallable GroundStationClient::CreateConfigCallable(const CreateConfigRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateConfig, request, m_executor.get());
}

void GroundStationClient::CreateConfigAsync(const CreateConfigRequest& request, const CreateConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateConfig, request, handler, context, m_executor.get());
}

CreateDataflowEndpointGroupOutcome GroundStationClient::CreateDataflowEndpointGroup(const CreateDataflowEndpointGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDataflowEndpointGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDataflowEndpointGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/dataflowEndpointGroup");
  return CreateDataflowEndpointGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDataflowEndpointGroupOutcomeCallable GroundStationClient::CreateDataflowEndpointGroupCallable(const CreateDataflowEndpointGroupRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateDataflowEndpointGroup, request, m_executor.get());
}

void GroundStationClient::CreateDataflowEndpointGroupAsync(const CreateDataflowEndpointGroupRequest& request, const CreateDataflowEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateDataflowEndpointGroup, request, handler, context, m_executor.get());
}

CreateEphemerisOutcome GroundStationClient::CreateEphemeris(const CreateEphemerisRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateEphemeris, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateEphemeris, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ephemeris");
  return CreateEphemerisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEphemerisOutcomeCallable GroundStationClient::CreateEphemerisCallable(const CreateEphemerisRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateEphemeris, request, m_executor.get());
}

void GroundStationClient::CreateEphemerisAsync(const CreateEphemerisRequest& request, const CreateEphemerisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateEphemeris, request, handler, context, m_executor.get());
}

CreateMissionProfileOutcome GroundStationClient::CreateMissionProfile(const CreateMissionProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateMissionProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateMissionProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/missionprofile");
  return CreateMissionProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateMissionProfileOutcomeCallable GroundStationClient::CreateMissionProfileCallable(const CreateMissionProfileRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(CreateMissionProfile, request, m_executor.get());
}

void GroundStationClient::CreateMissionProfileAsync(const CreateMissionProfileRequest& request, const CreateMissionProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(CreateMissionProfile, request, handler, context, m_executor.get());
}

DeleteConfigOutcome GroundStationClient::DeleteConfig(const DeleteConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfigIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfig", "Required field: ConfigId, is not set");
    return DeleteConfigOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigId]", false));
  }
  if (!request.ConfigTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteConfig", "Required field: ConfigType, is not set");
    return DeleteConfigOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigType]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/config/");
  endpointResolutionOutcome.GetResult().AddPathSegment(ConfigCapabilityTypeMapper::GetNameForConfigCapabilityType(request.GetConfigType()));
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigId());
  return DeleteConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteConfigOutcomeCallable GroundStationClient::DeleteConfigCallable(const DeleteConfigRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteConfig, request, m_executor.get());
}

void GroundStationClient::DeleteConfigAsync(const DeleteConfigRequest& request, const DeleteConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteConfig, request, handler, context, m_executor.get());
}

DeleteDataflowEndpointGroupOutcome GroundStationClient::DeleteDataflowEndpointGroup(const DeleteDataflowEndpointGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDataflowEndpointGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DataflowEndpointGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataflowEndpointGroup", "Required field: DataflowEndpointGroupId, is not set");
    return DeleteDataflowEndpointGroupOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataflowEndpointGroupId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDataflowEndpointGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/dataflowEndpointGroup/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataflowEndpointGroupId());
  return DeleteDataflowEndpointGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDataflowEndpointGroupOutcomeCallable GroundStationClient::DeleteDataflowEndpointGroupCallable(const DeleteDataflowEndpointGroupRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteDataflowEndpointGroup, request, m_executor.get());
}

void GroundStationClient::DeleteDataflowEndpointGroupAsync(const DeleteDataflowEndpointGroupRequest& request, const DeleteDataflowEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteDataflowEndpointGroup, request, handler, context, m_executor.get());
}

DeleteEphemerisOutcome GroundStationClient::DeleteEphemeris(const DeleteEphemerisRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteEphemeris, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EphemerisIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEphemeris", "Required field: EphemerisId, is not set");
    return DeleteEphemerisOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EphemerisId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteEphemeris, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ephemeris/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEphemerisId());
  return DeleteEphemerisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteEphemerisOutcomeCallable GroundStationClient::DeleteEphemerisCallable(const DeleteEphemerisRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteEphemeris, request, m_executor.get());
}

void GroundStationClient::DeleteEphemerisAsync(const DeleteEphemerisRequest& request, const DeleteEphemerisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteEphemeris, request, handler, context, m_executor.get());
}

DeleteMissionProfileOutcome GroundStationClient::DeleteMissionProfile(const DeleteMissionProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteMissionProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MissionProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMissionProfile", "Required field: MissionProfileId, is not set");
    return DeleteMissionProfileOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MissionProfileId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteMissionProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/missionprofile/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMissionProfileId());
  return DeleteMissionProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteMissionProfileOutcomeCallable GroundStationClient::DeleteMissionProfileCallable(const DeleteMissionProfileRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DeleteMissionProfile, request, m_executor.get());
}

void GroundStationClient::DeleteMissionProfileAsync(const DeleteMissionProfileRequest& request, const DeleteMissionProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DeleteMissionProfile, request, handler, context, m_executor.get());
}

DescribeContactOutcome GroundStationClient::DescribeContact(const DescribeContactRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ContactIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeContact", "Required field: ContactId, is not set");
    return DescribeContactOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContactId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactId());
  return DescribeContactOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeContactOutcomeCallable GroundStationClient::DescribeContactCallable(const DescribeContactRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DescribeContact, request, m_executor.get());
}

void GroundStationClient::DescribeContactAsync(const DescribeContactRequest& request, const DescribeContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DescribeContact, request, handler, context, m_executor.get());
}

DescribeEphemerisOutcome GroundStationClient::DescribeEphemeris(const DescribeEphemerisRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeEphemeris, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EphemerisIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeEphemeris", "Required field: EphemerisId, is not set");
    return DescribeEphemerisOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EphemerisId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeEphemeris, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ephemeris/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEphemerisId());
  return DescribeEphemerisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeEphemerisOutcomeCallable GroundStationClient::DescribeEphemerisCallable(const DescribeEphemerisRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(DescribeEphemeris, request, m_executor.get());
}

void GroundStationClient::DescribeEphemerisAsync(const DescribeEphemerisRequest& request, const DescribeEphemerisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(DescribeEphemeris, request, handler, context, m_executor.get());
}

GetConfigOutcome GroundStationClient::GetConfig(const GetConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfigIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConfig", "Required field: ConfigId, is not set");
    return GetConfigOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigId]", false));
  }
  if (!request.ConfigTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetConfig", "Required field: ConfigType, is not set");
    return GetConfigOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigType]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/config/");
  endpointResolutionOutcome.GetResult().AddPathSegment(ConfigCapabilityTypeMapper::GetNameForConfigCapabilityType(request.GetConfigType()));
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigId());
  return GetConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetConfigOutcomeCallable GroundStationClient::GetConfigCallable(const GetConfigRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetConfig, request, m_executor.get());
}

void GroundStationClient::GetConfigAsync(const GetConfigRequest& request, const GetConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetConfig, request, handler, context, m_executor.get());
}

GetDataflowEndpointGroupOutcome GroundStationClient::GetDataflowEndpointGroup(const GetDataflowEndpointGroupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDataflowEndpointGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DataflowEndpointGroupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDataflowEndpointGroup", "Required field: DataflowEndpointGroupId, is not set");
    return GetDataflowEndpointGroupOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataflowEndpointGroupId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDataflowEndpointGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/dataflowEndpointGroup/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataflowEndpointGroupId());
  return GetDataflowEndpointGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDataflowEndpointGroupOutcomeCallable GroundStationClient::GetDataflowEndpointGroupCallable(const GetDataflowEndpointGroupRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetDataflowEndpointGroup, request, m_executor.get());
}

void GroundStationClient::GetDataflowEndpointGroupAsync(const GetDataflowEndpointGroupRequest& request, const GetDataflowEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetDataflowEndpointGroup, request, handler, context, m_executor.get());
}

GetMinuteUsageOutcome GroundStationClient::GetMinuteUsage(const GetMinuteUsageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMinuteUsage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMinuteUsage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/minute-usage");
  return GetMinuteUsageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMinuteUsageOutcomeCallable GroundStationClient::GetMinuteUsageCallable(const GetMinuteUsageRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetMinuteUsage, request, m_executor.get());
}

void GroundStationClient::GetMinuteUsageAsync(const GetMinuteUsageRequest& request, const GetMinuteUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetMinuteUsage, request, handler, context, m_executor.get());
}

GetMissionProfileOutcome GroundStationClient::GetMissionProfile(const GetMissionProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMissionProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MissionProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMissionProfile", "Required field: MissionProfileId, is not set");
    return GetMissionProfileOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MissionProfileId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMissionProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/missionprofile/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMissionProfileId());
  return GetMissionProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetMissionProfileOutcomeCallable GroundStationClient::GetMissionProfileCallable(const GetMissionProfileRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetMissionProfile, request, m_executor.get());
}

void GroundStationClient::GetMissionProfileAsync(const GetMissionProfileRequest& request, const GetMissionProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetMissionProfile, request, handler, context, m_executor.get());
}

GetSatelliteOutcome GroundStationClient::GetSatellite(const GetSatelliteRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSatellite, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SatelliteIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSatellite", "Required field: SatelliteId, is not set");
    return GetSatelliteOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SatelliteId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSatellite, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/satellite/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSatelliteId());
  return GetSatelliteOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSatelliteOutcomeCallable GroundStationClient::GetSatelliteCallable(const GetSatelliteRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(GetSatellite, request, m_executor.get());
}

void GroundStationClient::GetSatelliteAsync(const GetSatelliteRequest& request, const GetSatelliteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(GetSatellite, request, handler, context, m_executor.get());
}

ListConfigsOutcome GroundStationClient::ListConfigs(const ListConfigsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListConfigs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListConfigs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  return ListConfigsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListConfigsOutcomeCallable GroundStationClient::ListConfigsCallable(const ListConfigsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListConfigs, request, m_executor.get());
}

void GroundStationClient::ListConfigsAsync(const ListConfigsRequest& request, const ListConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListConfigs, request, handler, context, m_executor.get());
}

ListContactsOutcome GroundStationClient::ListContacts(const ListContactsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListContacts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListContacts, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contacts");
  return ListContactsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListContactsOutcomeCallable GroundStationClient::ListContactsCallable(const ListContactsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListContacts, request, m_executor.get());
}

void GroundStationClient::ListContactsAsync(const ListContactsRequest& request, const ListContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListContacts, request, handler, context, m_executor.get());
}

ListDataflowEndpointGroupsOutcome GroundStationClient::ListDataflowEndpointGroups(const ListDataflowEndpointGroupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDataflowEndpointGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDataflowEndpointGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/dataflowEndpointGroup");
  return ListDataflowEndpointGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDataflowEndpointGroupsOutcomeCallable GroundStationClient::ListDataflowEndpointGroupsCallable(const ListDataflowEndpointGroupsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListDataflowEndpointGroups, request, m_executor.get());
}

void GroundStationClient::ListDataflowEndpointGroupsAsync(const ListDataflowEndpointGroupsRequest& request, const ListDataflowEndpointGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListDataflowEndpointGroups, request, handler, context, m_executor.get());
}

ListEphemeridesOutcome GroundStationClient::ListEphemerides(const ListEphemeridesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEphemerides, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEphemerides, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ephemerides");
  return ListEphemeridesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEphemeridesOutcomeCallable GroundStationClient::ListEphemeridesCallable(const ListEphemeridesRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListEphemerides, request, m_executor.get());
}

void GroundStationClient::ListEphemeridesAsync(const ListEphemeridesRequest& request, const ListEphemeridesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListEphemerides, request, handler, context, m_executor.get());
}

ListGroundStationsOutcome GroundStationClient::ListGroundStations(const ListGroundStationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListGroundStations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListGroundStations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/groundstation");
  return ListGroundStationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListGroundStationsOutcomeCallable GroundStationClient::ListGroundStationsCallable(const ListGroundStationsRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListGroundStations, request, m_executor.get());
}

void GroundStationClient::ListGroundStationsAsync(const ListGroundStationsRequest& request, const ListGroundStationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListGroundStations, request, handler, context, m_executor.get());
}

ListMissionProfilesOutcome GroundStationClient::ListMissionProfiles(const ListMissionProfilesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListMissionProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListMissionProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/missionprofile");
  return ListMissionProfilesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListMissionProfilesOutcomeCallable GroundStationClient::ListMissionProfilesCallable(const ListMissionProfilesRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListMissionProfiles, request, m_executor.get());
}

void GroundStationClient::ListMissionProfilesAsync(const ListMissionProfilesRequest& request, const ListMissionProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListMissionProfiles, request, handler, context, m_executor.get());
}

ListSatellitesOutcome GroundStationClient::ListSatellites(const ListSatellitesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSatellites, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSatellites, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/satellite");
  return ListSatellitesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSatellitesOutcomeCallable GroundStationClient::ListSatellitesCallable(const ListSatellitesRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListSatellites, request, m_executor.get());
}

void GroundStationClient::ListSatellitesAsync(const ListSatellitesRequest& request, const ListSatellitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListSatellites, request, handler, context, m_executor.get());
}

ListTagsForResourceOutcome GroundStationClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable GroundStationClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ListTagsForResource, request, m_executor.get());
}

void GroundStationClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ListTagsForResource, request, handler, context, m_executor.get());
}

ReserveContactOutcome GroundStationClient::ReserveContact(const ReserveContactRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ReserveContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ReserveContact, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/contact");
  return ReserveContactOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ReserveContactOutcomeCallable GroundStationClient::ReserveContactCallable(const ReserveContactRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(ReserveContact, request, m_executor.get());
}

void GroundStationClient::ReserveContactAsync(const ReserveContactRequest& request, const ReserveContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(ReserveContact, request, handler, context, m_executor.get());
}

TagResourceOutcome GroundStationClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable GroundStationClient::TagResourceCallable(const TagResourceRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(TagResource, request, m_executor.get());
}

void GroundStationClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(TagResource, request, handler, context, m_executor.get());
}

UntagResourceOutcome GroundStationClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable GroundStationClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UntagResource, request, m_executor.get());
}

void GroundStationClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UntagResource, request, handler, context, m_executor.get());
}

UpdateConfigOutcome GroundStationClient::UpdateConfig(const UpdateConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfigIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConfig", "Required field: ConfigId, is not set");
    return UpdateConfigOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigId]", false));
  }
  if (!request.ConfigTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateConfig", "Required field: ConfigType, is not set");
    return UpdateConfigOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigType]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/config/");
  endpointResolutionOutcome.GetResult().AddPathSegment(ConfigCapabilityTypeMapper::GetNameForConfigCapabilityType(request.GetConfigType()));
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigId());
  return UpdateConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateConfigOutcomeCallable GroundStationClient::UpdateConfigCallable(const UpdateConfigRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateConfig, request, m_executor.get());
}

void GroundStationClient::UpdateConfigAsync(const UpdateConfigRequest& request, const UpdateConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateConfig, request, handler, context, m_executor.get());
}

UpdateEphemerisOutcome GroundStationClient::UpdateEphemeris(const UpdateEphemerisRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateEphemeris, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EphemerisIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEphemeris", "Required field: EphemerisId, is not set");
    return UpdateEphemerisOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EphemerisId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateEphemeris, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ephemeris/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEphemerisId());
  return UpdateEphemerisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateEphemerisOutcomeCallable GroundStationClient::UpdateEphemerisCallable(const UpdateEphemerisRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateEphemeris, request, m_executor.get());
}

void GroundStationClient::UpdateEphemerisAsync(const UpdateEphemerisRequest& request, const UpdateEphemerisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateEphemeris, request, handler, context, m_executor.get());
}

UpdateMissionProfileOutcome GroundStationClient::UpdateMissionProfile(const UpdateMissionProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateMissionProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.MissionProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMissionProfile", "Required field: MissionProfileId, is not set");
    return UpdateMissionProfileOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MissionProfileId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateMissionProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/missionprofile/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMissionProfileId());
  return UpdateMissionProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateMissionProfileOutcomeCallable GroundStationClient::UpdateMissionProfileCallable(const UpdateMissionProfileRequest& request) const
{
  AWS_MAKE_CALLABLE_OPERATION(UpdateMissionProfile, request, m_executor.get());
}

void GroundStationClient::UpdateMissionProfileAsync(const UpdateMissionProfileRequest& request, const UpdateMissionProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  AWS_MAKE_ASYNC_OPERATION(UpdateMissionProfile, request, handler, context, m_executor.get());
}

