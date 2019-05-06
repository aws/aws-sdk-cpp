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

#include <aws/directconnect/DirectConnectClient.h>
#include <aws/directconnect/DirectConnectEndpoint.h>
#include <aws/directconnect/DirectConnectErrorMarshaller.h>
#include <aws/directconnect/model/AcceptDirectConnectGatewayAssociationProposalRequest.h>
#include <aws/directconnect/model/AllocateHostedConnectionRequest.h>
#include <aws/directconnect/model/AllocatePrivateVirtualInterfaceRequest.h>
#include <aws/directconnect/model/AllocatePublicVirtualInterfaceRequest.h>
#include <aws/directconnect/model/AllocateTransitVirtualInterfaceRequest.h>
#include <aws/directconnect/model/AssociateConnectionWithLagRequest.h>
#include <aws/directconnect/model/AssociateHostedConnectionRequest.h>
#include <aws/directconnect/model/AssociateVirtualInterfaceRequest.h>
#include <aws/directconnect/model/ConfirmConnectionRequest.h>
#include <aws/directconnect/model/ConfirmPrivateVirtualInterfaceRequest.h>
#include <aws/directconnect/model/ConfirmPublicVirtualInterfaceRequest.h>
#include <aws/directconnect/model/ConfirmTransitVirtualInterfaceRequest.h>
#include <aws/directconnect/model/CreateBGPPeerRequest.h>
#include <aws/directconnect/model/CreateConnectionRequest.h>
#include <aws/directconnect/model/CreateDirectConnectGatewayRequest.h>
#include <aws/directconnect/model/CreateDirectConnectGatewayAssociationRequest.h>
#include <aws/directconnect/model/CreateDirectConnectGatewayAssociationProposalRequest.h>
#include <aws/directconnect/model/CreateInterconnectRequest.h>
#include <aws/directconnect/model/CreateLagRequest.h>
#include <aws/directconnect/model/CreatePrivateVirtualInterfaceRequest.h>
#include <aws/directconnect/model/CreatePublicVirtualInterfaceRequest.h>
#include <aws/directconnect/model/CreateTransitVirtualInterfaceRequest.h>
#include <aws/directconnect/model/DeleteBGPPeerRequest.h>
#include <aws/directconnect/model/DeleteConnectionRequest.h>
#include <aws/directconnect/model/DeleteDirectConnectGatewayRequest.h>
#include <aws/directconnect/model/DeleteDirectConnectGatewayAssociationRequest.h>
#include <aws/directconnect/model/DeleteDirectConnectGatewayAssociationProposalRequest.h>
#include <aws/directconnect/model/DeleteInterconnectRequest.h>
#include <aws/directconnect/model/DeleteLagRequest.h>
#include <aws/directconnect/model/DeleteVirtualInterfaceRequest.h>
#include <aws/directconnect/model/DescribeConnectionsRequest.h>
#include <aws/directconnect/model/DescribeDirectConnectGatewayAssociationProposalsRequest.h>
#include <aws/directconnect/model/DescribeDirectConnectGatewayAssociationsRequest.h>
#include <aws/directconnect/model/DescribeDirectConnectGatewayAttachmentsRequest.h>
#include <aws/directconnect/model/DescribeDirectConnectGatewaysRequest.h>
#include <aws/directconnect/model/DescribeHostedConnectionsRequest.h>
#include <aws/directconnect/model/DescribeInterconnectsRequest.h>
#include <aws/directconnect/model/DescribeLagsRequest.h>
#include <aws/directconnect/model/DescribeLoaRequest.h>
#include <aws/directconnect/model/DescribeTagsRequest.h>
#include <aws/directconnect/model/DescribeVirtualInterfacesRequest.h>
#include <aws/directconnect/model/DisassociateConnectionFromLagRequest.h>
#include <aws/directconnect/model/TagResourceRequest.h>
#include <aws/directconnect/model/UntagResourceRequest.h>
#include <aws/directconnect/model/UpdateDirectConnectGatewayAssociationRequest.h>
#include <aws/directconnect/model/UpdateLagRequest.h>
#include <aws/directconnect/model/UpdateVirtualInterfaceAttributesRequest.h>

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
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + DirectConnectEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void DirectConnectClient::OverrideEndpoint(const Aws::String& endpoint)
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

AcceptDirectConnectGatewayAssociationProposalOutcome DirectConnectClient::AcceptDirectConnectGatewayAssociationProposal(const AcceptDirectConnectGatewayAssociationProposalRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AcceptDirectConnectGatewayAssociationProposalOutcome(AcceptDirectConnectGatewayAssociationProposalResult(outcome.GetResult()));
  }
  else
  {
    return AcceptDirectConnectGatewayAssociationProposalOutcome(outcome.GetError());
  }
}

