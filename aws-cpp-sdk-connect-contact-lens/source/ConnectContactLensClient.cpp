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

#include <aws/connect-contact-lens/ConnectContactLensClient.h>
#include <aws/connect-contact-lens/ConnectContactLensEndpoint.h>
#include <aws/connect-contact-lens/ConnectContactLensErrorMarshaller.h>
#include <aws/connect-contact-lens/ConnectContactLensEndpointProvider.h>
#include <aws/connect-contact-lens/model/ListRealtimeContactAnalysisSegmentsRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ConnectContactLens;
using namespace Aws::ConnectContactLens::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::ConnectContactLens::Endpoint::ConnectContactLensEndpointProvider::ConnectContactLensResolveEndpointOutcome;


const char* ConnectContactLensClient::SERVICE_NAME = "connect";
const char* ConnectContactLensClient::ALLOCATION_TAG = "ConnectContactLensClient";

ConnectContactLensClient::ConnectContactLensClient(const Client::ClientConfiguration& clientConfiguration,
                                                   std::shared_ptr<Endpoint::ConnectContactLensEndpointProvider> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ConnectContactLensErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(clientConfiguration);
}

ConnectContactLensClient::ConnectContactLensClient(const AWSCredentials& credentials,
                                                   std::shared_ptr<Endpoint::ConnectContactLensEndpointProvider> endpointProvider,
                                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ConnectContactLensErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(clientConfiguration);
}

ConnectContactLensClient::ConnectContactLensClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   std::shared_ptr<Endpoint::ConnectContactLensEndpointProvider> endpointProvider,
                                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ConnectContactLensErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(clientConfiguration);
}

    /* Legacy constructors due deprecation */
  ConnectContactLensClient::ConnectContactLensClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ConnectContactLensErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<ConnectContactLens::Endpoint::ConnectContactLensEndpointProvider>(ALLOCATION_TAG))
{
  init(clientConfiguration);
}

ConnectContactLensClient::ConnectContactLensClient(const AWSCredentials& credentials,
                                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ConnectContactLensErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ConnectContactLens::Endpoint::ConnectContactLensEndpointProvider>(ALLOCATION_TAG))
{
  init(clientConfiguration);
}

ConnectContactLensClient::ConnectContactLensClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ConnectContactLensErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ConnectContactLens::Endpoint::ConnectContactLensEndpointProvider>(ALLOCATION_TAG))
{
  init(clientConfiguration);
}

    /* End of legacy constructors due deprecation */
ConnectContactLensClient::~ConnectContactLensClient()
{
}

void ConnectContactLensClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Connect Contact Lens");
  AWS_UNREFERENCED_PARAM(config);
}

void ConnectContactLensClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_UNREFERENCED_PARAM(endpoint);
  // TODO: support existing Override API
}

ListRealtimeContactAnalysisSegmentsOutcome ConnectContactLensClient::ListRealtimeContactAnalysisSegments(const ListRealtimeContactAnalysisSegmentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRealtimeContactAnalysisSegments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRealtimeContactAnalysisSegments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListRealtimeContactAnalysisSegmentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRealtimeContactAnalysisSegmentsOutcomeCallable ConnectContactLensClient::ListRealtimeContactAnalysisSegmentsCallable(const ListRealtimeContactAnalysisSegmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRealtimeContactAnalysisSegmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRealtimeContactAnalysisSegments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ConnectContactLensClient::ListRealtimeContactAnalysisSegmentsAsync(const ListRealtimeContactAnalysisSegmentsRequest& request, const ListRealtimeContactAnalysisSegmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListRealtimeContactAnalysisSegments(request), context);
    } );
}

