/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

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
#include <aws/healthlake/HealthLakeClient.h>
#include <aws/healthlake/HealthLakeEndpointProvider.h>
#include <aws/healthlake/HealthLakeErrorMarshaller.h>
#include <aws/healthlake/model/CreateFHIRDatastoreRequest.h>
#include <aws/healthlake/model/DeleteFHIRDatastoreRequest.h>
#include <aws/healthlake/model/DescribeFHIRDatastoreRequest.h>
#include <aws/healthlake/model/DescribeFHIRExportJobRequest.h>
#include <aws/healthlake/model/DescribeFHIRImportJobRequest.h>
#include <aws/healthlake/model/ListFHIRDatastoresRequest.h>
#include <aws/healthlake/model/ListFHIRExportJobsRequest.h>
#include <aws/healthlake/model/ListFHIRImportJobsRequest.h>
#include <aws/healthlake/model/ListTagsForResourceRequest.h>
#include <aws/healthlake/model/StartFHIRExportJobRequest.h>
#include <aws/healthlake/model/StartFHIRImportJobRequest.h>
#include <aws/healthlake/model/TagResourceRequest.h>
#include <aws/healthlake/model/UntagResourceRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::HealthLake;
using namespace Aws::HealthLake::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace HealthLake {
const char SERVICE_NAME[] = "healthlake";
const char ALLOCATION_TAG[] = "HealthLakeClient";
}  // namespace HealthLake
}  // namespace Aws
const char* HealthLakeClient::GetServiceName() { return SERVICE_NAME; }
const char* HealthLakeClient::GetAllocationTag() { return ALLOCATION_TAG; }

HealthLakeClient::HealthLakeClient(const HealthLake::HealthLakeClientConfiguration& clientConfiguration,
                                   std::shared_ptr<HealthLakeEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<HealthLakeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<HealthLakeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

HealthLakeClient::HealthLakeClient(const AWSCredentials& credentials, std::shared_ptr<HealthLakeEndpointProviderBase> endpointProvider,
                                   const HealthLake::HealthLakeClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<HealthLakeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<HealthLakeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

HealthLakeClient::HealthLakeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<HealthLakeEndpointProviderBase> endpointProvider,
                                   const HealthLake::HealthLakeClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<HealthLakeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<HealthLakeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
HealthLakeClient::HealthLakeClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<HealthLakeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<HealthLakeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

HealthLakeClient::HealthLakeClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<HealthLakeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<HealthLakeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

HealthLakeClient::HealthLakeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<HealthLakeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<HealthLakeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
HealthLakeClient::~HealthLakeClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<HealthLakeEndpointProviderBase>& HealthLakeClient::accessEndpointProvider() { return m_endpointProvider; }

void HealthLakeClient::init(const HealthLake::HealthLakeClientConfiguration& config) {
  AWSClient::SetServiceClientName("HealthLake");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "healthlake");
}

void HealthLakeClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
HealthLakeClient::InvokeOperationOutcome HealthLakeClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

CreateFHIRDatastoreOutcome HealthLakeClient::CreateFHIRDatastore(const CreateFHIRDatastoreRequest& request) const {
  return CreateFHIRDatastoreOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteFHIRDatastoreOutcome HealthLakeClient::DeleteFHIRDatastore(const DeleteFHIRDatastoreRequest& request) const {
  return DeleteFHIRDatastoreOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFHIRDatastoreOutcome HealthLakeClient::DescribeFHIRDatastore(const DescribeFHIRDatastoreRequest& request) const {
  return DescribeFHIRDatastoreOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFHIRExportJobOutcome HealthLakeClient::DescribeFHIRExportJob(const DescribeFHIRExportJobRequest& request) const {
  return DescribeFHIRExportJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFHIRImportJobOutcome HealthLakeClient::DescribeFHIRImportJob(const DescribeFHIRImportJobRequest& request) const {
  return DescribeFHIRImportJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFHIRDatastoresOutcome HealthLakeClient::ListFHIRDatastores(const ListFHIRDatastoresRequest& request) const {
  return ListFHIRDatastoresOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFHIRExportJobsOutcome HealthLakeClient::ListFHIRExportJobs(const ListFHIRExportJobsRequest& request) const {
  return ListFHIRExportJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFHIRImportJobsOutcome HealthLakeClient::ListFHIRImportJobs(const ListFHIRImportJobsRequest& request) const {
  return ListFHIRImportJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome HealthLakeClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartFHIRExportJobOutcome HealthLakeClient::StartFHIRExportJob(const StartFHIRExportJobRequest& request) const {
  return StartFHIRExportJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartFHIRImportJobOutcome HealthLakeClient::StartFHIRImportJob(const StartFHIRImportJobRequest& request) const {
  return StartFHIRImportJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome HealthLakeClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome HealthLakeClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
