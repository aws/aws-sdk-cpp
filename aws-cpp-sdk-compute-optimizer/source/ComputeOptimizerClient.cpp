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

#include <aws/compute-optimizer/ComputeOptimizerClient.h>
#include <aws/compute-optimizer/ComputeOptimizerErrorMarshaller.h>
#include <aws/compute-optimizer/ComputeOptimizerEndpointProvider.h>
#include <aws/compute-optimizer/model/DeleteRecommendationPreferencesRequest.h>
#include <aws/compute-optimizer/model/DescribeRecommendationExportJobsRequest.h>
#include <aws/compute-optimizer/model/ExportAutoScalingGroupRecommendationsRequest.h>
#include <aws/compute-optimizer/model/ExportEBSVolumeRecommendationsRequest.h>
#include <aws/compute-optimizer/model/ExportEC2InstanceRecommendationsRequest.h>
#include <aws/compute-optimizer/model/ExportECSServiceRecommendationsRequest.h>
#include <aws/compute-optimizer/model/ExportLambdaFunctionRecommendationsRequest.h>
#include <aws/compute-optimizer/model/GetAutoScalingGroupRecommendationsRequest.h>
#include <aws/compute-optimizer/model/GetEBSVolumeRecommendationsRequest.h>
#include <aws/compute-optimizer/model/GetEC2InstanceRecommendationsRequest.h>
#include <aws/compute-optimizer/model/GetEC2RecommendationProjectedMetricsRequest.h>
#include <aws/compute-optimizer/model/GetECSServiceRecommendationProjectedMetricsRequest.h>
#include <aws/compute-optimizer/model/GetECSServiceRecommendationsRequest.h>
#include <aws/compute-optimizer/model/GetEffectiveRecommendationPreferencesRequest.h>
#include <aws/compute-optimizer/model/GetEnrollmentStatusRequest.h>
#include <aws/compute-optimizer/model/GetEnrollmentStatusesForOrganizationRequest.h>
#include <aws/compute-optimizer/model/GetLambdaFunctionRecommendationsRequest.h>
#include <aws/compute-optimizer/model/GetRecommendationPreferencesRequest.h>
#include <aws/compute-optimizer/model/GetRecommendationSummariesRequest.h>
#include <aws/compute-optimizer/model/PutRecommendationPreferencesRequest.h>
#include <aws/compute-optimizer/model/UpdateEnrollmentStatusRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ComputeOptimizer;
using namespace Aws::ComputeOptimizer::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* ComputeOptimizerClient::SERVICE_NAME = "compute-optimizer";
const char* ComputeOptimizerClient::ALLOCATION_TAG = "ComputeOptimizerClient";

