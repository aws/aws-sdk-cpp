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

#include <aws/compute-optimizer/ComputeOptimizerClient.h>
#include <aws/compute-optimizer/ComputeOptimizerEndpoint.h>
#include <aws/compute-optimizer/ComputeOptimizerErrorMarshaller.h>
#include <aws/compute-optimizer/model/GetAutoScalingGroupRecommendationsRequest.h>
#include <aws/compute-optimizer/model/GetEC2InstanceRecommendationsRequest.h>
#include <aws/compute-optimizer/model/GetEC2RecommendationProjectedMetricsRequest.h>
#include <aws/compute-optimizer/model/GetEnrollmentStatusRequest.h>
#include <aws/compute-optimizer/model/GetRecommendationSummariesRequest.h>
#include <aws/compute-optimizer/model/UpdateEnrollmentStatusRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ComputeOptimizer;
using namespace Aws::ComputeOptimizer::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "compute-optimizer";
static const char* ALLOCATION_TAG = "ComputeOptimizerClient";


ComputeOptimizerClient::ComputeOptimizerClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ComputeOptimizerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ComputeOptimizerClient::ComputeOptimizerClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ComputeOptimizerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ComputeOptimizerClient::ComputeOptimizerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ComputeOptimizerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ComputeOptimizerClient::~ComputeOptimizerClient()
{
}

void ComputeOptimizerClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ComputeOptimizerEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ComputeOptimizerClient::OverrideEndpoint(const Aws::String& endpoint)
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

GetAutoScalingGroupRecommendationsOutcome ComputeOptimizerClient::GetAutoScalingGroupRecommendations(const GetAutoScalingGroupRecommendationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetAutoScalingGroupRecommendationsOutcome(GetAutoScalingGroupRecommendationsResult(outcome.GetResult()));
  }
  else
  {
    return GetAutoScalingGroupRecommendationsOutcome(outcome.GetError());
  }
}

GetAutoScalingGroupRecommendationsOutcomeCallable ComputeOptimizerClient::GetAutoScalingGroupRecommendationsCallable(const GetAutoScalingGroupRecommendationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAutoScalingGroupRecommendationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAutoScalingGroupRecommendations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComputeOptimizerClient::GetAutoScalingGroupRecommendationsAsync(const GetAutoScalingGroupRecommendationsRequest& request, const GetAutoScalingGroupRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAutoScalingGroupRecommendationsAsyncHelper( request, handler, context ); } );
}

void ComputeOptimizerClient::GetAutoScalingGroupRecommendationsAsyncHelper(const GetAutoScalingGroupRecommendationsRequest& request, const GetAutoScalingGroupRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAutoScalingGroupRecommendations(request), context);
}

GetEC2InstanceRecommendationsOutcome ComputeOptimizerClient::GetEC2InstanceRecommendations(const GetEC2InstanceRecommendationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetEC2InstanceRecommendationsOutcome(GetEC2InstanceRecommendationsResult(outcome.GetResult()));
  }
  else
  {
    return GetEC2InstanceRecommendationsOutcome(outcome.GetError());
  }
}

GetEC2InstanceRecommendationsOutcomeCallable ComputeOptimizerClient::GetEC2InstanceRecommendationsCallable(const GetEC2InstanceRecommendationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEC2InstanceRecommendationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEC2InstanceRecommendations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComputeOptimizerClient::GetEC2InstanceRecommendationsAsync(const GetEC2InstanceRecommendationsRequest& request, const GetEC2InstanceRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetEC2InstanceRecommendationsAsyncHelper( request, handler, context ); } );
}

void ComputeOptimizerClient::GetEC2InstanceRecommendationsAsyncHelper(const GetEC2InstanceRecommendationsRequest& request, const GetEC2InstanceRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEC2InstanceRecommendations(request), context);
}

