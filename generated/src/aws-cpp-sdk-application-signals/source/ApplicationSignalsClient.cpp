/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/ApplicationSignalsClient.h>
#include <aws/application-signals/ApplicationSignalsEndpointProvider.h>
#include <aws/application-signals/ApplicationSignalsErrorMarshaller.h>
#include <aws/application-signals/model/BatchGetServiceLevelObjectiveBudgetReportRequest.h>
#include <aws/application-signals/model/BatchUpdateExclusionWindowsRequest.h>
#include <aws/application-signals/model/CreateServiceLevelObjectiveRequest.h>
#include <aws/application-signals/model/DeleteGroupingConfigurationRequest.h>
#include <aws/application-signals/model/DeleteServiceLevelObjectiveRequest.h>
#include <aws/application-signals/model/GetServiceLevelObjectiveRequest.h>
#include <aws/application-signals/model/GetServiceRequest.h>
#include <aws/application-signals/model/ListAuditFindingsRequest.h>
#include <aws/application-signals/model/ListEntityEventsRequest.h>
#include <aws/application-signals/model/ListGroupingAttributeDefinitionsRequest.h>
#include <aws/application-signals/model/ListServiceDependenciesRequest.h>
#include <aws/application-signals/model/ListServiceDependentsRequest.h>
#include <aws/application-signals/model/ListServiceLevelObjectiveExclusionWindowsRequest.h>
#include <aws/application-signals/model/ListServiceLevelObjectivesRequest.h>
#include <aws/application-signals/model/ListServiceOperationsRequest.h>
#include <aws/application-signals/model/ListServiceStatesRequest.h>
#include <aws/application-signals/model/ListServicesRequest.h>
#include <aws/application-signals/model/ListTagsForResourceRequest.h>
#include <aws/application-signals/model/PutGroupingConfigurationRequest.h>
#include <aws/application-signals/model/StartDiscoveryRequest.h>
#include <aws/application-signals/model/TagResourceRequest.h>
#include <aws/application-signals/model/UntagResourceRequest.h>
#include <aws/application-signals/model/UpdateServiceLevelObjectiveRequest.h>
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
using namespace Aws::ApplicationSignals;
using namespace Aws::ApplicationSignals::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ApplicationSignals {
const char SERVICE_NAME[] = "application-signals";
const char ALLOCATION_TAG[] = "ApplicationSignalsClient";
}  // namespace ApplicationSignals
}  // namespace Aws
const char* ApplicationSignalsClient::GetServiceName() { return SERVICE_NAME; }
const char* ApplicationSignalsClient::GetAllocationTag() { return ALLOCATION_TAG; }

