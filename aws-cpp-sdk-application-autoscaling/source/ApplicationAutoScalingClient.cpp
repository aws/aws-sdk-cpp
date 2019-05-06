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

#include <aws/application-autoscaling/ApplicationAutoScalingClient.h>
#include <aws/application-autoscaling/ApplicationAutoScalingEndpoint.h>
#include <aws/application-autoscaling/ApplicationAutoScalingErrorMarshaller.h>
#include <aws/application-autoscaling/model/DeleteScalingPolicyRequest.h>
#include <aws/application-autoscaling/model/DeleteScheduledActionRequest.h>
#include <aws/application-autoscaling/model/DeregisterScalableTargetRequest.h>
#include <aws/application-autoscaling/model/DescribeScalableTargetsRequest.h>
#include <aws/application-autoscaling/model/DescribeScalingActivitiesRequest.h>
#include <aws/application-autoscaling/model/DescribeScalingPoliciesRequest.h>
#include <aws/application-autoscaling/model/DescribeScheduledActionsRequest.h>
#include <aws/application-autoscaling/model/PutScalingPolicyRequest.h>
#include <aws/application-autoscaling/model/PutScheduledActionRequest.h>
#include <aws/application-autoscaling/model/RegisterScalableTargetRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ApplicationAutoScaling;
using namespace Aws::ApplicationAutoScaling::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "application-autoscaling";
static const char* ALLOCATION_TAG = "ApplicationAutoScalingClient";


ApplicationAutoScalingClient::ApplicationAutoScalingClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ApplicationAutoScalingErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ApplicationAutoScalingClient::ApplicationAutoScalingClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ApplicationAutoScalingErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ApplicationAutoScalingClient::ApplicationAutoScalingClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ApplicationAutoScalingErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ApplicationAutoScalingClient::~ApplicationAutoScalingClient()
{
}

void ApplicationAutoScalingClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ApplicationAutoScalingEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ApplicationAutoScalingClient::OverrideEndpoint(const Aws::String& endpoint)
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

DeleteScalingPolicyOutcome ApplicationAutoScalingClient::DeleteScalingPolicy(const DeleteScalingPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteScalingPolicyOutcome(DeleteScalingPolicyResult(outcome.GetResult()));
  }
  else
  {
    return DeleteScalingPolicyOutcome(outcome.GetError());
  }
}

DeleteScalingPolicyOutcomeCallable ApplicationAutoScalingClient::DeleteScalingPolicyCallable(const DeleteScalingPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteScalingPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteScalingPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationAutoScalingClient::DeleteScalingPolicyAsync(const DeleteScalingPolicyRequest& request, const DeleteScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteScalingPolicyAsyncHelper( request, handler, context ); } );
}

void ApplicationAutoScalingClient::DeleteScalingPolicyAsyncHelper(const DeleteScalingPolicyRequest& request, const DeleteScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteScalingPolicy(request), context);
}

DeleteScheduledActionOutcome ApplicationAutoScalingClient::DeleteScheduledAction(const DeleteScheduledActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteScheduledActionOutcome(DeleteScheduledActionResult(outcome.GetResult()));
  }
  else
  {
    return DeleteScheduledActionOutcome(outcome.GetError());
  }
}

DeleteScheduledActionOutcomeCallable ApplicationAutoScalingClient::DeleteScheduledActionCallable(const DeleteScheduledActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteScheduledActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteScheduledAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationAutoScalingClient::DeleteScheduledActionAsync(const DeleteScheduledActionRequest& request, const DeleteScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteScheduledActionAsyncHelper( request, handler, context ); } );
}

void ApplicationAutoScalingClient::DeleteScheduledActionAsyncHelper(const DeleteScheduledActionRequest& request, const DeleteScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteScheduledAction(request), context);
}

DeregisterScalableTargetOutcome ApplicationAutoScalingClient::DeregisterScalableTarget(const DeregisterScalableTargetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeregisterScalableTargetOutcome(DeregisterScalableTargetResult(outcome.GetResult()));
  }
  else
  {
    return DeregisterScalableTargetOutcome(outcome.GetError());
  }
}

DeregisterScalableTargetOutcomeCallable ApplicationAutoScalingClient::DeregisterScalableTargetCallable(const DeregisterScalableTargetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterScalableTargetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterScalableTarget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationAutoScalingClient::DeregisterScalableTargetAsync(const DeregisterScalableTargetRequest& request, const DeregisterScalableTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeregisterScalableTargetAsyncHelper( request, handler, context ); } );
}

void ApplicationAutoScalingClient::DeregisterScalableTargetAsyncHelper(const DeregisterScalableTargetRequest& request, const DeregisterScalableTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeregisterScalableTarget(request), context);
}

DescribeScalableTargetsOutcome ApplicationAutoScalingClient::DescribeScalableTargets(const DescribeScalableTargetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeScalableTargetsOutcome(DescribeScalableTargetsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeScalableTargetsOutcome(outcome.GetError());
  }
}

DescribeScalableTargetsOutcomeCallable ApplicationAutoScalingClient::DescribeScalableTargetsCallable(const DescribeScalableTargetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeScalableTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeScalableTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationAutoScalingClient::DescribeScalableTargetsAsync(const DescribeScalableTargetsRequest& request, const DescribeScalableTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeScalableTargetsAsyncHelper( request, handler, context ); } );
}

