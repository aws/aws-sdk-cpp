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

#include <aws/appconfigdata/AppConfigDataClient.h>
#include <aws/appconfigdata/AppConfigDataErrorMarshaller.h>
#include <aws/appconfigdata/AppConfigDataEndpointProvider.h>
#include <aws/appconfigdata/model/GetLatestConfigurationRequest.h>
#include <aws/appconfigdata/model/StartConfigurationSessionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::AppConfigData;
using namespace Aws::AppConfigData::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* AppConfigDataClient::SERVICE_NAME = "appconfig";
const char* AppConfigDataClient::ALLOCATION_TAG = "AppConfigDataClient";

AppConfigDataClient::AppConfigDataClient(const AppConfigData::AppConfigDataClientConfiguration& clientConfiguration,
                                         std::shared_ptr<AppConfigDataEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppConfigDataErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

AppConfigDataClient::AppConfigDataClient(const AWSCredentials& credentials,
                                         std::shared_ptr<AppConfigDataEndpointProviderBase> endpointProvider,
                                         const AppConfigData::AppConfigDataClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppConfigDataErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

AppConfigDataClient::AppConfigDataClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<AppConfigDataEndpointProviderBase> endpointProvider,
                                         const AppConfigData::AppConfigDataClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppConfigDataErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  AppConfigDataClient::AppConfigDataClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppConfigDataErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<AppConfigDataEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

AppConfigDataClient::AppConfigDataClient(const AWSCredentials& credentials,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppConfigDataErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<AppConfigDataEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

AppConfigDataClient::AppConfigDataClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppConfigDataErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<AppConfigDataEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
AppConfigDataClient::~AppConfigDataClient()
{
}

std::shared_ptr<AppConfigDataEndpointProviderBase>& AppConfigDataClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void AppConfigDataClient::init(const AppConfigData::AppConfigDataClientConfiguration& config)
{
  AWSClient::SetServiceClientName("AppConfigData");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void AppConfigDataClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

GetLatestConfigurationOutcome AppConfigDataClient::GetLatestConfiguration(const GetLatestConfigurationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLatestConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ConfigurationTokenHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLatestConfiguration", "Required field: ConfigurationToken, is not set");
    return GetLatestConfigurationOutcome(Aws::Client::AWSError<AppConfigDataErrors>(AppConfigDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConfigurationToken]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLatestConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configuration");
  return GetLatestConfigurationOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
}

GetLatestConfigurationOutcomeCallable AppConfigDataClient::GetLatestConfigurationCallable(const GetLatestConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLatestConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLatestConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigDataClient::GetLatestConfigurationAsync(const GetLatestConfigurationRequest& request, const GetLatestConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLatestConfiguration(request), context);
    } );
}

StartConfigurationSessionOutcome AppConfigDataClient::StartConfigurationSession(const StartConfigurationSessionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartConfigurationSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartConfigurationSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/configurationsessions");
  return StartConfigurationSessionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartConfigurationSessionOutcomeCallable AppConfigDataClient::StartConfigurationSessionCallable(const StartConfigurationSessionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartConfigurationSessionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartConfigurationSession(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppConfigDataClient::StartConfigurationSessionAsync(const StartConfigurationSessionRequest& request, const StartConfigurationSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartConfigurationSession(request), context);
    } );
}

