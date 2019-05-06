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

#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalyticsClient.h>
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalyticsEndpoint.h>
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalyticsErrorMarshaller.h>
#include <aws/marketplacecommerceanalytics/model/GenerateDataSetRequest.h>
#include <aws/marketplacecommerceanalytics/model/StartSupportDataExportRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MarketplaceCommerceAnalytics;
using namespace Aws::MarketplaceCommerceAnalytics::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "marketplacecommerceanalytics";
static const char* ALLOCATION_TAG = "MarketplaceCommerceAnalyticsClient";


MarketplaceCommerceAnalyticsClient::MarketplaceCommerceAnalyticsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<MarketplaceCommerceAnalyticsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MarketplaceCommerceAnalyticsClient::MarketplaceCommerceAnalyticsClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<MarketplaceCommerceAnalyticsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MarketplaceCommerceAnalyticsClient::MarketplaceCommerceAnalyticsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<MarketplaceCommerceAnalyticsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MarketplaceCommerceAnalyticsClient::~MarketplaceCommerceAnalyticsClient()
{
}

void MarketplaceCommerceAnalyticsClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + MarketplaceCommerceAnalyticsEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void MarketplaceCommerceAnalyticsClient::OverrideEndpoint(const Aws::String& endpoint)
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

GenerateDataSetOutcome MarketplaceCommerceAnalyticsClient::GenerateDataSet(const GenerateDataSetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GenerateDataSetOutcome(GenerateDataSetResult(outcome.GetResult()));
  }
  else
  {
    return GenerateDataSetOutcome(outcome.GetError());
  }
}

GenerateDataSetOutcomeCallable MarketplaceCommerceAnalyticsClient::GenerateDataSetCallable(const GenerateDataSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GenerateDataSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GenerateDataSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MarketplaceCommerceAnalyticsClient::GenerateDataSetAsync(const GenerateDataSetRequest& request, const GenerateDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GenerateDataSetAsyncHelper( request, handler, context ); } );
}

void MarketplaceCommerceAnalyticsClient::GenerateDataSetAsyncHelper(const GenerateDataSetRequest& request, const GenerateDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GenerateDataSet(request), context);
}

StartSupportDataExportOutcome MarketplaceCommerceAnalyticsClient::StartSupportDataExport(const StartSupportDataExportRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartSupportDataExportOutcome(StartSupportDataExportResult(outcome.GetResult()));
  }
  else
  {
    return StartSupportDataExportOutcome(outcome.GetError());
  }
}

StartSupportDataExportOutcomeCallable MarketplaceCommerceAnalyticsClient::StartSupportDataExportCallable(const StartSupportDataExportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartSupportDataExportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartSupportDataExport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MarketplaceCommerceAnalyticsClient::StartSupportDataExportAsync(const StartSupportDataExportRequest& request, const StartSupportDataExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartSupportDataExportAsyncHelper( request, handler, context ); } );
}

void MarketplaceCommerceAnalyticsClient::StartSupportDataExportAsyncHelper(const StartSupportDataExportRequest& request, const StartSupportDataExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartSupportDataExport(request), context);
}

