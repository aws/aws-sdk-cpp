/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/ComputeOptimizerClient.h>
#include <aws/compute-optimizer/ComputeOptimizerEndpointProvider.h>
#include <aws/compute-optimizer/ComputeOptimizerErrorMarshaller.h>
#include <aws/compute-optimizer/model/DeleteRecommendationPreferencesRequest.h>
#include <aws/compute-optimizer/model/DescribeRecommendationExportJobsRequest.h>
#include <aws/compute-optimizer/model/ExportAutoScalingGroupRecommendationsRequest.h>
#include <aws/compute-optimizer/model/ExportEBSVolumeRecommendationsRequest.h>
#include <aws/compute-optimizer/model/ExportEC2InstanceRecommendationsRequest.h>
#include <aws/compute-optimizer/model/ExportECSServiceRecommendationsRequest.h>
#include <aws/compute-optimizer/model/ExportIdleRecommendationsRequest.h>
#include <aws/compute-optimizer/model/ExportLambdaFunctionRecommendationsRequest.h>
#include <aws/compute-optimizer/model/ExportLicenseRecommendationsRequest.h>
#include <aws/compute-optimizer/model/ExportRDSDatabaseRecommendationsRequest.h>
#include <aws/compute-optimizer/model/GetAutoScalingGroupRecommendationsRequest.h>
#include <aws/compute-optimizer/model/GetEBSVolumeRecommendationsRequest.h>
#include <aws/compute-optimizer/model/GetEC2InstanceRecommendationsRequest.h>
#include <aws/compute-optimizer/model/GetEC2RecommendationProjectedMetricsRequest.h>
#include <aws/compute-optimizer/model/GetECSServiceRecommendationProjectedMetricsRequest.h>
#include <aws/compute-optimizer/model/GetECSServiceRecommendationsRequest.h>
#include <aws/compute-optimizer/model/GetEffectiveRecommendationPreferencesRequest.h>
#include <aws/compute-optimizer/model/GetEnrollmentStatusRequest.h>
#include <aws/compute-optimizer/model/GetEnrollmentStatusesForOrganizationRequest.h>
#include <aws/compute-optimizer/model/GetIdleRecommendationsRequest.h>
#include <aws/compute-optimizer/model/GetLambdaFunctionRecommendationsRequest.h>
#include <aws/compute-optimizer/model/GetLicenseRecommendationsRequest.h>
#include <aws/compute-optimizer/model/GetRDSDatabaseRecommendationProjectedMetricsRequest.h>
#include <aws/compute-optimizer/model/GetRDSDatabaseRecommendationsRequest.h>
#include <aws/compute-optimizer/model/GetRecommendationPreferencesRequest.h>
#include <aws/compute-optimizer/model/GetRecommendationSummariesRequest.h>
#include <aws/compute-optimizer/model/PutRecommendationPreferencesRequest.h>
#include <aws/compute-optimizer/model/UpdateEnrollmentStatusRequest.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ComputeOptimizer;
using namespace Aws::ComputeOptimizer::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ComputeOptimizer {
const char SERVICE_NAME[] = "compute-optimizer";
const char ALLOCATION_TAG[] = "ComputeOptimizerClient";
}  // namespace ComputeOptimizer
}  // namespace Aws
const char* ComputeOptimizerClient::GetServiceName() { return SERVICE_NAME; }
const char* ComputeOptimizerClient::GetAllocationTag() { return ALLOCATION_TAG; }

