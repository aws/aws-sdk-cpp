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

#include <aws/mediaconnect/MediaConnectClient.h>
#include <aws/mediaconnect/MediaConnectEndpoint.h>
#include <aws/mediaconnect/MediaConnectErrorMarshaller.h>
#include <aws/mediaconnect/model/AddFlowOutputsRequest.h>
#include <aws/mediaconnect/model/CreateFlowRequest.h>
#include <aws/mediaconnect/model/DeleteFlowRequest.h>
#include <aws/mediaconnect/model/DescribeFlowRequest.h>
#include <aws/mediaconnect/model/GrantFlowEntitlementsRequest.h>
#include <aws/mediaconnect/model/ListEntitlementsRequest.h>
#include <aws/mediaconnect/model/ListFlowsRequest.h>
#include <aws/mediaconnect/model/ListTagsForResourceRequest.h>
#include <aws/mediaconnect/model/RemoveFlowOutputRequest.h>
#include <aws/mediaconnect/model/RevokeFlowEntitlementRequest.h>
#include <aws/mediaconnect/model/StartFlowRequest.h>
#include <aws/mediaconnect/model/StopFlowRequest.h>
#include <aws/mediaconnect/model/TagResourceRequest.h>
#include <aws/mediaconnect/model/UntagResourceRequest.h>
#include <aws/mediaconnect/model/UpdateFlowEntitlementRequest.h>
#include <aws/mediaconnect/model/UpdateFlowOutputRequest.h>
#include <aws/mediaconnect/model/UpdateFlowSourceRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::MediaConnect;
using namespace Aws::MediaConnect::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "mediaconnect";
static const char* ALLOCATION_TAG = "MediaConnectClient";


MediaConnectClient::MediaConnectClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<MediaConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaConnectClient::MediaConnectClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<MediaConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaConnectClient::MediaConnectClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<MediaConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

MediaConnectClient::~MediaConnectClient()
{
}

void MediaConnectClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + MediaConnectEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void MediaConnectClient::OverrideEndpoint(const Aws::String& endpoint)
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

AddFlowOutputsOutcome MediaConnectClient::AddFlowOutputs(const AddFlowOutputsRequest& request) const
{
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AddFlowOutputs", "Required field: FlowArn, is not set");
    return AddFlowOutputsOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/flows/";
  ss << request.GetFlowArn();
  ss << "/outputs";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AddFlowOutputsOutcome(AddFlowOutputsResult(outcome.GetResult()));
  }
  else
  {
    return AddFlowOutputsOutcome(outcome.GetError());
  }
}

AddFlowOutputsOutcomeCallable MediaConnectClient::AddFlowOutputsCallable(const AddFlowOutputsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddFlowOutputsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddFlowOutputs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::AddFlowOutputsAsync(const AddFlowOutputsRequest& request, const AddFlowOutputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddFlowOutputsAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::AddFlowOutputsAsyncHelper(const AddFlowOutputsRequest& request, const AddFlowOutputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddFlowOutputs(request), context);
}

CreateFlowOutcome MediaConnectClient::CreateFlow(const CreateFlowRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/flows";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateFlowOutcome(CreateFlowResult(outcome.GetResult()));
  }
  else
  {
    return CreateFlowOutcome(outcome.GetError());
  }
}

CreateFlowOutcomeCallable MediaConnectClient::CreateFlowCallable(const CreateFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::CreateFlowAsync(const CreateFlowRequest& request, const CreateFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateFlowAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::CreateFlowAsyncHelper(const CreateFlowRequest& request, const CreateFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFlow(request), context);
}

DeleteFlowOutcome MediaConnectClient::DeleteFlow(const DeleteFlowRequest& request) const
{
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFlow", "Required field: FlowArn, is not set");
    return DeleteFlowOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/flows/";
  ss << request.GetFlowArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteFlowOutcome(DeleteFlowResult(outcome.GetResult()));
  }
  else
  {
    return DeleteFlowOutcome(outcome.GetError());
  }
}

