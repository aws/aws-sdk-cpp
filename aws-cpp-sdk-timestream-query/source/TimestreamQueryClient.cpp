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
#include <aws/core/platform/Environment.h>

#include <aws/timestream-query/TimestreamQueryClient.h>
#include <aws/timestream-query/TimestreamQueryEndpoint.h>
#include <aws/timestream-query/TimestreamQueryErrorMarshaller.h>
#include <aws/timestream-query/model/CancelQueryRequest.h>
#include <aws/timestream-query/model/CreateScheduledQueryRequest.h>
#include <aws/timestream-query/model/DeleteScheduledQueryRequest.h>
#include <aws/timestream-query/model/DescribeEndpointsRequest.h>
#include <aws/timestream-query/model/DescribeScheduledQueryRequest.h>
#include <aws/timestream-query/model/ExecuteScheduledQueryRequest.h>
#include <aws/timestream-query/model/ListScheduledQueriesRequest.h>
#include <aws/timestream-query/model/ListTagsForResourceRequest.h>
#include <aws/timestream-query/model/PrepareQueryRequest.h>
#include <aws/timestream-query/model/QueryRequest.h>
#include <aws/timestream-query/model/TagResourceRequest.h>
#include <aws/timestream-query/model/UntagResourceRequest.h>
#include <aws/timestream-query/model/UpdateScheduledQueryRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::TimestreamQuery;
using namespace Aws::TimestreamQuery::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

const char* TimestreamQueryClient::SERVICE_NAME = "timestream";
const char* TimestreamQueryClient::ALLOCATION_TAG = "TimestreamQueryClient";

TimestreamQueryClient::TimestreamQueryClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TimestreamQueryErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

TimestreamQueryClient::TimestreamQueryClient(const AWSCredentials& credentials,
                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TimestreamQueryErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

TimestreamQueryClient::TimestreamQueryClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TimestreamQueryErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

TimestreamQueryClient::~TimestreamQueryClient()
{
}

void TimestreamQueryClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Timestream Query");
  LoadTimestreamQuerySpecificConfig(config);
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + TimestreamQueryEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void TimestreamQueryClient::LoadTimestreamQuerySpecificConfig(const Aws::Client::ClientConfiguration& clientConfiguration)
{
  if (!clientConfiguration.endpointOverride.empty())
  {
    m_enableEndpointDiscovery = false;
  }
  else if (clientConfiguration.enableEndpointDiscovery)
  {
    m_enableEndpointDiscovery = clientConfiguration.enableEndpointDiscovery.value();
  }
  else
  {
    m_enableEndpointDiscovery = true;

    Aws::String enableEndpointDiscovery = Aws::Environment::GetEnv("AWS_ENABLE_ENDPOINT_DISCOVERY");
    if (enableEndpointDiscovery.empty())
    {
      enableEndpointDiscovery = Aws::Config::GetCachedConfigValue(clientConfiguration.profileName, "endpoint_discovery_enabled");
    }

    if (enableEndpointDiscovery == "true")
    {
      m_enableEndpointDiscovery = true;
    }
    else if (enableEndpointDiscovery == "false")
    {
      m_enableEndpointDiscovery = false;
    }
    else if (!enableEndpointDiscovery.empty())
    {
      AWS_LOGSTREAM_WARN("TimestreamQueryClient", R"(Using the SDK default configuration for Endpoint Discovery. )"
        R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY" or )"
        R"(your config file's variable "endpoint_discovery_enabled" are explicitly set to "true" or "false" (case-sensitive) or not set at all.)");
    }
  }
}

void TimestreamQueryClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
  m_enableEndpointDiscovery = false;
}

CancelQueryOutcome TimestreamQueryClient::CancelQuery(const CancelQueryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("CancelQuery", "Making request to cached endpoint: " << endpoint);
      uri = m_configScheme + "://" + endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("CancelQuery", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("CancelQuery", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("CancelQuery", "Failed to discover endpoints " << endpointOutcome.GetError());
        return CancelQueryOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
      }
    }
  }
  else
  {
    Aws::String errorMessage = R"(Unable to perform "CancelQuery" without endpoint discovery. )"
      R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
      R"(your config file's variable "endpoint_discovery_enabled" and )"
      R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
    return CancelQueryOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
  }
  return CancelQueryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelQueryOutcomeCallable TimestreamQueryClient::CancelQueryCallable(const CancelQueryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelQueryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelQuery(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TimestreamQueryClient::CancelQueryAsync(const CancelQueryRequest& request, const CancelQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelQuery(request), context);
    } );
}

