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
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/elasticloadbalancing/ElasticLoadBalancingClient.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingEndpoint.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingErrorMarshaller.h>
#include <aws/elasticloadbalancing/model/AddTagsRequest.h>
#include <aws/elasticloadbalancing/model/ApplySecurityGroupsToLoadBalancerRequest.h>
#include <aws/elasticloadbalancing/model/AttachLoadBalancerToSubnetsRequest.h>
#include <aws/elasticloadbalancing/model/ConfigureHealthCheckRequest.h>
#include <aws/elasticloadbalancing/model/CreateAppCookieStickinessPolicyRequest.h>
#include <aws/elasticloadbalancing/model/CreateLBCookieStickinessPolicyRequest.h>
#include <aws/elasticloadbalancing/model/CreateLoadBalancerRequest.h>
#include <aws/elasticloadbalancing/model/CreateLoadBalancerListenersRequest.h>
#include <aws/elasticloadbalancing/model/CreateLoadBalancerPolicyRequest.h>
#include <aws/elasticloadbalancing/model/DeleteLoadBalancerRequest.h>
#include <aws/elasticloadbalancing/model/DeleteLoadBalancerListenersRequest.h>
#include <aws/elasticloadbalancing/model/DeleteLoadBalancerPolicyRequest.h>
#include <aws/elasticloadbalancing/model/DeregisterInstancesFromLoadBalancerRequest.h>
#include <aws/elasticloadbalancing/model/DescribeAccountLimitsRequest.h>
#include <aws/elasticloadbalancing/model/DescribeInstanceHealthRequest.h>
#include <aws/elasticloadbalancing/model/DescribeLoadBalancerAttributesRequest.h>
#include <aws/elasticloadbalancing/model/DescribeLoadBalancerPoliciesRequest.h>
#include <aws/elasticloadbalancing/model/DescribeLoadBalancerPolicyTypesRequest.h>
#include <aws/elasticloadbalancing/model/DescribeLoadBalancersRequest.h>
#include <aws/elasticloadbalancing/model/DescribeTagsRequest.h>
#include <aws/elasticloadbalancing/model/DetachLoadBalancerFromSubnetsRequest.h>
#include <aws/elasticloadbalancing/model/DisableAvailabilityZonesForLoadBalancerRequest.h>
#include <aws/elasticloadbalancing/model/EnableAvailabilityZonesForLoadBalancerRequest.h>
#include <aws/elasticloadbalancing/model/ModifyLoadBalancerAttributesRequest.h>
#include <aws/elasticloadbalancing/model/RegisterInstancesWithLoadBalancerRequest.h>
#include <aws/elasticloadbalancing/model/RemoveTagsRequest.h>
#include <aws/elasticloadbalancing/model/SetLoadBalancerListenerSSLCertificateRequest.h>
#include <aws/elasticloadbalancing/model/SetLoadBalancerPoliciesForBackendServerRequest.h>
#include <aws/elasticloadbalancing/model/SetLoadBalancerPoliciesOfListenerRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ElasticLoadBalancing;
using namespace Aws::ElasticLoadBalancing::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;


static const char* SERVICE_NAME = "elasticloadbalancing";
static const char* ALLOCATION_TAG = "ElasticLoadBalancingClient";


ElasticLoadBalancingClient::ElasticLoadBalancingClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ElasticLoadBalancingErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElasticLoadBalancingClient::ElasticLoadBalancingClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ElasticLoadBalancingErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElasticLoadBalancingClient::ElasticLoadBalancingClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ElasticLoadBalancingErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElasticLoadBalancingClient::~ElasticLoadBalancingClient()
{
}

void ElasticLoadBalancingClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ElasticLoadBalancingEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ElasticLoadBalancingClient::OverrideEndpoint(const Aws::String& endpoint)
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

Aws::String ElasticLoadBalancingClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const
{
  Aws::StringStream ss;
  ss << "https://" << ElasticLoadBalancingEndpoint::ForRegion(region);
  ss << "?" << requestToConvert.SerializePayload();

  URI uri(ss.str());
  return GeneratePresignedUrl(uri, HttpMethod::HTTP_GET, region, 3600);
}

