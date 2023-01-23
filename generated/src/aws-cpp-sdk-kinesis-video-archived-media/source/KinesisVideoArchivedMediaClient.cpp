﻿/**
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* KinesisVideoArchivedMediaClient::SERVICE_NAME = "kinesisvideo";
const char* KinesisVideoArchivedMediaClient::ALLOCATION_TAG = "KinesisVideoArchivedMediaClient";

KinesisVideoArchivedMediaClient::KinesisVideoArchivedMediaClient(const KinesisVideoArchivedMedia::KinesisVideoArchivedMediaClientConfiguration& clientConfiguration,
                                                                 std::shared_ptr<KinesisVideoArchivedMediaEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisVideoArchivedMediaErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

KinesisVideoArchivedMediaClient::KinesisVideoArchivedMediaClient(const AWSCredentials& credentials,
                                                                 std::shared_ptr<KinesisVideoArchivedMediaEndpointProviderBase> endpointProvider,
                                                                 const KinesisVideoArchivedMedia::KinesisVideoArchivedMediaClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisVideoArchivedMediaErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

KinesisVideoArchivedMediaClient::KinesisVideoArchivedMediaClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                                 std::shared_ptr<KinesisVideoArchivedMediaEndpointProviderBase> endpointProvider,
                                                                 const KinesisVideoArchivedMedia::KinesisVideoArchivedMediaClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisVideoArchivedMediaErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  KinesisVideoArchivedMediaClient::KinesisVideoArchivedMediaClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisVideoArchivedMediaErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<KinesisVideoArchivedMediaEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

KinesisVideoArchivedMediaClient::KinesisVideoArchivedMediaClient(const AWSCredentials& credentials,
                                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisVideoArchivedMediaErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<KinesisVideoArchivedMediaEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

KinesisVideoArchivedMediaClient::KinesisVideoArchivedMediaClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisVideoArchivedMediaErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<KinesisVideoArchivedMediaEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
KinesisVideoArchivedMediaClient::~KinesisVideoArchivedMediaClient()
{
}

std::shared_ptr<KinesisVideoArchivedMediaEndpointProviderBase>& KinesisVideoArchivedMediaClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void KinesisVideoArchivedMediaClient::init(const KinesisVideoArchivedMedia::KinesisVideoArchivedMediaClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Kinesis Video Archived Media");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void KinesisVideoArchivedMediaClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

GetClipOutcome KinesisVideoArchivedMediaClient::GetClip(const GetClipRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetClip, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetClip, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/getClip");
  return GetClipOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetDASHStreamingSessionURLOutcome KinesisVideoArchivedMediaClient::GetDASHStreamingSessionURL(const GetDASHStreamingSessionURLRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDASHStreamingSessionURL, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDASHStreamingSessionURL, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/getDASHStreamingSessionURL");
  return GetDASHStreamingSessionURLOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetHLSStreamingSessionURLOutcome KinesisVideoArchivedMediaClient::GetHLSStreamingSessionURL(const GetHLSStreamingSessionURLRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetHLSStreamingSessionURL, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetHLSStreamingSessionURL, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/getHLSStreamingSessionURL");
  return GetHLSStreamingSessionURLOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetImagesOutcome KinesisVideoArchivedMediaClient::GetImages(const GetImagesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetImages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/getImages");
  return GetImagesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetMediaForFragmentListOutcome KinesisVideoArchivedMediaClient::GetMediaForFragmentList(const GetMediaForFragmentListRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMediaForFragmentList, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMediaForFragmentList, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/getMediaForFragmentList");
  return GetMediaForFragmentListOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

ListFragmentsOutcome KinesisVideoArchivedMediaClient::ListFragments(const ListFragmentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFragments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFragments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/listFragments");
  return ListFragmentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