CreateScheduledQueryOutcome TimestreamQueryClient::CreateScheduledQuery(const CreateScheduledQueryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("CreateScheduledQuery", "Making request to cached endpoint: " << endpoint);
      uri = m_configScheme + "://" + endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("CreateScheduledQuery", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("CreateScheduledQuery", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("CreateScheduledQuery", "Failed to discover endpoints " << endpointOutcome.GetError());
        return CreateScheduledQueryOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
      }
    }
  }
  else
  {
    Aws::String errorMessage = R"(Unable to perform "CreateScheduledQuery" without endpoint discovery. )"
      R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
      R"(your config file's variable "endpoint_discovery_enabled" and )"
      R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
    return CreateScheduledQueryOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
  }
  return CreateScheduledQueryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateScheduledQueryOutcomeCallable TimestreamQueryClient::CreateScheduledQueryCallable(const CreateScheduledQueryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateScheduledQueryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateScheduledQuery(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TimestreamQueryClient::CreateScheduledQueryAsync(const CreateScheduledQueryRequest& request, const CreateScheduledQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateScheduledQuery(request), context);
    } );
}

DeleteScheduledQueryOutcome TimestreamQueryClient::DeleteScheduledQuery(const DeleteScheduledQueryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("DeleteScheduledQuery", "Making request to cached endpoint: " << endpoint);
      uri = m_configScheme + "://" + endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("DeleteScheduledQuery", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("DeleteScheduledQuery", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("DeleteScheduledQuery", "Failed to discover endpoints " << endpointOutcome.GetError());
        return DeleteScheduledQueryOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
      }
    }
  }
  else
  {
    Aws::String errorMessage = R"(Unable to perform "DeleteScheduledQuery" without endpoint discovery. )"
      R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
      R"(your config file's variable "endpoint_discovery_enabled" and )"
      R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
    return DeleteScheduledQueryOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
  }
  return DeleteScheduledQueryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteScheduledQueryOutcomeCallable TimestreamQueryClient::DeleteScheduledQueryCallable(const DeleteScheduledQueryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteScheduledQueryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteScheduledQuery(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TimestreamQueryClient::DeleteScheduledQueryAsync(const DeleteScheduledQueryRequest& request, const DeleteScheduledQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteScheduledQuery(request), context);
    } );
}

DescribeEndpointsOutcome TimestreamQueryClient::DescribeEndpoints(const DescribeEndpointsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEndpointsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEndpointsOutcomeCallable TimestreamQueryClient::DescribeEndpointsCallable(const DescribeEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TimestreamQueryClient::DescribeEndpointsAsync(const DescribeEndpointsRequest& request, const DescribeEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEndpoints(request), context);
    } );
}

DescribeScheduledQueryOutcome TimestreamQueryClient::DescribeScheduledQuery(const DescribeScheduledQueryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("DescribeScheduledQuery", "Making request to cached endpoint: " << endpoint);
      uri = m_configScheme + "://" + endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("DescribeScheduledQuery", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("DescribeScheduledQuery", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("DescribeScheduledQuery", "Failed to discover endpoints " << endpointOutcome.GetError());
        return DescribeScheduledQueryOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
      }
    }
  }
  else
  {
    Aws::String errorMessage = R"(Unable to perform "DescribeScheduledQuery" without endpoint discovery. )"
      R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
      R"(your config file's variable "endpoint_discovery_enabled" and )"
      R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
    return DescribeScheduledQueryOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
  }
  return DescribeScheduledQueryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeScheduledQueryOutcomeCallable TimestreamQueryClient::DescribeScheduledQueryCallable(const DescribeScheduledQueryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeScheduledQueryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeScheduledQuery(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TimestreamQueryClient::DescribeScheduledQueryAsync(const DescribeScheduledQueryRequest& request, const DescribeScheduledQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeScheduledQuery(request), context);
    } );
}

