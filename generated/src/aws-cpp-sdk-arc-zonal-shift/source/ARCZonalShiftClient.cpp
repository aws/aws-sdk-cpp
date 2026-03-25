/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-zonal-shift/ARCZonalShiftClient.h>
#include <aws/arc-zonal-shift/ARCZonalShiftEndpointProvider.h>
#include <aws/arc-zonal-shift/ARCZonalShiftErrorMarshaller.h>
#include <aws/arc-zonal-shift/model/CancelPracticeRunRequest.h>
#include <aws/arc-zonal-shift/model/CancelZonalShiftRequest.h>
#include <aws/arc-zonal-shift/model/CreatePracticeRunConfigurationRequest.h>
#include <aws/arc-zonal-shift/model/DeletePracticeRunConfigurationRequest.h>
#include <aws/arc-zonal-shift/model/GetAutoshiftObserverNotificationStatusRequest.h>
#include <aws/arc-zonal-shift/model/GetManagedResourceRequest.h>
#include <aws/arc-zonal-shift/model/ListAutoshiftsRequest.h>
#include <aws/arc-zonal-shift/model/ListManagedResourcesRequest.h>
#include <aws/arc-zonal-shift/model/ListZonalShiftsRequest.h>
#include <aws/arc-zonal-shift/model/StartPracticeRunRequest.h>
#include <aws/arc-zonal-shift/model/StartZonalShiftRequest.h>
#include <aws/arc-zonal-shift/model/UpdateAutoshiftObserverNotificationStatusRequest.h>
#include <aws/arc-zonal-shift/model/UpdatePracticeRunConfigurationRequest.h>
#include <aws/arc-zonal-shift/model/UpdateZonalAutoshiftConfigurationRequest.h>
#include <aws/arc-zonal-shift/model/UpdateZonalShiftRequest.h>
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
using namespace Aws::ARCZonalShift;
using namespace Aws::ARCZonalShift::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ARCZonalShift {
const char SERVICE_NAME[] = "arc-zonal-shift";
const char ALLOCATION_TAG[] = "ARCZonalShiftClient";
}  // namespace ARCZonalShift
}  // namespace Aws
const char* ARCZonalShiftClient::GetServiceName() { return SERVICE_NAME; }
const char* ARCZonalShiftClient::GetAllocationTag() { return ALLOCATION_TAG; }