AddTagsOutcome ElasticLoadBalancingClient::AddTags(const AddTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AddTagsOutcome(AddTagsResult(outcome.GetResult()));
  }
  else
  {
    return AddTagsOutcome(outcome.GetError());
  }
}

AddTagsOutcomeCallable ElasticLoadBalancingClient::AddTagsCallable(const AddTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::AddTagsAsync(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddTagsAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingClient::AddTagsAsyncHelper(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddTags(request), context);
}

ApplySecurityGroupsToLoadBalancerOutcome ElasticLoadBalancingClient::ApplySecurityGroupsToLoadBalancer(const ApplySecurityGroupsToLoadBalancerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ApplySecurityGroupsToLoadBalancerOutcome(ApplySecurityGroupsToLoadBalancerResult(outcome.GetResult()));
  }
  else
  {
    return ApplySecurityGroupsToLoadBalancerOutcome(outcome.GetError());
  }
}

ApplySecurityGroupsToLoadBalancerOutcomeCallable ElasticLoadBalancingClient::ApplySecurityGroupsToLoadBalancerCallable(const ApplySecurityGroupsToLoadBalancerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ApplySecurityGroupsToLoadBalancerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ApplySecurityGroupsToLoadBalancer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::ApplySecurityGroupsToLoadBalancerAsync(const ApplySecurityGroupsToLoadBalancerRequest& request, const ApplySecurityGroupsToLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ApplySecurityGroupsToLoadBalancerAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingClient::ApplySecurityGroupsToLoadBalancerAsyncHelper(const ApplySecurityGroupsToLoadBalancerRequest& request, const ApplySecurityGroupsToLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ApplySecurityGroupsToLoadBalancer(request), context);
}

AttachLoadBalancerToSubnetsOutcome ElasticLoadBalancingClient::AttachLoadBalancerToSubnets(const AttachLoadBalancerToSubnetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AttachLoadBalancerToSubnetsOutcome(AttachLoadBalancerToSubnetsResult(outcome.GetResult()));
  }
  else
  {
    return AttachLoadBalancerToSubnetsOutcome(outcome.GetError());
  }
}

AttachLoadBalancerToSubnetsOutcomeCallable ElasticLoadBalancingClient::AttachLoadBalancerToSubnetsCallable(const AttachLoadBalancerToSubnetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AttachLoadBalancerToSubnetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AttachLoadBalancerToSubnets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::AttachLoadBalancerToSubnetsAsync(const AttachLoadBalancerToSubnetsRequest& request, const AttachLoadBalancerToSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AttachLoadBalancerToSubnetsAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingClient::AttachLoadBalancerToSubnetsAsyncHelper(const AttachLoadBalancerToSubnetsRequest& request, const AttachLoadBalancerToSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AttachLoadBalancerToSubnets(request), context);
}

ConfigureHealthCheckOutcome ElasticLoadBalancingClient::ConfigureHealthCheck(const ConfigureHealthCheckRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ConfigureHealthCheckOutcome(ConfigureHealthCheckResult(outcome.GetResult()));
  }
  else
  {
    return ConfigureHealthCheckOutcome(outcome.GetError());
  }
}

