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
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchCreateBillScenarioCommitmentModificationOutcome(result.GetResultWithOwnership())
                            : BatchCreateBillScenarioCommitmentModificationOutcome(std::move(result.GetError()));
}

BatchCreateBillScenarioUsageModificationOutcome BCMPricingCalculatorClient::BatchCreateBillScenarioUsageModification(
    const BatchCreateBillScenarioUsageModificationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchCreateBillScenarioUsageModificationOutcome(result.GetResultWithOwnership())
                            : BatchCreateBillScenarioUsageModificationOutcome(std::move(result.GetError()));
}

BatchCreateWorkloadEstimateUsageOutcome BCMPricingCalculatorClient::BatchCreateWorkloadEstimateUsage(
    const BatchCreateWorkloadEstimateUsageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchCreateWorkloadEstimateUsageOutcome(result.GetResultWithOwnership())
                            : BatchCreateWorkloadEstimateUsageOutcome(std::move(result.GetError()));
}

BatchDeleteBillScenarioCommitmentModificationOutcome BCMPricingCalculatorClient::BatchDeleteBillScenarioCommitmentModification(
    const BatchDeleteBillScenarioCommitmentModificationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchDeleteBillScenarioCommitmentModificationOutcome(result.GetResultWithOwnership())
                            : BatchDeleteBillScenarioCommitmentModificationOutcome(std::move(result.GetError()));
}

BatchDeleteBillScenarioUsageModificationOutcome BCMPricingCalculatorClient::BatchDeleteBillScenarioUsageModification(
    const BatchDeleteBillScenarioUsageModificationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchDeleteBillScenarioUsageModificationOutcome(result.GetResultWithOwnership())
                            : BatchDeleteBillScenarioUsageModificationOutcome(std::move(result.GetError()));
}

BatchDeleteWorkloadEstimateUsageOutcome BCMPricingCalculatorClient::BatchDeleteWorkloadEstimateUsage(
    const BatchDeleteWorkloadEstimateUsageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchDeleteWorkloadEstimateUsageOutcome(result.GetResultWithOwnership())
                            : BatchDeleteWorkloadEstimateUsageOutcome(std::move(result.GetError()));
}

BatchUpdateBillScenarioCommitmentModificationOutcome BCMPricingCalculatorClient::BatchUpdateBillScenarioCommitmentModification(
    const BatchUpdateBillScenarioCommitmentModificationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchUpdateBillScenarioCommitmentModificationOutcome(result.GetResultWithOwnership())
                            : BatchUpdateBillScenarioCommitmentModificationOutcome(std::move(result.GetError()));
}

BatchUpdateBillScenarioUsageModificationOutcome BCMPricingCalculatorClient::BatchUpdateBillScenarioUsageModification(
    const BatchUpdateBillScenarioUsageModificationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchUpdateBillScenarioUsageModificationOutcome(result.GetResultWithOwnership())
                            : BatchUpdateBillScenarioUsageModificationOutcome(std::move(result.GetError()));
}

BatchUpdateWorkloadEstimateUsageOutcome BCMPricingCalculatorClient::BatchUpdateWorkloadEstimateUsage(
    const BatchUpdateWorkloadEstimateUsageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchUpdateWorkloadEstimateUsageOutcome(result.GetResultWithOwnership())
                            : BatchUpdateWorkloadEstimateUsageOutcome(std::move(result.GetError()));
}

CreateBillEstimateOutcome BCMPricingCalculatorClient::CreateBillEstimate(const CreateBillEstimateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateBillEstimateOutcome(result.GetResultWithOwnership())
                            : CreateBillEstimateOutcome(std::move(result.GetError()));
}

CreateBillScenarioOutcome BCMPricingCalculatorClient::CreateBillScenario(const CreateBillScenarioRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateBillScenarioOutcome(result.GetResultWithOwnership())
                            : CreateBillScenarioOutcome(std::move(result.GetError()));
}

CreateWorkloadEstimateOutcome BCMPricingCalculatorClient::CreateWorkloadEstimate(const CreateWorkloadEstimateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateWorkloadEstimateOutcome(result.GetResultWithOwnership())
                            : CreateWorkloadEstimateOutcome(std::move(result.GetError()));
}

DeleteBillEstimateOutcome BCMPricingCalculatorClient::DeleteBillEstimate(const DeleteBillEstimateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteBillEstimateOutcome(result.GetResultWithOwnership())
                            : DeleteBillEstimateOutcome(std::move(result.GetError()));
}

DeleteBillScenarioOutcome BCMPricingCalculatorClient::DeleteBillScenario(const DeleteBillScenarioRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteBillScenarioOutcome(result.GetResultWithOwnership())
                            : DeleteBillScenarioOutcome(std::move(result.GetError()));
}

DeleteWorkloadEstimateOutcome BCMPricingCalculatorClient::DeleteWorkloadEstimate(const DeleteWorkloadEstimateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteWorkloadEstimateOutcome(result.GetResultWithOwnership())
                            : DeleteWorkloadEstimateOutcome(std::move(result.GetError()));
}

GetBillEstimateOutcome BCMPricingCalculatorClient::GetBillEstimate(const GetBillEstimateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetBillEstimateOutcome(result.GetResultWithOwnership())
                            : GetBillEstimateOutcome(std::move(result.GetError()));
}

