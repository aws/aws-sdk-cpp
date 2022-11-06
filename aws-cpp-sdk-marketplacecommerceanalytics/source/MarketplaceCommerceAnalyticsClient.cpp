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

#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalyticsClient.h>
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalyticsErrorMarshaller.h>
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalyticsEndpointProvider.h>
#include <aws/marketplacecommerceanalytics/model/GenerateDataSetRequest.h>
#include <aws/marketplacecommerceanalytics/model/StartSupportDataExportRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MarketplaceCommerceAnalytics;
using namespace Aws::MarketplaceCommerceAnalytics::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* MarketplaceCommerceAnalyticsClient::SERVICE_NAME = "marketplacecommerceanalytics";
const char* MarketplaceCommerceAnalyticsClient::ALLOCATION_TAG = "MarketplaceCommerceAnalyticsClient";

MarketplaceCommerceAnalyticsClient::MarketplaceCommerceAnalyticsClient(const MarketplaceCommerceAnalytics::MarketplaceCommerceAnalyticsClientConfiguration& clientConfiguration,
                                                                       std::shared_ptr<MarketplaceCommerceAnalyticsEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MarketplaceCommerceAnalyticsErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

MarketplaceCommerceAnalyticsClient::MarketplaceCommerceAnalyticsClient(const AWSCredentials& credentials,
                                                                       std::shared_ptr<MarketplaceCommerceAnalyticsEndpointProviderBase> endpointProvider,
                                                                       const MarketplaceCommerceAnalytics::MarketplaceCommerceAnalyticsClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MarketplaceCommerceAnalyticsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

MarketplaceCommerceAnalyticsClient::MarketplaceCommerceAnalyticsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                                       std::shared_ptr<MarketplaceCommerceAnalyticsEndpointProviderBase> endpointProvider,
                                                                       const MarketplaceCommerceAnalytics::MarketplaceCommerceAnalyticsClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MarketplaceCommerceAnalyticsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  MarketplaceCommerceAnalyticsClient::MarketplaceCommerceAnalyticsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MarketplaceCommerceAnalyticsErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<MarketplaceCommerceAnalyticsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

MarketplaceCommerceAnalyticsClient::MarketplaceCommerceAnalyticsClient(const AWSCredentials& credentials,
                                                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MarketplaceCommerceAnalyticsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<MarketplaceCommerceAnalyticsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

MarketplaceCommerceAnalyticsClient::MarketplaceCommerceAnalyticsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                                       const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<MarketplaceCommerceAnalyticsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<MarketplaceCommerceAnalyticsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
MarketplaceCommerceAnalyticsClient::~MarketplaceCommerceAnalyticsClient()
{
}

std::shared_ptr<MarketplaceCommerceAnalyticsEndpointProviderBase>& MarketplaceCommerceAnalyticsClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void MarketplaceCommerceAnalyticsClient::init(const MarketplaceCommerceAnalytics::MarketplaceCommerceAnalyticsClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Marketplace Commerce Analytics");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void MarketplaceCommerceAnalyticsClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

GenerateDataSetOutcome MarketplaceCommerceAnalyticsClient::GenerateDataSet(const GenerateDataSetRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GenerateDataSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GenerateDataSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GenerateDataSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GenerateDataSet(request), context);
    } );
}

StartSupportDataExportOutcome MarketplaceCommerceAnalyticsClient::StartSupportDataExport(const StartSupportDataExportRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartSupportDataExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartSupportDataExport, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartSupportDataExportOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartSupportDataExport(request), context);
    } );
}

