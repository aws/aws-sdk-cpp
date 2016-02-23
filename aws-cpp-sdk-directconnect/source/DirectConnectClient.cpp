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
#include <aws/directconnect/DirectConnectClient.h>
#include <aws/directconnect/DirectConnectEndpoint.h>
#include <aws/directconnect/DirectConnectErrorMarshaller.h>
#include <aws/directconnect/model/AllocateConnectionOnInterconnectRequest.h>
#include <aws/directconnect/model/AllocatePrivateVirtualInterfaceRequest.h>
#include <aws/directconnect/model/AllocatePublicVirtualInterfaceRequest.h>
#include <aws/directconnect/model/ConfirmConnectionRequest.h>
#include <aws/directconnect/model/ConfirmPrivateVirtualInterfaceRequest.h>
#include <aws/directconnect/model/ConfirmPublicVirtualInterfaceRequest.h>
#include <aws/directconnect/model/CreateConnectionRequest.h>
#include <aws/directconnect/model/CreateInterconnectRequest.h>
#include <aws/directconnect/model/CreatePrivateVirtualInterfaceRequest.h>
#include <aws/directconnect/model/CreatePublicVirtualInterfaceRequest.h>
#include <aws/directconnect/model/DeleteConnectionRequest.h>
#include <aws/directconnect/model/DeleteInterconnectRequest.h>
#include <aws/directconnect/model/DeleteVirtualInterfaceRequest.h>
#include <aws/directconnect/model/DescribeConnectionsRequest.h>
#include <aws/directconnect/model/DescribeConnectionsOnInterconnectRequest.h>
#include <aws/directconnect/model/DescribeInterconnectsRequest.h>
#include <aws/directconnect/model/DescribeVirtualInterfacesRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DirectConnect;
using namespace Aws::DirectConnect::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "directconnect";
static const char* ALLOCATION_TAG = "DirectConnectClient";

DirectConnectClient::DirectConnectClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<DirectConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DirectConnectClient::DirectConnectClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<DirectConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DirectConnectClient::DirectConnectClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<DirectConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DirectConnectClient::~DirectConnectClient()
{
}

void DirectConnectClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty() && config.authenticationRegion.empty())
  {
    ss << DirectConnectEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}
AllocateConnectionOnInterconnectOutcome DirectConnectClient::AllocateConnectionOnInterconnect(const AllocateConnectionOnInterconnectRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AllocateConnectionOnInterconnectOutcome(AllocateConnectionOnInterconnectResult(outcome.GetResult()));
  }
  else
  {
    return AllocateConnectionOnInterconnectOutcome(outcome.GetError());
  }
}

AllocateConnectionOnInterconnectOutcomeCallable DirectConnectClient::AllocateConnectionOnInterconnectCallable(const AllocateConnectionOnInterconnectRequest& request) const
{
  return std::async(std::launch::async, &DirectConnectClient::AllocateConnectionOnInterconnect, this, request);
}

void DirectConnectClient::AllocateConnectionOnInterconnectAsync(const AllocateConnectionOnInterconnectRequest& request, const AllocateConnectionOnInterconnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectConnectClient::AllocateConnectionOnInterconnectAsyncHelper, this, request, handler, context);
}

void DirectConnectClient::AllocateConnectionOnInterconnectAsyncHelper(const AllocateConnectionOnInterconnectRequest& request, const AllocateConnectionOnInterconnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AllocateConnectionOnInterconnect(request), context);
}

AllocatePrivateVirtualInterfaceOutcome DirectConnectClient::AllocatePrivateVirtualInterface(const AllocatePrivateVirtualInterfaceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AllocatePrivateVirtualInterfaceOutcome(AllocatePrivateVirtualInterfaceResult(outcome.GetResult()));
  }
  else
  {
    return AllocatePrivateVirtualInterfaceOutcome(outcome.GetError());
  }
}

AllocatePrivateVirtualInterfaceOutcomeCallable DirectConnectClient::AllocatePrivateVirtualInterfaceCallable(const AllocatePrivateVirtualInterfaceRequest& request) const
{
  return std::async(std::launch::async, &DirectConnectClient::AllocatePrivateVirtualInterface, this, request);
}

void DirectConnectClient::AllocatePrivateVirtualInterfaceAsync(const AllocatePrivateVirtualInterfaceRequest& request, const AllocatePrivateVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectConnectClient::AllocatePrivateVirtualInterfaceAsyncHelper, this, request, handler, context);
}