ARCZonalShiftClient::ARCZonalShiftClient(const ARCZonalShift::ARCZonalShiftClientConfiguration& clientConfiguration,
                                         std::shared_ptr<ARCZonalShiftEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ARCZonalShiftErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ARCZonalShiftEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ARCZonalShiftClient::ARCZonalShiftClient(const AWSCredentials& credentials,
                                         std::shared_ptr<ARCZonalShiftEndpointProviderBase> endpointProvider,
                                         const ARCZonalShift::ARCZonalShiftClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ARCZonalShiftErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ARCZonalShiftEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ARCZonalShiftClient::ARCZonalShiftClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<ARCZonalShiftEndpointProviderBase> endpointProvider,
                                         const ARCZonalShift::ARCZonalShiftClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ARCZonalShiftErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ARCZonalShiftEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ARCZonalShiftClient::ARCZonalShiftClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ARCZonalShiftErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ARCZonalShiftEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ARCZonalShiftClient::ARCZonalShiftClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ARCZonalShiftErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ARCZonalShiftEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ARCZonalShiftClient::ARCZonalShiftClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ARCZonalShiftErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ARCZonalShiftEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ARCZonalShiftClient::~ARCZonalShiftClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ARCZonalShiftEndpointProviderBase>& ARCZonalShiftClient::accessEndpointProvider() { return m_endpointProvider; }

void ARCZonalShiftClient::init(const ARCZonalShift::ARCZonalShiftClientConfiguration& config) {
  AWSClient::SetServiceClientName("ARC Zonal Shift");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "arc-zonal-shift");
}

void ARCZonalShiftClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ARCZonalShiftClient::InvokeOperationOutcome ARCZonalShiftClient::InvokeServiceOperation(
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

CancelPracticeRunOutcome ARCZonalShiftClient::CancelPracticeRun(const CancelPracticeRunRequest& request) const {
  if (!request.ZonalShiftIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelPracticeRun", "Required field: ZonalShiftId, is not set");
    return CancelPracticeRunOutcome(Aws::Client::AWSError<ARCZonalShiftErrors>(ARCZonalShiftErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ZonalShiftId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/practiceruns/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetZonalShiftId());
  };

  return CancelPracticeRunOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

CancelZonalShiftOutcome ARCZonalShiftClient::CancelZonalShift(const CancelZonalShiftRequest& request) const {
  if (!request.ZonalShiftIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelZonalShift", "Required field: ZonalShiftId, is not set");
    return CancelZonalShiftOutcome(Aws::Client::AWSError<ARCZonalShiftErrors>(ARCZonalShiftErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ZonalShiftId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/zonalshifts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetZonalShiftId());
  };

  return CancelZonalShiftOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

CreatePracticeRunConfigurationOutcome ARCZonalShiftClient::CreatePracticeRunConfiguration(
    const CreatePracticeRunConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration");
  };

  return CreatePracticeRunConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeletePracticeRunConfigurationOutcome ARCZonalShiftClient::DeletePracticeRunConfiguration(
    const DeletePracticeRunConfigurationRequest& request) const {
  if (!request.ResourceIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePracticeRunConfiguration", "Required field: ResourceIdentifier, is not set");
    return DeletePracticeRunConfigurationOutcome(Aws::Client::AWSError<ARCZonalShiftErrors>(
        ARCZonalShiftErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceIdentifier());
  };

  return DeletePracticeRunConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

GetAutoshiftObserverNotificationStatusOutcome ARCZonalShiftClient::GetAutoshiftObserverNotificationStatus(
    const GetAutoshiftObserverNotificationStatusRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/autoshift-observer-notification");
  };

  return GetAutoshiftObserverNotificationStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetManagedResourceOutcome ARCZonalShiftClient::GetManagedResource(const GetManagedResourceRequest& request) const {
  if (!request.ResourceIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetManagedResource", "Required field: ResourceIdentifier, is not set");
    return GetManagedResourceOutcome(Aws::Client::AWSError<ARCZonalShiftErrors>(ARCZonalShiftErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ResourceIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managedresources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceIdentifier());
  };

  return GetManagedResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAutoshiftsOutcome ARCZonalShiftClient::ListAutoshifts(const ListAutoshiftsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/autoshifts");
  };

  return ListAutoshiftsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListManagedResourcesOutcome ARCZonalShiftClient::ListManagedResources(const ListManagedResourcesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managedresources");
  };

  return ListManagedResourcesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListZonalShiftsOutcome ARCZonalShiftClient::ListZonalShifts(const ListZonalShiftsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/zonalshifts");
  };

  return ListZonalShiftsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

StartPracticeRunOutcome ARCZonalShiftClient::StartPracticeRun(const StartPracticeRunRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/practiceruns");
  };

  return StartPracticeRunOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartZonalShiftOutcome ARCZonalShiftClient::StartZonalShift(const StartZonalShiftRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/zonalshifts");
  };

  return StartZonalShiftOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAutoshiftObserverNotificationStatusOutcome ARCZonalShiftClient::UpdateAutoshiftObserverNotificationStatus(
    const UpdateAutoshiftObserverNotificationStatusRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/autoshift-observer-notification");
  };

  return UpdateAutoshiftObserverNotificationStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdatePracticeRunConfigurationOutcome ARCZonalShiftClient::UpdatePracticeRunConfiguration(
    const UpdatePracticeRunConfigurationRequest& request) const {
  if (!request.ResourceIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePracticeRunConfiguration", "Required field: ResourceIdentifier, is not set");
    return UpdatePracticeRunConfigurationOutcome(Aws::Client::AWSError<ARCZonalShiftErrors>(
        ARCZonalShiftErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceIdentifier());
  };

  return UpdatePracticeRunConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateZonalAutoshiftConfigurationOutcome ARCZonalShiftClient::UpdateZonalAutoshiftConfiguration(
    const UpdateZonalAutoshiftConfigurationRequest& request) const {
  if (!request.ResourceIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateZonalAutoshiftConfiguration", "Required field: ResourceIdentifier, is not set");
    return UpdateZonalAutoshiftConfigurationOutcome(Aws::Client::AWSError<ARCZonalShiftErrors>(
        ARCZonalShiftErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/managedresources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceIdentifier());
  };

  return UpdateZonalAutoshiftConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateZonalShiftOutcome ARCZonalShiftClient::UpdateZonalShift(const UpdateZonalShiftRequest& request) const {
  if (!request.ZonalShiftIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateZonalShift", "Required field: ZonalShiftId, is not set");
    return UpdateZonalShiftOutcome(Aws::Client::AWSError<ARCZonalShiftErrors>(ARCZonalShiftErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ZonalShiftId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/zonalshifts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetZonalShiftId());
  };

  return UpdateZonalShiftOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}
