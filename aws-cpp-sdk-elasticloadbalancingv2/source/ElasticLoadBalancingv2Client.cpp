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

#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Client.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Endpoint.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2ErrorMarshaller.h>
#include <aws/elasticloadbalancingv2/model/AddListenerCertificatesRequest.h>
#include <aws/elasticloadbalancingv2/model/AddTagsRequest.h>
#include <aws/elasticloadbalancingv2/model/CreateListenerRequest.h>
#include <aws/elasticloadbalancingv2/model/CreateLoadBalancerRequest.h>
#include <aws/elasticloadbalancingv2/model/CreateRuleRequest.h>
#include <aws/elasticloadbalancingv2/model/CreateTargetGroupRequest.h>
#include <aws/elasticloadbalancingv2/model/DeleteListenerRequest.h>
#include <aws/elasticloadbalancingv2/model/DeleteLoadBalancerRequest.h>
#include <aws/elasticloadbalancingv2/model/DeleteRuleRequest.h>
#include <aws/elasticloadbalancingv2/model/DeleteTargetGroupRequest.h>
#include <aws/elasticloadbalancingv2/model/DeregisterTargetsRequest.h>
#include <aws/elasticloadbalancingv2/model/DescribeAccountLimitsRequest.h>
#include <aws/elasticloadbalancingv2/model/DescribeListenerCertificatesRequest.h>
#include <aws/elasticloadbalancingv2/model/DescribeListenersRequest.h>
#include <aws/elasticloadbalancingv2/model/DescribeLoadBalancerAttributesRequest.h>
#include <aws/elasticloadbalancingv2/model/DescribeLoadBalancersRequest.h>
#include <aws/elasticloadbalancingv2/model/DescribeRulesRequest.h>
#include <aws/elasticloadbalancingv2/model/DescribeSSLPoliciesRequest.h>
#include <aws/elasticloadbalancingv2/model/DescribeTagsRequest.h>
#include <aws/elasticloadbalancingv2/model/DescribeTargetGroupAttributesRequest.h>
#include <aws/elasticloadbalancingv2/model/DescribeTargetGroupsRequest.h>
#include <aws/elasticloadbalancingv2/model/DescribeTargetHealthRequest.h>
#include <aws/elasticloadbalancingv2/model/ModifyListenerRequest.h>
#include <aws/elasticloadbalancingv2/model/ModifyLoadBalancerAttributesRequest.h>
#include <aws/elasticloadbalancingv2/model/ModifyRuleRequest.h>
#include <aws/elasticloadbalancingv2/model/ModifyTargetGroupRequest.h>
#include <aws/elasticloadbalancingv2/model/ModifyTargetGroupAttributesRequest.h>
#include <aws/elasticloadbalancingv2/model/RegisterTargetsRequest.h>
#include <aws/elasticloadbalancingv2/model/RemoveListenerCertificatesRequest.h>
#include <aws/elasticloadbalancingv2/model/RemoveTagsRequest.h>
#include <aws/elasticloadbalancingv2/model/SetIpAddressTypeRequest.h>
#include <aws/elasticloadbalancingv2/model/SetRulePrioritiesRequest.h>
#include <aws/elasticloadbalancingv2/model/SetSecurityGroupsRequest.h>
#include <aws/elasticloadbalancingv2/model/SetSubnetsRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ElasticLoadBalancingv2;
using namespace Aws::ElasticLoadBalancingv2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;


static const char* SERVICE_NAME = "elasticloadbalancing";
static const char* ALLOCATION_TAG = "ElasticLoadBalancingv2Client";


