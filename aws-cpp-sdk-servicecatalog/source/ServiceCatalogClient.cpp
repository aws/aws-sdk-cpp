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
#include <aws/servicecatalog/ServiceCatalogClient.h>
#include <aws/servicecatalog/ServiceCatalogEndpoint.h>
#include <aws/servicecatalog/ServiceCatalogErrorMarshaller.h>
#include <aws/servicecatalog/model/DescribeProductRequest.h>
#include <aws/servicecatalog/model/DescribeProductViewRequest.h>
#include <aws/servicecatalog/model/DescribeProvisioningParametersRequest.h>
#include <aws/servicecatalog/model/DescribeRecordRequest.h>
#include <aws/servicecatalog/model/ListLaunchPathsRequest.h>
#include <aws/servicecatalog/model/ListRecordHistoryRequest.h>
#include <aws/servicecatalog/model/ProvisionProductRequest.h>
#include <aws/servicecatalog/model/ScanProvisionedProductsRequest.h>
#include <aws/servicecatalog/model/SearchProductsRequest.h>
#include <aws/servicecatalog/model/TerminateProvisionedProductRequest.h>
#include <aws/servicecatalog/model/UpdateProvisionedProductRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ServiceCatalog;
using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "servicecatalog";
static const char* ALLOCATION_TAG = "ServiceCatalogClient";


ServiceCatalogClient::ServiceCatalogClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ServiceCatalogErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ServiceCatalogClient::ServiceCatalogClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ServiceCatalogErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ServiceCatalogClient::ServiceCatalogClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ServiceCatalogErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ServiceCatalogClient::~ServiceCatalogClient()
{
}

void ServiceCatalogClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << ServiceCatalogEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

DescribeProductOutcome ServiceCatalogClient::DescribeProduct(const DescribeProductRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeProductOutcome(DescribeProductResult(outcome.GetResult()));
  }
  else
  {
    return DescribeProductOutcome(outcome.GetError());
  }
}

DescribeProductOutcomeCallable ServiceCatalogClient::DescribeProductCallable(const DescribeProductRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->DescribeProduct(request); } );
}

void ServiceCatalogClient::DescribeProductAsync(const DescribeProductRequest& request, const DescribeProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeProductAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DescribeProductAsyncHelper(const DescribeProductRequest& request, const DescribeProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeProduct(request), context);
}

DescribeProductViewOutcome ServiceCatalogClient::DescribeProductView(const DescribeProductViewRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeProductViewOutcome(DescribeProductViewResult(outcome.GetResult()));
  }
  else
  {
    return DescribeProductViewOutcome(outcome.GetError());
  }
}

DescribeProductViewOutcomeCallable ServiceCatalogClient::DescribeProductViewCallable(const DescribeProductViewRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->DescribeProductView(request); } );
}

void ServiceCatalogClient::DescribeProductViewAsync(const DescribeProductViewRequest& request, const DescribeProductViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeProductViewAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DescribeProductViewAsyncHelper(const DescribeProductViewRequest& request, const DescribeProductViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeProductView(request), context);
}

DescribeProvisioningParametersOutcome ServiceCatalogClient::DescribeProvisioningParameters(const DescribeProvisioningParametersRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeProvisioningParametersOutcome(DescribeProvisioningParametersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeProvisioningParametersOutcome(outcome.GetError());
  }
}

DescribeProvisioningParametersOutcomeCallable ServiceCatalogClient::DescribeProvisioningParametersCallable(const DescribeProvisioningParametersRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->DescribeProvisioningParameters(request); } );
}

void ServiceCatalogClient::DescribeProvisioningParametersAsync(const DescribeProvisioningParametersRequest& request, const DescribeProvisioningParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeProvisioningParametersAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DescribeProvisioningParametersAsyncHelper(const DescribeProvisioningParametersRequest& request, const DescribeProvisioningParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeProvisioningParameters(request), context);
}

DescribeRecordOutcome ServiceCatalogClient::DescribeRecord(const DescribeRecordRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeRecordOutcome(DescribeRecordResult(outcome.GetResult()));
  }
  else
  {
    return DescribeRecordOutcome(outcome.GetError());
  }
}

DescribeRecordOutcomeCallable ServiceCatalogClient::DescribeRecordCallable(const DescribeRecordRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->DescribeRecord(request); } );
}

void ServiceCatalogClient::DescribeRecordAsync(const DescribeRecordRequest& request, const DescribeRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeRecordAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::DescribeRecordAsyncHelper(const DescribeRecordRequest& request, const DescribeRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRecord(request), context);
}

ListLaunchPathsOutcome ServiceCatalogClient::ListLaunchPaths(const ListLaunchPathsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListLaunchPathsOutcome(ListLaunchPathsResult(outcome.GetResult()));
  }
  else
  {
    return ListLaunchPathsOutcome(outcome.GetError());
  }
}

ListLaunchPathsOutcomeCallable ServiceCatalogClient::ListLaunchPathsCallable(const ListLaunchPathsRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->ListLaunchPaths(request); } );
}

