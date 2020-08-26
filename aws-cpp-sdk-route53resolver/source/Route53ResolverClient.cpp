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
#include <aws/route53resolver/model/AssociateResolverEndpointIpAddressRequest.h>
#include <aws/route53resolver/model/AssociateResolverQueryLogConfigRequest.h>
#include <aws/route53resolver/model/AssociateResolverRuleRequest.h>
#include <aws/route53resolver/model/CreateResolverEndpointRequest.h>
#include <aws/route53resolver/model/CreateResolverQueryLogConfigRequest.h>
#include <aws/route53resolver/model/CreateResolverRuleRequest.h>
#include <aws/route53resolver/model/DeleteResolverEndpointRequest.h>
#include <aws/route53resolver/model/DeleteResolverQueryLogConfigRequest.h>
#include <aws/route53resolver/model/DeleteResolverRuleRequest.h>
#include <aws/route53resolver/model/DisassociateResolverEndpointIpAddressRequest.h>
#include <aws/route53resolver/model/DisassociateResolverQueryLogConfigRequest.h>
#include <aws/route53resolver/model/DisassociateResolverRuleRequest.h>
#include <aws/route53resolver/model/GetResolverEndpointRequest.h>
#include <aws/route53resolver/model/GetResolverQueryLogConfigRequest.h>
#include <aws/route53resolver/model/GetResolverQueryLogConfigAssociationRequest.h>
#include <aws/route53resolver/model/GetResolverQueryLogConfigPolicyRequest.h>
#include <aws/route53resolver/model/GetResolverRuleRequest.h>
#include <aws/route53resolver/model/GetResolverRuleAssociationRequest.h>
#include <aws/route53resolver/model/GetResolverRulePolicyRequest.h>
#include <aws/route53resolver/model/ListResolverEndpointIpAddressesRequest.h>
#include <aws/route53resolver/model/ListResolverEndpointsRequest.h>
#include <aws/route53resolver/model/ListResolverQueryLogConfigAssociationsRequest.h>
#include <aws/route53resolver/model/ListResolverQueryLogConfigsRequest.h>
#include <aws/route53resolver/model/ListResolverRuleAssociationsRequest.h>
#include <aws/route53resolver/model/ListResolverRulesRequest.h>
#include <aws/route53resolver/model/ListTagsForResourceRequest.h>
#include <aws/route53resolver/model/PutResolverQueryLogConfigPolicyRequest.h>
#include <aws/route53resolver/model/PutResolverRulePolicyRequest.h>
#include <aws/route53resolver/model/TagResourceRequest.h>
#include <aws/route53resolver/model/UntagResourceRequest.h>
#include <aws/route53resolver/model/UpdateResolverEndpointRequest.h>
#include <aws/route53resolver/model/UpdateResolverRuleRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Route53Resolver;
using namespace Aws::Route53Resolver::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "route53resolver";
static const char* ALLOCATION_TAG = "Route53ResolverClient";


Route53ResolverClient::Route53ResolverClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<Route53ResolverErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

Route53ResolverClient::Route53ResolverClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<Route53ResolverErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

Route53ResolverClient::Route53ResolverClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<Route53ResolverErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

Route53ResolverClient::~Route53ResolverClient()
{
}

void Route53ResolverClient::init(const ClientConfiguration& config)
{
  SetServiceClientName("Route53Resolver");
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

AssociateResolverEndpointIpAddressOutcome Route53ResolverClient::AssociateResolverEndpointIpAddress(const AssociateResolverEndpointIpAddressRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
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
  m_executor->Submit( [this, request, handler, context](){ this->AssociateResolverEndpointIpAddressAsyncHelper( request, handler, context ); } );
}

void Route53ResolverClient::AssociateResolverEndpointIpAddressAsyncHelper(const AssociateResolverEndpointIpAddressRequest& request, const AssociateResolverEndpointIpAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateResolverEndpointIpAddress(request), context);
}

AssociateResolverQueryLogConfigOutcome Route53ResolverClient::AssociateResolverQueryLogConfig(const AssociateResolverQueryLogConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
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
  m_executor->Submit( [this, request, handler, context](){ this->AssociateResolverQueryLogConfigAsyncHelper( request, handler, context ); } );
}

