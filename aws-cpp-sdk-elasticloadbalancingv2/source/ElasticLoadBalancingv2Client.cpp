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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElasticLoadBalancingv2ErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElasticLoadBalancingv2Client::ElasticLoadBalancingv2Client(const AWSCredentials& credentials,
                                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElasticLoadBalancingv2ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElasticLoadBalancingv2Client::ElasticLoadBalancingv2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ElasticLoadBalancingv2ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ElasticLoadBalancingv2Client::~ElasticLoadBalancingv2Client()
{
}

void ElasticLoadBalancingv2Client::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Elastic Load Balancing v2");
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
  return GeneratePresignedUrl(uri, Aws::Http::HttpMethod::HTTP_GET, region, 3600);
}

AddListenerCertificatesOutcome ElasticLoadBalancingv2Client::AddListenerCertificates(const AddListenerCertificatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddListenerCertificatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AddListenerCertificatesOutcomeCallable ElasticLoadBalancingv2Client::AddListenerCertificatesCallable(const AddListenerCertificatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddListenerCertificatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddListenerCertificates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2ClientAddListenerCertificatesAsyncHelper(ElasticLoadBalancingv2Client const * const clientThis, const AddListenerCertificatesRequest& request, const AddListenerCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddListenerCertificates(request), context);
}

void ElasticLoadBalancingv2Client::AddListenerCertificatesAsync(const AddListenerCertificatesRequest& request, const AddListenerCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingv2ClientAddListenerCertificatesAsyncHelper( this, request, handler, context ); } );
}

AddTagsOutcome ElasticLoadBalancingv2Client::AddTags(const AddTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AddTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

AddTagsOutcomeCallable ElasticLoadBalancingv2Client::AddTagsCallable(const AddTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2ClientAddTagsAsyncHelper(ElasticLoadBalancingv2Client const * const clientThis, const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddTags(request), context);
}

void ElasticLoadBalancingv2Client::AddTagsAsync(const AddTagsRequest& request, const AddTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingv2ClientAddTagsAsyncHelper( this, request, handler, context ); } );
}

CreateListenerOutcome ElasticLoadBalancingv2Client::CreateListener(const CreateListenerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateListenerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateListenerOutcomeCallable ElasticLoadBalancingv2Client::CreateListenerCallable(const CreateListenerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateListenerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateListener(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2ClientCreateListenerAsyncHelper(ElasticLoadBalancingv2Client const * const clientThis, const CreateListenerRequest& request, const CreateListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateListener(request), context);
}

void ElasticLoadBalancingv2Client::CreateListenerAsync(const CreateListenerRequest& request, const CreateListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingv2ClientCreateListenerAsyncHelper( this, request, handler, context ); } );
}

CreateLoadBalancerOutcome ElasticLoadBalancingv2Client::CreateLoadBalancer(const CreateLoadBalancerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateLoadBalancerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateLoadBalancerOutcomeCallable ElasticLoadBalancingv2Client::CreateLoadBalancerCallable(const CreateLoadBalancerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLoadBalancerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLoadBalancer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2ClientCreateLoadBalancerAsyncHelper(ElasticLoadBalancingv2Client const * const clientThis, const CreateLoadBalancerRequest& request, const CreateLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateLoadBalancer(request), context);
}

void ElasticLoadBalancingv2Client::CreateLoadBalancerAsync(const CreateLoadBalancerRequest& request, const CreateLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingv2ClientCreateLoadBalancerAsyncHelper( this, request, handler, context ); } );
}

CreateRuleOutcome ElasticLoadBalancingv2Client::CreateRule(const CreateRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateRuleOutcomeCallable ElasticLoadBalancingv2Client::CreateRuleCallable(const CreateRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2ClientCreateRuleAsyncHelper(ElasticLoadBalancingv2Client const * const clientThis, const CreateRuleRequest& request, const CreateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateRule(request), context);
}

void ElasticLoadBalancingv2Client::CreateRuleAsync(const CreateRuleRequest& request, const CreateRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingv2ClientCreateRuleAsyncHelper( this, request, handler, context ); } );
}

