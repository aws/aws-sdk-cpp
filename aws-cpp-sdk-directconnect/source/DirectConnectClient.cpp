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
#include <aws/directconnect/model/AllocateHostedConnectionRequest.h>
#include <aws/directconnect/model/AllocatePrivateVirtualInterfaceRequest.h>
#include <aws/directconnect/model/AllocatePublicVirtualInterfaceRequest.h>
#include <aws/directconnect/model/AssociateConnectionWithLagRequest.h>
#include <aws/directconnect/model/AssociateHostedConnectionRequest.h>
#include <aws/directconnect/model/AssociateVirtualInterfaceRequest.h>
#include <aws/directconnect/model/ConfirmConnectionRequest.h>
#include <aws/directconnect/model/ConfirmPrivateVirtualInterfaceRequest.h>
#include <aws/directconnect/model/ConfirmPublicVirtualInterfaceRequest.h>
#include <aws/directconnect/model/CreateBGPPeerRequest.h>
#include <aws/directconnect/model/CreateConnectionRequest.h>
#include <aws/directconnect/model/CreateInterconnectRequest.h>
#include <aws/directconnect/model/CreateLagRequest.h>
#include <aws/directconnect/model/CreatePrivateVirtualInterfaceRequest.h>
#include <aws/directconnect/model/CreatePublicVirtualInterfaceRequest.h>
#include <aws/directconnect/model/DeleteBGPPeerRequest.h>
#include <aws/directconnect/model/DeleteConnectionRequest.h>
#include <aws/directconnect/model/DeleteInterconnectRequest.h>
#include <aws/directconnect/model/DeleteLagRequest.h>
#include <aws/directconnect/model/DeleteVirtualInterfaceRequest.h>
#include <aws/directconnect/model/DescribeConnectionsRequest.h>
#include <aws/directconnect/model/DescribeHostedConnectionsRequest.h>
#include <aws/directconnect/model/DescribeInterconnectsRequest.h>
#include <aws/directconnect/model/DescribeLagsRequest.h>
#include <aws/directconnect/model/DescribeLoaRequest.h>
#include <aws/directconnect/model/DescribeTagsRequest.h>
#include <aws/directconnect/model/DescribeVirtualInterfacesRequest.h>
#include <aws/directconnect/model/DisassociateConnectionFromLagRequest.h>
#include <aws/directconnect/model/TagResourceRequest.h>
#include <aws/directconnect/model/UntagResourceRequest.h>
#include <aws/directconnect/model/UpdateLagRequest.h>

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
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<DirectConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DirectConnectClient::DirectConnectClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<DirectConnectErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

DirectConnectClient::DirectConnectClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
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

  if(config.endpointOverride.empty())
  {
    ss << DirectConnectEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

AllocateHostedConnectionOutcome DirectConnectClient::AllocateHostedConnection(const AllocateHostedConnectionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AllocateHostedConnectionOutcome(AllocateHostedConnectionResult(outcome.GetResult()));
  }
  else
  {
    return AllocateHostedConnectionOutcome(outcome.GetError());
  }
}