void Route53ResolverClient::AssociateResolverQueryLogConfigAsyncHelper(const AssociateResolverQueryLogConfigRequest& request, const AssociateResolverQueryLogConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateResolverQueryLogConfig(request), context);
}

AssociateResolverRuleOutcome Route53ResolverClient::AssociateResolverRule(const AssociateResolverRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
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
  m_executor->Submit( [this, request, handler, context](){ this->AssociateResolverRuleAsyncHelper( request, handler, context ); } );
}

void Route53ResolverClient::AssociateResolverRuleAsyncHelper(const AssociateResolverRuleRequest& request, const AssociateResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateResolverRule(request), context);
}

CreateResolverEndpointOutcome Route53ResolverClient::CreateResolverEndpoint(const CreateResolverEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateResolverEndpointAsyncHelper( request, handler, context ); } );
}

void Route53ResolverClient::CreateResolverEndpointAsyncHelper(const CreateResolverEndpointRequest& request, const CreateResolverEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateResolverEndpoint(request), context);
}

CreateResolverQueryLogConfigOutcome Route53ResolverClient::CreateResolverQueryLogConfig(const CreateResolverQueryLogConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateResolverQueryLogConfigAsyncHelper( request, handler, context ); } );
}

void Route53ResolverClient::CreateResolverQueryLogConfigAsyncHelper(const CreateResolverQueryLogConfigRequest& request, const CreateResolverQueryLogConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateResolverQueryLogConfig(request), context);
}

CreateResolverRuleOutcome Route53ResolverClient::CreateResolverRule(const CreateResolverRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateResolverRuleAsyncHelper( request, handler, context ); } );
}

void Route53ResolverClient::CreateResolverRuleAsyncHelper(const CreateResolverRuleRequest& request, const CreateResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateResolverRule(request), context);
}

DeleteResolverEndpointOutcome Route53ResolverClient::DeleteResolverEndpoint(const DeleteResolverEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteResolverEndpointAsyncHelper( request, handler, context ); } );
}

void Route53ResolverClient::DeleteResolverEndpointAsyncHelper(const DeleteResolverEndpointRequest& request, const DeleteResolverEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteResolverEndpoint(request), context);
}

DeleteResolverQueryLogConfigOutcome Route53ResolverClient::DeleteResolverQueryLogConfig(const DeleteResolverQueryLogConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteResolverQueryLogConfigAsyncHelper( request, handler, context ); } );
}

void Route53ResolverClient::DeleteResolverQueryLogConfigAsyncHelper(const DeleteResolverQueryLogConfigRequest& request, const DeleteResolverQueryLogConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteResolverQueryLogConfig(request), context);
}

DeleteResolverRuleOutcome Route53ResolverClient::DeleteResolverRule(const DeleteResolverRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteResolverRuleAsyncHelper( request, handler, context ); } );
}

void Route53ResolverClient::DeleteResolverRuleAsyncHelper(const DeleteResolverRuleRequest& request, const DeleteResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteResolverRule(request), context);
}

DisassociateResolverEndpointIpAddressOutcome Route53ResolverClient::DisassociateResolverEndpointIpAddress(const DisassociateResolverEndpointIpAddressRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
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
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateResolverEndpointIpAddressAsyncHelper( request, handler, context ); } );
}

void Route53ResolverClient::DisassociateResolverEndpointIpAddressAsyncHelper(const DisassociateResolverEndpointIpAddressRequest& request, const DisassociateResolverEndpointIpAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateResolverEndpointIpAddress(request), context);
}

DisassociateResolverQueryLogConfigOutcome Route53ResolverClient::DisassociateResolverQueryLogConfig(const DisassociateResolverQueryLogConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
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
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateResolverQueryLogConfigAsyncHelper( request, handler, context ); } );
}

void Route53ResolverClient::DisassociateResolverQueryLogConfigAsyncHelper(const DisassociateResolverQueryLogConfigRequest& request, const DisassociateResolverQueryLogConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateResolverQueryLogConfig(request), context);
}

DisassociateResolverRuleOutcome Route53ResolverClient::DisassociateResolverRule(const DisassociateResolverRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
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
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateResolverRuleAsyncHelper( request, handler, context ); } );
}

void Route53ResolverClient::DisassociateResolverRuleAsyncHelper(const DisassociateResolverRuleRequest& request, const DisassociateResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateResolverRule(request), context);
}

