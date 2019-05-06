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

#include <aws/servicediscovery/ServiceDiscoveryClient.h>
#include <aws/servicediscovery/ServiceDiscoveryEndpoint.h>
#include <aws/servicediscovery/ServiceDiscoveryErrorMarshaller.h>
#include <aws/servicediscovery/model/CreateHttpNamespaceRequest.h>
#include <aws/servicediscovery/model/CreatePrivateDnsNamespaceRequest.h>
#include <aws/servicediscovery/model/CreatePublicDnsNamespaceRequest.h>
#include <aws/servicediscovery/model/CreateServiceRequest.h>
#include <aws/servicediscovery/model/DeleteNamespaceRequest.h>
#include <aws/servicediscovery/model/DeleteServiceRequest.h>
#include <aws/servicediscovery/model/DeregisterInstanceRequest.h>
#include <aws/servicediscovery/model/DiscoverInstancesRequest.h>
#include <aws/servicediscovery/model/GetInstanceRequest.h>
#include <aws/servicediscovery/model/GetInstancesHealthStatusRequest.h>
#include <aws/servicediscovery/model/GetNamespaceRequest.h>
#include <aws/servicediscovery/model/GetOperationRequest.h>
#include <aws/servicediscovery/model/GetServiceRequest.h>
#include <aws/servicediscovery/model/ListInstancesRequest.h>
#include <aws/servicediscovery/model/ListNamespacesRequest.h>
#include <aws/servicediscovery/model/ListOperationsRequest.h>
#include <aws/servicediscovery/model/ListServicesRequest.h>
#include <aws/servicediscovery/model/RegisterInstanceRequest.h>
#include <aws/servicediscovery/model/UpdateInstanceCustomHealthStatusRequest.h>
#include <aws/servicediscovery/model/UpdateServiceRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ServiceDiscovery;
using namespace Aws::ServiceDiscovery::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "servicediscovery";
static const char* ALLOCATION_TAG = "ServiceDiscoveryClient";


ServiceDiscoveryClient::ServiceDiscoveryClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ServiceDiscoveryErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ServiceDiscoveryClient::ServiceDiscoveryClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ServiceDiscoveryErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ServiceDiscoveryClient::ServiceDiscoveryClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ServiceDiscoveryErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ServiceDiscoveryClient::~ServiceDiscoveryClient()
{
}

void ServiceDiscoveryClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  m_scheme = m_configScheme;
  if (config.endpointOverride.empty())
  {
      m_baseUri = ServiceDiscoveryEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
  m_enableHostPrefixInjection = config.enableHostPrefixInjection;
}

void ServiceDiscoveryClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0)
  {
      m_scheme = "http";
      m_baseUri = endpoint.substr(7);
  }
  else if (endpoint.compare(0, 8, "https://") == 0)
  {
      m_scheme = "https";
      m_baseUri = endpoint.substr(8);
  }
  else
  {
      m_scheme = m_configScheme;
      m_baseUri = endpoint;
  }
}

CreateHttpNamespaceOutcome ServiceDiscoveryClient::CreateHttpNamespace(const CreateHttpNamespaceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateHttpNamespaceOutcome(CreateHttpNamespaceResult(outcome.GetResult()));
  }
  else
  {
    return CreateHttpNamespaceOutcome(outcome.GetError());
  }
}

CreateHttpNamespaceOutcomeCallable ServiceDiscoveryClient::CreateHttpNamespaceCallable(const CreateHttpNamespaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateHttpNamespaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateHttpNamespace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClient::CreateHttpNamespaceAsync(const CreateHttpNamespaceRequest& request, const CreateHttpNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateHttpNamespaceAsyncHelper( request, handler, context ); } );
}

void ServiceDiscoveryClient::CreateHttpNamespaceAsyncHelper(const CreateHttpNamespaceRequest& request, const CreateHttpNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateHttpNamespace(request), context);
}

CreatePrivateDnsNamespaceOutcome ServiceDiscoveryClient::CreatePrivateDnsNamespace(const CreatePrivateDnsNamespaceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreatePrivateDnsNamespaceOutcome(CreatePrivateDnsNamespaceResult(outcome.GetResult()));
  }
  else
  {
    return CreatePrivateDnsNamespaceOutcome(outcome.GetError());
  }
}

CreatePrivateDnsNamespaceOutcomeCallable ServiceDiscoveryClient::CreatePrivateDnsNamespaceCallable(const CreatePrivateDnsNamespaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePrivateDnsNamespaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePrivateDnsNamespace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClient::CreatePrivateDnsNamespaceAsync(const CreatePrivateDnsNamespaceRequest& request, const CreatePrivateDnsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePrivateDnsNamespaceAsyncHelper( request, handler, context ); } );
}

