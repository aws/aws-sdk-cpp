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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<AutoScalingPlansErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AutoScalingPlansClient::AutoScalingPlansClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<AutoScalingPlansErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AutoScalingPlansClient::AutoScalingPlansClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<AutoScalingPlansErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AutoScalingPlansClient::~AutoScalingPlansClient()
{
}

void AutoScalingPlansClient::init(const ClientConfiguration& config)
{
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
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateScalingPlanOutcome(CreateScalingPlanResult(outcome.GetResult()));
  }
  else
  {
    return CreateScalingPlanOutcome(outcome.GetError());
  }
}

CreateScalingPlanOutcomeCallable AutoScalingPlansClient::CreateScalingPlanCallable(const CreateScalingPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateScalingPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateScalingPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingPlansClient::CreateScalingPlanAsync(const CreateScalingPlanRequest& request, const CreateScalingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateScalingPlanAsyncHelper( request, handler, context ); } );
}

void AutoScalingPlansClient::CreateScalingPlanAsyncHelper(const CreateScalingPlanRequest& request, const CreateScalingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateScalingPlan(request), context);
}

DeleteScalingPlanOutcome AutoScalingPlansClient::DeleteScalingPlan(const DeleteScalingPlanRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteScalingPlanOutcome(DeleteScalingPlanResult(outcome.GetResult()));
  }
  else
  {
    return DeleteScalingPlanOutcome(outcome.GetError());
  }
}

DeleteScalingPlanOutcomeCallable AutoScalingPlansClient::DeleteScalingPlanCallable(const DeleteScalingPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteScalingPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteScalingPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingPlansClient::DeleteScalingPlanAsync(const DeleteScalingPlanRequest& request, const DeleteScalingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteScalingPlanAsyncHelper( request, handler, context ); } );
}

void AutoScalingPlansClient::DeleteScalingPlanAsyncHelper(const DeleteScalingPlanRequest& request, const DeleteScalingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteScalingPlan(request), context);
}

DescribeScalingPlanResourcesOutcome AutoScalingPlansClient::DescribeScalingPlanResources(const DescribeScalingPlanResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeScalingPlanResourcesOutcome(DescribeScalingPlanResourcesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeScalingPlanResourcesOutcome(outcome.GetError());
  }
}

DescribeScalingPlanResourcesOutcomeCallable AutoScalingPlansClient::DescribeScalingPlanResourcesCallable(const DescribeScalingPlanResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeScalingPlanResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeScalingPlanResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingPlansClient::DescribeScalingPlanResourcesAsync(const DescribeScalingPlanResourcesRequest& request, const DescribeScalingPlanResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeScalingPlanResourcesAsyncHelper( request, handler, context ); } );
}

void AutoScalingPlansClient::DescribeScalingPlanResourcesAsyncHelper(const DescribeScalingPlanResourcesRequest& request, const DescribeScalingPlanResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeScalingPlanResources(request), context);
}

DescribeScalingPlansOutcome AutoScalingPlansClient::DescribeScalingPlans(const DescribeScalingPlansRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeScalingPlansOutcome(DescribeScalingPlansResult(outcome.GetResult()));
  }
  else
  {
    return DescribeScalingPlansOutcome(outcome.GetError());
  }
}

DescribeScalingPlansOutcomeCallable AutoScalingPlansClient::DescribeScalingPlansCallable(const DescribeScalingPlansRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeScalingPlansOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeScalingPlans(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingPlansClient::DescribeScalingPlansAsync(const DescribeScalingPlansRequest& request, const DescribeScalingPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeScalingPlansAsyncHelper( request, handler, context ); } );
}

void AutoScalingPlansClient::DescribeScalingPlansAsyncHelper(const DescribeScalingPlansRequest& request, const DescribeScalingPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeScalingPlans(request), context);
}

GetScalingPlanResourceForecastDataOutcome AutoScalingPlansClient::GetScalingPlanResourceForecastData(const GetScalingPlanResourceForecastDataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetScalingPlanResourceForecastDataOutcome(GetScalingPlanResourceForecastDataResult(outcome.GetResult()));
  }
  else
  {
    return GetScalingPlanResourceForecastDataOutcome(outcome.GetError());
  }
}

GetScalingPlanResourceForecastDataOutcomeCallable AutoScalingPlansClient::GetScalingPlanResourceForecastDataCallable(const GetScalingPlanResourceForecastDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetScalingPlanResourceForecastDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetScalingPlanResourceForecastData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingPlansClient::GetScalingPlanResourceForecastDataAsync(const GetScalingPlanResourceForecastDataRequest& request, const GetScalingPlanResourceForecastDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetScalingPlanResourceForecastDataAsyncHelper( request, handler, context ); } );
}

void AutoScalingPlansClient::GetScalingPlanResourceForecastDataAsyncHelper(const GetScalingPlanResourceForecastDataRequest& request, const GetScalingPlanResourceForecastDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetScalingPlanResourceForecastData(request), context);
}

UpdateScalingPlanOutcome AutoScalingPlansClient::UpdateScalingPlan(const UpdateScalingPlanRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateScalingPlanOutcome(UpdateScalingPlanResult(outcome.GetResult()));
  }
  else
  {
    return UpdateScalingPlanOutcome(outcome.GetError());
  }
}

UpdateScalingPlanOutcomeCallable AutoScalingPlansClient::UpdateScalingPlanCallable(const UpdateScalingPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateScalingPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateScalingPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AutoScalingPlansClient::UpdateScalingPlanAsync(const UpdateScalingPlanRequest& request, const UpdateScalingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateScalingPlanAsyncHelper( request, handler, context ); } );
}

void AutoScalingPlansClient::UpdateScalingPlanAsyncHelper(const UpdateScalingPlanRequest& request, const UpdateScalingPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateScalingPlan(request), context);
}