CreateTargetGroupOutcome ElasticLoadBalancingv2Client::CreateTargetGroup(const CreateTargetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateTargetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateTargetGroupOutcomeCallable ElasticLoadBalancingv2Client::CreateTargetGroupCallable(const CreateTargetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTargetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTargetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2ClientCreateTargetGroupAsyncHelper(ElasticLoadBalancingv2Client const * const clientThis, const CreateTargetGroupRequest& request, const CreateTargetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateTargetGroup(request), context);
}

void ElasticLoadBalancingv2Client::CreateTargetGroupAsync(const CreateTargetGroupRequest& request, const CreateTargetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingv2ClientCreateTargetGroupAsyncHelper( this, request, handler, context ); } );
}

DeleteListenerOutcome ElasticLoadBalancingv2Client::DeleteListener(const DeleteListenerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteListenerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteListenerOutcomeCallable ElasticLoadBalancingv2Client::DeleteListenerCallable(const DeleteListenerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteListenerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteListener(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2ClientDeleteListenerAsyncHelper(ElasticLoadBalancingv2Client const * const clientThis, const DeleteListenerRequest& request, const DeleteListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteListener(request), context);
}

void ElasticLoadBalancingv2Client::DeleteListenerAsync(const DeleteListenerRequest& request, const DeleteListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingv2ClientDeleteListenerAsyncHelper( this, request, handler, context ); } );
}

DeleteLoadBalancerOutcome ElasticLoadBalancingv2Client::DeleteLoadBalancer(const DeleteLoadBalancerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteLoadBalancerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteLoadBalancerOutcomeCallable ElasticLoadBalancingv2Client::DeleteLoadBalancerCallable(const DeleteLoadBalancerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLoadBalancerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLoadBalancer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2ClientDeleteLoadBalancerAsyncHelper(ElasticLoadBalancingv2Client const * const clientThis, const DeleteLoadBalancerRequest& request, const DeleteLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteLoadBalancer(request), context);
}

void ElasticLoadBalancingv2Client::DeleteLoadBalancerAsync(const DeleteLoadBalancerRequest& request, const DeleteLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingv2ClientDeleteLoadBalancerAsyncHelper( this, request, handler, context ); } );
}

DeleteRuleOutcome ElasticLoadBalancingv2Client::DeleteRule(const DeleteRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteRuleOutcomeCallable ElasticLoadBalancingv2Client::DeleteRuleCallable(const DeleteRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2ClientDeleteRuleAsyncHelper(ElasticLoadBalancingv2Client const * const clientThis, const DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRule(request), context);
}

void ElasticLoadBalancingv2Client::DeleteRuleAsync(const DeleteRuleRequest& request, const DeleteRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingv2ClientDeleteRuleAsyncHelper( this, request, handler, context ); } );
}

DeleteTargetGroupOutcome ElasticLoadBalancingv2Client::DeleteTargetGroup(const DeleteTargetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteTargetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteTargetGroupOutcomeCallable ElasticLoadBalancingv2Client::DeleteTargetGroupCallable(const DeleteTargetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTargetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTargetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2ClientDeleteTargetGroupAsyncHelper(ElasticLoadBalancingv2Client const * const clientThis, const DeleteTargetGroupRequest& request, const DeleteTargetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteTargetGroup(request), context);
}

void ElasticLoadBalancingv2Client::DeleteTargetGroupAsync(const DeleteTargetGroupRequest& request, const DeleteTargetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingv2ClientDeleteTargetGroupAsyncHelper( this, request, handler, context ); } );
}

DeregisterTargetsOutcome ElasticLoadBalancingv2Client::DeregisterTargets(const DeregisterTargetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeregisterTargetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeregisterTargetsOutcomeCallable ElasticLoadBalancingv2Client::DeregisterTargetsCallable(const DeregisterTargetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2ClientDeregisterTargetsAsyncHelper(ElasticLoadBalancingv2Client const * const clientThis, const DeregisterTargetsRequest& request, const DeregisterTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeregisterTargets(request), context);
}

void ElasticLoadBalancingv2Client::DeregisterTargetsAsync(const DeregisterTargetsRequest& request, const DeregisterTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingv2ClientDeregisterTargetsAsyncHelper( this, request, handler, context ); } );
}

DescribeAccountLimitsOutcome ElasticLoadBalancingv2Client::DescribeAccountLimits(const DescribeAccountLimitsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAccountLimitsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAccountLimitsOutcomeCallable ElasticLoadBalancingv2Client::DescribeAccountLimitsCallable(const DescribeAccountLimitsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAccountLimitsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAccountLimits(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2ClientDescribeAccountLimitsAsyncHelper(ElasticLoadBalancingv2Client const * const clientThis, const DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAccountLimits(request), context);
}

void ElasticLoadBalancingv2Client::DescribeAccountLimitsAsync(const DescribeAccountLimitsRequest& request, const DescribeAccountLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingv2ClientDescribeAccountLimitsAsyncHelper( this, request, handler, context ); } );
}

