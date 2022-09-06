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

#include <aws/cloudcontrol/CloudControlApiClient.h>
#include <aws/cloudcontrol/CloudControlApiEndpoint.h>
#include <aws/cloudcontrol/CloudControlApiErrorMarshaller.h>
#include <aws/cloudcontrol/model/CancelResourceRequestRequest.h>
#include <aws/cloudcontrol/model/CreateResourceRequest.h>
#include <aws/cloudcontrol/model/DeleteResourceRequest.h>
#include <aws/cloudcontrol/model/GetResourceRequest.h>
#include <aws/cloudcontrol/model/GetResourceRequestStatusRequest.h>
#include <aws/cloudcontrol/model/ListResourceRequestsRequest.h>
#include <aws/cloudcontrol/model/ListResourcesRequest.h>
#include <aws/cloudcontrol/model/UpdateResourceRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CloudControlApi;
using namespace Aws::CloudControlApi::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "cloudcontrolapi";
static const char* ALLOCATION_TAG = "CloudControlApiClient";

CloudControlApiClient::CloudControlApiClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudControlApiErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudControlApiClient::CloudControlApiClient(const AWSCredentials& credentials,
                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudControlApiErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudControlApiClient::CloudControlApiClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudControlApiErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudControlApiClient::~CloudControlApiClient()
{
}

void CloudControlApiClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("CloudControl");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + CloudControlApiEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void CloudControlApiClient::OverrideEndpoint(const Aws::String& endpoint)
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

CancelResourceRequestOutcome CloudControlApiClient::CancelResourceRequest(const CancelResourceRequestRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CancelResourceRequestOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelResourceRequestOutcomeCallable CloudControlApiClient::CancelResourceRequestCallable(const CancelResourceRequestRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelResourceRequestOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelResourceRequest(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudControlApiClient::CancelResourceRequestAsync(const CancelResourceRequestRequest& request, const CancelResourceRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CancelResourceRequestAsyncHelper( request, handler, context ); } );
}

void CloudControlApiClient::CancelResourceRequestAsyncHelper(const CancelResourceRequestRequest& request, const CancelResourceRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CancelResourceRequest(request), context);
}

CreateResourceOutcome CloudControlApiClient::CreateResource(const CreateResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateResourceOutcomeCallable CloudControlApiClient::CreateResourceCallable(const CreateResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudControlApiClient::CreateResourceAsync(const CreateResourceRequest& request, const CreateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateResourceAsyncHelper( request, handler, context ); } );
}

void CloudControlApiClient::CreateResourceAsyncHelper(const CreateResourceRequest& request, const CreateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateResource(request), context);
}

DeleteResourceOutcome CloudControlApiClient::DeleteResource(const DeleteResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourceOutcomeCallable CloudControlApiClient::DeleteResourceCallable(const DeleteResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudControlApiClient::DeleteResourceAsync(const DeleteResourceRequest& request, const DeleteResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteResourceAsyncHelper( request, handler, context ); } );
}

void CloudControlApiClient::DeleteResourceAsyncHelper(const DeleteResourceRequest& request, const DeleteResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteResource(request), context);
}

GetResourceOutcome CloudControlApiClient::GetResource(const GetResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetResourceOutcomeCallable CloudControlApiClient::GetResourceCallable(const GetResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudControlApiClient::GetResourceAsync(const GetResourceRequest& request, const GetResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetResourceAsyncHelper( request, handler, context ); } );
}

void CloudControlApiClient::GetResourceAsyncHelper(const GetResourceRequest& request, const GetResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetResource(request), context);
}

GetResourceRequestStatusOutcome CloudControlApiClient::GetResourceRequestStatus(const GetResourceRequestStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetResourceRequestStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetResourceRequestStatusOutcomeCallable CloudControlApiClient::GetResourceRequestStatusCallable(const GetResourceRequestStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourceRequestStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResourceRequestStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudControlApiClient::GetResourceRequestStatusAsync(const GetResourceRequestStatusRequest& request, const GetResourceRequestStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetResourceRequestStatusAsyncHelper( request, handler, context ); } );
}

void CloudControlApiClient::GetResourceRequestStatusAsyncHelper(const GetResourceRequestStatusRequest& request, const GetResourceRequestStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetResourceRequestStatus(request), context);
}

ListResourceRequestsOutcome CloudControlApiClient::ListResourceRequests(const ListResourceRequestsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListResourceRequestsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResourceRequestsOutcomeCallable CloudControlApiClient::ListResourceRequestsCallable(const ListResourceRequestsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourceRequestsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResourceRequests(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudControlApiClient::ListResourceRequestsAsync(const ListResourceRequestsRequest& request, const ListResourceRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListResourceRequestsAsyncHelper( request, handler, context ); } );
}

void CloudControlApiClient::ListResourceRequestsAsyncHelper(const ListResourceRequestsRequest& request, const ListResourceRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListResourceRequests(request), context);
}

ListResourcesOutcome CloudControlApiClient::ListResources(const ListResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResourcesOutcomeCallable CloudControlApiClient::ListResourcesCallable(const ListResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudControlApiClient::ListResourcesAsync(const ListResourcesRequest& request, const ListResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListResourcesAsyncHelper( request, handler, context ); } );
}

void CloudControlApiClient::ListResourcesAsyncHelper(const ListResourcesRequest& request, const ListResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListResources(request), context);
}

UpdateResourceOutcome CloudControlApiClient::UpdateResource(const UpdateResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateResourceOutcomeCallable CloudControlApiClient::UpdateResourceCallable(const UpdateResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudControlApiClient::UpdateResourceAsync(const UpdateResourceRequest& request, const UpdateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateResourceAsyncHelper( request, handler, context ); } );
}

void CloudControlApiClient::UpdateResourceAsyncHelper(const UpdateResourceRequest& request, const UpdateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateResource(request), context);
}