AllocateHostedConnectionOutcomeCallable DirectConnectClient::AllocateHostedConnectionCallable(const AllocateHostedConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AllocateHostedConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AllocateHostedConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::AllocateHostedConnectionAsync(const AllocateHostedConnectionRequest& request, const AllocateHostedConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AllocateHostedConnectionAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::AllocateHostedConnectionAsyncHelper(const AllocateHostedConnectionRequest& request, const AllocateHostedConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AllocateHostedConnection(request), context);
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
  auto task = Aws::MakeShared< std::packaged_task< AllocatePrivateVirtualInterfaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AllocatePrivateVirtualInterface(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::AllocatePrivateVirtualInterfaceAsync(const AllocatePrivateVirtualInterfaceRequest& request, const AllocatePrivateVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AllocatePrivateVirtualInterfaceAsyncHelper( request, handler, context ); } );
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
  auto task = Aws::MakeShared< std::packaged_task< AllocatePublicVirtualInterfaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AllocatePublicVirtualInterface(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::AllocatePublicVirtualInterfaceAsync(const AllocatePublicVirtualInterfaceRequest& request, const AllocatePublicVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AllocatePublicVirtualInterfaceAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::AllocatePublicVirtualInterfaceAsyncHelper(const AllocatePublicVirtualInterfaceRequest& request, const AllocatePublicVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AllocatePublicVirtualInterface(request), context);
}

AssociateConnectionWithLagOutcome DirectConnectClient::AssociateConnectionWithLag(const AssociateConnectionWithLagRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AssociateConnectionWithLagOutcome(AssociateConnectionWithLagResult(outcome.GetResult()));
  }
  else
  {
    return AssociateConnectionWithLagOutcome(outcome.GetError());
  }
}

AssociateConnectionWithLagOutcomeCallable DirectConnectClient::AssociateConnectionWithLagCallable(const AssociateConnectionWithLagRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateConnectionWithLagOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateConnectionWithLag(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::AssociateConnectionWithLagAsync(const AssociateConnectionWithLagRequest& request, const AssociateConnectionWithLagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateConnectionWithLagAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::AssociateConnectionWithLagAsyncHelper(const AssociateConnectionWithLagRequest& request, const AssociateConnectionWithLagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateConnectionWithLag(request), context);
}

AssociateHostedConnectionOutcome DirectConnectClient::AssociateHostedConnection(const AssociateHostedConnectionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AssociateHostedConnectionOutcome(AssociateHostedConnectionResult(outcome.GetResult()));
  }
  else
  {
    return AssociateHostedConnectionOutcome(outcome.GetError());
  }
}

AssociateHostedConnectionOutcomeCallable DirectConnectClient::AssociateHostedConnectionCallable(const AssociateHostedConnectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateHostedConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateHostedConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::AssociateHostedConnectionAsync(const AssociateHostedConnectionRequest& request, const AssociateHostedConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateHostedConnectionAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::AssociateHostedConnectionAsyncHelper(const AssociateHostedConnectionRequest& request, const AssociateHostedConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateHostedConnection(request), context);
}

AssociateVirtualInterfaceOutcome DirectConnectClient::AssociateVirtualInterface(const AssociateVirtualInterfaceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AssociateVirtualInterfaceOutcome(AssociateVirtualInterfaceResult(outcome.GetResult()));
  }
  else
  {
    return AssociateVirtualInterfaceOutcome(outcome.GetError());
  }
}

AssociateVirtualInterfaceOutcomeCallable DirectConnectClient::AssociateVirtualInterfaceCallable(const AssociateVirtualInterfaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateVirtualInterfaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateVirtualInterface(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::AssociateVirtualInterfaceAsync(const AssociateVirtualInterfaceRequest& request, const AssociateVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateVirtualInterfaceAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::AssociateVirtualInterfaceAsyncHelper(const AssociateVirtualInterfaceRequest& request, const AssociateVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateVirtualInterface(request), context);
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
  auto task = Aws::MakeShared< std::packaged_task< ConfirmConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ConfirmConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::ConfirmConnectionAsync(const ConfirmConnectionRequest& request, const ConfirmConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ConfirmConnectionAsyncHelper( request, handler, context ); } );
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
  auto task = Aws::MakeShared< std::packaged_task< ConfirmPrivateVirtualInterfaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ConfirmPrivateVirtualInterface(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::ConfirmPrivateVirtualInterfaceAsync(const ConfirmPrivateVirtualInterfaceRequest& request, const ConfirmPrivateVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ConfirmPrivateVirtualInterfaceAsyncHelper( request, handler, context ); } );
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
  auto task = Aws::MakeShared< std::packaged_task< ConfirmPublicVirtualInterfaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ConfirmPublicVirtualInterface(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::ConfirmPublicVirtualInterfaceAsync(const ConfirmPublicVirtualInterfaceRequest& request, const ConfirmPublicVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ConfirmPublicVirtualInterfaceAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::ConfirmPublicVirtualInterfaceAsyncHelper(const ConfirmPublicVirtualInterfaceRequest& request, const ConfirmPublicVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ConfirmPublicVirtualInterface(request), context);
}

CreateBGPPeerOutcome DirectConnectClient::CreateBGPPeer(const CreateBGPPeerRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateBGPPeerOutcome(CreateBGPPeerResult(outcome.GetResult()));
  }
  else
  {
    return CreateBGPPeerOutcome(outcome.GetError());
  }
}

CreateBGPPeerOutcomeCallable DirectConnectClient::CreateBGPPeerCallable(const CreateBGPPeerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBGPPeerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBGPPeer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::CreateBGPPeerAsync(const CreateBGPPeerRequest& request, const CreateBGPPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateBGPPeerAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::CreateBGPPeerAsyncHelper(const CreateBGPPeerRequest& request, const CreateBGPPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateBGPPeer(request), context);
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
  auto task = Aws::MakeShared< std::packaged_task< CreateConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::CreateConnectionAsync(const CreateConnectionRequest& request, const CreateConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateConnectionAsyncHelper( request, handler, context ); } );
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
  auto task = Aws::MakeShared< std::packaged_task< CreateInterconnectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateInterconnect(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::CreateInterconnectAsync(const CreateInterconnectRequest& request, const CreateInterconnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateInterconnectAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::CreateInterconnectAsyncHelper(const CreateInterconnectRequest& request, const CreateInterconnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateInterconnect(request), context);
}

CreateLagOutcome DirectConnectClient::CreateLag(const CreateLagRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateLagOutcome(CreateLagResult(outcome.GetResult()));
  }
  else
  {
    return CreateLagOutcome(outcome.GetError());
  }
}

CreateLagOutcomeCallable DirectConnectClient::CreateLagCallable(const CreateLagRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLagOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLag(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::CreateLagAsync(const CreateLagRequest& request, const CreateLagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateLagAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::CreateLagAsyncHelper(const CreateLagRequest& request, const CreateLagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateLag(request), context);
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
  auto task = Aws::MakeShared< std::packaged_task< CreatePrivateVirtualInterfaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePrivateVirtualInterface(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::CreatePrivateVirtualInterfaceAsync(const CreatePrivateVirtualInterfaceRequest& request, const CreatePrivateVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePrivateVirtualInterfaceAsyncHelper( request, handler, context ); } );
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
  auto task = Aws::MakeShared< std::packaged_task< CreatePublicVirtualInterfaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreatePublicVirtualInterface(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::CreatePublicVirtualInterfaceAsync(const CreatePublicVirtualInterfaceRequest& request, const CreatePublicVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreatePublicVirtualInterfaceAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::CreatePublicVirtualInterfaceAsyncHelper(const CreatePublicVirtualInterfaceRequest& request, const CreatePublicVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreatePublicVirtualInterface(request), context);
}

DeleteBGPPeerOutcome DirectConnectClient::DeleteBGPPeer(const DeleteBGPPeerRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteBGPPeerOutcome(DeleteBGPPeerResult(outcome.GetResult()));
  }
  else
  {
    return DeleteBGPPeerOutcome(outcome.GetError());
  }
}

DeleteBGPPeerOutcomeCallable DirectConnectClient::DeleteBGPPeerCallable(const DeleteBGPPeerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBGPPeerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBGPPeer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::DeleteBGPPeerAsync(const DeleteBGPPeerRequest& request, const DeleteBGPPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteBGPPeerAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::DeleteBGPPeerAsyncHelper(const DeleteBGPPeerRequest& request, const DeleteBGPPeerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteBGPPeer(request), context);
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
  auto task = Aws::MakeShared< std::packaged_task< DeleteConnectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteConnection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::DeleteConnectionAsync(const DeleteConnectionRequest& request, const DeleteConnectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteConnectionAsyncHelper( request, handler, context ); } );
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
  auto task = Aws::MakeShared< std::packaged_task< DeleteInterconnectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteInterconnect(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::DeleteInterconnectAsync(const DeleteInterconnectRequest& request, const DeleteInterconnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteInterconnectAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::DeleteInterconnectAsyncHelper(const DeleteInterconnectRequest& request, const DeleteInterconnectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteInterconnect(request), context);
}

DeleteLagOutcome DirectConnectClient::DeleteLag(const DeleteLagRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteLagOutcome(DeleteLagResult(outcome.GetResult()));
  }
  else
  {
    return DeleteLagOutcome(outcome.GetError());
  }
}

DeleteLagOutcomeCallable DirectConnectClient::DeleteLagCallable(const DeleteLagRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLagOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLag(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::DeleteLagAsync(const DeleteLagRequest& request, const DeleteLagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteLagAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::DeleteLagAsyncHelper(const DeleteLagRequest& request, const DeleteLagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteLag(request), context);
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
  auto task = Aws::MakeShared< std::packaged_task< DeleteVirtualInterfaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVirtualInterface(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::DeleteVirtualInterfaceAsync(const DeleteVirtualInterfaceRequest& request, const DeleteVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVirtualInterfaceAsyncHelper( request, handler, context ); } );
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
  auto task = Aws::MakeShared< std::packaged_task< DescribeConnectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeConnections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::DescribeConnectionsAsync(const DescribeConnectionsRequest& request, const DescribeConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeConnectionsAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::DescribeConnectionsAsyncHelper(const DescribeConnectionsRequest& request, const DescribeConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeConnections(request), context);
}

DescribeHostedConnectionsOutcome DirectConnectClient::DescribeHostedConnections(const DescribeHostedConnectionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeHostedConnectionsOutcome(DescribeHostedConnectionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeHostedConnectionsOutcome(outcome.GetError());
  }
}

DescribeHostedConnectionsOutcomeCallable DirectConnectClient::DescribeHostedConnectionsCallable(const DescribeHostedConnectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeHostedConnectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeHostedConnections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::DescribeHostedConnectionsAsync(const DescribeHostedConnectionsRequest& request, const DescribeHostedConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeHostedConnectionsAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::DescribeHostedConnectionsAsyncHelper(const DescribeHostedConnectionsRequest& request, const DescribeHostedConnectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeHostedConnections(request), context);
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
  auto task = Aws::MakeShared< std::packaged_task< DescribeInterconnectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInterconnects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::DescribeInterconnectsAsync(const DescribeInterconnectsRequest& request, const DescribeInterconnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeInterconnectsAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::DescribeInterconnectsAsyncHelper(const DescribeInterconnectsRequest& request, const DescribeInterconnectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeInterconnects(request), context);
}

DescribeLagsOutcome DirectConnectClient::DescribeLags(const DescribeLagsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeLagsOutcome(DescribeLagsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeLagsOutcome(outcome.GetError());
  }
}

DescribeLagsOutcomeCallable DirectConnectClient::DescribeLagsCallable(const DescribeLagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::DescribeLagsAsync(const DescribeLagsRequest& request, const DescribeLagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeLagsAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::DescribeLagsAsyncHelper(const DescribeLagsRequest& request, const DescribeLagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeLags(request), context);
}

DescribeLoaOutcome DirectConnectClient::DescribeLoa(const DescribeLoaRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeLoaOutcome(DescribeLoaResult(outcome.GetResult()));
  }
  else
  {
    return DescribeLoaOutcome(outcome.GetError());
  }
}

DescribeLoaOutcomeCallable DirectConnectClient::DescribeLoaCallable(const DescribeLoaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLoaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLoa(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::DescribeLoaAsync(const DescribeLoaRequest& request, const DescribeLoaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeLoaAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::DescribeLoaAsyncHelper(const DescribeLoaRequest& request, const DescribeLoaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeLoa(request), context);
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
  auto task = Aws::MakeShared< std::packaged_task< DescribeLocationsOutcome() > >(ALLOCATION_TAG, [this](){ return this->DescribeLocations(); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::DescribeLocationsAsync(const DescribeLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, handler, context](){ this->DescribeLocationsAsyncHelper( handler, context ); } );
}

void DirectConnectClient::DescribeLocationsAsyncHelper(const DescribeLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, DescribeLocations(), context);
}

DescribeTagsOutcome DirectConnectClient::DescribeTags(const DescribeTagsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeTagsOutcome(DescribeTagsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTagsOutcome(outcome.GetError());
  }
}

DescribeTagsOutcomeCallable DirectConnectClient::DescribeTagsCallable(const DescribeTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::DescribeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTagsAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::DescribeTagsAsyncHelper(const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTags(request), context);
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
  auto task = Aws::MakeShared< std::packaged_task< DescribeVirtualGatewaysOutcome() > >(ALLOCATION_TAG, [this](){ return this->DescribeVirtualGateways(); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::DescribeVirtualGatewaysAsync(const DescribeVirtualGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, handler, context](){ this->DescribeVirtualGatewaysAsyncHelper( handler, context ); } );
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
  auto task = Aws::MakeShared< std::packaged_task< DescribeVirtualInterfacesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVirtualInterfaces(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::DescribeVirtualInterfacesAsync(const DescribeVirtualInterfacesRequest& request, const DescribeVirtualInterfacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeVirtualInterfacesAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::DescribeVirtualInterfacesAsyncHelper(const DescribeVirtualInterfacesRequest& request, const DescribeVirtualInterfacesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVirtualInterfaces(request), context);
}

DisassociateConnectionFromLagOutcome DirectConnectClient::DisassociateConnectionFromLag(const DisassociateConnectionFromLagRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DisassociateConnectionFromLagOutcome(DisassociateConnectionFromLagResult(outcome.GetResult()));
  }
  else
  {
    return DisassociateConnectionFromLagOutcome(outcome.GetError());
  }
}

DisassociateConnectionFromLagOutcomeCallable DirectConnectClient::DisassociateConnectionFromLagCallable(const DisassociateConnectionFromLagRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateConnectionFromLagOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateConnectionFromLag(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::DisassociateConnectionFromLagAsync(const DisassociateConnectionFromLagRequest& request, const DisassociateConnectionFromLagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateConnectionFromLagAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::DisassociateConnectionFromLagAsyncHelper(const DisassociateConnectionFromLagRequest& request, const DisassociateConnectionFromLagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateConnectionFromLag(request), context);
}

TagResourceOutcome DirectConnectClient::TagResource(const TagResourceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return TagResourceOutcome(TagResourceResult(outcome.GetResult()));
  }
  else
  {
    return TagResourceOutcome(outcome.GetError());
  }
}

TagResourceOutcomeCallable DirectConnectClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome DirectConnectClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UntagResourceOutcome(UntagResourceResult(outcome.GetResult()));
  }
  else
  {
    return UntagResourceOutcome(outcome.GetError());
  }
}

UntagResourceOutcomeCallable DirectConnectClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateLagOutcome DirectConnectClient::UpdateLag(const UpdateLagRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateLagOutcome(UpdateLagResult(outcome.GetResult()));
  }
  else
  {
    return UpdateLagOutcome(outcome.GetError());
  }
}

UpdateLagOutcomeCallable DirectConnectClient::UpdateLagCallable(const UpdateLagRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLagOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLag(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::UpdateLagAsync(const UpdateLagRequest& request, const UpdateLagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateLagAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::UpdateLagAsyncHelper(const UpdateLagRequest& request, const UpdateLagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateLag(request), context);
}

