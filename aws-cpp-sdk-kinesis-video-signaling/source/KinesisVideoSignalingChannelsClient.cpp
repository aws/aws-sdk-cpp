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

#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannelsClient.h>
#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannelsEndpoint.h>
#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannelsErrorMarshaller.h>
#include <aws/kinesis-video-signaling/KinesisVideoSignalingChannelsEndpointProvider.h>
#include <aws/kinesis-video-signaling/model/GetIceServerConfigRequest.h>
#include <aws/kinesis-video-signaling/model/SendAlexaOfferToMasterRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::KinesisVideoSignalingChannels;
using namespace Aws::KinesisVideoSignalingChannels::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::KinesisVideoSignalingChannels::Endpoint::KinesisVideoSignalingChannelsEndpointProvider::KinesisVideoSignalingChannelsResolveEndpointOutcome;


const char* KinesisVideoSignalingChannelsClient::SERVICE_NAME = "kinesisvideo";
const char* KinesisVideoSignalingChannelsClient::ALLOCATION_TAG = "KinesisVideoSignalingChannelsClient";

KinesisVideoSignalingChannelsClient::KinesisVideoSignalingChannelsClient(const Client::ClientConfiguration& clientConfiguration,
                                                                         std::shared_ptr<Endpoint::KinesisVideoSignalingChannelsEndpointProvider> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisVideoSignalingChannelsErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(clientConfiguration);
}

KinesisVideoSignalingChannelsClient::KinesisVideoSignalingChannelsClient(const AWSCredentials& credentials,
                                                                         std::shared_ptr<Endpoint::KinesisVideoSignalingChannelsEndpointProvider> endpointProvider,
                                                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisVideoSignalingChannelsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(clientConfiguration);
}

KinesisVideoSignalingChannelsClient::KinesisVideoSignalingChannelsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                                         std::shared_ptr<Endpoint::KinesisVideoSignalingChannelsEndpointProvider> endpointProvider,
                                                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisVideoSignalingChannelsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(clientConfiguration);
}

    /* Legacy constructors due deprecation */
  KinesisVideoSignalingChannelsClient::KinesisVideoSignalingChannelsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisVideoSignalingChannelsErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<KinesisVideoSignalingChannels::Endpoint::KinesisVideoSignalingChannelsEndpointProvider>(ALLOCATION_TAG))
{
  init(clientConfiguration);
}

KinesisVideoSignalingChannelsClient::KinesisVideoSignalingChannelsClient(const AWSCredentials& credentials,
                                                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisVideoSignalingChannelsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<KinesisVideoSignalingChannels::Endpoint::KinesisVideoSignalingChannelsEndpointProvider>(ALLOCATION_TAG))
{
  init(clientConfiguration);
}

KinesisVideoSignalingChannelsClient::KinesisVideoSignalingChannelsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<KinesisVideoSignalingChannelsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<KinesisVideoSignalingChannels::Endpoint::KinesisVideoSignalingChannelsEndpointProvider>(ALLOCATION_TAG))
{
  init(clientConfiguration);
}

    /* End of legacy constructors due deprecation */
KinesisVideoSignalingChannelsClient::~KinesisVideoSignalingChannelsClient()
{
}

void KinesisVideoSignalingChannelsClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Kinesis Video Signaling");
  AWS_UNREFERENCED_PARAM(config);
}

void KinesisVideoSignalingChannelsClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_UNREFERENCED_PARAM(endpoint);
  // TODO: support existing Override API
}

GetIceServerConfigOutcome KinesisVideoSignalingChannelsClient::GetIceServerConfig(const GetIceServerConfigRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetIceServerConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetIceServerConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetIceServerConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetIceServerConfigOutcomeCallable KinesisVideoSignalingChannelsClient::GetIceServerConfigCallable(const GetIceServerConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIceServerConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIceServerConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoSignalingChannelsClient::GetIceServerConfigAsync(const GetIceServerConfigRequest& request, const GetIceServerConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetIceServerConfig(request), context);
    } );
}

SendAlexaOfferToMasterOutcome KinesisVideoSignalingChannelsClient::SendAlexaOfferToMaster(const SendAlexaOfferToMasterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendAlexaOfferToMaster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SendAlexaOfferToMaster, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SendAlexaOfferToMasterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendAlexaOfferToMasterOutcomeCallable KinesisVideoSignalingChannelsClient::SendAlexaOfferToMasterCallable(const SendAlexaOfferToMasterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendAlexaOfferToMasterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendAlexaOfferToMaster(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void KinesisVideoSignalingChannelsClient::SendAlexaOfferToMasterAsync(const SendAlexaOfferToMasterRequest& request, const SendAlexaOfferToMasterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SendAlexaOfferToMaster(request), context);
    } );
}

