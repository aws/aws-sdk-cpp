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

#include <aws/nimble/NimbleStudioClient.h>
#include <aws/nimble/NimbleStudioErrorMarshaller.h>
#include <aws/nimble/NimbleStudioEndpointProvider.h>
#include <aws/nimble/model/AcceptEulasRequest.h>
#include <aws/nimble/model/CreateLaunchProfileRequest.h>
#include <aws/nimble/model/CreateStreamingImageRequest.h>
#include <aws/nimble/model/CreateStreamingSessionRequest.h>
#include <aws/nimble/model/CreateStreamingSessionStreamRequest.h>
#include <aws/nimble/model/CreateStudioRequest.h>
#include <aws/nimble/model/CreateStudioComponentRequest.h>
#include <aws/nimble/model/DeleteLaunchProfileRequest.h>
#include <aws/nimble/model/DeleteLaunchProfileMemberRequest.h>
#include <aws/nimble/model/DeleteStreamingImageRequest.h>
#include <aws/nimble/model/DeleteStreamingSessionRequest.h>
#include <aws/nimble/model/DeleteStudioRequest.h>
#include <aws/nimble/model/DeleteStudioComponentRequest.h>
#include <aws/nimble/model/DeleteStudioMemberRequest.h>
#include <aws/nimble/model/GetEulaRequest.h>
#include <aws/nimble/model/GetLaunchProfileRequest.h>
#include <aws/nimble/model/GetLaunchProfileDetailsRequest.h>
#include <aws/nimble/model/GetLaunchProfileInitializationRequest.h>
#include <aws/nimble/model/GetLaunchProfileMemberRequest.h>
#include <aws/nimble/model/GetStreamingImageRequest.h>
#include <aws/nimble/model/GetStreamingSessionRequest.h>
#include <aws/nimble/model/GetStreamingSessionBackupRequest.h>
#include <aws/nimble/model/GetStreamingSessionStreamRequest.h>
#include <aws/nimble/model/GetStudioRequest.h>
#include <aws/nimble/model/GetStudioComponentRequest.h>
#include <aws/nimble/model/GetStudioMemberRequest.h>
#include <aws/nimble/model/ListEulaAcceptancesRequest.h>
#include <aws/nimble/model/ListEulasRequest.h>
#include <aws/nimble/model/ListLaunchProfileMembersRequest.h>
#include <aws/nimble/model/ListLaunchProfilesRequest.h>
#include <aws/nimble/model/ListStreamingImagesRequest.h>
#include <aws/nimble/model/ListStreamingSessionBackupsRequest.h>
#include <aws/nimble/model/ListStreamingSessionsRequest.h>
#include <aws/nimble/model/ListStudioComponentsRequest.h>
#include <aws/nimble/model/ListStudioMembersRequest.h>
#include <aws/nimble/model/ListStudiosRequest.h>
#include <aws/nimble/model/ListTagsForResourceRequest.h>
#include <aws/nimble/model/PutLaunchProfileMembersRequest.h>
#include <aws/nimble/model/PutStudioMembersRequest.h>
#include <aws/nimble/model/StartStreamingSessionRequest.h>
#include <aws/nimble/model/StartStudioSSOConfigurationRepairRequest.h>
#include <aws/nimble/model/StopStreamingSessionRequest.h>
#include <aws/nimble/model/TagResourceRequest.h>
#include <aws/nimble/model/UntagResourceRequest.h>
#include <aws/nimble/model/UpdateLaunchProfileRequest.h>
#include <aws/nimble/model/UpdateLaunchProfileMemberRequest.h>
#include <aws/nimble/model/UpdateStreamingImageRequest.h>
#include <aws/nimble/model/UpdateStudioRequest.h>
#include <aws/nimble/model/UpdateStudioComponentRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::NimbleStudio;
using namespace Aws::NimbleStudio::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* NimbleStudioClient::SERVICE_NAME = "nimble";
const char* NimbleStudioClient::ALLOCATION_TAG = "NimbleStudioClient";

