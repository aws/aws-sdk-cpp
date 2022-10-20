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

#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMediaClient.h>
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMediaEndpoint.h>
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMediaErrorMarshaller.h>
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMediaEndpointProvider.h>
#include <aws/kinesis-video-archived-media/model/GetClipRequest.h>
#include <aws/kinesis-video-archived-media/model/GetDASHStreamingSessionURLRequest.h>
#include <aws/kinesis-video-archived-media/model/GetHLSStreamingSessionURLRequest.h>
#include <aws/kinesis-video-archived-media/model/GetImagesRequest.h>
#include <aws/kinesis-video-archived-media/model/GetMediaForFragmentListRequest.h>
#include <aws/kinesis-video-archived-media/model/ListFragmentsRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::KinesisVideoArchivedMedia;
using namespace Aws::KinesisVideoArchivedMedia::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::KinesisVideoArchivedMedia::Endpoint::KinesisVideoArchivedMediaEndpointProvider::KinesisVideoArchivedMediaResolveEndpointOutcome;


const char* KinesisVideoArchivedMediaClient::SERVICE_NAME = "kinesisvideo";
const char* KinesisVideoArchivedMediaClient::ALLOCATION_TAG = "KinesisVideoArchivedMediaClient";

KinesisVideoArchivedMediaClient::KinesisVideoArchivedMediaClient(const Client::ClientConfiguration& clientConfiguration,
                                                                 std::shared_ptr<Endpoint::KinesisVideoArchivedMediaEndpointProvider> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisVideoArchivedMediaErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(clientConfiguration);
}

KinesisVideoArchivedMediaClient::KinesisVideoArchivedMediaClient(const AWSCredentials& credentials,
                                                                 std::shared_ptr<Endpoint::KinesisVideoArchivedMediaEndpointProvider> endpointProvider,
                                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisVideoArchivedMediaErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(clientConfiguration);
}

KinesisVideoArchivedMediaClient::KinesisVideoArchivedMediaClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                                 std::shared_ptr<Endpoint::KinesisVideoArchivedMediaEndpointProvider> endpointProvider,
                                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisVideoArchivedMediaErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(clientConfiguration);
}

    /* Legacy constructors due deprecation */
  KinesisVideoArchivedMediaClient::KinesisVideoArchivedMediaClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisVideoArchivedMediaErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<KinesisVideoArchivedMedia::Endpoint::KinesisVideoArchivedMediaEndpointProvider>(ALLOCATION_TAG))
{
  init(clientConfiguration);
}

KinesisVideoArchivedMediaClient::KinesisVideoArchivedMediaClient(const AWSCredentials& credentials,
                                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisVideoArchivedMediaErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<KinesisVideoArchivedMedia::Endpoint::KinesisVideoArchivedMediaEndpointProvider>(ALLOCATION_TAG))
{
  init(clientConfiguration);
}

KinesisVideoArchivedMediaClient::KinesisVideoArchivedMediaClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisVideoArchivedMediaErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<KinesisVideoArchivedMedia::Endpoint::KinesisVideoArchivedMediaEndpointProvider>(ALLOCATION_TAG))
{
  init(clientConfiguration);
}

    /* End of legacy constructors due deprecation */
KinesisVideoArchivedMediaClient::~KinesisVideoArchivedMediaClient()
{
}

void KinesisVideoArchivedMediaClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Kinesis Video Archived Media");
  AWS_UNREFERENCED_PARAM(config);
}

void KinesisVideoArchivedMediaClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_UNREFERENCED_PARAM(endpoint);
  // TODO: support existing Override API
}

GetClipOutcome KinesisVideoArchivedMediaClient::GetClip(const GetClipRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetClip, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetClip, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetClipOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetClipOutcomeCallable KinesisVideoArchivedMediaClient::GetClipCallable(const GetClipRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetClipOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetClip(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoArchivedMediaClient::GetClipAsync(const GetClipRequest& request, const GetClipResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetClip(request), context);
    } );
}

GetDASHStreamingSessionURLOutcome KinesisVideoArchivedMediaClient::GetDASHStreamingSessionURL(const GetDASHStreamingSessionURLRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDASHStreamingSessionURL, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDASHStreamingSessionURL, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDASHStreamingSessionURLOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDASHStreamingSessionURLOutcomeCallable KinesisVideoArchivedMediaClient::GetDASHStreamingSessionURLCallable(const GetDASHStreamingSessionURLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDASHStreamingSessionURLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDASHStreamingSessionURL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoArchivedMediaClient::GetDASHStreamingSessionURLAsync(const GetDASHStreamingSessionURLRequest& request, const GetDASHStreamingSessionURLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDASHStreamingSessionURL(request), context);
    } );
}

GetHLSStreamingSessionURLOutcome KinesisVideoArchivedMediaClient::GetHLSStreamingSessionURL(const GetHLSStreamingSessionURLRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetHLSStreamingSessionURL, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetHLSStreamingSessionURL, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetHLSStreamingSessionURLOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetHLSStreamingSessionURLOutcomeCallable KinesisVideoArchivedMediaClient::GetHLSStreamingSessionURLCallable(const GetHLSStreamingSessionURLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetHLSStreamingSessionURLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetHLSStreamingSessionURL(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoArchivedMediaClient::GetHLSStreamingSessionURLAsync(const GetHLSStreamingSessionURLRequest& request, const GetHLSStreamingSessionURLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetHLSStreamingSessionURL(request), context);
    } );
}

GetImagesOutcome KinesisVideoArchivedMediaClient::GetImages(const GetImagesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetImagesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetImagesOutcomeCallable KinesisVideoArchivedMediaClient::GetImagesCallable(const GetImagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetImagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetImages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoArchivedMediaClient::GetImagesAsync(const GetImagesRequest& request, const GetImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetImages(request), context);
    } );
}

GetMediaForFragmentListOutcome KinesisVideoArchivedMediaClient::GetMediaForFragmentList(const GetMediaForFragmentListRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMediaForFragmentList, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMediaForFragmentList, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetMediaForFragmentListOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetMediaForFragmentListOutcomeCallable KinesisVideoArchivedMediaClient::GetMediaForFragmentListCallable(const GetMediaForFragmentListRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMediaForFragmentListOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMediaForFragmentList(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoArchivedMediaClient::GetMediaForFragmentListAsync(const GetMediaForFragmentListRequest& request, const GetMediaForFragmentListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetMediaForFragmentList(request), context);
    } );
}

ListFragmentsOutcome KinesisVideoArchivedMediaClient::ListFragments(const ListFragmentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFragments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFragments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListFragmentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFragmentsOutcomeCallable KinesisVideoArchivedMediaClient::ListFragmentsCallable(const ListFragmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFragmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFragments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoArchivedMediaClient::ListFragmentsAsync(const ListFragmentsRequest& request, const ListFragmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListFragments(request), context);
    } );
}

