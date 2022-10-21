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

#include <aws/route53resolver/Route53ResolverClient.h>
#include <aws/route53resolver/Route53ResolverEndpoint.h>
#include <aws/route53resolver/Route53ResolverErrorMarshaller.h>
#include <aws/route53resolver/model/AssociateFirewallRuleGroupRequest.h>
#include <aws/route53resolver/model/AssociateResolverEndpointIpAddressRequest.h>
#include <aws/route53resolver/model/AssociateResolverQueryLogConfigRequest.h>
#include <aws/route53resolver/model/AssociateResolverRuleRequest.h>
#include <aws/route53resolver/model/CreateFirewallDomainListRequest.h>
#include <aws/route53resolver/model/CreateFirewallRuleRequest.h>
#include <aws/route53resolver/model/CreateFirewallRuleGroupRequest.h>
#include <aws/route53resolver/model/CreateResolverEndpointRequest.h>
#include <aws/route53resolver/model/CreateResolverQueryLogConfigRequest.h>
#include <aws/route53resolver/model/CreateResolverRuleRequest.h>
#include <aws/route53resolver/model/DeleteFirewallDomainListRequest.h>
#include <aws/route53resolver/model/DeleteFirewallRuleRequest.h>
#include <aws/route53resolver/model/DeleteFirewallRuleGroupRequest.h>
#include <aws/route53resolver/model/DeleteResolverEndpointRequest.h>
#include <aws/route53resolver/model/DeleteResolverQueryLogConfigRequest.h>
#include <aws/route53resolver/model/DeleteResolverRuleRequest.h>
#include <aws/route53resolver/model/DisassociateFirewallRuleGroupRequest.h>
#include <aws/route53resolver/model/DisassociateResolverEndpointIpAddressRequest.h>
#include <aws/route53resolver/model/DisassociateResolverQueryLogConfigRequest.h>
#include <aws/route53resolver/model/DisassociateResolverRuleRequest.h>
#include <aws/route53resolver/model/GetFirewallConfigRequest.h>
#include <aws/route53resolver/model/GetFirewallDomainListRequest.h>
#include <aws/route53resolver/model/GetFirewallRuleGroupRequest.h>
#include <aws/route53resolver/model/GetFirewallRuleGroupAssociationRequest.h>
#include <aws/route53resolver/model/GetFirewallRuleGroupPolicyRequest.h>
#include <aws/route53resolver/model/GetResolverConfigRequest.h>
#include <aws/route53resolver/model/GetResolverDnssecConfigRequest.h>
#include <aws/route53resolver/model/GetResolverEndpointRequest.h>
#include <aws/route53resolver/model/GetResolverQueryLogConfigRequest.h>
#include <aws/route53resolver/model/GetResolverQueryLogConfigAssociationRequest.h>
#include <aws/route53resolver/model/GetResolverQueryLogConfigPolicyRequest.h>
#include <aws/route53resolver/model/GetResolverRuleRequest.h>
#include <aws/route53resolver/model/GetResolverRuleAssociationRequest.h>
#include <aws/route53resolver/model/GetResolverRulePolicyRequest.h>
#include <aws/route53resolver/model/ImportFirewallDomainsRequest.h>
#include <aws/route53resolver/model/ListFirewallConfigsRequest.h>
#include <aws/route53resolver/model/ListFirewallDomainListsRequest.h>
#include <aws/route53resolver/model/ListFirewallDomainsRequest.h>
#include <aws/route53resolver/model/ListFirewallRuleGroupAssociationsRequest.h>
#include <aws/route53resolver/model/ListFirewallRuleGroupsRequest.h>
#include <aws/route53resolver/model/ListFirewallRulesRequest.h>
#include <aws/route53resolver/model/ListResolverConfigsRequest.h>
#include <aws/route53resolver/model/ListResolverDnssecConfigsRequest.h>
#include <aws/route53resolver/model/ListResolverEndpointIpAddressesRequest.h>
#include <aws/route53resolver/model/ListResolverEndpointsRequest.h>
#include <aws/route53resolver/model/ListResolverQueryLogConfigAssociationsRequest.h>
#include <aws/route53resolver/model/ListResolverQueryLogConfigsRequest.h>
#include <aws/route53resolver/model/ListResolverRuleAssociationsRequest.h>
#include <aws/route53resolver/model/ListResolverRulesRequest.h>
#include <aws/route53resolver/model/ListTagsForResourceRequest.h>
#include <aws/route53resolver/model/PutFirewallRuleGroupPolicyRequest.h>
#include <aws/route53resolver/model/PutResolverQueryLogConfigPolicyRequest.h>
#include <aws/route53resolver/model/PutResolverRulePolicyRequest.h>
#include <aws/route53resolver/model/TagResourceRequest.h>
#include <aws/route53resolver/model/UntagResourceRequest.h>
#include <aws/route53resolver/model/UpdateFirewallConfigRequest.h>
#include <aws/route53resolver/model/UpdateFirewallDomainsRequest.h>
#include <aws/route53resolver/model/UpdateFirewallRuleRequest.h>
#include <aws/route53resolver/model/UpdateFirewallRuleGroupAssociationRequest.h>
#include <aws/route53resolver/model/UpdateResolverConfigRequest.h>
#include <aws/route53resolver/model/UpdateResolverDnssecConfigRequest.h>
#include <aws/route53resolver/model/UpdateResolverEndpointRequest.h>
#include <aws/route53resolver/model/UpdateResolverRuleRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Route53Resolver;
using namespace Aws::Route53Resolver::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