NimbleStudioClient::NimbleStudioClient(const NimbleStudio::NimbleStudioClientConfiguration& clientConfiguration,
                                       std::shared_ptr<NimbleStudioEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<NimbleStudioErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

NimbleStudioClient::NimbleStudioClient(const AWSCredentials& credentials,
                                       std::shared_ptr<NimbleStudioEndpointProviderBase> endpointProvider,
                                       const NimbleStudio::NimbleStudioClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<NimbleStudioErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

NimbleStudioClient::NimbleStudioClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<NimbleStudioEndpointProviderBase> endpointProvider,
                                       const NimbleStudio::NimbleStudioClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<NimbleStudioErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  NimbleStudioClient::NimbleStudioClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<NimbleStudioErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<NimbleStudioEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

NimbleStudioClient::NimbleStudioClient(const AWSCredentials& credentials,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<NimbleStudioErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<NimbleStudioEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

NimbleStudioClient::NimbleStudioClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<NimbleStudioErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<NimbleStudioEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
NimbleStudioClient::~NimbleStudioClient()
{
}

std::shared_ptr<NimbleStudioEndpointProviderBase>& NimbleStudioClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void NimbleStudioClient::init(const NimbleStudio::NimbleStudioClientConfiguration& config)
{
  AWSClient::SetServiceClientName("nimble");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void NimbleStudioClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AcceptEulasOutcome NimbleStudioClient::AcceptEulas(const AcceptEulasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AcceptEulas, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AcceptEulas", "Required field: StudioId, is not set");
    return AcceptEulasOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AcceptEulas, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/eula-acceptances");
  return AcceptEulasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AcceptEulasOutcomeCallable NimbleStudioClient::AcceptEulasCallable(const AcceptEulasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcceptEulasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcceptEulas(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::AcceptEulasAsync(const AcceptEulasRequest& request, const AcceptEulasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AcceptEulas(request), context);
    } );
}

CreateLaunchProfileOutcome NimbleStudioClient::CreateLaunchProfile(const CreateLaunchProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLaunchProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateLaunchProfile", "Required field: StudioId, is not set");
    return CreateLaunchProfileOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLaunchProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/launch-profiles");
  return CreateLaunchProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLaunchProfileOutcomeCallable NimbleStudioClient::CreateLaunchProfileCallable(const CreateLaunchProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLaunchProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLaunchProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::CreateLaunchProfileAsync(const CreateLaunchProfileRequest& request, const CreateLaunchProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLaunchProfile(request), context);
    } );
}

CreateStreamingImageOutcome NimbleStudioClient::CreateStreamingImage(const CreateStreamingImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateStreamingImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateStreamingImage", "Required field: StudioId, is not set");
    return CreateStreamingImageOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateStreamingImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/streaming-images");
  return CreateStreamingImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateStreamingImageOutcomeCallable NimbleStudioClient::CreateStreamingImageCallable(const CreateStreamingImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStreamingImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStreamingImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::CreateStreamingImageAsync(const CreateStreamingImageRequest& request, const CreateStreamingImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateStreamingImage(request), context);
    } );
}

CreateStreamingSessionOutcome NimbleStudioClient::CreateStreamingSession(const CreateStreamingSessionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateStreamingSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateStreamingSession", "Required field: StudioId, is not set");
    return CreateStreamingSessionOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateStreamingSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/streaming-sessions");
  return CreateStreamingSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateStreamingSessionOutcomeCallable NimbleStudioClient::CreateStreamingSessionCallable(const CreateStreamingSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStreamingSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStreamingSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::CreateStreamingSessionAsync(const CreateStreamingSessionRequest& request, const CreateStreamingSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateStreamingSession(request), context);
    } );
}

CreateStreamingSessionStreamOutcome NimbleStudioClient::CreateStreamingSessionStream(const CreateStreamingSessionStreamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateStreamingSessionStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateStreamingSessionStream", "Required field: SessionId, is not set");
    return CreateStreamingSessionStreamOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateStreamingSessionStream", "Required field: StudioId, is not set");
    return CreateStreamingSessionStreamOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateStreamingSessionStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/streaming-sessions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/streams");
  return CreateStreamingSessionStreamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateStreamingSessionStreamOutcomeCallable NimbleStudioClient::CreateStreamingSessionStreamCallable(const CreateStreamingSessionStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStreamingSessionStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStreamingSessionStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::CreateStreamingSessionStreamAsync(const CreateStreamingSessionStreamRequest& request, const CreateStreamingSessionStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateStreamingSessionStream(request), context);
    } );
}

CreateStudioOutcome NimbleStudioClient::CreateStudio(const CreateStudioRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateStudio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateStudio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios");
  return CreateStudioOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateStudioOutcomeCallable NimbleStudioClient::CreateStudioCallable(const CreateStudioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStudioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStudio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::CreateStudioAsync(const CreateStudioRequest& request, const CreateStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateStudio(request), context);
    } );
}

CreateStudioComponentOutcome NimbleStudioClient::CreateStudioComponent(const CreateStudioComponentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateStudioComponent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateStudioComponent", "Required field: StudioId, is not set");
    return CreateStudioComponentOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateStudioComponent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/studio-components");
  return CreateStudioComponentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateStudioComponentOutcomeCallable NimbleStudioClient::CreateStudioComponentCallable(const CreateStudioComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStudioComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStudioComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::CreateStudioComponentAsync(const CreateStudioComponentRequest& request, const CreateStudioComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateStudioComponent(request), context);
    } );
}

