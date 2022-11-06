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

#include <aws/pi/PIClient.h>
#include <aws/pi/PIErrorMarshaller.h>
#include <aws/pi/PIEndpointProvider.h>
#include <aws/pi/model/DescribeDimensionKeysRequest.h>
#include <aws/pi/model/GetDimensionKeyDetailsRequest.h>
#include <aws/pi/model/GetResourceMetadataRequest.h>
#include <aws/pi/model/GetResourceMetricsRequest.h>
#include <aws/pi/model/ListAvailableResourceDimensionsRequest.h>
#include <aws/pi/model/ListAvailableResourceMetricsRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::PI;
using namespace Aws::PI::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* PIClient::SERVICE_NAME = "pi";
const char* PIClient::ALLOCATION_TAG = "PIClient";

PIClient::PIClient(const PI::PIClientConfiguration& clientConfiguration,
                   std::shared_ptr<PIEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PIErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

PIClient::PIClient(const AWSCredentials& credentials,
                   std::shared_ptr<PIEndpointProviderBase> endpointProvider,
                   const PI::PIClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PIErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

PIClient::PIClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                   std::shared_ptr<PIEndpointProviderBase> endpointProvider,
                   const PI::PIClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PIErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  PIClient::PIClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PIErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<PIEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

PIClient::PIClient(const AWSCredentials& credentials,
                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PIErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<PIEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

PIClient::PIClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PIErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<PIEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
PIClient::~PIClient()
{
}

std::shared_ptr<PIEndpointProviderBase>& PIClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void PIClient::init(const PI::PIClientConfiguration& config)
{
  AWSClient::SetServiceClientName("PI");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void PIClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

DescribeDimensionKeysOutcome PIClient::DescribeDimensionKeys(const DescribeDimensionKeysRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeDimensionKeys, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeDimensionKeys, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeDimensionKeysOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDimensionKeysOutcomeCallable PIClient::DescribeDimensionKeysCallable(const DescribeDimensionKeysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDimensionKeysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDimensionKeys(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PIClient::DescribeDimensionKeysAsync(const DescribeDimensionKeysRequest& request, const DescribeDimensionKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDimensionKeys(request), context);
    } );
}

GetDimensionKeyDetailsOutcome PIClient::GetDimensionKeyDetails(const GetDimensionKeyDetailsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDimensionKeyDetails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDimensionKeyDetails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetDimensionKeyDetailsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDimensionKeyDetailsOutcomeCallable PIClient::GetDimensionKeyDetailsCallable(const GetDimensionKeyDetailsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDimensionKeyDetailsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDimensionKeyDetails(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PIClient::GetDimensionKeyDetailsAsync(const GetDimensionKeyDetailsRequest& request, const GetDimensionKeyDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDimensionKeyDetails(request), context);
    } );
}

GetResourceMetadataOutcome PIClient::GetResourceMetadata(const GetResourceMetadataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetResourceMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetResourceMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetResourceMetadataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetResourceMetadataOutcomeCallable PIClient::GetResourceMetadataCallable(const GetResourceMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourceMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResourceMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PIClient::GetResourceMetadataAsync(const GetResourceMetadataRequest& request, const GetResourceMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetResourceMetadata(request), context);
    } );
}

GetResourceMetricsOutcome PIClient::GetResourceMetrics(const GetResourceMetricsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetResourceMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetResourceMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetResourceMetricsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetResourceMetricsOutcomeCallable PIClient::GetResourceMetricsCallable(const GetResourceMetricsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourceMetricsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResourceMetrics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PIClient::GetResourceMetricsAsync(const GetResourceMetricsRequest& request, const GetResourceMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetResourceMetrics(request), context);
    } );
}

ListAvailableResourceDimensionsOutcome PIClient::ListAvailableResourceDimensions(const ListAvailableResourceDimensionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAvailableResourceDimensions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAvailableResourceDimensions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListAvailableResourceDimensionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAvailableResourceDimensionsOutcomeCallable PIClient::ListAvailableResourceDimensionsCallable(const ListAvailableResourceDimensionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAvailableResourceDimensionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAvailableResourceDimensions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PIClient::ListAvailableResourceDimensionsAsync(const ListAvailableResourceDimensionsRequest& request, const ListAvailableResourceDimensionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAvailableResourceDimensions(request), context);
    } );
}

ListAvailableResourceMetricsOutcome PIClient::ListAvailableResourceMetrics(const ListAvailableResourceMetricsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAvailableResourceMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAvailableResourceMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListAvailableResourceMetricsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListAvailableResourceMetricsOutcomeCallable PIClient::ListAvailableResourceMetricsCallable(const ListAvailableResourceMetricsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAvailableResourceMetricsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAvailableResourceMetrics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PIClient::ListAvailableResourceMetricsAsync(const ListAvailableResourceMetricsRequest& request, const ListAvailableResourceMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListAvailableResourceMetrics(request), context);
    } );
}

