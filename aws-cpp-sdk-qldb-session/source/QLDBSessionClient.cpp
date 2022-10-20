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

#include <aws/qldb-session/QLDBSessionClient.h>
#include <aws/qldb-session/QLDBSessionEndpoint.h>
#include <aws/qldb-session/QLDBSessionErrorMarshaller.h>
#include <aws/qldb-session/QLDBSessionEndpointProvider.h>
#include <aws/qldb-session/model/SendCommandRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::QLDBSession;
using namespace Aws::QLDBSession::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::QLDBSession::Endpoint::QLDBSessionEndpointProvider::QLDBSessionResolveEndpointOutcome;


const char* QLDBSessionClient::SERVICE_NAME = "qldb";
const char* QLDBSessionClient::ALLOCATION_TAG = "QLDBSessionClient";

QLDBSessionClient::QLDBSessionClient(const Client::ClientConfiguration& clientConfiguration,
                                     std::shared_ptr<Endpoint::QLDBSessionEndpointProvider> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QLDBSessionErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(clientConfiguration);
}

QLDBSessionClient::QLDBSessionClient(const AWSCredentials& credentials,
                                     std::shared_ptr<Endpoint::QLDBSessionEndpointProvider> endpointProvider,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QLDBSessionErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(clientConfiguration);
}

QLDBSessionClient::QLDBSessionClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<Endpoint::QLDBSessionEndpointProvider> endpointProvider,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QLDBSessionErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(clientConfiguration);
}

    /* Legacy constructors due deprecation */
  QLDBSessionClient::QLDBSessionClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QLDBSessionErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<QLDBSession::Endpoint::QLDBSessionEndpointProvider>(ALLOCATION_TAG))
{
  init(clientConfiguration);
}

QLDBSessionClient::QLDBSessionClient(const AWSCredentials& credentials,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QLDBSessionErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<QLDBSession::Endpoint::QLDBSessionEndpointProvider>(ALLOCATION_TAG))
{
  init(clientConfiguration);
}

QLDBSessionClient::QLDBSessionClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<QLDBSessionErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<QLDBSession::Endpoint::QLDBSessionEndpointProvider>(ALLOCATION_TAG))
{
  init(clientConfiguration);
}

    /* End of legacy constructors due deprecation */
QLDBSessionClient::~QLDBSessionClient()
{
}

void QLDBSessionClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("QLDB Session");
  AWS_UNREFERENCED_PARAM(config);
}

void QLDBSessionClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_UNREFERENCED_PARAM(endpoint);
  // TODO: support existing Override API
}

SendCommandOutcome QLDBSessionClient::SendCommand(const SendCommandRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendCommand, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SendCommand, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SendCommandOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SendCommandOutcomeCallable QLDBSessionClient::SendCommandCallable(const SendCommandRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SendCommandOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SendCommand(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void QLDBSessionClient::SendCommandAsync(const SendCommandRequest& request, const SendCommandResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SendCommand(request), context);
    } );
}