ComputeOptimizerClient::ComputeOptimizerClient(const ComputeOptimizer::ComputeOptimizerClientConfiguration& clientConfiguration,
                                               std::shared_ptr<ComputeOptimizerEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ComputeOptimizerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ComputeOptimizerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ComputeOptimizerClient::ComputeOptimizerClient(const AWSCredentials& credentials,
                                               std::shared_ptr<ComputeOptimizerEndpointProviderBase> endpointProvider,
                                               const ComputeOptimizer::ComputeOptimizerClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ComputeOptimizerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ComputeOptimizerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ComputeOptimizerClient::ComputeOptimizerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               std::shared_ptr<ComputeOptimizerEndpointProviderBase> endpointProvider,
                                               const ComputeOptimizer::ComputeOptimizerClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ComputeOptimizerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ComputeOptimizerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ComputeOptimizerClient::ComputeOptimizerClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ComputeOptimizerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ComputeOptimizerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ComputeOptimizerClient::ComputeOptimizerClient(const AWSCredentials& credentials,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ComputeOptimizerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ComputeOptimizerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ComputeOptimizerClient::ComputeOptimizerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ComputeOptimizerErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ComputeOptimizerEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ComputeOptimizerClient::~ComputeOptimizerClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ComputeOptimizerEndpointProviderBase>& ComputeOptimizerClient::accessEndpointProvider() { return m_endpointProvider; }

void ComputeOptimizerClient::init(const ComputeOptimizer::ComputeOptimizerClientConfiguration& config) {
  AWSClient::SetServiceClientName("Compute Optimizer");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "compute-optimizer");
}

void ComputeOptimizerClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ComputeOptimizerClient::InvokeOperationOutcome ComputeOptimizerClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                                                              Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_endpointProvider, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_telemetryProvider->getTracer(serviceName, {});
  auto meter = m_telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

DeleteRecommendationPreferencesOutcome ComputeOptimizerClient::DeleteRecommendationPreferences(
    const DeleteRecommendationPreferencesRequest& request) const {
  return DeleteRecommendationPreferencesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRecommendationExportJobsOutcome ComputeOptimizerClient::DescribeRecommendationExportJobs(
    const DescribeRecommendationExportJobsRequest& request) const {
  return DescribeRecommendationExportJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ExportAutoScalingGroupRecommendationsOutcome ComputeOptimizerClient::ExportAutoScalingGroupRecommendations(
    const ExportAutoScalingGroupRecommendationsRequest& request) const {
  return ExportAutoScalingGroupRecommendationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ExportEBSVolumeRecommendationsOutcome ComputeOptimizerClient::ExportEBSVolumeRecommendations(
    const ExportEBSVolumeRecommendationsRequest& request) const {
  return ExportEBSVolumeRecommendationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ExportEC2InstanceRecommendationsOutcome ComputeOptimizerClient::ExportEC2InstanceRecommendations(
    const ExportEC2InstanceRecommendationsRequest& request) const {
  return ExportEC2InstanceRecommendationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ExportECSServiceRecommendationsOutcome ComputeOptimizerClient::ExportECSServiceRecommendations(
    const ExportECSServiceRecommendationsRequest& request) const {
  return ExportECSServiceRecommendationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ExportIdleRecommendationsOutcome ComputeOptimizerClient::ExportIdleRecommendations(const ExportIdleRecommendationsRequest& request) const {
  return ExportIdleRecommendationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ExportLambdaFunctionRecommendationsOutcome ComputeOptimizerClient::ExportLambdaFunctionRecommendations(
    const ExportLambdaFunctionRecommendationsRequest& request) const {
  return ExportLambdaFunctionRecommendationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ExportLicenseRecommendationsOutcome ComputeOptimizerClient::ExportLicenseRecommendations(
    const ExportLicenseRecommendationsRequest& request) const {
  return ExportLicenseRecommendationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ExportRDSDatabaseRecommendationsOutcome ComputeOptimizerClient::ExportRDSDatabaseRecommendations(
    const ExportRDSDatabaseRecommendationsRequest& request) const {
  return ExportRDSDatabaseRecommendationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAutoScalingGroupRecommendationsOutcome ComputeOptimizerClient::GetAutoScalingGroupRecommendations(
    const GetAutoScalingGroupRecommendationsRequest& request) const {
  return GetAutoScalingGroupRecommendationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetEBSVolumeRecommendationsOutcome ComputeOptimizerClient::GetEBSVolumeRecommendations(
    const GetEBSVolumeRecommendationsRequest& request) const {
  return GetEBSVolumeRecommendationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetEC2InstanceRecommendationsOutcome ComputeOptimizerClient::GetEC2InstanceRecommendations(
    const GetEC2InstanceRecommendationsRequest& request) const {
  return GetEC2InstanceRecommendationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetEC2RecommendationProjectedMetricsOutcome ComputeOptimizerClient::GetEC2RecommendationProjectedMetrics(
    const GetEC2RecommendationProjectedMetricsRequest& request) const {
  return GetEC2RecommendationProjectedMetricsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetECSServiceRecommendationProjectedMetricsOutcome ComputeOptimizerClient::GetECSServiceRecommendationProjectedMetrics(
    const GetECSServiceRecommendationProjectedMetricsRequest& request) const {
  return GetECSServiceRecommendationProjectedMetricsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetECSServiceRecommendationsOutcome ComputeOptimizerClient::GetECSServiceRecommendations(
    const GetECSServiceRecommendationsRequest& request) const {
  return GetECSServiceRecommendationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetEffectiveRecommendationPreferencesOutcome ComputeOptimizerClient::GetEffectiveRecommendationPreferences(
    const GetEffectiveRecommendationPreferencesRequest& request) const {
  return GetEffectiveRecommendationPreferencesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetEnrollmentStatusOutcome ComputeOptimizerClient::GetEnrollmentStatus(const GetEnrollmentStatusRequest& request) const {
  return GetEnrollmentStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetEnrollmentStatusesForOrganizationOutcome ComputeOptimizerClient::GetEnrollmentStatusesForOrganization(
    const GetEnrollmentStatusesForOrganizationRequest& request) const {
  return GetEnrollmentStatusesForOrganizationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetIdleRecommendationsOutcome ComputeOptimizerClient::GetIdleRecommendations(const GetIdleRecommendationsRequest& request) const {
  return GetIdleRecommendationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetLambdaFunctionRecommendationsOutcome ComputeOptimizerClient::GetLambdaFunctionRecommendations(
    const GetLambdaFunctionRecommendationsRequest& request) const {
  return GetLambdaFunctionRecommendationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetLicenseRecommendationsOutcome ComputeOptimizerClient::GetLicenseRecommendations(const GetLicenseRecommendationsRequest& request) const {
  return GetLicenseRecommendationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRDSDatabaseRecommendationProjectedMetricsOutcome ComputeOptimizerClient::GetRDSDatabaseRecommendationProjectedMetrics(
    const GetRDSDatabaseRecommendationProjectedMetricsRequest& request) const {
  return GetRDSDatabaseRecommendationProjectedMetricsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRDSDatabaseRecommendationsOutcome ComputeOptimizerClient::GetRDSDatabaseRecommendations(
    const GetRDSDatabaseRecommendationsRequest& request) const {
  return GetRDSDatabaseRecommendationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRecommendationPreferencesOutcome ComputeOptimizerClient::GetRecommendationPreferences(
    const GetRecommendationPreferencesRequest& request) const {
  return GetRecommendationPreferencesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRecommendationSummariesOutcome ComputeOptimizerClient::GetRecommendationSummaries(
    const GetRecommendationSummariesRequest& request) const {
  return GetRecommendationSummariesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutRecommendationPreferencesOutcome ComputeOptimizerClient::PutRecommendationPreferences(
    const PutRecommendationPreferencesRequest& request) const {
  return PutRecommendationPreferencesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateEnrollmentStatusOutcome ComputeOptimizerClient::UpdateEnrollmentStatus(const UpdateEnrollmentStatusRequest& request) const {
  return UpdateEnrollmentStatusOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