void ServiceDiscoveryClient::CreatePrivateDnsNamespaceAsyncHelper(const CreatePrivateDnsNamespaceRequest& request, const CreatePrivateDnsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePrivateDnsNamespace(request), context);
}

CreatePublicDnsNamespaceOutcome ServiceDiscoveryClient::CreatePublicDnsNamespace(const CreatePublicDnsNamespaceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreatePublicDnsNamespaceOutcome(CreatePublicDnsNamespaceResult(outcome.GetResult()));
  }
  else
  {
    return CreatePublicDnsNamespaceOutcome(outcome.GetError());
  }
}

CreatePublicDnsNamespaceOutcomeCallable ServiceDiscoveryClient::CreatePublicDnsNamespaceCallable(const CreatePublicDnsNamespaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePublicDnsNamespaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePublicDnsNamespace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClient::CreatePublicDnsNamespaceAsync(const CreatePublicDnsNamespaceRequest& request, const CreatePublicDnsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePublicDnsNamespaceAsyncHelper( request, handler, context ); } );
}

void ServiceDiscoveryClient::CreatePublicDnsNamespaceAsyncHelper(const CreatePublicDnsNamespaceRequest& request, const CreatePublicDnsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePublicDnsNamespace(request), context);
}

CreateServiceOutcome ServiceDiscoveryClient::CreateService(const CreateServiceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateServiceOutcome(CreateServiceResult(outcome.GetResult()));
  }
  else
  {
    return CreateServiceOutcome(outcome.GetError());
  }
}

CreateServiceOutcomeCallable ServiceDiscoveryClient::CreateServiceCallable(const CreateServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClient::CreateServiceAsync(const CreateServiceRequest& request, const CreateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateServiceAsyncHelper( request, handler, context ); } );
}

void ServiceDiscoveryClient::CreateServiceAsyncHelper(const CreateServiceRequest& request, const CreateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateService(request), context);
}

DeleteNamespaceOutcome ServiceDiscoveryClient::DeleteNamespace(const DeleteNamespaceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteNamespaceOutcome(DeleteNamespaceResult(outcome.GetResult()));
  }
  else
  {
    return DeleteNamespaceOutcome(outcome.GetError());
  }
}

DeleteNamespaceOutcomeCallable ServiceDiscoveryClient::DeleteNamespaceCallable(const DeleteNamespaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNamespaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNamespace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClient::DeleteNamespaceAsync(const DeleteNamespaceRequest& request, const DeleteNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteNamespaceAsyncHelper( request, handler, context ); } );
}

void ServiceDiscoveryClient::DeleteNamespaceAsyncHelper(const DeleteNamespaceRequest& request, const DeleteNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteNamespace(request), context);
}

DeleteServiceOutcome ServiceDiscoveryClient::DeleteService(const DeleteServiceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteServiceOutcome(DeleteServiceResult(outcome.GetResult()));
  }
  else
  {
    return DeleteServiceOutcome(outcome.GetError());
  }
}

DeleteServiceOutcomeCallable ServiceDiscoveryClient::DeleteServiceCallable(const DeleteServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClient::DeleteServiceAsync(const DeleteServiceRequest& request, const DeleteServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteServiceAsyncHelper( request, handler, context ); } );
}

void ServiceDiscoveryClient::DeleteServiceAsyncHelper(const DeleteServiceRequest& request, const DeleteServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteService(request), context);
}

DeregisterInstanceOutcome ServiceDiscoveryClient::DeregisterInstance(const DeregisterInstanceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeregisterInstanceOutcome(DeregisterInstanceResult(outcome.GetResult()));
  }
  else
  {
    return DeregisterInstanceOutcome(outcome.GetError());
  }
}

DeregisterInstanceOutcomeCallable ServiceDiscoveryClient::DeregisterInstanceCallable(const DeregisterInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClient::DeregisterInstanceAsync(const DeregisterInstanceRequest& request, const DeregisterInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeregisterInstanceAsyncHelper( request, handler, context ); } );
}

void ServiceDiscoveryClient::DeregisterInstanceAsyncHelper(const DeregisterInstanceRequest& request, const DeregisterInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeregisterInstance(request), context);
}

DiscoverInstancesOutcome ServiceDiscoveryClient::DiscoverInstances(const DiscoverInstancesRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("data-" + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("DiscoverInstances", "Invalid DNS host: " << uri.GetAuthority());
      return DiscoverInstancesOutcome(Aws::Client::AWSError<ServiceDiscoveryErrors>(ServiceDiscoveryErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DiscoverInstancesOutcome(DiscoverInstancesResult(outcome.GetResult()));
  }
  else
  {
    return DiscoverInstancesOutcome(outcome.GetError());
  }
}

DiscoverInstancesOutcomeCallable ServiceDiscoveryClient::DiscoverInstancesCallable(const DiscoverInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DiscoverInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DiscoverInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClient::DiscoverInstancesAsync(const DiscoverInstancesRequest& request, const DiscoverInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DiscoverInstancesAsyncHelper( request, handler, context ); } );
}

void ServiceDiscoveryClient::DiscoverInstancesAsyncHelper(const DiscoverInstancesRequest& request, const DiscoverInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DiscoverInstances(request), context);
}

