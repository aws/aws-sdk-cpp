/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehendmedical/ComprehendMedicalClient.h>
#include <aws/comprehendmedical/ComprehendMedicalEndpointProvider.h>
#include <aws/comprehendmedical/ComprehendMedicalErrorMarshaller.h>
#include <aws/comprehendmedical/model/DescribeEntitiesDetectionV2JobRequest.h>
#include <aws/comprehendmedical/model/DescribeICD10CMInferenceJobRequest.h>
#include <aws/comprehendmedical/model/DescribePHIDetectionJobRequest.h>
#include <aws/comprehendmedical/model/DescribeRxNormInferenceJobRequest.h>
#include <aws/comprehendmedical/model/DescribeSNOMEDCTInferenceJobRequest.h>
#include <aws/comprehendmedical/model/DetectEntitiesV2Request.h>
#include <aws/comprehendmedical/model/DetectPHIRequest.h>
#include <aws/comprehendmedical/model/InferICD10CMRequest.h>
#include <aws/comprehendmedical/model/InferRxNormRequest.h>
#include <aws/comprehendmedical/model/InferSNOMEDCTRequest.h>
#include <aws/comprehendmedical/model/ListEntitiesDetectionV2JobsRequest.h>
#include <aws/comprehendmedical/model/ListICD10CMInferenceJobsRequest.h>
#include <aws/comprehendmedical/model/ListPHIDetectionJobsRequest.h>
#include <aws/comprehendmedical/model/ListRxNormInferenceJobsRequest.h>
#include <aws/comprehendmedical/model/ListSNOMEDCTInferenceJobsRequest.h>
#include <aws/comprehendmedical/model/StartEntitiesDetectionV2JobRequest.h>
#include <aws/comprehendmedical/model/StartICD10CMInferenceJobRequest.h>
#include <aws/comprehendmedical/model/StartPHIDetectionJobRequest.h>
#include <aws/comprehendmedical/model/StartRxNormInferenceJobRequest.h>
#include <aws/comprehendmedical/model/StartSNOMEDCTInferenceJobRequest.h>
#include <aws/comprehendmedical/model/StopEntitiesDetectionV2JobRequest.h>
#include <aws/comprehendmedical/model/StopICD10CMInferenceJobRequest.h>
#include <aws/comprehendmedical/model/StopPHIDetectionJobRequest.h>
#include <aws/comprehendmedical/model/StopRxNormInferenceJobRequest.h>
#include <aws/comprehendmedical/model/StopSNOMEDCTInferenceJobRequest.h>
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
using namespace Aws::ComprehendMedical;
using namespace Aws::ComprehendMedical::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ComprehendMedical {
const char SERVICE_NAME[] = "comprehendmedical";
const char ALLOCATION_TAG[] = "ComprehendMedicalClient";
}  // namespace ComprehendMedical
}  // namespace Aws
const char* ComprehendMedicalClient::GetServiceName() { return SERVICE_NAME; }
const char* ComprehendMedicalClient::GetAllocationTag() { return ALLOCATION_TAG; }