DeleteLaunchProfileOutcome NimbleStudioClient::DeleteLaunchProfile(const DeleteLaunchProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLaunchProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LaunchProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteLaunchProfile", "Required field: LaunchProfileId, is not set");
    return DeleteLaunchProfileOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LaunchProfileId]", false));
  }
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteLaunchProfile", "Required field: StudioId, is not set");
    return DeleteLaunchProfileOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLaunchProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/launch-profiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLaunchProfileId());
  return DeleteLaunchProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteLaunchProfileOutcomeCallable NimbleStudioClient::DeleteLaunchProfileCallable(const DeleteLaunchProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLaunchProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLaunchProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::DeleteLaunchProfileAsync(const DeleteLaunchProfileRequest& request, const DeleteLaunchProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteLaunchProfile(request), context);
    } );
}

DeleteLaunchProfileMemberOutcome NimbleStudioClient::DeleteLaunchProfileMember(const DeleteLaunchProfileMemberRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLaunchProfileMember, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LaunchProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteLaunchProfileMember", "Required field: LaunchProfileId, is not set");
    return DeleteLaunchProfileMemberOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LaunchProfileId]", false));
  }
  if (!request.PrincipalIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteLaunchProfileMember", "Required field: PrincipalId, is not set");
    return DeleteLaunchProfileMemberOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PrincipalId]", false));
  }
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteLaunchProfileMember", "Required field: StudioId, is not set");
    return DeleteLaunchProfileMemberOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLaunchProfileMember, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/launch-profiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLaunchProfileId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/membership/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrincipalId());
  return DeleteLaunchProfileMemberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteLaunchProfileMemberOutcomeCallable NimbleStudioClient::DeleteLaunchProfileMemberCallable(const DeleteLaunchProfileMemberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLaunchProfileMemberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLaunchProfileMember(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::DeleteLaunchProfileMemberAsync(const DeleteLaunchProfileMemberRequest& request, const DeleteLaunchProfileMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteLaunchProfileMember(request), context);
    } );
}

DeleteStreamingImageOutcome NimbleStudioClient::DeleteStreamingImage(const DeleteStreamingImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteStreamingImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.StreamingImageIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteStreamingImage", "Required field: StreamingImageId, is not set");
    return DeleteStreamingImageOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StreamingImageId]", false));
  }
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteStreamingImage", "Required field: StudioId, is not set");
    return DeleteStreamingImageOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteStreamingImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/streaming-images/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStreamingImageId());
  return DeleteStreamingImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteStreamingImageOutcomeCallable NimbleStudioClient::DeleteStreamingImageCallable(const DeleteStreamingImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStreamingImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStreamingImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::DeleteStreamingImageAsync(const DeleteStreamingImageRequest& request, const DeleteStreamingImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteStreamingImage(request), context);
    } );
}

DeleteStreamingSessionOutcome NimbleStudioClient::DeleteStreamingSession(const DeleteStreamingSessionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteStreamingSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteStreamingSession", "Required field: SessionId, is not set");
    return DeleteStreamingSessionOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteStreamingSession", "Required field: StudioId, is not set");
    return DeleteStreamingSessionOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteStreamingSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/streaming-sessions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
  return DeleteStreamingSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteStreamingSessionOutcomeCallable NimbleStudioClient::DeleteStreamingSessionCallable(const DeleteStreamingSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStreamingSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStreamingSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::DeleteStreamingSessionAsync(const DeleteStreamingSessionRequest& request, const DeleteStreamingSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteStreamingSession(request), context);
    } );
}

DeleteStudioOutcome NimbleStudioClient::DeleteStudio(const DeleteStudioRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteStudio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteStudio", "Required field: StudioId, is not set");
    return DeleteStudioOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteStudio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  return DeleteStudioOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteStudioOutcomeCallable NimbleStudioClient::DeleteStudioCallable(const DeleteStudioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStudioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStudio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::DeleteStudioAsync(const DeleteStudioRequest& request, const DeleteStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteStudio(request), context);
    } );
}

DeleteStudioComponentOutcome NimbleStudioClient::DeleteStudioComponent(const DeleteStudioComponentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteStudioComponent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.StudioComponentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteStudioComponent", "Required field: StudioComponentId, is not set");
    return DeleteStudioComponentOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioComponentId]", false));
  }
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteStudioComponent", "Required field: StudioId, is not set");
    return DeleteStudioComponentOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteStudioComponent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/studio-components/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioComponentId());
  return DeleteStudioComponentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteStudioComponentOutcomeCallable NimbleStudioClient::DeleteStudioComponentCallable(const DeleteStudioComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStudioComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStudioComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::DeleteStudioComponentAsync(const DeleteStudioComponentRequest& request, const DeleteStudioComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteStudioComponent(request), context);
    } );
}

DeleteStudioMemberOutcome NimbleStudioClient::DeleteStudioMember(const DeleteStudioMemberRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteStudioMember, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PrincipalIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteStudioMember", "Required field: PrincipalId, is not set");
    return DeleteStudioMemberOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PrincipalId]", false));
  }
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteStudioMember", "Required field: StudioId, is not set");
    return DeleteStudioMemberOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteStudioMember, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/membership/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrincipalId());
  return DeleteStudioMemberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteStudioMemberOutcomeCallable NimbleStudioClient::DeleteStudioMemberCallable(const DeleteStudioMemberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStudioMemberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStudioMember(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::DeleteStudioMemberAsync(const DeleteStudioMemberRequest& request, const DeleteStudioMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteStudioMember(request), context);
    } );
}