const char* Route53ResolverClient::SERVICE_NAME = "route53resolver";
const char* Route53ResolverClient::ALLOCATION_TAG = "Route53ResolverClient";

Route53ResolverClient::Route53ResolverClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53ResolverErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

Route53ResolverClient::Route53ResolverClient(const AWSCredentials& credentials,
                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53ResolverErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

Route53ResolverClient::Route53ResolverClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<Route53ResolverErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

Route53ResolverClient::~Route53ResolverClient()
{
}

void Route53ResolverClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Route53Resolver");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + Route53ResolverEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void Route53ResolverClient::OverrideEndpoint(const Aws::String& endpoint)
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

AssociateFirewallRuleGroupOutcome Route53ResolverClient::AssociateFirewallRuleGroup(const AssociateFirewallRuleGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateFirewallRuleGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateFirewallRuleGroupOutcomeCallable Route53ResolverClient::AssociateFirewallRuleGroupCallable(const AssociateFirewallRuleGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateFirewallRuleGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateFirewallRuleGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::AssociateFirewallRuleGroupAsync(const AssociateFirewallRuleGroupRequest& request, const AssociateFirewallRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateFirewallRuleGroup(request), context);
    } );
}

AssociateResolverEndpointIpAddressOutcome Route53ResolverClient::AssociateResolverEndpointIpAddress(const AssociateResolverEndpointIpAddressRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateResolverEndpointIpAddressOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateResolverEndpointIpAddressOutcomeCallable Route53ResolverClient::AssociateResolverEndpointIpAddressCallable(const AssociateResolverEndpointIpAddressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateResolverEndpointIpAddressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateResolverEndpointIpAddress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::AssociateResolverEndpointIpAddressAsync(const AssociateResolverEndpointIpAddressRequest& request, const AssociateResolverEndpointIpAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateResolverEndpointIpAddress(request), context);
    } );
}

AssociateResolverQueryLogConfigOutcome Route53ResolverClient::AssociateResolverQueryLogConfig(const AssociateResolverQueryLogConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateResolverQueryLogConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateResolverQueryLogConfigOutcomeCallable Route53ResolverClient::AssociateResolverQueryLogConfigCallable(const AssociateResolverQueryLogConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateResolverQueryLogConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateResolverQueryLogConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::AssociateResolverQueryLogConfigAsync(const AssociateResolverQueryLogConfigRequest& request, const AssociateResolverQueryLogConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateResolverQueryLogConfig(request), context);
    } );
}

AssociateResolverRuleOutcome Route53ResolverClient::AssociateResolverRule(const AssociateResolverRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AssociateResolverRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateResolverRuleOutcomeCallable Route53ResolverClient::AssociateResolverRuleCallable(const AssociateResolverRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateResolverRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateResolverRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::AssociateResolverRuleAsync(const AssociateResolverRuleRequest& request, const AssociateResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateResolverRule(request), context);
    } );
}

CreateFirewallDomainListOutcome Route53ResolverClient::CreateFirewallDomainList(const CreateFirewallDomainListRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateFirewallDomainListOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFirewallDomainListOutcomeCallable Route53ResolverClient::CreateFirewallDomainListCallable(const CreateFirewallDomainListRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFirewallDomainListOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFirewallDomainList(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::CreateFirewallDomainListAsync(const CreateFirewallDomainListRequest& request, const CreateFirewallDomainListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateFirewallDomainList(request), context);
    } );
}

CreateFirewallRuleOutcome Route53ResolverClient::CreateFirewallRule(const CreateFirewallRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateFirewallRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFirewallRuleOutcomeCallable Route53ResolverClient::CreateFirewallRuleCallable(const CreateFirewallRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFirewallRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFirewallRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::CreateFirewallRuleAsync(const CreateFirewallRuleRequest& request, const CreateFirewallRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateFirewallRule(request), context);
    } );
}