GetInstanceOutcome ServiceDiscoveryClient::GetInstance(const GetInstanceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetInstanceOutcome(GetInstanceResult(outcome.GetResult()));
  }
  else
  {
    return GetInstanceOutcome(outcome.GetError());
  }
}

GetInstanceOutcomeCallable ServiceDiscoveryClient::GetInstanceCallable(const GetInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClient::GetInstanceAsync(const GetInstanceRequest& request, const GetInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetInstanceAsyncHelper( request, handler, context ); } );
}

void ServiceDiscoveryClient::GetInstanceAsyncHelper(const GetInstanceRequest& request, const GetInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetInstance(request), context);
}

GetInstancesHealthStatusOutcome ServiceDiscoveryClient::GetInstancesHealthStatus(const GetInstancesHealthStatusRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetInstancesHealthStatusOutcome(GetInstancesHealthStatusResult(outcome.GetResult()));
  }
  else
  {
    return GetInstancesHealthStatusOutcome(outcome.GetError());
  }
}

GetInstancesHealthStatusOutcomeCallable ServiceDiscoveryClient::GetInstancesHealthStatusCallable(const GetInstancesHealthStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInstancesHealthStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInstancesHealthStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClient::GetInstancesHealthStatusAsync(const GetInstancesHealthStatusRequest& request, const GetInstancesHealthStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetInstancesHealthStatusAsyncHelper( request, handler, context ); } );
}

void ServiceDiscoveryClient::GetInstancesHealthStatusAsyncHelper(const GetInstancesHealthStatusRequest& request, const GetInstancesHealthStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetInstancesHealthStatus(request), context);
}

GetNamespaceOutcome ServiceDiscoveryClient::GetNamespace(const GetNamespaceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetNamespaceOutcome(GetNamespaceResult(outcome.GetResult()));
  }
  else
  {
    return GetNamespaceOutcome(outcome.GetError());
  }
}

GetNamespaceOutcomeCallable ServiceDiscoveryClient::GetNamespaceCallable(const GetNamespaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetNamespaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetNamespace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClient::GetNamespaceAsync(const GetNamespaceRequest& request, const GetNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetNamespaceAsyncHelper( request, handler, context ); } );
}

void ServiceDiscoveryClient::GetNamespaceAsyncHelper(const GetNamespaceRequest& request, const GetNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetNamespace(request), context);
}

GetOperationOutcome ServiceDiscoveryClient::GetOperation(const GetOperationRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetOperationOutcome(GetOperationResult(outcome.GetResult()));
  }
  else
  {
    return GetOperationOutcome(outcome.GetError());
  }
}

GetOperationOutcomeCallable ServiceDiscoveryClient::GetOperationCallable(const GetOperationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOperationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOperation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClient::GetOperationAsync(const GetOperationRequest& request, const GetOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetOperationAsyncHelper( request, handler, context ); } );
}

void ServiceDiscoveryClient::GetOperationAsyncHelper(const GetOperationRequest& request, const GetOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetOperation(request), context);
}

GetServiceOutcome ServiceDiscoveryClient::GetService(const GetServiceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetServiceOutcome(GetServiceResult(outcome.GetResult()));
  }
  else
  {
    return GetServiceOutcome(outcome.GetError());
  }
}

GetServiceOutcomeCallable ServiceDiscoveryClient::GetServiceCallable(const GetServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClient::GetServiceAsync(const GetServiceRequest& request, const GetServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetServiceAsyncHelper( request, handler, context ); } );
}

void ServiceDiscoveryClient::GetServiceAsyncHelper(const GetServiceRequest& request, const GetServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetService(request), context);
}

ListInstancesOutcome ServiceDiscoveryClient::ListInstances(const ListInstancesRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListInstancesOutcome(ListInstancesResult(outcome.GetResult()));
  }
  else
  {
    return ListInstancesOutcome(outcome.GetError());
  }
}

ListInstancesOutcomeCallable ServiceDiscoveryClient::ListInstancesCallable(const ListInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClient::ListInstancesAsync(const ListInstancesRequest& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListInstancesAsyncHelper( request, handler, context ); } );
}

