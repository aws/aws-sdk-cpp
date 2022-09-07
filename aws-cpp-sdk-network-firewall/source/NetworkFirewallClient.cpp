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
#include <aws/network-firewall/model/DescribeRuleGroupMetadataRequest.h>
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
#include <aws/network-firewall/model/UpdateFirewallEncryptionConfigurationRequest.h>
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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<NetworkFirewallErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

NetworkFirewallClient::NetworkFirewallClient(const AWSCredentials& credentials,
                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<NetworkFirewallErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

NetworkFirewallClient::NetworkFirewallClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<NetworkFirewallErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

NetworkFirewallClient::~NetworkFirewallClient()
{
}

void NetworkFirewallClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Network Firewall");
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
  return AssociateFirewallPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateFirewallPolicyOutcomeCallable NetworkFirewallClient::AssociateFirewallPolicyCallable(const AssociateFirewallPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateFirewallPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateFirewallPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClientAssociateFirewallPolicyAsyncHelper(NetworkFirewallClient const * const clientThis, const AssociateFirewallPolicyRequest& request, const AssociateFirewallPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateFirewallPolicy(request), context);
}

void NetworkFirewallClient::AssociateFirewallPolicyAsync(const AssociateFirewallPolicyRequest& request, const AssociateFirewallPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkFirewallClientAssociateFirewallPolicyAsyncHelper( this, request, handler, context ); } );
}

AssociateSubnetsOutcome NetworkFirewallClient::AssociateSubnets(const AssociateSubnetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateSubnetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateSubnetsOutcomeCallable NetworkFirewallClient::AssociateSubnetsCallable(const AssociateSubnetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateSubnetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateSubnets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClientAssociateSubnetsAsyncHelper(NetworkFirewallClient const * const clientThis, const AssociateSubnetsRequest& request, const AssociateSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateSubnets(request), context);
}

void NetworkFirewallClient::AssociateSubnetsAsync(const AssociateSubnetsRequest& request, const AssociateSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkFirewallClientAssociateSubnetsAsyncHelper( this, request, handler, context ); } );
}

CreateFirewallOutcome NetworkFirewallClient::CreateFirewall(const CreateFirewallRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateFirewallOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFirewallOutcomeCallable NetworkFirewallClient::CreateFirewallCallable(const CreateFirewallRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFirewallOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFirewall(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClientCreateFirewallAsyncHelper(NetworkFirewallClient const * const clientThis, const CreateFirewallRequest& request, const CreateFirewallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateFirewall(request), context);
}

void NetworkFirewallClient::CreateFirewallAsync(const CreateFirewallRequest& request, const CreateFirewallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkFirewallClientCreateFirewallAsyncHelper( this, request, handler, context ); } );
}

CreateFirewallPolicyOutcome NetworkFirewallClient::CreateFirewallPolicy(const CreateFirewallPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateFirewallPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFirewallPolicyOutcomeCallable NetworkFirewallClient::CreateFirewallPolicyCallable(const CreateFirewallPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFirewallPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFirewallPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClientCreateFirewallPolicyAsyncHelper(NetworkFirewallClient const * const clientThis, const CreateFirewallPolicyRequest& request, const CreateFirewallPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateFirewallPolicy(request), context);
}

void NetworkFirewallClient::CreateFirewallPolicyAsync(const CreateFirewallPolicyRequest& request, const CreateFirewallPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkFirewallClientCreateFirewallPolicyAsyncHelper( this, request, handler, context ); } );
}