GetEulaOutcome NimbleStudioClient::GetEula(const GetEulaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEula, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.EulaIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEula", "Required field: EulaId, is not set");
    return GetEulaOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EulaId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEula, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/eulas/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEulaId());
  return GetEulaOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetEulaOutcomeCallable NimbleStudioClient::GetEulaCallable(const GetEulaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEulaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEula(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::GetEulaAsync(const GetEulaRequest& request, const GetEulaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEula(request), context);
    } );
}

GetLaunchProfileOutcome NimbleStudioClient::GetLaunchProfile(const GetLaunchProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLaunchProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LaunchProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLaunchProfile", "Required field: LaunchProfileId, is not set");
    return GetLaunchProfileOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LaunchProfileId]", false));
  }
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLaunchProfile", "Required field: StudioId, is not set");
    return GetLaunchProfileOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLaunchProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/launch-profiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLaunchProfileId());
  return GetLaunchProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetLaunchProfileOutcomeCallable NimbleStudioClient::GetLaunchProfileCallable(const GetLaunchProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLaunchProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLaunchProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::GetLaunchProfileAsync(const GetLaunchProfileRequest& request, const GetLaunchProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLaunchProfile(request), context);
    } );
}

GetLaunchProfileDetailsOutcome NimbleStudioClient::GetLaunchProfileDetails(const GetLaunchProfileDetailsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLaunchProfileDetails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LaunchProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLaunchProfileDetails", "Required field: LaunchProfileId, is not set");
    return GetLaunchProfileDetailsOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LaunchProfileId]", false));
  }
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLaunchProfileDetails", "Required field: StudioId, is not set");
    return GetLaunchProfileDetailsOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLaunchProfileDetails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/launch-profiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLaunchProfileId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/details");
  return GetLaunchProfileDetailsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetLaunchProfileDetailsOutcomeCallable NimbleStudioClient::GetLaunchProfileDetailsCallable(const GetLaunchProfileDetailsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLaunchProfileDetailsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLaunchProfileDetails(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::GetLaunchProfileDetailsAsync(const GetLaunchProfileDetailsRequest& request, const GetLaunchProfileDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLaunchProfileDetails(request), context);
    } );
}

GetLaunchProfileInitializationOutcome NimbleStudioClient::GetLaunchProfileInitialization(const GetLaunchProfileInitializationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLaunchProfileInitialization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LaunchProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLaunchProfileInitialization", "Required field: LaunchProfileId, is not set");
    return GetLaunchProfileInitializationOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LaunchProfileId]", false));
  }
  if (!request.LaunchProfileProtocolVersionsHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLaunchProfileInitialization", "Required field: LaunchProfileProtocolVersions, is not set");
    return GetLaunchProfileInitializationOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LaunchProfileProtocolVersions]", false));
  }
  if (!request.LaunchPurposeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLaunchProfileInitialization", "Required field: LaunchPurpose, is not set");
    return GetLaunchProfileInitializationOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LaunchPurpose]", false));
  }
  if (!request.PlatformHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLaunchProfileInitialization", "Required field: Platform, is not set");
    return GetLaunchProfileInitializationOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Platform]", false));
  }
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLaunchProfileInitialization", "Required field: StudioId, is not set");
    return GetLaunchProfileInitializationOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLaunchProfileInitialization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/launch-profiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLaunchProfileId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/init");
  return GetLaunchProfileInitializationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetLaunchProfileInitializationOutcomeCallable NimbleStudioClient::GetLaunchProfileInitializationCallable(const GetLaunchProfileInitializationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLaunchProfileInitializationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLaunchProfileInitialization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::GetLaunchProfileInitializationAsync(const GetLaunchProfileInitializationRequest& request, const GetLaunchProfileInitializationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLaunchProfileInitialization(request), context);
    } );
}

GetLaunchProfileMemberOutcome NimbleStudioClient::GetLaunchProfileMember(const GetLaunchProfileMemberRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLaunchProfileMember, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LaunchProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLaunchProfileMember", "Required field: LaunchProfileId, is not set");
    return GetLaunchProfileMemberOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LaunchProfileId]", false));
  }
  if (!request.PrincipalIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLaunchProfileMember", "Required field: PrincipalId, is not set");
    return GetLaunchProfileMemberOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PrincipalId]", false));
  }
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLaunchProfileMember", "Required field: StudioId, is not set");
    return GetLaunchProfileMemberOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLaunchProfileMember, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/launch-profiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLaunchProfileId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/membership/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrincipalId());
  return GetLaunchProfileMemberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetLaunchProfileMemberOutcomeCallable NimbleStudioClient::GetLaunchProfileMemberCallable(const GetLaunchProfileMemberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLaunchProfileMemberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLaunchProfileMember(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::GetLaunchProfileMemberAsync(const GetLaunchProfileMemberRequest& request, const GetLaunchProfileMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLaunchProfileMember(request), context);
    } );
}

