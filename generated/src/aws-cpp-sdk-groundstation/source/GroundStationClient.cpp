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
#include <aws/groundstation/GroundStationClient.h>
#include <aws/groundstation/GroundStationEndpointProvider.h>
#include <aws/groundstation/GroundStationErrorMarshaller.h>
#include <aws/groundstation/model/CancelContactRequest.h>
#include <aws/groundstation/model/CreateConfigRequest.h>
#include <aws/groundstation/model/CreateDataflowEndpointGroupRequest.h>
#include <aws/groundstation/model/CreateDataflowEndpointGroupV2Request.h>
#include <aws/groundstation/model/CreateEphemerisRequest.h>
#include <aws/groundstation/model/CreateMissionProfileRequest.h>
#include <aws/groundstation/model/DeleteConfigRequest.h>
#include <aws/groundstation/model/DeleteDataflowEndpointGroupRequest.h>
#include <aws/groundstation/model/DeleteEphemerisRequest.h>
#include <aws/groundstation/model/DeleteMissionProfileRequest.h>
#include <aws/groundstation/model/DescribeContactRequest.h>
#include <aws/groundstation/model/DescribeContactVersionRequest.h>
#include <aws/groundstation/model/DescribeEphemerisRequest.h>
#include <aws/groundstation/model/GetAgentConfigurationRequest.h>
#include <aws/groundstation/model/GetAgentTaskResponseUrlRequest.h>
#include <aws/groundstation/model/GetConfigRequest.h>
#include <aws/groundstation/model/GetDataflowEndpointGroupRequest.h>
#include <aws/groundstation/model/GetMinuteUsageRequest.h>
#include <aws/groundstation/model/GetMissionProfileRequest.h>
#include <aws/groundstation/model/GetSatelliteRequest.h>
#include <aws/groundstation/model/ListAntennasRequest.h>
#include <aws/groundstation/model/ListConfigsRequest.h>
#include <aws/groundstation/model/ListContactVersionsRequest.h>
#include <aws/groundstation/model/ListContactsRequest.h>
#include <aws/groundstation/model/ListDataflowEndpointGroupsRequest.h>
#include <aws/groundstation/model/ListEphemeridesRequest.h>
#include <aws/groundstation/model/ListGroundStationReservationsRequest.h>
#include <aws/groundstation/model/ListGroundStationsRequest.h>
#include <aws/groundstation/model/ListMissionProfilesRequest.h>
#include <aws/groundstation/model/ListSatellitesRequest.h>
#include <aws/groundstation/model/ListTagsForResourceRequest.h>
#include <aws/groundstation/model/RegisterAgentRequest.h>
#include <aws/groundstation/model/ReserveContactRequest.h>
#include <aws/groundstation/model/TagResourceRequest.h>
#include <aws/groundstation/model/UntagResourceRequest.h>
#include <aws/groundstation/model/UpdateAgentStatusRequest.h>
#include <aws/groundstation/model/UpdateConfigRequest.h>
#include <aws/groundstation/model/UpdateContactRequest.h>
#include <aws/groundstation/model/UpdateEphemerisRequest.h>
#include <aws/groundstation/model/UpdateMissionProfileRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::GroundStation;
using namespace Aws::GroundStation::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace GroundStation {
const char SERVICE_NAME[] = "groundstation";
const char ALLOCATION_TAG[] = "GroundStationClient";
}  // namespace GroundStation
}  // namespace Aws
const char* GroundStationClient::GetServiceName() { return SERVICE_NAME; }
const char* GroundStationClient::GetAllocationTag() { return ALLOCATION_TAG; }

