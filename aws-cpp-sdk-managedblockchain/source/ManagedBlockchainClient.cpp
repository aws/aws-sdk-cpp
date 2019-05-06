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

#include <aws/managedblockchain/ManagedBlockchainClient.h>
#include <aws/managedblockchain/ManagedBlockchainEndpoint.h>
#include <aws/managedblockchain/ManagedBlockchainErrorMarshaller.h>
#include <aws/managedblockchain/model/CreateMemberRequest.h>
#include <aws/managedblockchain/model/CreateNetworkRequest.h>
#include <aws/managedblockchain/model/CreateNodeRequest.h>
#include <aws/managedblockchain/model/CreateProposalRequest.h>
#include <aws/managedblockchain/model/DeleteMemberRequest.h>
#include <aws/managedblockchain/model/DeleteNodeRequest.h>
#include <aws/managedblockchain/model/GetMemberRequest.h>
#include <aws/managedblockchain/model/GetNetworkRequest.h>
#include <aws/managedblockchain/model/GetNodeRequest.h>
#include <aws/managedblockchain/model/GetProposalRequest.h>
#include <aws/managedblockchain/model/ListInvitationsRequest.h>
#include <aws/managedblockchain/model/ListMembersRequest.h>
#include <aws/managedblockchain/model/ListNetworksRequest.h>
#include <aws/managedblockchain/model/ListNodesRequest.h>
#include <aws/managedblockchain/model/ListProposalVotesRequest.h>
#include <aws/managedblockchain/model/ListProposalsRequest.h>
#include <aws/managedblockchain/model/RejectInvitationRequest.h>
#include <aws/managedblockchain/model/VoteOnProposalRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ManagedBlockchain;
using namespace Aws::ManagedBlockchain::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "managedblockchain";
static const char* ALLOCATION_TAG = "ManagedBlockchainClient";


ManagedBlockchainClient::ManagedBlockchainClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ManagedBlockchainErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ManagedBlockchainClient::ManagedBlockchainClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ManagedBlockchainErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ManagedBlockchainClient::ManagedBlockchainClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ManagedBlockchainErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ManagedBlockchainClient::~ManagedBlockchainClient()
{
}

void ManagedBlockchainClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ManagedBlockchainEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ManagedBlockchainClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateMemberOutcome ManagedBlockchainClient::CreateMember(const CreateMemberRequest& request) const
{
  if (!request.NetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateMember", "Required field: NetworkId, is not set");
    return CreateMemberOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/networks/";
  ss << request.GetNetworkId();
  ss << "/members";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateMemberOutcome(CreateMemberResult(outcome.GetResult()));
  }
  else
  {
    return CreateMemberOutcome(outcome.GetError());
  }
}

CreateMemberOutcomeCallable ManagedBlockchainClient::CreateMemberCallable(const CreateMemberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMemberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMember(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ManagedBlockchainClient::CreateMemberAsync(const CreateMemberRequest& request, const CreateMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateMemberAsyncHelper( request, handler, context ); } );
}

void ManagedBlockchainClient::CreateMemberAsyncHelper(const CreateMemberRequest& request, const CreateMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateMember(request), context);
}

CreateNetworkOutcome ManagedBlockchainClient::CreateNetwork(const CreateNetworkRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/networks";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateNetworkOutcome(CreateNetworkResult(outcome.GetResult()));
  }
  else
  {
    return CreateNetworkOutcome(outcome.GetError());
  }
}

CreateNetworkOutcomeCallable ManagedBlockchainClient::CreateNetworkCallable(const CreateNetworkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateNetworkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateNetwork(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ManagedBlockchainClient::CreateNetworkAsync(const CreateNetworkRequest& request, const CreateNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateNetworkAsyncHelper( request, handler, context ); } );
}

void ManagedBlockchainClient::CreateNetworkAsyncHelper(const CreateNetworkRequest& request, const CreateNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateNetwork(request), context);
}