ConfigureHealthCheckOutcomeCallable ElasticLoadBalancingClient::ConfigureHealthCheckCallable(const ConfigureHealthCheckRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ConfigureHealthCheckOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ConfigureHealthCheck(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::ConfigureHealthCheckAsync(const ConfigureHealthCheckRequest& request, const ConfigureHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ConfigureHealthCheckAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingClient::ConfigureHealthCheckAsyncHelper(const ConfigureHealthCheckRequest& request, const ConfigureHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ConfigureHealthCheck(request), context);
}

CreateAppCookieStickinessPolicyOutcome ElasticLoadBalancingClient::CreateAppCookieStickinessPolicy(const CreateAppCookieStickinessPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateAppCookieStickinessPolicyOutcome(CreateAppCookieStickinessPolicyResult(outcome.GetResult()));
  }
  else
  {
    return CreateAppCookieStickinessPolicyOutcome(outcome.GetError());
  }
}

CreateAppCookieStickinessPolicyOutcomeCallable ElasticLoadBalancingClient::CreateAppCookieStickinessPolicyCallable(const CreateAppCookieStickinessPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAppCookieStickinessPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAppCookieStickinessPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::CreateAppCookieStickinessPolicyAsync(const CreateAppCookieStickinessPolicyRequest& request, const CreateAppCookieStickinessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAppCookieStickinessPolicyAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingClient::CreateAppCookieStickinessPolicyAsyncHelper(const CreateAppCookieStickinessPolicyRequest& request, const CreateAppCookieStickinessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAppCookieStickinessPolicy(request), context);
}

CreateLBCookieStickinessPolicyOutcome ElasticLoadBalancingClient::CreateLBCookieStickinessPolicy(const CreateLBCookieStickinessPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateLBCookieStickinessPolicyOutcome(CreateLBCookieStickinessPolicyResult(outcome.GetResult()));
  }
  else
  {
    return CreateLBCookieStickinessPolicyOutcome(outcome.GetError());
  }
}

CreateLBCookieStickinessPolicyOutcomeCallable ElasticLoadBalancingClient::CreateLBCookieStickinessPolicyCallable(const CreateLBCookieStickinessPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLBCookieStickinessPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLBCookieStickinessPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::CreateLBCookieStickinessPolicyAsync(const CreateLBCookieStickinessPolicyRequest& request, const CreateLBCookieStickinessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateLBCookieStickinessPolicyAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingClient::CreateLBCookieStickinessPolicyAsyncHelper(const CreateLBCookieStickinessPolicyRequest& request, const CreateLBCookieStickinessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateLBCookieStickinessPolicy(request), context);
}

CreateLoadBalancerOutcome ElasticLoadBalancingClient::CreateLoadBalancer(const CreateLoadBalancerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateLoadBalancerOutcome(CreateLoadBalancerResult(outcome.GetResult()));
  }
  else
  {
    return CreateLoadBalancerOutcome(outcome.GetError());
  }
}

CreateLoadBalancerOutcomeCallable ElasticLoadBalancingClient::CreateLoadBalancerCallable(const CreateLoadBalancerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLoadBalancerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLoadBalancer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::CreateLoadBalancerAsync(const CreateLoadBalancerRequest& request, const CreateLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateLoadBalancerAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingClient::CreateLoadBalancerAsyncHelper(const CreateLoadBalancerRequest& request, const CreateLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateLoadBalancer(request), context);
}

CreateLoadBalancerListenersOutcome ElasticLoadBalancingClient::CreateLoadBalancerListeners(const CreateLoadBalancerListenersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateLoadBalancerListenersOutcome(CreateLoadBalancerListenersResult(outcome.GetResult()));
  }
  else
  {
    return CreateLoadBalancerListenersOutcome(outcome.GetError());
  }
}

CreateLoadBalancerListenersOutcomeCallable ElasticLoadBalancingClient::CreateLoadBalancerListenersCallable(const CreateLoadBalancerListenersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLoadBalancerListenersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLoadBalancerListeners(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::CreateLoadBalancerListenersAsync(const CreateLoadBalancerListenersRequest& request, const CreateLoadBalancerListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateLoadBalancerListenersAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingClient::CreateLoadBalancerListenersAsyncHelper(const CreateLoadBalancerListenersRequest& request, const CreateLoadBalancerListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateLoadBalancerListeners(request), context);
}

CreateLoadBalancerPolicyOutcome ElasticLoadBalancingClient::CreateLoadBalancerPolicy(const CreateLoadBalancerPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateLoadBalancerPolicyOutcome(CreateLoadBalancerPolicyResult(outcome.GetResult()));
  }
  else
  {
    return CreateLoadBalancerPolicyOutcome(outcome.GetError());
  }
}

CreateLoadBalancerPolicyOutcomeCallable ElasticLoadBalancingClient::CreateLoadBalancerPolicyCallable(const CreateLoadBalancerPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLoadBalancerPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLoadBalancerPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::CreateLoadBalancerPolicyAsync(const CreateLoadBalancerPolicyRequest& request, const CreateLoadBalancerPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateLoadBalancerPolicyAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingClient::CreateLoadBalancerPolicyAsyncHelper(const CreateLoadBalancerPolicyRequest& request, const CreateLoadBalancerPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateLoadBalancerPolicy(request), context);
}

DeleteLoadBalancerOutcome ElasticLoadBalancingClient::DeleteLoadBalancer(const DeleteLoadBalancerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteLoadBalancerOutcome(DeleteLoadBalancerResult(outcome.GetResult()));
  }
  else
  {
    return DeleteLoadBalancerOutcome(outcome.GetError());
  }
}

DeleteLoadBalancerOutcomeCallable ElasticLoadBalancingClient::DeleteLoadBalancerCallable(const DeleteLoadBalancerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLoadBalancerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLoadBalancer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::DeleteLoadBalancerAsync(const DeleteLoadBalancerRequest& request, const DeleteLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteLoadBalancerAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingClient::DeleteLoadBalancerAsyncHelper(const DeleteLoadBalancerRequest& request, const DeleteLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteLoadBalancer(request), context);
}

DeleteLoadBalancerListenersOutcome ElasticLoadBalancingClient::DeleteLoadBalancerListeners(const DeleteLoadBalancerListenersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteLoadBalancerListenersOutcome(DeleteLoadBalancerListenersResult(outcome.GetResult()));
  }
  else
  {
    return DeleteLoadBalancerListenersOutcome(outcome.GetError());
  }
}

DeleteLoadBalancerListenersOutcomeCallable ElasticLoadBalancingClient::DeleteLoadBalancerListenersCallable(const DeleteLoadBalancerListenersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLoadBalancerListenersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLoadBalancerListeners(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::DeleteLoadBalancerListenersAsync(const DeleteLoadBalancerListenersRequest& request, const DeleteLoadBalancerListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteLoadBalancerListenersAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingClient::DeleteLoadBalancerListenersAsyncHelper(const DeleteLoadBalancerListenersRequest& request, const DeleteLoadBalancerListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteLoadBalancerListeners(request), context);
}

DeleteLoadBalancerPolicyOutcome ElasticLoadBalancingClient::DeleteLoadBalancerPolicy(const DeleteLoadBalancerPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteLoadBalancerPolicyOutcome(DeleteLoadBalancerPolicyResult(outcome.GetResult()));
  }
  else
  {
    return DeleteLoadBalancerPolicyOutcome(outcome.GetError());
  }
}

DeleteLoadBalancerPolicyOutcomeCallable ElasticLoadBalancingClient::DeleteLoadBalancerPolicyCallable(const DeleteLoadBalancerPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLoadBalancerPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLoadBalancerPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::DeleteLoadBalancerPolicyAsync(const DeleteLoadBalancerPolicyRequest& request, const DeleteLoadBalancerPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteLoadBalancerPolicyAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingClient::DeleteLoadBalancerPolicyAsyncHelper(const DeleteLoadBalancerPolicyRequest& request, const DeleteLoadBalancerPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteLoadBalancerPolicy(request), context);
}

DeregisterInstancesFromLoadBalancerOutcome ElasticLoadBalancingClient::DeregisterInstancesFromLoadBalancer(const DeregisterInstancesFromLoadBalancerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeregisterInstancesFromLoadBalancerOutcome(DeregisterInstancesFromLoadBalancerResult(outcome.GetResult()));
  }
  else
  {
    return DeregisterInstancesFromLoadBalancerOutcome(outcome.GetError());
  }
}

DeregisterInstancesFromLoadBalancerOutcomeCallable ElasticLoadBalancingClient::DeregisterInstancesFromLoadBalancerCallable(const DeregisterInstancesFromLoadBalancerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterInstancesFromLoadBalancerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterInstancesFromLoadBalancer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::DeregisterInstancesFromLoadBalancerAsync(const DeregisterInstancesFromLoadBalancerRequest& request, const DeregisterInstancesFromLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeregisterInstancesFromLoadBalancerAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingClient::DeregisterInstancesFromLoadBalancerAsyncHelper(const DeregisterInstancesFromLoadBalancerRequest& request, const DeregisterInstancesFromLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeregisterInstancesFromLoadBalancer(request), context);
}

DescribeAccountLimitsOutcome ElasticLoadBalancingClient::DescribeAccountLimits(const DescribeAccountLimitsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeAccountLimitsOutcome(DescribeAccountLimitsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAccountLimitsOutcome(outcome.GetError());
  }
}

DescribeAccountLimitsOutcomeCallable ElasticLoadBalancingClient::DescribeAccountLimitsCallable(const DescribeAccountLimitsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountLimitsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountLimits(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::DescribeAccountLimitsAsync(const DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAccountLimitsAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingClient::DescribeAccountLimitsAsyncHelper(const DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAccountLimits(request), context);
}

DescribeInstanceHealthOutcome ElasticLoadBalancingClient::DescribeInstanceHealth(const DescribeInstanceHealthRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeInstanceHealthOutcome(DescribeInstanceHealthResult(outcome.GetResult()));
  }
  else
  {
    return DescribeInstanceHealthOutcome(outcome.GetError());
  }
}

DescribeInstanceHealthOutcomeCallable ElasticLoadBalancingClient::DescribeInstanceHealthCallable(const DescribeInstanceHealthRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeInstanceHealthOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeInstanceHealth(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::DescribeInstanceHealthAsync(const DescribeInstanceHealthRequest& request, const DescribeInstanceHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeInstanceHealthAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingClient::DescribeInstanceHealthAsyncHelper(const DescribeInstanceHealthRequest& request, const DescribeInstanceHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeInstanceHealth(request), context);
}

DescribeLoadBalancerAttributesOutcome ElasticLoadBalancingClient::DescribeLoadBalancerAttributes(const DescribeLoadBalancerAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeLoadBalancerAttributesOutcome(DescribeLoadBalancerAttributesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeLoadBalancerAttributesOutcome(outcome.GetError());
  }
}

DescribeLoadBalancerAttributesOutcomeCallable ElasticLoadBalancingClient::DescribeLoadBalancerAttributesCallable(const DescribeLoadBalancerAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLoadBalancerAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLoadBalancerAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::DescribeLoadBalancerAttributesAsync(const DescribeLoadBalancerAttributesRequest& request, const DescribeLoadBalancerAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeLoadBalancerAttributesAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingClient::DescribeLoadBalancerAttributesAsyncHelper(const DescribeLoadBalancerAttributesRequest& request, const DescribeLoadBalancerAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeLoadBalancerAttributes(request), context);
}

DescribeLoadBalancerPoliciesOutcome ElasticLoadBalancingClient::DescribeLoadBalancerPolicies(const DescribeLoadBalancerPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeLoadBalancerPoliciesOutcome(DescribeLoadBalancerPoliciesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeLoadBalancerPoliciesOutcome(outcome.GetError());
  }
}

DescribeLoadBalancerPoliciesOutcomeCallable ElasticLoadBalancingClient::DescribeLoadBalancerPoliciesCallable(const DescribeLoadBalancerPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLoadBalancerPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLoadBalancerPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::DescribeLoadBalancerPoliciesAsync(const DescribeLoadBalancerPoliciesRequest& request, const DescribeLoadBalancerPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeLoadBalancerPoliciesAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingClient::DescribeLoadBalancerPoliciesAsyncHelper(const DescribeLoadBalancerPoliciesRequest& request, const DescribeLoadBalancerPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeLoadBalancerPolicies(request), context);
}

DescribeLoadBalancerPolicyTypesOutcome ElasticLoadBalancingClient::DescribeLoadBalancerPolicyTypes(const DescribeLoadBalancerPolicyTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeLoadBalancerPolicyTypesOutcome(DescribeLoadBalancerPolicyTypesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeLoadBalancerPolicyTypesOutcome(outcome.GetError());
  }
}

DescribeLoadBalancerPolicyTypesOutcomeCallable ElasticLoadBalancingClient::DescribeLoadBalancerPolicyTypesCallable(const DescribeLoadBalancerPolicyTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLoadBalancerPolicyTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLoadBalancerPolicyTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::DescribeLoadBalancerPolicyTypesAsync(const DescribeLoadBalancerPolicyTypesRequest& request, const DescribeLoadBalancerPolicyTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeLoadBalancerPolicyTypesAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingClient::DescribeLoadBalancerPolicyTypesAsyncHelper(const DescribeLoadBalancerPolicyTypesRequest& request, const DescribeLoadBalancerPolicyTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeLoadBalancerPolicyTypes(request), context);
}

DescribeLoadBalancersOutcome ElasticLoadBalancingClient::DescribeLoadBalancers(const DescribeLoadBalancersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeLoadBalancersOutcome(DescribeLoadBalancersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeLoadBalancersOutcome(outcome.GetError());
  }
}

DescribeLoadBalancersOutcomeCallable ElasticLoadBalancingClient::DescribeLoadBalancersCallable(const DescribeLoadBalancersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLoadBalancersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLoadBalancers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::DescribeLoadBalancersAsync(const DescribeLoadBalancersRequest& request, const DescribeLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeLoadBalancersAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingClient::DescribeLoadBalancersAsyncHelper(const DescribeLoadBalancersRequest& request, const DescribeLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeLoadBalancers(request), context);
}

DescribeTagsOutcome ElasticLoadBalancingClient::DescribeTags(const DescribeTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeTagsOutcome(DescribeTagsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTagsOutcome(outcome.GetError());
  }
}

DescribeTagsOutcomeCallable ElasticLoadBalancingClient::DescribeTagsCallable(const DescribeTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::DescribeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTagsAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingClient::DescribeTagsAsyncHelper(const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTags(request), context);
}

DetachLoadBalancerFromSubnetsOutcome ElasticLoadBalancingClient::DetachLoadBalancerFromSubnets(const DetachLoadBalancerFromSubnetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DetachLoadBalancerFromSubnetsOutcome(DetachLoadBalancerFromSubnetsResult(outcome.GetResult()));
  }
  else
  {
    return DetachLoadBalancerFromSubnetsOutcome(outcome.GetError());
  }
}

DetachLoadBalancerFromSubnetsOutcomeCallable ElasticLoadBalancingClient::DetachLoadBalancerFromSubnetsCallable(const DetachLoadBalancerFromSubnetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetachLoadBalancerFromSubnetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetachLoadBalancerFromSubnets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::DetachLoadBalancerFromSubnetsAsync(const DetachLoadBalancerFromSubnetsRequest& request, const DetachLoadBalancerFromSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DetachLoadBalancerFromSubnetsAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingClient::DetachLoadBalancerFromSubnetsAsyncHelper(const DetachLoadBalancerFromSubnetsRequest& request, const DetachLoadBalancerFromSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetachLoadBalancerFromSubnets(request), context);
}

DisableAvailabilityZonesForLoadBalancerOutcome ElasticLoadBalancingClient::DisableAvailabilityZonesForLoadBalancer(const DisableAvailabilityZonesForLoadBalancerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DisableAvailabilityZonesForLoadBalancerOutcome(DisableAvailabilityZonesForLoadBalancerResult(outcome.GetResult()));
  }
  else
  {
    return DisableAvailabilityZonesForLoadBalancerOutcome(outcome.GetError());
  }
}

DisableAvailabilityZonesForLoadBalancerOutcomeCallable ElasticLoadBalancingClient::DisableAvailabilityZonesForLoadBalancerCallable(const DisableAvailabilityZonesForLoadBalancerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisableAvailabilityZonesForLoadBalancerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisableAvailabilityZonesForLoadBalancer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::DisableAvailabilityZonesForLoadBalancerAsync(const DisableAvailabilityZonesForLoadBalancerRequest& request, const DisableAvailabilityZonesForLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisableAvailabilityZonesForLoadBalancerAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingClient::DisableAvailabilityZonesForLoadBalancerAsyncHelper(const DisableAvailabilityZonesForLoadBalancerRequest& request, const DisableAvailabilityZonesForLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisableAvailabilityZonesForLoadBalancer(request), context);
}

EnableAvailabilityZonesForLoadBalancerOutcome ElasticLoadBalancingClient::EnableAvailabilityZonesForLoadBalancer(const EnableAvailabilityZonesForLoadBalancerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return EnableAvailabilityZonesForLoadBalancerOutcome(EnableAvailabilityZonesForLoadBalancerResult(outcome.GetResult()));
  }
  else
  {
    return EnableAvailabilityZonesForLoadBalancerOutcome(outcome.GetError());
  }
}

EnableAvailabilityZonesForLoadBalancerOutcomeCallable ElasticLoadBalancingClient::EnableAvailabilityZonesForLoadBalancerCallable(const EnableAvailabilityZonesForLoadBalancerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EnableAvailabilityZonesForLoadBalancerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EnableAvailabilityZonesForLoadBalancer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::EnableAvailabilityZonesForLoadBalancerAsync(const EnableAvailabilityZonesForLoadBalancerRequest& request, const EnableAvailabilityZonesForLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->EnableAvailabilityZonesForLoadBalancerAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingClient::EnableAvailabilityZonesForLoadBalancerAsyncHelper(const EnableAvailabilityZonesForLoadBalancerRequest& request, const EnableAvailabilityZonesForLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, EnableAvailabilityZonesForLoadBalancer(request), context);
}

ModifyLoadBalancerAttributesOutcome ElasticLoadBalancingClient::ModifyLoadBalancerAttributes(const ModifyLoadBalancerAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyLoadBalancerAttributesOutcome(ModifyLoadBalancerAttributesResult(outcome.GetResult()));
  }
  else
  {
    return ModifyLoadBalancerAttributesOutcome(outcome.GetError());
  }
}

ModifyLoadBalancerAttributesOutcomeCallable ElasticLoadBalancingClient::ModifyLoadBalancerAttributesCallable(const ModifyLoadBalancerAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyLoadBalancerAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyLoadBalancerAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::ModifyLoadBalancerAttributesAsync(const ModifyLoadBalancerAttributesRequest& request, const ModifyLoadBalancerAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyLoadBalancerAttributesAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingClient::ModifyLoadBalancerAttributesAsyncHelper(const ModifyLoadBalancerAttributesRequest& request, const ModifyLoadBalancerAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyLoadBalancerAttributes(request), context);
}

RegisterInstancesWithLoadBalancerOutcome ElasticLoadBalancingClient::RegisterInstancesWithLoadBalancer(const RegisterInstancesWithLoadBalancerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RegisterInstancesWithLoadBalancerOutcome(RegisterInstancesWithLoadBalancerResult(outcome.GetResult()));
  }
  else
  {
    return RegisterInstancesWithLoadBalancerOutcome(outcome.GetError());
  }
}

RegisterInstancesWithLoadBalancerOutcomeCallable ElasticLoadBalancingClient::RegisterInstancesWithLoadBalancerCallable(const RegisterInstancesWithLoadBalancerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterInstancesWithLoadBalancerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterInstancesWithLoadBalancer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::RegisterInstancesWithLoadBalancerAsync(const RegisterInstancesWithLoadBalancerRequest& request, const RegisterInstancesWithLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RegisterInstancesWithLoadBalancerAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingClient::RegisterInstancesWithLoadBalancerAsyncHelper(const RegisterInstancesWithLoadBalancerRequest& request, const RegisterInstancesWithLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterInstancesWithLoadBalancer(request), context);
}

RemoveTagsOutcome ElasticLoadBalancingClient::RemoveTags(const RemoveTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RemoveTagsOutcome(RemoveTagsResult(outcome.GetResult()));
  }
  else
  {
    return RemoveTagsOutcome(outcome.GetError());
  }
}

RemoveTagsOutcomeCallable ElasticLoadBalancingClient::RemoveTagsCallable(const RemoveTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::RemoveTagsAsync(const RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveTagsAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingClient::RemoveTagsAsyncHelper(const RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveTags(request), context);
}

SetLoadBalancerListenerSSLCertificateOutcome ElasticLoadBalancingClient::SetLoadBalancerListenerSSLCertificate(const SetLoadBalancerListenerSSLCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetLoadBalancerListenerSSLCertificateOutcome(SetLoadBalancerListenerSSLCertificateResult(outcome.GetResult()));
  }
  else
  {
    return SetLoadBalancerListenerSSLCertificateOutcome(outcome.GetError());
  }
}

SetLoadBalancerListenerSSLCertificateOutcomeCallable ElasticLoadBalancingClient::SetLoadBalancerListenerSSLCertificateCallable(const SetLoadBalancerListenerSSLCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetLoadBalancerListenerSSLCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetLoadBalancerListenerSSLCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::SetLoadBalancerListenerSSLCertificateAsync(const SetLoadBalancerListenerSSLCertificateRequest& request, const SetLoadBalancerListenerSSLCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetLoadBalancerListenerSSLCertificateAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingClient::SetLoadBalancerListenerSSLCertificateAsyncHelper(const SetLoadBalancerListenerSSLCertificateRequest& request, const SetLoadBalancerListenerSSLCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetLoadBalancerListenerSSLCertificate(request), context);
}

SetLoadBalancerPoliciesForBackendServerOutcome ElasticLoadBalancingClient::SetLoadBalancerPoliciesForBackendServer(const SetLoadBalancerPoliciesForBackendServerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetLoadBalancerPoliciesForBackendServerOutcome(SetLoadBalancerPoliciesForBackendServerResult(outcome.GetResult()));
  }
  else
  {
    return SetLoadBalancerPoliciesForBackendServerOutcome(outcome.GetError());
  }
}

SetLoadBalancerPoliciesForBackendServerOutcomeCallable ElasticLoadBalancingClient::SetLoadBalancerPoliciesForBackendServerCallable(const SetLoadBalancerPoliciesForBackendServerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetLoadBalancerPoliciesForBackendServerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetLoadBalancerPoliciesForBackendServer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::SetLoadBalancerPoliciesForBackendServerAsync(const SetLoadBalancerPoliciesForBackendServerRequest& request, const SetLoadBalancerPoliciesForBackendServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetLoadBalancerPoliciesForBackendServerAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingClient::SetLoadBalancerPoliciesForBackendServerAsyncHelper(const SetLoadBalancerPoliciesForBackendServerRequest& request, const SetLoadBalancerPoliciesForBackendServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetLoadBalancerPoliciesForBackendServer(request), context);
}

SetLoadBalancerPoliciesOfListenerOutcome ElasticLoadBalancingClient::SetLoadBalancerPoliciesOfListener(const SetLoadBalancerPoliciesOfListenerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetLoadBalancerPoliciesOfListenerOutcome(SetLoadBalancerPoliciesOfListenerResult(outcome.GetResult()));
  }
  else
  {
    return SetLoadBalancerPoliciesOfListenerOutcome(outcome.GetError());
  }
}

SetLoadBalancerPoliciesOfListenerOutcomeCallable ElasticLoadBalancingClient::SetLoadBalancerPoliciesOfListenerCallable(const SetLoadBalancerPoliciesOfListenerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetLoadBalancerPoliciesOfListenerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetLoadBalancerPoliciesOfListener(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingClient::SetLoadBalancerPoliciesOfListenerAsync(const SetLoadBalancerPoliciesOfListenerRequest& request, const SetLoadBalancerPoliciesOfListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetLoadBalancerPoliciesOfListenerAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingClient::SetLoadBalancerPoliciesOfListenerAsyncHelper(const SetLoadBalancerPoliciesOfListenerRequest& request, const SetLoadBalancerPoliciesOfListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetLoadBalancerPoliciesOfListener(request), context);
}