CreateRuleGroupOutcome NetworkFirewallClient::CreateRuleGroup(const CreateRuleGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateRuleGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRuleGroupOutcomeCallable NetworkFirewallClient::CreateRuleGroupCallable(const CreateRuleGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRuleGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRuleGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClientCreateRuleGroupAsyncHelper(NetworkFirewallClient const * const clientThis, const CreateRuleGroupRequest& request, const CreateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateRuleGroup(request), context);
}

void NetworkFirewallClient::CreateRuleGroupAsync(const CreateRuleGroupRequest& request, const CreateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkFirewallClientCreateRuleGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteFirewallOutcome NetworkFirewallClient::DeleteFirewall(const DeleteFirewallRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteFirewallOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFirewallOutcomeCallable NetworkFirewallClient::DeleteFirewallCallable(const DeleteFirewallRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFirewallOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFirewall(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClientDeleteFirewallAsyncHelper(NetworkFirewallClient const * const clientThis, const DeleteFirewallRequest& request, const DeleteFirewallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteFirewall(request), context);
}

void NetworkFirewallClient::DeleteFirewallAsync(const DeleteFirewallRequest& request, const DeleteFirewallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkFirewallClientDeleteFirewallAsyncHelper( this, request, handler, context ); } );
}

DeleteFirewallPolicyOutcome NetworkFirewallClient::DeleteFirewallPolicy(const DeleteFirewallPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteFirewallPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFirewallPolicyOutcomeCallable NetworkFirewallClient::DeleteFirewallPolicyCallable(const DeleteFirewallPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFirewallPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFirewallPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClientDeleteFirewallPolicyAsyncHelper(NetworkFirewallClient const * const clientThis, const DeleteFirewallPolicyRequest& request, const DeleteFirewallPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteFirewallPolicy(request), context);
}

void NetworkFirewallClient::DeleteFirewallPolicyAsync(const DeleteFirewallPolicyRequest& request, const DeleteFirewallPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkFirewallClientDeleteFirewallPolicyAsyncHelper( this, request, handler, context ); } );
}

DeleteResourcePolicyOutcome NetworkFirewallClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourcePolicyOutcomeCallable NetworkFirewallClient::DeleteResourcePolicyCallable(const DeleteResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClientDeleteResourcePolicyAsyncHelper(NetworkFirewallClient const * const clientThis, const DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteResourcePolicy(request), context);
}

void NetworkFirewallClient::DeleteResourcePolicyAsync(const DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkFirewallClientDeleteResourcePolicyAsyncHelper( this, request, handler, context ); } );
}

DeleteRuleGroupOutcome NetworkFirewallClient::DeleteRuleGroup(const DeleteRuleGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteRuleGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRuleGroupOutcomeCallable NetworkFirewallClient::DeleteRuleGroupCallable(const DeleteRuleGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRuleGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRuleGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClientDeleteRuleGroupAsyncHelper(NetworkFirewallClient const * const clientThis, const DeleteRuleGroupRequest& request, const DeleteRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRuleGroup(request), context);
}

void NetworkFirewallClient::DeleteRuleGroupAsync(const DeleteRuleGroupRequest& request, const DeleteRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkFirewallClientDeleteRuleGroupAsyncHelper( this, request, handler, context ); } );
}

DescribeFirewallOutcome NetworkFirewallClient::DescribeFirewall(const DescribeFirewallRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeFirewallOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFirewallOutcomeCallable NetworkFirewallClient::DescribeFirewallCallable(const DescribeFirewallRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFirewallOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFirewall(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClientDescribeFirewallAsyncHelper(NetworkFirewallClient const * const clientThis, const DescribeFirewallRequest& request, const DescribeFirewallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeFirewall(request), context);
}

void NetworkFirewallClient::DescribeFirewallAsync(const DescribeFirewallRequest& request, const DescribeFirewallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkFirewallClientDescribeFirewallAsyncHelper( this, request, handler, context ); } );
}

DescribeFirewallPolicyOutcome NetworkFirewallClient::DescribeFirewallPolicy(const DescribeFirewallPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeFirewallPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeFirewallPolicyOutcomeCallable NetworkFirewallClient::DescribeFirewallPolicyCallable(const DescribeFirewallPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFirewallPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFirewallPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClientDescribeFirewallPolicyAsyncHelper(NetworkFirewallClient const * const clientThis, const DescribeFirewallPolicyRequest& request, const DescribeFirewallPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeFirewallPolicy(request), context);
}

void NetworkFirewallClient::DescribeFirewallPolicyAsync(const DescribeFirewallPolicyRequest& request, const DescribeFirewallPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkFirewallClientDescribeFirewallPolicyAsyncHelper( this, request, handler, context ); } );
}

DescribeLoggingConfigurationOutcome NetworkFirewallClient::DescribeLoggingConfiguration(const DescribeLoggingConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeLoggingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeLoggingConfigurationOutcomeCallable NetworkFirewallClient::DescribeLoggingConfigurationCallable(const DescribeLoggingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLoggingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLoggingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClientDescribeLoggingConfigurationAsyncHelper(NetworkFirewallClient const * const clientThis, const DescribeLoggingConfigurationRequest& request, const DescribeLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeLoggingConfiguration(request), context);
}

void NetworkFirewallClient::DescribeLoggingConfigurationAsync(const DescribeLoggingConfigurationRequest& request, const DescribeLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkFirewallClientDescribeLoggingConfigurationAsyncHelper( this, request, handler, context ); } );
}

