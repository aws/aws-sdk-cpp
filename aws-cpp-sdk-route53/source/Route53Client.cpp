﻿/*
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
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/route53/Route53Client.h>
#include <aws/route53/Route53Endpoint.h>
#include <aws/route53/Route53ErrorMarshaller.h>
#include <aws/route53/model/AssociateVPCWithHostedZoneRequest.h>
#include <aws/route53/model/ChangeResourceRecordSetsRequest.h>
#include <aws/route53/model/ChangeTagsForResourceRequest.h>
#include <aws/route53/model/CreateHealthCheckRequest.h>
#include <aws/route53/model/CreateHostedZoneRequest.h>
#include <aws/route53/model/CreateReusableDelegationSetRequest.h>
#include <aws/route53/model/CreateTrafficPolicyRequest.h>
#include <aws/route53/model/CreateTrafficPolicyInstanceRequest.h>
#include <aws/route53/model/CreateTrafficPolicyVersionRequest.h>
#include <aws/route53/model/CreateVPCAssociationAuthorizationRequest.h>
#include <aws/route53/model/DeleteHealthCheckRequest.h>
#include <aws/route53/model/DeleteHostedZoneRequest.h>
#include <aws/route53/model/DeleteReusableDelegationSetRequest.h>
#include <aws/route53/model/DeleteTrafficPolicyRequest.h>
#include <aws/route53/model/DeleteTrafficPolicyInstanceRequest.h>
#include <aws/route53/model/DeleteVPCAssociationAuthorizationRequest.h>
#include <aws/route53/model/DisassociateVPCFromHostedZoneRequest.h>
#include <aws/route53/model/GetChangeRequest.h>
#include <aws/route53/model/GetCheckerIpRangesRequest.h>
#include <aws/route53/model/GetGeoLocationRequest.h>
#include <aws/route53/model/GetHealthCheckRequest.h>
#include <aws/route53/model/GetHealthCheckCountRequest.h>
#include <aws/route53/model/GetHealthCheckLastFailureReasonRequest.h>
#include <aws/route53/model/GetHealthCheckStatusRequest.h>
#include <aws/route53/model/GetHostedZoneRequest.h>
#include <aws/route53/model/GetHostedZoneCountRequest.h>
#include <aws/route53/model/GetReusableDelegationSetRequest.h>
#include <aws/route53/model/GetTrafficPolicyRequest.h>
#include <aws/route53/model/GetTrafficPolicyInstanceRequest.h>
#include <aws/route53/model/GetTrafficPolicyInstanceCountRequest.h>
#include <aws/route53/model/ListGeoLocationsRequest.h>
#include <aws/route53/model/ListHealthChecksRequest.h>
#include <aws/route53/model/ListHostedZonesRequest.h>
#include <aws/route53/model/ListHostedZonesByNameRequest.h>
#include <aws/route53/model/ListResourceRecordSetsRequest.h>
#include <aws/route53/model/ListReusableDelegationSetsRequest.h>
#include <aws/route53/model/ListTagsForResourceRequest.h>
#include <aws/route53/model/ListTagsForResourcesRequest.h>
#include <aws/route53/model/ListTrafficPoliciesRequest.h>
#include <aws/route53/model/ListTrafficPolicyInstancesRequest.h>
#include <aws/route53/model/ListTrafficPolicyInstancesByHostedZoneRequest.h>
#include <aws/route53/model/ListTrafficPolicyInstancesByPolicyRequest.h>
#include <aws/route53/model/ListTrafficPolicyVersionsRequest.h>
#include <aws/route53/model/ListVPCAssociationAuthorizationsRequest.h>
#include <aws/route53/model/TestDNSAnswerRequest.h>
#include <aws/route53/model/UpdateHealthCheckRequest.h>
#include <aws/route53/model/UpdateHostedZoneCommentRequest.h>
#include <aws/route53/model/UpdateTrafficPolicyCommentRequest.h>
#include <aws/route53/model/UpdateTrafficPolicyInstanceRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Route53;
using namespace Aws::Route53::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;


static const char* SERVICE_NAME = "route53";
static const char* ALLOCATION_TAG = "Route53Client";


Route53Client::Route53Client(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<Route53ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

Route53Client::Route53Client(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<Route53ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

Route53Client::Route53Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<Route53ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

Route53Client::~Route53Client()
{
}

void Route53Client::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty())
  {
    ss << Route53Endpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}

AssociateVPCWithHostedZoneOutcome Route53Client::AssociateVPCWithHostedZone(const AssociateVPCWithHostedZoneRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/hostedzone/";
  ss << request.GetHostedZoneId();
  ss << "/associatevpc";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return AssociateVPCWithHostedZoneOutcome(AssociateVPCWithHostedZoneResult(outcome.GetResult()));
  }
  else
  {
    return AssociateVPCWithHostedZoneOutcome(outcome.GetError());
  }
}

AssociateVPCWithHostedZoneOutcomeCallable Route53Client::AssociateVPCWithHostedZoneCallable(const AssociateVPCWithHostedZoneRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateVPCWithHostedZoneOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateVPCWithHostedZone(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::AssociateVPCWithHostedZoneAsync(const AssociateVPCWithHostedZoneRequest& request, const AssociateVPCWithHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateVPCWithHostedZoneAsyncHelper( request, handler, context ); } );
}

void Route53Client::AssociateVPCWithHostedZoneAsyncHelper(const AssociateVPCWithHostedZoneRequest& request, const AssociateVPCWithHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateVPCWithHostedZone(request), context);
}

ChangeResourceRecordSetsOutcome Route53Client::ChangeResourceRecordSets(const ChangeResourceRecordSetsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/hostedzone/";
  ss << request.GetHostedZoneId();
  ss << "/rrset/";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ChangeResourceRecordSetsOutcome(ChangeResourceRecordSetsResult(outcome.GetResult()));
  }
  else
  {
    return ChangeResourceRecordSetsOutcome(outcome.GetError());
  }
}

ChangeResourceRecordSetsOutcomeCallable Route53Client::ChangeResourceRecordSetsCallable(const ChangeResourceRecordSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ChangeResourceRecordSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ChangeResourceRecordSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::ChangeResourceRecordSetsAsync(const ChangeResourceRecordSetsRequest& request, const ChangeResourceRecordSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ChangeResourceRecordSetsAsyncHelper( request, handler, context ); } );
}

void Route53Client::ChangeResourceRecordSetsAsyncHelper(const ChangeResourceRecordSetsRequest& request, const ChangeResourceRecordSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ChangeResourceRecordSets(request), context);
}

ChangeTagsForResourceOutcome Route53Client::ChangeTagsForResource(const ChangeTagsForResourceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/tags/";
  ss << TagResourceTypeMapper::GetNameForTagResourceType(request.GetResourceType());
  ss << "/";
  ss << request.GetResourceId();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ChangeTagsForResourceOutcome(ChangeTagsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return ChangeTagsForResourceOutcome(outcome.GetError());
  }
}

ChangeTagsForResourceOutcomeCallable Route53Client::ChangeTagsForResourceCallable(const ChangeTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ChangeTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ChangeTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::ChangeTagsForResourceAsync(const ChangeTagsForResourceRequest& request, const ChangeTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ChangeTagsForResourceAsyncHelper( request, handler, context ); } );
}

void Route53Client::ChangeTagsForResourceAsyncHelper(const ChangeTagsForResourceRequest& request, const ChangeTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ChangeTagsForResource(request), context);
}

CreateHealthCheckOutcome Route53Client::CreateHealthCheck(const CreateHealthCheckRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/healthcheck";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateHealthCheckOutcome(CreateHealthCheckResult(outcome.GetResult()));
  }
  else
  {
    return CreateHealthCheckOutcome(outcome.GetError());
  }
}

CreateHealthCheckOutcomeCallable Route53Client::CreateHealthCheckCallable(const CreateHealthCheckRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateHealthCheckOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateHealthCheck(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::CreateHealthCheckAsync(const CreateHealthCheckRequest& request, const CreateHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateHealthCheckAsyncHelper( request, handler, context ); } );
}

void Route53Client::CreateHealthCheckAsyncHelper(const CreateHealthCheckRequest& request, const CreateHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateHealthCheck(request), context);
}

CreateHostedZoneOutcome Route53Client::CreateHostedZone(const CreateHostedZoneRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/hostedzone";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateHostedZoneOutcome(CreateHostedZoneResult(outcome.GetResult()));
  }
  else
  {
    return CreateHostedZoneOutcome(outcome.GetError());
  }
}

CreateHostedZoneOutcomeCallable Route53Client::CreateHostedZoneCallable(const CreateHostedZoneRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateHostedZoneOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateHostedZone(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::CreateHostedZoneAsync(const CreateHostedZoneRequest& request, const CreateHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateHostedZoneAsyncHelper( request, handler, context ); } );
}

void Route53Client::CreateHostedZoneAsyncHelper(const CreateHostedZoneRequest& request, const CreateHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateHostedZone(request), context);
}

CreateReusableDelegationSetOutcome Route53Client::CreateReusableDelegationSet(const CreateReusableDelegationSetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/delegationset";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateReusableDelegationSetOutcome(CreateReusableDelegationSetResult(outcome.GetResult()));
  }
  else
  {
    return CreateReusableDelegationSetOutcome(outcome.GetError());
  }
}

CreateReusableDelegationSetOutcomeCallable Route53Client::CreateReusableDelegationSetCallable(const CreateReusableDelegationSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateReusableDelegationSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateReusableDelegationSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::CreateReusableDelegationSetAsync(const CreateReusableDelegationSetRequest& request, const CreateReusableDelegationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateReusableDelegationSetAsyncHelper( request, handler, context ); } );
}

void Route53Client::CreateReusableDelegationSetAsyncHelper(const CreateReusableDelegationSetRequest& request, const CreateReusableDelegationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateReusableDelegationSet(request), context);
}

CreateTrafficPolicyOutcome Route53Client::CreateTrafficPolicy(const CreateTrafficPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/trafficpolicy";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateTrafficPolicyOutcome(CreateTrafficPolicyResult(outcome.GetResult()));
  }
  else
  {
    return CreateTrafficPolicyOutcome(outcome.GetError());
  }
}

CreateTrafficPolicyOutcomeCallable Route53Client::CreateTrafficPolicyCallable(const CreateTrafficPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTrafficPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTrafficPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::CreateTrafficPolicyAsync(const CreateTrafficPolicyRequest& request, const CreateTrafficPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTrafficPolicyAsyncHelper( request, handler, context ); } );
}

void Route53Client::CreateTrafficPolicyAsyncHelper(const CreateTrafficPolicyRequest& request, const CreateTrafficPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTrafficPolicy(request), context);
}

CreateTrafficPolicyInstanceOutcome Route53Client::CreateTrafficPolicyInstance(const CreateTrafficPolicyInstanceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/trafficpolicyinstance";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateTrafficPolicyInstanceOutcome(CreateTrafficPolicyInstanceResult(outcome.GetResult()));
  }
  else
  {
    return CreateTrafficPolicyInstanceOutcome(outcome.GetError());
  }
}

CreateTrafficPolicyInstanceOutcomeCallable Route53Client::CreateTrafficPolicyInstanceCallable(const CreateTrafficPolicyInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTrafficPolicyInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTrafficPolicyInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::CreateTrafficPolicyInstanceAsync(const CreateTrafficPolicyInstanceRequest& request, const CreateTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTrafficPolicyInstanceAsyncHelper( request, handler, context ); } );
}

void Route53Client::CreateTrafficPolicyInstanceAsyncHelper(const CreateTrafficPolicyInstanceRequest& request, const CreateTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTrafficPolicyInstance(request), context);
}

CreateTrafficPolicyVersionOutcome Route53Client::CreateTrafficPolicyVersion(const CreateTrafficPolicyVersionRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/trafficpolicy/";
  ss << request.GetId();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateTrafficPolicyVersionOutcome(CreateTrafficPolicyVersionResult(outcome.GetResult()));
  }
  else
  {
    return CreateTrafficPolicyVersionOutcome(outcome.GetError());
  }
}

CreateTrafficPolicyVersionOutcomeCallable Route53Client::CreateTrafficPolicyVersionCallable(const CreateTrafficPolicyVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTrafficPolicyVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTrafficPolicyVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::CreateTrafficPolicyVersionAsync(const CreateTrafficPolicyVersionRequest& request, const CreateTrafficPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTrafficPolicyVersionAsyncHelper( request, handler, context ); } );
}

void Route53Client::CreateTrafficPolicyVersionAsyncHelper(const CreateTrafficPolicyVersionRequest& request, const CreateTrafficPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateTrafficPolicyVersion(request), context);
}

CreateVPCAssociationAuthorizationOutcome Route53Client::CreateVPCAssociationAuthorization(const CreateVPCAssociationAuthorizationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/hostedzone/";
  ss << request.GetHostedZoneId();
  ss << "/authorizevpcassociation";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateVPCAssociationAuthorizationOutcome(CreateVPCAssociationAuthorizationResult(outcome.GetResult()));
  }
  else
  {
    return CreateVPCAssociationAuthorizationOutcome(outcome.GetError());
  }
}

CreateVPCAssociationAuthorizationOutcomeCallable Route53Client::CreateVPCAssociationAuthorizationCallable(const CreateVPCAssociationAuthorizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVPCAssociationAuthorizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVPCAssociationAuthorization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::CreateVPCAssociationAuthorizationAsync(const CreateVPCAssociationAuthorizationRequest& request, const CreateVPCAssociationAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateVPCAssociationAuthorizationAsyncHelper( request, handler, context ); } );
}

void Route53Client::CreateVPCAssociationAuthorizationAsyncHelper(const CreateVPCAssociationAuthorizationRequest& request, const CreateVPCAssociationAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVPCAssociationAuthorization(request), context);
}

DeleteHealthCheckOutcome Route53Client::DeleteHealthCheck(const DeleteHealthCheckRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/healthcheck/";
  ss << request.GetHealthCheckId();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteHealthCheckOutcome(DeleteHealthCheckResult(outcome.GetResult()));
  }
  else
  {
    return DeleteHealthCheckOutcome(outcome.GetError());
  }
}

DeleteHealthCheckOutcomeCallable Route53Client::DeleteHealthCheckCallable(const DeleteHealthCheckRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteHealthCheckOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteHealthCheck(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::DeleteHealthCheckAsync(const DeleteHealthCheckRequest& request, const DeleteHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteHealthCheckAsyncHelper( request, handler, context ); } );
}

void Route53Client::DeleteHealthCheckAsyncHelper(const DeleteHealthCheckRequest& request, const DeleteHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteHealthCheck(request), context);
}

DeleteHostedZoneOutcome Route53Client::DeleteHostedZone(const DeleteHostedZoneRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/hostedzone/";
  ss << request.GetId();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteHostedZoneOutcome(DeleteHostedZoneResult(outcome.GetResult()));
  }
  else
  {
    return DeleteHostedZoneOutcome(outcome.GetError());
  }
}

DeleteHostedZoneOutcomeCallable Route53Client::DeleteHostedZoneCallable(const DeleteHostedZoneRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteHostedZoneOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteHostedZone(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::DeleteHostedZoneAsync(const DeleteHostedZoneRequest& request, const DeleteHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteHostedZoneAsyncHelper( request, handler, context ); } );
}

void Route53Client::DeleteHostedZoneAsyncHelper(const DeleteHostedZoneRequest& request, const DeleteHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteHostedZone(request), context);
}

DeleteReusableDelegationSetOutcome Route53Client::DeleteReusableDelegationSet(const DeleteReusableDelegationSetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/delegationset/";
  ss << request.GetId();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteReusableDelegationSetOutcome(DeleteReusableDelegationSetResult(outcome.GetResult()));
  }
  else
  {
    return DeleteReusableDelegationSetOutcome(outcome.GetError());
  }
}

DeleteReusableDelegationSetOutcomeCallable Route53Client::DeleteReusableDelegationSetCallable(const DeleteReusableDelegationSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReusableDelegationSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReusableDelegationSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::DeleteReusableDelegationSetAsync(const DeleteReusableDelegationSetRequest& request, const DeleteReusableDelegationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteReusableDelegationSetAsyncHelper( request, handler, context ); } );
}

void Route53Client::DeleteReusableDelegationSetAsyncHelper(const DeleteReusableDelegationSetRequest& request, const DeleteReusableDelegationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteReusableDelegationSet(request), context);
}

DeleteTrafficPolicyOutcome Route53Client::DeleteTrafficPolicy(const DeleteTrafficPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/trafficpolicy/";
  ss << request.GetId();
  ss << "/";
  ss << request.GetVersion();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteTrafficPolicyOutcome(DeleteTrafficPolicyResult(outcome.GetResult()));
  }
  else
  {
    return DeleteTrafficPolicyOutcome(outcome.GetError());
  }
}

DeleteTrafficPolicyOutcomeCallable Route53Client::DeleteTrafficPolicyCallable(const DeleteTrafficPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTrafficPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTrafficPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::DeleteTrafficPolicyAsync(const DeleteTrafficPolicyRequest& request, const DeleteTrafficPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTrafficPolicyAsyncHelper( request, handler, context ); } );
}

void Route53Client::DeleteTrafficPolicyAsyncHelper(const DeleteTrafficPolicyRequest& request, const DeleteTrafficPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTrafficPolicy(request), context);
}

DeleteTrafficPolicyInstanceOutcome Route53Client::DeleteTrafficPolicyInstance(const DeleteTrafficPolicyInstanceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/trafficpolicyinstance/";
  ss << request.GetId();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_DELETE);
  if(outcome.IsSuccess())
  {
    return DeleteTrafficPolicyInstanceOutcome(DeleteTrafficPolicyInstanceResult(outcome.GetResult()));
  }
  else
  {
    return DeleteTrafficPolicyInstanceOutcome(outcome.GetError());
  }
}

DeleteTrafficPolicyInstanceOutcomeCallable Route53Client::DeleteTrafficPolicyInstanceCallable(const DeleteTrafficPolicyInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTrafficPolicyInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTrafficPolicyInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::DeleteTrafficPolicyInstanceAsync(const DeleteTrafficPolicyInstanceRequest& request, const DeleteTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTrafficPolicyInstanceAsyncHelper( request, handler, context ); } );
}

void Route53Client::DeleteTrafficPolicyInstanceAsyncHelper(const DeleteTrafficPolicyInstanceRequest& request, const DeleteTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteTrafficPolicyInstance(request), context);
}

DeleteVPCAssociationAuthorizationOutcome Route53Client::DeleteVPCAssociationAuthorization(const DeleteVPCAssociationAuthorizationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/hostedzone/";
  ss << request.GetHostedZoneId();
  ss << "/deauthorizevpcassociation";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteVPCAssociationAuthorizationOutcome(DeleteVPCAssociationAuthorizationResult(outcome.GetResult()));
  }
  else
  {
    return DeleteVPCAssociationAuthorizationOutcome(outcome.GetError());
  }
}

DeleteVPCAssociationAuthorizationOutcomeCallable Route53Client::DeleteVPCAssociationAuthorizationCallable(const DeleteVPCAssociationAuthorizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVPCAssociationAuthorizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVPCAssociationAuthorization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::DeleteVPCAssociationAuthorizationAsync(const DeleteVPCAssociationAuthorizationRequest& request, const DeleteVPCAssociationAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVPCAssociationAuthorizationAsyncHelper( request, handler, context ); } );
}

void Route53Client::DeleteVPCAssociationAuthorizationAsyncHelper(const DeleteVPCAssociationAuthorizationRequest& request, const DeleteVPCAssociationAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVPCAssociationAuthorization(request), context);
}

DisassociateVPCFromHostedZoneOutcome Route53Client::DisassociateVPCFromHostedZone(const DisassociateVPCFromHostedZoneRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/hostedzone/";
  ss << request.GetHostedZoneId();
  ss << "/disassociatevpc";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DisassociateVPCFromHostedZoneOutcome(DisassociateVPCFromHostedZoneResult(outcome.GetResult()));
  }
  else
  {
    return DisassociateVPCFromHostedZoneOutcome(outcome.GetError());
  }
}

DisassociateVPCFromHostedZoneOutcomeCallable Route53Client::DisassociateVPCFromHostedZoneCallable(const DisassociateVPCFromHostedZoneRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateVPCFromHostedZoneOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateVPCFromHostedZone(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::DisassociateVPCFromHostedZoneAsync(const DisassociateVPCFromHostedZoneRequest& request, const DisassociateVPCFromHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateVPCFromHostedZoneAsyncHelper( request, handler, context ); } );
}

void Route53Client::DisassociateVPCFromHostedZoneAsyncHelper(const DisassociateVPCFromHostedZoneRequest& request, const DisassociateVPCFromHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateVPCFromHostedZone(request), context);
}

GetChangeOutcome Route53Client::GetChange(const GetChangeRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/change/";
  ss << request.GetId();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetChangeOutcome(GetChangeResult(outcome.GetResult()));
  }
  else
  {
    return GetChangeOutcome(outcome.GetError());
  }
}

GetChangeOutcomeCallable Route53Client::GetChangeCallable(const GetChangeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetChangeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetChange(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::GetChangeAsync(const GetChangeRequest& request, const GetChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetChangeAsyncHelper( request, handler, context ); } );
}

void Route53Client::GetChangeAsyncHelper(const GetChangeRequest& request, const GetChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetChange(request), context);
}

GetCheckerIpRangesOutcome Route53Client::GetCheckerIpRanges(const GetCheckerIpRangesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/checkeripranges";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetCheckerIpRangesOutcome(GetCheckerIpRangesResult(outcome.GetResult()));
  }
  else
  {
    return GetCheckerIpRangesOutcome(outcome.GetError());
  }
}

GetCheckerIpRangesOutcomeCallable Route53Client::GetCheckerIpRangesCallable(const GetCheckerIpRangesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCheckerIpRangesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCheckerIpRanges(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::GetCheckerIpRangesAsync(const GetCheckerIpRangesRequest& request, const GetCheckerIpRangesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetCheckerIpRangesAsyncHelper( request, handler, context ); } );
}

void Route53Client::GetCheckerIpRangesAsyncHelper(const GetCheckerIpRangesRequest& request, const GetCheckerIpRangesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCheckerIpRanges(request), context);
}

GetGeoLocationOutcome Route53Client::GetGeoLocation(const GetGeoLocationRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/geolocation";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetGeoLocationOutcome(GetGeoLocationResult(outcome.GetResult()));
  }
  else
  {
    return GetGeoLocationOutcome(outcome.GetError());
  }
}

GetGeoLocationOutcomeCallable Route53Client::GetGeoLocationCallable(const GetGeoLocationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGeoLocationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGeoLocation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::GetGeoLocationAsync(const GetGeoLocationRequest& request, const GetGeoLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetGeoLocationAsyncHelper( request, handler, context ); } );
}

void Route53Client::GetGeoLocationAsyncHelper(const GetGeoLocationRequest& request, const GetGeoLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetGeoLocation(request), context);
}

GetHealthCheckOutcome Route53Client::GetHealthCheck(const GetHealthCheckRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/healthcheck/";
  ss << request.GetHealthCheckId();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetHealthCheckOutcome(GetHealthCheckResult(outcome.GetResult()));
  }
  else
  {
    return GetHealthCheckOutcome(outcome.GetError());
  }
}

GetHealthCheckOutcomeCallable Route53Client::GetHealthCheckCallable(const GetHealthCheckRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetHealthCheckOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetHealthCheck(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::GetHealthCheckAsync(const GetHealthCheckRequest& request, const GetHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetHealthCheckAsyncHelper( request, handler, context ); } );
}

void Route53Client::GetHealthCheckAsyncHelper(const GetHealthCheckRequest& request, const GetHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetHealthCheck(request), context);
}

GetHealthCheckCountOutcome Route53Client::GetHealthCheckCount(const GetHealthCheckCountRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/healthcheckcount";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetHealthCheckCountOutcome(GetHealthCheckCountResult(outcome.GetResult()));
  }
  else
  {
    return GetHealthCheckCountOutcome(outcome.GetError());
  }
}

GetHealthCheckCountOutcomeCallable Route53Client::GetHealthCheckCountCallable(const GetHealthCheckCountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetHealthCheckCountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetHealthCheckCount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::GetHealthCheckCountAsync(const GetHealthCheckCountRequest& request, const GetHealthCheckCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetHealthCheckCountAsyncHelper( request, handler, context ); } );
}

void Route53Client::GetHealthCheckCountAsyncHelper(const GetHealthCheckCountRequest& request, const GetHealthCheckCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetHealthCheckCount(request), context);
}

GetHealthCheckLastFailureReasonOutcome Route53Client::GetHealthCheckLastFailureReason(const GetHealthCheckLastFailureReasonRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/healthcheck/";
  ss << request.GetHealthCheckId();
  ss << "/lastfailurereason";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetHealthCheckLastFailureReasonOutcome(GetHealthCheckLastFailureReasonResult(outcome.GetResult()));
  }
  else
  {
    return GetHealthCheckLastFailureReasonOutcome(outcome.GetError());
  }
}

GetHealthCheckLastFailureReasonOutcomeCallable Route53Client::GetHealthCheckLastFailureReasonCallable(const GetHealthCheckLastFailureReasonRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetHealthCheckLastFailureReasonOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetHealthCheckLastFailureReason(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::GetHealthCheckLastFailureReasonAsync(const GetHealthCheckLastFailureReasonRequest& request, const GetHealthCheckLastFailureReasonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetHealthCheckLastFailureReasonAsyncHelper( request, handler, context ); } );
}

void Route53Client::GetHealthCheckLastFailureReasonAsyncHelper(const GetHealthCheckLastFailureReasonRequest& request, const GetHealthCheckLastFailureReasonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetHealthCheckLastFailureReason(request), context);
}

GetHealthCheckStatusOutcome Route53Client::GetHealthCheckStatus(const GetHealthCheckStatusRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/healthcheck/";
  ss << request.GetHealthCheckId();
  ss << "/status";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetHealthCheckStatusOutcome(GetHealthCheckStatusResult(outcome.GetResult()));
  }
  else
  {
    return GetHealthCheckStatusOutcome(outcome.GetError());
  }
}

GetHealthCheckStatusOutcomeCallable Route53Client::GetHealthCheckStatusCallable(const GetHealthCheckStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetHealthCheckStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetHealthCheckStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::GetHealthCheckStatusAsync(const GetHealthCheckStatusRequest& request, const GetHealthCheckStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetHealthCheckStatusAsyncHelper( request, handler, context ); } );
}

void Route53Client::GetHealthCheckStatusAsyncHelper(const GetHealthCheckStatusRequest& request, const GetHealthCheckStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetHealthCheckStatus(request), context);
}

GetHostedZoneOutcome Route53Client::GetHostedZone(const GetHostedZoneRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/hostedzone/";
  ss << request.GetId();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetHostedZoneOutcome(GetHostedZoneResult(outcome.GetResult()));
  }
  else
  {
    return GetHostedZoneOutcome(outcome.GetError());
  }
}

GetHostedZoneOutcomeCallable Route53Client::GetHostedZoneCallable(const GetHostedZoneRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetHostedZoneOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetHostedZone(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::GetHostedZoneAsync(const GetHostedZoneRequest& request, const GetHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetHostedZoneAsyncHelper( request, handler, context ); } );
}

void Route53Client::GetHostedZoneAsyncHelper(const GetHostedZoneRequest& request, const GetHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetHostedZone(request), context);
}

GetHostedZoneCountOutcome Route53Client::GetHostedZoneCount(const GetHostedZoneCountRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/hostedzonecount";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetHostedZoneCountOutcome(GetHostedZoneCountResult(outcome.GetResult()));
  }
  else
  {
    return GetHostedZoneCountOutcome(outcome.GetError());
  }
}

GetHostedZoneCountOutcomeCallable Route53Client::GetHostedZoneCountCallable(const GetHostedZoneCountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetHostedZoneCountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetHostedZoneCount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::GetHostedZoneCountAsync(const GetHostedZoneCountRequest& request, const GetHostedZoneCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetHostedZoneCountAsyncHelper( request, handler, context ); } );
}

void Route53Client::GetHostedZoneCountAsyncHelper(const GetHostedZoneCountRequest& request, const GetHostedZoneCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetHostedZoneCount(request), context);
}

GetReusableDelegationSetOutcome Route53Client::GetReusableDelegationSet(const GetReusableDelegationSetRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/delegationset/";
  ss << request.GetId();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetReusableDelegationSetOutcome(GetReusableDelegationSetResult(outcome.GetResult()));
  }
  else
  {
    return GetReusableDelegationSetOutcome(outcome.GetError());
  }
}

GetReusableDelegationSetOutcomeCallable Route53Client::GetReusableDelegationSetCallable(const GetReusableDelegationSetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetReusableDelegationSetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetReusableDelegationSet(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::GetReusableDelegationSetAsync(const GetReusableDelegationSetRequest& request, const GetReusableDelegationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetReusableDelegationSetAsyncHelper( request, handler, context ); } );
}

void Route53Client::GetReusableDelegationSetAsyncHelper(const GetReusableDelegationSetRequest& request, const GetReusableDelegationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetReusableDelegationSet(request), context);
}

GetTrafficPolicyOutcome Route53Client::GetTrafficPolicy(const GetTrafficPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/trafficpolicy/";
  ss << request.GetId();
  ss << "/";
  ss << request.GetVersion();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetTrafficPolicyOutcome(GetTrafficPolicyResult(outcome.GetResult()));
  }
  else
  {
    return GetTrafficPolicyOutcome(outcome.GetError());
  }
}

GetTrafficPolicyOutcomeCallable Route53Client::GetTrafficPolicyCallable(const GetTrafficPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTrafficPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTrafficPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::GetTrafficPolicyAsync(const GetTrafficPolicyRequest& request, const GetTrafficPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTrafficPolicyAsyncHelper( request, handler, context ); } );
}

void Route53Client::GetTrafficPolicyAsyncHelper(const GetTrafficPolicyRequest& request, const GetTrafficPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTrafficPolicy(request), context);
}

GetTrafficPolicyInstanceOutcome Route53Client::GetTrafficPolicyInstance(const GetTrafficPolicyInstanceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/trafficpolicyinstance/";
  ss << request.GetId();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetTrafficPolicyInstanceOutcome(GetTrafficPolicyInstanceResult(outcome.GetResult()));
  }
  else
  {
    return GetTrafficPolicyInstanceOutcome(outcome.GetError());
  }
}

GetTrafficPolicyInstanceOutcomeCallable Route53Client::GetTrafficPolicyInstanceCallable(const GetTrafficPolicyInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTrafficPolicyInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTrafficPolicyInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::GetTrafficPolicyInstanceAsync(const GetTrafficPolicyInstanceRequest& request, const GetTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTrafficPolicyInstanceAsyncHelper( request, handler, context ); } );
}

void Route53Client::GetTrafficPolicyInstanceAsyncHelper(const GetTrafficPolicyInstanceRequest& request, const GetTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTrafficPolicyInstance(request), context);
}

GetTrafficPolicyInstanceCountOutcome Route53Client::GetTrafficPolicyInstanceCount(const GetTrafficPolicyInstanceCountRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/trafficpolicyinstancecount";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetTrafficPolicyInstanceCountOutcome(GetTrafficPolicyInstanceCountResult(outcome.GetResult()));
  }
  else
  {
    return GetTrafficPolicyInstanceCountOutcome(outcome.GetError());
  }
}

GetTrafficPolicyInstanceCountOutcomeCallable Route53Client::GetTrafficPolicyInstanceCountCallable(const GetTrafficPolicyInstanceCountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTrafficPolicyInstanceCountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTrafficPolicyInstanceCount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::GetTrafficPolicyInstanceCountAsync(const GetTrafficPolicyInstanceCountRequest& request, const GetTrafficPolicyInstanceCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTrafficPolicyInstanceCountAsyncHelper( request, handler, context ); } );
}

void Route53Client::GetTrafficPolicyInstanceCountAsyncHelper(const GetTrafficPolicyInstanceCountRequest& request, const GetTrafficPolicyInstanceCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTrafficPolicyInstanceCount(request), context);
}

ListGeoLocationsOutcome Route53Client::ListGeoLocations(const ListGeoLocationsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/geolocations";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListGeoLocationsOutcome(ListGeoLocationsResult(outcome.GetResult()));
  }
  else
  {
    return ListGeoLocationsOutcome(outcome.GetError());
  }
}

ListGeoLocationsOutcomeCallable Route53Client::ListGeoLocationsCallable(const ListGeoLocationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGeoLocationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGeoLocations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::ListGeoLocationsAsync(const ListGeoLocationsRequest& request, const ListGeoLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListGeoLocationsAsyncHelper( request, handler, context ); } );
}

void Route53Client::ListGeoLocationsAsyncHelper(const ListGeoLocationsRequest& request, const ListGeoLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListGeoLocations(request), context);
}

ListHealthChecksOutcome Route53Client::ListHealthChecks(const ListHealthChecksRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/healthcheck";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListHealthChecksOutcome(ListHealthChecksResult(outcome.GetResult()));
  }
  else
  {
    return ListHealthChecksOutcome(outcome.GetError());
  }
}

ListHealthChecksOutcomeCallable Route53Client::ListHealthChecksCallable(const ListHealthChecksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListHealthChecksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListHealthChecks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::ListHealthChecksAsync(const ListHealthChecksRequest& request, const ListHealthChecksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListHealthChecksAsyncHelper( request, handler, context ); } );
}

void Route53Client::ListHealthChecksAsyncHelper(const ListHealthChecksRequest& request, const ListHealthChecksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListHealthChecks(request), context);
}

ListHostedZonesOutcome Route53Client::ListHostedZones(const ListHostedZonesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/hostedzone";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListHostedZonesOutcome(ListHostedZonesResult(outcome.GetResult()));
  }
  else
  {
    return ListHostedZonesOutcome(outcome.GetError());
  }
}

ListHostedZonesOutcomeCallable Route53Client::ListHostedZonesCallable(const ListHostedZonesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListHostedZonesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListHostedZones(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::ListHostedZonesAsync(const ListHostedZonesRequest& request, const ListHostedZonesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListHostedZonesAsyncHelper( request, handler, context ); } );
}

void Route53Client::ListHostedZonesAsyncHelper(const ListHostedZonesRequest& request, const ListHostedZonesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListHostedZones(request), context);
}

ListHostedZonesByNameOutcome Route53Client::ListHostedZonesByName(const ListHostedZonesByNameRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/hostedzonesbyname";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListHostedZonesByNameOutcome(ListHostedZonesByNameResult(outcome.GetResult()));
  }
  else
  {
    return ListHostedZonesByNameOutcome(outcome.GetError());
  }
}

ListHostedZonesByNameOutcomeCallable Route53Client::ListHostedZonesByNameCallable(const ListHostedZonesByNameRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListHostedZonesByNameOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListHostedZonesByName(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::ListHostedZonesByNameAsync(const ListHostedZonesByNameRequest& request, const ListHostedZonesByNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListHostedZonesByNameAsyncHelper( request, handler, context ); } );
}

void Route53Client::ListHostedZonesByNameAsyncHelper(const ListHostedZonesByNameRequest& request, const ListHostedZonesByNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListHostedZonesByName(request), context);
}

ListResourceRecordSetsOutcome Route53Client::ListResourceRecordSets(const ListResourceRecordSetsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/hostedzone/";
  ss << request.GetHostedZoneId();
  ss << "/rrset";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListResourceRecordSetsOutcome(ListResourceRecordSetsResult(outcome.GetResult()));
  }
  else
  {
    return ListResourceRecordSetsOutcome(outcome.GetError());
  }
}

ListResourceRecordSetsOutcomeCallable Route53Client::ListResourceRecordSetsCallable(const ListResourceRecordSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourceRecordSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResourceRecordSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::ListResourceRecordSetsAsync(const ListResourceRecordSetsRequest& request, const ListResourceRecordSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListResourceRecordSetsAsyncHelper( request, handler, context ); } );
}

void Route53Client::ListResourceRecordSetsAsyncHelper(const ListResourceRecordSetsRequest& request, const ListResourceRecordSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListResourceRecordSets(request), context);
}

ListReusableDelegationSetsOutcome Route53Client::ListReusableDelegationSets(const ListReusableDelegationSetsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/delegationset";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListReusableDelegationSetsOutcome(ListReusableDelegationSetsResult(outcome.GetResult()));
  }
  else
  {
    return ListReusableDelegationSetsOutcome(outcome.GetError());
  }
}

ListReusableDelegationSetsOutcomeCallable Route53Client::ListReusableDelegationSetsCallable(const ListReusableDelegationSetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListReusableDelegationSetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListReusableDelegationSets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::ListReusableDelegationSetsAsync(const ListReusableDelegationSetsRequest& request, const ListReusableDelegationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListReusableDelegationSetsAsyncHelper( request, handler, context ); } );
}

void Route53Client::ListReusableDelegationSetsAsyncHelper(const ListReusableDelegationSetsRequest& request, const ListReusableDelegationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListReusableDelegationSets(request), context);
}

ListTagsForResourceOutcome Route53Client::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/tags/";
  ss << TagResourceTypeMapper::GetNameForTagResourceType(request.GetResourceType());
  ss << "/";
  ss << request.GetResourceId();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListTagsForResourceOutcome(ListTagsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResourceOutcome(outcome.GetError());
  }
}

ListTagsForResourceOutcomeCallable Route53Client::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void Route53Client::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

ListTagsForResourcesOutcome Route53Client::ListTagsForResources(const ListTagsForResourcesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/tags/";
  ss << TagResourceTypeMapper::GetNameForTagResourceType(request.GetResourceType());
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListTagsForResourcesOutcome(ListTagsForResourcesResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResourcesOutcome(outcome.GetError());
  }
}

ListTagsForResourcesOutcomeCallable Route53Client::ListTagsForResourcesCallable(const ListTagsForResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::ListTagsForResourcesAsync(const ListTagsForResourcesRequest& request, const ListTagsForResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourcesAsyncHelper( request, handler, context ); } );
}

void Route53Client::ListTagsForResourcesAsyncHelper(const ListTagsForResourcesRequest& request, const ListTagsForResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResources(request), context);
}

ListTrafficPoliciesOutcome Route53Client::ListTrafficPolicies(const ListTrafficPoliciesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/trafficpolicies";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListTrafficPoliciesOutcome(ListTrafficPoliciesResult(outcome.GetResult()));
  }
  else
  {
    return ListTrafficPoliciesOutcome(outcome.GetError());
  }
}

ListTrafficPoliciesOutcomeCallable Route53Client::ListTrafficPoliciesCallable(const ListTrafficPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTrafficPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTrafficPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::ListTrafficPoliciesAsync(const ListTrafficPoliciesRequest& request, const ListTrafficPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTrafficPoliciesAsyncHelper( request, handler, context ); } );
}

void Route53Client::ListTrafficPoliciesAsyncHelper(const ListTrafficPoliciesRequest& request, const ListTrafficPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTrafficPolicies(request), context);
}

ListTrafficPolicyInstancesOutcome Route53Client::ListTrafficPolicyInstances(const ListTrafficPolicyInstancesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/trafficpolicyinstances";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListTrafficPolicyInstancesOutcome(ListTrafficPolicyInstancesResult(outcome.GetResult()));
  }
  else
  {
    return ListTrafficPolicyInstancesOutcome(outcome.GetError());
  }
}

ListTrafficPolicyInstancesOutcomeCallable Route53Client::ListTrafficPolicyInstancesCallable(const ListTrafficPolicyInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTrafficPolicyInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTrafficPolicyInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::ListTrafficPolicyInstancesAsync(const ListTrafficPolicyInstancesRequest& request, const ListTrafficPolicyInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTrafficPolicyInstancesAsyncHelper( request, handler, context ); } );
}

void Route53Client::ListTrafficPolicyInstancesAsyncHelper(const ListTrafficPolicyInstancesRequest& request, const ListTrafficPolicyInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTrafficPolicyInstances(request), context);
}

ListTrafficPolicyInstancesByHostedZoneOutcome Route53Client::ListTrafficPolicyInstancesByHostedZone(const ListTrafficPolicyInstancesByHostedZoneRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/trafficpolicyinstances/hostedzone";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListTrafficPolicyInstancesByHostedZoneOutcome(ListTrafficPolicyInstancesByHostedZoneResult(outcome.GetResult()));
  }
  else
  {
    return ListTrafficPolicyInstancesByHostedZoneOutcome(outcome.GetError());
  }
}

ListTrafficPolicyInstancesByHostedZoneOutcomeCallable Route53Client::ListTrafficPolicyInstancesByHostedZoneCallable(const ListTrafficPolicyInstancesByHostedZoneRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTrafficPolicyInstancesByHostedZoneOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTrafficPolicyInstancesByHostedZone(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::ListTrafficPolicyInstancesByHostedZoneAsync(const ListTrafficPolicyInstancesByHostedZoneRequest& request, const ListTrafficPolicyInstancesByHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTrafficPolicyInstancesByHostedZoneAsyncHelper( request, handler, context ); } );
}

void Route53Client::ListTrafficPolicyInstancesByHostedZoneAsyncHelper(const ListTrafficPolicyInstancesByHostedZoneRequest& request, const ListTrafficPolicyInstancesByHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTrafficPolicyInstancesByHostedZone(request), context);
}

ListTrafficPolicyInstancesByPolicyOutcome Route53Client::ListTrafficPolicyInstancesByPolicy(const ListTrafficPolicyInstancesByPolicyRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/trafficpolicyinstances/trafficpolicy";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListTrafficPolicyInstancesByPolicyOutcome(ListTrafficPolicyInstancesByPolicyResult(outcome.GetResult()));
  }
  else
  {
    return ListTrafficPolicyInstancesByPolicyOutcome(outcome.GetError());
  }
}

ListTrafficPolicyInstancesByPolicyOutcomeCallable Route53Client::ListTrafficPolicyInstancesByPolicyCallable(const ListTrafficPolicyInstancesByPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTrafficPolicyInstancesByPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTrafficPolicyInstancesByPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::ListTrafficPolicyInstancesByPolicyAsync(const ListTrafficPolicyInstancesByPolicyRequest& request, const ListTrafficPolicyInstancesByPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTrafficPolicyInstancesByPolicyAsyncHelper( request, handler, context ); } );
}

void Route53Client::ListTrafficPolicyInstancesByPolicyAsyncHelper(const ListTrafficPolicyInstancesByPolicyRequest& request, const ListTrafficPolicyInstancesByPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTrafficPolicyInstancesByPolicy(request), context);
}

ListTrafficPolicyVersionsOutcome Route53Client::ListTrafficPolicyVersions(const ListTrafficPolicyVersionsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/trafficpolicies/";
  ss << request.GetId();
  ss << "/versions";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListTrafficPolicyVersionsOutcome(ListTrafficPolicyVersionsResult(outcome.GetResult()));
  }
  else
  {
    return ListTrafficPolicyVersionsOutcome(outcome.GetError());
  }
}

ListTrafficPolicyVersionsOutcomeCallable Route53Client::ListTrafficPolicyVersionsCallable(const ListTrafficPolicyVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTrafficPolicyVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTrafficPolicyVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::ListTrafficPolicyVersionsAsync(const ListTrafficPolicyVersionsRequest& request, const ListTrafficPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTrafficPolicyVersionsAsyncHelper( request, handler, context ); } );
}

void Route53Client::ListTrafficPolicyVersionsAsyncHelper(const ListTrafficPolicyVersionsRequest& request, const ListTrafficPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTrafficPolicyVersions(request), context);
}

ListVPCAssociationAuthorizationsOutcome Route53Client::ListVPCAssociationAuthorizations(const ListVPCAssociationAuthorizationsRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/hostedzone/";
  ss << request.GetHostedZoneId();
  ss << "/authorizevpcassociation";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return ListVPCAssociationAuthorizationsOutcome(ListVPCAssociationAuthorizationsResult(outcome.GetResult()));
  }
  else
  {
    return ListVPCAssociationAuthorizationsOutcome(outcome.GetError());
  }
}

ListVPCAssociationAuthorizationsOutcomeCallable Route53Client::ListVPCAssociationAuthorizationsCallable(const ListVPCAssociationAuthorizationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVPCAssociationAuthorizationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVPCAssociationAuthorizations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::ListVPCAssociationAuthorizationsAsync(const ListVPCAssociationAuthorizationsRequest& request, const ListVPCAssociationAuthorizationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListVPCAssociationAuthorizationsAsyncHelper( request, handler, context ); } );
}

void Route53Client::ListVPCAssociationAuthorizationsAsyncHelper(const ListVPCAssociationAuthorizationsRequest& request, const ListVPCAssociationAuthorizationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListVPCAssociationAuthorizations(request), context);
}

TestDNSAnswerOutcome Route53Client::TestDNSAnswer(const TestDNSAnswerRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/testdnsanswer";
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return TestDNSAnswerOutcome(TestDNSAnswerResult(outcome.GetResult()));
  }
  else
  {
    return TestDNSAnswerOutcome(outcome.GetError());
  }
}

TestDNSAnswerOutcomeCallable Route53Client::TestDNSAnswerCallable(const TestDNSAnswerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TestDNSAnswerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TestDNSAnswer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::TestDNSAnswerAsync(const TestDNSAnswerRequest& request, const TestDNSAnswerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TestDNSAnswerAsyncHelper( request, handler, context ); } );
}

void Route53Client::TestDNSAnswerAsyncHelper(const TestDNSAnswerRequest& request, const TestDNSAnswerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TestDNSAnswer(request), context);
}

UpdateHealthCheckOutcome Route53Client::UpdateHealthCheck(const UpdateHealthCheckRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/healthcheck/";
  ss << request.GetHealthCheckId();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateHealthCheckOutcome(UpdateHealthCheckResult(outcome.GetResult()));
  }
  else
  {
    return UpdateHealthCheckOutcome(outcome.GetError());
  }
}

UpdateHealthCheckOutcomeCallable Route53Client::UpdateHealthCheckCallable(const UpdateHealthCheckRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateHealthCheckOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateHealthCheck(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::UpdateHealthCheckAsync(const UpdateHealthCheckRequest& request, const UpdateHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateHealthCheckAsyncHelper( request, handler, context ); } );
}

void Route53Client::UpdateHealthCheckAsyncHelper(const UpdateHealthCheckRequest& request, const UpdateHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateHealthCheck(request), context);
}

UpdateHostedZoneCommentOutcome Route53Client::UpdateHostedZoneComment(const UpdateHostedZoneCommentRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/hostedzone/";
  ss << request.GetId();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateHostedZoneCommentOutcome(UpdateHostedZoneCommentResult(outcome.GetResult()));
  }
  else
  {
    return UpdateHostedZoneCommentOutcome(outcome.GetError());
  }
}

UpdateHostedZoneCommentOutcomeCallable Route53Client::UpdateHostedZoneCommentCallable(const UpdateHostedZoneCommentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateHostedZoneCommentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateHostedZoneComment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::UpdateHostedZoneCommentAsync(const UpdateHostedZoneCommentRequest& request, const UpdateHostedZoneCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateHostedZoneCommentAsyncHelper( request, handler, context ); } );
}

void Route53Client::UpdateHostedZoneCommentAsyncHelper(const UpdateHostedZoneCommentRequest& request, const UpdateHostedZoneCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateHostedZoneComment(request), context);
}

UpdateTrafficPolicyCommentOutcome Route53Client::UpdateTrafficPolicyComment(const UpdateTrafficPolicyCommentRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/trafficpolicy/";
  ss << request.GetId();
  ss << "/";
  ss << request.GetVersion();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateTrafficPolicyCommentOutcome(UpdateTrafficPolicyCommentResult(outcome.GetResult()));
  }
  else
  {
    return UpdateTrafficPolicyCommentOutcome(outcome.GetError());
  }
}

UpdateTrafficPolicyCommentOutcomeCallable Route53Client::UpdateTrafficPolicyCommentCallable(const UpdateTrafficPolicyCommentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTrafficPolicyCommentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTrafficPolicyComment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::UpdateTrafficPolicyCommentAsync(const UpdateTrafficPolicyCommentRequest& request, const UpdateTrafficPolicyCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateTrafficPolicyCommentAsyncHelper( request, handler, context ); } );
}

void Route53Client::UpdateTrafficPolicyCommentAsyncHelper(const UpdateTrafficPolicyCommentRequest& request, const UpdateTrafficPolicyCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateTrafficPolicyComment(request), context);
}

UpdateTrafficPolicyInstanceOutcome Route53Client::UpdateTrafficPolicyInstance(const UpdateTrafficPolicyInstanceRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/2013-04-01/trafficpolicyinstance/";
  ss << request.GetId();
  XmlOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateTrafficPolicyInstanceOutcome(UpdateTrafficPolicyInstanceResult(outcome.GetResult()));
  }
  else
  {
    return UpdateTrafficPolicyInstanceOutcome(outcome.GetError());
  }
}

UpdateTrafficPolicyInstanceOutcomeCallable Route53Client::UpdateTrafficPolicyInstanceCallable(const UpdateTrafficPolicyInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTrafficPolicyInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTrafficPolicyInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void Route53Client::UpdateTrafficPolicyInstanceAsync(const UpdateTrafficPolicyInstanceRequest& request, const UpdateTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateTrafficPolicyInstanceAsyncHelper( request, handler, context ); } );
}

void Route53Client::UpdateTrafficPolicyInstanceAsyncHelper(const UpdateTrafficPolicyInstanceRequest& request, const UpdateTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateTrafficPolicyInstance(request), context);
}