void ServiceCatalogClient::ListLaunchPathsAsync(const ListLaunchPathsRequest& request, const ListLaunchPathsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListLaunchPathsAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ListLaunchPathsAsyncHelper(const ListLaunchPathsRequest& request, const ListLaunchPathsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListLaunchPaths(request), context);
}

ListRecordHistoryOutcome ServiceCatalogClient::ListRecordHistory(const ListRecordHistoryRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListRecordHistoryOutcome(ListRecordHistoryResult(outcome.GetResult()));
  }
  else
  {
    return ListRecordHistoryOutcome(outcome.GetError());
  }
}

ListRecordHistoryOutcomeCallable ServiceCatalogClient::ListRecordHistoryCallable(const ListRecordHistoryRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->ListRecordHistory(request); } );
}

void ServiceCatalogClient::ListRecordHistoryAsync(const ListRecordHistoryRequest& request, const ListRecordHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRecordHistoryAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ListRecordHistoryAsyncHelper(const ListRecordHistoryRequest& request, const ListRecordHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRecordHistory(request), context);
}

ProvisionProductOutcome ServiceCatalogClient::ProvisionProduct(const ProvisionProductRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ProvisionProductOutcome(ProvisionProductResult(outcome.GetResult()));
  }
  else
  {
    return ProvisionProductOutcome(outcome.GetError());
  }
}

ProvisionProductOutcomeCallable ServiceCatalogClient::ProvisionProductCallable(const ProvisionProductRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->ProvisionProduct(request); } );
}

void ServiceCatalogClient::ProvisionProductAsync(const ProvisionProductRequest& request, const ProvisionProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ProvisionProductAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ProvisionProductAsyncHelper(const ProvisionProductRequest& request, const ProvisionProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ProvisionProduct(request), context);
}

ScanProvisionedProductsOutcome ServiceCatalogClient::ScanProvisionedProducts(const ScanProvisionedProductsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ScanProvisionedProductsOutcome(ScanProvisionedProductsResult(outcome.GetResult()));
  }
  else
  {
    return ScanProvisionedProductsOutcome(outcome.GetError());
  }
}

ScanProvisionedProductsOutcomeCallable ServiceCatalogClient::ScanProvisionedProductsCallable(const ScanProvisionedProductsRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->ScanProvisionedProducts(request); } );
}

void ServiceCatalogClient::ScanProvisionedProductsAsync(const ScanProvisionedProductsRequest& request, const ScanProvisionedProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ScanProvisionedProductsAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::ScanProvisionedProductsAsyncHelper(const ScanProvisionedProductsRequest& request, const ScanProvisionedProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ScanProvisionedProducts(request), context);
}

SearchProductsOutcome ServiceCatalogClient::SearchProducts(const SearchProductsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SearchProductsOutcome(SearchProductsResult(outcome.GetResult()));
  }
  else
  {
    return SearchProductsOutcome(outcome.GetError());
  }
}

SearchProductsOutcomeCallable ServiceCatalogClient::SearchProductsCallable(const SearchProductsRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->SearchProducts(request); } );
}

void ServiceCatalogClient::SearchProductsAsync(const SearchProductsRequest& request, const SearchProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SearchProductsAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::SearchProductsAsyncHelper(const SearchProductsRequest& request, const SearchProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SearchProducts(request), context);
}

TerminateProvisionedProductOutcome ServiceCatalogClient::TerminateProvisionedProduct(const TerminateProvisionedProductRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return TerminateProvisionedProductOutcome(TerminateProvisionedProductResult(outcome.GetResult()));
  }
  else
  {
    return TerminateProvisionedProductOutcome(outcome.GetError());
  }
}

TerminateProvisionedProductOutcomeCallable ServiceCatalogClient::TerminateProvisionedProductCallable(const TerminateProvisionedProductRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->TerminateProvisionedProduct(request); } );
}

void ServiceCatalogClient::TerminateProvisionedProductAsync(const TerminateProvisionedProductRequest& request, const TerminateProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TerminateProvisionedProductAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::TerminateProvisionedProductAsyncHelper(const TerminateProvisionedProductRequest& request, const TerminateProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TerminateProvisionedProduct(request), context);
}

UpdateProvisionedProductOutcome ServiceCatalogClient::UpdateProvisionedProduct(const UpdateProvisionedProductRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateProvisionedProductOutcome(UpdateProvisionedProductResult(outcome.GetResult()));
  }
  else
  {
    return UpdateProvisionedProductOutcome(outcome.GetError());
  }
}

UpdateProvisionedProductOutcomeCallable ServiceCatalogClient::UpdateProvisionedProductCallable(const UpdateProvisionedProductRequest& request) const
{
  return std::async(std::launch::async, [this, request](){ return this->UpdateProvisionedProduct(request); } );
}

void ServiceCatalogClient::UpdateProvisionedProductAsync(const UpdateProvisionedProductRequest& request, const UpdateProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateProvisionedProductAsyncHelper( request, handler, context ); } );
}

void ServiceCatalogClient::UpdateProvisionedProductAsyncHelper(const UpdateProvisionedProductRequest& request, const UpdateProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateProvisionedProduct(request), context);
}