GetStreamingImageOutcome NimbleStudioClient::GetStreamingImage(const GetStreamingImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetStreamingImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.StreamingImageIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStreamingImage", "Required field: StreamingImageId, is not set");
    return GetStreamingImageOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StreamingImageId]", false));
  }
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStreamingImage", "Required field: StudioId, is not set");
    return GetStreamingImageOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetStreamingImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/streaming-images/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStreamingImageId());
  return GetStreamingImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetStreamingImageOutcomeCallable NimbleStudioClient::GetStreamingImageCallable(const GetStreamingImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStreamingImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStreamingImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::GetStreamingImageAsync(const GetStreamingImageRequest& request, const GetStreamingImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetStreamingImage(request), context);
    } );
}

GetStreamingSessionOutcome NimbleStudioClient::GetStreamingSession(const GetStreamingSessionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetStreamingSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStreamingSession", "Required field: SessionId, is not set");
    return GetStreamingSessionOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStreamingSession", "Required field: StudioId, is not set");
    return GetStreamingSessionOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetStreamingSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/streaming-sessions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
  return GetStreamingSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetStreamingSessionOutcomeCallable NimbleStudioClient::GetStreamingSessionCallable(const GetStreamingSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStreamingSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStreamingSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::GetStreamingSessionAsync(const GetStreamingSessionRequest& request, const GetStreamingSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetStreamingSession(request), context);
    } );
}

GetStreamingSessionBackupOutcome NimbleStudioClient::GetStreamingSessionBackup(const GetStreamingSessionBackupRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetStreamingSessionBackup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStreamingSessionBackup", "Required field: BackupId, is not set");
    return GetStreamingSessionBackupOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupId]", false));
  }
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStreamingSessionBackup", "Required field: StudioId, is not set");
    return GetStreamingSessionBackupOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetStreamingSessionBackup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/streaming-session-backups/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupId());
  return GetStreamingSessionBackupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetStreamingSessionBackupOutcomeCallable NimbleStudioClient::GetStreamingSessionBackupCallable(const GetStreamingSessionBackupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStreamingSessionBackupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStreamingSessionBackup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::GetStreamingSessionBackupAsync(const GetStreamingSessionBackupRequest& request, const GetStreamingSessionBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetStreamingSessionBackup(request), context);
    } );
}

GetStreamingSessionStreamOutcome NimbleStudioClient::GetStreamingSessionStream(const GetStreamingSessionStreamRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetStreamingSessionStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStreamingSessionStream", "Required field: SessionId, is not set");
    return GetStreamingSessionStreamOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }
  if (!request.StreamIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStreamingSessionStream", "Required field: StreamId, is not set");
    return GetStreamingSessionStreamOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StreamId]", false));
  }
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStreamingSessionStream", "Required field: StudioId, is not set");
    return GetStreamingSessionStreamOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetStreamingSessionStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/streaming-sessions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/streams/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStreamId());
  return GetStreamingSessionStreamOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetStreamingSessionStreamOutcomeCallable NimbleStudioClient::GetStreamingSessionStreamCallable(const GetStreamingSessionStreamRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStreamingSessionStreamOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStreamingSessionStream(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::GetStreamingSessionStreamAsync(const GetStreamingSessionStreamRequest& request, const GetStreamingSessionStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetStreamingSessionStream(request), context);
    } );
}

GetStudioOutcome NimbleStudioClient::GetStudio(const GetStudioRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetStudio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStudio", "Required field: StudioId, is not set");
    return GetStudioOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetStudio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  return GetStudioOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetStudioOutcomeCallable NimbleStudioClient::GetStudioCallable(const GetStudioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStudioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStudio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::GetStudioAsync(const GetStudioRequest& request, const GetStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetStudio(request), context);
    } );
}

GetStudioComponentOutcome NimbleStudioClient::GetStudioComponent(const GetStudioComponentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetStudioComponent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.StudioComponentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStudioComponent", "Required field: StudioComponentId, is not set");
    return GetStudioComponentOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioComponentId]", false));
  }
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStudioComponent", "Required field: StudioId, is not set");
    return GetStudioComponentOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetStudioComponent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/studio-components/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioComponentId());
  return GetStudioComponentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetStudioComponentOutcomeCallable NimbleStudioClient::GetStudioComponentCallable(const GetStudioComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStudioComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStudioComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::GetStudioComponentAsync(const GetStudioComponentRequest& request, const GetStudioComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetStudioComponent(request), context);
    } );
}

GetStudioMemberOutcome NimbleStudioClient::GetStudioMember(const GetStudioMemberRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetStudioMember, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.PrincipalIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStudioMember", "Required field: PrincipalId, is not set");
    return GetStudioMemberOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PrincipalId]", false));
  }
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStudioMember", "Required field: StudioId, is not set");
    return GetStudioMemberOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetStudioMember, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/membership/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrincipalId());
  return GetStudioMemberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetStudioMemberOutcomeCallable NimbleStudioClient::GetStudioMemberCallable(const GetStudioMemberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStudioMemberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStudioMember(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::GetStudioMemberAsync(const GetStudioMemberRequest& request, const GetStudioMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetStudioMember(request), context);
    } );
}