CreateNodeOutcome ManagedBlockchainClient::CreateNode(const CreateNodeRequest& request) const
{
  if (!request.NetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateNode", "Required field: NetworkId, is not set");
    return CreateNodeOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }
  if (!request.MemberIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateNode", "Required field: MemberId, is not set");
    return CreateNodeOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/networks/";
  ss << request.GetNetworkId();
  ss << "/members/";
  ss << request.GetMemberId();
  ss << "/nodes";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateNodeOutcome(CreateNodeResult(outcome.GetResult()));
  }
  else
  {
    return CreateNodeOutcome(outcome.GetError());
  }
}

CreateNodeOutcomeCallable ManagedBlockchainClient::CreateNodeCallable(const CreateNodeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateNodeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateNode(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ManagedBlockchainClient::CreateNodeAsync(const CreateNodeRequest& request, const CreateNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateNodeAsyncHelper( request, handler, context ); } );
}

void ManagedBlockchainClient::CreateNodeAsyncHelper(const CreateNodeRequest& request, const CreateNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateNode(request), context);
}

CreateProposalOutcome ManagedBlockchainClient::CreateProposal(const CreateProposalRequest& request) const
{
  if (!request.NetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateProposal", "Required field: NetworkId, is not set");
    return CreateProposalOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/networks/";
  ss << request.GetNetworkId();
  ss << "/proposals";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateProposalOutcome(CreateProposalResult(outcome.GetResult()));
  }
  else
  {
    return CreateProposalOutcome(outcome.GetError());
  }
}

CreateProposalOutcomeCallable ManagedBlockchainClient::CreateProposalCallable(const CreateProposalRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProposalOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProposal(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ManagedBlockchainClient::CreateProposalAsync(const CreateProposalRequest& request, const CreateProposalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateProposalAsyncHelper( request, handler, context ); } );
}

void ManagedBlockchainClient::CreateProposalAsyncHelper(const CreateProposalRequest& request, const CreateProposalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateProposal(request), context);
}

DeleteMemberOutcome ManagedBlockchainClient::DeleteMember(const DeleteMemberRequest& request) const
{
  if (!request.NetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMember", "Required field: NetworkId, is not set");
    return DeleteMemberOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }
  if (!request.MemberIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMember", "Required field: MemberId, is not set");
    return DeleteMemberOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/networks/";
  ss << request.GetNetworkId();
  ss << "/members/";
  ss << request.GetMemberId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteMemberOutcome(DeleteMemberResult(outcome.GetResult()));
  }
  else
  {
    return DeleteMemberOutcome(outcome.GetError());
  }
}

DeleteMemberOutcomeCallable ManagedBlockchainClient::DeleteMemberCallable(const DeleteMemberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMemberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMember(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ManagedBlockchainClient::DeleteMemberAsync(const DeleteMemberRequest& request, const DeleteMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteMemberAsyncHelper( request, handler, context ); } );
}

void ManagedBlockchainClient::DeleteMemberAsyncHelper(const DeleteMemberRequest& request, const DeleteMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteMember(request), context);
}

DeleteNodeOutcome ManagedBlockchainClient::DeleteNode(const DeleteNodeRequest& request) const
{
  if (!request.NetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteNode", "Required field: NetworkId, is not set");
    return DeleteNodeOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }
  if (!request.MemberIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteNode", "Required field: MemberId, is not set");
    return DeleteNodeOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberId]", false));
  }
  if (!request.NodeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteNode", "Required field: NodeId, is not set");
    return DeleteNodeOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NodeId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/networks/";
  ss << request.GetNetworkId();
  ss << "/members/";
  ss << request.GetMemberId();
  ss << "/nodes/";
  ss << request.GetNodeId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteNodeOutcome(DeleteNodeResult(outcome.GetResult()));
  }
  else
  {
    return DeleteNodeOutcome(outcome.GetError());
  }
}

DeleteNodeOutcomeCallable ManagedBlockchainClient::DeleteNodeCallable(const DeleteNodeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteNodeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteNode(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ManagedBlockchainClient::DeleteNodeAsync(const DeleteNodeRequest& request, const DeleteNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteNodeAsyncHelper( request, handler, context ); } );
}

