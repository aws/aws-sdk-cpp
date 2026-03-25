/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/BCMPricingCalculatorClient.h>
#include <aws/bcm-pricing-calculator/BCMPricingCalculatorEndpointProvider.h>
#include <aws/bcm-pricing-calculator/BCMPricingCalculatorErrorMarshaller.h>
#include <aws/bcm-pricing-calculator/model/BatchCreateBillScenarioCommitmentModificationRequest.h>
#include <aws/bcm-pricing-calculator/model/BatchCreateBillScenarioUsageModificationRequest.h>
#include <aws/bcm-pricing-calculator/model/BatchCreateWorkloadEstimateUsageRequest.h>
#include <aws/bcm-pricing-calculator/model/BatchDeleteBillScenarioCommitmentModificationRequest.h>
#include <aws/bcm-pricing-calculator/model/BatchDeleteBillScenarioUsageModificationRequest.h>
#include <aws/bcm-pricing-calculator/model/BatchDeleteWorkloadEstimateUsageRequest.h>
#include <aws/bcm-pricing-calculator/model/BatchUpdateBillScenarioCommitmentModificationRequest.h>
#include <aws/bcm-pricing-calculator/model/BatchUpdateBillScenarioUsageModificationRequest.h>
#include <aws/bcm-pricing-calculator/model/BatchUpdateWorkloadEstimateUsageRequest.h>
#include <aws/bcm-pricing-calculator/model/CreateBillEstimateRequest.h>
#include <aws/bcm-pricing-calculator/model/CreateBillScenarioRequest.h>
#include <aws/bcm-pricing-calculator/model/CreateWorkloadEstimateRequest.h>
#include <aws/bcm-pricing-calculator/model/DeleteBillEstimateRequest.h>
#include <aws/bcm-pricing-calculator/model/DeleteBillScenarioRequest.h>
#include <aws/bcm-pricing-calculator/model/DeleteWorkloadEstimateRequest.h>
#include <aws/bcm-pricing-calculator/model/GetBillEstimateRequest.h>
#include <aws/bcm-pricing-calculator/model/GetBillScenarioRequest.h>
#include <aws/bcm-pricing-calculator/model/GetPreferencesRequest.h>
#include <aws/bcm-pricing-calculator/model/GetWorkloadEstimateRequest.h>
#include <aws/bcm-pricing-calculator/model/ListBillEstimateCommitmentsRequest.h>
#include <aws/bcm-pricing-calculator/model/ListBillEstimateInputCommitmentModificationsRequest.h>
#include <aws/bcm-pricing-calculator/model/ListBillEstimateInputUsageModificationsRequest.h>
#include <aws/bcm-pricing-calculator/model/ListBillEstimateLineItemsRequest.h>
#include <aws/bcm-pricing-calculator/model/ListBillEstimatesRequest.h>
#include <aws/bcm-pricing-calculator/model/ListBillScenarioCommitmentModificationsRequest.h>
#include <aws/bcm-pricing-calculator/model/ListBillScenarioUsageModificationsRequest.h>
#include <aws/bcm-pricing-calculator/model/ListBillScenariosRequest.h>
#include <aws/bcm-pricing-calculator/model/ListTagsForResourceRequest.h>
#include <aws/bcm-pricing-calculator/model/ListWorkloadEstimateUsageRequest.h>
#include <aws/bcm-pricing-calculator/model/ListWorkloadEstimatesRequest.h>
#include <aws/bcm-pricing-calculator/model/TagResourceRequest.h>
#include <aws/bcm-pricing-calculator/model/UntagResourceRequest.h>
#include <aws/bcm-pricing-calculator/model/UpdateBillEstimateRequest.h>
#include <aws/bcm-pricing-calculator/model/UpdateBillScenarioRequest.h>
#include <aws/bcm-pricing-calculator/model/UpdatePreferencesRequest.h>
#include <aws/bcm-pricing-calculator/model/UpdateWorkloadEstimateRequest.h>
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
using namespace Aws::BCMPricingCalculator;
using namespace Aws::BCMPricingCalculator::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace BCMPricingCalculator {
const char SERVICE_NAME[] = "bcm-pricing-calculator";
const char ALLOCATION_TAG[] = "BCMPricingCalculatorClient";
}  // namespace BCMPricingCalculator
}  // namespace Aws
const char* BCMPricingCalculatorClient::GetServiceName() { return SERVICE_NAME; }
const char* BCMPricingCalculatorClient::GetAllocationTag() { return ALLOCATION_TAG; }

