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

#include <aws/network-firewall/NetworkFirewallClient.h>
#include <aws/network-firewall/NetworkFirewallEndpoint.h>
#include <aws/network-firewall/NetworkFirewallErrorMarshaller.h>
#include <aws/network-firewall/model/AssociateFirewallPolicyRequest.h>
#include <aws/network-firewall/model/AssociateSubnetsRequest.h>
#include <aws/network-firewall/model/CreateFirewallRequest.h>
#include <aws/network-firewall/model/CreateFirewallPolicyRequest.h>
#include <aws/network-firewall/model/CreateRuleGroupRequest.h>
#include <aws/network-firewall/model/DeleteFirewallRequest.h>
#include <aws/network-firewall/model/DeleteFirewallPolicyRequest.h>
#include <aws/network-firewall/model/DeleteResourcePolicyRequest.h>
#include <aws/network-firewall/model/DeleteRuleGroupRequest.h>
#include <aws/network-firewall/model/DescribeFirewallRequest.h>
#include <aws/network-firewall/model/DescribeFirewallPolicyRequest.h>
#include <aws/network-firewall/model/DescribeLoggingConfigurationRequest.h>
#include <aws/network-firewall/model/DescribeResourcePolicyRequest.h>
#include <aws/network-firewall/model/DescribeRuleGroupRequest.h>
#include <aws/network-firewall/model/DisassociateSubnetsRequest.h>
#include <aws/network-firewall/model/ListFirewallPoliciesRequest.h>
#include <aws/network-firewall/model/ListFirewallsRequest.h>
#include <aws/network-firewall/model/ListRuleGroupsRequest.h>
#include <aws/network-firewall/model/ListTagsForResourceRequest.h>
#include <aws/network-firewall/model/PutResourcePolicyRequest.h>
#include <aws/network-firewall/model/TagResourceRequest.h>
#include <aws/network-firewall/model/UntagResourceRequest.h>
#include <aws/network-firewall/model/UpdateFirewallDeleteProtectionRequest.h>
#include <aws/network-firewall/model/UpdateFirewallDescriptionRequest.h>
#include <aws/network-firewall/model/UpdateFirewallPolicyRequest.h>
#include <aws/network-firewall/model/UpdateFirewallPolicyChangeProtectionRequest.h>
#include <aws/network-firewall/model/UpdateLoggingConfigurationRequest.h>
#include <aws/network-firewall/model/UpdateRuleGroupRequest.h>
#include <aws/network-firewall/model/UpdateSubnetChangeProtectionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::NetworkFirewall;
using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "network-firewall";
static const char* ALLOCATION_TAG = "NetworkFirewallClient";


NetworkFirewallClient::NetworkFirewallClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<NetworkFirewallErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

NetworkFirewallClient::NetworkFirewallClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<NetworkFirewallErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

NetworkFirewallClient::NetworkFirewallClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<NetworkFirewallErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

NetworkFirewallClient::~NetworkFirewallClient()
{
}

void NetworkFirewallClient::init(const ClientConfiguration& config)
{
  SetServiceClientName("Network Firewall");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + NetworkFirewallEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void NetworkFirewallClient::OverrideEndpoint(const Aws::String& endpoint)
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

AssociateFirewallPolicyOutcome NetworkFirewallClient::AssociateFirewallPolicy(const AssociateFirewallPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return AssociateFirewallPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateFirewallPolicyOutcomeCallable NetworkFirewallClient::AssociateFirewallPolicyCallable(const AssociateFirewallPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateFirewallPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateFirewallPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClient::AssociateFirewallPolicyAsync(const AssociateFirewallPolicyRequest& request, const AssociateFirewallPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateFirewallPolicyAsyncHelper( request, handler, context ); } );
}

void NetworkFirewallClient::AssociateFirewallPolicyAsyncHelper(const AssociateFirewallPolicyRequest& request, const AssociateFirewallPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateFirewallPolicy(request), context);
}

