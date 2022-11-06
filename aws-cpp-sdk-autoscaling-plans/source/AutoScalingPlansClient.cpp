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
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/autoscaling-plans/AutoScalingPlansClient.h>
#include <aws/autoscaling-plans/AutoScalingPlansErrorMarshaller.h>
#include <aws/autoscaling-plans/AutoScalingPlansEndpointProvider.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* AutoScalingPlansClient::SERVICE_NAME = "autoscaling-plans";
const char* AutoScalingPlansClient::ALLOCATION_TAG = "AutoScalingPlansClient";

AutoScalingPlansClient::AutoScalingPlansClient(const AutoScalingPlans::AutoScalingPlansClientConfiguration& clientConfiguration,
                                               std::shared_ptr<AutoScalingPlansEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AutoScalingPlansErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

AutoScalingPlansClient::AutoScalingPlansClient(const AWSCredentials& credentials,
                                               std::shared_ptr<AutoScalingPlansEndpointProviderBase> endpointProvider,
                                               const AutoScalingPlans::AutoScalingPlansClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AutoScalingPlansErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

AutoScalingPlansClient::AutoScalingPlansClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               std::shared_ptr<AutoScalingPlansEndpointProviderBase> endpointProvider,
                                               const AutoScalingPlans::AutoScalingPlansClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AutoScalingPlansErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  AutoScalingPlansClient::AutoScalingPlansClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AutoScalingPlansErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<AutoScalingPlansEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

AutoScalingPlansClient::AutoScalingPlansClient(const AWSCredentials& credentials,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AutoScalingPlansErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<AutoScalingPlansEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

AutoScalingPlansClient::AutoScalingPlansClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AutoScalingPlansErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<AutoScalingPlansEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
AutoScalingPlansClient::~AutoScalingPlansClient()
{
}

std::shared_ptr<AutoScalingPlansEndpointProviderBase>& AutoScalingPlansClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void AutoScalingPlansClient::init(const AutoScalingPlans::AutoScalingPlansClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Auto Scaling Plans");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void AutoScalingPlansClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateScalingPlanOutcome AutoScalingPlansClient::CreateScalingPlan(const CreateScalingPlanRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateScalingPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateScalingPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateScalingPlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateScalingPlan(request), context);
    } );
}

DeleteScalingPlanOutcome AutoScalingPlansClient::DeleteScalingPlan(const DeleteScalingPlanRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteScalingPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteScalingPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteScalingPlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteScalingPlan(request), context);
    } );
}

DescribeScalingPlanResourcesOutcome AutoScalingPlansClient::DescribeScalingPlanResources(const DescribeScalingPlanResourcesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeScalingPlanResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeScalingPlanResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeScalingPlanResourcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeScalingPlanResources(request), context);
    } );
}

DescribeScalingPlansOutcome AutoScalingPlansClient::DescribeScalingPlans(const DescribeScalingPlansRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeScalingPlans, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeScalingPlans, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeScalingPlansOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeScalingPlans(request), context);
    } );
}

GetScalingPlanResourceForecastDataOutcome AutoScalingPlansClient::GetScalingPlanResourceForecastData(const GetScalingPlanResourceForecastDataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetScalingPlanResourceForecastData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetScalingPlanResourceForecastData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetScalingPlanResourceForecastDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetScalingPlanResourceForecastData(request), context);
    } );
}

UpdateScalingPlanOutcome AutoScalingPlansClient::UpdateScalingPlan(const UpdateScalingPlanRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateScalingPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateScalingPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateScalingPlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateScalingPlan(request), context);
    } );
}