void ManagedBlockchainClient::DeleteNodeAsyncHelper(const DeleteNodeRequest& request, const DeleteNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteNode(request), context);
}

GetMemberOutcome ManagedBlockchainClient::GetMember(const GetMemberRequest& request) const
{
  if (!request.NetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMember", "Required field: NetworkId, is not set");
    return GetMemberOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }
  if (!request.MemberIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMember", "Required field: MemberId, is not set");
    return GetMemberOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/networks/";
  ss << request.GetNetworkId();
  ss << "/members/";
  ss << request.GetMemberId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetMemberOutcome(GetMemberResult(outcome.GetResult()));
  }
  else
  {
    return GetMemberOutcome(outcome.GetError());
  }
}

GetMemberOutcomeCallable ManagedBlockchainClient::GetMemberCallable(const GetMemberRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMemberOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMember(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ManagedBlockchainClient::GetMemberAsync(const GetMemberRequest& request, const GetMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetMemberAsyncHelper( request, handler, context ); } );
}

void ManagedBlockchainClient::GetMemberAsyncHelper(const GetMemberRequest& request, const GetMemberResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetMember(request), context);
}

GetNetworkOutcome ManagedBlockchainClient::GetNetwork(const GetNetworkRequest& request) const
{
  if (!request.NetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetNetwork", "Required field: NetworkId, is not set");
    return GetNetworkOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/networks/";
  ss << request.GetNetworkId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetNetworkOutcome(GetNetworkResult(outcome.GetResult()));
  }
  else
  {
    return GetNetworkOutcome(outcome.GetError());
  }
}

GetNetworkOutcomeCallable ManagedBlockchainClient::GetNetworkCallable(const GetNetworkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetNetworkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetNetwork(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ManagedBlockchainClient::GetNetworkAsync(const GetNetworkRequest& request, const GetNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetNetworkAsyncHelper( request, handler, context ); } );
}

void ManagedBlockchainClient::GetNetworkAsyncHelper(const GetNetworkRequest& request, const GetNetworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetNetwork(request), context);
}

GetNodeOutcome ManagedBlockchainClient::GetNode(const GetNodeRequest& request) const
{
  if (!request.NetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetNode", "Required field: NetworkId, is not set");
    return GetNodeOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }
  if (!request.MemberIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetNode", "Required field: MemberId, is not set");
    return GetNodeOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberId]", false));
  }
  if (!request.NodeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetNode", "Required field: NodeId, is not set");
    return GetNodeOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NodeId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/networks/";
  ss << request.GetNetworkId();
  ss << "/members/";
  ss << request.GetMemberId();
  ss << "/nodes/";
  ss << request.GetNodeId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetNodeOutcome(GetNodeResult(outcome.GetResult()));
  }
  else
  {
    return GetNodeOutcome(outcome.GetError());
  }
}

GetNodeOutcomeCallable ManagedBlockchainClient::GetNodeCallable(const GetNodeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetNodeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetNode(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ManagedBlockchainClient::GetNodeAsync(const GetNodeRequest& request, const GetNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetNodeAsyncHelper( request, handler, context ); } );
}

void ManagedBlockchainClient::GetNodeAsyncHelper(const GetNodeRequest& request, const GetNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetNode(request), context);
}

GetProposalOutcome ManagedBlockchainClient::GetProposal(const GetProposalRequest& request) const
{
  if (!request.NetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProposal", "Required field: NetworkId, is not set");
    return GetProposalOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }
  if (!request.ProposalIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProposal", "Required field: ProposalId, is not set");
    return GetProposalOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProposalId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/networks/";
  ss << request.GetNetworkId();
  ss << "/proposals/";
  ss << request.GetProposalId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetProposalOutcome(GetProposalResult(outcome.GetResult()));
  }
  else
  {
    return GetProposalOutcome(outcome.GetError());
  }
}

GetProposalOutcomeCallable ManagedBlockchainClient::GetProposalCallable(const GetProposalRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetProposalOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetProposal(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ManagedBlockchainClient::GetProposalAsync(const GetProposalRequest& request, const GetProposalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetProposalAsyncHelper( request, handler, context ); } );
}