AssociateSubnetsOutcome NetworkFirewallClient::AssociateSubnets(const AssociateSubnetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return AssociateSubnetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateSubnetsOutcomeCallable NetworkFirewallClient::AssociateSubnetsCallable(const AssociateSubnetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateSubnetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateSubnets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClient::AssociateSubnetsAsync(const AssociateSubnetsRequest& request, const AssociateSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateSubnetsAsyncHelper( request, handler, context ); } );
}

void NetworkFirewallClient::AssociateSubnetsAsyncHelper(const AssociateSubnetsRequest& request, const AssociateSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateSubnets(request), context);
}

CreateFirewallOutcome NetworkFirewallClient::CreateFirewall(const CreateFirewallRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateFirewallOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFirewallOutcomeCallable NetworkFirewallClient::CreateFirewallCallable(const CreateFirewallRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFirewallOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFirewall(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClient::CreateFirewallAsync(const CreateFirewallRequest& request, const CreateFirewallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateFirewallAsyncHelper( request, handler, context ); } );
}

void NetworkFirewallClient::CreateFirewallAsyncHelper(const CreateFirewallRequest& request, const CreateFirewallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFirewall(request), context);
}

CreateFirewallPolicyOutcome NetworkFirewallClient::CreateFirewallPolicy(const CreateFirewallPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateFirewallPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFirewallPolicyOutcomeCallable NetworkFirewallClient::CreateFirewallPolicyCallable(const CreateFirewallPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFirewallPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFirewallPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClient::CreateFirewallPolicyAsync(const CreateFirewallPolicyRequest& request, const CreateFirewallPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateFirewallPolicyAsyncHelper( request, handler, context ); } );
}

void NetworkFirewallClient::CreateFirewallPolicyAsyncHelper(const CreateFirewallPolicyRequest& request, const CreateFirewallPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFirewallPolicy(request), context);
}

CreateRuleGroupOutcome NetworkFirewallClient::CreateRuleGroup(const CreateRuleGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateRuleGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRuleGroupOutcomeCallable NetworkFirewallClient::CreateRuleGroupCallable(const CreateRuleGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRuleGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRuleGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClient::CreateRuleGroupAsync(const CreateRuleGroupRequest& request, const CreateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateRuleGroupAsyncHelper( request, handler, context ); } );
}

void NetworkFirewallClient::CreateRuleGroupAsyncHelper(const CreateRuleGroupRequest& request, const CreateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRuleGroup(request), context);
}

DeleteFirewallOutcome NetworkFirewallClient::DeleteFirewall(const DeleteFirewallRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteFirewallOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFirewallOutcomeCallable NetworkFirewallClient::DeleteFirewallCallable(const DeleteFirewallRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFirewallOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFirewall(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClient::DeleteFirewallAsync(const DeleteFirewallRequest& request, const DeleteFirewallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFirewallAsyncHelper( request, handler, context ); } );
}

void NetworkFirewallClient::DeleteFirewallAsyncHelper(const DeleteFirewallRequest& request, const DeleteFirewallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFirewall(request), context);
}

DeleteFirewallPolicyOutcome NetworkFirewallClient::DeleteFirewallPolicy(const DeleteFirewallPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteFirewallPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFirewallPolicyOutcomeCallable NetworkFirewallClient::DeleteFirewallPolicyCallable(const DeleteFirewallPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFirewallPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFirewallPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClient::DeleteFirewallPolicyAsync(const DeleteFirewallPolicyRequest& request, const DeleteFirewallPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFirewallPolicyAsyncHelper( request, handler, context ); } );
}

void NetworkFirewallClient::DeleteFirewallPolicyAsyncHelper(const DeleteFirewallPolicyRequest& request, const DeleteFirewallPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFirewallPolicy(request), context);
}

DeleteResourcePolicyOutcome NetworkFirewallClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourcePolicyOutcomeCallable NetworkFirewallClient::DeleteResourcePolicyCallable(const DeleteResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClient::DeleteResourcePolicyAsync(const DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteResourcePolicyAsyncHelper( request, handler, context ); } );
}

void NetworkFirewallClient::DeleteResourcePolicyAsyncHelper(const DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteResourcePolicy(request), context);
}