ComputeOptimizerClient::ComputeOptimizerClient(const ComputeOptimizer::ComputeOptimizerClientConfiguration& clientConfiguration,
                                               std::shared_ptr<ComputeOptimizerEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ComputeOptimizerErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ComputeOptimizerClient::ComputeOptimizerClient(const AWSCredentials& credentials,
                                               std::shared_ptr<ComputeOptimizerEndpointProviderBase> endpointProvider,
                                               const ComputeOptimizer::ComputeOptimizerClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ComputeOptimizerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

ComputeOptimizerClient::ComputeOptimizerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               std::shared_ptr<ComputeOptimizerEndpointProviderBase> endpointProvider,
                                               const ComputeOptimizer::ComputeOptimizerClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ComputeOptimizerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  ComputeOptimizerClient::ComputeOptimizerClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ComputeOptimizerErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<ComputeOptimizerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ComputeOptimizerClient::ComputeOptimizerClient(const AWSCredentials& credentials,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ComputeOptimizerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ComputeOptimizerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

ComputeOptimizerClient::ComputeOptimizerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ComputeOptimizerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<ComputeOptimizerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
ComputeOptimizerClient::~ComputeOptimizerClient()
{
}

std::shared_ptr<ComputeOptimizerEndpointProviderBase>& ComputeOptimizerClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void ComputeOptimizerClient::init(const ComputeOptimizer::ComputeOptimizerClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Compute Optimizer");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void ComputeOptimizerClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

DeleteRecommendationPreferencesOutcome ComputeOptimizerClient::DeleteRecommendationPreferences(const DeleteRecommendationPreferencesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRecommendationPreferences, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRecommendationPreferences, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteRecommendationPreferencesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteRecommendationPreferencesOutcomeCallable ComputeOptimizerClient::DeleteRecommendationPreferencesCallable(const DeleteRecommendationPreferencesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRecommendationPreferencesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRecommendationPreferences(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComputeOptimizerClient::DeleteRecommendationPreferencesAsync(const DeleteRecommendationPreferencesRequest& request, const DeleteRecommendationPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteRecommendationPreferences(request), context);
    } );
}

DescribeRecommendationExportJobsOutcome ComputeOptimizerClient::DescribeRecommendationExportJobs(const DescribeRecommendationExportJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRecommendationExportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeRecommendationExportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeRecommendationExportJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeRecommendationExportJobsOutcomeCallable ComputeOptimizerClient::DescribeRecommendationExportJobsCallable(const DescribeRecommendationExportJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRecommendationExportJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRecommendationExportJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComputeOptimizerClient::DescribeRecommendationExportJobsAsync(const DescribeRecommendationExportJobsRequest& request, const DescribeRecommendationExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeRecommendationExportJobs(request), context);
    } );
}

ExportAutoScalingGroupRecommendationsOutcome ComputeOptimizerClient::ExportAutoScalingGroupRecommendations(const ExportAutoScalingGroupRecommendationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExportAutoScalingGroupRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExportAutoScalingGroupRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ExportAutoScalingGroupRecommendationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExportAutoScalingGroupRecommendationsOutcomeCallable ComputeOptimizerClient::ExportAutoScalingGroupRecommendationsCallable(const ExportAutoScalingGroupRecommendationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExportAutoScalingGroupRecommendationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExportAutoScalingGroupRecommendations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComputeOptimizerClient::ExportAutoScalingGroupRecommendationsAsync(const ExportAutoScalingGroupRecommendationsRequest& request, const ExportAutoScalingGroupRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ExportAutoScalingGroupRecommendations(request), context);
    } );
}

ExportEBSVolumeRecommendationsOutcome ComputeOptimizerClient::ExportEBSVolumeRecommendations(const ExportEBSVolumeRecommendationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExportEBSVolumeRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExportEBSVolumeRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ExportEBSVolumeRecommendationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExportEBSVolumeRecommendationsOutcomeCallable ComputeOptimizerClient::ExportEBSVolumeRecommendationsCallable(const ExportEBSVolumeRecommendationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExportEBSVolumeRecommendationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExportEBSVolumeRecommendations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComputeOptimizerClient::ExportEBSVolumeRecommendationsAsync(const ExportEBSVolumeRecommendationsRequest& request, const ExportEBSVolumeRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ExportEBSVolumeRecommendations(request), context);
    } );
}

ExportEC2InstanceRecommendationsOutcome ComputeOptimizerClient::ExportEC2InstanceRecommendations(const ExportEC2InstanceRecommendationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExportEC2InstanceRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExportEC2InstanceRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ExportEC2InstanceRecommendationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExportEC2InstanceRecommendationsOutcomeCallable ComputeOptimizerClient::ExportEC2InstanceRecommendationsCallable(const ExportEC2InstanceRecommendationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExportEC2InstanceRecommendationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExportEC2InstanceRecommendations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComputeOptimizerClient::ExportEC2InstanceRecommendationsAsync(const ExportEC2InstanceRecommendationsRequest& request, const ExportEC2InstanceRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ExportEC2InstanceRecommendations(request), context);
    } );
}

ExportECSServiceRecommendationsOutcome ComputeOptimizerClient::ExportECSServiceRecommendations(const ExportECSServiceRecommendationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExportECSServiceRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExportECSServiceRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ExportECSServiceRecommendationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExportECSServiceRecommendationsOutcomeCallable ComputeOptimizerClient::ExportECSServiceRecommendationsCallable(const ExportECSServiceRecommendationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExportECSServiceRecommendationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExportECSServiceRecommendations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComputeOptimizerClient::ExportECSServiceRecommendationsAsync(const ExportECSServiceRecommendationsRequest& request, const ExportECSServiceRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ExportECSServiceRecommendations(request), context);
    } );
}

