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

#include <aws/pi/PIClient.h>
#include <aws/pi/PIEndpoint.h>
#include <aws/pi/PIErrorMarshaller.h>
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

static const char* SERVICE_NAME = "pi";
static const char* ALLOCATION_TAG = "PIClient";

PIClient::PIClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PIErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

PIClient::PIClient(const AWSCredentials& credentials,
                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PIErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

PIClient::PIClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PIErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

PIClient::~PIClient()
{
}

void PIClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("PI");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + PIEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void PIClient::OverrideEndpoint(const Aws::String& endpoint)
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

DescribeDimensionKeysOutcome PIClient::DescribeDimensionKeys(const DescribeDimensionKeysRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDimensionKeysOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDimensionKeysAsyncHelper( request, handler, context ); } );
}

void PIClient::DescribeDimensionKeysAsyncHelper(const DescribeDimensionKeysRequest& request, const DescribeDimensionKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDimensionKeys(request), context);
}

GetDimensionKeyDetailsOutcome PIClient::GetDimensionKeyDetails(const GetDimensionKeyDetailsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetDimensionKeyDetailsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetDimensionKeyDetailsAsyncHelper( request, handler, context ); } );
}

void PIClient::GetDimensionKeyDetailsAsyncHelper(const GetDimensionKeyDetailsRequest& request, const GetDimensionKeyDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDimensionKeyDetails(request), context);
}

GetResourceMetadataOutcome PIClient::GetResourceMetadata(const GetResourceMetadataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetResourceMetadataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetResourceMetadataAsyncHelper( request, handler, context ); } );
}

void PIClient::GetResourceMetadataAsyncHelper(const GetResourceMetadataRequest& request, const GetResourceMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetResourceMetadata(request), context);
}

GetResourceMetricsOutcome PIClient::GetResourceMetrics(const GetResourceMetricsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetResourceMetricsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetResourceMetricsAsyncHelper( request, handler, context ); } );
}

void PIClient::GetResourceMetricsAsyncHelper(const GetResourceMetricsRequest& request, const GetResourceMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetResourceMetrics(request), context);
}

ListAvailableResourceDimensionsOutcome PIClient::ListAvailableResourceDimensions(const ListAvailableResourceDimensionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAvailableResourceDimensionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListAvailableResourceDimensionsAsyncHelper( request, handler, context ); } );
}

void PIClient::ListAvailableResourceDimensionsAsyncHelper(const ListAvailableResourceDimensionsRequest& request, const ListAvailableResourceDimensionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAvailableResourceDimensions(request), context);
}

ListAvailableResourceMetricsOutcome PIClient::ListAvailableResourceMetrics(const ListAvailableResourceMetricsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListAvailableResourceMetricsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ListAvailableResourceMetricsAsyncHelper( request, handler, context ); } );
}

void PIClient::ListAvailableResourceMetricsAsyncHelper(const ListAvailableResourceMetricsRequest& request, const ListAvailableResourceMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListAvailableResourceMetrics(request), context);
}