GroundStationClient::GroundStationClient(const GroundStation::GroundStationClientConfiguration& clientConfiguration,
                                         std::shared_ptr<GroundStationEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GroundStationErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<GroundStationEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GroundStationClient::GroundStationClient(const AWSCredentials& credentials,
                                         std::shared_ptr<GroundStationEndpointProviderBase> endpointProvider,
                                         const GroundStation::GroundStationClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GroundStationErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<GroundStationEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GroundStationClient::GroundStationClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<GroundStationEndpointProviderBase> endpointProvider,
                                         const GroundStation::GroundStationClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GroundStationErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<GroundStationEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
GroundStationClient::GroundStationClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GroundStationErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<GroundStationEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GroundStationClient::GroundStationClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GroundStationErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<GroundStationEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GroundStationClient::GroundStationClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GroundStationErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<GroundStationEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
GroundStationClient::~GroundStationClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<GroundStationEndpointProviderBase>& GroundStationClient::accessEndpointProvider() { return m_endpointProvider; }

void GroundStationClient::init(const GroundStation::GroundStationClientConfiguration& config) {
  AWSClient::SetServiceClientName("GroundStation");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "groundstation");
}

void GroundStationClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
GroundStationClient::InvokeOperationOutcome GroundStationClient::InvokeServiceOperation(
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

CancelContactOutcome GroundStationClient::CancelContact(const CancelContactRequest& request) const {
  if (!request.ContactIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelContact", "Required field: ContactId, is not set");
    return CancelContactOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ContactId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? CancelContactOutcome(result.GetResultWithOwnership()) : CancelContactOutcome(std::move(result.GetError()));
}

CreateConfigOutcome GroundStationClient::CreateConfig(const CreateConfigRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateConfigOutcome(result.GetResultWithOwnership()) : CreateConfigOutcome(std::move(result.GetError()));
}

CreateDataflowEndpointGroupOutcome GroundStationClient::CreateDataflowEndpointGroup(
    const CreateDataflowEndpointGroupRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataflowEndpointGroup");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDataflowEndpointGroupOutcome(result.GetResultWithOwnership())
                            : CreateDataflowEndpointGroupOutcome(std::move(result.GetError()));
}

CreateDataflowEndpointGroupV2Outcome GroundStationClient::CreateDataflowEndpointGroupV2(
    const CreateDataflowEndpointGroupV2Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataflowEndpointGroupV2");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDataflowEndpointGroupV2Outcome(result.GetResultWithOwnership())
                            : CreateDataflowEndpointGroupV2Outcome(std::move(result.GetError()));
}

CreateEphemerisOutcome GroundStationClient::CreateEphemeris(const CreateEphemerisRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ephemeris");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEphemerisOutcome(result.GetResultWithOwnership())
                            : CreateEphemerisOutcome(std::move(result.GetError()));
}

CreateMissionProfileOutcome GroundStationClient::CreateMissionProfile(const CreateMissionProfileRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/missionprofile");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMissionProfileOutcome(result.GetResultWithOwnership())
                            : CreateMissionProfileOutcome(std::move(result.GetError()));
}

DeleteConfigOutcome GroundStationClient::DeleteConfig(const DeleteConfigRequest& request) const {
  if (!request.ConfigIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConfig", "Required field: ConfigId, is not set");
    return DeleteConfigOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ConfigId]", false));
  }
  if (!request.ConfigTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConfig", "Required field: ConfigType, is not set");
    return DeleteConfigOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ConfigType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/config/");
    endpointResolutionOutcome.GetResult().AddPathSegment(
        ConfigCapabilityTypeMapper::GetNameForConfigCapabilityType(request.GetConfigType()));
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteConfigOutcome(result.GetResultWithOwnership()) : DeleteConfigOutcome(std::move(result.GetError()));
}

DeleteDataflowEndpointGroupOutcome GroundStationClient::DeleteDataflowEndpointGroup(
    const DeleteDataflowEndpointGroupRequest& request) const {
  if (!request.DataflowEndpointGroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataflowEndpointGroup", "Required field: DataflowEndpointGroupId, is not set");
    return DeleteDataflowEndpointGroupOutcome(Aws::Client::AWSError<GroundStationErrors>(
        GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataflowEndpointGroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataflowEndpointGroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataflowEndpointGroupId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteDataflowEndpointGroupOutcome(result.GetResultWithOwnership())
                            : DeleteDataflowEndpointGroupOutcome(std::move(result.GetError()));
}

DeleteEphemerisOutcome GroundStationClient::DeleteEphemeris(const DeleteEphemerisRequest& request) const {
  if (!request.EphemerisIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEphemeris", "Required field: EphemerisId, is not set");
    return DeleteEphemerisOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [EphemerisId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ephemeris/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEphemerisId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteEphemerisOutcome(result.GetResultWithOwnership())
                            : DeleteEphemerisOutcome(std::move(result.GetError()));
}

DeleteMissionProfileOutcome GroundStationClient::DeleteMissionProfile(const DeleteMissionProfileRequest& request) const {
  if (!request.MissionProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMissionProfile", "Required field: MissionProfileId, is not set");
    return DeleteMissionProfileOutcome(Aws::Client::AWSError<GroundStationErrors>(
        GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MissionProfileId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/missionprofile/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMissionProfileId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteMissionProfileOutcome(result.GetResultWithOwnership())
                            : DeleteMissionProfileOutcome(std::move(result.GetError()));
}

DescribeContactOutcome GroundStationClient::DescribeContact(const DescribeContactRequest& request) const {
  if (!request.ContactIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeContact", "Required field: ContactId, is not set");
    return DescribeContactOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ContactId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeContactOutcome(result.GetResultWithOwnership())
                            : DescribeContactOutcome(std::move(result.GetError()));
}

DescribeContactVersionOutcome GroundStationClient::DescribeContactVersion(const DescribeContactVersionRequest& request) const {
  if (!request.ContactIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeContactVersion", "Required field: ContactId, is not set");
    return DescribeContactVersionOutcome(Aws::Client::AWSError<GroundStationErrors>(
        GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContactId]", false));
  }
  if (!request.VersionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeContactVersion", "Required field: VersionId, is not set");
    return DescribeContactVersionOutcome(Aws::Client::AWSError<GroundStationErrors>(
        GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeContactVersionOutcome(result.GetResultWithOwnership())
                            : DescribeContactVersionOutcome(std::move(result.GetError()));
}

DescribeEphemerisOutcome GroundStationClient::DescribeEphemeris(const DescribeEphemerisRequest& request) const {
  if (!request.EphemerisIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeEphemeris", "Required field: EphemerisId, is not set");
    return DescribeEphemerisOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [EphemerisId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ephemeris/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEphemerisId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeEphemerisOutcome(result.GetResultWithOwnership())
                            : DescribeEphemerisOutcome(std::move(result.GetError()));
}

GetAgentConfigurationOutcome GroundStationClient::GetAgentConfiguration(const GetAgentConfigurationRequest& request) const {
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAgentConfiguration", "Required field: AgentId, is not set");
    return GetAgentConfigurationOutcome(Aws::Client::AWSError<GroundStationErrors>(
        GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/agent/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAgentConfigurationOutcome(result.GetResultWithOwnership())
                            : GetAgentConfigurationOutcome(std::move(result.GetError()));
}

GetAgentTaskResponseUrlOutcome GroundStationClient::GetAgentTaskResponseUrl(const GetAgentTaskResponseUrlRequest& request) const {
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAgentTaskResponseUrl", "Required field: AgentId, is not set");
    return GetAgentTaskResponseUrlOutcome(Aws::Client::AWSError<GroundStationErrors>(
        GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AgentId]", false));
  }
  if (!request.TaskIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAgentTaskResponseUrl", "Required field: TaskId, is not set");
    return GetAgentTaskResponseUrlOutcome(Aws::Client::AWSError<GroundStationErrors>(
        GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/agentResponseUrl/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTaskId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAgentTaskResponseUrlOutcome(result.GetResultWithOwnership())
                            : GetAgentTaskResponseUrlOutcome(std::move(result.GetError()));
}

GetConfigOutcome GroundStationClient::GetConfig(const GetConfigRequest& request) const {
  if (!request.ConfigIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConfig", "Required field: ConfigId, is not set");
    return GetConfigOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ConfigId]", false));
  }
  if (!request.ConfigTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConfig", "Required field: ConfigType, is not set");
    return GetConfigOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ConfigType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/config/");
    endpointResolutionOutcome.GetResult().AddPathSegment(
        ConfigCapabilityTypeMapper::GetNameForConfigCapabilityType(request.GetConfigType()));
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetConfigOutcome(result.GetResultWithOwnership()) : GetConfigOutcome(std::move(result.GetError()));
}

GetDataflowEndpointGroupOutcome GroundStationClient::GetDataflowEndpointGroup(const GetDataflowEndpointGroupRequest& request) const {
  if (!request.DataflowEndpointGroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataflowEndpointGroup", "Required field: DataflowEndpointGroupId, is not set");
    return GetDataflowEndpointGroupOutcome(Aws::Client::AWSError<GroundStationErrors>(
        GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataflowEndpointGroupId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataflowEndpointGroup/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataflowEndpointGroupId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDataflowEndpointGroupOutcome(result.GetResultWithOwnership())
                            : GetDataflowEndpointGroupOutcome(std::move(result.GetError()));
}

GetMinuteUsageOutcome GroundStationClient::GetMinuteUsage(const GetMinuteUsageRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/minute-usage");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetMinuteUsageOutcome(result.GetResultWithOwnership()) : GetMinuteUsageOutcome(std::move(result.GetError()));
}

GetMissionProfileOutcome GroundStationClient::GetMissionProfile(const GetMissionProfileRequest& request) const {
  if (!request.MissionProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMissionProfile", "Required field: MissionProfileId, is not set");
    return GetMissionProfileOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [MissionProfileId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/missionprofile/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMissionProfileId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetMissionProfileOutcome(result.GetResultWithOwnership())
                            : GetMissionProfileOutcome(std::move(result.GetError()));
}

GetSatelliteOutcome GroundStationClient::GetSatellite(const GetSatelliteRequest& request) const {
  if (!request.SatelliteIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSatellite", "Required field: SatelliteId, is not set");
    return GetSatelliteOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [SatelliteId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/satellite/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSatelliteId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSatelliteOutcome(result.GetResultWithOwnership()) : GetSatelliteOutcome(std::move(result.GetError()));
}

ListAntennasOutcome GroundStationClient::ListAntennas(const ListAntennasRequest& request) const {
  if (!request.GroundStationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAntennas", "Required field: GroundStationId, is not set");
    return ListAntennasOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [GroundStationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/groundstation/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroundStationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/antenna");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListAntennasOutcome(result.GetResultWithOwnership()) : ListAntennasOutcome(std::move(result.GetError()));
}

ListConfigsOutcome GroundStationClient::ListConfigs(const ListConfigsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListConfigsOutcome(result.GetResultWithOwnership()) : ListConfigsOutcome(std::move(result.GetError()));
}

ListContactVersionsOutcome GroundStationClient::ListContactVersions(const ListContactVersionsRequest& request) const {
  if (!request.ContactIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListContactVersions", "Required field: ContactId, is not set");
    return ListContactVersionsOutcome(Aws::Client::AWSError<GroundStationErrors>(
        GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ContactId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListContactVersionsOutcome(result.GetResultWithOwnership())
                            : ListContactVersionsOutcome(std::move(result.GetError()));
}

ListContactsOutcome GroundStationClient::ListContacts(const ListContactsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contacts");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListContactsOutcome(result.GetResultWithOwnership()) : ListContactsOutcome(std::move(result.GetError()));
}

ListDataflowEndpointGroupsOutcome GroundStationClient::ListDataflowEndpointGroups(const ListDataflowEndpointGroupsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataflowEndpointGroup");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDataflowEndpointGroupsOutcome(result.GetResultWithOwnership())
                            : ListDataflowEndpointGroupsOutcome(std::move(result.GetError()));
}

ListEphemeridesOutcome GroundStationClient::ListEphemerides(const ListEphemeridesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ephemerides");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListEphemeridesOutcome(result.GetResultWithOwnership())
                            : ListEphemeridesOutcome(std::move(result.GetError()));
}

ListGroundStationReservationsOutcome GroundStationClient::ListGroundStationReservations(
    const ListGroundStationReservationsRequest& request) const {
  if (!request.GroundStationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListGroundStationReservations", "Required field: GroundStationId, is not set");
    return ListGroundStationReservationsOutcome(Aws::Client::AWSError<GroundStationErrors>(
        GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroundStationId]", false));
  }
  if (!request.StartTimeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListGroundStationReservations", "Required field: StartTime, is not set");
    return ListGroundStationReservationsOutcome(Aws::Client::AWSError<GroundStationErrors>(
        GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartTime]", false));
  }
  if (!request.EndTimeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListGroundStationReservations", "Required field: EndTime, is not set");
    return ListGroundStationReservationsOutcome(Aws::Client::AWSError<GroundStationErrors>(
        GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndTime]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/groundstation/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroundStationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/reservation");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListGroundStationReservationsOutcome(result.GetResultWithOwnership())
                            : ListGroundStationReservationsOutcome(std::move(result.GetError()));
}

ListGroundStationsOutcome GroundStationClient::ListGroundStations(const ListGroundStationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/groundstation");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListGroundStationsOutcome(result.GetResultWithOwnership())
                            : ListGroundStationsOutcome(std::move(result.GetError()));
}

ListMissionProfilesOutcome GroundStationClient::ListMissionProfiles(const ListMissionProfilesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/missionprofile");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListMissionProfilesOutcome(result.GetResultWithOwnership())
                            : ListMissionProfilesOutcome(std::move(result.GetError()));
}

ListSatellitesOutcome GroundStationClient::ListSatellites(const ListSatellitesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/satellite");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSatellitesOutcome(result.GetResultWithOwnership()) : ListSatellitesOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome GroundStationClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<GroundStationErrors>(
        GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

RegisterAgentOutcome GroundStationClient::RegisterAgent(const RegisterAgentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/agent");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterAgentOutcome(result.GetResultWithOwnership()) : RegisterAgentOutcome(std::move(result.GetError()));
}

ReserveContactOutcome GroundStationClient::ReserveContact(const ReserveContactRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ReserveContactOutcome(result.GetResultWithOwnership()) : ReserveContactOutcome(std::move(result.GetError()));
}

TagResourceOutcome GroundStationClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome GroundStationClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateAgentStatusOutcome GroundStationClient::UpdateAgentStatus(const UpdateAgentStatusRequest& request) const {
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAgentStatus", "Required field: AgentId, is not set");
    return UpdateAgentStatusOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AgentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/agent/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateAgentStatusOutcome(result.GetResultWithOwnership())
                            : UpdateAgentStatusOutcome(std::move(result.GetError()));
}

UpdateConfigOutcome GroundStationClient::UpdateConfig(const UpdateConfigRequest& request) const {
  if (!request.ConfigIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConfig", "Required field: ConfigId, is not set");
    return UpdateConfigOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ConfigId]", false));
  }
  if (!request.ConfigTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateConfig", "Required field: ConfigType, is not set");
    return UpdateConfigOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ConfigType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/config/");
    endpointResolutionOutcome.GetResult().AddPathSegment(
        ConfigCapabilityTypeMapper::GetNameForConfigCapabilityType(request.GetConfigType()));
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConfigId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateConfigOutcome(result.GetResultWithOwnership()) : UpdateConfigOutcome(std::move(result.GetError()));
}

UpdateContactOutcome GroundStationClient::UpdateContact(const UpdateContactRequest& request) const {
  if (!request.ContactIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateContact", "Required field: ContactId, is not set");
    return UpdateContactOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ContactId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetContactId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateContactOutcome(result.GetResultWithOwnership()) : UpdateContactOutcome(std::move(result.GetError()));
}

UpdateEphemerisOutcome GroundStationClient::UpdateEphemeris(const UpdateEphemerisRequest& request) const {
  if (!request.EphemerisIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateEphemeris", "Required field: EphemerisId, is not set");
    return UpdateEphemerisOutcome(Aws::Client::AWSError<GroundStationErrors>(GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [EphemerisId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ephemeris/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEphemerisId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateEphemerisOutcome(result.GetResultWithOwnership())
                            : UpdateEphemerisOutcome(std::move(result.GetError()));
}

UpdateMissionProfileOutcome GroundStationClient::UpdateMissionProfile(const UpdateMissionProfileRequest& request) const {
  if (!request.MissionProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMissionProfile", "Required field: MissionProfileId, is not set");
    return UpdateMissionProfileOutcome(Aws::Client::AWSError<GroundStationErrors>(
        GroundStationErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MissionProfileId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/missionprofile/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMissionProfileId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateMissionProfileOutcome(result.GetResultWithOwnership())
                            : UpdateMissionProfileOutcome(std::move(result.GetError()));
}
