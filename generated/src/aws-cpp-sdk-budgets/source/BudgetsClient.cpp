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
  return CreateBudgetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateBudgetActionOutcome BudgetsClient::CreateBudgetAction(const CreateBudgetActionRequest& request) const {
  return CreateBudgetActionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateNotificationOutcome BudgetsClient::CreateNotification(const CreateNotificationRequest& request) const {
  return CreateNotificationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSubscriberOutcome BudgetsClient::CreateSubscriber(const CreateSubscriberRequest& request) const {
  return CreateSubscriberOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteBudgetOutcome BudgetsClient::DeleteBudget(const DeleteBudgetRequest& request) const {
  return DeleteBudgetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteBudgetActionOutcome BudgetsClient::DeleteBudgetAction(const DeleteBudgetActionRequest& request) const {
  return DeleteBudgetActionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteNotificationOutcome BudgetsClient::DeleteNotification(const DeleteNotificationRequest& request) const {
  return DeleteNotificationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSubscriberOutcome BudgetsClient::DeleteSubscriber(const DeleteSubscriberRequest& request) const {
  return DeleteSubscriberOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeBudgetOutcome BudgetsClient::DescribeBudget(const DescribeBudgetRequest& request) const {
  return DescribeBudgetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeBudgetActionOutcome BudgetsClient::DescribeBudgetAction(const DescribeBudgetActionRequest& request) const {
  return DescribeBudgetActionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeBudgetActionHistoriesOutcome BudgetsClient::DescribeBudgetActionHistories(
    const DescribeBudgetActionHistoriesRequest& request) const {
  return DescribeBudgetActionHistoriesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeBudgetActionsForAccountOutcome BudgetsClient::DescribeBudgetActionsForAccount(
    const DescribeBudgetActionsForAccountRequest& request) const {
  return DescribeBudgetActionsForAccountOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeBudgetActionsForBudgetOutcome BudgetsClient::DescribeBudgetActionsForBudget(
    const DescribeBudgetActionsForBudgetRequest& request) const {
  return DescribeBudgetActionsForBudgetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeBudgetNotificationsForAccountOutcome BudgetsClient::DescribeBudgetNotificationsForAccount(
    const DescribeBudgetNotificationsForAccountRequest& request) const {
  return DescribeBudgetNotificationsForAccountOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeBudgetPerformanceHistoryOutcome BudgetsClient::DescribeBudgetPerformanceHistory(
    const DescribeBudgetPerformanceHistoryRequest& request) const {
  return DescribeBudgetPerformanceHistoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeBudgetsOutcome BudgetsClient::DescribeBudgets(const DescribeBudgetsRequest& request) const {
  return DescribeBudgetsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeNotificationsForBudgetOutcome BudgetsClient::DescribeNotificationsForBudget(
    const DescribeNotificationsForBudgetRequest& request) const {
  return DescribeNotificationsForBudgetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSubscribersForNotificationOutcome BudgetsClient::DescribeSubscribersForNotification(
    const DescribeSubscribersForNotificationRequest& request) const {
  return DescribeSubscribersForNotificationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ExecuteBudgetActionOutcome BudgetsClient::ExecuteBudgetAction(const ExecuteBudgetActionRequest& request) const {
  return ExecuteBudgetActionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome BudgetsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome BudgetsClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome BudgetsClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateBudgetOutcome BudgetsClient::UpdateBudget(const UpdateBudgetRequest& request) const {
  return UpdateBudgetOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateBudgetActionOutcome BudgetsClient::UpdateBudgetAction(const UpdateBudgetActionRequest& request) const {
  return UpdateBudgetActionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateNotificationOutcome BudgetsClient::UpdateNotification(const UpdateNotificationRequest& request) const {
  return UpdateNotificationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateSubscriberOutcome BudgetsClient::UpdateSubscriber(const UpdateSubscriberRequest& request) const {
  return UpdateSubscriberOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