ApplicationSignalsClient::ApplicationSignalsClient(const ApplicationSignals::ApplicationSignalsClientConfiguration& clientConfiguration,
                                                   std::shared_ptr<ApplicationSignalsEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ApplicationSignalsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ApplicationSignalsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ApplicationSignalsClient::ApplicationSignalsClient(const AWSCredentials& credentials,
                                                   std::shared_ptr<ApplicationSignalsEndpointProviderBase> endpointProvider,
                                                   const ApplicationSignals::ApplicationSignalsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ApplicationSignalsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ApplicationSignalsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ApplicationSignalsClient::ApplicationSignalsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   std::shared_ptr<ApplicationSignalsEndpointProviderBase> endpointProvider,
                                                   const ApplicationSignals::ApplicationSignalsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ApplicationSignalsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<ApplicationSignalsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ApplicationSignalsClient::ApplicationSignalsClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ApplicationSignalsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ApplicationSignalsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ApplicationSignalsClient::ApplicationSignalsClient(const AWSCredentials& credentials,
                                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ApplicationSignalsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ApplicationSignalsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ApplicationSignalsClient::ApplicationSignalsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ApplicationSignalsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ApplicationSignalsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ApplicationSignalsClient::~ApplicationSignalsClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ApplicationSignalsEndpointProviderBase>& ApplicationSignalsClient::accessEndpointProvider() { return m_endpointProvider; }

void ApplicationSignalsClient::init(const ApplicationSignals::ApplicationSignalsClientConfiguration& config) {
  AWSClient::SetServiceClientName("Application Signals");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "application-signals");
}

void ApplicationSignalsClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ApplicationSignalsClient::InvokeOperationOutcome ApplicationSignalsClient::InvokeServiceOperation(
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

BatchGetServiceLevelObjectiveBudgetReportOutcome ApplicationSignalsClient::BatchGetServiceLevelObjectiveBudgetReport(
    const BatchGetServiceLevelObjectiveBudgetReportRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/budget-report");
  };

  return BatchGetServiceLevelObjectiveBudgetReportOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchUpdateExclusionWindowsOutcome ApplicationSignalsClient::BatchUpdateExclusionWindows(
    const BatchUpdateExclusionWindowsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/exclusion-windows");
  };

  return BatchUpdateExclusionWindowsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

CreateServiceLevelObjectiveOutcome ApplicationSignalsClient::CreateServiceLevelObjective(
    const CreateServiceLevelObjectiveRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/slo");
  };

  return CreateServiceLevelObjectiveOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteGroupingConfigurationOutcome ApplicationSignalsClient::DeleteGroupingConfiguration(
    const DeleteGroupingConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/grouping-configuration");
  };

  return DeleteGroupingConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteServiceLevelObjectiveOutcome ApplicationSignalsClient::DeleteServiceLevelObjective(
    const DeleteServiceLevelObjectiveRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteServiceLevelObjective", "Required field: Id, is not set");
    return DeleteServiceLevelObjectiveOutcome(Aws::Client::AWSError<ApplicationSignalsErrors>(
        ApplicationSignalsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/slo/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteServiceLevelObjectiveOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

GetServiceOutcome ApplicationSignalsClient::GetService(const GetServiceRequest& request) const {
  if (!request.StartTimeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetService", "Required field: StartTime, is not set");
    return GetServiceOutcome(Aws::Client::AWSError<ApplicationSignalsErrors>(
        ApplicationSignalsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartTime]", false));
  }
  if (!request.EndTimeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetService", "Required field: EndTime, is not set");
    return GetServiceOutcome(Aws::Client::AWSError<ApplicationSignalsErrors>(
        ApplicationSignalsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndTime]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/service");
  };

  return GetServiceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetServiceLevelObjectiveOutcome ApplicationSignalsClient::GetServiceLevelObjective(const GetServiceLevelObjectiveRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetServiceLevelObjective", "Required field: Id, is not set");
    return GetServiceLevelObjectiveOutcome(Aws::Client::AWSError<ApplicationSignalsErrors>(
        ApplicationSignalsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/slo/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetServiceLevelObjectiveOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAuditFindingsOutcome ApplicationSignalsClient::ListAuditFindings(const ListAuditFindingsRequest& request) const {
  if (!request.StartTimeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAuditFindings", "Required field: StartTime, is not set");
    return ListAuditFindingsOutcome(Aws::Client::AWSError<ApplicationSignalsErrors>(
        ApplicationSignalsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartTime]", false));
  }
  if (!request.EndTimeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAuditFindings", "Required field: EndTime, is not set");
    return ListAuditFindingsOutcome(Aws::Client::AWSError<ApplicationSignalsErrors>(
        ApplicationSignalsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndTime]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/auditFindings");
  };

  return ListAuditFindingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListEntityEventsOutcome ApplicationSignalsClient::ListEntityEvents(const ListEntityEventsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/events");
  };

  return ListEntityEventsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListGroupingAttributeDefinitionsOutcome ApplicationSignalsClient::ListGroupingAttributeDefinitions(
    const ListGroupingAttributeDefinitionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/grouping-attribute-definitions");
  };

  return ListGroupingAttributeDefinitionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListServiceDependenciesOutcome ApplicationSignalsClient::ListServiceDependencies(const ListServiceDependenciesRequest& request) const {
  if (!request.StartTimeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListServiceDependencies", "Required field: StartTime, is not set");
    return ListServiceDependenciesOutcome(Aws::Client::AWSError<ApplicationSignalsErrors>(
        ApplicationSignalsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartTime]", false));
  }
  if (!request.EndTimeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListServiceDependencies", "Required field: EndTime, is not set");
    return ListServiceDependenciesOutcome(Aws::Client::AWSError<ApplicationSignalsErrors>(
        ApplicationSignalsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndTime]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/service-dependencies");
  };

  return ListServiceDependenciesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListServiceDependentsOutcome ApplicationSignalsClient::ListServiceDependents(const ListServiceDependentsRequest& request) const {
  if (!request.StartTimeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListServiceDependents", "Required field: StartTime, is not set");
    return ListServiceDependentsOutcome(Aws::Client::AWSError<ApplicationSignalsErrors>(
        ApplicationSignalsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartTime]", false));
  }
  if (!request.EndTimeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListServiceDependents", "Required field: EndTime, is not set");
    return ListServiceDependentsOutcome(Aws::Client::AWSError<ApplicationSignalsErrors>(
        ApplicationSignalsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndTime]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/service-dependents");
  };

  return ListServiceDependentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListServiceLevelObjectiveExclusionWindowsOutcome ApplicationSignalsClient::ListServiceLevelObjectiveExclusionWindows(
    const ListServiceLevelObjectiveExclusionWindowsRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListServiceLevelObjectiveExclusionWindows", "Required field: Id, is not set");
    return ListServiceLevelObjectiveExclusionWindowsOutcome(Aws::Client::AWSError<ApplicationSignalsErrors>(
        ApplicationSignalsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/slo/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/exclusion-windows");
  };

  return ListServiceLevelObjectiveExclusionWindowsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListServiceLevelObjectivesOutcome ApplicationSignalsClient::ListServiceLevelObjectives(
    const ListServiceLevelObjectivesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/slos");
  };

  return ListServiceLevelObjectivesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListServiceOperationsOutcome ApplicationSignalsClient::ListServiceOperations(const ListServiceOperationsRequest& request) const {
  if (!request.StartTimeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListServiceOperations", "Required field: StartTime, is not set");
    return ListServiceOperationsOutcome(Aws::Client::AWSError<ApplicationSignalsErrors>(
        ApplicationSignalsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartTime]", false));
  }
  if (!request.EndTimeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListServiceOperations", "Required field: EndTime, is not set");
    return ListServiceOperationsOutcome(Aws::Client::AWSError<ApplicationSignalsErrors>(
        ApplicationSignalsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndTime]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/service-operations");
  };

  return ListServiceOperationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListServiceStatesOutcome ApplicationSignalsClient::ListServiceStates(const ListServiceStatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/service/states");
  };

  return ListServiceStatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListServicesOutcome ApplicationSignalsClient::ListServices(const ListServicesRequest& request) const {
  if (!request.StartTimeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListServices", "Required field: StartTime, is not set");
    return ListServicesOutcome(Aws::Client::AWSError<ApplicationSignalsErrors>(
        ApplicationSignalsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartTime]", false));
  }
  if (!request.EndTimeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListServices", "Required field: EndTime, is not set");
    return ListServicesOutcome(Aws::Client::AWSError<ApplicationSignalsErrors>(
        ApplicationSignalsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndTime]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/services");
  };

  return ListServicesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome ApplicationSignalsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ApplicationSignalsErrors>(
        ApplicationSignalsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PutGroupingConfigurationOutcome ApplicationSignalsClient::PutGroupingConfiguration(const PutGroupingConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/grouping-configuration");
  };

  return PutGroupingConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

StartDiscoveryOutcome ApplicationSignalsClient::StartDiscovery(const StartDiscoveryRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/start-discovery");
  };

  return StartDiscoveryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome ApplicationSignalsClient::TagResource(const TagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tag-resource");
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome ApplicationSignalsClient::UntagResource(const UntagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/untag-resource");
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateServiceLevelObjectiveOutcome ApplicationSignalsClient::UpdateServiceLevelObjective(
    const UpdateServiceLevelObjectiveRequest& request) const {
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateServiceLevelObjective", "Required field: Id, is not set");
    return UpdateServiceLevelObjectiveOutcome(Aws::Client::AWSError<ApplicationSignalsErrors>(
        ApplicationSignalsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/slo/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return UpdateServiceLevelObjectiveOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}
