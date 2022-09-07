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
#include <aws/servicediscovery/model/ListTagsForResourceRequest.h>
#include <aws/servicediscovery/model/RegisterInstanceRequest.h>
#include <aws/servicediscovery/model/TagResourceRequest.h>
#include <aws/servicediscovery/model/UntagResourceRequest.h>
#include <aws/servicediscovery/model/UpdateHttpNamespaceRequest.h>
#include <aws/servicediscovery/model/UpdateInstanceCustomHealthStatusRequest.h>
#include <aws/servicediscovery/model/UpdatePrivateDnsNamespaceRequest.h>
#include <aws/servicediscovery/model/UpdatePublicDnsNamespaceRequest.h>
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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ServiceDiscoveryErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ServiceDiscoveryClient::ServiceDiscoveryClient(const AWSCredentials& credentials,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ServiceDiscoveryErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ServiceDiscoveryClient::ServiceDiscoveryClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ServiceDiscoveryErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ServiceDiscoveryClient::~ServiceDiscoveryClient()
{
}

void ServiceDiscoveryClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("ServiceDiscovery");
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
  return CreateHttpNamespaceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateHttpNamespaceOutcomeCallable ServiceDiscoveryClient::CreateHttpNamespaceCallable(const CreateHttpNamespaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateHttpNamespaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateHttpNamespace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClientCreateHttpNamespaceAsyncHelper(ServiceDiscoveryClient const * const clientThis, const CreateHttpNamespaceRequest& request, const CreateHttpNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateHttpNamespace(request), context);
}

void ServiceDiscoveryClient::CreateHttpNamespaceAsync(const CreateHttpNamespaceRequest& request, const CreateHttpNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceDiscoveryClientCreateHttpNamespaceAsyncHelper( this, request, handler, context ); } );
}

CreatePrivateDnsNamespaceOutcome ServiceDiscoveryClient::CreatePrivateDnsNamespace(const CreatePrivateDnsNamespaceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  return CreatePrivateDnsNamespaceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePrivateDnsNamespaceOutcomeCallable ServiceDiscoveryClient::CreatePrivateDnsNamespaceCallable(const CreatePrivateDnsNamespaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePrivateDnsNamespaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePrivateDnsNamespace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClientCreatePrivateDnsNamespaceAsyncHelper(ServiceDiscoveryClient const * const clientThis, const CreatePrivateDnsNamespaceRequest& request, const CreatePrivateDnsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePrivateDnsNamespace(request), context);
}

void ServiceDiscoveryClient::CreatePrivateDnsNamespaceAsync(const CreatePrivateDnsNamespaceRequest& request, const CreatePrivateDnsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceDiscoveryClientCreatePrivateDnsNamespaceAsyncHelper( this, request, handler, context ); } );
}

CreatePublicDnsNamespaceOutcome ServiceDiscoveryClient::CreatePublicDnsNamespace(const CreatePublicDnsNamespaceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  return CreatePublicDnsNamespaceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreatePublicDnsNamespaceOutcomeCallable ServiceDiscoveryClient::CreatePublicDnsNamespaceCallable(const CreatePublicDnsNamespaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreatePublicDnsNamespaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePublicDnsNamespace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClientCreatePublicDnsNamespaceAsyncHelper(ServiceDiscoveryClient const * const clientThis, const CreatePublicDnsNamespaceRequest& request, const CreatePublicDnsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreatePublicDnsNamespace(request), context);
}

void ServiceDiscoveryClient::CreatePublicDnsNamespaceAsync(const CreatePublicDnsNamespaceRequest& request, const CreatePublicDnsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceDiscoveryClientCreatePublicDnsNamespaceAsyncHelper( this, request, handler, context ); } );
}

CreateServiceOutcome ServiceDiscoveryClient::CreateService(const CreateServiceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  return CreateServiceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateServiceOutcomeCallable ServiceDiscoveryClient::CreateServiceCallable(const CreateServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClientCreateServiceAsyncHelper(ServiceDiscoveryClient const * const clientThis, const CreateServiceRequest& request, const CreateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateService(request), context);
}

void ServiceDiscoveryClient::CreateServiceAsync(const CreateServiceRequest& request, const CreateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceDiscoveryClientCreateServiceAsyncHelper( this, request, handler, context ); } );
}