void ApplicationAutoScalingClient::DescribeScalableTargetsAsyncHelper(const DescribeScalableTargetsRequest& request, const DescribeScalableTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeScalableTargets(request), context);
}

DescribeScalingActivitiesOutcome ApplicationAutoScalingClient::DescribeScalingActivities(const DescribeScalingActivitiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeScalingActivitiesOutcome(DescribeScalingActivitiesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeScalingActivitiesOutcome(outcome.GetError());
  }
}

DescribeScalingActivitiesOutcomeCallable ApplicationAutoScalingClient::DescribeScalingActivitiesCallable(const DescribeScalingActivitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeScalingActivitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeScalingActivities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationAutoScalingClient::DescribeScalingActivitiesAsync(const DescribeScalingActivitiesRequest& request, const DescribeScalingActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeScalingActivitiesAsyncHelper( request, handler, context ); } );
}

void ApplicationAutoScalingClient::DescribeScalingActivitiesAsyncHelper(const DescribeScalingActivitiesRequest& request, const DescribeScalingActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeScalingActivities(request), context);
}

DescribeScalingPoliciesOutcome ApplicationAutoScalingClient::DescribeScalingPolicies(const DescribeScalingPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeScalingPoliciesOutcome(DescribeScalingPoliciesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeScalingPoliciesOutcome(outcome.GetError());
  }
}

DescribeScalingPoliciesOutcomeCallable ApplicationAutoScalingClient::DescribeScalingPoliciesCallable(const DescribeScalingPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeScalingPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeScalingPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationAutoScalingClient::DescribeScalingPoliciesAsync(const DescribeScalingPoliciesRequest& request, const DescribeScalingPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeScalingPoliciesAsyncHelper( request, handler, context ); } );
}

void ApplicationAutoScalingClient::DescribeScalingPoliciesAsyncHelper(const DescribeScalingPoliciesRequest& request, const DescribeScalingPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeScalingPolicies(request), context);
}

DescribeScheduledActionsOutcome ApplicationAutoScalingClient::DescribeScheduledActions(const DescribeScheduledActionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeScheduledActionsOutcome(DescribeScheduledActionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeScheduledActionsOutcome(outcome.GetError());
  }
}

DescribeScheduledActionsOutcomeCallable ApplicationAutoScalingClient::DescribeScheduledActionsCallable(const DescribeScheduledActionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeScheduledActionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeScheduledActions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationAutoScalingClient::DescribeScheduledActionsAsync(const DescribeScheduledActionsRequest& request, const DescribeScheduledActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeScheduledActionsAsyncHelper( request, handler, context ); } );
}

void ApplicationAutoScalingClient::DescribeScheduledActionsAsyncHelper(const DescribeScheduledActionsRequest& request, const DescribeScheduledActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeScheduledActions(request), context);
}

PutScalingPolicyOutcome ApplicationAutoScalingClient::PutScalingPolicy(const PutScalingPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutScalingPolicyOutcome(PutScalingPolicyResult(outcome.GetResult()));
  }
  else
  {
    return PutScalingPolicyOutcome(outcome.GetError());
  }
}

PutScalingPolicyOutcomeCallable ApplicationAutoScalingClient::PutScalingPolicyCallable(const PutScalingPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutScalingPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutScalingPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationAutoScalingClient::PutScalingPolicyAsync(const PutScalingPolicyRequest& request, const PutScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutScalingPolicyAsyncHelper( request, handler, context ); } );
}

void ApplicationAutoScalingClient::PutScalingPolicyAsyncHelper(const PutScalingPolicyRequest& request, const PutScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutScalingPolicy(request), context);
}

PutScheduledActionOutcome ApplicationAutoScalingClient::PutScheduledAction(const PutScheduledActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutScheduledActionOutcome(PutScheduledActionResult(outcome.GetResult()));
  }
  else
  {
    return PutScheduledActionOutcome(outcome.GetError());
  }
}

PutScheduledActionOutcomeCallable ApplicationAutoScalingClient::PutScheduledActionCallable(const PutScheduledActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutScheduledActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutScheduledAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationAutoScalingClient::PutScheduledActionAsync(const PutScheduledActionRequest& request, const PutScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutScheduledActionAsyncHelper( request, handler, context ); } );
}

void ApplicationAutoScalingClient::PutScheduledActionAsyncHelper(const PutScheduledActionRequest& request, const PutScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutScheduledAction(request), context);
}

RegisterScalableTargetOutcome ApplicationAutoScalingClient::RegisterScalableTarget(const RegisterScalableTargetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RegisterScalableTargetOutcome(RegisterScalableTargetResult(outcome.GetResult()));
  }
  else
  {
    return RegisterScalableTargetOutcome(outcome.GetError());
  }
}

RegisterScalableTargetOutcomeCallable ApplicationAutoScalingClient::RegisterScalableTargetCallable(const RegisterScalableTargetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterScalableTargetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterScalableTarget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationAutoScalingClient::RegisterScalableTargetAsync(const RegisterScalableTargetRequest& request, const RegisterScalableTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RegisterScalableTargetAsyncHelper( request, handler, context ); } );
}

void ApplicationAutoScalingClient::RegisterScalableTargetAsyncHelper(const RegisterScalableTargetRequest& request, const RegisterScalableTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RegisterScalableTarget(request), context);
}