void DirectConnectClient::AllocatePrivateVirtualInterfaceAsyncHelper(const AllocatePrivateVirtualInterfaceRequest& request, const AllocatePrivateVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AllocatePrivateVirtualInterface(request), context);
}

AllocatePublicVirtualInterfaceOutcome DirectConnectClient::AllocatePublicVirtualInterface(const AllocatePublicVirtualInterfaceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AllocatePublicVirtualInterfaceOutcome(AllocatePublicVirtualInterfaceResult(outcome.GetResult()));
  }
  else
  {
    return AllocatePublicVirtualInterfaceOutcome(outcome.GetError());
  }
}

AllocatePublicVirtualInterfaceOutcomeCallable DirectConnectClient::AllocatePublicVirtualInterfaceCallable(const AllocatePublicVirtualInterfaceRequest& request) const
{
  return std::async(std::launch::async, &DirectConnectClient::AllocatePublicVirtualInterface, this, request);
}

void DirectConnectClient::AllocatePublicVirtualInterfaceAsync(const AllocatePublicVirtualInterfaceRequest& request, const AllocatePublicVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectConnectClient::AllocatePublicVirtualInterfaceAsyncHelper, this, request, handler, context);
}

void DirectConnectClient::AllocatePublicVirtualInterfaceAsyncHelper(const AllocatePublicVirtualInterfaceRequest& request, const AllocatePublicVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AllocatePublicVirtualInterface(request), context);
}

ConfirmConnectionOutcome DirectConnectClient::ConfirmConnection(const ConfirmConnectionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ConfirmConnectionOutcome(ConfirmConnectionResult(outcome.GetResult()));
  }
  else
  {
    return ConfirmConnectionOutcome(outcome.GetError());
  }
}

ConfirmConnectionOutcomeCallable DirectConnectClient::ConfirmConnectionCallable(const ConfirmConnectionRequest& request) const
{
  return std::async(std::launch::async, &DirectConnectClient::ConfirmConnection, this, request);
}

void DirectConnectClient::ConfirmConnectionAsync(const ConfirmConnectionRequest& request, const ConfirmConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectConnectClient::ConfirmConnectionAsyncHelper, this, request, handler, context);
}

void DirectConnectClient::ConfirmConnectionAsyncHelper(const ConfirmConnectionRequest& request, const ConfirmConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ConfirmConnection(request), context);
}

ConfirmPrivateVirtualInterfaceOutcome DirectConnectClient::ConfirmPrivateVirtualInterface(const ConfirmPrivateVirtualInterfaceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ConfirmPrivateVirtualInterfaceOutcome(ConfirmPrivateVirtualInterfaceResult(outcome.GetResult()));
  }
  else
  {
    return ConfirmPrivateVirtualInterfaceOutcome(outcome.GetError());
  }
}

ConfirmPrivateVirtualInterfaceOutcomeCallable DirectConnectClient::ConfirmPrivateVirtualInterfaceCallable(const ConfirmPrivateVirtualInterfaceRequest& request) const
{
  return std::async(std::launch::async, &DirectConnectClient::ConfirmPrivateVirtualInterface, this, request);
}

void DirectConnectClient::ConfirmPrivateVirtualInterfaceAsync(const ConfirmPrivateVirtualInterfaceRequest& request, const ConfirmPrivateVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectConnectClient::ConfirmPrivateVirtualInterfaceAsyncHelper, this, request, handler, context);
}

void DirectConnectClient::ConfirmPrivateVirtualInterfaceAsyncHelper(const ConfirmPrivateVirtualInterfaceRequest& request, const ConfirmPrivateVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ConfirmPrivateVirtualInterface(request), context);
}

ConfirmPublicVirtualInterfaceOutcome DirectConnectClient::ConfirmPublicVirtualInterface(const ConfirmPublicVirtualInterfaceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ConfirmPublicVirtualInterfaceOutcome(ConfirmPublicVirtualInterfaceResult(outcome.GetResult()));
  }
  else
  {
    return ConfirmPublicVirtualInterfaceOutcome(outcome.GetError());
  }
}

