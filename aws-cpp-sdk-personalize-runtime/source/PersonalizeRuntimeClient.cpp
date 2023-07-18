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

#include <aws/personalize-runtime/PersonalizeRuntimeClient.h>
#include <aws/personalize-runtime/PersonalizeRuntimeEndpoint.h>
#include <aws/personalize-runtime/PersonalizeRuntimeErrorMarshaller.h>
#include <aws/personalize-runtime/model/GetPersonalizedRankingRequest.h>
#include <aws/personalize-runtime/model/GetRecommendationsRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::PersonalizeRuntime;
using namespace Aws::PersonalizeRuntime::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "personalize";
static const char* ALLOCATION_TAG = "PersonalizeRuntimeClient";


PersonalizeRuntimeClient::PersonalizeRuntimeClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<PersonalizeRuntimeErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

PersonalizeRuntimeClient::PersonalizeRuntimeClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<PersonalizeRuntimeErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

PersonalizeRuntimeClient::PersonalizeRuntimeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<PersonalizeRuntimeErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

PersonalizeRuntimeClient::~PersonalizeRuntimeClient()
{
}

void PersonalizeRuntimeClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("Personalize Runtime");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + PersonalizeRuntimeEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void PersonalizeRuntimeClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

GetPersonalizedRankingOutcome PersonalizeRuntimeClient::GetPersonalizedRanking(const GetPersonalizedRankingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/personalize-ranking");
  return GetPersonalizedRankingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetPersonalizedRankingAsyncHelper( request, handler, context ); } );
}

void PersonalizeRuntimeClient::GetPersonalizedRankingAsyncHelper(const GetPersonalizedRankingRequest& request, const GetPersonalizedRankingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetPersonalizedRanking(request), context);
}

GetRecommendationsOutcome PersonalizeRuntimeClient::GetRecommendations(const GetRecommendationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/recommendations");
  return GetRecommendationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetRecommendationsAsyncHelper( request, handler, context ); } );
}

void PersonalizeRuntimeClient::GetRecommendationsAsyncHelper(const GetRecommendationsRequest& request, const GetRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRecommendations(request), context);
}