ElasticLoadBalancingv2Client::ElasticLoadBalancingv2Client(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ElasticLoadBalancingv2ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElasticLoadBalancingv2Client::ElasticLoadBalancingv2Client(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ElasticLoadBalancingv2ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElasticLoadBalancingv2Client::ElasticLoadBalancingv2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ElasticLoadBalancingv2ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElasticLoadBalancingv2Client::~ElasticLoadBalancingv2Client()
{
}

void ElasticLoadBalancingv2Client::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ElasticLoadBalancingv2Endpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ElasticLoadBalancingv2Client::OverrideEndpoint(const Aws::String& endpoint)
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

Aws::String ElasticLoadBalancingv2Client::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const
{
  Aws::StringStream ss;
  ss << "https://" << ElasticLoadBalancingv2Endpoint::ForRegion(region);
  ss << "?" << requestToConvert.SerializePayload();

  URI uri(ss.str());
  return GeneratePresignedUrl(uri, HttpMethod::HTTP_GET, region, 3600);
}

AddListenerCertificatesOutcome ElasticLoadBalancingv2Client::AddListenerCertificates(const AddListenerCertificatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AddListenerCertificatesOutcome(AddListenerCertificatesResult(outcome.GetResult()));
  }
  else
  {
    return AddListenerCertificatesOutcome(outcome.GetError());
  }
}

AddListenerCertificatesOutcomeCallable ElasticLoadBalancingv2Client::AddListenerCertificatesCallable(const AddListenerCertificatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddListenerCertificatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddListenerCertificates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2Client::AddListenerCertificatesAsync(const AddListenerCertificatesRequest& request, const AddListenerCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddListenerCertificatesAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingv2Client::AddListenerCertificatesAsyncHelper(const AddListenerCertificatesRequest& request, const AddListenerCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddListenerCertificates(request), context);
}

AddTagsOutcome ElasticLoadBalancingv2Client::AddTags(const AddTagsRequest& request) const
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

AddTagsOutcomeCallable ElasticLoadBalancingv2Client::AddTagsCallable(const AddTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2Client::AddTagsAsync(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddTagsAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingv2Client::AddTagsAsyncHelper(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddTags(request), context);
}

CreateListenerOutcome ElasticLoadBalancingv2Client::CreateListener(const CreateListenerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateListenerOutcome(CreateListenerResult(outcome.GetResult()));
  }
  else
  {
    return CreateListenerOutcome(outcome.GetError());
  }
}

CreateListenerOutcomeCallable ElasticLoadBalancingv2Client::CreateListenerCallable(const CreateListenerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateListenerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateListener(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2Client::CreateListenerAsync(const CreateListenerRequest& request, const CreateListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateListenerAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingv2Client::CreateListenerAsyncHelper(const CreateListenerRequest& request, const CreateListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateListener(request), context);
}

CreateLoadBalancerOutcome ElasticLoadBalancingv2Client::CreateLoadBalancer(const CreateLoadBalancerRequest& request) const
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

CreateLoadBalancerOutcomeCallable ElasticLoadBalancingv2Client::CreateLoadBalancerCallable(const CreateLoadBalancerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLoadBalancerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLoadBalancer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2Client::CreateLoadBalancerAsync(const CreateLoadBalancerRequest& request, const CreateLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateLoadBalancerAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingv2Client::CreateLoadBalancerAsyncHelper(const CreateLoadBalancerRequest& request, const CreateLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateLoadBalancer(request), context);
}

CreateRuleOutcome ElasticLoadBalancingv2Client::CreateRule(const CreateRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateRuleOutcome(CreateRuleResult(outcome.GetResult()));
  }
  else
  {
    return CreateRuleOutcome(outcome.GetError());
  }
}

CreateRuleOutcomeCallable ElasticLoadBalancingv2Client::CreateRuleCallable(const CreateRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2Client::CreateRuleAsync(const CreateRuleRequest& request, const CreateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateRuleAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingv2Client::CreateRuleAsyncHelper(const CreateRuleRequest& request, const CreateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRule(request), context);
}

CreateTargetGroupOutcome ElasticLoadBalancingv2Client::CreateTargetGroup(const CreateTargetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateTargetGroupOutcome(CreateTargetGroupResult(outcome.GetResult()));
  }
  else
  {
    return CreateTargetGroupOutcome(outcome.GetError());
  }
}

CreateTargetGroupOutcomeCallable ElasticLoadBalancingv2Client::CreateTargetGroupCallable(const CreateTargetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTargetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTargetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2Client::CreateTargetGroupAsync(const CreateTargetGroupRequest& request, const CreateTargetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTargetGroupAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingv2Client::CreateTargetGroupAsyncHelper(const CreateTargetGroupRequest& request, const CreateTargetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTargetGroup(request), context);
}

DeleteListenerOutcome ElasticLoadBalancingv2Client::DeleteListener(const DeleteListenerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteListenerOutcome(DeleteListenerResult(outcome.GetResult()));
  }
  else
  {
    return DeleteListenerOutcome(outcome.GetError());
  }
}

DeleteListenerOutcomeCallable ElasticLoadBalancingv2Client::DeleteListenerCallable(const DeleteListenerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteListenerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteListener(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2Client::DeleteListenerAsync(const DeleteListenerRequest& request, const DeleteListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteListenerAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingv2Client::DeleteListenerAsyncHelper(const DeleteListenerRequest& request, const DeleteListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteListener(request), context);
}

DeleteLoadBalancerOutcome ElasticLoadBalancingv2Client::DeleteLoadBalancer(const DeleteLoadBalancerRequest& request) const
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

DeleteLoadBalancerOutcomeCallable ElasticLoadBalancingv2Client::DeleteLoadBalancerCallable(const DeleteLoadBalancerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLoadBalancerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLoadBalancer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2Client::DeleteLoadBalancerAsync(const DeleteLoadBalancerRequest& request, const DeleteLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteLoadBalancerAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingv2Client::DeleteLoadBalancerAsyncHelper(const DeleteLoadBalancerRequest& request, const DeleteLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteLoadBalancer(request), context);
}

DeleteRuleOutcome ElasticLoadBalancingv2Client::DeleteRule(const DeleteRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteRuleOutcome(DeleteRuleResult(outcome.GetResult()));
  }
  else
  {
    return DeleteRuleOutcome(outcome.GetError());
  }
}

DeleteRuleOutcomeCallable ElasticLoadBalancingv2Client::DeleteRuleCallable(const DeleteRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2Client::DeleteRuleAsync(const DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRuleAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingv2Client::DeleteRuleAsyncHelper(const DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRule(request), context);
}

DeleteTargetGroupOutcome ElasticLoadBalancingv2Client::DeleteTargetGroup(const DeleteTargetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteTargetGroupOutcome(DeleteTargetGroupResult(outcome.GetResult()));
  }
  else
  {
    return DeleteTargetGroupOutcome(outcome.GetError());
  }
}

DeleteTargetGroupOutcomeCallable ElasticLoadBalancingv2Client::DeleteTargetGroupCallable(const DeleteTargetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTargetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTargetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2Client::DeleteTargetGroupAsync(const DeleteTargetGroupRequest& request, const DeleteTargetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTargetGroupAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingv2Client::DeleteTargetGroupAsyncHelper(const DeleteTargetGroupRequest& request, const DeleteTargetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTargetGroup(request), context);
}

DeregisterTargetsOutcome ElasticLoadBalancingv2Client::DeregisterTargets(const DeregisterTargetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeregisterTargetsOutcome(DeregisterTargetsResult(outcome.GetResult()));
  }
  else
  {
    return DeregisterTargetsOutcome(outcome.GetError());
  }
}

DeregisterTargetsOutcomeCallable ElasticLoadBalancingv2Client::DeregisterTargetsCallable(const DeregisterTargetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2Client::DeregisterTargetsAsync(const DeregisterTargetsRequest& request, const DeregisterTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeregisterTargetsAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingv2Client::DeregisterTargetsAsyncHelper(const DeregisterTargetsRequest& request, const DeregisterTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeregisterTargets(request), context);
}

DescribeAccountLimitsOutcome ElasticLoadBalancingv2Client::DescribeAccountLimits(const DescribeAccountLimitsRequest& request) const
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

DescribeAccountLimitsOutcomeCallable ElasticLoadBalancingv2Client::DescribeAccountLimitsCallable(const DescribeAccountLimitsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountLimitsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountLimits(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2Client::DescribeAccountLimitsAsync(const DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAccountLimitsAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingv2Client::DescribeAccountLimitsAsyncHelper(const DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAccountLimits(request), context);
}

DescribeListenerCertificatesOutcome ElasticLoadBalancingv2Client::DescribeListenerCertificates(const DescribeListenerCertificatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeListenerCertificatesOutcome(DescribeListenerCertificatesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeListenerCertificatesOutcome(outcome.GetError());
  }
}

DescribeListenerCertificatesOutcomeCallable ElasticLoadBalancingv2Client::DescribeListenerCertificatesCallable(const DescribeListenerCertificatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeListenerCertificatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeListenerCertificates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2Client::DescribeListenerCertificatesAsync(const DescribeListenerCertificatesRequest& request, const DescribeListenerCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeListenerCertificatesAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingv2Client::DescribeListenerCertificatesAsyncHelper(const DescribeListenerCertificatesRequest& request, const DescribeListenerCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeListenerCertificates(request), context);
}

DescribeListenersOutcome ElasticLoadBalancingv2Client::DescribeListeners(const DescribeListenersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeListenersOutcome(DescribeListenersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeListenersOutcome(outcome.GetError());
  }
}

DescribeListenersOutcomeCallable ElasticLoadBalancingv2Client::DescribeListenersCallable(const DescribeListenersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeListenersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeListeners(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2Client::DescribeListenersAsync(const DescribeListenersRequest& request, const DescribeListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeListenersAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingv2Client::DescribeListenersAsyncHelper(const DescribeListenersRequest& request, const DescribeListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeListeners(request), context);
}

DescribeLoadBalancerAttributesOutcome ElasticLoadBalancingv2Client::DescribeLoadBalancerAttributes(const DescribeLoadBalancerAttributesRequest& request) const
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

DescribeLoadBalancerAttributesOutcomeCallable ElasticLoadBalancingv2Client::DescribeLoadBalancerAttributesCallable(const DescribeLoadBalancerAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLoadBalancerAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLoadBalancerAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2Client::DescribeLoadBalancerAttributesAsync(const DescribeLoadBalancerAttributesRequest& request, const DescribeLoadBalancerAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeLoadBalancerAttributesAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingv2Client::DescribeLoadBalancerAttributesAsyncHelper(const DescribeLoadBalancerAttributesRequest& request, const DescribeLoadBalancerAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeLoadBalancerAttributes(request), context);
}

DescribeLoadBalancersOutcome ElasticLoadBalancingv2Client::DescribeLoadBalancers(const DescribeLoadBalancersRequest& request) const
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

DescribeLoadBalancersOutcomeCallable ElasticLoadBalancingv2Client::DescribeLoadBalancersCallable(const DescribeLoadBalancersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLoadBalancersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLoadBalancers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2Client::DescribeLoadBalancersAsync(const DescribeLoadBalancersRequest& request, const DescribeLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeLoadBalancersAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingv2Client::DescribeLoadBalancersAsyncHelper(const DescribeLoadBalancersRequest& request, const DescribeLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeLoadBalancers(request), context);
}

DescribeRulesOutcome ElasticLoadBalancingv2Client::DescribeRules(const DescribeRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeRulesOutcome(DescribeRulesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeRulesOutcome(outcome.GetError());
  }
}

DescribeRulesOutcomeCallable ElasticLoadBalancingv2Client::DescribeRulesCallable(const DescribeRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2Client::DescribeRulesAsync(const DescribeRulesRequest& request, const DescribeRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeRulesAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingv2Client::DescribeRulesAsyncHelper(const DescribeRulesRequest& request, const DescribeRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRules(request), context);
}

DescribeSSLPoliciesOutcome ElasticLoadBalancingv2Client::DescribeSSLPolicies(const DescribeSSLPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeSSLPoliciesOutcome(DescribeSSLPoliciesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeSSLPoliciesOutcome(outcome.GetError());
  }
}

DescribeSSLPoliciesOutcomeCallable ElasticLoadBalancingv2Client::DescribeSSLPoliciesCallable(const DescribeSSLPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSSLPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSSLPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2Client::DescribeSSLPoliciesAsync(const DescribeSSLPoliciesRequest& request, const DescribeSSLPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSSLPoliciesAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingv2Client::DescribeSSLPoliciesAsyncHelper(const DescribeSSLPoliciesRequest& request, const DescribeSSLPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSSLPolicies(request), context);
}

DescribeTagsOutcome ElasticLoadBalancingv2Client::DescribeTags(const DescribeTagsRequest& request) const
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

DescribeTagsOutcomeCallable ElasticLoadBalancingv2Client::DescribeTagsCallable(const DescribeTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2Client::DescribeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTagsAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingv2Client::DescribeTagsAsyncHelper(const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTags(request), context);
}

DescribeTargetGroupAttributesOutcome ElasticLoadBalancingv2Client::DescribeTargetGroupAttributes(const DescribeTargetGroupAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeTargetGroupAttributesOutcome(DescribeTargetGroupAttributesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTargetGroupAttributesOutcome(outcome.GetError());
  }
}

DescribeTargetGroupAttributesOutcomeCallable ElasticLoadBalancingv2Client::DescribeTargetGroupAttributesCallable(const DescribeTargetGroupAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTargetGroupAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTargetGroupAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2Client::DescribeTargetGroupAttributesAsync(const DescribeTargetGroupAttributesRequest& request, const DescribeTargetGroupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTargetGroupAttributesAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingv2Client::DescribeTargetGroupAttributesAsyncHelper(const DescribeTargetGroupAttributesRequest& request, const DescribeTargetGroupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTargetGroupAttributes(request), context);
}

DescribeTargetGroupsOutcome ElasticLoadBalancingv2Client::DescribeTargetGroups(const DescribeTargetGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeTargetGroupsOutcome(DescribeTargetGroupsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTargetGroupsOutcome(outcome.GetError());
  }
}

DescribeTargetGroupsOutcomeCallable ElasticLoadBalancingv2Client::DescribeTargetGroupsCallable(const DescribeTargetGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTargetGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTargetGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2Client::DescribeTargetGroupsAsync(const DescribeTargetGroupsRequest& request, const DescribeTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTargetGroupsAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingv2Client::DescribeTargetGroupsAsyncHelper(const DescribeTargetGroupsRequest& request, const DescribeTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTargetGroups(request), context);
}

DescribeTargetHealthOutcome ElasticLoadBalancingv2Client::DescribeTargetHealth(const DescribeTargetHealthRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeTargetHealthOutcome(DescribeTargetHealthResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTargetHealthOutcome(outcome.GetError());
  }
}

DescribeTargetHealthOutcomeCallable ElasticLoadBalancingv2Client::DescribeTargetHealthCallable(const DescribeTargetHealthRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTargetHealthOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTargetHealth(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2Client::DescribeTargetHealthAsync(const DescribeTargetHealthRequest& request, const DescribeTargetHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTargetHealthAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingv2Client::DescribeTargetHealthAsyncHelper(const DescribeTargetHealthRequest& request, const DescribeTargetHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTargetHealth(request), context);
}

ModifyListenerOutcome ElasticLoadBalancingv2Client::ModifyListener(const ModifyListenerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyListenerOutcome(ModifyListenerResult(outcome.GetResult()));
  }
  else
  {
    return ModifyListenerOutcome(outcome.GetError());
  }
}

ModifyListenerOutcomeCallable ElasticLoadBalancingv2Client::ModifyListenerCallable(const ModifyListenerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyListenerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyListener(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2Client::ModifyListenerAsync(const ModifyListenerRequest& request, const ModifyListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyListenerAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingv2Client::ModifyListenerAsyncHelper(const ModifyListenerRequest& request, const ModifyListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyListener(request), context);
}

ModifyLoadBalancerAttributesOutcome ElasticLoadBalancingv2Client::ModifyLoadBalancerAttributes(const ModifyLoadBalancerAttributesRequest& request) const
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

ModifyLoadBalancerAttributesOutcomeCallable ElasticLoadBalancingv2Client::ModifyLoadBalancerAttributesCallable(const ModifyLoadBalancerAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyLoadBalancerAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyLoadBalancerAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2Client::ModifyLoadBalancerAttributesAsync(const ModifyLoadBalancerAttributesRequest& request, const ModifyLoadBalancerAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyLoadBalancerAttributesAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingv2Client::ModifyLoadBalancerAttributesAsyncHelper(const ModifyLoadBalancerAttributesRequest& request, const ModifyLoadBalancerAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyLoadBalancerAttributes(request), context);
}

ModifyRuleOutcome ElasticLoadBalancingv2Client::ModifyRule(const ModifyRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyRuleOutcome(ModifyRuleResult(outcome.GetResult()));
  }
  else
  {
    return ModifyRuleOutcome(outcome.GetError());
  }
}

ModifyRuleOutcomeCallable ElasticLoadBalancingv2Client::ModifyRuleCallable(const ModifyRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2Client::ModifyRuleAsync(const ModifyRuleRequest& request, const ModifyRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyRuleAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingv2Client::ModifyRuleAsyncHelper(const ModifyRuleRequest& request, const ModifyRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyRule(request), context);
}

ModifyTargetGroupOutcome ElasticLoadBalancingv2Client::ModifyTargetGroup(const ModifyTargetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyTargetGroupOutcome(ModifyTargetGroupResult(outcome.GetResult()));
  }
  else
  {
    return ModifyTargetGroupOutcome(outcome.GetError());
  }
}

ModifyTargetGroupOutcomeCallable ElasticLoadBalancingv2Client::ModifyTargetGroupCallable(const ModifyTargetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyTargetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyTargetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2Client::ModifyTargetGroupAsync(const ModifyTargetGroupRequest& request, const ModifyTargetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyTargetGroupAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingv2Client::ModifyTargetGroupAsyncHelper(const ModifyTargetGroupRequest& request, const ModifyTargetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyTargetGroup(request), context);
}

ModifyTargetGroupAttributesOutcome ElasticLoadBalancingv2Client::ModifyTargetGroupAttributes(const ModifyTargetGroupAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ModifyTargetGroupAttributesOutcome(ModifyTargetGroupAttributesResult(outcome.GetResult()));
  }
  else
  {
    return ModifyTargetGroupAttributesOutcome(outcome.GetError());
  }
}

ModifyTargetGroupAttributesOutcomeCallable ElasticLoadBalancingv2Client::ModifyTargetGroupAttributesCallable(const ModifyTargetGroupAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyTargetGroupAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyTargetGroupAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2Client::ModifyTargetGroupAttributesAsync(const ModifyTargetGroupAttributesRequest& request, const ModifyTargetGroupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ModifyTargetGroupAttributesAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingv2Client::ModifyTargetGroupAttributesAsyncHelper(const ModifyTargetGroupAttributesRequest& request, const ModifyTargetGroupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ModifyTargetGroupAttributes(request), context);
}

RegisterTargetsOutcome ElasticLoadBalancingv2Client::RegisterTargets(const RegisterTargetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RegisterTargetsOutcome(RegisterTargetsResult(outcome.GetResult()));
  }
  else
  {
    return RegisterTargetsOutcome(outcome.GetError());
  }
}

RegisterTargetsOutcomeCallable ElasticLoadBalancingv2Client::RegisterTargetsCallable(const RegisterTargetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2Client::RegisterTargetsAsync(const RegisterTargetsRequest& request, const RegisterTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RegisterTargetsAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingv2Client::RegisterTargetsAsyncHelper(const RegisterTargetsRequest& request, const RegisterTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterTargets(request), context);
}

RemoveListenerCertificatesOutcome ElasticLoadBalancingv2Client::RemoveListenerCertificates(const RemoveListenerCertificatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RemoveListenerCertificatesOutcome(RemoveListenerCertificatesResult(outcome.GetResult()));
  }
  else
  {
    return RemoveListenerCertificatesOutcome(outcome.GetError());
  }
}

RemoveListenerCertificatesOutcomeCallable ElasticLoadBalancingv2Client::RemoveListenerCertificatesCallable(const RemoveListenerCertificatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveListenerCertificatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveListenerCertificates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2Client::RemoveListenerCertificatesAsync(const RemoveListenerCertificatesRequest& request, const RemoveListenerCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveListenerCertificatesAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingv2Client::RemoveListenerCertificatesAsyncHelper(const RemoveListenerCertificatesRequest& request, const RemoveListenerCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveListenerCertificates(request), context);
}

RemoveTagsOutcome ElasticLoadBalancingv2Client::RemoveTags(const RemoveTagsRequest& request) const
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

RemoveTagsOutcomeCallable ElasticLoadBalancingv2Client::RemoveTagsCallable(const RemoveTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2Client::RemoveTagsAsync(const RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveTagsAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingv2Client::RemoveTagsAsyncHelper(const RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveTags(request), context);
}

SetIpAddressTypeOutcome ElasticLoadBalancingv2Client::SetIpAddressType(const SetIpAddressTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetIpAddressTypeOutcome(SetIpAddressTypeResult(outcome.GetResult()));
  }
  else
  {
    return SetIpAddressTypeOutcome(outcome.GetError());
  }
}

SetIpAddressTypeOutcomeCallable ElasticLoadBalancingv2Client::SetIpAddressTypeCallable(const SetIpAddressTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetIpAddressTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetIpAddressType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2Client::SetIpAddressTypeAsync(const SetIpAddressTypeRequest& request, const SetIpAddressTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetIpAddressTypeAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingv2Client::SetIpAddressTypeAsyncHelper(const SetIpAddressTypeRequest& request, const SetIpAddressTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetIpAddressType(request), context);
}

SetRulePrioritiesOutcome ElasticLoadBalancingv2Client::SetRulePriorities(const SetRulePrioritiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetRulePrioritiesOutcome(SetRulePrioritiesResult(outcome.GetResult()));
  }
  else
  {
    return SetRulePrioritiesOutcome(outcome.GetError());
  }
}

SetRulePrioritiesOutcomeCallable ElasticLoadBalancingv2Client::SetRulePrioritiesCallable(const SetRulePrioritiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetRulePrioritiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetRulePriorities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2Client::SetRulePrioritiesAsync(const SetRulePrioritiesRequest& request, const SetRulePrioritiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetRulePrioritiesAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingv2Client::SetRulePrioritiesAsyncHelper(const SetRulePrioritiesRequest& request, const SetRulePrioritiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetRulePriorities(request), context);
}

SetSecurityGroupsOutcome ElasticLoadBalancingv2Client::SetSecurityGroups(const SetSecurityGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetSecurityGroupsOutcome(SetSecurityGroupsResult(outcome.GetResult()));
  }
  else
  {
    return SetSecurityGroupsOutcome(outcome.GetError());
  }
}

SetSecurityGroupsOutcomeCallable ElasticLoadBalancingv2Client::SetSecurityGroupsCallable(const SetSecurityGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetSecurityGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetSecurityGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2Client::SetSecurityGroupsAsync(const SetSecurityGroupsRequest& request, const SetSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetSecurityGroupsAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingv2Client::SetSecurityGroupsAsyncHelper(const SetSecurityGroupsRequest& request, const SetSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetSecurityGroups(request), context);
}

SetSubnetsOutcome ElasticLoadBalancingv2Client::SetSubnets(const SetSubnetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return SetSubnetsOutcome(SetSubnetsResult(outcome.GetResult()));
  }
  else
  {
    return SetSubnetsOutcome(outcome.GetError());
  }
}

SetSubnetsOutcomeCallable ElasticLoadBalancingv2Client::SetSubnetsCallable(const SetSubnetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetSubnetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetSubnets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2Client::SetSubnetsAsync(const SetSubnetsRequest& request, const SetSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetSubnetsAsyncHelper( request, handler, context ); } );
}

void ElasticLoadBalancingv2Client::SetSubnetsAsyncHelper(const SetSubnetsRequest& request, const SetSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetSubnets(request), context);
}



