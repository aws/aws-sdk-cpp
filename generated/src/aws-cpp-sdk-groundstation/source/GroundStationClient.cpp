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
#include <aws/groundstation/model/DescribeEphemerisRequest.h>
#include <aws/groundstation/model/GetAgentConfigurationRequest.h>
#include <aws/groundstation/model/GetAgentTaskResponseUrlRequest.h>
#include <aws/groundstation/model/GetConfigRequest.h>
#include <aws/groundstation/model/GetDataflowEndpointGroupRequest.h>
#include <aws/groundstation/model/GetMinuteUsageRequest.h>
#include <aws/groundstation/model/GetMissionProfileRequest.h>
#include <aws/groundstation/model/GetSatelliteRequest.h>
#include <aws/groundstation/model/ListConfigsRequest.h>
#include <aws/groundstation/model/ListContactsRequest.h>
#include <aws/groundstation/model/ListDataflowEndpointGroupsRequest.h>
#include <aws/groundstation/model/ListEphemeridesRequest.h>
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

  return CancelContactOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

CreateConfigOutcome GroundStationClient::CreateConfig(const CreateConfigRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  };

  return CreateConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDataflowEndpointGroupOutcome GroundStationClient::CreateDataflowEndpointGroup(
    const CreateDataflowEndpointGroupRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataflowEndpointGroup");
  };

  return CreateDataflowEndpointGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDataflowEndpointGroupV2Outcome GroundStationClient::CreateDataflowEndpointGroupV2(
    const CreateDataflowEndpointGroupV2Request& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataflowEndpointGroupV2");
  };

  return CreateDataflowEndpointGroupV2Outcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEphemerisOutcome GroundStationClient::CreateEphemeris(const CreateEphemerisRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ephemeris");
  };

  return CreateEphemerisOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateMissionProfileOutcome GroundStationClient::CreateMissionProfile(const CreateMissionProfileRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/missionprofile");
  };

  return CreateMissionProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return DeleteConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteDataflowEndpointGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteEphemerisOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteMissionProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DescribeContactOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return DescribeEphemerisOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetAgentConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetAgentTaskResponseUrlOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetDataflowEndpointGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetMinuteUsageOutcome GroundStationClient::GetMinuteUsage(const GetMinuteUsageRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/minute-usage");
  };

  return GetMinuteUsageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return GetMissionProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetSatelliteOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListConfigsOutcome GroundStationClient::ListConfigs(const ListConfigsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/config");
  };

  return ListConfigsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListContactsOutcome GroundStationClient::ListContacts(const ListContactsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contacts");
  };

  return ListContactsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDataflowEndpointGroupsOutcome GroundStationClient::ListDataflowEndpointGroups(const ListDataflowEndpointGroupsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataflowEndpointGroup");
  };

  return ListDataflowEndpointGroupsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListEphemeridesOutcome GroundStationClient::ListEphemerides(const ListEphemeridesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ephemerides");
  };

  return ListEphemeridesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListGroundStationsOutcome GroundStationClient::ListGroundStations(const ListGroundStationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/groundstation");
  };

  return ListGroundStationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListMissionProfilesOutcome GroundStationClient::ListMissionProfiles(const ListMissionProfilesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/missionprofile");
  };

  return ListMissionProfilesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSatellitesOutcome GroundStationClient::ListSatellites(const ListSatellitesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/satellite");
  };

  return ListSatellitesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

RegisterAgentOutcome GroundStationClient::RegisterAgent(const RegisterAgentRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/agent");
  };

  return RegisterAgentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ReserveContactOutcome GroundStationClient::ReserveContact(const ReserveContactRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/contact");
  };

  return ReserveContactOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return UpdateAgentStatusOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return UpdateConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return UpdateEphemerisOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return UpdateMissionProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