ConfirmPublicVirtualInterfaceOutcomeCallable DirectConnectClient::ConfirmPublicVirtualInterfaceCallable(const ConfirmPublicVirtualInterfaceRequest& request) const
{
  return std::async(std::launch::async, &DirectConnectClient::ConfirmPublicVirtualInterface, this, request);
}

void DirectConnectClient::ConfirmPublicVirtualInterfaceAsync(const ConfirmPublicVirtualInterfaceRequest& request, const ConfirmPublicVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectConnectClient::ConfirmPublicVirtualInterfaceAsyncHelper, this, request, handler, context);
}

void DirectConnectClient::ConfirmPublicVirtualInterfaceAsyncHelper(const ConfirmPublicVirtualInterfaceRequest& request, const ConfirmPublicVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ConfirmPublicVirtualInterface(request), context);
}

CreateConnectionOutcome DirectConnectClient::CreateConnection(const CreateConnectionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateConnectionOutcome(CreateConnectionResult(outcome.GetResult()));
  }
  else
  {
    return CreateConnectionOutcome(outcome.GetError());
  }
}

CreateConnectionOutcomeCallable DirectConnectClient::CreateConnectionCallable(const CreateConnectionRequest& request) const
{
  return std::async(std::launch::async, &DirectConnectClient::CreateConnection, this, request);
}

void DirectConnectClient::CreateConnectionAsync(const CreateConnectionRequest& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectConnectClient::CreateConnectionAsyncHelper, this, request, handler, context);
}

void DirectConnectClient::CreateConnectionAsyncHelper(const CreateConnectionRequest& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateConnection(request), context);
}

CreateInterconnectOutcome DirectConnectClient::CreateInterconnect(const CreateInterconnectRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateInterconnectOutcome(CreateInterconnectResult(outcome.GetResult()));
  }
  else
  {
    return CreateInterconnectOutcome(outcome.GetError());
  }
}

CreateInterconnectOutcomeCallable DirectConnectClient::CreateInterconnectCallable(const CreateInterconnectRequest& request) const
{
  return std::async(std::launch::async, &DirectConnectClient::CreateInterconnect, this, request);
}

void DirectConnectClient::CreateInterconnectAsync(const CreateInterconnectRequest& request, const CreateInterconnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectConnectClient::CreateInterconnectAsyncHelper, this, request, handler, context);
}

void DirectConnectClient::CreateInterconnectAsyncHelper(const CreateInterconnectRequest& request, const CreateInterconnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateInterconnect(request), context);
}

CreatePrivateVirtualInterfaceOutcome DirectConnectClient::CreatePrivateVirtualInterface(const CreatePrivateVirtualInterfaceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreatePrivateVirtualInterfaceOutcome(CreatePrivateVirtualInterfaceResult(outcome.GetResult()));
  }
  else
  {
    return CreatePrivateVirtualInterfaceOutcome(outcome.GetError());
  }
}

CreatePrivateVirtualInterfaceOutcomeCallable DirectConnectClient::CreatePrivateVirtualInterfaceCallable(const CreatePrivateVirtualInterfaceRequest& request) const
{
  return std::async(std::launch::async, &DirectConnectClient::CreatePrivateVirtualInterface, this, request);
}

void DirectConnectClient::CreatePrivateVirtualInterfaceAsync(const CreatePrivateVirtualInterfaceRequest& request, const CreatePrivateVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectConnectClient::CreatePrivateVirtualInterfaceAsyncHelper, this, request, handler, context);
}

void DirectConnectClient::CreatePrivateVirtualInterfaceAsyncHelper(const CreatePrivateVirtualInterfaceRequest& request, const CreatePrivateVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePrivateVirtualInterface(request), context);
}

CreatePublicVirtualInterfaceOutcome DirectConnectClient::CreatePublicVirtualInterface(const CreatePublicVirtualInterfaceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreatePublicVirtualInterfaceOutcome(CreatePublicVirtualInterfaceResult(outcome.GetResult()));
  }
  else
  {
    return CreatePublicVirtualInterfaceOutcome(outcome.GetError());
  }
}

CreatePublicVirtualInterfaceOutcomeCallable DirectConnectClient::CreatePublicVirtualInterfaceCallable(const CreatePublicVirtualInterfaceRequest& request) const
{
  return std::async(std::launch::async, &DirectConnectClient::CreatePublicVirtualInterface, this, request);
}

