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
  auto task = Aws::MakeShared< std::packaged_task< CancelContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::CancelContactAsync(const CancelContactRequest& request, const CancelContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelContact(request), context);
    } );
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
  auto task = Aws::MakeShared< std::packaged_task< CreateConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::CreateConfigAsync(const CreateConfigRequest& request, const CreateConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateConfig(request), context);
    } );
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
  auto task = Aws::MakeShared< std::packaged_task< CreateDataflowEndpointGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataflowEndpointGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::CreateDataflowEndpointGroupAsync(const CreateDataflowEndpointGroupRequest& request, const CreateDataflowEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDataflowEndpointGroup(request), context);
    } );
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
  auto task = Aws::MakeShared< std::packaged_task< CreateEphemerisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEphemeris(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::CreateEphemerisAsync(const CreateEphemerisRequest& request, const CreateEphemerisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateEphemeris(request), context);
    } );
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
  auto task = Aws::MakeShared< std::packaged_task< CreateMissionProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMissionProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::CreateMissionProfileAsync(const CreateMissionProfileRequest& request, const CreateMissionProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateMissionProfile(request), context);
    } );
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
  auto task = Aws::MakeShared< std::packaged_task< DeleteConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::DeleteConfigAsync(const DeleteConfigRequest& request, const DeleteConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteConfig(request), context);
    } );
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
  auto task = Aws::MakeShared< std::packaged_task< DeleteDataflowEndpointGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDataflowEndpointGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::DeleteDataflowEndpointGroupAsync(const DeleteDataflowEndpointGroupRequest& request, const DeleteDataflowEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDataflowEndpointGroup(request), context);
    } );
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
  auto task = Aws::MakeShared< std::packaged_task< DeleteEphemerisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEphemeris(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::DeleteEphemerisAsync(const DeleteEphemerisRequest& request, const DeleteEphemerisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEphemeris(request), context);
    } );
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
  auto task = Aws::MakeShared< std::packaged_task< DeleteMissionProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMissionProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::DeleteMissionProfileAsync(const DeleteMissionProfileRequest& request, const DeleteMissionProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteMissionProfile(request), context);
    } );
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
  auto task = Aws::MakeShared< std::packaged_task< DescribeContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::DescribeContactAsync(const DescribeContactRequest& request, const DescribeContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeContact(request), context);
    } );
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
  auto task = Aws::MakeShared< std::packaged_task< DescribeEphemerisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEphemeris(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::DescribeEphemerisAsync(const DescribeEphemerisRequest& request, const DescribeEphemerisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEphemeris(request), context);
    } );
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
  auto task = Aws::MakeShared< std::packaged_task< GetConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::GetConfigAsync(const GetConfigRequest& request, const GetConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetConfig(request), context);
    } );
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
  auto task = Aws::MakeShared< std::packaged_task< GetDataflowEndpointGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDataflowEndpointGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::GetDataflowEndpointGroupAsync(const GetDataflowEndpointGroupRequest& request, const GetDataflowEndpointGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDataflowEndpointGroup(request), context);
    } );
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
  auto task = Aws::MakeShared< std::packaged_task< GetMinuteUsageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMinuteUsage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::GetMinuteUsageAsync(const GetMinuteUsageRequest& request, const GetMinuteUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetMinuteUsage(request), context);
    } );
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
  auto task = Aws::MakeShared< std::packaged_task< GetMissionProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMissionProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::GetMissionProfileAsync(const GetMissionProfileRequest& request, const GetMissionProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetMissionProfile(request), context);
    } );
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
  auto task = Aws::MakeShared< std::packaged_task< GetSatelliteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSatellite(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::GetSatelliteAsync(const GetSatelliteRequest& request, const GetSatelliteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSatellite(request), context);
    } );
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
  auto task = Aws::MakeShared< std::packaged_task< ListConfigsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListConfigs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::ListConfigsAsync(const ListConfigsRequest& request, const ListConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListConfigs(request), context);
    } );
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
  auto task = Aws::MakeShared< std::packaged_task< ListContactsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListContacts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::ListContactsAsync(const ListContactsRequest& request, const ListContactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListContacts(request), context);
    } );
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
  auto task = Aws::MakeShared< std::packaged_task< ListDataflowEndpointGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDataflowEndpointGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::ListDataflowEndpointGroupsAsync(const ListDataflowEndpointGroupsRequest& request, const ListDataflowEndpointGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDataflowEndpointGroups(request), context);
    } );
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
  auto task = Aws::MakeShared< std::packaged_task< ListEphemeridesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEphemerides(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::ListEphemeridesAsync(const ListEphemeridesRequest& request, const ListEphemeridesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListEphemerides(request), context);
    } );
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
  auto task = Aws::MakeShared< std::packaged_task< ListGroundStationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGroundStations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::ListGroundStationsAsync(const ListGroundStationsRequest& request, const ListGroundStationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListGroundStations(request), context);
    } );
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
  auto task = Aws::MakeShared< std::packaged_task< ListMissionProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMissionProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::ListMissionProfilesAsync(const ListMissionProfilesRequest& request, const ListMissionProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListMissionProfiles(request), context);
    } );
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
  auto task = Aws::MakeShared< std::packaged_task< ListSatellitesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSatellites(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::ListSatellitesAsync(const ListSatellitesRequest& request, const ListSatellitesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSatellites(request), context);
    } );
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
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
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
  auto task = Aws::MakeShared< std::packaged_task< ReserveContactOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReserveContact(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::ReserveContactAsync(const ReserveContactRequest& request, const ReserveContactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ReserveContact(request), context);
    } );
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
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
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
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
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
  auto task = Aws::MakeShared< std::packaged_task< UpdateConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::UpdateConfigAsync(const UpdateConfigRequest& request, const UpdateConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateConfig(request), context);
    } );
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
  auto task = Aws::MakeShared< std::packaged_task< UpdateEphemerisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEphemeris(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::UpdateEphemerisAsync(const UpdateEphemerisRequest& request, const UpdateEphemerisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateEphemeris(request), context);
    } );
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
  auto task = Aws::MakeShared< std::packaged_task< UpdateMissionProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMissionProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GroundStationClient::UpdateMissionProfileAsync(const UpdateMissionProfileRequest& request, const UpdateMissionProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateMissionProfile(request), context);
    } );
}