DescribeResourcePolicyOutcome NetworkFirewallClient::DescribeResourcePolicy(const DescribeResourcePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeResourcePolicyOutcomeCallable NetworkFirewallClient::DescribeResourcePolicyCallable(const DescribeResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClientDescribeResourcePolicyAsyncHelper(NetworkFirewallClient const * const clientThis, const DescribeResourcePolicyRequest& request, const DescribeResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeResourcePolicy(request), context);
}

void NetworkFirewallClient::DescribeResourcePolicyAsync(const DescribeResourcePolicyRequest& request, const DescribeResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkFirewallClientDescribeResourcePolicyAsyncHelper( this, request, handler, context ); } );
}

DescribeRuleGroupOutcome NetworkFirewallClient::DescribeRuleGroup(const DescribeRuleGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeRuleGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRuleGroupOutcomeCallable NetworkFirewallClient::DescribeRuleGroupCallable(const DescribeRuleGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRuleGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRuleGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClientDescribeRuleGroupAsyncHelper(NetworkFirewallClient const * const clientThis, const DescribeRuleGroupRequest& request, const DescribeRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeRuleGroup(request), context);
}

void NetworkFirewallClient::DescribeRuleGroupAsync(const DescribeRuleGroupRequest& request, const DescribeRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkFirewallClientDescribeRuleGroupAsyncHelper( this, request, handler, context ); } );
}

DescribeRuleGroupMetadataOutcome NetworkFirewallClient::DescribeRuleGroupMetadata(const DescribeRuleGroupMetadataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeRuleGroupMetadataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRuleGroupMetadataOutcomeCallable NetworkFirewallClient::DescribeRuleGroupMetadataCallable(const DescribeRuleGroupMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRuleGroupMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRuleGroupMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClientDescribeRuleGroupMetadataAsyncHelper(NetworkFirewallClient const * const clientThis, const DescribeRuleGroupMetadataRequest& request, const DescribeRuleGroupMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeRuleGroupMetadata(request), context);
}

void NetworkFirewallClient::DescribeRuleGroupMetadataAsync(const DescribeRuleGroupMetadataRequest& request, const DescribeRuleGroupMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkFirewallClientDescribeRuleGroupMetadataAsyncHelper( this, request, handler, context ); } );
}

DisassociateSubnetsOutcome NetworkFirewallClient::DisassociateSubnets(const DisassociateSubnetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateSubnetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateSubnetsOutcomeCallable NetworkFirewallClient::DisassociateSubnetsCallable(const DisassociateSubnetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateSubnetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateSubnets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClientDisassociateSubnetsAsyncHelper(NetworkFirewallClient const * const clientThis, const DisassociateSubnetsRequest& request, const DisassociateSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateSubnets(request), context);
}

void NetworkFirewallClient::DisassociateSubnetsAsync(const DisassociateSubnetsRequest& request, const DisassociateSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkFirewallClientDisassociateSubnetsAsyncHelper( this, request, handler, context ); } );
}

ListFirewallPoliciesOutcome NetworkFirewallClient::ListFirewallPolicies(const ListFirewallPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListFirewallPoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFirewallPoliciesOutcomeCallable NetworkFirewallClient::ListFirewallPoliciesCallable(const ListFirewallPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFirewallPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFirewallPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClientListFirewallPoliciesAsyncHelper(NetworkFirewallClient const * const clientThis, const ListFirewallPoliciesRequest& request, const ListFirewallPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListFirewallPolicies(request), context);
}

void NetworkFirewallClient::ListFirewallPoliciesAsync(const ListFirewallPoliciesRequest& request, const ListFirewallPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkFirewallClientListFirewallPoliciesAsyncHelper( this, request, handler, context ); } );
}

ListFirewallsOutcome NetworkFirewallClient::ListFirewalls(const ListFirewallsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListFirewallsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFirewallsOutcomeCallable NetworkFirewallClient::ListFirewallsCallable(const ListFirewallsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFirewallsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFirewalls(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClientListFirewallsAsyncHelper(NetworkFirewallClient const * const clientThis, const ListFirewallsRequest& request, const ListFirewallsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListFirewalls(request), context);
}

void NetworkFirewallClient::ListFirewallsAsync(const ListFirewallsRequest& request, const ListFirewallsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkFirewallClientListFirewallsAsyncHelper( this, request, handler, context ); } );
}