DeleteFlowOutcomeCallable MediaConnectClient::DeleteFlowCallable(const DeleteFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::DeleteFlowAsync(const DeleteFlowRequest& request, const DeleteFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFlowAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::DeleteFlowAsyncHelper(const DeleteFlowRequest& request, const DeleteFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFlow(request), context);
}

DescribeFlowOutcome MediaConnectClient::DescribeFlow(const DescribeFlowRequest& request) const
{
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeFlow", "Required field: FlowArn, is not set");
    return DescribeFlowOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/flows/";
  ss << request.GetFlowArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeFlowOutcome(DescribeFlowResult(outcome.GetResult()));
  }
  else
  {
    return DescribeFlowOutcome(outcome.GetError());
  }
}

DescribeFlowOutcomeCallable MediaConnectClient::DescribeFlowCallable(const DescribeFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::DescribeFlowAsync(const DescribeFlowRequest& request, const DescribeFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeFlowAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::DescribeFlowAsyncHelper(const DescribeFlowRequest& request, const DescribeFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFlow(request), context);
}

GrantFlowEntitlementsOutcome MediaConnectClient::GrantFlowEntitlements(const GrantFlowEntitlementsRequest& request) const
{
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GrantFlowEntitlements", "Required field: FlowArn, is not set");
    return GrantFlowEntitlementsOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/flows/";
  ss << request.GetFlowArn();
  ss << "/entitlements";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GrantFlowEntitlementsOutcome(GrantFlowEntitlementsResult(outcome.GetResult()));
  }
  else
  {
    return GrantFlowEntitlementsOutcome(outcome.GetError());
  }
}

