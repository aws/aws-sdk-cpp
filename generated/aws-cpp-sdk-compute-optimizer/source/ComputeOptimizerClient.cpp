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

#include <aws/compute-optimizer/ComputeOptimizerClient.h>
#include <aws/compute-optimizer/ComputeOptimizerEndpoint.h>
#include <aws/compute-optimizer/ComputeOptimizerErrorMarshaller.h>
#include <aws/compute-optimizer/model/DeleteRecommendationPreferencesRequest.h>
#include <aws/compute-optimizer/model/DescribeRecommendationExportJobsRequest.h>
#include <aws/compute-optimizer/model/ExportAutoScalingGroupRecommendationsRequest.h>
#include <aws/compute-optimizer/model/ExportEBSVolumeRecommendationsRequest.h>
#include <aws/compute-optimizer/model/ExportEC2InstanceRecommendationsRequest.h>
#include <aws/compute-optimizer/model/ExportLambdaFunctionRecommendationsRequest.h>
#include <aws/compute-optimizer/model/GetAutoScalingGroupRecommendationsRequest.h>
#include <aws/compute-optimizer/model/GetEBSVolumeRecommendationsRequest.h>
#include <aws/compute-optimizer/model/GetEC2InstanceRecommendationsRequest.h>
#include <aws/compute-optimizer/model/GetEC2RecommendationProjectedMetricsRequest.h>
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

static const char* SERVICE_NAME = "compute-optimizer";
static const char* ALLOCATION_TAG = "ComputeOptimizerClient";

ComputeOptimizerClient::ComputeOptimizerClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ComputeOptimizerErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ComputeOptimizerClient::ComputeOptimizerClient(const AWSCredentials& credentials,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ComputeOptimizerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ComputeOptimizerClient::ComputeOptimizerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ComputeOptimizerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ComputeOptimizerClient::~ComputeOptimizerClient()
{
}

void ComputeOptimizerClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("Compute Optimizer");
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

DeleteRecommendationPreferencesOutcome ComputeOptimizerClient::DeleteRecommendationPreferences(const DeleteRecommendationPreferencesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteRecommendationPreferencesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRecommendationPreferencesAsyncHelper( request, handler, context ); } );
}

void ComputeOptimizerClient::DeleteRecommendationPreferencesAsyncHelper(const DeleteRecommendationPreferencesRequest& request, const DeleteRecommendationPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRecommendationPreferences(request), context);
}

DescribeRecommendationExportJobsOutcome ComputeOptimizerClient::DescribeRecommendationExportJobs(const DescribeRecommendationExportJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeRecommendationExportJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeRecommendationExportJobsAsyncHelper( request, handler, context ); } );
}

void ComputeOptimizerClient::DescribeRecommendationExportJobsAsyncHelper(const DescribeRecommendationExportJobsRequest& request, const DescribeRecommendationExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRecommendationExportJobs(request), context);
}

ExportAutoScalingGroupRecommendationsOutcome ComputeOptimizerClient::ExportAutoScalingGroupRecommendations(const ExportAutoScalingGroupRecommendationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ExportAutoScalingGroupRecommendationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ExportAutoScalingGroupRecommendationsAsyncHelper( request, handler, context ); } );
}

void ComputeOptimizerClient::ExportAutoScalingGroupRecommendationsAsyncHelper(const ExportAutoScalingGroupRecommendationsRequest& request, const ExportAutoScalingGroupRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ExportAutoScalingGroupRecommendations(request), context);
}

ExportEBSVolumeRecommendationsOutcome ComputeOptimizerClient::ExportEBSVolumeRecommendations(const ExportEBSVolumeRecommendationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ExportEBSVolumeRecommendationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ExportEBSVolumeRecommendationsAsyncHelper( request, handler, context ); } );
}

void ComputeOptimizerClient::ExportEBSVolumeRecommendationsAsyncHelper(const ExportEBSVolumeRecommendationsRequest& request, const ExportEBSVolumeRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ExportEBSVolumeRecommendations(request), context);
}

ExportEC2InstanceRecommendationsOutcome ComputeOptimizerClient::ExportEC2InstanceRecommendations(const ExportEC2InstanceRecommendationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ExportEC2InstanceRecommendationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ExportEC2InstanceRecommendationsAsyncHelper( request, handler, context ); } );
}

void ComputeOptimizerClient::ExportEC2InstanceRecommendationsAsyncHelper(const ExportEC2InstanceRecommendationsRequest& request, const ExportEC2InstanceRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ExportEC2InstanceRecommendations(request), context);
}