ListRuleGroupsOutcome NetworkFirewallClient::ListRuleGroups(const ListRuleGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListRuleGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListRuleGroupsOutcomeCallable NetworkFirewallClient::ListRuleGroupsCallable(const ListRuleGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRuleGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRuleGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClientListRuleGroupsAsyncHelper(NetworkFirewallClient const * const clientThis, const ListRuleGroupsRequest& request, const ListRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListRuleGroups(request), context);
}

void NetworkFirewallClient::ListRuleGroupsAsync(const ListRuleGroupsRequest& request, const ListRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkFirewallClientListRuleGroupsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome NetworkFirewallClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable NetworkFirewallClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClientListTagsForResourceAsyncHelper(NetworkFirewallClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void NetworkFirewallClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkFirewallClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

PutResourcePolicyOutcome NetworkFirewallClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutResourcePolicyOutcomeCallable NetworkFirewallClient::PutResourcePolicyCallable(const PutResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClientPutResourcePolicyAsyncHelper(NetworkFirewallClient const * const clientThis, const PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutResourcePolicy(request), context);
}

void NetworkFirewallClient::PutResourcePolicyAsync(const PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkFirewallClientPutResourcePolicyAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome NetworkFirewallClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable NetworkFirewallClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClientTagResourceAsyncHelper(NetworkFirewallClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void NetworkFirewallClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkFirewallClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome NetworkFirewallClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable NetworkFirewallClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClientUntagResourceAsyncHelper(NetworkFirewallClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void NetworkFirewallClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkFirewallClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateFirewallDeleteProtectionOutcome NetworkFirewallClient::UpdateFirewallDeleteProtection(const UpdateFirewallDeleteProtectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateFirewallDeleteProtectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateFirewallDeleteProtectionOutcomeCallable NetworkFirewallClient::UpdateFirewallDeleteProtectionCallable(const UpdateFirewallDeleteProtectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFirewallDeleteProtectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFirewallDeleteProtection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClientUpdateFirewallDeleteProtectionAsyncHelper(NetworkFirewallClient const * const clientThis, const UpdateFirewallDeleteProtectionRequest& request, const UpdateFirewallDeleteProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateFirewallDeleteProtection(request), context);
}

void NetworkFirewallClient::UpdateFirewallDeleteProtectionAsync(const UpdateFirewallDeleteProtectionRequest& request, const UpdateFirewallDeleteProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkFirewallClientUpdateFirewallDeleteProtectionAsyncHelper( this, request, handler, context ); } );
}

UpdateFirewallDescriptionOutcome NetworkFirewallClient::UpdateFirewallDescription(const UpdateFirewallDescriptionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateFirewallDescriptionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateFirewallDescriptionOutcomeCallable NetworkFirewallClient::UpdateFirewallDescriptionCallable(const UpdateFirewallDescriptionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFirewallDescriptionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFirewallDescription(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClientUpdateFirewallDescriptionAsyncHelper(NetworkFirewallClient const * const clientThis, const UpdateFirewallDescriptionRequest& request, const UpdateFirewallDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateFirewallDescription(request), context);
}

void NetworkFirewallClient::UpdateFirewallDescriptionAsync(const UpdateFirewallDescriptionRequest& request, const UpdateFirewallDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkFirewallClientUpdateFirewallDescriptionAsyncHelper( this, request, handler, context ); } );
}

UpdateFirewallEncryptionConfigurationOutcome NetworkFirewallClient::UpdateFirewallEncryptionConfiguration(const UpdateFirewallEncryptionConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateFirewallEncryptionConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateFirewallEncryptionConfigurationOutcomeCallable NetworkFirewallClient::UpdateFirewallEncryptionConfigurationCallable(const UpdateFirewallEncryptionConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFirewallEncryptionConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFirewallEncryptionConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClientUpdateFirewallEncryptionConfigurationAsyncHelper(NetworkFirewallClient const * const clientThis, const UpdateFirewallEncryptionConfigurationRequest& request, const UpdateFirewallEncryptionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateFirewallEncryptionConfiguration(request), context);
}

void NetworkFirewallClient::UpdateFirewallEncryptionConfigurationAsync(const UpdateFirewallEncryptionConfigurationRequest& request, const UpdateFirewallEncryptionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkFirewallClientUpdateFirewallEncryptionConfigurationAsyncHelper( this, request, handler, context ); } );
}

UpdateFirewallPolicyOutcome NetworkFirewallClient::UpdateFirewallPolicy(const UpdateFirewallPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateFirewallPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateFirewallPolicyOutcomeCallable NetworkFirewallClient::UpdateFirewallPolicyCallable(const UpdateFirewallPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFirewallPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFirewallPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClientUpdateFirewallPolicyAsyncHelper(NetworkFirewallClient const * const clientThis, const UpdateFirewallPolicyRequest& request, const UpdateFirewallPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateFirewallPolicy(request), context);
}

void NetworkFirewallClient::UpdateFirewallPolicyAsync(const UpdateFirewallPolicyRequest& request, const UpdateFirewallPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkFirewallClientUpdateFirewallPolicyAsyncHelper( this, request, handler, context ); } );
}

UpdateFirewallPolicyChangeProtectionOutcome NetworkFirewallClient::UpdateFirewallPolicyChangeProtection(const UpdateFirewallPolicyChangeProtectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateFirewallPolicyChangeProtectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateFirewallPolicyChangeProtectionOutcomeCallable NetworkFirewallClient::UpdateFirewallPolicyChangeProtectionCallable(const UpdateFirewallPolicyChangeProtectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFirewallPolicyChangeProtectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFirewallPolicyChangeProtection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClientUpdateFirewallPolicyChangeProtectionAsyncHelper(NetworkFirewallClient const * const clientThis, const UpdateFirewallPolicyChangeProtectionRequest& request, const UpdateFirewallPolicyChangeProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateFirewallPolicyChangeProtection(request), context);
}

void NetworkFirewallClient::UpdateFirewallPolicyChangeProtectionAsync(const UpdateFirewallPolicyChangeProtectionRequest& request, const UpdateFirewallPolicyChangeProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkFirewallClientUpdateFirewallPolicyChangeProtectionAsyncHelper( this, request, handler, context ); } );
}

UpdateLoggingConfigurationOutcome NetworkFirewallClient::UpdateLoggingConfiguration(const UpdateLoggingConfigurationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateLoggingConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateLoggingConfigurationOutcomeCallable NetworkFirewallClient::UpdateLoggingConfigurationCallable(const UpdateLoggingConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLoggingConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLoggingConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClientUpdateLoggingConfigurationAsyncHelper(NetworkFirewallClient const * const clientThis, const UpdateLoggingConfigurationRequest& request, const UpdateLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateLoggingConfiguration(request), context);
}

void NetworkFirewallClient::UpdateLoggingConfigurationAsync(const UpdateLoggingConfigurationRequest& request, const UpdateLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkFirewallClientUpdateLoggingConfigurationAsyncHelper( this, request, handler, context ); } );
}

UpdateRuleGroupOutcome NetworkFirewallClient::UpdateRuleGroup(const UpdateRuleGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateRuleGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRuleGroupOutcomeCallable NetworkFirewallClient::UpdateRuleGroupCallable(const UpdateRuleGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRuleGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRuleGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClientUpdateRuleGroupAsyncHelper(NetworkFirewallClient const * const clientThis, const UpdateRuleGroupRequest& request, const UpdateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRuleGroup(request), context);
}

void NetworkFirewallClient::UpdateRuleGroupAsync(const UpdateRuleGroupRequest& request, const UpdateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkFirewallClientUpdateRuleGroupAsyncHelper( this, request, handler, context ); } );
}

UpdateSubnetChangeProtectionOutcome NetworkFirewallClient::UpdateSubnetChangeProtection(const UpdateSubnetChangeProtectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateSubnetChangeProtectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateSubnetChangeProtectionOutcomeCallable NetworkFirewallClient::UpdateSubnetChangeProtectionCallable(const UpdateSubnetChangeProtectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateSubnetChangeProtectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateSubnetChangeProtection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void NetworkFirewallClientUpdateSubnetChangeProtectionAsyncHelper(NetworkFirewallClient const * const clientThis, const UpdateSubnetChangeProtectionRequest& request, const UpdateSubnetChangeProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateSubnetChangeProtection(request), context);
}

void NetworkFirewallClient::UpdateSubnetChangeProtectionAsync(const UpdateSubnetChangeProtectionRequest& request, const UpdateSubnetChangeProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ NetworkFirewallClientUpdateSubnetChangeProtectionAsyncHelper( this, request, handler, context ); } );
}