void ManagedBlockchainClient::GetProposalAsyncHelper(const GetProposalRequest& request, const GetProposalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetProposal(request), context);
}

ListInvitationsOutcome ManagedBlockchainClient::ListInvitations(const ListInvitationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/invitations";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListInvitationsOutcome(ListInvitationsResult(outcome.GetResult()));
  }
  else
  {
    return ListInvitationsOutcome(outcome.GetError());
  }
}

ListInvitationsOutcomeCallable ManagedBlockchainClient::ListInvitationsCallable(const ListInvitationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListInvitationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListInvitations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ManagedBlockchainClient::ListInvitationsAsync(const ListInvitationsRequest& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListInvitationsAsyncHelper( request, handler, context ); } );
}

void ManagedBlockchainClient::ListInvitationsAsyncHelper(const ListInvitationsRequest& request, const ListInvitationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListInvitations(request), context);
}

ListMembersOutcome ManagedBlockchainClient::ListMembers(const ListMembersRequest& request) const
{
  if (!request.NetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMembers", "Required field: NetworkId, is not set");
    return ListMembersOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/networks/";
  ss << request.GetNetworkId();
  ss << "/members";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListMembersOutcome(ListMembersResult(outcome.GetResult()));
  }
  else
  {
    return ListMembersOutcome(outcome.GetError());
  }
}

ListMembersOutcomeCallable ManagedBlockchainClient::ListMembersCallable(const ListMembersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMembersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMembers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ManagedBlockchainClient::ListMembersAsync(const ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListMembersAsyncHelper( request, handler, context ); } );
}

void ManagedBlockchainClient::ListMembersAsyncHelper(const ListMembersRequest& request, const ListMembersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListMembers(request), context);
}

ListNetworksOutcome ManagedBlockchainClient::ListNetworks(const ListNetworksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/networks";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListNetworksOutcome(ListNetworksResult(outcome.GetResult()));
  }
  else
  {
    return ListNetworksOutcome(outcome.GetError());
  }
}

ListNetworksOutcomeCallable ManagedBlockchainClient::ListNetworksCallable(const ListNetworksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNetworksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNetworks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ManagedBlockchainClient::ListNetworksAsync(const ListNetworksRequest& request, const ListNetworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListNetworksAsyncHelper( request, handler, context ); } );
}

void ManagedBlockchainClient::ListNetworksAsyncHelper(const ListNetworksRequest& request, const ListNetworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListNetworks(request), context);
}

ListNodesOutcome ManagedBlockchainClient::ListNodes(const ListNodesRequest& request) const
{
  if (!request.NetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListNodes", "Required field: NetworkId, is not set");
    return ListNodesOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }
  if (!request.MemberIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListNodes", "Required field: MemberId, is not set");
    return ListNodesOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MemberId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/networks/";
  ss << request.GetNetworkId();
  ss << "/members/";
  ss << request.GetMemberId();
  ss << "/nodes";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListNodesOutcome(ListNodesResult(outcome.GetResult()));
  }
  else
  {
    return ListNodesOutcome(outcome.GetError());
  }
}

ListNodesOutcomeCallable ManagedBlockchainClient::ListNodesCallable(const ListNodesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListNodesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListNodes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ManagedBlockchainClient::ListNodesAsync(const ListNodesRequest& request, const ListNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListNodesAsyncHelper( request, handler, context ); } );
}

void ManagedBlockchainClient::ListNodesAsyncHelper(const ListNodesRequest& request, const ListNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListNodes(request), context);
}

ListProposalVotesOutcome ManagedBlockchainClient::ListProposalVotes(const ListProposalVotesRequest& request) const
{
  if (!request.NetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProposalVotes", "Required field: NetworkId, is not set");
    return ListProposalVotesOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }
  if (!request.ProposalIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProposalVotes", "Required field: ProposalId, is not set");
    return ListProposalVotesOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProposalId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/networks/";
  ss << request.GetNetworkId();
  ss << "/proposals/";
  ss << request.GetProposalId();
  ss << "/votes";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListProposalVotesOutcome(ListProposalVotesResult(outcome.GetResult()));
  }
  else
  {
    return ListProposalVotesOutcome(outcome.GetError());
  }
}