DeleteRuleGroupOutcome NetworkFirewallClient::DeleteRuleGroup(const DeleteRuleGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteRuleGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRuleGroupOutcomeCallable NetworkFirewallClient::DeleteRuleGroupCallable(const DeleteRuleGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRuleGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRuleGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClient::DeleteRuleGroupAsync(const DeleteRuleGroupRequest& request, const DeleteRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRuleGroupAsyncHelper( request, handler, context ); } );
}

void NetworkFirewallClient::DeleteRuleGroupAsyncHelper(const DeleteRuleGroupRequest& request, const DeleteRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRuleGroup(request), context);
}

DescribeFirewallOutcome NetworkFirewallClient::DescribeFirewall(const DescribeFirewallRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeFirewallOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFirewallOutcomeCallable NetworkFirewallClient::DescribeFirewallCallable(const DescribeFirewallRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFirewallOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFirewall(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClient::DescribeFirewallAsync(const DescribeFirewallRequest& request, const DescribeFirewallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeFirewallAsyncHelper( request, handler, context ); } );
}

void NetworkFirewallClient::DescribeFirewallAsyncHelper(const DescribeFirewallRequest& request, const DescribeFirewallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFirewall(request), context);
}

DescribeFirewallPolicyOutcome NetworkFirewallClient::DescribeFirewallPolicy(const DescribeFirewallPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeFirewallPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFirewallPolicyOutcomeCallable NetworkFirewallClient::DescribeFirewallPolicyCallable(const DescribeFirewallPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFirewallPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFirewallPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClient::DescribeFirewallPolicyAsync(const DescribeFirewallPolicyRequest& request, const DescribeFirewallPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeFirewallPolicyAsyncHelper( request, handler, context ); } );
}

void NetworkFirewallClient::DescribeFirewallPolicyAsyncHelper(const DescribeFirewallPolicyRequest& request, const DescribeFirewallPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFirewallPolicy(request), context);
}

DescribeLoggingConfigurationOutcome NetworkFirewallClient::DescribeLoggingConfiguration(const DescribeLoggingConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeLoggingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeLoggingConfigurationOutcomeCallable NetworkFirewallClient::DescribeLoggingConfigurationCallable(const DescribeLoggingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLoggingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLoggingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClient::DescribeLoggingConfigurationAsync(const DescribeLoggingConfigurationRequest& request, const DescribeLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeLoggingConfigurationAsyncHelper( request, handler, context ); } );
}

void NetworkFirewallClient::DescribeLoggingConfigurationAsyncHelper(const DescribeLoggingConfigurationRequest& request, const DescribeLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeLoggingConfiguration(request), context);
}

DescribeResourcePolicyOutcome NetworkFirewallClient::DescribeResourcePolicy(const DescribeResourcePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeResourcePolicyOutcomeCallable NetworkFirewallClient::DescribeResourcePolicyCallable(const DescribeResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClient::DescribeResourcePolicyAsync(const DescribeResourcePolicyRequest& request, const DescribeResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeResourcePolicyAsyncHelper( request, handler, context ); } );
}

void NetworkFirewallClient::DescribeResourcePolicyAsyncHelper(const DescribeResourcePolicyRequest& request, const DescribeResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeResourcePolicy(request), context);
}

DescribeRuleGroupOutcome NetworkFirewallClient::DescribeRuleGroup(const DescribeRuleGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DescribeRuleGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRuleGroupOutcomeCallable NetworkFirewallClient::DescribeRuleGroupCallable(const DescribeRuleGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRuleGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRuleGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClient::DescribeRuleGroupAsync(const DescribeRuleGroupRequest& request, const DescribeRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeRuleGroupAsyncHelper( request, handler, context ); } );
}

void NetworkFirewallClient::DescribeRuleGroupAsyncHelper(const DescribeRuleGroupRequest& request, const DescribeRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRuleGroup(request), context);
}

DisassociateSubnetsOutcome NetworkFirewallClient::DisassociateSubnets(const DisassociateSubnetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return DisassociateSubnetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateSubnetsOutcomeCallable NetworkFirewallClient::DisassociateSubnetsCallable(const DisassociateSubnetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateSubnetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateSubnets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClient::DisassociateSubnetsAsync(const DisassociateSubnetsRequest& request, const DisassociateSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateSubnetsAsyncHelper( request, handler, context ); } );
}

