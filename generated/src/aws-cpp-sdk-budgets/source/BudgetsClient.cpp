/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/BudgetsClient.h>
#include <aws/budgets/BudgetsEndpointProvider.h>
#include <aws/budgets/BudgetsErrorMarshaller.h>
#include <aws/budgets/model/CreateBudgetActionRequest.h>
#include <aws/budgets/model/CreateBudgetRequest.h>
#include <aws/budgets/model/CreateNotificationRequest.h>
#include <aws/budgets/model/CreateSubscriberRequest.h>
#include <aws/budgets/model/DeleteBudgetActionRequest.h>
#include <aws/budgets/model/DeleteBudgetRequest.h>
#include <aws/budgets/model/DeleteNotificationRequest.h>
#include <aws/budgets/model/DeleteSubscriberRequest.h>
#include <aws/budgets/model/DescribeBudgetActionHistoriesRequest.h>
#include <aws/budgets/model/DescribeBudgetActionRequest.h>
#include <aws/budgets/model/DescribeBudgetActionsForAccountRequest.h>
#include <aws/budgets/model/DescribeBudgetActionsForBudgetRequest.h>
#include <aws/budgets/model/DescribeBudgetNotificationsForAccountRequest.h>
#include <aws/budgets/model/DescribeBudgetPerformanceHistoryRequest.h>
#include <aws/budgets/model/DescribeBudgetRequest.h>
#include <aws/budgets/model/DescribeBudgetsRequest.h>
#include <aws/budgets/model/DescribeNotificationsForBudgetRequest.h>
#include <aws/budgets/model/DescribeSubscribersForNotificationRequest.h>
#include <aws/budgets/model/ExecuteBudgetActionRequest.h>
#include <aws/budgets/model/ListTagsForResourceRequest.h>
#include <aws/budgets/model/TagResourceRequest.h>
#include <aws/budgets/model/UntagResourceRequest.h>
#include <aws/budgets/model/UpdateBudgetActionRequest.h>
#include <aws/budgets/model/UpdateBudgetRequest.h>
#include <aws/budgets/model/UpdateNotificationRequest.h>
#include <aws/budgets/model/UpdateSubscriberRequest.h>
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
using namespace Aws::Budgets;
using namespace Aws::Budgets::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Budgets {
const char SERVICE_NAME[] = "budgets";
const char ALLOCATION_TAG[] = "BudgetsClient";
}  // namespace Budgets
}  // namespace Aws
const char* BudgetsClient::GetServiceName() { return SERVICE_NAME; }
const char* BudgetsClient::GetAllocationTag() { return ALLOCATION_TAG; }