DeleteNamespaceOutcome ServiceDiscoveryClient::DeleteNamespace(const DeleteNamespaceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  return DeleteNamespaceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteNamespaceOutcomeCallable ServiceDiscoveryClient::DeleteNamespaceCallable(const DeleteNamespaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNamespaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNamespace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClientDeleteNamespaceAsyncHelper(ServiceDiscoveryClient const * const clientThis, const DeleteNamespaceRequest& request, const DeleteNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteNamespace(request), context);
}

void ServiceDiscoveryClient::DeleteNamespaceAsync(const DeleteNamespaceRequest& request, const DeleteNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceDiscoveryClientDeleteNamespaceAsyncHelper( this, request, handler, context ); } );
}

DeleteServiceOutcome ServiceDiscoveryClient::DeleteService(const DeleteServiceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  return DeleteServiceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteServiceOutcomeCallable ServiceDiscoveryClient::DeleteServiceCallable(const DeleteServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClientDeleteServiceAsyncHelper(ServiceDiscoveryClient const * const clientThis, const DeleteServiceRequest& request, const DeleteServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteService(request), context);
}

void ServiceDiscoveryClient::DeleteServiceAsync(const DeleteServiceRequest& request, const DeleteServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceDiscoveryClientDeleteServiceAsyncHelper( this, request, handler, context ); } );
}

DeregisterInstanceOutcome ServiceDiscoveryClient::DeregisterInstance(const DeregisterInstanceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  return DeregisterInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterInstanceOutcomeCallable ServiceDiscoveryClient::DeregisterInstanceCallable(const DeregisterInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClientDeregisterInstanceAsyncHelper(ServiceDiscoveryClient const * const clientThis, const DeregisterInstanceRequest& request, const DeregisterInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeregisterInstance(request), context);
}

void ServiceDiscoveryClient::DeregisterInstanceAsync(const DeregisterInstanceRequest& request, const DeregisterInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceDiscoveryClientDeregisterInstanceAsyncHelper( this, request, handler, context ); } );
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
  return DiscoverInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DiscoverInstancesOutcomeCallable ServiceDiscoveryClient::DiscoverInstancesCallable(const DiscoverInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DiscoverInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DiscoverInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClientDiscoverInstancesAsyncHelper(ServiceDiscoveryClient const * const clientThis, const DiscoverInstancesRequest& request, const DiscoverInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DiscoverInstances(request), context);
}

void ServiceDiscoveryClient::DiscoverInstancesAsync(const DiscoverInstancesRequest& request, const DiscoverInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceDiscoveryClientDiscoverInstancesAsyncHelper( this, request, handler, context ); } );
}

GetInstanceOutcome ServiceDiscoveryClient::GetInstance(const GetInstanceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  return GetInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInstanceOutcomeCallable ServiceDiscoveryClient::GetInstanceCallable(const GetInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClientGetInstanceAsyncHelper(ServiceDiscoveryClient const * const clientThis, const GetInstanceRequest& request, const GetInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetInstance(request), context);
}

void ServiceDiscoveryClient::GetInstanceAsync(const GetInstanceRequest& request, const GetInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceDiscoveryClientGetInstanceAsyncHelper( this, request, handler, context ); } );
}

GetInstancesHealthStatusOutcome ServiceDiscoveryClient::GetInstancesHealthStatus(const GetInstancesHealthStatusRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  return GetInstancesHealthStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetInstancesHealthStatusOutcomeCallable ServiceDiscoveryClient::GetInstancesHealthStatusCallable(const GetInstancesHealthStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetInstancesHealthStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetInstancesHealthStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClientGetInstancesHealthStatusAsyncHelper(ServiceDiscoveryClient const * const clientThis, const GetInstancesHealthStatusRequest& request, const GetInstancesHealthStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetInstancesHealthStatus(request), context);
}

void ServiceDiscoveryClient::GetInstancesHealthStatusAsync(const GetInstancesHealthStatusRequest& request, const GetInstancesHealthStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceDiscoveryClientGetInstancesHealthStatusAsyncHelper( this, request, handler, context ); } );
}

GetNamespaceOutcome ServiceDiscoveryClient::GetNamespace(const GetNamespaceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  return GetNamespaceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetNamespaceOutcomeCallable ServiceDiscoveryClient::GetNamespaceCallable(const GetNamespaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetNamespaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetNamespace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClientGetNamespaceAsyncHelper(ServiceDiscoveryClient const * const clientThis, const GetNamespaceRequest& request, const GetNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetNamespace(request), context);
}

void ServiceDiscoveryClient::GetNamespaceAsync(const GetNamespaceRequest& request, const GetNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceDiscoveryClientGetNamespaceAsyncHelper( this, request, handler, context ); } );
}