ExportLambdaFunctionRecommendationsOutcome ComputeOptimizerClient::ExportLambdaFunctionRecommendations(const ExportLambdaFunctionRecommendationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExportLambdaFunctionRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExportLambdaFunctionRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ExportLambdaFunctionRecommendationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExportLambdaFunctionRecommendationsOutcomeCallable ComputeOptimizerClient::ExportLambdaFunctionRecommendationsCallable(const ExportLambdaFunctionRecommendationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExportLambdaFunctionRecommendationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExportLambdaFunctionRecommendations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComputeOptimizerClient::ExportLambdaFunctionRecommendationsAsync(const ExportLambdaFunctionRecommendationsRequest& request, const ExportLambdaFunctionRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ExportLambdaFunctionRecommendations(request), context);
    } );
}

GetAutoScalingGroupRecommendationsOutcome ComputeOptimizerClient::GetAutoScalingGroupRecommendations(const GetAutoScalingGroupRecommendationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetAutoScalingGroupRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetAutoScalingGroupRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetAutoScalingGroupRecommendationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetAutoScalingGroupRecommendations(request), context);
    } );
}

GetEBSVolumeRecommendationsOutcome ComputeOptimizerClient::GetEBSVolumeRecommendations(const GetEBSVolumeRecommendationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEBSVolumeRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEBSVolumeRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetEBSVolumeRecommendationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetEBSVolumeRecommendationsOutcomeCallable ComputeOptimizerClient::GetEBSVolumeRecommendationsCallable(const GetEBSVolumeRecommendationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEBSVolumeRecommendationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEBSVolumeRecommendations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComputeOptimizerClient::GetEBSVolumeRecommendationsAsync(const GetEBSVolumeRecommendationsRequest& request, const GetEBSVolumeRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEBSVolumeRecommendations(request), context);
    } );
}

GetEC2InstanceRecommendationsOutcome ComputeOptimizerClient::GetEC2InstanceRecommendations(const GetEC2InstanceRecommendationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEC2InstanceRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEC2InstanceRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetEC2InstanceRecommendationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEC2InstanceRecommendations(request), context);
    } );
}

GetEC2RecommendationProjectedMetricsOutcome ComputeOptimizerClient::GetEC2RecommendationProjectedMetrics(const GetEC2RecommendationProjectedMetricsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEC2RecommendationProjectedMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEC2RecommendationProjectedMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetEC2RecommendationProjectedMetricsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEC2RecommendationProjectedMetrics(request), context);
    } );
}

GetECSServiceRecommendationProjectedMetricsOutcome ComputeOptimizerClient::GetECSServiceRecommendationProjectedMetrics(const GetECSServiceRecommendationProjectedMetricsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetECSServiceRecommendationProjectedMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetECSServiceRecommendationProjectedMetrics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetECSServiceRecommendationProjectedMetricsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetECSServiceRecommendationProjectedMetricsOutcomeCallable ComputeOptimizerClient::GetECSServiceRecommendationProjectedMetricsCallable(const GetECSServiceRecommendationProjectedMetricsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetECSServiceRecommendationProjectedMetricsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetECSServiceRecommendationProjectedMetrics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComputeOptimizerClient::GetECSServiceRecommendationProjectedMetricsAsync(const GetECSServiceRecommendationProjectedMetricsRequest& request, const GetECSServiceRecommendationProjectedMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetECSServiceRecommendationProjectedMetrics(request), context);
    } );
}

GetECSServiceRecommendationsOutcome ComputeOptimizerClient::GetECSServiceRecommendations(const GetECSServiceRecommendationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetECSServiceRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetECSServiceRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetECSServiceRecommendationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetECSServiceRecommendationsOutcomeCallable ComputeOptimizerClient::GetECSServiceRecommendationsCallable(const GetECSServiceRecommendationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetECSServiceRecommendationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetECSServiceRecommendations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComputeOptimizerClient::GetECSServiceRecommendationsAsync(const GetECSServiceRecommendationsRequest& request, const GetECSServiceRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetECSServiceRecommendations(request), context);
    } );
}