ExportLambdaFunctionRecommendationsOutcome ComputeOptimizerClient::ExportLambdaFunctionRecommendations(const ExportLambdaFunctionRecommendationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ExportLambdaFunctionRecommendationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->ExportLambdaFunctionRecommendationsAsyncHelper( request, handler, context ); } );
}

void ComputeOptimizerClient::ExportLambdaFunctionRecommendationsAsyncHelper(const ExportLambdaFunctionRecommendationsRequest& request, const ExportLambdaFunctionRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ExportLambdaFunctionRecommendations(request), context);
}

GetAutoScalingGroupRecommendationsOutcome ComputeOptimizerClient::GetAutoScalingGroupRecommendations(const GetAutoScalingGroupRecommendationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetAutoScalingGroupRecommendationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

GetEBSVolumeRecommendationsOutcome ComputeOptimizerClient::GetEBSVolumeRecommendations(const GetEBSVolumeRecommendationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetEBSVolumeRecommendationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetEBSVolumeRecommendationsAsyncHelper( request, handler, context ); } );
}

void ComputeOptimizerClient::GetEBSVolumeRecommendationsAsyncHelper(const GetEBSVolumeRecommendationsRequest& request, const GetEBSVolumeRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEBSVolumeRecommendations(request), context);
}

GetEC2InstanceRecommendationsOutcome ComputeOptimizerClient::GetEC2InstanceRecommendations(const GetEC2InstanceRecommendationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetEC2InstanceRecommendationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return GetEC2RecommendationProjectedMetricsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

GetEffectiveRecommendationPreferencesOutcome ComputeOptimizerClient::GetEffectiveRecommendationPreferences(const GetEffectiveRecommendationPreferencesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetEffectiveRecommendationPreferencesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetEffectiveRecommendationPreferencesAsyncHelper( request, handler, context ); } );
}

void ComputeOptimizerClient::GetEffectiveRecommendationPreferencesAsyncHelper(const GetEffectiveRecommendationPreferencesRequest& request, const GetEffectiveRecommendationPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEffectiveRecommendationPreferences(request), context);
}

GetEnrollmentStatusOutcome ComputeOptimizerClient::GetEnrollmentStatus(const GetEnrollmentStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetEnrollmentStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

GetEnrollmentStatusesForOrganizationOutcome ComputeOptimizerClient::GetEnrollmentStatusesForOrganization(const GetEnrollmentStatusesForOrganizationRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetEnrollmentStatusesForOrganizationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetEnrollmentStatusesForOrganizationAsyncHelper( request, handler, context ); } );
}

void ComputeOptimizerClient::GetEnrollmentStatusesForOrganizationAsyncHelper(const GetEnrollmentStatusesForOrganizationRequest& request, const GetEnrollmentStatusesForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetEnrollmentStatusesForOrganization(request), context);
}

GetLambdaFunctionRecommendationsOutcome ComputeOptimizerClient::GetLambdaFunctionRecommendations(const GetLambdaFunctionRecommendationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetLambdaFunctionRecommendationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetLambdaFunctionRecommendationsAsyncHelper( request, handler, context ); } );
}

void ComputeOptimizerClient::GetLambdaFunctionRecommendationsAsyncHelper(const GetLambdaFunctionRecommendationsRequest& request, const GetLambdaFunctionRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetLambdaFunctionRecommendations(request), context);
}

GetRecommendationPreferencesOutcome ComputeOptimizerClient::GetRecommendationPreferences(const GetRecommendationPreferencesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetRecommendationPreferencesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->GetRecommendationPreferencesAsyncHelper( request, handler, context ); } );
}

void ComputeOptimizerClient::GetRecommendationPreferencesAsyncHelper(const GetRecommendationPreferencesRequest& request, const GetRecommendationPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRecommendationPreferences(request), context);
}

GetRecommendationSummariesOutcome ComputeOptimizerClient::GetRecommendationSummaries(const GetRecommendationSummariesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetRecommendationSummariesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

PutRecommendationPreferencesOutcome ComputeOptimizerClient::PutRecommendationPreferences(const PutRecommendationPreferencesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutRecommendationPreferencesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->PutRecommendationPreferencesAsyncHelper( request, handler, context ); } );
}

void ComputeOptimizerClient::PutRecommendationPreferencesAsyncHelper(const PutRecommendationPreferencesRequest& request, const PutRecommendationPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutRecommendationPreferences(request), context);
}

UpdateEnrollmentStatusOutcome ComputeOptimizerClient::UpdateEnrollmentStatus(const UpdateEnrollmentStatusRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateEnrollmentStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

