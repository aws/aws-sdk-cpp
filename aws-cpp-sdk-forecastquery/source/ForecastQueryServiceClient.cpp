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

#include <aws/forecastquery/ForecastQueryServiceClient.h>
#include <aws/forecastquery/ForecastQueryServiceErrorMarshaller.h>
#include <aws/forecastquery/ForecastQueryServiceEndpointProvider.h>
#include <aws/forecastquery/model/QueryForecastRequest.h>
#include <aws/forecastquery/model/QueryWhatIfForecastRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ForecastQueryService;
using namespace Aws::ForecastQueryService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* ForecastQueryServiceClient::SERVICE_NAME = "forecast";
const char* ForecastQueryServiceClient::ALLOCATION_TAG = "ForecastQueryServiceClient";

ForecastQueryServiceClient::ForecastQueryServiceClient(const ForecastQueryService::ForecastQueryServiceClientConfiguration& clientConfiguration,
                                                       std::shared_ptr<ForecastQueryServiceEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ForecastQueryServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ForecastQueryServiceClient::ForecastQueryServiceClient(const AWSCredentials& credentials,
                                                       std::shared_ptr<ForecastQueryServiceEndpointProviderBase> endpointProvider,
                                                       const ForecastQueryService::ForecastQueryServiceClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ForecastQueryServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ForecastQueryServiceClient::ForecastQueryServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                       std::shared_ptr<ForecastQueryServiceEndpointProviderBase> endpointProvider,
                                                       const ForecastQueryService::ForecastQueryServiceClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ForecastQueryServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  ForecastQueryServiceClient::ForecastQueryServiceClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ForecastQueryServiceErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<ForecastQueryServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ForecastQueryServiceClient::ForecastQueryServiceClient(const AWSCredentials& credentials,
                                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ForecastQueryServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ForecastQueryServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ForecastQueryServiceClient::ForecastQueryServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ForecastQueryServiceErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ForecastQueryServiceEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
ForecastQueryServiceClient::~ForecastQueryServiceClient()
{
}

std::shared_ptr<ForecastQueryServiceEndpointProviderBase>& ForecastQueryServiceClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void ForecastQueryServiceClient::init(const ForecastQueryService::ForecastQueryServiceClientConfiguration& config)
{
  AWSClient::SetServiceClientName("forecastquery");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void ForecastQueryServiceClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

QueryForecastOutcome ForecastQueryServiceClient::QueryForecast(const QueryForecastRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, QueryForecast, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, QueryForecast, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return QueryForecastOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

QueryForecastOutcomeCallable ForecastQueryServiceClient::QueryForecastCallable(const QueryForecastRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< QueryForecastOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->QueryForecast(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastQueryServiceClient::QueryForecastAsync(const QueryForecastRequest& request, const QueryForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, QueryForecast(request), context);
    } );
}

QueryWhatIfForecastOutcome ForecastQueryServiceClient::QueryWhatIfForecast(const QueryWhatIfForecastRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, QueryWhatIfForecast, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, QueryWhatIfForecast, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return QueryWhatIfForecastOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

QueryWhatIfForecastOutcomeCallable ForecastQueryServiceClient::QueryWhatIfForecastCallable(const QueryWhatIfForecastRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< QueryWhatIfForecastOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->QueryWhatIfForecast(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ForecastQueryServiceClient::QueryWhatIfForecastAsync(const QueryWhatIfForecastRequest& request, const QueryWhatIfForecastResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, QueryWhatIfForecast(request), context);
    } );
}