DescribeListenerCertificatesOutcome ElasticLoadBalancingv2Client::DescribeListenerCertificates(const DescribeListenerCertificatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeListenerCertificatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeListenerCertificatesOutcomeCallable ElasticLoadBalancingv2Client::DescribeListenerCertificatesCallable(const DescribeListenerCertificatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeListenerCertificatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeListenerCertificates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2ClientDescribeListenerCertificatesAsyncHelper(ElasticLoadBalancingv2Client const * const clientThis, const DescribeListenerCertificatesRequest& request, const DescribeListenerCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeListenerCertificates(request), context);
}

void ElasticLoadBalancingv2Client::DescribeListenerCertificatesAsync(const DescribeListenerCertificatesRequest& request, const DescribeListenerCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingv2ClientDescribeListenerCertificatesAsyncHelper( this, request, handler, context ); } );
}

DescribeListenersOutcome ElasticLoadBalancingv2Client::DescribeListeners(const DescribeListenersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeListenersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeListenersOutcomeCallable ElasticLoadBalancingv2Client::DescribeListenersCallable(const DescribeListenersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeListenersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeListeners(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2ClientDescribeListenersAsyncHelper(ElasticLoadBalancingv2Client const * const clientThis, const DescribeListenersRequest& request, const DescribeListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeListeners(request), context);
}

void ElasticLoadBalancingv2Client::DescribeListenersAsync(const DescribeListenersRequest& request, const DescribeListenersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingv2ClientDescribeListenersAsyncHelper( this, request, handler, context ); } );
}

DescribeLoadBalancerAttributesOutcome ElasticLoadBalancingv2Client::DescribeLoadBalancerAttributes(const DescribeLoadBalancerAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeLoadBalancerAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeLoadBalancerAttributesOutcomeCallable ElasticLoadBalancingv2Client::DescribeLoadBalancerAttributesCallable(const DescribeLoadBalancerAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLoadBalancerAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLoadBalancerAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2ClientDescribeLoadBalancerAttributesAsyncHelper(ElasticLoadBalancingv2Client const * const clientThis, const DescribeLoadBalancerAttributesRequest& request, const DescribeLoadBalancerAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeLoadBalancerAttributes(request), context);
}

void ElasticLoadBalancingv2Client::DescribeLoadBalancerAttributesAsync(const DescribeLoadBalancerAttributesRequest& request, const DescribeLoadBalancerAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingv2ClientDescribeLoadBalancerAttributesAsyncHelper( this, request, handler, context ); } );
}

DescribeLoadBalancersOutcome ElasticLoadBalancingv2Client::DescribeLoadBalancers(const DescribeLoadBalancersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeLoadBalancersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeLoadBalancersOutcomeCallable ElasticLoadBalancingv2Client::DescribeLoadBalancersCallable(const DescribeLoadBalancersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeLoadBalancersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeLoadBalancers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2ClientDescribeLoadBalancersAsyncHelper(ElasticLoadBalancingv2Client const * const clientThis, const DescribeLoadBalancersRequest& request, const DescribeLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeLoadBalancers(request), context);
}

void ElasticLoadBalancingv2Client::DescribeLoadBalancersAsync(const DescribeLoadBalancersRequest& request, const DescribeLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingv2ClientDescribeLoadBalancersAsyncHelper( this, request, handler, context ); } );
}

DescribeRulesOutcome ElasticLoadBalancingv2Client::DescribeRules(const DescribeRulesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeRulesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeRulesOutcomeCallable ElasticLoadBalancingv2Client::DescribeRulesCallable(const DescribeRulesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRulesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRules(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2ClientDescribeRulesAsyncHelper(ElasticLoadBalancingv2Client const * const clientThis, const DescribeRulesRequest& request, const DescribeRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeRules(request), context);
}

void ElasticLoadBalancingv2Client::DescribeRulesAsync(const DescribeRulesRequest& request, const DescribeRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingv2ClientDescribeRulesAsyncHelper( this, request, handler, context ); } );
}

