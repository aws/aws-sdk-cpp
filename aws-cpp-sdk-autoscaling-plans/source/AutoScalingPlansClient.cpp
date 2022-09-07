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

#include <aws/autoscaling-plans/AutoScalingPlansClient.h>
#include <aws/autoscaling-plans/AutoScalingPlansEndpoint.h>
#include <aws/autoscaling-plans/AutoScalingPlansErrorMarshaller.h>
#include <aws/autoscaling-plans/model/CreateScalingPlanRequest.h>
#include <aws/autoscaling-plans/model/DeleteScalingPlanRequest.h>
#include <aws/autoscaling-plans/model/DescribeScalingPlanResourcesRequest.h>
#include <aws/autoscaling-plans/model/DescribeScalingPlansRequest.h>
#include <aws/autoscaling-plans/model/GetScalingPlanResourceForecastDataRequest.h>
#include <aws/autoscaling-plans/model/UpdateScalingPlanRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::AutoScalingPlans;
using namespace Aws::AutoScalingPlans::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "autoscaling-plans";
static const char* ALLOCATION_TAG = "AutoScalingPlansClient";

AutoScalingPlansClient::AutoScalingPlansClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AutoScalingPlansErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AutoScalingPlansClient::AutoScalingPlansClient(const AWSCredentials& credentials,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AutoScalingPlansErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AutoScalingPlansClient::AutoScalingPlansClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AutoScalingPlansErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AutoScalingPlansClient::~AutoScalingPlansClient()
{
}

void AutoScalingPlansClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Auto Scaling Plans");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + AutoScalingPlansEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void AutoScalingPlansClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateScalingPlanOutcome AutoScalingPlansClient::CreateScalingPlan(const CreateScalingPlanRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateScalingPlanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateScalingPlanOutcomeCallable AutoScalingPlansClient::CreateScalingPlanCallable(const CreateScalingPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateScalingPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateScalingPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingPlansClientCreateScalingPlanAsyncHelper(AutoScalingPlansClient const * const clientThis, const CreateScalingPlanRequest& request, const CreateScalingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateScalingPlan(request), context);
}

void AutoScalingPlansClient::CreateScalingPlanAsync(const CreateScalingPlanRequest& request, const CreateScalingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingPlansClientCreateScalingPlanAsyncHelper( this, request, handler, context ); } );
}

DeleteScalingPlanOutcome AutoScalingPlansClient::DeleteScalingPlan(const DeleteScalingPlanRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteScalingPlanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteScalingPlanOutcomeCallable AutoScalingPlansClient::DeleteScalingPlanCallable(const DeleteScalingPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteScalingPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteScalingPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingPlansClientDeleteScalingPlanAsyncHelper(AutoScalingPlansClient const * const clientThis, const DeleteScalingPlanRequest& request, const DeleteScalingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteScalingPlan(request), context);
}

void AutoScalingPlansClient::DeleteScalingPlanAsync(const DeleteScalingPlanRequest& request, const DeleteScalingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingPlansClientDeleteScalingPlanAsyncHelper( this, request, handler, context ); } );
}

DescribeScalingPlanResourcesOutcome AutoScalingPlansClient::DescribeScalingPlanResources(const DescribeScalingPlanResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeScalingPlanResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeScalingPlanResourcesOutcomeCallable AutoScalingPlansClient::DescribeScalingPlanResourcesCallable(const DescribeScalingPlanResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeScalingPlanResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeScalingPlanResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingPlansClientDescribeScalingPlanResourcesAsyncHelper(AutoScalingPlansClient const * const clientThis, const DescribeScalingPlanResourcesRequest& request, const DescribeScalingPlanResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeScalingPlanResources(request), context);
}

void AutoScalingPlansClient::DescribeScalingPlanResourcesAsync(const DescribeScalingPlanResourcesRequest& request, const DescribeScalingPlanResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingPlansClientDescribeScalingPlanResourcesAsyncHelper( this, request, handler, context ); } );
}

DescribeScalingPlansOutcome AutoScalingPlansClient::DescribeScalingPlans(const DescribeScalingPlansRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeScalingPlansOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeScalingPlansOutcomeCallable AutoScalingPlansClient::DescribeScalingPlansCallable(const DescribeScalingPlansRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeScalingPlansOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeScalingPlans(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingPlansClientDescribeScalingPlansAsyncHelper(AutoScalingPlansClient const * const clientThis, const DescribeScalingPlansRequest& request, const DescribeScalingPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeScalingPlans(request), context);
}

void AutoScalingPlansClient::DescribeScalingPlansAsync(const DescribeScalingPlansRequest& request, const DescribeScalingPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingPlansClientDescribeScalingPlansAsyncHelper( this, request, handler, context ); } );
}

GetScalingPlanResourceForecastDataOutcome AutoScalingPlansClient::GetScalingPlanResourceForecastData(const GetScalingPlanResourceForecastDataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetScalingPlanResourceForecastDataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetScalingPlanResourceForecastDataOutcomeCallable AutoScalingPlansClient::GetScalingPlanResourceForecastDataCallable(const GetScalingPlanResourceForecastDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetScalingPlanResourceForecastDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetScalingPlanResourceForecastData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingPlansClientGetScalingPlanResourceForecastDataAsyncHelper(AutoScalingPlansClient const * const clientThis, const GetScalingPlanResourceForecastDataRequest& request, const GetScalingPlanResourceForecastDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetScalingPlanResourceForecastData(request), context);
}

void AutoScalingPlansClient::GetScalingPlanResourceForecastDataAsync(const GetScalingPlanResourceForecastDataRequest& request, const GetScalingPlanResourceForecastDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingPlansClientGetScalingPlanResourceForecastDataAsyncHelper( this, request, handler, context ); } );
}

UpdateScalingPlanOutcome AutoScalingPlansClient::UpdateScalingPlan(const UpdateScalingPlanRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateScalingPlanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateScalingPlanOutcomeCallable AutoScalingPlansClient::UpdateScalingPlanCallable(const UpdateScalingPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateScalingPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateScalingPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingPlansClientUpdateScalingPlanAsyncHelper(AutoScalingPlansClient const * const clientThis, const UpdateScalingPlanRequest& request, const UpdateScalingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateScalingPlan(request), context);
}

void AutoScalingPlansClient::UpdateScalingPlanAsync(const UpdateScalingPlanRequest& request, const UpdateScalingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AutoScalingPlansClientUpdateScalingPlanAsyncHelper( this, request, handler, context ); } );
}