GetOperationOutcome ServiceDiscoveryClient::GetOperation(const GetOperationRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  return GetOperationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetOperationOutcomeCallable ServiceDiscoveryClient::GetOperationCallable(const GetOperationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetOperationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetOperation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClientGetOperationAsyncHelper(ServiceDiscoveryClient const * const clientThis, const GetOperationRequest& request, const GetOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetOperation(request), context);
}

void ServiceDiscoveryClient::GetOperationAsync(const GetOperationRequest& request, const GetOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceDiscoveryClientGetOperationAsyncHelper( this, request, handler, context ); } );
}

GetServiceOutcome ServiceDiscoveryClient::GetService(const GetServiceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  return GetServiceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetServiceOutcomeCallable ServiceDiscoveryClient::GetServiceCallable(const GetServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClientGetServiceAsyncHelper(ServiceDiscoveryClient const * const clientThis, const GetServiceRequest& request, const GetServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetService(request), context);
}

void ServiceDiscoveryClient::GetServiceAsync(const GetServiceRequest& request, const GetServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceDiscoveryClientGetServiceAsyncHelper( this, request, handler, context ); } );
}

ListInstancesOutcome ServiceDiscoveryClient::ListInstances(const ListInstancesRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  return ListInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListInstancesOutcomeCallable ServiceDiscoveryClient::ListInstancesCallable(const ListInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClientListInstancesAsyncHelper(ServiceDiscoveryClient const * const clientThis, const ListInstancesRequest& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListInstances(request), context);
}

void ServiceDiscoveryClient::ListInstancesAsync(const ListInstancesRequest& request, const ListInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceDiscoveryClientListInstancesAsyncHelper( this, request, handler, context ); } );
}

ListNamespacesOutcome ServiceDiscoveryClient::ListNamespaces(const ListNamespacesRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  return ListNamespacesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListNamespacesOutcomeCallable ServiceDiscoveryClient::ListNamespacesCallable(const ListNamespacesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNamespacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNamespaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClientListNamespacesAsyncHelper(ServiceDiscoveryClient const * const clientThis, const ListNamespacesRequest& request, const ListNamespacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListNamespaces(request), context);
}

void ServiceDiscoveryClient::ListNamespacesAsync(const ListNamespacesRequest& request, const ListNamespacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceDiscoveryClientListNamespacesAsyncHelper( this, request, handler, context ); } );
}

ListOperationsOutcome ServiceDiscoveryClient::ListOperations(const ListOperationsRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  return ListOperationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListOperationsOutcomeCallable ServiceDiscoveryClient::ListOperationsCallable(const ListOperationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListOperationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListOperations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClientListOperationsAsyncHelper(ServiceDiscoveryClient const * const clientThis, const ListOperationsRequest& request, const ListOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListOperations(request), context);
}

void ServiceDiscoveryClient::ListOperationsAsync(const ListOperationsRequest& request, const ListOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceDiscoveryClientListOperationsAsyncHelper( this, request, handler, context ); } );
}

