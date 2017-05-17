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
#include <aws/meteringmarketplace/MarketplaceMeteringClient.h>
#include <aws/meteringmarketplace/MarketplaceMeteringEndpoint.h>
#include <aws/meteringmarketplace/MarketplaceMeteringErrorMarshaller.h>
#include <aws/meteringmarketplace/model/BatchMeterUsageRequest.h>
#include <aws/meteringmarketplace/model/MeterUsageRequest.h>
#include <aws/meteringmarketplace/model/ResolveCustomerRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MarketplaceMetering;
using namespace Aws::MarketplaceMetering::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "aws-marketplace";
static const char* ALLOCATION_TAG = "MarketplaceMeteringClient";


MarketplaceMeteringClient::MarketplaceMeteringClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<MarketplaceMeteringErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MarketplaceMeteringClient::MarketplaceMeteringClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<MarketplaceMeteringErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MarketplaceMeteringClient::MarketplaceMeteringClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<MarketplaceMeteringErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MarketplaceMeteringClient::~MarketplaceMeteringClient()
{
}

void MarketplaceMeteringClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << MarketplaceMeteringEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

BatchMeterUsageOutcome MarketplaceMeteringClient::BatchMeterUsage(const BatchMeterUsageRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return BatchMeterUsageOutcome(BatchMeterUsageResult(outcome.GetResult()));
  }
  else
  {
    return BatchMeterUsageOutcome(outcome.GetError());
  }
}

BatchMeterUsageOutcomeCallable MarketplaceMeteringClient::BatchMeterUsageCallable(const BatchMeterUsageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchMeterUsageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchMeterUsage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MarketplaceMeteringClient::BatchMeterUsageAsync(const BatchMeterUsageRequest& request, const BatchMeterUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BatchMeterUsageAsyncHelper( request, handler, context ); } );
}

void MarketplaceMeteringClient::BatchMeterUsageAsyncHelper(const BatchMeterUsageRequest& request, const BatchMeterUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchMeterUsage(request), context);
}

MeterUsageOutcome MarketplaceMeteringClient::MeterUsage(const MeterUsageRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return MeterUsageOutcome(MeterUsageResult(outcome.GetResult()));
  }
  else
  {
    return MeterUsageOutcome(outcome.GetError());
  }
}

MeterUsageOutcomeCallable MarketplaceMeteringClient::MeterUsageCallable(const MeterUsageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< MeterUsageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->MeterUsage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MarketplaceMeteringClient::MeterUsageAsync(const MeterUsageRequest& request, const MeterUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->MeterUsageAsyncHelper( request, handler, context ); } );
}

void MarketplaceMeteringClient::MeterUsageAsyncHelper(const MeterUsageRequest& request, const MeterUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, MeterUsage(request), context);
}

ResolveCustomerOutcome MarketplaceMeteringClient::ResolveCustomer(const ResolveCustomerRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ResolveCustomerOutcome(ResolveCustomerResult(outcome.GetResult()));
  }
  else
  {
    return ResolveCustomerOutcome(outcome.GetError());
  }
}

ResolveCustomerOutcomeCallable MarketplaceMeteringClient::ResolveCustomerCallable(const ResolveCustomerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResolveCustomerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResolveCustomer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MarketplaceMeteringClient::ResolveCustomerAsync(const ResolveCustomerRequest& request, const ResolveCustomerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ResolveCustomerAsyncHelper( request, handler, context ); } );
}

void MarketplaceMeteringClient::ResolveCustomerAsyncHelper(const ResolveCustomerRequest& request, const ResolveCustomerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResolveCustomer(request), context);
}