ExecuteScheduledQueryOutcome TimestreamQueryClient::ExecuteScheduledQuery(const ExecuteScheduledQueryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("ExecuteScheduledQuery", "Making request to cached endpoint: " << endpoint);
      uri = m_configScheme + "://" + endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("ExecuteScheduledQuery", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("ExecuteScheduledQuery", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("ExecuteScheduledQuery", "Failed to discover endpoints " << endpointOutcome.GetError());
        return ExecuteScheduledQueryOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
      }
    }
  }
  else
  {
    Aws::String errorMessage = R"(Unable to perform "ExecuteScheduledQuery" without endpoint discovery. )"
      R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
      R"(your config file's variable "endpoint_discovery_enabled" and )"
      R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
    return ExecuteScheduledQueryOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
  }
  return ExecuteScheduledQueryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExecuteScheduledQueryOutcomeCallable TimestreamQueryClient::ExecuteScheduledQueryCallable(const ExecuteScheduledQueryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExecuteScheduledQueryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExecuteScheduledQuery(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TimestreamQueryClient::ExecuteScheduledQueryAsync(const ExecuteScheduledQueryRequest& request, const ExecuteScheduledQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ExecuteScheduledQuery(request), context);
    } );
}

ListScheduledQueriesOutcome TimestreamQueryClient::ListScheduledQueries(const ListScheduledQueriesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("ListScheduledQueries", "Making request to cached endpoint: " << endpoint);
      uri = m_configScheme + "://" + endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("ListScheduledQueries", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("ListScheduledQueries", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("ListScheduledQueries", "Failed to discover endpoints " << endpointOutcome.GetError());
        return ListScheduledQueriesOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
      }
    }
  }
  else
  {
    Aws::String errorMessage = R"(Unable to perform "ListScheduledQueries" without endpoint discovery. )"
      R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
      R"(your config file's variable "endpoint_discovery_enabled" and )"
      R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
    return ListScheduledQueriesOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
  }
  return ListScheduledQueriesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListScheduledQueriesOutcomeCallable TimestreamQueryClient::ListScheduledQueriesCallable(const ListScheduledQueriesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListScheduledQueriesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListScheduledQueries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TimestreamQueryClient::ListScheduledQueriesAsync(const ListScheduledQueriesRequest& request, const ListScheduledQueriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListScheduledQueries(request), context);
    } );
}

ListTagsForResourceOutcome TimestreamQueryClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("ListTagsForResource", "Making request to cached endpoint: " << endpoint);
      uri = m_configScheme + "://" + endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("ListTagsForResource", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("ListTagsForResource", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("ListTagsForResource", "Failed to discover endpoints " << endpointOutcome.GetError());
        return ListTagsForResourceOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
      }
    }
  }
  else
  {
    Aws::String errorMessage = R"(Unable to perform "ListTagsForResource" without endpoint discovery. )"
      R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
      R"(your config file's variable "endpoint_discovery_enabled" and )"
      R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
    return ListTagsForResourceOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
  }
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable TimestreamQueryClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TimestreamQueryClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

PrepareQueryOutcome TimestreamQueryClient::PrepareQuery(const PrepareQueryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("PrepareQuery", "Making request to cached endpoint: " << endpoint);
      uri = m_configScheme + "://" + endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("PrepareQuery", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("PrepareQuery", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("PrepareQuery", "Failed to discover endpoints " << endpointOutcome.GetError());
        return PrepareQueryOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
      }
    }
  }
  else
  {
    Aws::String errorMessage = R"(Unable to perform "PrepareQuery" without endpoint discovery. )"
      R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
      R"(your config file's variable "endpoint_discovery_enabled" and )"
      R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
    return PrepareQueryOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
  }
  return PrepareQueryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PrepareQueryOutcomeCallable TimestreamQueryClient::PrepareQueryCallable(const PrepareQueryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PrepareQueryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PrepareQuery(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TimestreamQueryClient::PrepareQueryAsync(const PrepareQueryRequest& request, const PrepareQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PrepareQuery(request), context);
    } );
}

QueryOutcome TimestreamQueryClient::Query(const QueryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("Query", "Making request to cached endpoint: " << endpoint);
      uri = m_configScheme + "://" + endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("Query", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("Query", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("Query", "Failed to discover endpoints " << endpointOutcome.GetError());
        return QueryOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
      }
    }
  }
  else
  {
    Aws::String errorMessage = R"(Unable to perform "Query" without endpoint discovery. )"
      R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
      R"(your config file's variable "endpoint_discovery_enabled" and )"
      R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
    return QueryOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
  }
  return QueryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