GrantFlowEntitlementsOutcomeCallable MediaConnectClient::GrantFlowEntitlementsCallable(const GrantFlowEntitlementsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GrantFlowEntitlementsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GrantFlowEntitlements(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::GrantFlowEntitlementsAsync(const GrantFlowEntitlementsRequest& request, const GrantFlowEntitlementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GrantFlowEntitlementsAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::GrantFlowEntitlementsAsyncHelper(const GrantFlowEntitlementsRequest& request, const GrantFlowEntitlementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GrantFlowEntitlements(request), context);
}

ListEntitlementsOutcome MediaConnectClient::ListEntitlements(const ListEntitlementsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/entitlements";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListEntitlementsOutcome(ListEntitlementsResult(outcome.GetResult()));
  }
  else
  {
    return ListEntitlementsOutcome(outcome.GetError());
  }
}

ListEntitlementsOutcomeCallable MediaConnectClient::ListEntitlementsCallable(const ListEntitlementsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEntitlementsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEntitlements(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::ListEntitlementsAsync(const ListEntitlementsRequest& request, const ListEntitlementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListEntitlementsAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::ListEntitlementsAsyncHelper(const ListEntitlementsRequest& request, const ListEntitlementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListEntitlements(request), context);
}

ListFlowsOutcome MediaConnectClient::ListFlows(const ListFlowsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/flows";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListFlowsOutcome(ListFlowsResult(outcome.GetResult()));
  }
  else
  {
    return ListFlowsOutcome(outcome.GetError());
  }
}

ListFlowsOutcomeCallable MediaConnectClient::ListFlowsCallable(const ListFlowsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFlowsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFlows(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::ListFlowsAsync(const ListFlowsRequest& request, const ListFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListFlowsAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::ListFlowsAsyncHelper(const ListFlowsRequest& request, const ListFlowsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFlows(request), context);
}

ListTagsForResourceOutcome MediaConnectClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsForResourceOutcome(ListTagsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResourceOutcome(outcome.GetError());
  }
}

ListTagsForResourceOutcomeCallable MediaConnectClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

RemoveFlowOutputOutcome MediaConnectClient::RemoveFlowOutput(const RemoveFlowOutputRequest& request) const
{
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveFlowOutput", "Required field: FlowArn, is not set");
    return RemoveFlowOutputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  if (!request.OutputArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveFlowOutput", "Required field: OutputArn, is not set");
    return RemoveFlowOutputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OutputArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/flows/";
  ss << request.GetFlowArn();
  ss << "/outputs/";
  ss << request.GetOutputArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RemoveFlowOutputOutcome(RemoveFlowOutputResult(outcome.GetResult()));
  }
  else
  {
    return RemoveFlowOutputOutcome(outcome.GetError());
  }
}

RemoveFlowOutputOutcomeCallable MediaConnectClient::RemoveFlowOutputCallable(const RemoveFlowOutputRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveFlowOutputOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveFlowOutput(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::RemoveFlowOutputAsync(const RemoveFlowOutputRequest& request, const RemoveFlowOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveFlowOutputAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::RemoveFlowOutputAsyncHelper(const RemoveFlowOutputRequest& request, const RemoveFlowOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveFlowOutput(request), context);
}

RevokeFlowEntitlementOutcome MediaConnectClient::RevokeFlowEntitlement(const RevokeFlowEntitlementRequest& request) const
{
  if (!request.EntitlementArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RevokeFlowEntitlement", "Required field: EntitlementArn, is not set");
    return RevokeFlowEntitlementOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntitlementArn]", false));
  }
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RevokeFlowEntitlement", "Required field: FlowArn, is not set");
    return RevokeFlowEntitlementOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/flows/";
  ss << request.GetFlowArn();
  ss << "/entitlements/";
  ss << request.GetEntitlementArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RevokeFlowEntitlementOutcome(RevokeFlowEntitlementResult(outcome.GetResult()));
  }
  else
  {
    return RevokeFlowEntitlementOutcome(outcome.GetError());
  }
}

RevokeFlowEntitlementOutcomeCallable MediaConnectClient::RevokeFlowEntitlementCallable(const RevokeFlowEntitlementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RevokeFlowEntitlementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RevokeFlowEntitlement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::RevokeFlowEntitlementAsync(const RevokeFlowEntitlementRequest& request, const RevokeFlowEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RevokeFlowEntitlementAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::RevokeFlowEntitlementAsyncHelper(const RevokeFlowEntitlementRequest& request, const RevokeFlowEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RevokeFlowEntitlement(request), context);
}

StartFlowOutcome MediaConnectClient::StartFlow(const StartFlowRequest& request) const
{
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartFlow", "Required field: FlowArn, is not set");
    return StartFlowOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/flows/start/";
  ss << request.GetFlowArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartFlowOutcome(StartFlowResult(outcome.GetResult()));
  }
  else
  {
    return StartFlowOutcome(outcome.GetError());
  }
}

StartFlowOutcomeCallable MediaConnectClient::StartFlowCallable(const StartFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::StartFlowAsync(const StartFlowRequest& request, const StartFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartFlowAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::StartFlowAsyncHelper(const StartFlowRequest& request, const StartFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartFlow(request), context);
}

StopFlowOutcome MediaConnectClient::StopFlow(const StopFlowRequest& request) const
{
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopFlow", "Required field: FlowArn, is not set");
    return StopFlowOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/flows/stop/";
  ss << request.GetFlowArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopFlowOutcome(StopFlowResult(outcome.GetResult()));
  }
  else
  {
    return StopFlowOutcome(outcome.GetError());
  }
}

StopFlowOutcomeCallable MediaConnectClient::StopFlowCallable(const StopFlowRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopFlowOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopFlow(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::StopFlowAsync(const StopFlowRequest& request, const StopFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopFlowAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::StopFlowAsyncHelper(const StopFlowRequest& request, const StopFlowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopFlow(request), context);
}

TagResourceOutcome MediaConnectClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TagResourceOutcome(NoResult());
  }
  else
  {
    return TagResourceOutcome(outcome.GetError());
  }
}

TagResourceOutcomeCallable MediaConnectClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome MediaConnectClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UntagResourceOutcome(NoResult());
  }
  else
  {
    return UntagResourceOutcome(outcome.GetError());
  }
}

UntagResourceOutcomeCallable MediaConnectClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateFlowEntitlementOutcome MediaConnectClient::UpdateFlowEntitlement(const UpdateFlowEntitlementRequest& request) const
{
  if (!request.EntitlementArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFlowEntitlement", "Required field: EntitlementArn, is not set");
    return UpdateFlowEntitlementOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EntitlementArn]", false));
  }
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFlowEntitlement", "Required field: FlowArn, is not set");
    return UpdateFlowEntitlementOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/flows/";
  ss << request.GetFlowArn();
  ss << "/entitlements/";
  ss << request.GetEntitlementArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateFlowEntitlementOutcome(UpdateFlowEntitlementResult(outcome.GetResult()));
  }
  else
  {
    return UpdateFlowEntitlementOutcome(outcome.GetError());
  }
}