BCMPricingCalculatorClient::BCMPricingCalculatorClient(
    const BCMPricingCalculator::BCMPricingCalculatorClientConfiguration& clientConfiguration,
    std::shared_ptr<BCMPricingCalculatorEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BCMPricingCalculatorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<BCMPricingCalculatorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

BCMPricingCalculatorClient::BCMPricingCalculatorClient(
    const AWSCredentials& credentials, std::shared_ptr<BCMPricingCalculatorEndpointProviderBase> endpointProvider,
    const BCMPricingCalculator::BCMPricingCalculatorClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BCMPricingCalculatorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<BCMPricingCalculatorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

BCMPricingCalculatorClient::BCMPricingCalculatorClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<BCMPricingCalculatorEndpointProviderBase> endpointProvider,
    const BCMPricingCalculator::BCMPricingCalculatorClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BCMPricingCalculatorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<BCMPricingCalculatorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
BCMPricingCalculatorClient::BCMPricingCalculatorClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BCMPricingCalculatorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<BCMPricingCalculatorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

BCMPricingCalculatorClient::BCMPricingCalculatorClient(const AWSCredentials& credentials,
                                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BCMPricingCalculatorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<BCMPricingCalculatorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

BCMPricingCalculatorClient::BCMPricingCalculatorClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BCMPricingCalculatorErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<BCMPricingCalculatorEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
BCMPricingCalculatorClient::~BCMPricingCalculatorClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<BCMPricingCalculatorEndpointProviderBase>& BCMPricingCalculatorClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void BCMPricingCalculatorClient::init(const BCMPricingCalculator::BCMPricingCalculatorClientConfiguration& config) {
  AWSClient::SetServiceClientName("BCM Pricing Calculator");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "bcm-pricing-calculator");
}

void BCMPricingCalculatorClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
BCMPricingCalculatorClient::InvokeOperationOutcome BCMPricingCalculatorClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, Aws::Http::HttpMethod httpMethod) const {
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

BatchCreateBillScenarioCommitmentModificationOutcome BCMPricingCalculatorClient::BatchCreateBillScenarioCommitmentModification(
    const BatchCreateBillScenarioCommitmentModificationRequest& request) const {
  return BatchCreateBillScenarioCommitmentModificationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchCreateBillScenarioUsageModificationOutcome BCMPricingCalculatorClient::BatchCreateBillScenarioUsageModification(
    const BatchCreateBillScenarioUsageModificationRequest& request) const {
  return BatchCreateBillScenarioUsageModificationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchCreateWorkloadEstimateUsageOutcome BCMPricingCalculatorClient::BatchCreateWorkloadEstimateUsage(
    const BatchCreateWorkloadEstimateUsageRequest& request) const {
  return BatchCreateWorkloadEstimateUsageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDeleteBillScenarioCommitmentModificationOutcome BCMPricingCalculatorClient::BatchDeleteBillScenarioCommitmentModification(
    const BatchDeleteBillScenarioCommitmentModificationRequest& request) const {
  return BatchDeleteBillScenarioCommitmentModificationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDeleteBillScenarioUsageModificationOutcome BCMPricingCalculatorClient::BatchDeleteBillScenarioUsageModification(
    const BatchDeleteBillScenarioUsageModificationRequest& request) const {
  return BatchDeleteBillScenarioUsageModificationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDeleteWorkloadEstimateUsageOutcome BCMPricingCalculatorClient::BatchDeleteWorkloadEstimateUsage(
    const BatchDeleteWorkloadEstimateUsageRequest& request) const {
  return BatchDeleteWorkloadEstimateUsageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchUpdateBillScenarioCommitmentModificationOutcome BCMPricingCalculatorClient::BatchUpdateBillScenarioCommitmentModification(
    const BatchUpdateBillScenarioCommitmentModificationRequest& request) const {
  return BatchUpdateBillScenarioCommitmentModificationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchUpdateBillScenarioUsageModificationOutcome BCMPricingCalculatorClient::BatchUpdateBillScenarioUsageModification(
    const BatchUpdateBillScenarioUsageModificationRequest& request) const {
  return BatchUpdateBillScenarioUsageModificationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchUpdateWorkloadEstimateUsageOutcome BCMPricingCalculatorClient::BatchUpdateWorkloadEstimateUsage(
    const BatchUpdateWorkloadEstimateUsageRequest& request) const {
  return BatchUpdateWorkloadEstimateUsageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateBillEstimateOutcome BCMPricingCalculatorClient::CreateBillEstimate(const CreateBillEstimateRequest& request) const {
  return CreateBillEstimateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateBillScenarioOutcome BCMPricingCalculatorClient::CreateBillScenario(const CreateBillScenarioRequest& request) const {
  return CreateBillScenarioOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWorkloadEstimateOutcome BCMPricingCalculatorClient::CreateWorkloadEstimate(const CreateWorkloadEstimateRequest& request) const {
  return CreateWorkloadEstimateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteBillEstimateOutcome BCMPricingCalculatorClient::DeleteBillEstimate(const DeleteBillEstimateRequest& request) const {
  return DeleteBillEstimateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteBillScenarioOutcome BCMPricingCalculatorClient::DeleteBillScenario(const DeleteBillScenarioRequest& request) const {
  return DeleteBillScenarioOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteWorkloadEstimateOutcome BCMPricingCalculatorClient::DeleteWorkloadEstimate(const DeleteWorkloadEstimateRequest& request) const {
  return DeleteWorkloadEstimateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetBillEstimateOutcome BCMPricingCalculatorClient::GetBillEstimate(const GetBillEstimateRequest& request) const {
  return GetBillEstimateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetBillScenarioOutcome BCMPricingCalculatorClient::GetBillScenario(const GetBillScenarioRequest& request) const {
  return GetBillScenarioOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPreferencesOutcome BCMPricingCalculatorClient::GetPreferences(const GetPreferencesRequest& request) const {
  return GetPreferencesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetWorkloadEstimateOutcome BCMPricingCalculatorClient::GetWorkloadEstimate(const GetWorkloadEstimateRequest& request) const {
  return GetWorkloadEstimateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListBillEstimateCommitmentsOutcome BCMPricingCalculatorClient::ListBillEstimateCommitments(
    const ListBillEstimateCommitmentsRequest& request) const {
  return ListBillEstimateCommitmentsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListBillEstimateInputCommitmentModificationsOutcome BCMPricingCalculatorClient::ListBillEstimateInputCommitmentModifications(
    const ListBillEstimateInputCommitmentModificationsRequest& request) const {
  return ListBillEstimateInputCommitmentModificationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListBillEstimateInputUsageModificationsOutcome BCMPricingCalculatorClient::ListBillEstimateInputUsageModifications(
    const ListBillEstimateInputUsageModificationsRequest& request) const {
  return ListBillEstimateInputUsageModificationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListBillEstimateLineItemsOutcome BCMPricingCalculatorClient::ListBillEstimateLineItems(
    const ListBillEstimateLineItemsRequest& request) const {
  return ListBillEstimateLineItemsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListBillEstimatesOutcome BCMPricingCalculatorClient::ListBillEstimates(const ListBillEstimatesRequest& request) const {
  return ListBillEstimatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListBillScenarioCommitmentModificationsOutcome BCMPricingCalculatorClient::ListBillScenarioCommitmentModifications(
    const ListBillScenarioCommitmentModificationsRequest& request) const {
  return ListBillScenarioCommitmentModificationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListBillScenarioUsageModificationsOutcome BCMPricingCalculatorClient::ListBillScenarioUsageModifications(
    const ListBillScenarioUsageModificationsRequest& request) const {
  return ListBillScenarioUsageModificationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListBillScenariosOutcome BCMPricingCalculatorClient::ListBillScenarios(const ListBillScenariosRequest& request) const {
  return ListBillScenariosOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome BCMPricingCalculatorClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListWorkloadEstimateUsageOutcome BCMPricingCalculatorClient::ListWorkloadEstimateUsage(
    const ListWorkloadEstimateUsageRequest& request) const {
  return ListWorkloadEstimateUsageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListWorkloadEstimatesOutcome BCMPricingCalculatorClient::ListWorkloadEstimates(const ListWorkloadEstimatesRequest& request) const {
  return ListWorkloadEstimatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome BCMPricingCalculatorClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome BCMPricingCalculatorClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateBillEstimateOutcome BCMPricingCalculatorClient::UpdateBillEstimate(const UpdateBillEstimateRequest& request) const {
  return UpdateBillEstimateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateBillScenarioOutcome BCMPricingCalculatorClient::UpdateBillScenario(const UpdateBillScenarioRequest& request) const {
  return UpdateBillScenarioOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdatePreferencesOutcome BCMPricingCalculatorClient::UpdatePreferences(const UpdatePreferencesRequest& request) const {
  return UpdatePreferencesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateWorkloadEstimateOutcome BCMPricingCalculatorClient::UpdateWorkloadEstimate(const UpdateWorkloadEstimateRequest& request) const {
  return UpdateWorkloadEstimateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