ListServicesOutcome ServiceDiscoveryClient::ListServices(const ListServicesRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  return ListServicesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListServicesOutcomeCallable ServiceDiscoveryClient::ListServicesCallable(const ListServicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListServicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListServices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClientListServicesAsyncHelper(ServiceDiscoveryClient const * const clientThis, const ListServicesRequest& request, const ListServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListServices(request), context);
}

void ServiceDiscoveryClient::ListServicesAsync(const ListServicesRequest& request, const ListServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceDiscoveryClientListServicesAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome ServiceDiscoveryClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable ServiceDiscoveryClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClientListTagsForResourceAsyncHelper(ServiceDiscoveryClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void ServiceDiscoveryClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceDiscoveryClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

RegisterInstanceOutcome ServiceDiscoveryClient::RegisterInstance(const RegisterInstanceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  return RegisterInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterInstanceOutcomeCallable ServiceDiscoveryClient::RegisterInstanceCallable(const RegisterInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClientRegisterInstanceAsyncHelper(ServiceDiscoveryClient const * const clientThis, const RegisterInstanceRequest& request, const RegisterInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterInstance(request), context);
}

void ServiceDiscoveryClient::RegisterInstanceAsync(const RegisterInstanceRequest& request, const RegisterInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceDiscoveryClientRegisterInstanceAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome ServiceDiscoveryClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable ServiceDiscoveryClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClientTagResourceAsyncHelper(ServiceDiscoveryClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void ServiceDiscoveryClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceDiscoveryClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome ServiceDiscoveryClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable ServiceDiscoveryClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClientUntagResourceAsyncHelper(ServiceDiscoveryClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void ServiceDiscoveryClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceDiscoveryClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateHttpNamespaceOutcome ServiceDiscoveryClient::UpdateHttpNamespace(const UpdateHttpNamespaceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  return UpdateHttpNamespaceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateHttpNamespaceOutcomeCallable ServiceDiscoveryClient::UpdateHttpNamespaceCallable(const UpdateHttpNamespaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateHttpNamespaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateHttpNamespace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClientUpdateHttpNamespaceAsyncHelper(ServiceDiscoveryClient const * const clientThis, const UpdateHttpNamespaceRequest& request, const UpdateHttpNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateHttpNamespace(request), context);
}

void ServiceDiscoveryClient::UpdateHttpNamespaceAsync(const UpdateHttpNamespaceRequest& request, const UpdateHttpNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceDiscoveryClientUpdateHttpNamespaceAsyncHelper( this, request, handler, context ); } );
}

UpdateInstanceCustomHealthStatusOutcome ServiceDiscoveryClient::UpdateInstanceCustomHealthStatus(const UpdateInstanceCustomHealthStatusRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  return UpdateInstanceCustomHealthStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateInstanceCustomHealthStatusOutcomeCallable ServiceDiscoveryClient::UpdateInstanceCustomHealthStatusCallable(const UpdateInstanceCustomHealthStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateInstanceCustomHealthStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateInstanceCustomHealthStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClientUpdateInstanceCustomHealthStatusAsyncHelper(ServiceDiscoveryClient const * const clientThis, const UpdateInstanceCustomHealthStatusRequest& request, const UpdateInstanceCustomHealthStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateInstanceCustomHealthStatus(request), context);
}

void ServiceDiscoveryClient::UpdateInstanceCustomHealthStatusAsync(const UpdateInstanceCustomHealthStatusRequest& request, const UpdateInstanceCustomHealthStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceDiscoveryClientUpdateInstanceCustomHealthStatusAsyncHelper( this, request, handler, context ); } );
}

UpdatePrivateDnsNamespaceOutcome ServiceDiscoveryClient::UpdatePrivateDnsNamespace(const UpdatePrivateDnsNamespaceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  return UpdatePrivateDnsNamespaceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePrivateDnsNamespaceOutcomeCallable ServiceDiscoveryClient::UpdatePrivateDnsNamespaceCallable(const UpdatePrivateDnsNamespaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePrivateDnsNamespaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePrivateDnsNamespace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClientUpdatePrivateDnsNamespaceAsyncHelper(ServiceDiscoveryClient const * const clientThis, const UpdatePrivateDnsNamespaceRequest& request, const UpdatePrivateDnsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdatePrivateDnsNamespace(request), context);
}

void ServiceDiscoveryClient::UpdatePrivateDnsNamespaceAsync(const UpdatePrivateDnsNamespaceRequest& request, const UpdatePrivateDnsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceDiscoveryClientUpdatePrivateDnsNamespaceAsyncHelper( this, request, handler, context ); } );
}

UpdatePublicDnsNamespaceOutcome ServiceDiscoveryClient::UpdatePublicDnsNamespace(const UpdatePublicDnsNamespaceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  return UpdatePublicDnsNamespaceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdatePublicDnsNamespaceOutcomeCallable ServiceDiscoveryClient::UpdatePublicDnsNamespaceCallable(const UpdatePublicDnsNamespaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdatePublicDnsNamespaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdatePublicDnsNamespace(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClientUpdatePublicDnsNamespaceAsyncHelper(ServiceDiscoveryClient const * const clientThis, const UpdatePublicDnsNamespaceRequest& request, const UpdatePublicDnsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdatePublicDnsNamespace(request), context);
}

void ServiceDiscoveryClient::UpdatePublicDnsNamespaceAsync(const UpdatePublicDnsNamespaceRequest& request, const UpdatePublicDnsNamespaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceDiscoveryClientUpdatePublicDnsNamespaceAsyncHelper( this, request, handler, context ); } );
}

UpdateServiceOutcome ServiceDiscoveryClient::UpdateService(const UpdateServiceRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  return UpdateServiceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateServiceOutcomeCallable ServiceDiscoveryClient::UpdateServiceCallable(const UpdateServiceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateServiceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateService(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ServiceDiscoveryClientUpdateServiceAsyncHelper(ServiceDiscoveryClient const * const clientThis, const UpdateServiceRequest& request, const UpdateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateService(request), context);
}

void ServiceDiscoveryClient::UpdateServiceAsync(const UpdateServiceRequest& request, const UpdateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ServiceDiscoveryClientUpdateServiceAsyncHelper( this, request, handler, context ); } );
}