ComprehendMedicalClient::ComprehendMedicalClient(const ComprehendMedical::ComprehendMedicalClientConfiguration& clientConfiguration,
                                                 std::shared_ptr<ComprehendMedicalEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ComprehendMedicalErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ComprehendMedicalEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ComprehendMedicalClient::ComprehendMedicalClient(const AWSCredentials& credentials,
                                                 std::shared_ptr<ComprehendMedicalEndpointProviderBase> endpointProvider,
                                                 const ComprehendMedical::ComprehendMedicalClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ComprehendMedicalErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ComprehendMedicalEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ComprehendMedicalClient::ComprehendMedicalClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 std::shared_ptr<ComprehendMedicalEndpointProviderBase> endpointProvider,
                                                 const ComprehendMedical::ComprehendMedicalClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ComprehendMedicalErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ComprehendMedicalEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ComprehendMedicalClient::ComprehendMedicalClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ComprehendMedicalErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ComprehendMedicalEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ComprehendMedicalClient::ComprehendMedicalClient(const AWSCredentials& credentials,
                                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ComprehendMedicalErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ComprehendMedicalEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ComprehendMedicalClient::ComprehendMedicalClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ComprehendMedicalErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ComprehendMedicalEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ComprehendMedicalClient::~ComprehendMedicalClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ComprehendMedicalEndpointProviderBase>& ComprehendMedicalClient::accessEndpointProvider() { return m_endpointProvider; }

void ComprehendMedicalClient::init(const ComprehendMedical::ComprehendMedicalClientConfiguration& config) {
  AWSClient::SetServiceClientName("ComprehendMedical");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "comprehendmedical");
}

void ComprehendMedicalClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ComprehendMedicalClient::InvokeOperationOutcome ComprehendMedicalClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

DescribeEntitiesDetectionV2JobOutcome ComprehendMedicalClient::DescribeEntitiesDetectionV2Job(
    const DescribeEntitiesDetectionV2JobRequest& request) const {
  return DescribeEntitiesDetectionV2JobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeICD10CMInferenceJobOutcome ComprehendMedicalClient::DescribeICD10CMInferenceJob(
    const DescribeICD10CMInferenceJobRequest& request) const {
  return DescribeICD10CMInferenceJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribePHIDetectionJobOutcome ComprehendMedicalClient::DescribePHIDetectionJob(const DescribePHIDetectionJobRequest& request) const {
  return DescribePHIDetectionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeRxNormInferenceJobOutcome ComprehendMedicalClient::DescribeRxNormInferenceJob(
    const DescribeRxNormInferenceJobRequest& request) const {
  return DescribeRxNormInferenceJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSNOMEDCTInferenceJobOutcome ComprehendMedicalClient::DescribeSNOMEDCTInferenceJob(
    const DescribeSNOMEDCTInferenceJobRequest& request) const {
  return DescribeSNOMEDCTInferenceJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetectEntitiesV2Outcome ComprehendMedicalClient::DetectEntitiesV2(const DetectEntitiesV2Request& request) const {
  return DetectEntitiesV2Outcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DetectPHIOutcome ComprehendMedicalClient::DetectPHI(const DetectPHIRequest& request) const {
  return DetectPHIOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

InferICD10CMOutcome ComprehendMedicalClient::InferICD10CM(const InferICD10CMRequest& request) const {
  return InferICD10CMOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

InferRxNormOutcome ComprehendMedicalClient::InferRxNorm(const InferRxNormRequest& request) const {
  return InferRxNormOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

InferSNOMEDCTOutcome ComprehendMedicalClient::InferSNOMEDCT(const InferSNOMEDCTRequest& request) const {
  return InferSNOMEDCTOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEntitiesDetectionV2JobsOutcome ComprehendMedicalClient::ListEntitiesDetectionV2Jobs(
    const ListEntitiesDetectionV2JobsRequest& request) const {
  return ListEntitiesDetectionV2JobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListICD10CMInferenceJobsOutcome ComprehendMedicalClient::ListICD10CMInferenceJobs(const ListICD10CMInferenceJobsRequest& request) const {
  return ListICD10CMInferenceJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPHIDetectionJobsOutcome ComprehendMedicalClient::ListPHIDetectionJobs(const ListPHIDetectionJobsRequest& request) const {
  return ListPHIDetectionJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRxNormInferenceJobsOutcome ComprehendMedicalClient::ListRxNormInferenceJobs(const ListRxNormInferenceJobsRequest& request) const {
  return ListRxNormInferenceJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSNOMEDCTInferenceJobsOutcome ComprehendMedicalClient::ListSNOMEDCTInferenceJobs(const ListSNOMEDCTInferenceJobsRequest& request) const {
  return ListSNOMEDCTInferenceJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartEntitiesDetectionV2JobOutcome ComprehendMedicalClient::StartEntitiesDetectionV2Job(
    const StartEntitiesDetectionV2JobRequest& request) const {
  return StartEntitiesDetectionV2JobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartICD10CMInferenceJobOutcome ComprehendMedicalClient::StartICD10CMInferenceJob(const StartICD10CMInferenceJobRequest& request) const {
  return StartICD10CMInferenceJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartPHIDetectionJobOutcome ComprehendMedicalClient::StartPHIDetectionJob(const StartPHIDetectionJobRequest& request) const {
  return StartPHIDetectionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartRxNormInferenceJobOutcome ComprehendMedicalClient::StartRxNormInferenceJob(const StartRxNormInferenceJobRequest& request) const {
  return StartRxNormInferenceJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartSNOMEDCTInferenceJobOutcome ComprehendMedicalClient::StartSNOMEDCTInferenceJob(const StartSNOMEDCTInferenceJobRequest& request) const {
  return StartSNOMEDCTInferenceJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopEntitiesDetectionV2JobOutcome ComprehendMedicalClient::StopEntitiesDetectionV2Job(
    const StopEntitiesDetectionV2JobRequest& request) const {
  return StopEntitiesDetectionV2JobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopICD10CMInferenceJobOutcome ComprehendMedicalClient::StopICD10CMInferenceJob(const StopICD10CMInferenceJobRequest& request) const {
  return StopICD10CMInferenceJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopPHIDetectionJobOutcome ComprehendMedicalClient::StopPHIDetectionJob(const StopPHIDetectionJobRequest& request) const {
  return StopPHIDetectionJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopRxNormInferenceJobOutcome ComprehendMedicalClient::StopRxNormInferenceJob(const StopRxNormInferenceJobRequest& request) const {
  return StopRxNormInferenceJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopSNOMEDCTInferenceJobOutcome ComprehendMedicalClient::StopSNOMEDCTInferenceJob(const StopSNOMEDCTInferenceJobRequest& request) const {
  return StopSNOMEDCTInferenceJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