GetResolverEndpointOutcome Route53ResolverClient::GetResolverEndpoint(const GetResolverEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
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
  m_executor->Submit( [this, request, handler, context](){ this->GetResolverEndpointAsyncHelper( request, handler, context ); } );
}

void Route53ResolverClient::GetResolverEndpointAsyncHelper(const GetResolverEndpointRequest& request, const GetResolverEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetResolverEndpoint(request), context);
}

GetResolverQueryLogConfigOutcome Route53ResolverClient::GetResolverQueryLogConfig(const GetResolverQueryLogConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
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
  m_executor->Submit( [this, request, handler, context](){ this->GetResolverQueryLogConfigAsyncHelper( request, handler, context ); } );
}

void Route53ResolverClient::GetResolverQueryLogConfigAsyncHelper(const GetResolverQueryLogConfigRequest& request, const GetResolverQueryLogConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetResolverQueryLogConfig(request), context);
}

GetResolverQueryLogConfigAssociationOutcome Route53ResolverClient::GetResolverQueryLogConfigAssociation(const GetResolverQueryLogConfigAssociationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
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
  m_executor->Submit( [this, request, handler, context](){ this->GetResolverQueryLogConfigAssociationAsyncHelper( request, handler, context ); } );
}

void Route53ResolverClient::GetResolverQueryLogConfigAssociationAsyncHelper(const GetResolverQueryLogConfigAssociationRequest& request, const GetResolverQueryLogConfigAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetResolverQueryLogConfigAssociation(request), context);
}

GetResolverQueryLogConfigPolicyOutcome Route53ResolverClient::GetResolverQueryLogConfigPolicy(const GetResolverQueryLogConfigPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
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
  m_executor->Submit( [this, request, handler, context](){ this->GetResolverQueryLogConfigPolicyAsyncHelper( request, handler, context ); } );
}

void Route53ResolverClient::GetResolverQueryLogConfigPolicyAsyncHelper(const GetResolverQueryLogConfigPolicyRequest& request, const GetResolverQueryLogConfigPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetResolverQueryLogConfigPolicy(request), context);
}

GetResolverRuleOutcome Route53ResolverClient::GetResolverRule(const GetResolverRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
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
  m_executor->Submit( [this, request, handler, context](){ this->GetResolverRuleAsyncHelper( request, handler, context ); } );
}

void Route53ResolverClient::GetResolverRuleAsyncHelper(const GetResolverRuleRequest& request, const GetResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetResolverRule(request), context);
}

GetResolverRuleAssociationOutcome Route53ResolverClient::GetResolverRuleAssociation(const GetResolverRuleAssociationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
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
  m_executor->Submit( [this, request, handler, context](){ this->GetResolverRuleAssociationAsyncHelper( request, handler, context ); } );
}

void Route53ResolverClient::GetResolverRuleAssociationAsyncHelper(const GetResolverRuleAssociationRequest& request, const GetResolverRuleAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetResolverRuleAssociation(request), context);
}

GetResolverRulePolicyOutcome Route53ResolverClient::GetResolverRulePolicy(const GetResolverRulePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
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
  m_executor->Submit( [this, request, handler, context](){ this->GetResolverRulePolicyAsyncHelper( request, handler, context ); } );
}

void Route53ResolverClient::GetResolverRulePolicyAsyncHelper(const GetResolverRulePolicyRequest& request, const GetResolverRulePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetResolverRulePolicy(request), context);
}

ListResolverEndpointIpAddressesOutcome Route53ResolverClient::ListResolverEndpointIpAddresses(const ListResolverEndpointIpAddressesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
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
  m_executor->Submit( [this, request, handler, context](){ this->ListResolverEndpointIpAddressesAsyncHelper( request, handler, context ); } );
}

void Route53ResolverClient::ListResolverEndpointIpAddressesAsyncHelper(const ListResolverEndpointIpAddressesRequest& request, const ListResolverEndpointIpAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListResolverEndpointIpAddresses(request), context);
}

ListResolverEndpointsOutcome Route53ResolverClient::ListResolverEndpoints(const ListResolverEndpointsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
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
  m_executor->Submit( [this, request, handler, context](){ this->ListResolverEndpointsAsyncHelper( request, handler, context ); } );
}

