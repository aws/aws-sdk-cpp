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
#include <aws/devops-guru/DevOpsGuruClient.h>
#include <aws/devops-guru/DevOpsGuruEndpointProvider.h>
#include <aws/devops-guru/DevOpsGuruErrorMarshaller.h>
#include <aws/devops-guru/model/AddNotificationChannelRequest.h>
#include <aws/devops-guru/model/DeleteInsightRequest.h>
#include <aws/devops-guru/model/DescribeAccountHealthRequest.h>
#include <aws/devops-guru/model/DescribeAccountOverviewRequest.h>
#include <aws/devops-guru/model/DescribeAnomalyRequest.h>
#include <aws/devops-guru/model/DescribeEventSourcesConfigRequest.h>
#include <aws/devops-guru/model/DescribeFeedbackRequest.h>
#include <aws/devops-guru/model/DescribeInsightRequest.h>
#include <aws/devops-guru/model/DescribeOrganizationHealthRequest.h>
#include <aws/devops-guru/model/DescribeOrganizationOverviewRequest.h>
#include <aws/devops-guru/model/DescribeOrganizationResourceCollectionHealthRequest.h>
#include <aws/devops-guru/model/DescribeResourceCollectionHealthRequest.h>
#include <aws/devops-guru/model/DescribeServiceIntegrationRequest.h>
#include <aws/devops-guru/model/GetCostEstimationRequest.h>
#include <aws/devops-guru/model/GetResourceCollectionRequest.h>
#include <aws/devops-guru/model/ListAnomaliesForInsightRequest.h>
#include <aws/devops-guru/model/ListAnomalousLogGroupsRequest.h>
#include <aws/devops-guru/model/ListEventsRequest.h>
#include <aws/devops-guru/model/ListInsightsRequest.h>
#include <aws/devops-guru/model/ListMonitoredResourcesRequest.h>
#include <aws/devops-guru/model/ListNotificationChannelsRequest.h>
#include <aws/devops-guru/model/ListOrganizationInsightsRequest.h>
#include <aws/devops-guru/model/ListRecommendationsRequest.h>
#include <aws/devops-guru/model/PutFeedbackRequest.h>
#include <aws/devops-guru/model/RemoveNotificationChannelRequest.h>
#include <aws/devops-guru/model/SearchInsightsRequest.h>
#include <aws/devops-guru/model/SearchOrganizationInsightsRequest.h>
#include <aws/devops-guru/model/StartCostEstimationRequest.h>
#include <aws/devops-guru/model/UpdateEventSourcesConfigRequest.h>
#include <aws/devops-guru/model/UpdateResourceCollectionRequest.h>
#include <aws/devops-guru/model/UpdateServiceIntegrationRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DevOpsGuru;
using namespace Aws::DevOpsGuru::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace DevOpsGuru {
const char SERVICE_NAME[] = "devops-guru";
const char ALLOCATION_TAG[] = "DevOpsGuruClient";
}  // namespace DevOpsGuru
}  // namespace Aws
const char* DevOpsGuruClient::GetServiceName() { return SERVICE_NAME; }
const char* DevOpsGuruClient::GetAllocationTag() { return ALLOCATION_TAG; }

