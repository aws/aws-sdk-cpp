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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ApplicationAutoScalingErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ApplicationAutoScalingClient::ApplicationAutoScalingClient(const AWSCredentials& credentials,
                                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ApplicationAutoScalingErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ApplicationAutoScalingClient::ApplicationAutoScalingClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ApplicationAutoScalingErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ApplicationAutoScalingClient::~ApplicationAutoScalingClient()
{
}

void ApplicationAutoScalingClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Application Auto Scaling");
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
  return DeleteScalingPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteScalingPolicyOutcomeCallable ApplicationAutoScalingClient::DeleteScalingPolicyCallable(const DeleteScalingPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteScalingPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteScalingPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationAutoScalingClientDeleteScalingPolicyAsyncHelper(ApplicationAutoScalingClient const * const clientThis, const DeleteScalingPolicyRequest& request, const DeleteScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteScalingPolicy(request), context);
}

void ApplicationAutoScalingClient::DeleteScalingPolicyAsync(const DeleteScalingPolicyRequest& request, const DeleteScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationAutoScalingClientDeleteScalingPolicyAsyncHelper( this, request, handler, context ); } );
}

DeleteScheduledActionOutcome ApplicationAutoScalingClient::DeleteScheduledAction(const DeleteScheduledActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteScheduledActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteScheduledActionOutcomeCallable ApplicationAutoScalingClient::DeleteScheduledActionCallable(const DeleteScheduledActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteScheduledActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteScheduledAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationAutoScalingClientDeleteScheduledActionAsyncHelper(ApplicationAutoScalingClient const * const clientThis, const DeleteScheduledActionRequest& request, const DeleteScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteScheduledAction(request), context);
}

void ApplicationAutoScalingClient::DeleteScheduledActionAsync(const DeleteScheduledActionRequest& request, const DeleteScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationAutoScalingClientDeleteScheduledActionAsyncHelper( this, request, handler, context ); } );
}

DeregisterScalableTargetOutcome ApplicationAutoScalingClient::DeregisterScalableTarget(const DeregisterScalableTargetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeregisterScalableTargetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterScalableTargetOutcomeCallable ApplicationAutoScalingClient::DeregisterScalableTargetCallable(const DeregisterScalableTargetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterScalableTargetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterScalableTarget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationAutoScalingClientDeregisterScalableTargetAsyncHelper(ApplicationAutoScalingClient const * const clientThis, const DeregisterScalableTargetRequest& request, const DeregisterScalableTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeregisterScalableTarget(request), context);
}

void ApplicationAutoScalingClient::DeregisterScalableTargetAsync(const DeregisterScalableTargetRequest& request, const DeregisterScalableTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationAutoScalingClientDeregisterScalableTargetAsyncHelper( this, request, handler, context ); } );
}

DescribeScalableTargetsOutcome ApplicationAutoScalingClient::DescribeScalableTargets(const DescribeScalableTargetsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeScalableTargetsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeScalableTargetsOutcomeCallable ApplicationAutoScalingClient::DescribeScalableTargetsCallable(const DescribeScalableTargetsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeScalableTargetsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeScalableTargets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationAutoScalingClientDescribeScalableTargetsAsyncHelper(ApplicationAutoScalingClient const * const clientThis, const DescribeScalableTargetsRequest& request, const DescribeScalableTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeScalableTargets(request), context);
}

void ApplicationAutoScalingClient::DescribeScalableTargetsAsync(const DescribeScalableTargetsRequest& request, const DescribeScalableTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationAutoScalingClientDescribeScalableTargetsAsyncHelper( this, request, handler, context ); } );
}

DescribeScalingActivitiesOutcome ApplicationAutoScalingClient::DescribeScalingActivities(const DescribeScalingActivitiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeScalingActivitiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeScalingActivitiesOutcomeCallable ApplicationAutoScalingClient::DescribeScalingActivitiesCallable(const DescribeScalingActivitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeScalingActivitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeScalingActivities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationAutoScalingClientDescribeScalingActivitiesAsyncHelper(ApplicationAutoScalingClient const * const clientThis, const DescribeScalingActivitiesRequest& request, const DescribeScalingActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeScalingActivities(request), context);
}

void ApplicationAutoScalingClient::DescribeScalingActivitiesAsync(const DescribeScalingActivitiesRequest& request, const DescribeScalingActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationAutoScalingClientDescribeScalingActivitiesAsyncHelper( this, request, handler, context ); } );
}