GetEC2RecommendationProjectedMetricsOutcome ComputeOptimizerClient::GetEC2RecommendationProjectedMetrics(const GetEC2RecommendationProjectedMetricsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetEC2RecommendationProjectedMetricsOutcome(GetEC2RecommendationProjectedMetricsResult(outcome.GetResult()));
  }
  else
  {
    return GetEC2RecommendationProjectedMetricsOutcome(outcome.GetError());
  }
}

GetEC2RecommendationProjectedMetricsOutcomeCallable ComputeOptimizerClient::GetEC2RecommendationProjectedMetricsCallable(const GetEC2RecommendationProjectedMetricsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEC2RecommendationProjectedMetricsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEC2RecommendationProjectedMetrics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComputeOptimizerClient::GetEC2RecommendationProjectedMetricsAsync(const GetEC2RecommendationProjectedMetricsRequest& request, const GetEC2RecommendationProjectedMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetEC2RecommendationProjectedMetricsAsyncHelper( request, handler, context ); } );
}

void ComputeOptimizerClient::GetEC2RecommendationProjectedMetricsAsyncHelper(const GetEC2RecommendationProjectedMetricsRequest& request, const GetEC2RecommendationProjectedMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEC2RecommendationProjectedMetrics(request), context);
}

GetEnrollmentStatusOutcome ComputeOptimizerClient::GetEnrollmentStatus(const GetEnrollmentStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetEnrollmentStatusOutcome(GetEnrollmentStatusResult(outcome.GetResult()));
  }
  else
  {
    return GetEnrollmentStatusOutcome(outcome.GetError());
  }
}

GetEnrollmentStatusOutcomeCallable ComputeOptimizerClient::GetEnrollmentStatusCallable(const GetEnrollmentStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEnrollmentStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEnrollmentStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComputeOptimizerClient::GetEnrollmentStatusAsync(const GetEnrollmentStatusRequest& request, const GetEnrollmentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetEnrollmentStatusAsyncHelper( request, handler, context ); } );
}

void ComputeOptimizerClient::GetEnrollmentStatusAsyncHelper(const GetEnrollmentStatusRequest& request, const GetEnrollmentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEnrollmentStatus(request), context);
}

GetRecommendationSummariesOutcome ComputeOptimizerClient::GetRecommendationSummaries(const GetRecommendationSummariesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRecommendationSummariesOutcome(GetRecommendationSummariesResult(outcome.GetResult()));
  }
  else
  {
    return GetRecommendationSummariesOutcome(outcome.GetError());
  }
}

GetRecommendationSummariesOutcomeCallable ComputeOptimizerClient::GetRecommendationSummariesCallable(const GetRecommendationSummariesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRecommendationSummariesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRecommendationSummaries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComputeOptimizerClient::GetRecommendationSummariesAsync(const GetRecommendationSummariesRequest& request, const GetRecommendationSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRecommendationSummariesAsyncHelper( request, handler, context ); } );
}

void ComputeOptimizerClient::GetRecommendationSummariesAsyncHelper(const GetRecommendationSummariesRequest& request, const GetRecommendationSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRecommendationSummaries(request), context);
}

UpdateEnrollmentStatusOutcome ComputeOptimizerClient::UpdateEnrollmentStatus(const UpdateEnrollmentStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateEnrollmentStatusOutcome(UpdateEnrollmentStatusResult(outcome.GetResult()));
  }
  else
  {
    return UpdateEnrollmentStatusOutcome(outcome.GetError());
  }
}

UpdateEnrollmentStatusOutcomeCallable ComputeOptimizerClient::UpdateEnrollmentStatusCallable(const UpdateEnrollmentStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEnrollmentStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEnrollmentStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComputeOptimizerClient::UpdateEnrollmentStatusAsync(const UpdateEnrollmentStatusRequest& request, const UpdateEnrollmentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateEnrollmentStatusAsyncHelper( request, handler, context ); } );
}

void ComputeOptimizerClient::UpdateEnrollmentStatusAsyncHelper(const UpdateEnrollmentStatusRequest& request, const UpdateEnrollmentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateEnrollmentStatus(request), context);
}