ListEulaAcceptancesOutcome NimbleStudioClient::ListEulaAcceptances(const ListEulaAcceptancesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEulaAcceptances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListEulaAcceptances", "Required field: StudioId, is not set");
    return ListEulaAcceptancesOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEulaAcceptances, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/eula-acceptances");
  return ListEulaAcceptancesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListEulaAcceptancesOutcomeCallable NimbleStudioClient::ListEulaAcceptancesCallable(const ListEulaAcceptancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEulaAcceptancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEulaAcceptances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::ListEulaAcceptancesAsync(const ListEulaAcceptancesRequest& request, const ListEulaAcceptancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListEulaAcceptances(request), context);
    } );
}

ListEulasOutcome NimbleStudioClient::ListEulas(const ListEulasRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListEulas, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListEulas, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/eulas");
  return ListEulasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListEulasOutcomeCallable NimbleStudioClient::ListEulasCallable(const ListEulasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEulasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEulas(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::ListEulasAsync(const ListEulasRequest& request, const ListEulasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListEulas(request), context);
    } );
}

ListLaunchProfileMembersOutcome NimbleStudioClient::ListLaunchProfileMembers(const ListLaunchProfileMembersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLaunchProfileMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LaunchProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListLaunchProfileMembers", "Required field: LaunchProfileId, is not set");
    return ListLaunchProfileMembersOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LaunchProfileId]", false));
  }
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListLaunchProfileMembers", "Required field: StudioId, is not set");
    return ListLaunchProfileMembersOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLaunchProfileMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/launch-profiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLaunchProfileId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/membership");
  return ListLaunchProfileMembersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListLaunchProfileMembersOutcomeCallable NimbleStudioClient::ListLaunchProfileMembersCallable(const ListLaunchProfileMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLaunchProfileMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLaunchProfileMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::ListLaunchProfileMembersAsync(const ListLaunchProfileMembersRequest& request, const ListLaunchProfileMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListLaunchProfileMembers(request), context);
    } );
}

ListLaunchProfilesOutcome NimbleStudioClient::ListLaunchProfiles(const ListLaunchProfilesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLaunchProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListLaunchProfiles", "Required field: StudioId, is not set");
    return ListLaunchProfilesOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLaunchProfiles, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/launch-profiles");
  return ListLaunchProfilesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListLaunchProfilesOutcomeCallable NimbleStudioClient::ListLaunchProfilesCallable(const ListLaunchProfilesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLaunchProfilesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLaunchProfiles(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::ListLaunchProfilesAsync(const ListLaunchProfilesRequest& request, const ListLaunchProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListLaunchProfiles(request), context);
    } );
}

ListStreamingImagesOutcome NimbleStudioClient::ListStreamingImages(const ListStreamingImagesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListStreamingImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListStreamingImages", "Required field: StudioId, is not set");
    return ListStreamingImagesOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListStreamingImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/streaming-images");
  return ListStreamingImagesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListStreamingImagesOutcomeCallable NimbleStudioClient::ListStreamingImagesCallable(const ListStreamingImagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStreamingImagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStreamingImages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::ListStreamingImagesAsync(const ListStreamingImagesRequest& request, const ListStreamingImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListStreamingImages(request), context);
    } );
}

ListStreamingSessionBackupsOutcome NimbleStudioClient::ListStreamingSessionBackups(const ListStreamingSessionBackupsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListStreamingSessionBackups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListStreamingSessionBackups", "Required field: StudioId, is not set");
    return ListStreamingSessionBackupsOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListStreamingSessionBackups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/streaming-session-backups");
  return ListStreamingSessionBackupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListStreamingSessionBackupsOutcomeCallable NimbleStudioClient::ListStreamingSessionBackupsCallable(const ListStreamingSessionBackupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStreamingSessionBackupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStreamingSessionBackups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::ListStreamingSessionBackupsAsync(const ListStreamingSessionBackupsRequest& request, const ListStreamingSessionBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListStreamingSessionBackups(request), context);
    } );
}

ListStreamingSessionsOutcome NimbleStudioClient::ListStreamingSessions(const ListStreamingSessionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListStreamingSessions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListStreamingSessions", "Required field: StudioId, is not set");
    return ListStreamingSessionsOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListStreamingSessions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/streaming-sessions");
  return ListStreamingSessionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListStreamingSessionsOutcomeCallable NimbleStudioClient::ListStreamingSessionsCallable(const ListStreamingSessionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStreamingSessionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStreamingSessions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::ListStreamingSessionsAsync(const ListStreamingSessionsRequest& request, const ListStreamingSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListStreamingSessions(request), context);
    } );
}