QueryOutcomeCallable TimestreamQueryClient::QueryCallable(const QueryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< QueryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Query(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TimestreamQueryClient::QueryAsync(const QueryRequest& request, const QueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, Query(request), context);
    } );
}

TagResourceOutcome TimestreamQueryClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("TagResource", "Making request to cached endpoint: " << endpoint);
      uri = m_configScheme + "://" + endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("TagResource", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("TagResource", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("TagResource", "Failed to discover endpoints " << endpointOutcome.GetError());
        return TagResourceOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
      }
    }
  }
  else
  {
    Aws::String errorMessage = R"(Unable to perform "TagResource" without endpoint discovery. )"
      R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
      R"(your config file's variable "endpoint_discovery_enabled" and )"
      R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
    return TagResourceOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
  }
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable TimestreamQueryClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TimestreamQueryClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome TimestreamQueryClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("UntagResource", "Making request to cached endpoint: " << endpoint);
      uri = m_configScheme + "://" + endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("UntagResource", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("UntagResource", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("UntagResource", "Failed to discover endpoints " << endpointOutcome.GetError());
        return UntagResourceOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
      }
    }
  }
  else
  {
    Aws::String errorMessage = R"(Unable to perform "UntagResource" without endpoint discovery. )"
      R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
      R"(your config file's variable "endpoint_discovery_enabled" and )"
      R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
    return UntagResourceOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
  }
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable TimestreamQueryClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TimestreamQueryClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateScheduledQueryOutcome TimestreamQueryClient::UpdateScheduledQuery(const UpdateScheduledQueryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  if (m_enableEndpointDiscovery)
  {
    Aws::String endpointKey = "Shared";
    Aws::String endpoint;
    if (m_endpointsCache.Get(endpointKey, endpoint))
    {
      AWS_LOGSTREAM_TRACE("UpdateScheduledQuery", "Making request to cached endpoint: " << endpoint);
      uri = m_configScheme + "://" + endpoint;
    }
    else
    {
      AWS_LOGSTREAM_TRACE("UpdateScheduledQuery", "Endpoint discovery is enabled and there is no usable endpoint in cache. Discovering endpoints from service...");
      DescribeEndpointsRequest endpointRequest;
      auto endpointOutcome = DescribeEndpoints(endpointRequest);
      if (endpointOutcome.IsSuccess() && !endpointOutcome.GetResult().GetEndpoints().empty())
      {
        const auto& item = endpointOutcome.GetResult().GetEndpoints()[0];
        m_endpointsCache.Put(endpointKey, item.GetAddress(), std::chrono::minutes(item.GetCachePeriodInMinutes()));
        uri = m_configScheme + "://" + item.GetAddress();
        AWS_LOGSTREAM_TRACE("UpdateScheduledQuery", "Endpoints cache updated. Address: " << item.GetAddress() << ". Valid in: " << item.GetCachePeriodInMinutes() << " minutes. Making request to newly discovered endpoint.");
      }
      else
      {
        AWS_LOGSTREAM_ERROR("UpdateScheduledQuery", "Failed to discover endpoints " << endpointOutcome.GetError());
        return UpdateScheduledQueryOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::RESOURCE_NOT_FOUND, "INVALID_ENDPOINT", "Failed to discover endpoint", false));
      }
    }
  }
  else
  {
    Aws::String errorMessage = R"(Unable to perform "UpdateScheduledQuery" without endpoint discovery. )"
      R"(Make sure your environment variable "AWS_ENABLE_ENDPOINT_DISCOVERY", )"
      R"(your config file's variable "endpoint_discovery_enabled" and )"
      R"(ClientConfiguration's "enableEndpointDiscovery" are explicitly set to true or not set at all.)";
    return UpdateScheduledQueryOutcome(Aws::Client::AWSError<TimestreamQueryErrors>(TimestreamQueryErrors::INVALID_ACTION, "INVALID_ACTION", errorMessage, false));
  }
  return UpdateScheduledQueryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateScheduledQueryOutcomeCallable TimestreamQueryClient::UpdateScheduledQueryCallable(const UpdateScheduledQueryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateScheduledQueryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateScheduledQuery(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TimestreamQueryClient::UpdateScheduledQueryAsync(const UpdateScheduledQueryRequest& request, const UpdateScheduledQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateScheduledQuery(request), context);
    } );
}