void Route53ResolverClient::ListResolverEndpointsAsyncHelper(const ListResolverEndpointsRequest& request, const ListResolverEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListResolverEndpoints(request), context);
}

ListResolverQueryLogConfigAssociationsOutcome Route53ResolverClient::ListResolverQueryLogConfigAssociations(const ListResolverQueryLogConfigAssociationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
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
  m_executor->Submit( [this, request, handler, context](){ this->ListResolverQueryLogConfigAssociationsAsyncHelper( request, handler, context ); } );
}

void Route53ResolverClient::ListResolverQueryLogConfigAssociationsAsyncHelper(const ListResolverQueryLogConfigAssociationsRequest& request, const ListResolverQueryLogConfigAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListResolverQueryLogConfigAssociations(request), context);
}

ListResolverQueryLogConfigsOutcome Route53ResolverClient::ListResolverQueryLogConfigs(const ListResolverQueryLogConfigsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
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
  m_executor->Submit( [this, request, handler, context](){ this->ListResolverQueryLogConfigsAsyncHelper( request, handler, context ); } );
}

void Route53ResolverClient::ListResolverQueryLogConfigsAsyncHelper(const ListResolverQueryLogConfigsRequest& request, const ListResolverQueryLogConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListResolverQueryLogConfigs(request), context);
}

ListResolverRuleAssociationsOutcome Route53ResolverClient::ListResolverRuleAssociations(const ListResolverRuleAssociationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
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
  m_executor->Submit( [this, request, handler, context](){ this->ListResolverRuleAssociationsAsyncHelper( request, handler, context ); } );
}

void Route53ResolverClient::ListResolverRuleAssociationsAsyncHelper(const ListResolverRuleAssociationsRequest& request, const ListResolverRuleAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListResolverRuleAssociations(request), context);
}

ListResolverRulesOutcome Route53ResolverClient::ListResolverRules(const ListResolverRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
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
  m_executor->Submit( [this, request, handler, context](){ this->ListResolverRulesAsyncHelper( request, handler, context ); } );
}

void Route53ResolverClient::ListResolverRulesAsyncHelper(const ListResolverRulesRequest& request, const ListResolverRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListResolverRules(request), context);
}

ListTagsForResourceOutcome Route53ResolverClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
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
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void Route53ResolverClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

PutResolverQueryLogConfigPolicyOutcome Route53ResolverClient::PutResolverQueryLogConfigPolicy(const PutResolverQueryLogConfigPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
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
  m_executor->Submit( [this, request, handler, context](){ this->PutResolverQueryLogConfigPolicyAsyncHelper( request, handler, context ); } );
}

void Route53ResolverClient::PutResolverQueryLogConfigPolicyAsyncHelper(const PutResolverQueryLogConfigPolicyRequest& request, const PutResolverQueryLogConfigPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutResolverQueryLogConfigPolicy(request), context);
}

PutResolverRulePolicyOutcome Route53ResolverClient::PutResolverRulePolicy(const PutResolverRulePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
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
  m_executor->Submit( [this, request, handler, context](){ this->PutResolverRulePolicyAsyncHelper( request, handler, context ); } );
}

void Route53ResolverClient::PutResolverRulePolicyAsyncHelper(const PutResolverRulePolicyRequest& request, const PutResolverRulePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutResolverRulePolicy(request), context);
}

TagResourceOutcome Route53ResolverClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
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
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void Route53ResolverClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome Route53ResolverClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
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
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void Route53ResolverClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateResolverEndpointOutcome Route53ResolverClient::UpdateResolverEndpoint(const UpdateResolverEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateResolverEndpointAsyncHelper( request, handler, context ); } );
}

void Route53ResolverClient::UpdateResolverEndpointAsyncHelper(const UpdateResolverEndpointRequest& request, const UpdateResolverEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateResolverEndpoint(request), context);
}

UpdateResolverRuleOutcome Route53ResolverClient::UpdateResolverRule(const UpdateResolverRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
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
  m_executor->Submit( [this, request, handler, context](){ this->UpdateResolverRuleAsyncHelper( request, handler, context ); } );
}

void Route53ResolverClient::UpdateResolverRuleAsyncHelper(const UpdateResolverRuleRequest& request, const UpdateResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateResolverRule(request), context);
}