ListStudioComponentsOutcome NimbleStudioClient::ListStudioComponents(const ListStudioComponentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListStudioComponents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListStudioComponents", "Required field: StudioId, is not set");
    return ListStudioComponentsOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListStudioComponents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/studio-components");
  return ListStudioComponentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListStudioComponentsOutcomeCallable NimbleStudioClient::ListStudioComponentsCallable(const ListStudioComponentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStudioComponentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStudioComponents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::ListStudioComponentsAsync(const ListStudioComponentsRequest& request, const ListStudioComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListStudioComponents(request), context);
    } );
}

ListStudioMembersOutcome NimbleStudioClient::ListStudioMembers(const ListStudioMembersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListStudioMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListStudioMembers", "Required field: StudioId, is not set");
    return ListStudioMembersOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListStudioMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/membership");
  return ListStudioMembersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListStudioMembersOutcomeCallable NimbleStudioClient::ListStudioMembersCallable(const ListStudioMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStudioMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStudioMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::ListStudioMembersAsync(const ListStudioMembersRequest& request, const ListStudioMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListStudioMembers(request), context);
    } );
}

ListStudiosOutcome NimbleStudioClient::ListStudios(const ListStudiosRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListStudios, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListStudios, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios");
  return ListStudiosOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListStudiosOutcomeCallable NimbleStudioClient::ListStudiosCallable(const ListStudiosRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListStudiosOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListStudios(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::ListStudiosAsync(const ListStudiosRequest& request, const ListStudiosResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListStudios(request), context);
    } );
}

ListTagsForResourceOutcome NimbleStudioClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable NimbleStudioClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

PutLaunchProfileMembersOutcome NimbleStudioClient::PutLaunchProfileMembers(const PutLaunchProfileMembersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutLaunchProfileMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LaunchProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutLaunchProfileMembers", "Required field: LaunchProfileId, is not set");
    return PutLaunchProfileMembersOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LaunchProfileId]", false));
  }
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutLaunchProfileMembers", "Required field: StudioId, is not set");
    return PutLaunchProfileMembersOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutLaunchProfileMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/launch-profiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLaunchProfileId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/membership");
  return PutLaunchProfileMembersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutLaunchProfileMembersOutcomeCallable NimbleStudioClient::PutLaunchProfileMembersCallable(const PutLaunchProfileMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutLaunchProfileMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutLaunchProfileMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::PutLaunchProfileMembersAsync(const PutLaunchProfileMembersRequest& request, const PutLaunchProfileMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutLaunchProfileMembers(request), context);
    } );
}

PutStudioMembersOutcome NimbleStudioClient::PutStudioMembers(const PutStudioMembersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutStudioMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutStudioMembers", "Required field: StudioId, is not set");
    return PutStudioMembersOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutStudioMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/membership");
  return PutStudioMembersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutStudioMembersOutcomeCallable NimbleStudioClient::PutStudioMembersCallable(const PutStudioMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutStudioMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutStudioMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::PutStudioMembersAsync(const PutStudioMembersRequest& request, const PutStudioMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutStudioMembers(request), context);
    } );
}

StartStreamingSessionOutcome NimbleStudioClient::StartStreamingSession(const StartStreamingSessionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartStreamingSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartStreamingSession", "Required field: SessionId, is not set");
    return StartStreamingSessionOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartStreamingSession", "Required field: StudioId, is not set");
    return StartStreamingSessionOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartStreamingSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/streaming-sessions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/start");
  return StartStreamingSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartStreamingSessionOutcomeCallable NimbleStudioClient::StartStreamingSessionCallable(const StartStreamingSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartStreamingSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartStreamingSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::StartStreamingSessionAsync(const StartStreamingSessionRequest& request, const StartStreamingSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartStreamingSession(request), context);
    } );
}

StartStudioSSOConfigurationRepairOutcome NimbleStudioClient::StartStudioSSOConfigurationRepair(const StartStudioSSOConfigurationRepairRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartStudioSSOConfigurationRepair, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartStudioSSOConfigurationRepair", "Required field: StudioId, is not set");
    return StartStudioSSOConfigurationRepairOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartStudioSSOConfigurationRepair, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/sso-configuration");
  return StartStudioSSOConfigurationRepairOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

StartStudioSSOConfigurationRepairOutcomeCallable NimbleStudioClient::StartStudioSSOConfigurationRepairCallable(const StartStudioSSOConfigurationRepairRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartStudioSSOConfigurationRepairOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartStudioSSOConfigurationRepair(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::StartStudioSSOConfigurationRepairAsync(const StartStudioSSOConfigurationRepairRequest& request, const StartStudioSSOConfigurationRepairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartStudioSSOConfigurationRepair(request), context);
    } );
}