void NetworkFirewallClient::DisassociateSubnetsAsyncHelper(const DisassociateSubnetsRequest& request, const DisassociateSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateSubnets(request), context);
}

ListFirewallPoliciesOutcome NetworkFirewallClient::ListFirewallPolicies(const ListFirewallPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListFirewallPoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFirewallPoliciesOutcomeCallable NetworkFirewallClient::ListFirewallPoliciesCallable(const ListFirewallPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFirewallPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFirewallPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClient::ListFirewallPoliciesAsync(const ListFirewallPoliciesRequest& request, const ListFirewallPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListFirewallPoliciesAsyncHelper( request, handler, context ); } );
}

void NetworkFirewallClient::ListFirewallPoliciesAsyncHelper(const ListFirewallPoliciesRequest& request, const ListFirewallPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFirewallPolicies(request), context);
}

ListFirewallsOutcome NetworkFirewallClient::ListFirewalls(const ListFirewallsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListFirewallsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFirewallsOutcomeCallable NetworkFirewallClient::ListFirewallsCallable(const ListFirewallsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFirewallsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFirewalls(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClient::ListFirewallsAsync(const ListFirewallsRequest& request, const ListFirewallsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListFirewallsAsyncHelper( request, handler, context ); } );
}

void NetworkFirewallClient::ListFirewallsAsyncHelper(const ListFirewallsRequest& request, const ListFirewallsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFirewalls(request), context);
}

ListRuleGroupsOutcome NetworkFirewallClient::ListRuleGroups(const ListRuleGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListRuleGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRuleGroupsOutcomeCallable NetworkFirewallClient::ListRuleGroupsCallable(const ListRuleGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRuleGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRuleGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClient::ListRuleGroupsAsync(const ListRuleGroupsRequest& request, const ListRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRuleGroupsAsyncHelper( request, handler, context ); } );
}

void NetworkFirewallClient::ListRuleGroupsAsyncHelper(const ListRuleGroupsRequest& request, const ListRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRuleGroups(request), context);
}

ListTagsForResourceOutcome NetworkFirewallClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable NetworkFirewallClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void NetworkFirewallClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

PutResourcePolicyOutcome NetworkFirewallClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutResourcePolicyOutcomeCallable NetworkFirewallClient::PutResourcePolicyCallable(const PutResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClient::PutResourcePolicyAsync(const PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutResourcePolicyAsyncHelper( request, handler, context ); } );
}

void NetworkFirewallClient::PutResourcePolicyAsyncHelper(const PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutResourcePolicy(request), context);
}

TagResourceOutcome NetworkFirewallClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable NetworkFirewallClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void NetworkFirewallClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome NetworkFirewallClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable NetworkFirewallClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void NetworkFirewallClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateFirewallDeleteProtectionOutcome NetworkFirewallClient::UpdateFirewallDeleteProtection(const UpdateFirewallDeleteProtectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateFirewallDeleteProtectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateFirewallDeleteProtectionOutcomeCallable NetworkFirewallClient::UpdateFirewallDeleteProtectionCallable(const UpdateFirewallDeleteProtectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFirewallDeleteProtectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFirewallDeleteProtection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClient::UpdateFirewallDeleteProtectionAsync(const UpdateFirewallDeleteProtectionRequest& request, const UpdateFirewallDeleteProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFirewallDeleteProtectionAsyncHelper( request, handler, context ); } );
}

void NetworkFirewallClient::UpdateFirewallDeleteProtectionAsyncHelper(const UpdateFirewallDeleteProtectionRequest& request, const UpdateFirewallDeleteProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFirewallDeleteProtection(request), context);
}

UpdateFirewallDescriptionOutcome NetworkFirewallClient::UpdateFirewallDescription(const UpdateFirewallDescriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateFirewallDescriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateFirewallDescriptionOutcomeCallable NetworkFirewallClient::UpdateFirewallDescriptionCallable(const UpdateFirewallDescriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFirewallDescriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFirewallDescription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClient::UpdateFirewallDescriptionAsync(const UpdateFirewallDescriptionRequest& request, const UpdateFirewallDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFirewallDescriptionAsyncHelper( request, handler, context ); } );
}