DescribeSSLPoliciesOutcome ElasticLoadBalancingv2Client::DescribeSSLPolicies(const DescribeSSLPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeSSLPoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeSSLPoliciesOutcomeCallable ElasticLoadBalancingv2Client::DescribeSSLPoliciesCallable(const DescribeSSLPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSSLPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSSLPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2ClientDescribeSSLPoliciesAsyncHelper(ElasticLoadBalancingv2Client const * const clientThis, const DescribeSSLPoliciesRequest& request, const DescribeSSLPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeSSLPolicies(request), context);
}

void ElasticLoadBalancingv2Client::DescribeSSLPoliciesAsync(const DescribeSSLPoliciesRequest& request, const DescribeSSLPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingv2ClientDescribeSSLPoliciesAsyncHelper( this, request, handler, context ); } );
}

DescribeTagsOutcome ElasticLoadBalancingv2Client::DescribeTags(const DescribeTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTagsOutcomeCallable ElasticLoadBalancingv2Client::DescribeTagsCallable(const DescribeTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2ClientDescribeTagsAsyncHelper(ElasticLoadBalancingv2Client const * const clientThis, const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTags(request), context);
}

void ElasticLoadBalancingv2Client::DescribeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingv2ClientDescribeTagsAsyncHelper( this, request, handler, context ); } );
}

DescribeTargetGroupAttributesOutcome ElasticLoadBalancingv2Client::DescribeTargetGroupAttributes(const DescribeTargetGroupAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTargetGroupAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTargetGroupAttributesOutcomeCallable ElasticLoadBalancingv2Client::DescribeTargetGroupAttributesCallable(const DescribeTargetGroupAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTargetGroupAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTargetGroupAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2ClientDescribeTargetGroupAttributesAsyncHelper(ElasticLoadBalancingv2Client const * const clientThis, const DescribeTargetGroupAttributesRequest& request, const DescribeTargetGroupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTargetGroupAttributes(request), context);
}

void ElasticLoadBalancingv2Client::DescribeTargetGroupAttributesAsync(const DescribeTargetGroupAttributesRequest& request, const DescribeTargetGroupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingv2ClientDescribeTargetGroupAttributesAsyncHelper( this, request, handler, context ); } );
}

DescribeTargetGroupsOutcome ElasticLoadBalancingv2Client::DescribeTargetGroups(const DescribeTargetGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTargetGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTargetGroupsOutcomeCallable ElasticLoadBalancingv2Client::DescribeTargetGroupsCallable(const DescribeTargetGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTargetGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTargetGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2ClientDescribeTargetGroupsAsyncHelper(ElasticLoadBalancingv2Client const * const clientThis, const DescribeTargetGroupsRequest& request, const DescribeTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTargetGroups(request), context);
}

void ElasticLoadBalancingv2Client::DescribeTargetGroupsAsync(const DescribeTargetGroupsRequest& request, const DescribeTargetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingv2ClientDescribeTargetGroupsAsyncHelper( this, request, handler, context ); } );
}

DescribeTargetHealthOutcome ElasticLoadBalancingv2Client::DescribeTargetHealth(const DescribeTargetHealthRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTargetHealthOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeTargetHealthOutcomeCallable ElasticLoadBalancingv2Client::DescribeTargetHealthCallable(const DescribeTargetHealthRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTargetHealthOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTargetHealth(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2ClientDescribeTargetHealthAsyncHelper(ElasticLoadBalancingv2Client const * const clientThis, const DescribeTargetHealthRequest& request, const DescribeTargetHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTargetHealth(request), context);
}

void ElasticLoadBalancingv2Client::DescribeTargetHealthAsync(const DescribeTargetHealthRequest& request, const DescribeTargetHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingv2ClientDescribeTargetHealthAsyncHelper( this, request, handler, context ); } );
}

ModifyListenerOutcome ElasticLoadBalancingv2Client::ModifyListener(const ModifyListenerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyListenerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyListenerOutcomeCallable ElasticLoadBalancingv2Client::ModifyListenerCallable(const ModifyListenerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyListenerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyListener(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2ClientModifyListenerAsyncHelper(ElasticLoadBalancingv2Client const * const clientThis, const ModifyListenerRequest& request, const ModifyListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyListener(request), context);
}

void ElasticLoadBalancingv2Client::ModifyListenerAsync(const ModifyListenerRequest& request, const ModifyListenerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingv2ClientModifyListenerAsyncHelper( this, request, handler, context ); } );
}