UpdateFlowEntitlementOutcomeCallable MediaConnectClient::UpdateFlowEntitlementCallable(const UpdateFlowEntitlementRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFlowEntitlementOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFlowEntitlement(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::UpdateFlowEntitlementAsync(const UpdateFlowEntitlementRequest& request, const UpdateFlowEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFlowEntitlementAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::UpdateFlowEntitlementAsyncHelper(const UpdateFlowEntitlementRequest& request, const UpdateFlowEntitlementResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFlowEntitlement(request), context);
}

UpdateFlowOutputOutcome MediaConnectClient::UpdateFlowOutput(const UpdateFlowOutputRequest& request) const
{
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFlowOutput", "Required field: FlowArn, is not set");
    return UpdateFlowOutputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  if (!request.OutputArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFlowOutput", "Required field: OutputArn, is not set");
    return UpdateFlowOutputOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OutputArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/flows/";
  ss << request.GetFlowArn();
  ss << "/outputs/";
  ss << request.GetOutputArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateFlowOutputOutcome(UpdateFlowOutputResult(outcome.GetResult()));
  }
  else
  {
    return UpdateFlowOutputOutcome(outcome.GetError());
  }
}

UpdateFlowOutputOutcomeCallable MediaConnectClient::UpdateFlowOutputCallable(const UpdateFlowOutputRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFlowOutputOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFlowOutput(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::UpdateFlowOutputAsync(const UpdateFlowOutputRequest& request, const UpdateFlowOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFlowOutputAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::UpdateFlowOutputAsyncHelper(const UpdateFlowOutputRequest& request, const UpdateFlowOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFlowOutput(request), context);
}

UpdateFlowSourceOutcome MediaConnectClient::UpdateFlowSource(const UpdateFlowSourceRequest& request) const
{
  if (!request.FlowArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFlowSource", "Required field: FlowArn, is not set");
    return UpdateFlowSourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowArn]", false));
  }
  if (!request.SourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFlowSource", "Required field: SourceArn, is not set");
    return UpdateFlowSourceOutcome(Aws::Client::AWSError<MediaConnectErrors>(MediaConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v1/flows/";
  ss << request.GetFlowArn();
  ss << "/source/";
  ss << request.GetSourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateFlowSourceOutcome(UpdateFlowSourceResult(outcome.GetResult()));
  }
  else
  {
    return UpdateFlowSourceOutcome(outcome.GetError());
  }
}

UpdateFlowSourceOutcomeCallable MediaConnectClient::UpdateFlowSourceCallable(const UpdateFlowSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFlowSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFlowSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void MediaConnectClient::UpdateFlowSourceAsync(const UpdateFlowSourceRequest& request, const UpdateFlowSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFlowSourceAsyncHelper( request, handler, context ); } );
}

void MediaConnectClient::UpdateFlowSourceAsyncHelper(const UpdateFlowSourceRequest& request, const UpdateFlowSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFlowSource(request), context);
}