DevOpsGuruClient::DevOpsGuruClient(const DevOpsGuru::DevOpsGuruClientConfiguration& clientConfiguration,
                                   std::shared_ptr<DevOpsGuruEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DevOpsGuruErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DevOpsGuruEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DevOpsGuruClient::DevOpsGuruClient(const AWSCredentials& credentials, std::shared_ptr<DevOpsGuruEndpointProviderBase> endpointProvider,
                                   const DevOpsGuru::DevOpsGuruClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DevOpsGuruErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DevOpsGuruEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DevOpsGuruClient::DevOpsGuruClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<DevOpsGuruEndpointProviderBase> endpointProvider,
                                   const DevOpsGuru::DevOpsGuruClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DevOpsGuruErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DevOpsGuruEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
DevOpsGuruClient::DevOpsGuruClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DevOpsGuruErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DevOpsGuruEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DevOpsGuruClient::DevOpsGuruClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DevOpsGuruErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DevOpsGuruEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DevOpsGuruClient::DevOpsGuruClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DevOpsGuruErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DevOpsGuruEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
DevOpsGuruClient::~DevOpsGuruClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<DevOpsGuruEndpointProviderBase>& DevOpsGuruClient::accessEndpointProvider() { return m_endpointProvider; }

void DevOpsGuruClient::init(const DevOpsGuru::DevOpsGuruClientConfiguration& config) {
  AWSClient::SetServiceClientName("DevOps Guru");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "devops-guru");
}

void DevOpsGuruClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
DevOpsGuruClient::InvokeOperationOutcome DevOpsGuruClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
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

        resolveUri(endpointResolutionOutcome);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

AddNotificationChannelOutcome DevOpsGuruClient::AddNotificationChannel(const AddNotificationChannelRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? AddNotificationChannelOutcome(result.GetResultWithOwnership())
                            : AddNotificationChannelOutcome(std::move(result.GetError()));
}

DeleteInsightOutcome DevOpsGuruClient::DeleteInsight(const DeleteInsightRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteInsight", "Required field: Id, is not set");
    return DeleteInsightOutcome(Aws::Client::AWSError<DevOpsGuruErrors>(DevOpsGuruErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/insights/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteInsightOutcome(result.GetResultWithOwnership()) : DeleteInsightOutcome(std::move(result.GetError()));
}

DescribeAccountHealthOutcome DevOpsGuruClient::DescribeAccountHealth(const DescribeAccountHealthRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/health");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeAccountHealthOutcome(result.GetResultWithOwnership())
                            : DescribeAccountHealthOutcome(std::move(result.GetError()));
}

DescribeAccountOverviewOutcome DevOpsGuruClient::DescribeAccountOverview(const DescribeAccountOverviewRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/overview");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAccountOverviewOutcome(result.GetResultWithOwnership())
                            : DescribeAccountOverviewOutcome(std::move(result.GetError()));
}

DescribeAnomalyOutcome DevOpsGuruClient::DescribeAnomaly(const DescribeAnomalyRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAnomaly", "Required field: Id, is not set");
    return DescribeAnomalyOutcome(Aws::Client::AWSError<DevOpsGuruErrors>(DevOpsGuruErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/anomalies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeAnomalyOutcome(result.GetResultWithOwnership())
                            : DescribeAnomalyOutcome(std::move(result.GetError()));
}

DescribeEventSourcesConfigOutcome DevOpsGuruClient::DescribeEventSourcesConfig(const DescribeEventSourcesConfigRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-sources");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeEventSourcesConfigOutcome(result.GetResultWithOwnership())
                            : DescribeEventSourcesConfigOutcome(std::move(result.GetError()));
}

DescribeFeedbackOutcome DevOpsGuruClient::DescribeFeedback(const DescribeFeedbackRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/feedback");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeFeedbackOutcome(result.GetResultWithOwnership())
                            : DescribeFeedbackOutcome(std::move(result.GetError()));
}

DescribeInsightOutcome DevOpsGuruClient::DescribeInsight(const DescribeInsightRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeInsight", "Required field: Id, is not set");
    return DescribeInsightOutcome(Aws::Client::AWSError<DevOpsGuruErrors>(DevOpsGuruErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/insights/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeInsightOutcome(result.GetResultWithOwnership())
                            : DescribeInsightOutcome(std::move(result.GetError()));
}

DescribeOrganizationHealthOutcome DevOpsGuruClient::DescribeOrganizationHealth(const DescribeOrganizationHealthRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/organization/health");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeOrganizationHealthOutcome(result.GetResultWithOwnership())
                            : DescribeOrganizationHealthOutcome(std::move(result.GetError()));
}

DescribeOrganizationOverviewOutcome DevOpsGuruClient::DescribeOrganizationOverview(
    const DescribeOrganizationOverviewRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/organization/overview");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeOrganizationOverviewOutcome(result.GetResultWithOwnership())
                            : DescribeOrganizationOverviewOutcome(std::move(result.GetError()));
}

DescribeOrganizationResourceCollectionHealthOutcome DevOpsGuruClient::DescribeOrganizationResourceCollectionHealth(
    const DescribeOrganizationResourceCollectionHealthRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/organization/health/resource-collection");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeOrganizationResourceCollectionHealthOutcome(result.GetResultWithOwnership())
                            : DescribeOrganizationResourceCollectionHealthOutcome(std::move(result.GetError()));
}

DescribeResourceCollectionHealthOutcome DevOpsGuruClient::DescribeResourceCollectionHealth(
    const DescribeResourceCollectionHealthRequest& request) const {
  if (!request.ResourceCollectionTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeResourceCollectionHealth", "Required field: ResourceCollectionType, is not set");
    return DescribeResourceCollectionHealthOutcome(Aws::Client::AWSError<DevOpsGuruErrors>(
        DevOpsGuruErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceCollectionType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/health/resource-collection/");
    endpointResolutionOutcome.GetResult().AddPathSegment(
        ResourceCollectionTypeMapper::GetNameForResourceCollectionType(request.GetResourceCollectionType()));
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeResourceCollectionHealthOutcome(result.GetResultWithOwnership())
                            : DescribeResourceCollectionHealthOutcome(std::move(result.GetError()));
}

DescribeServiceIntegrationOutcome DevOpsGuruClient::DescribeServiceIntegration(const DescribeServiceIntegrationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/service-integrations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeServiceIntegrationOutcome(result.GetResultWithOwnership())
                            : DescribeServiceIntegrationOutcome(std::move(result.GetError()));
}

GetCostEstimationOutcome DevOpsGuruClient::GetCostEstimation(const GetCostEstimationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cost-estimation");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetCostEstimationOutcome(result.GetResultWithOwnership())
                            : GetCostEstimationOutcome(std::move(result.GetError()));
}

GetResourceCollectionOutcome DevOpsGuruClient::GetResourceCollection(const GetResourceCollectionRequest& request) const {
  if (!request.ResourceCollectionTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetResourceCollection", "Required field: ResourceCollectionType, is not set");
    return GetResourceCollectionOutcome(Aws::Client::AWSError<DevOpsGuruErrors>(DevOpsGuruErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ResourceCollectionType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resource-collections/");
    endpointResolutionOutcome.GetResult().AddPathSegment(
        ResourceCollectionTypeMapper::GetNameForResourceCollectionType(request.GetResourceCollectionType()));
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetResourceCollectionOutcome(result.GetResultWithOwnership())
                            : GetResourceCollectionOutcome(std::move(result.GetError()));
}

ListAnomaliesForInsightOutcome DevOpsGuruClient::ListAnomaliesForInsight(const ListAnomaliesForInsightRequest& request) const {
  if (!request.InsightIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAnomaliesForInsight", "Required field: InsightId, is not set");
    return ListAnomaliesForInsightOutcome(Aws::Client::AWSError<DevOpsGuruErrors>(DevOpsGuruErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [InsightId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/anomalies/insight/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInsightId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAnomaliesForInsightOutcome(result.GetResultWithOwnership())
                            : ListAnomaliesForInsightOutcome(std::move(result.GetError()));
}

ListAnomalousLogGroupsOutcome DevOpsGuruClient::ListAnomalousLogGroups(const ListAnomalousLogGroupsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-log-anomalies");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAnomalousLogGroupsOutcome(result.GetResultWithOwnership())
                            : ListAnomalousLogGroupsOutcome(std::move(result.GetError()));
}

ListEventsOutcome DevOpsGuruClient::ListEvents(const ListEventsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/events");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListEventsOutcome(result.GetResultWithOwnership()) : ListEventsOutcome(std::move(result.GetError()));
}

ListInsightsOutcome DevOpsGuruClient::ListInsights(const ListInsightsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/insights");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListInsightsOutcome(result.GetResultWithOwnership()) : ListInsightsOutcome(std::move(result.GetError()));
}

ListMonitoredResourcesOutcome DevOpsGuruClient::ListMonitoredResources(const ListMonitoredResourcesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/monitoredResources");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListMonitoredResourcesOutcome(result.GetResultWithOwnership())
                            : ListMonitoredResourcesOutcome(std::move(result.GetError()));
}

ListNotificationChannelsOutcome DevOpsGuruClient::ListNotificationChannels(const ListNotificationChannelsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListNotificationChannelsOutcome(result.GetResultWithOwnership())
                            : ListNotificationChannelsOutcome(std::move(result.GetError()));
}

ListOrganizationInsightsOutcome DevOpsGuruClient::ListOrganizationInsights(const ListOrganizationInsightsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/organization/insights");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListOrganizationInsightsOutcome(result.GetResultWithOwnership())
                            : ListOrganizationInsightsOutcome(std::move(result.GetError()));
}

ListRecommendationsOutcome DevOpsGuruClient::ListRecommendations(const ListRecommendationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/recommendations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListRecommendationsOutcome(result.GetResultWithOwnership())
                            : ListRecommendationsOutcome(std::move(result.GetError()));
}

PutFeedbackOutcome DevOpsGuruClient::PutFeedback(const PutFeedbackRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/feedback");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutFeedbackOutcome(result.GetResultWithOwnership()) : PutFeedbackOutcome(std::move(result.GetError()));
}

RemoveNotificationChannelOutcome DevOpsGuruClient::RemoveNotificationChannel(const RemoveNotificationChannelRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveNotificationChannel", "Required field: Id, is not set");
    return RemoveNotificationChannelOutcome(Aws::Client::AWSError<DevOpsGuruErrors>(
        DevOpsGuruErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? RemoveNotificationChannelOutcome(result.GetResultWithOwnership())
                            : RemoveNotificationChannelOutcome(std::move(result.GetError()));
}

SearchInsightsOutcome DevOpsGuruClient::SearchInsights(const SearchInsightsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/insights/search");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchInsightsOutcome(result.GetResultWithOwnership()) : SearchInsightsOutcome(std::move(result.GetError()));
}

SearchOrganizationInsightsOutcome DevOpsGuruClient::SearchOrganizationInsights(const SearchOrganizationInsightsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/organization/insights/search");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchOrganizationInsightsOutcome(result.GetResultWithOwnership())
                            : SearchOrganizationInsightsOutcome(std::move(result.GetError()));
}

StartCostEstimationOutcome DevOpsGuruClient::StartCostEstimation(const StartCostEstimationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cost-estimation");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? StartCostEstimationOutcome(result.GetResultWithOwnership())
                            : StartCostEstimationOutcome(std::move(result.GetError()));
}

UpdateEventSourcesConfigOutcome DevOpsGuruClient::UpdateEventSourcesConfig(const UpdateEventSourcesConfigRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-sources");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateEventSourcesConfigOutcome(result.GetResultWithOwnership())
                            : UpdateEventSourcesConfigOutcome(std::move(result.GetError()));
}

UpdateResourceCollectionOutcome DevOpsGuruClient::UpdateResourceCollection(const UpdateResourceCollectionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resource-collections");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateResourceCollectionOutcome(result.GetResultWithOwnership())
                            : UpdateResourceCollectionOutcome(std::move(result.GetError()));
}

UpdateServiceIntegrationOutcome DevOpsGuruClient::UpdateServiceIntegration(const UpdateServiceIntegrationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/service-integrations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateServiceIntegrationOutcome(result.GetResultWithOwnership())
                            : UpdateServiceIntegrationOutcome(std::move(result.GetError()));
}