AcceptDirectConnectGatewayAssociationProposalOutcomeCallable DirectConnectClient::AcceptDirectConnectGatewayAssociationProposalCallable(const AcceptDirectConnectGatewayAssociationProposalRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AcceptDirectConnectGatewayAssociationProposalOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AcceptDirectConnectGatewayAssociationProposal(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::AcceptDirectConnectGatewayAssociationProposalAsync(const AcceptDirectConnectGatewayAssociationProposalRequest& request, const AcceptDirectConnectGatewayAssociationProposalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AcceptDirectConnectGatewayAssociationProposalAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::AcceptDirectConnectGatewayAssociationProposalAsyncHelper(const AcceptDirectConnectGatewayAssociationProposalRequest& request, const AcceptDirectConnectGatewayAssociationProposalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AcceptDirectConnectGatewayAssociationProposal(request), context);
}

AllocateHostedConnectionOutcome DirectConnectClient::AllocateHostedConnection(const AllocateHostedConnectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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

AllocateTransitVirtualInterfaceOutcome DirectConnectClient::AllocateTransitVirtualInterface(const AllocateTransitVirtualInterfaceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AllocateTransitVirtualInterfaceOutcome(AllocateTransitVirtualInterfaceResult(outcome.GetResult()));
  }
  else
  {
    return AllocateTransitVirtualInterfaceOutcome(outcome.GetError());
  }
}

AllocateTransitVirtualInterfaceOutcomeCallable DirectConnectClient::AllocateTransitVirtualInterfaceCallable(const AllocateTransitVirtualInterfaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AllocateTransitVirtualInterfaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AllocateTransitVirtualInterface(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::AllocateTransitVirtualInterfaceAsync(const AllocateTransitVirtualInterfaceRequest& request, const AllocateTransitVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AllocateTransitVirtualInterfaceAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::AllocateTransitVirtualInterfaceAsyncHelper(const AllocateTransitVirtualInterfaceRequest& request, const AllocateTransitVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AllocateTransitVirtualInterface(request), context);
}

AssociateConnectionWithLagOutcome DirectConnectClient::AssociateConnectionWithLag(const AssociateConnectionWithLagRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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

ConfirmTransitVirtualInterfaceOutcome DirectConnectClient::ConfirmTransitVirtualInterface(const ConfirmTransitVirtualInterfaceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ConfirmTransitVirtualInterfaceOutcome(ConfirmTransitVirtualInterfaceResult(outcome.GetResult()));
  }
  else
  {
    return ConfirmTransitVirtualInterfaceOutcome(outcome.GetError());
  }
}

ConfirmTransitVirtualInterfaceOutcomeCallable DirectConnectClient::ConfirmTransitVirtualInterfaceCallable(const ConfirmTransitVirtualInterfaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ConfirmTransitVirtualInterfaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ConfirmTransitVirtualInterface(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::ConfirmTransitVirtualInterfaceAsync(const ConfirmTransitVirtualInterfaceRequest& request, const ConfirmTransitVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ConfirmTransitVirtualInterfaceAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::ConfirmTransitVirtualInterfaceAsyncHelper(const ConfirmTransitVirtualInterfaceRequest& request, const ConfirmTransitVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ConfirmTransitVirtualInterface(request), context);
}

CreateBGPPeerOutcome DirectConnectClient::CreateBGPPeer(const CreateBGPPeerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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

CreateDirectConnectGatewayOutcome DirectConnectClient::CreateDirectConnectGateway(const CreateDirectConnectGatewayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDirectConnectGatewayOutcome(CreateDirectConnectGatewayResult(outcome.GetResult()));
  }
  else
  {
    return CreateDirectConnectGatewayOutcome(outcome.GetError());
  }
}

CreateDirectConnectGatewayOutcomeCallable DirectConnectClient::CreateDirectConnectGatewayCallable(const CreateDirectConnectGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDirectConnectGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDirectConnectGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::CreateDirectConnectGatewayAsync(const CreateDirectConnectGatewayRequest& request, const CreateDirectConnectGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDirectConnectGatewayAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::CreateDirectConnectGatewayAsyncHelper(const CreateDirectConnectGatewayRequest& request, const CreateDirectConnectGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDirectConnectGateway(request), context);
}

CreateDirectConnectGatewayAssociationOutcome DirectConnectClient::CreateDirectConnectGatewayAssociation(const CreateDirectConnectGatewayAssociationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDirectConnectGatewayAssociationOutcome(CreateDirectConnectGatewayAssociationResult(outcome.GetResult()));
  }
  else
  {
    return CreateDirectConnectGatewayAssociationOutcome(outcome.GetError());
  }
}

CreateDirectConnectGatewayAssociationOutcomeCallable DirectConnectClient::CreateDirectConnectGatewayAssociationCallable(const CreateDirectConnectGatewayAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDirectConnectGatewayAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDirectConnectGatewayAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::CreateDirectConnectGatewayAssociationAsync(const CreateDirectConnectGatewayAssociationRequest& request, const CreateDirectConnectGatewayAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDirectConnectGatewayAssociationAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::CreateDirectConnectGatewayAssociationAsyncHelper(const CreateDirectConnectGatewayAssociationRequest& request, const CreateDirectConnectGatewayAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDirectConnectGatewayAssociation(request), context);
}

CreateDirectConnectGatewayAssociationProposalOutcome DirectConnectClient::CreateDirectConnectGatewayAssociationProposal(const CreateDirectConnectGatewayAssociationProposalRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDirectConnectGatewayAssociationProposalOutcome(CreateDirectConnectGatewayAssociationProposalResult(outcome.GetResult()));
  }
  else
  {
    return CreateDirectConnectGatewayAssociationProposalOutcome(outcome.GetError());
  }
}

CreateDirectConnectGatewayAssociationProposalOutcomeCallable DirectConnectClient::CreateDirectConnectGatewayAssociationProposalCallable(const CreateDirectConnectGatewayAssociationProposalRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDirectConnectGatewayAssociationProposalOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDirectConnectGatewayAssociationProposal(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::CreateDirectConnectGatewayAssociationProposalAsync(const CreateDirectConnectGatewayAssociationProposalRequest& request, const CreateDirectConnectGatewayAssociationProposalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDirectConnectGatewayAssociationProposalAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::CreateDirectConnectGatewayAssociationProposalAsyncHelper(const CreateDirectConnectGatewayAssociationProposalRequest& request, const CreateDirectConnectGatewayAssociationProposalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDirectConnectGatewayAssociationProposal(request), context);
}

CreateInterconnectOutcome DirectConnectClient::CreateInterconnect(const CreateInterconnectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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

CreateTransitVirtualInterfaceOutcome DirectConnectClient::CreateTransitVirtualInterface(const CreateTransitVirtualInterfaceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateTransitVirtualInterfaceOutcome(CreateTransitVirtualInterfaceResult(outcome.GetResult()));
  }
  else
  {
    return CreateTransitVirtualInterfaceOutcome(outcome.GetError());
  }
}

CreateTransitVirtualInterfaceOutcomeCallable DirectConnectClient::CreateTransitVirtualInterfaceCallable(const CreateTransitVirtualInterfaceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTransitVirtualInterfaceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTransitVirtualInterface(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::CreateTransitVirtualInterfaceAsync(const CreateTransitVirtualInterfaceRequest& request, const CreateTransitVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTransitVirtualInterfaceAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::CreateTransitVirtualInterfaceAsyncHelper(const CreateTransitVirtualInterfaceRequest& request, const CreateTransitVirtualInterfaceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTransitVirtualInterface(request), context);
}

DeleteBGPPeerOutcome DirectConnectClient::DeleteBGPPeer(const DeleteBGPPeerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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

DeleteDirectConnectGatewayOutcome DirectConnectClient::DeleteDirectConnectGateway(const DeleteDirectConnectGatewayRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDirectConnectGatewayOutcome(DeleteDirectConnectGatewayResult(outcome.GetResult()));
  }
  else
  {
    return DeleteDirectConnectGatewayOutcome(outcome.GetError());
  }
}

DeleteDirectConnectGatewayOutcomeCallable DirectConnectClient::DeleteDirectConnectGatewayCallable(const DeleteDirectConnectGatewayRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDirectConnectGatewayOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDirectConnectGateway(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::DeleteDirectConnectGatewayAsync(const DeleteDirectConnectGatewayRequest& request, const DeleteDirectConnectGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDirectConnectGatewayAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::DeleteDirectConnectGatewayAsyncHelper(const DeleteDirectConnectGatewayRequest& request, const DeleteDirectConnectGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDirectConnectGateway(request), context);
}

DeleteDirectConnectGatewayAssociationOutcome DirectConnectClient::DeleteDirectConnectGatewayAssociation(const DeleteDirectConnectGatewayAssociationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDirectConnectGatewayAssociationOutcome(DeleteDirectConnectGatewayAssociationResult(outcome.GetResult()));
  }
  else
  {
    return DeleteDirectConnectGatewayAssociationOutcome(outcome.GetError());
  }
}

DeleteDirectConnectGatewayAssociationOutcomeCallable DirectConnectClient::DeleteDirectConnectGatewayAssociationCallable(const DeleteDirectConnectGatewayAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDirectConnectGatewayAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDirectConnectGatewayAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::DeleteDirectConnectGatewayAssociationAsync(const DeleteDirectConnectGatewayAssociationRequest& request, const DeleteDirectConnectGatewayAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDirectConnectGatewayAssociationAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::DeleteDirectConnectGatewayAssociationAsyncHelper(const DeleteDirectConnectGatewayAssociationRequest& request, const DeleteDirectConnectGatewayAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDirectConnectGatewayAssociation(request), context);
}

DeleteDirectConnectGatewayAssociationProposalOutcome DirectConnectClient::DeleteDirectConnectGatewayAssociationProposal(const DeleteDirectConnectGatewayAssociationProposalRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDirectConnectGatewayAssociationProposalOutcome(DeleteDirectConnectGatewayAssociationProposalResult(outcome.GetResult()));
  }
  else
  {
    return DeleteDirectConnectGatewayAssociationProposalOutcome(outcome.GetError());
  }
}

DeleteDirectConnectGatewayAssociationProposalOutcomeCallable DirectConnectClient::DeleteDirectConnectGatewayAssociationProposalCallable(const DeleteDirectConnectGatewayAssociationProposalRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDirectConnectGatewayAssociationProposalOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDirectConnectGatewayAssociationProposal(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::DeleteDirectConnectGatewayAssociationProposalAsync(const DeleteDirectConnectGatewayAssociationProposalRequest& request, const DeleteDirectConnectGatewayAssociationProposalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDirectConnectGatewayAssociationProposalAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::DeleteDirectConnectGatewayAssociationProposalAsyncHelper(const DeleteDirectConnectGatewayAssociationProposalRequest& request, const DeleteDirectConnectGatewayAssociationProposalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDirectConnectGatewayAssociationProposal(request), context);
}

DeleteInterconnectOutcome DirectConnectClient::DeleteInterconnect(const DeleteInterconnectRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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

DescribeDirectConnectGatewayAssociationProposalsOutcome DirectConnectClient::DescribeDirectConnectGatewayAssociationProposals(const DescribeDirectConnectGatewayAssociationProposalsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeDirectConnectGatewayAssociationProposalsOutcome(DescribeDirectConnectGatewayAssociationProposalsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDirectConnectGatewayAssociationProposalsOutcome(outcome.GetError());
  }
}

DescribeDirectConnectGatewayAssociationProposalsOutcomeCallable DirectConnectClient::DescribeDirectConnectGatewayAssociationProposalsCallable(const DescribeDirectConnectGatewayAssociationProposalsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDirectConnectGatewayAssociationProposalsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDirectConnectGatewayAssociationProposals(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::DescribeDirectConnectGatewayAssociationProposalsAsync(const DescribeDirectConnectGatewayAssociationProposalsRequest& request, const DescribeDirectConnectGatewayAssociationProposalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDirectConnectGatewayAssociationProposalsAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::DescribeDirectConnectGatewayAssociationProposalsAsyncHelper(const DescribeDirectConnectGatewayAssociationProposalsRequest& request, const DescribeDirectConnectGatewayAssociationProposalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDirectConnectGatewayAssociationProposals(request), context);
}

DescribeDirectConnectGatewayAssociationsOutcome DirectConnectClient::DescribeDirectConnectGatewayAssociations(const DescribeDirectConnectGatewayAssociationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeDirectConnectGatewayAssociationsOutcome(DescribeDirectConnectGatewayAssociationsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDirectConnectGatewayAssociationsOutcome(outcome.GetError());
  }
}

DescribeDirectConnectGatewayAssociationsOutcomeCallable DirectConnectClient::DescribeDirectConnectGatewayAssociationsCallable(const DescribeDirectConnectGatewayAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDirectConnectGatewayAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDirectConnectGatewayAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::DescribeDirectConnectGatewayAssociationsAsync(const DescribeDirectConnectGatewayAssociationsRequest& request, const DescribeDirectConnectGatewayAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDirectConnectGatewayAssociationsAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::DescribeDirectConnectGatewayAssociationsAsyncHelper(const DescribeDirectConnectGatewayAssociationsRequest& request, const DescribeDirectConnectGatewayAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDirectConnectGatewayAssociations(request), context);
}

DescribeDirectConnectGatewayAttachmentsOutcome DirectConnectClient::DescribeDirectConnectGatewayAttachments(const DescribeDirectConnectGatewayAttachmentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeDirectConnectGatewayAttachmentsOutcome(DescribeDirectConnectGatewayAttachmentsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDirectConnectGatewayAttachmentsOutcome(outcome.GetError());
  }
}

DescribeDirectConnectGatewayAttachmentsOutcomeCallable DirectConnectClient::DescribeDirectConnectGatewayAttachmentsCallable(const DescribeDirectConnectGatewayAttachmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDirectConnectGatewayAttachmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDirectConnectGatewayAttachments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::DescribeDirectConnectGatewayAttachmentsAsync(const DescribeDirectConnectGatewayAttachmentsRequest& request, const DescribeDirectConnectGatewayAttachmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDirectConnectGatewayAttachmentsAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::DescribeDirectConnectGatewayAttachmentsAsyncHelper(const DescribeDirectConnectGatewayAttachmentsRequest& request, const DescribeDirectConnectGatewayAttachmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDirectConnectGatewayAttachments(request), context);
}

DescribeDirectConnectGatewaysOutcome DirectConnectClient::DescribeDirectConnectGateways(const DescribeDirectConnectGatewaysRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeDirectConnectGatewaysOutcome(DescribeDirectConnectGatewaysResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDirectConnectGatewaysOutcome(outcome.GetError());
  }
}

DescribeDirectConnectGatewaysOutcomeCallable DirectConnectClient::DescribeDirectConnectGatewaysCallable(const DescribeDirectConnectGatewaysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDirectConnectGatewaysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDirectConnectGateways(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::DescribeDirectConnectGatewaysAsync(const DescribeDirectConnectGatewaysRequest& request, const DescribeDirectConnectGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDirectConnectGatewaysAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::DescribeDirectConnectGatewaysAsyncHelper(const DescribeDirectConnectGatewaysRequest& request, const DescribeDirectConnectGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDirectConnectGateways(request), context);
}

DescribeHostedConnectionsOutcome DirectConnectClient::DescribeHostedConnections(const DescribeHostedConnectionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  JsonOutcome outcome = MakeRequest(ss.str(), HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER, "DescribeLocations");
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  JsonOutcome outcome = MakeRequest(ss.str(), HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER, "DescribeVirtualGateways");
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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

UpdateDirectConnectGatewayAssociationOutcome DirectConnectClient::UpdateDirectConnectGatewayAssociation(const UpdateDirectConnectGatewayAssociationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateDirectConnectGatewayAssociationOutcome(UpdateDirectConnectGatewayAssociationResult(outcome.GetResult()));
  }
  else
  {
    return UpdateDirectConnectGatewayAssociationOutcome(outcome.GetError());
  }
}

UpdateDirectConnectGatewayAssociationOutcomeCallable DirectConnectClient::UpdateDirectConnectGatewayAssociationCallable(const UpdateDirectConnectGatewayAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDirectConnectGatewayAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDirectConnectGatewayAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::UpdateDirectConnectGatewayAssociationAsync(const UpdateDirectConnectGatewayAssociationRequest& request, const UpdateDirectConnectGatewayAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDirectConnectGatewayAssociationAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::UpdateDirectConnectGatewayAssociationAsyncHelper(const UpdateDirectConnectGatewayAssociationRequest& request, const UpdateDirectConnectGatewayAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDirectConnectGatewayAssociation(request), context);
}

UpdateLagOutcome DirectConnectClient::UpdateLag(const UpdateLagRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
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

UpdateVirtualInterfaceAttributesOutcome DirectConnectClient::UpdateVirtualInterfaceAttributes(const UpdateVirtualInterfaceAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateVirtualInterfaceAttributesOutcome(UpdateVirtualInterfaceAttributesResult(outcome.GetResult()));
  }
  else
  {
    return UpdateVirtualInterfaceAttributesOutcome(outcome.GetError());
  }
}

UpdateVirtualInterfaceAttributesOutcomeCallable DirectConnectClient::UpdateVirtualInterfaceAttributesCallable(const UpdateVirtualInterfaceAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVirtualInterfaceAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVirtualInterfaceAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void DirectConnectClient::UpdateVirtualInterfaceAttributesAsync(const UpdateVirtualInterfaceAttributesRequest& request, const UpdateVirtualInterfaceAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateVirtualInterfaceAttributesAsyncHelper( request, handler, context ); } );
}

void DirectConnectClient::UpdateVirtualInterfaceAttributesAsyncHelper(const UpdateVirtualInterfaceAttributesRequest& request, const UpdateVirtualInterfaceAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateVirtualInterfaceAttributes(request), context);
}

