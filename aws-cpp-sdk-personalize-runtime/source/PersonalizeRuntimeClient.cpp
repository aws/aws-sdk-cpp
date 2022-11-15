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

#include <aws/personalize-runtime/PersonalizeRuntimeClient.h>
#include <aws/personalize-runtime/PersonalizeRuntimeErrorMarshaller.h>
#include <aws/personalize-runtime/PersonalizeRuntimeEndpointProvider.h>
#include <aws/personalize-runtime/model/GetPersonalizedRankingRequest.h>
#include <aws/personalize-runtime/model/GetRecommendationsRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::PersonalizeRuntime;
using namespace Aws::PersonalizeRuntime::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* PersonalizeRuntimeClient::SERVICE_NAME = "personalize";
const char* PersonalizeRuntimeClient::ALLOCATION_TAG = "PersonalizeRuntimeClient";

PersonalizeRuntimeClient::PersonalizeRuntimeClient(const PersonalizeRuntime::PersonalizeRuntimeClientConfiguration& clientConfiguration,
                                                   std::shared_ptr<PersonalizeRuntimeEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PersonalizeRuntimeErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

PersonalizeRuntimeClient::PersonalizeRuntimeClient(const AWSCredentials& credentials,
                                                   std::shared_ptr<PersonalizeRuntimeEndpointProviderBase> endpointProvider,
                                                   const PersonalizeRuntime::PersonalizeRuntimeClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PersonalizeRuntimeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

PersonalizeRuntimeClient::PersonalizeRuntimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   std::shared_ptr<PersonalizeRuntimeEndpointProviderBase> endpointProvider,
                                                   const PersonalizeRuntime::PersonalizeRuntimeClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PersonalizeRuntimeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  PersonalizeRuntimeClient::PersonalizeRuntimeClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PersonalizeRuntimeErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<PersonalizeRuntimeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

PersonalizeRuntimeClient::PersonalizeRuntimeClient(const AWSCredentials& credentials,
                                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PersonalizeRuntimeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<PersonalizeRuntimeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

PersonalizeRuntimeClient::PersonalizeRuntimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PersonalizeRuntimeErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<PersonalizeRuntimeEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
PersonalizeRuntimeClient::~PersonalizeRuntimeClient()
{
}

std::shared_ptr<PersonalizeRuntimeEndpointProviderBase>& PersonalizeRuntimeClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void PersonalizeRuntimeClient::init(const PersonalizeRuntime::PersonalizeRuntimeClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Personalize Runtime");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void PersonalizeRuntimeClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

GetPersonalizedRankingOutcome PersonalizeRuntimeClient::GetPersonalizedRanking(const GetPersonalizedRankingRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetPersonalizedRanking, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetPersonalizedRanking, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/personalize-ranking");
  return GetPersonalizedRankingOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetPersonalizedRankingOutcomeCallable PersonalizeRuntimeClient::GetPersonalizedRankingCallable(const GetPersonalizedRankingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPersonalizedRankingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPersonalizedRanking(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeRuntimeClient::GetPersonalizedRankingAsync(const GetPersonalizedRankingRequest& request, const GetPersonalizedRankingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetPersonalizedRanking(request), context);
    } );
}

GetRecommendationsOutcome PersonalizeRuntimeClient::GetRecommendations(const GetRecommendationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/recommendations");
  return GetRecommendationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRecommendationsOutcomeCallable PersonalizeRuntimeClient::GetRecommendationsCallable(const GetRecommendationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRecommendationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRecommendations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PersonalizeRuntimeClient::GetRecommendationsAsync(const GetRecommendationsRequest& request, const GetRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRecommendations(request), context);
    } );
}