GetBillScenarioOutcome BCMPricingCalculatorClient::GetBillScenario(const GetBillScenarioRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetBillScenarioOutcome(result.GetResultWithOwnership())
                            : GetBillScenarioOutcome(std::move(result.GetError()));
}

GetPreferencesOutcome BCMPricingCalculatorClient::GetPreferences(const GetPreferencesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetPreferencesOutcome(result.GetResultWithOwnership()) : GetPreferencesOutcome(std::move(result.GetError()));
}

GetWorkloadEstimateOutcome BCMPricingCalculatorClient::GetWorkloadEstimate(const GetWorkloadEstimateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetWorkloadEstimateOutcome(result.GetResultWithOwnership())
                            : GetWorkloadEstimateOutcome(std::move(result.GetError()));
}

ListBillEstimateCommitmentsOutcome BCMPricingCalculatorClient::ListBillEstimateCommitments(
    const ListBillEstimateCommitmentsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListBillEstimateCommitmentsOutcome(result.GetResultWithOwnership())
                            : ListBillEstimateCommitmentsOutcome(std::move(result.GetError()));
}

ListBillEstimateInputCommitmentModificationsOutcome BCMPricingCalculatorClient::ListBillEstimateInputCommitmentModifications(
    const ListBillEstimateInputCommitmentModificationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListBillEstimateInputCommitmentModificationsOutcome(result.GetResultWithOwnership())
                            : ListBillEstimateInputCommitmentModificationsOutcome(std::move(result.GetError()));
}

ListBillEstimateInputUsageModificationsOutcome BCMPricingCalculatorClient::ListBillEstimateInputUsageModifications(
    const ListBillEstimateInputUsageModificationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListBillEstimateInputUsageModificationsOutcome(result.GetResultWithOwnership())
                            : ListBillEstimateInputUsageModificationsOutcome(std::move(result.GetError()));
}

ListBillEstimateLineItemsOutcome BCMPricingCalculatorClient::ListBillEstimateLineItems(
    const ListBillEstimateLineItemsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListBillEstimateLineItemsOutcome(result.GetResultWithOwnership())
                            : ListBillEstimateLineItemsOutcome(std::move(result.GetError()));
}

ListBillEstimatesOutcome BCMPricingCalculatorClient::ListBillEstimates(const ListBillEstimatesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListBillEstimatesOutcome(result.GetResultWithOwnership())
                            : ListBillEstimatesOutcome(std::move(result.GetError()));
}

ListBillScenarioCommitmentModificationsOutcome BCMPricingCalculatorClient::ListBillScenarioCommitmentModifications(
    const ListBillScenarioCommitmentModificationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListBillScenarioCommitmentModificationsOutcome(result.GetResultWithOwnership())
                            : ListBillScenarioCommitmentModificationsOutcome(std::move(result.GetError()));
}

ListBillScenarioUsageModificationsOutcome BCMPricingCalculatorClient::ListBillScenarioUsageModifications(
    const ListBillScenarioUsageModificationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListBillScenarioUsageModificationsOutcome(result.GetResultWithOwnership())
                            : ListBillScenarioUsageModificationsOutcome(std::move(result.GetError()));
}

ListBillScenariosOutcome BCMPricingCalculatorClient::ListBillScenarios(const ListBillScenariosRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListBillScenariosOutcome(result.GetResultWithOwnership())
                            : ListBillScenariosOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome BCMPricingCalculatorClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

ListWorkloadEstimateUsageOutcome BCMPricingCalculatorClient::ListWorkloadEstimateUsage(
    const ListWorkloadEstimateUsageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListWorkloadEstimateUsageOutcome(result.GetResultWithOwnership())
                            : ListWorkloadEstimateUsageOutcome(std::move(result.GetError()));
}

ListWorkloadEstimatesOutcome BCMPricingCalculatorClient::ListWorkloadEstimates(const ListWorkloadEstimatesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListWorkloadEstimatesOutcome(result.GetResultWithOwnership())
                            : ListWorkloadEstimatesOutcome(std::move(result.GetError()));
}

TagResourceOutcome BCMPricingCalculatorClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome BCMPricingCalculatorClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateBillEstimateOutcome BCMPricingCalculatorClient::UpdateBillEstimate(const UpdateBillEstimateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateBillEstimateOutcome(result.GetResultWithOwnership())
                            : UpdateBillEstimateOutcome(std::move(result.GetError()));
}

UpdateBillScenarioOutcome BCMPricingCalculatorClient::UpdateBillScenario(const UpdateBillScenarioRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateBillScenarioOutcome(result.GetResultWithOwnership())
                            : UpdateBillScenarioOutcome(std::move(result.GetError()));
}

UpdatePreferencesOutcome BCMPricingCalculatorClient::UpdatePreferences(const UpdatePreferencesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdatePreferencesOutcome(result.GetResultWithOwnership())
                            : UpdatePreferencesOutcome(std::move(result.GetError()));
}

UpdateWorkloadEstimateOutcome BCMPricingCalculatorClient::UpdateWorkloadEstimate(const UpdateWorkloadEstimateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateWorkloadEstimateOutcome(result.GetResultWithOwnership())
                            : UpdateWorkloadEstimateOutcome(std::move(result.GetError()));
}