ListProposalVotesOutcomeCallable ManagedBlockchainClient::ListProposalVotesCallable(const ListProposalVotesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProposalVotesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProposalVotes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ManagedBlockchainClient::ListProposalVotesAsync(const ListProposalVotesRequest& request, const ListProposalVotesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListProposalVotesAsyncHelper( request, handler, context ); } );
}

void ManagedBlockchainClient::ListProposalVotesAsyncHelper(const ListProposalVotesRequest& request, const ListProposalVotesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListProposalVotes(request), context);
}

ListProposalsOutcome ManagedBlockchainClient::ListProposals(const ListProposalsRequest& request) const
{
  if (!request.NetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProposals", "Required field: NetworkId, is not set");
    return ListProposalsOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/networks/";
  ss << request.GetNetworkId();
  ss << "/proposals";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListProposalsOutcome(ListProposalsResult(outcome.GetResult()));
  }
  else
  {
    return ListProposalsOutcome(outcome.GetError());
  }
}

ListProposalsOutcomeCallable ManagedBlockchainClient::ListProposalsCallable(const ListProposalsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProposalsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProposals(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ManagedBlockchainClient::ListProposalsAsync(const ListProposalsRequest& request, const ListProposalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListProposalsAsyncHelper( request, handler, context ); } );
}

void ManagedBlockchainClient::ListProposalsAsyncHelper(const ListProposalsRequest& request, const ListProposalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListProposals(request), context);
}

RejectInvitationOutcome ManagedBlockchainClient::RejectInvitation(const RejectInvitationRequest& request) const
{
  if (!request.InvitationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RejectInvitation", "Required field: InvitationId, is not set");
    return RejectInvitationOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InvitationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/invitations/";
  ss << request.GetInvitationId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RejectInvitationOutcome(RejectInvitationResult(outcome.GetResult()));
  }
  else
  {
    return RejectInvitationOutcome(outcome.GetError());
  }
}

RejectInvitationOutcomeCallable ManagedBlockchainClient::RejectInvitationCallable(const RejectInvitationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RejectInvitationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RejectInvitation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ManagedBlockchainClient::RejectInvitationAsync(const RejectInvitationRequest& request, const RejectInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RejectInvitationAsyncHelper( request, handler, context ); } );
}

void ManagedBlockchainClient::RejectInvitationAsyncHelper(const RejectInvitationRequest& request, const RejectInvitationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RejectInvitation(request), context);
}

VoteOnProposalOutcome ManagedBlockchainClient::VoteOnProposal(const VoteOnProposalRequest& request) const
{
  if (!request.NetworkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("VoteOnProposal", "Required field: NetworkId, is not set");
    return VoteOnProposalOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [NetworkId]", false));
  }
  if (!request.ProposalIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("VoteOnProposal", "Required field: ProposalId, is not set");
    return VoteOnProposalOutcome(Aws::Client::AWSError<ManagedBlockchainErrors>(ManagedBlockchainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProposalId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/networks/";
  ss << request.GetNetworkId();
  ss << "/proposals/";
  ss << request.GetProposalId();
  ss << "/votes";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return VoteOnProposalOutcome(VoteOnProposalResult(outcome.GetResult()));
  }
  else
  {
    return VoteOnProposalOutcome(outcome.GetError());
  }
}

VoteOnProposalOutcomeCallable ManagedBlockchainClient::VoteOnProposalCallable(const VoteOnProposalRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< VoteOnProposalOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->VoteOnProposal(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ManagedBlockchainClient::VoteOnProposalAsync(const VoteOnProposalRequest& request, const VoteOnProposalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->VoteOnProposalAsyncHelper( request, handler, context ); } );
}

void ManagedBlockchainClient::VoteOnProposalAsyncHelper(const VoteOnProposalRequest& request, const VoteOnProposalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, VoteOnProposal(request), context);
}

