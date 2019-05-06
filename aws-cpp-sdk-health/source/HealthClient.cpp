/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

#include <aws/health/HealthClient.h>
#include <aws/health/HealthEndpoint.h>
#include <aws/health/HealthErrorMarshaller.h>
#include <aws/health/model/DescribeAffectedEntitiesRequest.h>
#include <aws/health/model/DescribeEntityAggregatesRequest.h>
#include <aws/health/model/DescribeEventAggregatesRequest.h>
#include <aws/health/model/DescribeEventDetailsRequest.h>
#include <aws/health/model/DescribeEventTypesRequest.h>
#include <aws/health/model/DescribeEventsRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Health;
using namespace Aws::Health::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "health";
static const char* ALLOCATION_TAG = "HealthClient";


HealthClient::HealthClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<HealthErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

HealthClient::HealthClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<HealthErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

HealthClient::HealthClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<HealthErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

HealthClient::~HealthClient()
{
}

void HealthClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + HealthEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void HealthClient::OverrideEndpoint(const Aws::String& endpoint)
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

DescribeAffectedEntitiesOutcome HealthClient::DescribeAffectedEntities(const DescribeAffectedEntitiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeAffectedEntitiesOutcome(DescribeAffectedEntitiesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAffectedEntitiesOutcome(outcome.GetError());
  }
}

DescribeAffectedEntitiesOutcomeCallable HealthClient::DescribeAffectedEntitiesCallable(const DescribeAffectedEntitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAffectedEntitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAffectedEntities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void HealthClient::DescribeAffectedEntitiesAsync(const DescribeAffectedEntitiesRequest& request, const DescribeAffectedEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAffectedEntitiesAsyncHelper( request, handler, context ); } );
}

void HealthClient::DescribeAffectedEntitiesAsyncHelper(const DescribeAffectedEntitiesRequest& request, const DescribeAffectedEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAffectedEntities(request), context);
}

DescribeEntityAggregatesOutcome HealthClient::DescribeEntityAggregates(const DescribeEntityAggregatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeEntityAggregatesOutcome(DescribeEntityAggregatesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEntityAggregatesOutcome(outcome.GetError());
  }
}

DescribeEntityAggregatesOutcomeCallable HealthClient::DescribeEntityAggregatesCallable(const DescribeEntityAggregatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEntityAggregatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEntityAggregates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void HealthClient::DescribeEntityAggregatesAsync(const DescribeEntityAggregatesRequest& request, const DescribeEntityAggregatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEntityAggregatesAsyncHelper( request, handler, context ); } );
}

void HealthClient::DescribeEntityAggregatesAsyncHelper(const DescribeEntityAggregatesRequest& request, const DescribeEntityAggregatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEntityAggregates(request), context);
}

DescribeEventAggregatesOutcome HealthClient::DescribeEventAggregates(const DescribeEventAggregatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeEventAggregatesOutcome(DescribeEventAggregatesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEventAggregatesOutcome(outcome.GetError());
  }
}

DescribeEventAggregatesOutcomeCallable HealthClient::DescribeEventAggregatesCallable(const DescribeEventAggregatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventAggregatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEventAggregates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void HealthClient::DescribeEventAggregatesAsync(const DescribeEventAggregatesRequest& request, const DescribeEventAggregatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEventAggregatesAsyncHelper( request, handler, context ); } );
}

void HealthClient::DescribeEventAggregatesAsyncHelper(const DescribeEventAggregatesRequest& request, const DescribeEventAggregatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEventAggregates(request), context);
}

DescribeEventDetailsOutcome HealthClient::DescribeEventDetails(const DescribeEventDetailsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeEventDetailsOutcome(DescribeEventDetailsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEventDetailsOutcome(outcome.GetError());
  }
}

DescribeEventDetailsOutcomeCallable HealthClient::DescribeEventDetailsCallable(const DescribeEventDetailsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventDetailsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEventDetails(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void HealthClient::DescribeEventDetailsAsync(const DescribeEventDetailsRequest& request, const DescribeEventDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEventDetailsAsyncHelper( request, handler, context ); } );
}

void HealthClient::DescribeEventDetailsAsyncHelper(const DescribeEventDetailsRequest& request, const DescribeEventDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEventDetails(request), context);
}

DescribeEventTypesOutcome HealthClient::DescribeEventTypes(const DescribeEventTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeEventTypesOutcome(DescribeEventTypesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEventTypesOutcome(outcome.GetError());
  }
}

DescribeEventTypesOutcomeCallable HealthClient::DescribeEventTypesCallable(const DescribeEventTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEventTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void HealthClient::DescribeEventTypesAsync(const DescribeEventTypesRequest& request, const DescribeEventTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEventTypesAsyncHelper( request, handler, context ); } );
}

void HealthClient::DescribeEventTypesAsyncHelper(const DescribeEventTypesRequest& request, const DescribeEventTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEventTypes(request), context);
}

DescribeEventsOutcome HealthClient::DescribeEvents(const DescribeEventsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeEventsOutcome(DescribeEventsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEventsOutcome(outcome.GetError());
  }
}

DescribeEventsOutcomeCallable HealthClient::DescribeEventsCallable(const DescribeEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void HealthClient::DescribeEventsAsync(const DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEventsAsyncHelper( request, handler, context ); } );
}

void HealthClient::DescribeEventsAsyncHelper(const DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEvents(request), context);
}