BudgetsClient::BudgetsClient(const Budgets::BudgetsClientConfiguration& clientConfiguration,
                             std::shared_ptr<BudgetsEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BudgetsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<BudgetsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

BudgetsClient::BudgetsClient(const AWSCredentials& credentials, std::shared_ptr<BudgetsEndpointProviderBase> endpointProvider,
                             const Budgets::BudgetsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BudgetsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<BudgetsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

BudgetsClient::BudgetsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<BudgetsEndpointProviderBase> endpointProvider,
                             const Budgets::BudgetsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BudgetsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<BudgetsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
BudgetsClient::BudgetsClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BudgetsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<BudgetsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

BudgetsClient::BudgetsClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BudgetsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<BudgetsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

BudgetsClient::BudgetsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BudgetsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<BudgetsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
BudgetsClient::~BudgetsClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<BudgetsEndpointProviderBase>& BudgetsClient::accessEndpointProvider() { return m_endpointProvider; }

void BudgetsClient::init(const Budgets::BudgetsClientConfiguration& config) {
  AWSClient::SetServiceClientName("Budgets");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "budgets");
}

void BudgetsClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
BudgetsClient::InvokeOperationOutcome BudgetsClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

CreateBudgetOutcome BudgetsClient::CreateBudget(const CreateBudgetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateBudgetOutcome(result.GetResultWithOwnership()) : CreateBudgetOutcome(std::move(result.GetError()));
}

CreateBudgetActionOutcome BudgetsClient::CreateBudgetAction(const CreateBudgetActionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateBudgetActionOutcome(result.GetResultWithOwnership())
                            : CreateBudgetActionOutcome(std::move(result.GetError()));
}

CreateNotificationOutcome BudgetsClient::CreateNotification(const CreateNotificationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateNotificationOutcome(result.GetResultWithOwnership())
                            : CreateNotificationOutcome(std::move(result.GetError()));
}

CreateSubscriberOutcome BudgetsClient::CreateSubscriber(const CreateSubscriberRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSubscriberOutcome(result.GetResultWithOwnership())
                            : CreateSubscriberOutcome(std::move(result.GetError()));
}

DeleteBudgetOutcome BudgetsClient::DeleteBudget(const DeleteBudgetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteBudgetOutcome(result.GetResultWithOwnership()) : DeleteBudgetOutcome(std::move(result.GetError()));
}

DeleteBudgetActionOutcome BudgetsClient::DeleteBudgetAction(const DeleteBudgetActionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteBudgetActionOutcome(result.GetResultWithOwnership())
                            : DeleteBudgetActionOutcome(std::move(result.GetError()));
}

DeleteNotificationOutcome BudgetsClient::DeleteNotification(const DeleteNotificationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteNotificationOutcome(result.GetResultWithOwnership())
                            : DeleteNotificationOutcome(std::move(result.GetError()));
}

DeleteSubscriberOutcome BudgetsClient::DeleteSubscriber(const DeleteSubscriberRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSubscriberOutcome(result.GetResultWithOwnership())
                            : DeleteSubscriberOutcome(std::move(result.GetError()));
}

DescribeBudgetOutcome BudgetsClient::DescribeBudget(const DescribeBudgetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeBudgetOutcome(result.GetResultWithOwnership()) : DescribeBudgetOutcome(std::move(result.GetError()));
}

DescribeBudgetActionOutcome BudgetsClient::DescribeBudgetAction(const DescribeBudgetActionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeBudgetActionOutcome(result.GetResultWithOwnership())
                            : DescribeBudgetActionOutcome(std::move(result.GetError()));
}

DescribeBudgetActionHistoriesOutcome BudgetsClient::DescribeBudgetActionHistories(
    const DescribeBudgetActionHistoriesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeBudgetActionHistoriesOutcome(result.GetResultWithOwnership())
                            : DescribeBudgetActionHistoriesOutcome(std::move(result.GetError()));
}

DescribeBudgetActionsForAccountOutcome BudgetsClient::DescribeBudgetActionsForAccount(
    const DescribeBudgetActionsForAccountRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeBudgetActionsForAccountOutcome(result.GetResultWithOwnership())
                            : DescribeBudgetActionsForAccountOutcome(std::move(result.GetError()));
}

DescribeBudgetActionsForBudgetOutcome BudgetsClient::DescribeBudgetActionsForBudget(
    const DescribeBudgetActionsForBudgetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeBudgetActionsForBudgetOutcome(result.GetResultWithOwnership())
                            : DescribeBudgetActionsForBudgetOutcome(std::move(result.GetError()));
}

DescribeBudgetNotificationsForAccountOutcome BudgetsClient::DescribeBudgetNotificationsForAccount(
    const DescribeBudgetNotificationsForAccountRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeBudgetNotificationsForAccountOutcome(result.GetResultWithOwnership())
                            : DescribeBudgetNotificationsForAccountOutcome(std::move(result.GetError()));
}

DescribeBudgetPerformanceHistoryOutcome BudgetsClient::DescribeBudgetPerformanceHistory(
    const DescribeBudgetPerformanceHistoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeBudgetPerformanceHistoryOutcome(result.GetResultWithOwnership())
                            : DescribeBudgetPerformanceHistoryOutcome(std::move(result.GetError()));
}

DescribeBudgetsOutcome BudgetsClient::DescribeBudgets(const DescribeBudgetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeBudgetsOutcome(result.GetResultWithOwnership())
                            : DescribeBudgetsOutcome(std::move(result.GetError()));
}

DescribeNotificationsForBudgetOutcome BudgetsClient::DescribeNotificationsForBudget(
    const DescribeNotificationsForBudgetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeNotificationsForBudgetOutcome(result.GetResultWithOwnership())
                            : DescribeNotificationsForBudgetOutcome(std::move(result.GetError()));
}

DescribeSubscribersForNotificationOutcome BudgetsClient::DescribeSubscribersForNotification(
    const DescribeSubscribersForNotificationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeSubscribersForNotificationOutcome(result.GetResultWithOwnership())
                            : DescribeSubscribersForNotificationOutcome(std::move(result.GetError()));
}

ExecuteBudgetActionOutcome BudgetsClient::ExecuteBudgetAction(const ExecuteBudgetActionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ExecuteBudgetActionOutcome(result.GetResultWithOwnership())
                            : ExecuteBudgetActionOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome BudgetsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

TagResourceOutcome BudgetsClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome BudgetsClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateBudgetOutcome BudgetsClient::UpdateBudget(const UpdateBudgetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateBudgetOutcome(result.GetResultWithOwnership()) : UpdateBudgetOutcome(std::move(result.GetError()));
}

UpdateBudgetActionOutcome BudgetsClient::UpdateBudgetAction(const UpdateBudgetActionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateBudgetActionOutcome(result.GetResultWithOwnership())
                            : UpdateBudgetActionOutcome(std::move(result.GetError()));
}

UpdateNotificationOutcome BudgetsClient::UpdateNotification(const UpdateNotificationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateNotificationOutcome(result.GetResultWithOwnership())
                            : UpdateNotificationOutcome(std::move(result.GetError()));
}

UpdateSubscriberOutcome BudgetsClient::UpdateSubscriber(const UpdateSubscriberRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateSubscriberOutcome(result.GetResultWithOwnership())
                            : UpdateSubscriberOutcome(std::move(result.GetError()));
}
