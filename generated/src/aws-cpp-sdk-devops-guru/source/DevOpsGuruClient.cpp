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

  return AddNotificationChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return DeleteInsightOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DescribeAccountHealthOutcome DevOpsGuruClient::DescribeAccountHealth(const DescribeAccountHealthRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/health");
  };

  return DescribeAccountHealthOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeAccountOverviewOutcome DevOpsGuruClient::DescribeAccountOverview(const DescribeAccountOverviewRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/overview");
  };

  return DescribeAccountOverviewOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return DescribeAnomalyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeEventSourcesConfigOutcome DevOpsGuruClient::DescribeEventSourcesConfig(const DescribeEventSourcesConfigRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-sources");
  };

  return DescribeEventSourcesConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFeedbackOutcome DevOpsGuruClient::DescribeFeedback(const DescribeFeedbackRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/feedback");
  };

  return DescribeFeedbackOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return DescribeInsightOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeOrganizationHealthOutcome DevOpsGuruClient::DescribeOrganizationHealth(const DescribeOrganizationHealthRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/organization/health");
  };

  return DescribeOrganizationHealthOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeOrganizationOverviewOutcome DevOpsGuruClient::DescribeOrganizationOverview(
    const DescribeOrganizationOverviewRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/organization/overview");
  };

  return DescribeOrganizationOverviewOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeOrganizationResourceCollectionHealthOutcome DevOpsGuruClient::DescribeOrganizationResourceCollectionHealth(
    const DescribeOrganizationResourceCollectionHealthRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/organization/health/resource-collection");
  };

  return DescribeOrganizationResourceCollectionHealthOutcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return DescribeResourceCollectionHealthOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeServiceIntegrationOutcome DevOpsGuruClient::DescribeServiceIntegration(const DescribeServiceIntegrationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/service-integrations");
  };

  return DescribeServiceIntegrationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCostEstimationOutcome DevOpsGuruClient::GetCostEstimation(const GetCostEstimationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cost-estimation");
  };

  return GetCostEstimationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetResourceCollectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListAnomaliesForInsightOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAnomalousLogGroupsOutcome DevOpsGuruClient::ListAnomalousLogGroups(const ListAnomalousLogGroupsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-log-anomalies");
  };

  return ListAnomalousLogGroupsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEventsOutcome DevOpsGuruClient::ListEvents(const ListEventsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/events");
  };

  return ListEventsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListInsightsOutcome DevOpsGuruClient::ListInsights(const ListInsightsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/insights");
  };

  return ListInsightsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMonitoredResourcesOutcome DevOpsGuruClient::ListMonitoredResources(const ListMonitoredResourcesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/monitoredResources");
  };

  return ListMonitoredResourcesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListNotificationChannelsOutcome DevOpsGuruClient::ListNotificationChannels(const ListNotificationChannelsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/channels");
  };

  return ListNotificationChannelsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListOrganizationInsightsOutcome DevOpsGuruClient::ListOrganizationInsights(const ListOrganizationInsightsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/organization/insights");
  };

  return ListOrganizationInsightsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRecommendationsOutcome DevOpsGuruClient::ListRecommendations(const ListRecommendationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/recommendations");
  };

  return ListRecommendationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PutFeedbackOutcome DevOpsGuruClient::PutFeedback(const PutFeedbackRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/feedback");
  };

  return PutFeedbackOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return RemoveNotificationChannelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

SearchInsightsOutcome DevOpsGuruClient::SearchInsights(const SearchInsightsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/insights/search");
  };

  return SearchInsightsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchOrganizationInsightsOutcome DevOpsGuruClient::SearchOrganizationInsights(const SearchOrganizationInsightsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/organization/insights/search");
  };

  return SearchOrganizationInsightsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartCostEstimationOutcome DevOpsGuruClient::StartCostEstimation(const StartCostEstimationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cost-estimation");
  };

  return StartCostEstimationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateEventSourcesConfigOutcome DevOpsGuruClient::UpdateEventSourcesConfig(const UpdateEventSourcesConfigRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/event-sources");
  };

  return UpdateEventSourcesConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateResourceCollectionOutcome DevOpsGuruClient::UpdateResourceCollection(const UpdateResourceCollectionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resource-collections");
  };

  return UpdateResourceCollectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateServiceIntegrationOutcome DevOpsGuruClient::UpdateServiceIntegration(const UpdateServiceIntegrationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/service-integrations");
  };

  return UpdateServiceIntegrationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