CreateFirewallRuleGroupOutcome Route53ResolverClient::CreateFirewallRuleGroup(const CreateFirewallRuleGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateFirewallRuleGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFirewallRuleGroupOutcomeCallable Route53ResolverClient::CreateFirewallRuleGroupCallable(const CreateFirewallRuleGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFirewallRuleGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFirewallRuleGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::CreateFirewallRuleGroupAsync(const CreateFirewallRuleGroupRequest& request, const CreateFirewallRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateFirewallRuleGroup(request), context);
    } );
}

CreateResolverEndpointOutcome Route53ResolverClient::CreateResolverEndpoint(const CreateResolverEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateResolverEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateResolverEndpointOutcomeCallable Route53ResolverClient::CreateResolverEndpointCallable(const CreateResolverEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateResolverEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateResolverEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::CreateResolverEndpointAsync(const CreateResolverEndpointRequest& request, const CreateResolverEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateResolverEndpoint(request), context);
    } );
}

CreateResolverQueryLogConfigOutcome Route53ResolverClient::CreateResolverQueryLogConfig(const CreateResolverQueryLogConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateResolverQueryLogConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateResolverQueryLogConfigOutcomeCallable Route53ResolverClient::CreateResolverQueryLogConfigCallable(const CreateResolverQueryLogConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateResolverQueryLogConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateResolverQueryLogConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::CreateResolverQueryLogConfigAsync(const CreateResolverQueryLogConfigRequest& request, const CreateResolverQueryLogConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateResolverQueryLogConfig(request), context);
    } );
}

CreateResolverRuleOutcome Route53ResolverClient::CreateResolverRule(const CreateResolverRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateResolverRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateResolverRuleOutcomeCallable Route53ResolverClient::CreateResolverRuleCallable(const CreateResolverRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateResolverRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateResolverRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::CreateResolverRuleAsync(const CreateResolverRuleRequest& request, const CreateResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateResolverRule(request), context);
    } );
}

DeleteFirewallDomainListOutcome Route53ResolverClient::DeleteFirewallDomainList(const DeleteFirewallDomainListRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteFirewallDomainListOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFirewallDomainListOutcomeCallable Route53ResolverClient::DeleteFirewallDomainListCallable(const DeleteFirewallDomainListRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFirewallDomainListOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFirewallDomainList(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::DeleteFirewallDomainListAsync(const DeleteFirewallDomainListRequest& request, const DeleteFirewallDomainListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteFirewallDomainList(request), context);
    } );
}

DeleteFirewallRuleOutcome Route53ResolverClient::DeleteFirewallRule(const DeleteFirewallRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteFirewallRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFirewallRuleOutcomeCallable Route53ResolverClient::DeleteFirewallRuleCallable(const DeleteFirewallRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFirewallRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFirewallRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::DeleteFirewallRuleAsync(const DeleteFirewallRuleRequest& request, const DeleteFirewallRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteFirewallRule(request), context);
    } );
}

DeleteFirewallRuleGroupOutcome Route53ResolverClient::DeleteFirewallRuleGroup(const DeleteFirewallRuleGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteFirewallRuleGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteFirewallRuleGroupOutcomeCallable Route53ResolverClient::DeleteFirewallRuleGroupCallable(const DeleteFirewallRuleGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFirewallRuleGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFirewallRuleGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::DeleteFirewallRuleGroupAsync(const DeleteFirewallRuleGroupRequest& request, const DeleteFirewallRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteFirewallRuleGroup(request), context);
    } );
}

DeleteResolverEndpointOutcome Route53ResolverClient::DeleteResolverEndpoint(const DeleteResolverEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteResolverEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteResolverEndpointOutcomeCallable Route53ResolverClient::DeleteResolverEndpointCallable(const DeleteResolverEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResolverEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResolverEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::DeleteResolverEndpointAsync(const DeleteResolverEndpointRequest& request, const DeleteResolverEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteResolverEndpoint(request), context);
    } );
}

DeleteResolverQueryLogConfigOutcome Route53ResolverClient::DeleteResolverQueryLogConfig(const DeleteResolverQueryLogConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteResolverQueryLogConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteResolverQueryLogConfigOutcomeCallable Route53ResolverClient::DeleteResolverQueryLogConfigCallable(const DeleteResolverQueryLogConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResolverQueryLogConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResolverQueryLogConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::DeleteResolverQueryLogConfigAsync(const DeleteResolverQueryLogConfigRequest& request, const DeleteResolverQueryLogConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteResolverQueryLogConfig(request), context);
    } );
}

DeleteResolverRuleOutcome Route53ResolverClient::DeleteResolverRule(const DeleteResolverRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteResolverRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteResolverRuleOutcomeCallable Route53ResolverClient::DeleteResolverRuleCallable(const DeleteResolverRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResolverRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResolverRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::DeleteResolverRuleAsync(const DeleteResolverRuleRequest& request, const DeleteResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteResolverRule(request), context);
    } );
}