void DirectConnectClient::CreatePublicVirtualInterfaceAsync(const CreatePublicVirtualInterfaceRequest& request, const CreatePublicVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectConnectClient::CreatePublicVirtualInterfaceAsyncHelper, this, request, handler, context);
}

void DirectConnectClient::CreatePublicVirtualInterfaceAsyncHelper(const CreatePublicVirtualInterfaceRequest& request, const CreatePublicVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePublicVirtualInterface(request), context);
}

DeleteConnectionOutcome DirectConnectClient::DeleteConnection(const DeleteConnectionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteConnectionOutcome(DeleteConnectionResult(outcome.GetResult()));
  }
  else
  {
    return DeleteConnectionOutcome(outcome.GetError());
  }
}

DeleteConnectionOutcomeCallable DirectConnectClient::DeleteConnectionCallable(const DeleteConnectionRequest& request) const
{
  return std::async(std::launch::async, &DirectConnectClient::DeleteConnection, this, request);
}

void DirectConnectClient::DeleteConnectionAsync(const DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectConnectClient::DeleteConnectionAsyncHelper, this, request, handler, context);
}

void DirectConnectClient::DeleteConnectionAsyncHelper(const DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteConnection(request), context);
}

DeleteInterconnectOutcome DirectConnectClient::DeleteInterconnect(const DeleteInterconnectRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteInterconnectOutcome(DeleteInterconnectResult(outcome.GetResult()));
  }
  else
  {
    return DeleteInterconnectOutcome(outcome.GetError());
  }
}

DeleteInterconnectOutcomeCallable DirectConnectClient::DeleteInterconnectCallable(const DeleteInterconnectRequest& request) const
{
  return std::async(std::launch::async, &DirectConnectClient::DeleteInterconnect, this, request);
}

void DirectConnectClient::DeleteInterconnectAsync(const DeleteInterconnectRequest& request, const DeleteInterconnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectConnectClient::DeleteInterconnectAsyncHelper, this, request, handler, context);
}

void DirectConnectClient::DeleteInterconnectAsyncHelper(const DeleteInterconnectRequest& request, const DeleteInterconnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteInterconnect(request), context);
}

DeleteVirtualInterfaceOutcome DirectConnectClient::DeleteVirtualInterface(const DeleteVirtualInterfaceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteVirtualInterfaceOutcome(DeleteVirtualInterfaceResult(outcome.GetResult()));
  }
  else
  {
    return DeleteVirtualInterfaceOutcome(outcome.GetError());
  }
}

DeleteVirtualInterfaceOutcomeCallable DirectConnectClient::DeleteVirtualInterfaceCallable(const DeleteVirtualInterfaceRequest& request) const
{
  return std::async(std::launch::async, &DirectConnectClient::DeleteVirtualInterface, this, request);
}

void DirectConnectClient::DeleteVirtualInterfaceAsync(const DeleteVirtualInterfaceRequest& request, const DeleteVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectConnectClient::DeleteVirtualInterfaceAsyncHelper, this, request, handler, context);
}

void DirectConnectClient::DeleteVirtualInterfaceAsyncHelper(const DeleteVirtualInterfaceRequest& request, const DeleteVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVirtualInterface(request), context);
}

DescribeConnectionsOutcome DirectConnectClient::DescribeConnections(const DescribeConnectionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeConnectionsOutcome(DescribeConnectionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeConnectionsOutcome(outcome.GetError());
  }
}

DescribeConnectionsOutcomeCallable DirectConnectClient::DescribeConnectionsCallable(const DescribeConnectionsRequest& request) const
{
  return std::async(std::launch::async, &DirectConnectClient::DescribeConnections, this, request);
}

void DirectConnectClient::DescribeConnectionsAsync(const DescribeConnectionsRequest& request, const DescribeConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectConnectClient::DescribeConnectionsAsyncHelper, this, request, handler, context);
}

void DirectConnectClient::DescribeConnectionsAsyncHelper(const DescribeConnectionsRequest& request, const DescribeConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeConnections(request), context);
}

DescribeConnectionsOnInterconnectOutcome DirectConnectClient::DescribeConnectionsOnInterconnect(const DescribeConnectionsOnInterconnectRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeConnectionsOnInterconnectOutcome(DescribeConnectionsOnInterconnectResult(outcome.GetResult()));
  }
  else
  {
    return DescribeConnectionsOnInterconnectOutcome(outcome.GetError());
  }
}

