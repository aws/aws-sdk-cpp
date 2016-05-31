/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalyticsClient.h>
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalyticsEndpoint.h>
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalyticsErrorMarshaller.h>
#include <aws/marketplacecommerceanalytics/model/GenerateDataSetRequest.h>

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
        SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
    Aws::MakeShared<MarketplaceCommerceAnalyticsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MarketplaceCommerceAnalyticsClient::MarketplaceCommerceAnalyticsClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
    Aws::MakeShared<MarketplaceCommerceAnalyticsErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MarketplaceCommerceAnalyticsClient::MarketplaceCommerceAnalyticsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region)
                                                                        : clientConfiguration.authenticationRegion),
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
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty() && config.authenticationRegion.empty())
  {
    ss << MarketplaceCommerceAnalyticsEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

GenerateDataSetOutcome MarketplaceCommerceAnalyticsClient::GenerateDataSet(const GenerateDataSetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
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
  return std::async(std::launch::async, &MarketplaceCommerceAnalyticsClient::GenerateDataSet, this, request);
}

void MarketplaceCommerceAnalyticsClient::GenerateDataSetAsync(const GenerateDataSetRequest& request, const GenerateDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&MarketplaceCommerceAnalyticsClient::GenerateDataSetAsyncHelper, this, request, handler, context);
}

void MarketplaceCommerceAnalyticsClient::GenerateDataSetAsyncHelper(const GenerateDataSetRequest& request, const GenerateDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GenerateDataSet(request), context);
}