DisassociateFirewallRuleGroupOutcome Route53ResolverClient::DisassociateFirewallRuleGroup(const DisassociateFirewallRuleGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateFirewallRuleGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateFirewallRuleGroupOutcomeCallable Route53ResolverClient::DisassociateFirewallRuleGroupCallable(const DisassociateFirewallRuleGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateFirewallRuleGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateFirewallRuleGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::DisassociateFirewallRuleGroupAsync(const DisassociateFirewallRuleGroupRequest& request, const DisassociateFirewallRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateFirewallRuleGroup(request), context);
    } );
}

DisassociateResolverEndpointIpAddressOutcome Route53ResolverClient::DisassociateResolverEndpointIpAddress(const DisassociateResolverEndpointIpAddressRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateResolverEndpointIpAddressOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateResolverEndpointIpAddressOutcomeCallable Route53ResolverClient::DisassociateResolverEndpointIpAddressCallable(const DisassociateResolverEndpointIpAddressRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateResolverEndpointIpAddressOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateResolverEndpointIpAddress(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::DisassociateResolverEndpointIpAddressAsync(const DisassociateResolverEndpointIpAddressRequest& request, const DisassociateResolverEndpointIpAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateResolverEndpointIpAddress(request), context);
    } );
}

DisassociateResolverQueryLogConfigOutcome Route53ResolverClient::DisassociateResolverQueryLogConfig(const DisassociateResolverQueryLogConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateResolverQueryLogConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateResolverQueryLogConfigOutcomeCallable Route53ResolverClient::DisassociateResolverQueryLogConfigCallable(const DisassociateResolverQueryLogConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateResolverQueryLogConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateResolverQueryLogConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::DisassociateResolverQueryLogConfigAsync(const DisassociateResolverQueryLogConfigRequest& request, const DisassociateResolverQueryLogConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateResolverQueryLogConfig(request), context);
    } );
}

DisassociateResolverRuleOutcome Route53ResolverClient::DisassociateResolverRule(const DisassociateResolverRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DisassociateResolverRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateResolverRuleOutcomeCallable Route53ResolverClient::DisassociateResolverRuleCallable(const DisassociateResolverRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateResolverRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateResolverRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::DisassociateResolverRuleAsync(const DisassociateResolverRuleRequest& request, const DisassociateResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateResolverRule(request), context);
    } );
}

GetFirewallConfigOutcome Route53ResolverClient::GetFirewallConfig(const GetFirewallConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetFirewallConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetFirewallConfigOutcomeCallable Route53ResolverClient::GetFirewallConfigCallable(const GetFirewallConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFirewallConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFirewallConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::GetFirewallConfigAsync(const GetFirewallConfigRequest& request, const GetFirewallConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetFirewallConfig(request), context);
    } );
}

GetFirewallDomainListOutcome Route53ResolverClient::GetFirewallDomainList(const GetFirewallDomainListRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetFirewallDomainListOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetFirewallDomainListOutcomeCallable Route53ResolverClient::GetFirewallDomainListCallable(const GetFirewallDomainListRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFirewallDomainListOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFirewallDomainList(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::GetFirewallDomainListAsync(const GetFirewallDomainListRequest& request, const GetFirewallDomainListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetFirewallDomainList(request), context);
    } );
}

GetFirewallRuleGroupOutcome Route53ResolverClient::GetFirewallRuleGroup(const GetFirewallRuleGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetFirewallRuleGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetFirewallRuleGroupOutcomeCallable Route53ResolverClient::GetFirewallRuleGroupCallable(const GetFirewallRuleGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFirewallRuleGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFirewallRuleGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::GetFirewallRuleGroupAsync(const GetFirewallRuleGroupRequest& request, const GetFirewallRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetFirewallRuleGroup(request), context);
    } );
}

GetFirewallRuleGroupAssociationOutcome Route53ResolverClient::GetFirewallRuleGroupAssociation(const GetFirewallRuleGroupAssociationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetFirewallRuleGroupAssociationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetFirewallRuleGroupAssociationOutcomeCallable Route53ResolverClient::GetFirewallRuleGroupAssociationCallable(const GetFirewallRuleGroupAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFirewallRuleGroupAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFirewallRuleGroupAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::GetFirewallRuleGroupAssociationAsync(const GetFirewallRuleGroupAssociationRequest& request, const GetFirewallRuleGroupAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetFirewallRuleGroupAssociation(request), context);
    } );
}

