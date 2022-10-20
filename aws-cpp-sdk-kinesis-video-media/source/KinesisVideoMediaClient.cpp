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

#include <aws/kinesis-video-media/KinesisVideoMediaClient.h>
#include <aws/kinesis-video-media/KinesisVideoMediaEndpoint.h>
#include <aws/kinesis-video-media/KinesisVideoMediaErrorMarshaller.h>
#include <aws/kinesis-video-media/KinesisVideoMediaEndpointProvider.h>
#include <aws/kinesis-video-media/model/GetMediaRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::KinesisVideoMedia;
using namespace Aws::KinesisVideoMedia::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::KinesisVideoMedia::Endpoint::KinesisVideoMediaEndpointProvider::KinesisVideoMediaResolveEndpointOutcome;


const char* KinesisVideoMediaClient::SERVICE_NAME = "kinesisvideo";
const char* KinesisVideoMediaClient::ALLOCATION_TAG = "KinesisVideoMediaClient";

KinesisVideoMediaClient::KinesisVideoMediaClient(const Client::ClientConfiguration& clientConfiguration,
                                                 std::shared_ptr<Endpoint::KinesisVideoMediaEndpointProvider> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisVideoMediaErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(clientConfiguration);
}

KinesisVideoMediaClient::KinesisVideoMediaClient(const AWSCredentials& credentials,
                                                 std::shared_ptr<Endpoint::KinesisVideoMediaEndpointProvider> endpointProvider,
                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisVideoMediaErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(clientConfiguration);
}

KinesisVideoMediaClient::KinesisVideoMediaClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 std::shared_ptr<Endpoint::KinesisVideoMediaEndpointProvider> endpointProvider,
                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisVideoMediaErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(clientConfiguration);
}

    /* Legacy constructors due deprecation */
  KinesisVideoMediaClient::KinesisVideoMediaClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisVideoMediaErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<KinesisVideoMedia::Endpoint::KinesisVideoMediaEndpointProvider>(ALLOCATION_TAG))
{
  init(clientConfiguration);
}

KinesisVideoMediaClient::KinesisVideoMediaClient(const AWSCredentials& credentials,
                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisVideoMediaErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<KinesisVideoMedia::Endpoint::KinesisVideoMediaEndpointProvider>(ALLOCATION_TAG))
{
  init(clientConfiguration);
}

KinesisVideoMediaClient::KinesisVideoMediaClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisVideoMediaErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<KinesisVideoMedia::Endpoint::KinesisVideoMediaEndpointProvider>(ALLOCATION_TAG))
{
  init(clientConfiguration);
}

    /* End of legacy constructors due deprecation */
KinesisVideoMediaClient::~KinesisVideoMediaClient()
{
}

void KinesisVideoMediaClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Kinesis Video Media");
  AWS_UNREFERENCED_PARAM(config);
}

void KinesisVideoMediaClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_UNREFERENCED_PARAM(endpoint);
  // TODO: support existing Override API
}

GetMediaOutcome KinesisVideoMediaClient::GetMedia(const GetMediaRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetMedia, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetMedia, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetMediaOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetMediaOutcomeCallable KinesisVideoMediaClient::GetMediaCallable(const GetMediaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMediaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMedia(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoMediaClient::GetMediaAsync(const GetMediaRequest& request, const GetMediaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetMedia(request), context);
    } );
}