GetEffectiveRecommendationPreferencesOutcome ComputeOptimizerClient::GetEffectiveRecommendationPreferences(const GetEffectiveRecommendationPreferencesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEffectiveRecommendationPreferences, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEffectiveRecommendationPreferences, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetEffectiveRecommendationPreferencesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetEffectiveRecommendationPreferencesOutcomeCallable ComputeOptimizerClient::GetEffectiveRecommendationPreferencesCallable(const GetEffectiveRecommendationPreferencesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEffectiveRecommendationPreferencesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEffectiveRecommendationPreferences(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComputeOptimizerClient::GetEffectiveRecommendationPreferencesAsync(const GetEffectiveRecommendationPreferencesRequest& request, const GetEffectiveRecommendationPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEffectiveRecommendationPreferences(request), context);
    } );
}

GetEnrollmentStatusOutcome ComputeOptimizerClient::GetEnrollmentStatus(const GetEnrollmentStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEnrollmentStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEnrollmentStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetEnrollmentStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEnrollmentStatus(request), context);
    } );
}

GetEnrollmentStatusesForOrganizationOutcome ComputeOptimizerClient::GetEnrollmentStatusesForOrganization(const GetEnrollmentStatusesForOrganizationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEnrollmentStatusesForOrganization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEnrollmentStatusesForOrganization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetEnrollmentStatusesForOrganizationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetEnrollmentStatusesForOrganizationOutcomeCallable ComputeOptimizerClient::GetEnrollmentStatusesForOrganizationCallable(const GetEnrollmentStatusesForOrganizationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEnrollmentStatusesForOrganizationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEnrollmentStatusesForOrganization(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComputeOptimizerClient::GetEnrollmentStatusesForOrganizationAsync(const GetEnrollmentStatusesForOrganizationRequest& request, const GetEnrollmentStatusesForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEnrollmentStatusesForOrganization(request), context);
    } );
}

GetLambdaFunctionRecommendationsOutcome ComputeOptimizerClient::GetLambdaFunctionRecommendations(const GetLambdaFunctionRecommendationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLambdaFunctionRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLambdaFunctionRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetLambdaFunctionRecommendationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLambdaFunctionRecommendationsOutcomeCallable ComputeOptimizerClient::GetLambdaFunctionRecommendationsCallable(const GetLambdaFunctionRecommendationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLambdaFunctionRecommendationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLambdaFunctionRecommendations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComputeOptimizerClient::GetLambdaFunctionRecommendationsAsync(const GetLambdaFunctionRecommendationsRequest& request, const GetLambdaFunctionRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLambdaFunctionRecommendations(request), context);
    } );
}

GetRecommendationPreferencesOutcome ComputeOptimizerClient::GetRecommendationPreferences(const GetRecommendationPreferencesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRecommendationPreferences, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRecommendationPreferences, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRecommendationPreferencesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetRecommendationPreferencesOutcomeCallable ComputeOptimizerClient::GetRecommendationPreferencesCallable(const GetRecommendationPreferencesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRecommendationPreferencesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRecommendationPreferences(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComputeOptimizerClient::GetRecommendationPreferencesAsync(const GetRecommendationPreferencesRequest& request, const GetRecommendationPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRecommendationPreferences(request), context);
    } );
}

GetRecommendationSummariesOutcome ComputeOptimizerClient::GetRecommendationSummaries(const GetRecommendationSummariesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRecommendationSummaries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRecommendationSummaries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetRecommendationSummariesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetRecommendationSummaries(request), context);
    } );
}

PutRecommendationPreferencesOutcome ComputeOptimizerClient::PutRecommendationPreferences(const PutRecommendationPreferencesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutRecommendationPreferences, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutRecommendationPreferences, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return PutRecommendationPreferencesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutRecommendationPreferencesOutcomeCallable ComputeOptimizerClient::PutRecommendationPreferencesCallable(const PutRecommendationPreferencesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRecommendationPreferencesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRecommendationPreferences(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComputeOptimizerClient::PutRecommendationPreferencesAsync(const PutRecommendationPreferencesRequest& request, const PutRecommendationPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutRecommendationPreferences(request), context);
    } );
}

UpdateEnrollmentStatusOutcome ComputeOptimizerClient::UpdateEnrollmentStatus(const UpdateEnrollmentStatusRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateEnrollmentStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateEnrollmentStatus, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateEnrollmentStatusOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateEnrollmentStatus(request), context);
    } );
}