GetFirewallRuleGroupPolicyOutcome Route53ResolverClient::GetFirewallRuleGroupPolicy(const GetFirewallRuleGroupPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetFirewallRuleGroupPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetFirewallRuleGroupPolicyOutcomeCallable Route53ResolverClient::GetFirewallRuleGroupPolicyCallable(const GetFirewallRuleGroupPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFirewallRuleGroupPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFirewallRuleGroupPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::GetFirewallRuleGroupPolicyAsync(const GetFirewallRuleGroupPolicyRequest& request, const GetFirewallRuleGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetFirewallRuleGroupPolicy(request), context);
    } );
}

GetResolverConfigOutcome Route53ResolverClient::GetResolverConfig(const GetResolverConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetResolverConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetResolverConfigOutcomeCallable Route53ResolverClient::GetResolverConfigCallable(const GetResolverConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResolverConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResolverConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::GetResolverConfigAsync(const GetResolverConfigRequest& request, const GetResolverConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetResolverConfig(request), context);
    } );
}

GetResolverDnssecConfigOutcome Route53ResolverClient::GetResolverDnssecConfig(const GetResolverDnssecConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetResolverDnssecConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetResolverDnssecConfigOutcomeCallable Route53ResolverClient::GetResolverDnssecConfigCallable(const GetResolverDnssecConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResolverDnssecConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResolverDnssecConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::GetResolverDnssecConfigAsync(const GetResolverDnssecConfigRequest& request, const GetResolverDnssecConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetResolverDnssecConfig(request), context);
    } );
}

GetResolverEndpointOutcome Route53ResolverClient::GetResolverEndpoint(const GetResolverEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetResolverEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetResolverEndpointOutcomeCallable Route53ResolverClient::GetResolverEndpointCallable(const GetResolverEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResolverEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResolverEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::GetResolverEndpointAsync(const GetResolverEndpointRequest& request, const GetResolverEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetResolverEndpoint(request), context);
    } );
}

GetResolverQueryLogConfigOutcome Route53ResolverClient::GetResolverQueryLogConfig(const GetResolverQueryLogConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetResolverQueryLogConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetResolverQueryLogConfigOutcomeCallable Route53ResolverClient::GetResolverQueryLogConfigCallable(const GetResolverQueryLogConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResolverQueryLogConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResolverQueryLogConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::GetResolverQueryLogConfigAsync(const GetResolverQueryLogConfigRequest& request, const GetResolverQueryLogConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetResolverQueryLogConfig(request), context);
    } );
}

GetResolverQueryLogConfigAssociationOutcome Route53ResolverClient::GetResolverQueryLogConfigAssociation(const GetResolverQueryLogConfigAssociationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetResolverQueryLogConfigAssociationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetResolverQueryLogConfigAssociationOutcomeCallable Route53ResolverClient::GetResolverQueryLogConfigAssociationCallable(const GetResolverQueryLogConfigAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResolverQueryLogConfigAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResolverQueryLogConfigAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::GetResolverQueryLogConfigAssociationAsync(const GetResolverQueryLogConfigAssociationRequest& request, const GetResolverQueryLogConfigAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetResolverQueryLogConfigAssociation(request), context);
    } );
}

GetResolverQueryLogConfigPolicyOutcome Route53ResolverClient::GetResolverQueryLogConfigPolicy(const GetResolverQueryLogConfigPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetResolverQueryLogConfigPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetResolverQueryLogConfigPolicyOutcomeCallable Route53ResolverClient::GetResolverQueryLogConfigPolicyCallable(const GetResolverQueryLogConfigPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResolverQueryLogConfigPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResolverQueryLogConfigPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::GetResolverQueryLogConfigPolicyAsync(const GetResolverQueryLogConfigPolicyRequest& request, const GetResolverQueryLogConfigPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetResolverQueryLogConfigPolicy(request), context);
    } );
}

GetResolverRuleOutcome Route53ResolverClient::GetResolverRule(const GetResolverRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetResolverRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetResolverRuleOutcomeCallable Route53ResolverClient::GetResolverRuleCallable(const GetResolverRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResolverRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResolverRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::GetResolverRuleAsync(const GetResolverRuleRequest& request, const GetResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetResolverRule(request), context);
    } );
}

GetResolverRuleAssociationOutcome Route53ResolverClient::GetResolverRuleAssociation(const GetResolverRuleAssociationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetResolverRuleAssociationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetResolverRuleAssociationOutcomeCallable Route53ResolverClient::GetResolverRuleAssociationCallable(const GetResolverRuleAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResolverRuleAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResolverRuleAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::GetResolverRuleAssociationAsync(const GetResolverRuleAssociationRequest& request, const GetResolverRuleAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetResolverRuleAssociation(request), context);
    } );
}