DescribeConnectionsOnInterconnectOutcomeCallable DirectConnectClient::DescribeConnectionsOnInterconnectCallable(const DescribeConnectionsOnInterconnectRequest& request) const
{
  return std::async(std::launch::async, &DirectConnectClient::DescribeConnectionsOnInterconnect, this, request);
}

void DirectConnectClient::DescribeConnectionsOnInterconnectAsync(const DescribeConnectionsOnInterconnectRequest& request, const DescribeConnectionsOnInterconnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectConnectClient::DescribeConnectionsOnInterconnectAsyncHelper, this, request, handler, context);
}

void DirectConnectClient::DescribeConnectionsOnInterconnectAsyncHelper(const DescribeConnectionsOnInterconnectRequest& request, const DescribeConnectionsOnInterconnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeConnectionsOnInterconnect(request), context);
}

DescribeInterconnectsOutcome DirectConnectClient::DescribeInterconnects(const DescribeInterconnectsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeInterconnectsOutcome(DescribeInterconnectsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeInterconnectsOutcome(outcome.GetError());
  }
}

DescribeInterconnectsOutcomeCallable DirectConnectClient::DescribeInterconnectsCallable(const DescribeInterconnectsRequest& request) const
{
  return std::async(std::launch::async, &DirectConnectClient::DescribeInterconnects, this, request);
}

void DirectConnectClient::DescribeInterconnectsAsync(const DescribeInterconnectsRequest& request, const DescribeInterconnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectConnectClient::DescribeInterconnectsAsyncHelper, this, request, handler, context);
}

void DirectConnectClient::DescribeInterconnectsAsyncHelper(const DescribeInterconnectsRequest& request, const DescribeInterconnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeInterconnects(request), context);
}

DescribeLocationsOutcome DirectConnectClient::DescribeLocations() const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeLocationsOutcome(DescribeLocationsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeLocationsOutcome(outcome.GetError());
  }
}

DescribeLocationsOutcomeCallable DirectConnectClient::DescribeLocationsCallable() const
{
  return std::async(std::launch::async, &DirectConnectClient::DescribeLocations, this);
}

void DirectConnectClient::DescribeLocationsAsync(const DescribeLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectConnectClient::DescribeLocationsAsyncHelper, this, handler, context);
}

void DirectConnectClient::DescribeLocationsAsyncHelper(const DescribeLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, DescribeLocations(), context);
}

DescribeVirtualGatewaysOutcome DirectConnectClient::DescribeVirtualGateways() const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeVirtualGatewaysOutcome(DescribeVirtualGatewaysResult(outcome.GetResult()));
  }
  else
  {
    return DescribeVirtualGatewaysOutcome(outcome.GetError());
  }
}

DescribeVirtualGatewaysOutcomeCallable DirectConnectClient::DescribeVirtualGatewaysCallable() const
{
  return std::async(std::launch::async, &DirectConnectClient::DescribeVirtualGateways, this);
}

void DirectConnectClient::DescribeVirtualGatewaysAsync(const DescribeVirtualGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectConnectClient::DescribeVirtualGatewaysAsyncHelper, this, handler, context);
}

void DirectConnectClient::DescribeVirtualGatewaysAsyncHelper(const DescribeVirtualGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, DescribeVirtualGateways(), context);
}

DescribeVirtualInterfacesOutcome DirectConnectClient::DescribeVirtualInterfaces(const DescribeVirtualInterfacesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeVirtualInterfacesOutcome(DescribeVirtualInterfacesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeVirtualInterfacesOutcome(outcome.GetError());
  }
}

DescribeVirtualInterfacesOutcomeCallable DirectConnectClient::DescribeVirtualInterfacesCallable(const DescribeVirtualInterfacesRequest& request) const
{
  return std::async(std::launch::async, &DirectConnectClient::DescribeVirtualInterfaces, this, request);
}

void DirectConnectClient::DescribeVirtualInterfacesAsync(const DescribeVirtualInterfacesRequest& request, const DescribeVirtualInterfacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&DirectConnectClient::DescribeVirtualInterfacesAsyncHelper, this, request, handler, context);
}

void DirectConnectClient::DescribeVirtualInterfacesAsyncHelper(const DescribeVirtualInterfacesRequest& request, const DescribeVirtualInterfacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVirtualInterfaces(request), context);
}