DescribeScalingPoliciesOutcome ApplicationAutoScalingClient::DescribeScalingPolicies(const DescribeScalingPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeScalingPoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeScalingPoliciesOutcomeCallable ApplicationAutoScalingClient::DescribeScalingPoliciesCallable(const DescribeScalingPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeScalingPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeScalingPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationAutoScalingClientDescribeScalingPoliciesAsyncHelper(ApplicationAutoScalingClient const * const clientThis, const DescribeScalingPoliciesRequest& request, const DescribeScalingPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeScalingPolicies(request), context);
}

void ApplicationAutoScalingClient::DescribeScalingPoliciesAsync(const DescribeScalingPoliciesRequest& request, const DescribeScalingPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationAutoScalingClientDescribeScalingPoliciesAsyncHelper( this, request, handler, context ); } );
}

DescribeScheduledActionsOutcome ApplicationAutoScalingClient::DescribeScheduledActions(const DescribeScheduledActionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeScheduledActionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeScheduledActionsOutcomeCallable ApplicationAutoScalingClient::DescribeScheduledActionsCallable(const DescribeScheduledActionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeScheduledActionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeScheduledActions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationAutoScalingClientDescribeScheduledActionsAsyncHelper(ApplicationAutoScalingClient const * const clientThis, const DescribeScheduledActionsRequest& request, const DescribeScheduledActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeScheduledActions(request), context);
}

void ApplicationAutoScalingClient::DescribeScheduledActionsAsync(const DescribeScheduledActionsRequest& request, const DescribeScheduledActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationAutoScalingClientDescribeScheduledActionsAsyncHelper( this, request, handler, context ); } );
}

PutScalingPolicyOutcome ApplicationAutoScalingClient::PutScalingPolicy(const PutScalingPolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutScalingPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutScalingPolicyOutcomeCallable ApplicationAutoScalingClient::PutScalingPolicyCallable(const PutScalingPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutScalingPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutScalingPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationAutoScalingClientPutScalingPolicyAsyncHelper(ApplicationAutoScalingClient const * const clientThis, const PutScalingPolicyRequest& request, const PutScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutScalingPolicy(request), context);
}

void ApplicationAutoScalingClient::PutScalingPolicyAsync(const PutScalingPolicyRequest& request, const PutScalingPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationAutoScalingClientPutScalingPolicyAsyncHelper( this, request, handler, context ); } );
}

PutScheduledActionOutcome ApplicationAutoScalingClient::PutScheduledAction(const PutScheduledActionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutScheduledActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutScheduledActionOutcomeCallable ApplicationAutoScalingClient::PutScheduledActionCallable(const PutScheduledActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutScheduledActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutScheduledAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationAutoScalingClientPutScheduledActionAsyncHelper(ApplicationAutoScalingClient const * const clientThis, const PutScheduledActionRequest& request, const PutScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutScheduledAction(request), context);
}

void ApplicationAutoScalingClient::PutScheduledActionAsync(const PutScheduledActionRequest& request, const PutScheduledActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationAutoScalingClientPutScheduledActionAsyncHelper( this, request, handler, context ); } );
}

RegisterScalableTargetOutcome ApplicationAutoScalingClient::RegisterScalableTarget(const RegisterScalableTargetRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return RegisterScalableTargetOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterScalableTargetOutcomeCallable ApplicationAutoScalingClient::RegisterScalableTargetCallable(const RegisterScalableTargetRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterScalableTargetOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterScalableTarget(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApplicationAutoScalingClientRegisterScalableTargetAsyncHelper(ApplicationAutoScalingClient const * const clientThis, const RegisterScalableTargetRequest& request, const RegisterScalableTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterScalableTarget(request), context);
}

void ApplicationAutoScalingClient::RegisterScalableTargetAsync(const RegisterScalableTargetRequest& request, const RegisterScalableTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ApplicationAutoScalingClientRegisterScalableTargetAsyncHelper( this, request, handler, context ); } );
}