GetResolverRulePolicyOutcome Route53ResolverClient::GetResolverRulePolicy(const GetResolverRulePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetResolverRulePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetResolverRulePolicyOutcomeCallable Route53ResolverClient::GetResolverRulePolicyCallable(const GetResolverRulePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResolverRulePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResolverRulePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::GetResolverRulePolicyAsync(const GetResolverRulePolicyRequest& request, const GetResolverRulePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetResolverRulePolicy(request), context);
    } );
}

ImportFirewallDomainsOutcome Route53ResolverClient::ImportFirewallDomains(const ImportFirewallDomainsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ImportFirewallDomainsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportFirewallDomainsOutcomeCallable Route53ResolverClient::ImportFirewallDomainsCallable(const ImportFirewallDomainsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportFirewallDomainsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportFirewallDomains(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::ImportFirewallDomainsAsync(const ImportFirewallDomainsRequest& request, const ImportFirewallDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ImportFirewallDomains(request), context);
    } );
}

ListFirewallConfigsOutcome Route53ResolverClient::ListFirewallConfigs(const ListFirewallConfigsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListFirewallConfigsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFirewallConfigsOutcomeCallable Route53ResolverClient::ListFirewallConfigsCallable(const ListFirewallConfigsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFirewallConfigsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFirewallConfigs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::ListFirewallConfigsAsync(const ListFirewallConfigsRequest& request, const ListFirewallConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListFirewallConfigs(request), context);
    } );
}

ListFirewallDomainListsOutcome Route53ResolverClient::ListFirewallDomainLists(const ListFirewallDomainListsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListFirewallDomainListsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFirewallDomainListsOutcomeCallable Route53ResolverClient::ListFirewallDomainListsCallable(const ListFirewallDomainListsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFirewallDomainListsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFirewallDomainLists(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::ListFirewallDomainListsAsync(const ListFirewallDomainListsRequest& request, const ListFirewallDomainListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListFirewallDomainLists(request), context);
    } );
}

ListFirewallDomainsOutcome Route53ResolverClient::ListFirewallDomains(const ListFirewallDomainsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListFirewallDomainsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFirewallDomainsOutcomeCallable Route53ResolverClient::ListFirewallDomainsCallable(const ListFirewallDomainsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFirewallDomainsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFirewallDomains(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::ListFirewallDomainsAsync(const ListFirewallDomainsRequest& request, const ListFirewallDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListFirewallDomains(request), context);
    } );
}

ListFirewallRuleGroupAssociationsOutcome Route53ResolverClient::ListFirewallRuleGroupAssociations(const ListFirewallRuleGroupAssociationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListFirewallRuleGroupAssociationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFirewallRuleGroupAssociationsOutcomeCallable Route53ResolverClient::ListFirewallRuleGroupAssociationsCallable(const ListFirewallRuleGroupAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFirewallRuleGroupAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFirewallRuleGroupAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::ListFirewallRuleGroupAssociationsAsync(const ListFirewallRuleGroupAssociationsRequest& request, const ListFirewallRuleGroupAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListFirewallRuleGroupAssociations(request), context);
    } );
}

ListFirewallRuleGroupsOutcome Route53ResolverClient::ListFirewallRuleGroups(const ListFirewallRuleGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListFirewallRuleGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFirewallRuleGroupsOutcomeCallable Route53ResolverClient::ListFirewallRuleGroupsCallable(const ListFirewallRuleGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFirewallRuleGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFirewallRuleGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::ListFirewallRuleGroupsAsync(const ListFirewallRuleGroupsRequest& request, const ListFirewallRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListFirewallRuleGroups(request), context);
    } );
}

ListFirewallRulesOutcome Route53ResolverClient::ListFirewallRules(const ListFirewallRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListFirewallRulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListFirewallRulesOutcomeCallable Route53ResolverClient::ListFirewallRulesCallable(const ListFirewallRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFirewallRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFirewallRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::ListFirewallRulesAsync(const ListFirewallRulesRequest& request, const ListFirewallRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListFirewallRules(request), context);
    } );
}

ListResolverConfigsOutcome Route53ResolverClient::ListResolverConfigs(const ListResolverConfigsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListResolverConfigsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResolverConfigsOutcomeCallable Route53ResolverClient::ListResolverConfigsCallable(const ListResolverConfigsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResolverConfigsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResolverConfigs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::ListResolverConfigsAsync(const ListResolverConfigsRequest& request, const ListResolverConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListResolverConfigs(request), context);
    } );
}

ListResolverDnssecConfigsOutcome Route53ResolverClient::ListResolverDnssecConfigs(const ListResolverDnssecConfigsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListResolverDnssecConfigsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResolverDnssecConfigsOutcomeCallable Route53ResolverClient::ListResolverDnssecConfigsCallable(const ListResolverDnssecConfigsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResolverDnssecConfigsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResolverDnssecConfigs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::ListResolverDnssecConfigsAsync(const ListResolverDnssecConfigsRequest& request, const ListResolverDnssecConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListResolverDnssecConfigs(request), context);
    } );
}