ModifyLoadBalancerAttributesOutcome ElasticLoadBalancingv2Client::ModifyLoadBalancerAttributes(const ModifyLoadBalancerAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyLoadBalancerAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyLoadBalancerAttributesOutcomeCallable ElasticLoadBalancingv2Client::ModifyLoadBalancerAttributesCallable(const ModifyLoadBalancerAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyLoadBalancerAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyLoadBalancerAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2ClientModifyLoadBalancerAttributesAsyncHelper(ElasticLoadBalancingv2Client const * const clientThis, const ModifyLoadBalancerAttributesRequest& request, const ModifyLoadBalancerAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyLoadBalancerAttributes(request), context);
}

void ElasticLoadBalancingv2Client::ModifyLoadBalancerAttributesAsync(const ModifyLoadBalancerAttributesRequest& request, const ModifyLoadBalancerAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingv2ClientModifyLoadBalancerAttributesAsyncHelper( this, request, handler, context ); } );
}

ModifyRuleOutcome ElasticLoadBalancingv2Client::ModifyRule(const ModifyRuleRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyRuleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyRuleOutcomeCallable ElasticLoadBalancingv2Client::ModifyRuleCallable(const ModifyRuleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyRuleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyRule(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2ClientModifyRuleAsyncHelper(ElasticLoadBalancingv2Client const * const clientThis, const ModifyRuleRequest& request, const ModifyRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyRule(request), context);
}

void ElasticLoadBalancingv2Client::ModifyRuleAsync(const ModifyRuleRequest& request, const ModifyRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingv2ClientModifyRuleAsyncHelper( this, request, handler, context ); } );
}

ModifyTargetGroupOutcome ElasticLoadBalancingv2Client::ModifyTargetGroup(const ModifyTargetGroupRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyTargetGroupOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyTargetGroupOutcomeCallable ElasticLoadBalancingv2Client::ModifyTargetGroupCallable(const ModifyTargetGroupRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyTargetGroupOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyTargetGroup(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2ClientModifyTargetGroupAsyncHelper(ElasticLoadBalancingv2Client const * const clientThis, const ModifyTargetGroupRequest& request, const ModifyTargetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyTargetGroup(request), context);
}

void ElasticLoadBalancingv2Client::ModifyTargetGroupAsync(const ModifyTargetGroupRequest& request, const ModifyTargetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingv2ClientModifyTargetGroupAsyncHelper( this, request, handler, context ); } );
}

ModifyTargetGroupAttributesOutcome ElasticLoadBalancingv2Client::ModifyTargetGroupAttributes(const ModifyTargetGroupAttributesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ModifyTargetGroupAttributesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ModifyTargetGroupAttributesOutcomeCallable ElasticLoadBalancingv2Client::ModifyTargetGroupAttributesCallable(const ModifyTargetGroupAttributesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ModifyTargetGroupAttributesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ModifyTargetGroupAttributes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2ClientModifyTargetGroupAttributesAsyncHelper(ElasticLoadBalancingv2Client const * const clientThis, const ModifyTargetGroupAttributesRequest& request, const ModifyTargetGroupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ModifyTargetGroupAttributes(request), context);
}

void ElasticLoadBalancingv2Client::ModifyTargetGroupAttributesAsync(const ModifyTargetGroupAttributesRequest& request, const ModifyTargetGroupAttributesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingv2ClientModifyTargetGroupAttributesAsyncHelper( this, request, handler, context ); } );
}

RegisterTargetsOutcome ElasticLoadBalancingv2Client::RegisterTargets(const RegisterTargetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RegisterTargetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RegisterTargetsOutcomeCallable ElasticLoadBalancingv2Client::RegisterTargetsCallable(const RegisterTargetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2ClientRegisterTargetsAsyncHelper(ElasticLoadBalancingv2Client const * const clientThis, const RegisterTargetsRequest& request, const RegisterTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterTargets(request), context);
}

void ElasticLoadBalancingv2Client::RegisterTargetsAsync(const RegisterTargetsRequest& request, const RegisterTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingv2ClientRegisterTargetsAsyncHelper( this, request, handler, context ); } );
}