void ServiceDiscoveryClient::ListInstancesAsyncHelper(const ListInstancesRequest& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListInstances(request), context);
}

ListNamespacesOutcome ServiceDiscoveryClient::ListNamespaces(const ListNamespacesRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListNamespacesOutcome(ListNamespacesResult(outcome.GetResult()));
  }
  else
  {
    return ListNamespacesOutcome(outcome.GetError());
  }
}

ListNamespacesOutcomeCallable ServiceDiscoveryClient::ListNamespacesCallable(const ListNamespacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNamespacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNamespaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClient::ListNamespacesAsync(const ListNamespacesRequest& request, const ListNamespacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListNamespacesAsyncHelper( request, handler, context ); } );
}

void ServiceDiscoveryClient::ListNamespacesAsyncHelper(const ListNamespacesRequest& request, const ListNamespacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListNamespaces(request), context);
}

ListOperationsOutcome ServiceDiscoveryClient::ListOperations(const ListOperationsRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListOperationsOutcome(ListOperationsResult(outcome.GetResult()));
  }
  else
  {
    return ListOperationsOutcome(outcome.GetError());
  }
}

ListOperationsOutcomeCallable ServiceDiscoveryClient::ListOperationsCallable(const ListOperationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOperationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOperations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClient::ListOperationsAsync(const ListOperationsRequest& request, const ListOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListOperationsAsyncHelper( request, handler, context ); } );
}

void ServiceDiscoveryClient::ListOperationsAsyncHelper(const ListOperationsRequest& request, const ListOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListOperations(request), context);
}

ListServicesOutcome ServiceDiscoveryClient::ListServices(const ListServicesRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListServicesOutcome(ListServicesResult(outcome.GetResult()));
  }
  else
  {
    return ListServicesOutcome(outcome.GetError());
  }
}

ListServicesOutcomeCallable ServiceDiscoveryClient::ListServicesCallable(const ListServicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListServicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListServices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClient::ListServicesAsync(const ListServicesRequest& request, const ListServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListServicesAsyncHelper( request, handler, context ); } );
}

void ServiceDiscoveryClient::ListServicesAsyncHelper(const ListServicesRequest& request, const ListServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListServices(request), context);
}

RegisterInstanceOutcome ServiceDiscoveryClient::RegisterInstance(const RegisterInstanceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RegisterInstanceOutcome(RegisterInstanceResult(outcome.GetResult()));
  }
  else
  {
    return RegisterInstanceOutcome(outcome.GetError());
  }
}

RegisterInstanceOutcomeCallable ServiceDiscoveryClient::RegisterInstanceCallable(const RegisterInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClient::RegisterInstanceAsync(const RegisterInstanceRequest& request, const RegisterInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RegisterInstanceAsyncHelper( request, handler, context ); } );
}

void ServiceDiscoveryClient::RegisterInstanceAsyncHelper(const RegisterInstanceRequest& request, const RegisterInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterInstance(request), context);
}

UpdateInstanceCustomHealthStatusOutcome ServiceDiscoveryClient::UpdateInstanceCustomHealthStatus(const UpdateInstanceCustomHealthStatusRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateInstanceCustomHealthStatusOutcome(NoResult());
  }
  else
  {
    return UpdateInstanceCustomHealthStatusOutcome(outcome.GetError());
  }
}

UpdateInstanceCustomHealthStatusOutcomeCallable ServiceDiscoveryClient::UpdateInstanceCustomHealthStatusCallable(const UpdateInstanceCustomHealthStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateInstanceCustomHealthStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateInstanceCustomHealthStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClient::UpdateInstanceCustomHealthStatusAsync(const UpdateInstanceCustomHealthStatusRequest& request, const UpdateInstanceCustomHealthStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateInstanceCustomHealthStatusAsyncHelper( request, handler, context ); } );
}

void ServiceDiscoveryClient::UpdateInstanceCustomHealthStatusAsyncHelper(const UpdateInstanceCustomHealthStatusRequest& request, const UpdateInstanceCustomHealthStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateInstanceCustomHealthStatus(request), context);
}

UpdateServiceOutcome ServiceDiscoveryClient::UpdateService(const UpdateServiceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateServiceOutcome(UpdateServiceResult(outcome.GetResult()));
  }
  else
  {
    return UpdateServiceOutcome(outcome.GetError());
  }
}

UpdateServiceOutcomeCallable ServiceDiscoveryClient::UpdateServiceCallable(const UpdateServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClient::UpdateServiceAsync(const UpdateServiceRequest& request, const UpdateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateServiceAsyncHelper( request, handler, context ); } );
}

void ServiceDiscoveryClient::UpdateServiceAsyncHelper(const UpdateServiceRequest& request, const UpdateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateService(request), context);
}