ListResolverEndpointIpAddressesOutcome Route53ResolverClient::ListResolverEndpointIpAddresses(const ListResolverEndpointIpAddressesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListResolverEndpointIpAddressesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResolverEndpointIpAddressesOutcomeCallable Route53ResolverClient::ListResolverEndpointIpAddressesCallable(const ListResolverEndpointIpAddressesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResolverEndpointIpAddressesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResolverEndpointIpAddresses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::ListResolverEndpointIpAddressesAsync(const ListResolverEndpointIpAddressesRequest& request, const ListResolverEndpointIpAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListResolverEndpointIpAddresses(request), context);
    } );
}

ListResolverEndpointsOutcome Route53ResolverClient::ListResolverEndpoints(const ListResolverEndpointsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListResolverEndpointsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResolverEndpointsOutcomeCallable Route53ResolverClient::ListResolverEndpointsCallable(const ListResolverEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResolverEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResolverEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::ListResolverEndpointsAsync(const ListResolverEndpointsRequest& request, const ListResolverEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListResolverEndpoints(request), context);
    } );
}

ListResolverQueryLogConfigAssociationsOutcome Route53ResolverClient::ListResolverQueryLogConfigAssociations(const ListResolverQueryLogConfigAssociationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListResolverQueryLogConfigAssociationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResolverQueryLogConfigAssociationsOutcomeCallable Route53ResolverClient::ListResolverQueryLogConfigAssociationsCallable(const ListResolverQueryLogConfigAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResolverQueryLogConfigAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResolverQueryLogConfigAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::ListResolverQueryLogConfigAssociationsAsync(const ListResolverQueryLogConfigAssociationsRequest& request, const ListResolverQueryLogConfigAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListResolverQueryLogConfigAssociations(request), context);
    } );
}

ListResolverQueryLogConfigsOutcome Route53ResolverClient::ListResolverQueryLogConfigs(const ListResolverQueryLogConfigsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListResolverQueryLogConfigsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResolverQueryLogConfigsOutcomeCallable Route53ResolverClient::ListResolverQueryLogConfigsCallable(const ListResolverQueryLogConfigsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResolverQueryLogConfigsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResolverQueryLogConfigs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::ListResolverQueryLogConfigsAsync(const ListResolverQueryLogConfigsRequest& request, const ListResolverQueryLogConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListResolverQueryLogConfigs(request), context);
    } );
}

ListResolverRuleAssociationsOutcome Route53ResolverClient::ListResolverRuleAssociations(const ListResolverRuleAssociationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListResolverRuleAssociationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResolverRuleAssociationsOutcomeCallable Route53ResolverClient::ListResolverRuleAssociationsCallable(const ListResolverRuleAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResolverRuleAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResolverRuleAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::ListResolverRuleAssociationsAsync(const ListResolverRuleAssociationsRequest& request, const ListResolverRuleAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListResolverRuleAssociations(request), context);
    } );
}

ListResolverRulesOutcome Route53ResolverClient::ListResolverRules(const ListResolverRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListResolverRulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResolverRulesOutcomeCallable Route53ResolverClient::ListResolverRulesCallable(const ListResolverRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResolverRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResolverRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::ListResolverRulesAsync(const ListResolverRulesRequest& request, const ListResolverRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListResolverRules(request), context);
    } );
}

ListTagsForResourceOutcome Route53ResolverClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable Route53ResolverClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

PutFirewallRuleGroupPolicyOutcome Route53ResolverClient::PutFirewallRuleGroupPolicy(const PutFirewallRuleGroupPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutFirewallRuleGroupPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutFirewallRuleGroupPolicyOutcomeCallable Route53ResolverClient::PutFirewallRuleGroupPolicyCallable(const PutFirewallRuleGroupPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutFirewallRuleGroupPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutFirewallRuleGroupPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::PutFirewallRuleGroupPolicyAsync(const PutFirewallRuleGroupPolicyRequest& request, const PutFirewallRuleGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutFirewallRuleGroupPolicy(request), context);
    } );
}

PutResolverQueryLogConfigPolicyOutcome Route53ResolverClient::PutResolverQueryLogConfigPolicy(const PutResolverQueryLogConfigPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutResolverQueryLogConfigPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutResolverQueryLogConfigPolicyOutcomeCallable Route53ResolverClient::PutResolverQueryLogConfigPolicyCallable(const PutResolverQueryLogConfigPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutResolverQueryLogConfigPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutResolverQueryLogConfigPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::PutResolverQueryLogConfigPolicyAsync(const PutResolverQueryLogConfigPolicyRequest& request, const PutResolverQueryLogConfigPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutResolverQueryLogConfigPolicy(request), context);
    } );
}