RemoveListenerCertificatesOutcome ElasticLoadBalancingv2Client::RemoveListenerCertificates(const RemoveListenerCertificatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveListenerCertificatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RemoveListenerCertificatesOutcomeCallable ElasticLoadBalancingv2Client::RemoveListenerCertificatesCallable(const RemoveListenerCertificatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveListenerCertificatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveListenerCertificates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2ClientRemoveListenerCertificatesAsyncHelper(ElasticLoadBalancingv2Client const * const clientThis, const RemoveListenerCertificatesRequest& request, const RemoveListenerCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveListenerCertificates(request), context);
}

void ElasticLoadBalancingv2Client::RemoveListenerCertificatesAsync(const RemoveListenerCertificatesRequest& request, const RemoveListenerCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingv2ClientRemoveListenerCertificatesAsyncHelper( this, request, handler, context ); } );
}

RemoveTagsOutcome ElasticLoadBalancingv2Client::RemoveTags(const RemoveTagsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RemoveTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

RemoveTagsOutcomeCallable ElasticLoadBalancingv2Client::RemoveTagsCallable(const RemoveTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2ClientRemoveTagsAsyncHelper(ElasticLoadBalancingv2Client const * const clientThis, const RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveTags(request), context);
}

void ElasticLoadBalancingv2Client::RemoveTagsAsync(const RemoveTagsRequest& request, const RemoveTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingv2ClientRemoveTagsAsyncHelper( this, request, handler, context ); } );
}

SetIpAddressTypeOutcome ElasticLoadBalancingv2Client::SetIpAddressType(const SetIpAddressTypeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetIpAddressTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SetIpAddressTypeOutcomeCallable ElasticLoadBalancingv2Client::SetIpAddressTypeCallable(const SetIpAddressTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetIpAddressTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetIpAddressType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2ClientSetIpAddressTypeAsyncHelper(ElasticLoadBalancingv2Client const * const clientThis, const SetIpAddressTypeRequest& request, const SetIpAddressTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetIpAddressType(request), context);
}

void ElasticLoadBalancingv2Client::SetIpAddressTypeAsync(const SetIpAddressTypeRequest& request, const SetIpAddressTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingv2ClientSetIpAddressTypeAsyncHelper( this, request, handler, context ); } );
}

SetRulePrioritiesOutcome ElasticLoadBalancingv2Client::SetRulePriorities(const SetRulePrioritiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetRulePrioritiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SetRulePrioritiesOutcomeCallable ElasticLoadBalancingv2Client::SetRulePrioritiesCallable(const SetRulePrioritiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetRulePrioritiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetRulePriorities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2ClientSetRulePrioritiesAsyncHelper(ElasticLoadBalancingv2Client const * const clientThis, const SetRulePrioritiesRequest& request, const SetRulePrioritiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetRulePriorities(request), context);
}

void ElasticLoadBalancingv2Client::SetRulePrioritiesAsync(const SetRulePrioritiesRequest& request, const SetRulePrioritiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingv2ClientSetRulePrioritiesAsyncHelper( this, request, handler, context ); } );
}

SetSecurityGroupsOutcome ElasticLoadBalancingv2Client::SetSecurityGroups(const SetSecurityGroupsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetSecurityGroupsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SetSecurityGroupsOutcomeCallable ElasticLoadBalancingv2Client::SetSecurityGroupsCallable(const SetSecurityGroupsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetSecurityGroupsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetSecurityGroups(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2ClientSetSecurityGroupsAsyncHelper(ElasticLoadBalancingv2Client const * const clientThis, const SetSecurityGroupsRequest& request, const SetSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetSecurityGroups(request), context);
}

void ElasticLoadBalancingv2Client::SetSecurityGroupsAsync(const SetSecurityGroupsRequest& request, const SetSecurityGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingv2ClientSetSecurityGroupsAsyncHelper( this, request, handler, context ); } );
}

SetSubnetsOutcome ElasticLoadBalancingv2Client::SetSubnets(const SetSubnetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return SetSubnetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

SetSubnetsOutcomeCallable ElasticLoadBalancingv2Client::SetSubnetsCallable(const SetSubnetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetSubnetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetSubnets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ElasticLoadBalancingv2ClientSetSubnetsAsyncHelper(ElasticLoadBalancingv2Client const * const clientThis, const SetSubnetsRequest& request, const SetSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->SetSubnets(request), context);
}

void ElasticLoadBalancingv2Client::SetSubnetsAsync(const SetSubnetsRequest& request, const SetSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ElasticLoadBalancingv2ClientSetSubnetsAsyncHelper( this, request, handler, context ); } );
}