StopStreamingSessionOutcome NimbleStudioClient::StopStreamingSession(const StopStreamingSessionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopStreamingSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopStreamingSession", "Required field: SessionId, is not set");
    return StopStreamingSessionOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopStreamingSession", "Required field: StudioId, is not set");
    return StopStreamingSessionOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopStreamingSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/streaming-sessions/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSessionId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/stop");
  return StopStreamingSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopStreamingSessionOutcomeCallable NimbleStudioClient::StopStreamingSessionCallable(const StopStreamingSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopStreamingSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopStreamingSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::StopStreamingSessionAsync(const StopStreamingSessionRequest& request, const StopStreamingSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopStreamingSession(request), context);
    } );
}

TagResourceOutcome NimbleStudioClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable NimbleStudioClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome NimbleStudioClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable NimbleStudioClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateLaunchProfileOutcome NimbleStudioClient::UpdateLaunchProfile(const UpdateLaunchProfileRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateLaunchProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LaunchProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateLaunchProfile", "Required field: LaunchProfileId, is not set");
    return UpdateLaunchProfileOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LaunchProfileId]", false));
  }
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateLaunchProfile", "Required field: StudioId, is not set");
    return UpdateLaunchProfileOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateLaunchProfile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/launch-profiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLaunchProfileId());
  return UpdateLaunchProfileOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateLaunchProfileOutcomeCallable NimbleStudioClient::UpdateLaunchProfileCallable(const UpdateLaunchProfileRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLaunchProfileOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLaunchProfile(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::UpdateLaunchProfileAsync(const UpdateLaunchProfileRequest& request, const UpdateLaunchProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateLaunchProfile(request), context);
    } );
}

UpdateLaunchProfileMemberOutcome NimbleStudioClient::UpdateLaunchProfileMember(const UpdateLaunchProfileMemberRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateLaunchProfileMember, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LaunchProfileIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateLaunchProfileMember", "Required field: LaunchProfileId, is not set");
    return UpdateLaunchProfileMemberOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LaunchProfileId]", false));
  }
  if (!request.PrincipalIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateLaunchProfileMember", "Required field: PrincipalId, is not set");
    return UpdateLaunchProfileMemberOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PrincipalId]", false));
  }
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateLaunchProfileMember", "Required field: StudioId, is not set");
    return UpdateLaunchProfileMemberOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateLaunchProfileMember, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/launch-profiles/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLaunchProfileId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/membership/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrincipalId());
  return UpdateLaunchProfileMemberOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateLaunchProfileMemberOutcomeCallable NimbleStudioClient::UpdateLaunchProfileMemberCallable(const UpdateLaunchProfileMemberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLaunchProfileMemberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLaunchProfileMember(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::UpdateLaunchProfileMemberAsync(const UpdateLaunchProfileMemberRequest& request, const UpdateLaunchProfileMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateLaunchProfileMember(request), context);
    } );
}

UpdateStreamingImageOutcome NimbleStudioClient::UpdateStreamingImage(const UpdateStreamingImageRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateStreamingImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.StreamingImageIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateStreamingImage", "Required field: StreamingImageId, is not set");
    return UpdateStreamingImageOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StreamingImageId]", false));
  }
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateStreamingImage", "Required field: StudioId, is not set");
    return UpdateStreamingImageOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateStreamingImage, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/streaming-images/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStreamingImageId());
  return UpdateStreamingImageOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateStreamingImageOutcomeCallable NimbleStudioClient::UpdateStreamingImageCallable(const UpdateStreamingImageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStreamingImageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStreamingImage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::UpdateStreamingImageAsync(const UpdateStreamingImageRequest& request, const UpdateStreamingImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateStreamingImage(request), context);
    } );
}

UpdateStudioOutcome NimbleStudioClient::UpdateStudio(const UpdateStudioRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateStudio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateStudio", "Required field: StudioId, is not set");
    return UpdateStudioOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateStudio, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  return UpdateStudioOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateStudioOutcomeCallable NimbleStudioClient::UpdateStudioCallable(const UpdateStudioRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStudioOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStudio(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::UpdateStudioAsync(const UpdateStudioRequest& request, const UpdateStudioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateStudio(request), context);
    } );
}

UpdateStudioComponentOutcome NimbleStudioClient::UpdateStudioComponent(const UpdateStudioComponentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateStudioComponent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.StudioComponentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateStudioComponent", "Required field: StudioComponentId, is not set");
    return UpdateStudioComponentOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioComponentId]", false));
  }
  if (!request.StudioIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateStudioComponent", "Required field: StudioId, is not set");
    return UpdateStudioComponentOutcome(Aws::Client::AWSError<NimbleStudioErrors>(NimbleStudioErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StudioId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateStudioComponent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/2020-08-01/studios/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/studio-components/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStudioComponentId());
  return UpdateStudioComponentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateStudioComponentOutcomeCallable NimbleStudioClient::UpdateStudioComponentCallable(const UpdateStudioComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStudioComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStudioComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NimbleStudioClient::UpdateStudioComponentAsync(const UpdateStudioComponentRequest& request, const UpdateStudioComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateStudioComponent(request), context);
    } );
}