PutResolverRulePolicyOutcome Route53ResolverClient::PutResolverRulePolicy(const PutResolverRulePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutResolverRulePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutResolverRulePolicyOutcomeCallable Route53ResolverClient::PutResolverRulePolicyCallable(const PutResolverRulePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutResolverRulePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutResolverRulePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::PutResolverRulePolicyAsync(const PutResolverRulePolicyRequest& request, const PutResolverRulePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutResolverRulePolicy(request), context);
    } );
}

TagResourceOutcome Route53ResolverClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable Route53ResolverClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome Route53ResolverClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable Route53ResolverClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateFirewallConfigOutcome Route53ResolverClient::UpdateFirewallConfig(const UpdateFirewallConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateFirewallConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateFirewallConfigOutcomeCallable Route53ResolverClient::UpdateFirewallConfigCallable(const UpdateFirewallConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFirewallConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFirewallConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::UpdateFirewallConfigAsync(const UpdateFirewallConfigRequest& request, const UpdateFirewallConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateFirewallConfig(request), context);
    } );
}

UpdateFirewallDomainsOutcome Route53ResolverClient::UpdateFirewallDomains(const UpdateFirewallDomainsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateFirewallDomainsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateFirewallDomainsOutcomeCallable Route53ResolverClient::UpdateFirewallDomainsCallable(const UpdateFirewallDomainsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFirewallDomainsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFirewallDomains(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::UpdateFirewallDomainsAsync(const UpdateFirewallDomainsRequest& request, const UpdateFirewallDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateFirewallDomains(request), context);
    } );
}

UpdateFirewallRuleOutcome Route53ResolverClient::UpdateFirewallRule(const UpdateFirewallRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateFirewallRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateFirewallRuleOutcomeCallable Route53ResolverClient::UpdateFirewallRuleCallable(const UpdateFirewallRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFirewallRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFirewallRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::UpdateFirewallRuleAsync(const UpdateFirewallRuleRequest& request, const UpdateFirewallRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateFirewallRule(request), context);
    } );
}

UpdateFirewallRuleGroupAssociationOutcome Route53ResolverClient::UpdateFirewallRuleGroupAssociation(const UpdateFirewallRuleGroupAssociationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateFirewallRuleGroupAssociationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateFirewallRuleGroupAssociationOutcomeCallable Route53ResolverClient::UpdateFirewallRuleGroupAssociationCallable(const UpdateFirewallRuleGroupAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFirewallRuleGroupAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFirewallRuleGroupAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::UpdateFirewallRuleGroupAssociationAsync(const UpdateFirewallRuleGroupAssociationRequest& request, const UpdateFirewallRuleGroupAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateFirewallRuleGroupAssociation(request), context);
    } );
}

UpdateResolverConfigOutcome Route53ResolverClient::UpdateResolverConfig(const UpdateResolverConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateResolverConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateResolverConfigOutcomeCallable Route53ResolverClient::UpdateResolverConfigCallable(const UpdateResolverConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateResolverConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateResolverConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::UpdateResolverConfigAsync(const UpdateResolverConfigRequest& request, const UpdateResolverConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateResolverConfig(request), context);
    } );
}

UpdateResolverDnssecConfigOutcome Route53ResolverClient::UpdateResolverDnssecConfig(const UpdateResolverDnssecConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateResolverDnssecConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateResolverDnssecConfigOutcomeCallable Route53ResolverClient::UpdateResolverDnssecConfigCallable(const UpdateResolverDnssecConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateResolverDnssecConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateResolverDnssecConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::UpdateResolverDnssecConfigAsync(const UpdateResolverDnssecConfigRequest& request, const UpdateResolverDnssecConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateResolverDnssecConfig(request), context);
    } );
}

UpdateResolverEndpointOutcome Route53ResolverClient::UpdateResolverEndpoint(const UpdateResolverEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateResolverEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateResolverEndpointOutcomeCallable Route53ResolverClient::UpdateResolverEndpointCallable(const UpdateResolverEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateResolverEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateResolverEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::UpdateResolverEndpointAsync(const UpdateResolverEndpointRequest& request, const UpdateResolverEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateResolverEndpoint(request), context);
    } );
}

UpdateResolverRuleOutcome Route53ResolverClient::UpdateResolverRule(const UpdateResolverRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateResolverRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateResolverRuleOutcomeCallable Route53ResolverClient::UpdateResolverRuleCallable(const UpdateResolverRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateResolverRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateResolverRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53ResolverClient::UpdateResolverRuleAsync(const UpdateResolverRuleRequest& request, const UpdateResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateResolverRule(request), context);
    } );
}