void NetworkFirewallClient::UpdateFirewallDescriptionAsyncHelper(const UpdateFirewallDescriptionRequest& request, const UpdateFirewallDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFirewallDescription(request), context);
}

UpdateFirewallPolicyOutcome NetworkFirewallClient::UpdateFirewallPolicy(const UpdateFirewallPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateFirewallPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateFirewallPolicyOutcomeCallable NetworkFirewallClient::UpdateFirewallPolicyCallable(const UpdateFirewallPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFirewallPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFirewallPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClient::UpdateFirewallPolicyAsync(const UpdateFirewallPolicyRequest& request, const UpdateFirewallPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFirewallPolicyAsyncHelper( request, handler, context ); } );
}

void NetworkFirewallClient::UpdateFirewallPolicyAsyncHelper(const UpdateFirewallPolicyRequest& request, const UpdateFirewallPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFirewallPolicy(request), context);
}

UpdateFirewallPolicyChangeProtectionOutcome NetworkFirewallClient::UpdateFirewallPolicyChangeProtection(const UpdateFirewallPolicyChangeProtectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateFirewallPolicyChangeProtectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateFirewallPolicyChangeProtectionOutcomeCallable NetworkFirewallClient::UpdateFirewallPolicyChangeProtectionCallable(const UpdateFirewallPolicyChangeProtectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFirewallPolicyChangeProtectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFirewallPolicyChangeProtection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClient::UpdateFirewallPolicyChangeProtectionAsync(const UpdateFirewallPolicyChangeProtectionRequest& request, const UpdateFirewallPolicyChangeProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFirewallPolicyChangeProtectionAsyncHelper( request, handler, context ); } );
}

void NetworkFirewallClient::UpdateFirewallPolicyChangeProtectionAsyncHelper(const UpdateFirewallPolicyChangeProtectionRequest& request, const UpdateFirewallPolicyChangeProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFirewallPolicyChangeProtection(request), context);
}

UpdateLoggingConfigurationOutcome NetworkFirewallClient::UpdateLoggingConfiguration(const UpdateLoggingConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateLoggingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateLoggingConfigurationOutcomeCallable NetworkFirewallClient::UpdateLoggingConfigurationCallable(const UpdateLoggingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLoggingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLoggingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClient::UpdateLoggingConfigurationAsync(const UpdateLoggingConfigurationRequest& request, const UpdateLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateLoggingConfigurationAsyncHelper( request, handler, context ); } );
}

void NetworkFirewallClient::UpdateLoggingConfigurationAsyncHelper(const UpdateLoggingConfigurationRequest& request, const UpdateLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateLoggingConfiguration(request), context);
}

UpdateRuleGroupOutcome NetworkFirewallClient::UpdateRuleGroup(const UpdateRuleGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateRuleGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRuleGroupOutcomeCallable NetworkFirewallClient::UpdateRuleGroupCallable(const UpdateRuleGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRuleGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRuleGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClient::UpdateRuleGroupAsync(const UpdateRuleGroupRequest& request, const UpdateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRuleGroupAsyncHelper( request, handler, context ); } );
}

void NetworkFirewallClient::UpdateRuleGroupAsyncHelper(const UpdateRuleGroupRequest& request, const UpdateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRuleGroup(request), context);
}

UpdateSubnetChangeProtectionOutcome NetworkFirewallClient::UpdateSubnetChangeProtection(const UpdateSubnetChangeProtectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateSubnetChangeProtectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSubnetChangeProtectionOutcomeCallable NetworkFirewallClient::UpdateSubnetChangeProtectionCallable(const UpdateSubnetChangeProtectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSubnetChangeProtectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSubnetChangeProtection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClient::UpdateSubnetChangeProtectionAsync(const UpdateSubnetChangeProtectionRequest& request, const UpdateSubnetChangeProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateSubnetChangeProtectionAsyncHelper( request, handler, context ); } );
}

void NetworkFirewallClient::UpdateSubnetChangeProtectionAsyncHelper(const UpdateSubnetChangeProtectionRequest& request, const UpdateSubnetChangeProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateSubnetChangeProtection(request), context);
}

