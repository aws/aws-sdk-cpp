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
#include <aws/guardduty/GuardDutyClient.h>
#include <aws/guardduty/GuardDutyEndpointProvider.h>
#include <aws/guardduty/GuardDutyErrorMarshaller.h>
#include <aws/guardduty/model/AcceptAdministratorInvitationRequest.h>
#include <aws/guardduty/model/ArchiveFindingsRequest.h>
#include <aws/guardduty/model/CreateDetectorRequest.h>
#include <aws/guardduty/model/CreateFilterRequest.h>
#include <aws/guardduty/model/CreateIPSetRequest.h>
#include <aws/guardduty/model/CreateMalwareProtectionPlanRequest.h>
#include <aws/guardduty/model/CreateMembersRequest.h>
#include <aws/guardduty/model/CreatePublishingDestinationRequest.h>
#include <aws/guardduty/model/CreateSampleFindingsRequest.h>
#include <aws/guardduty/model/CreateThreatEntitySetRequest.h>
#include <aws/guardduty/model/CreateThreatIntelSetRequest.h>
#include <aws/guardduty/model/CreateTrustedEntitySetRequest.h>
#include <aws/guardduty/model/DeclineInvitationsRequest.h>
#include <aws/guardduty/model/DeleteDetectorRequest.h>
#include <aws/guardduty/model/DeleteFilterRequest.h>
#include <aws/guardduty/model/DeleteIPSetRequest.h>
#include <aws/guardduty/model/DeleteInvitationsRequest.h>
#include <aws/guardduty/model/DeleteMalwareProtectionPlanRequest.h>
#include <aws/guardduty/model/DeleteMembersRequest.h>
#include <aws/guardduty/model/DeletePublishingDestinationRequest.h>
#include <aws/guardduty/model/DeleteThreatEntitySetRequest.h>
#include <aws/guardduty/model/DeleteThreatIntelSetRequest.h>
#include <aws/guardduty/model/DeleteTrustedEntitySetRequest.h>
#include <aws/guardduty/model/DescribeMalwareScansRequest.h>
#include <aws/guardduty/model/DescribeOrganizationConfigurationRequest.h>
#include <aws/guardduty/model/DescribePublishingDestinationRequest.h>
#include <aws/guardduty/model/DisableOrganizationAdminAccountRequest.h>
#include <aws/guardduty/model/DisassociateFromAdministratorAccountRequest.h>
#include <aws/guardduty/model/DisassociateMembersRequest.h>
#include <aws/guardduty/model/EnableOrganizationAdminAccountRequest.h>
#include <aws/guardduty/model/GetAdministratorAccountRequest.h>
#include <aws/guardduty/model/GetCoverageStatisticsRequest.h>
#include <aws/guardduty/model/GetDetectorRequest.h>
#include <aws/guardduty/model/GetFilterRequest.h>
#include <aws/guardduty/model/GetFindingsRequest.h>
#include <aws/guardduty/model/GetFindingsStatisticsRequest.h>
#include <aws/guardduty/model/GetIPSetRequest.h>
#include <aws/guardduty/model/GetInvitationsCountRequest.h>
#include <aws/guardduty/model/GetMalwareProtectionPlanRequest.h>
#include <aws/guardduty/model/GetMalwareScanRequest.h>
#include <aws/guardduty/model/GetMalwareScanSettingsRequest.h>
#include <aws/guardduty/model/GetMemberDetectorsRequest.h>
#include <aws/guardduty/model/GetMembersRequest.h>
#include <aws/guardduty/model/GetOrganizationStatisticsRequest.h>
#include <aws/guardduty/model/GetRemainingFreeTrialDaysRequest.h>
#include <aws/guardduty/model/GetThreatEntitySetRequest.h>
#include <aws/guardduty/model/GetThreatIntelSetRequest.h>
#include <aws/guardduty/model/GetTrustedEntitySetRequest.h>
#include <aws/guardduty/model/GetUsageStatisticsRequest.h>
#include <aws/guardduty/model/InviteMembersRequest.h>
#include <aws/guardduty/model/ListCoverageRequest.h>
#include <aws/guardduty/model/ListDetectorsRequest.h>
#include <aws/guardduty/model/ListFiltersRequest.h>
#include <aws/guardduty/model/ListFindingsRequest.h>
#include <aws/guardduty/model/ListIPSetsRequest.h>
#include <aws/guardduty/model/ListInvitationsRequest.h>
#include <aws/guardduty/model/ListMalwareProtectionPlansRequest.h>
#include <aws/guardduty/model/ListMalwareScansRequest.h>
#include <aws/guardduty/model/ListMembersRequest.h>
#include <aws/guardduty/model/ListOrganizationAdminAccountsRequest.h>
#include <aws/guardduty/model/ListPublishingDestinationsRequest.h>
#include <aws/guardduty/model/ListTagsForResourceRequest.h>
#include <aws/guardduty/model/ListThreatEntitySetsRequest.h>
#include <aws/guardduty/model/ListThreatIntelSetsRequest.h>
#include <aws/guardduty/model/ListTrustedEntitySetsRequest.h>
#include <aws/guardduty/model/SendObjectMalwareScanRequest.h>
#include <aws/guardduty/model/StartMalwareScanRequest.h>
#include <aws/guardduty/model/StartMonitoringMembersRequest.h>
#include <aws/guardduty/model/StopMonitoringMembersRequest.h>
#include <aws/guardduty/model/TagResourceRequest.h>
#include <aws/guardduty/model/UnarchiveFindingsRequest.h>
#include <aws/guardduty/model/UntagResourceRequest.h>
#include <aws/guardduty/model/UpdateDetectorRequest.h>
#include <aws/guardduty/model/UpdateFilterRequest.h>
#include <aws/guardduty/model/UpdateFindingsFeedbackRequest.h>
#include <aws/guardduty/model/UpdateIPSetRequest.h>
#include <aws/guardduty/model/UpdateMalwareProtectionPlanRequest.h>
#include <aws/guardduty/model/UpdateMalwareScanSettingsRequest.h>
#include <aws/guardduty/model/UpdateMemberDetectorsRequest.h>
#include <aws/guardduty/model/UpdateOrganizationConfigurationRequest.h>
#include <aws/guardduty/model/UpdatePublishingDestinationRequest.h>
#include <aws/guardduty/model/UpdateThreatEntitySetRequest.h>
#include <aws/guardduty/model/UpdateThreatIntelSetRequest.h>
#include <aws/guardduty/model/UpdateTrustedEntitySetRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::GuardDuty;
using namespace Aws::GuardDuty::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace GuardDuty {
const char SERVICE_NAME[] = "guardduty";
const char ALLOCATION_TAG[] = "GuardDutyClient";
}  // namespace GuardDuty
}  // namespace Aws
const char* GuardDutyClient::GetServiceName() { return SERVICE_NAME; }
const char* GuardDutyClient::GetAllocationTag() { return ALLOCATION_TAG; }

GuardDutyClient::GuardDutyClient(const GuardDuty::GuardDutyClientConfiguration& clientConfiguration,
                                 std::shared_ptr<GuardDutyEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GuardDutyErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<GuardDutyEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GuardDutyClient::GuardDutyClient(const AWSCredentials& credentials, std::shared_ptr<GuardDutyEndpointProviderBase> endpointProvider,
                                 const GuardDuty::GuardDutyClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GuardDutyErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<GuardDutyEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GuardDutyClient::GuardDutyClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<GuardDutyEndpointProviderBase> endpointProvider,
                                 const GuardDuty::GuardDutyClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GuardDutyErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<GuardDutyEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
GuardDutyClient::GuardDutyClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GuardDutyErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<GuardDutyEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GuardDutyClient::GuardDutyClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GuardDutyErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<GuardDutyEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GuardDutyClient::GuardDutyClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GuardDutyErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<GuardDutyEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
GuardDutyClient::~GuardDutyClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<GuardDutyEndpointProviderBase>& GuardDutyClient::accessEndpointProvider() { return m_endpointProvider; }

void GuardDutyClient::init(const GuardDuty::GuardDutyClientConfiguration& config) {
  AWSClient::SetServiceClientName("GuardDuty");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "guardduty");
}

void GuardDutyClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
GuardDutyClient::InvokeOperationOutcome GuardDutyClient::InvokeServiceOperation(
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

AcceptAdministratorInvitationOutcome GuardDutyClient::AcceptAdministratorInvitation(
    const AcceptAdministratorInvitationRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AcceptAdministratorInvitation", "Required field: DetectorId, is not set");
    return AcceptAdministratorInvitationOutcome(Aws::Client::AWSError<GuardDutyErrors>(
        GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/administrator");
  };

  return AcceptAdministratorInvitationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ArchiveFindingsOutcome GuardDutyClient::ArchiveFindings(const ArchiveFindingsRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ArchiveFindings", "Required field: DetectorId, is not set");
    return ArchiveFindingsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/findings/archive");
  };

  return ArchiveFindingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDetectorOutcome GuardDutyClient::CreateDetector(const CreateDetectorRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector");
  };

  return CreateDetectorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFilterOutcome GuardDutyClient::CreateFilter(const CreateFilterRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateFilter", "Required field: DetectorId, is not set");
    return CreateFilterOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/filter");
  };

  return CreateFilterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateIPSetOutcome GuardDutyClient::CreateIPSet(const CreateIPSetRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateIPSet", "Required field: DetectorId, is not set");
    return CreateIPSetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ipset");
  };

  return CreateIPSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateMalwareProtectionPlanOutcome GuardDutyClient::CreateMalwareProtectionPlan(const CreateMalwareProtectionPlanRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/malware-protection-plan");
  };

  return CreateMalwareProtectionPlanOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateMembersOutcome GuardDutyClient::CreateMembers(const CreateMembersRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateMembers", "Required field: DetectorId, is not set");
    return CreateMembersOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/member");
  };

  return CreateMembersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePublishingDestinationOutcome GuardDutyClient::CreatePublishingDestination(const CreatePublishingDestinationRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreatePublishingDestination", "Required field: DetectorId, is not set");
    return CreatePublishingDestinationOutcome(Aws::Client::AWSError<GuardDutyErrors>(
        GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/publishingDestination");
  };

  return CreatePublishingDestinationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSampleFindingsOutcome GuardDutyClient::CreateSampleFindings(const CreateSampleFindingsRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSampleFindings", "Required field: DetectorId, is not set");
    return CreateSampleFindingsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/findings/create");
  };

  return CreateSampleFindingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateThreatEntitySetOutcome GuardDutyClient::CreateThreatEntitySet(const CreateThreatEntitySetRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateThreatEntitySet", "Required field: DetectorId, is not set");
    return CreateThreatEntitySetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/threatentityset");
  };

  return CreateThreatEntitySetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateThreatIntelSetOutcome GuardDutyClient::CreateThreatIntelSet(const CreateThreatIntelSetRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateThreatIntelSet", "Required field: DetectorId, is not set");
    return CreateThreatIntelSetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/threatintelset");
  };

  return CreateThreatIntelSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTrustedEntitySetOutcome GuardDutyClient::CreateTrustedEntitySet(const CreateTrustedEntitySetRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateTrustedEntitySet", "Required field: DetectorId, is not set");
    return CreateTrustedEntitySetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/trustedentityset");
  };

  return CreateTrustedEntitySetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeclineInvitationsOutcome GuardDutyClient::DeclineInvitations(const DeclineInvitationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/invitation/decline");
  };

  return DeclineInvitationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDetectorOutcome GuardDutyClient::DeleteDetector(const DeleteDetectorRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDetector", "Required field: DetectorId, is not set");
    return DeleteDetectorOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  };

  return DeleteDetectorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteFilterOutcome GuardDutyClient::DeleteFilter(const DeleteFilterRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFilter", "Required field: DetectorId, is not set");
    return DeleteFilterOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [DetectorId]", false));
  }
  if (!request.FilterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFilter", "Required field: FilterName, is not set");
    return DeleteFilterOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [FilterName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/filter/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFilterName());
  };

  return DeleteFilterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteIPSetOutcome GuardDutyClient::DeleteIPSet(const DeleteIPSetRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIPSet", "Required field: DetectorId, is not set");
    return DeleteIPSetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [DetectorId]", false));
  }
  if (!request.IpSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIPSet", "Required field: IpSetId, is not set");
    return DeleteIPSetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [IpSetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ipset/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIpSetId());
  };

  return DeleteIPSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteInvitationsOutcome GuardDutyClient::DeleteInvitations(const DeleteInvitationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/invitation/delete");
  };

  return DeleteInvitationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteMalwareProtectionPlanOutcome GuardDutyClient::DeleteMalwareProtectionPlan(const DeleteMalwareProtectionPlanRequest& request) const {
  if (!request.MalwareProtectionPlanIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMalwareProtectionPlan", "Required field: MalwareProtectionPlanId, is not set");
    return DeleteMalwareProtectionPlanOutcome(Aws::Client::AWSError<GuardDutyErrors>(
        GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MalwareProtectionPlanId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/malware-protection-plan/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMalwareProtectionPlanId());
  };

  return DeleteMalwareProtectionPlanOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteMembersOutcome GuardDutyClient::DeleteMembers(const DeleteMembersRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMembers", "Required field: DetectorId, is not set");
    return DeleteMembersOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/member/delete");
  };

  return DeleteMembersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeletePublishingDestinationOutcome GuardDutyClient::DeletePublishingDestination(const DeletePublishingDestinationRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePublishingDestination", "Required field: DetectorId, is not set");
    return DeletePublishingDestinationOutcome(Aws::Client::AWSError<GuardDutyErrors>(
        GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  if (!request.DestinationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePublishingDestination", "Required field: DestinationId, is not set");
    return DeletePublishingDestinationOutcome(Aws::Client::AWSError<GuardDutyErrors>(
        GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DestinationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/publishingDestination/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDestinationId());
  };

  return DeletePublishingDestinationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteThreatEntitySetOutcome GuardDutyClient::DeleteThreatEntitySet(const DeleteThreatEntitySetRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteThreatEntitySet", "Required field: DetectorId, is not set");
    return DeleteThreatEntitySetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [DetectorId]", false));
  }
  if (!request.ThreatEntitySetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteThreatEntitySet", "Required field: ThreatEntitySetId, is not set");
    return DeleteThreatEntitySetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ThreatEntitySetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/threatentityset/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThreatEntitySetId());
  };

  return DeleteThreatEntitySetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteThreatIntelSetOutcome GuardDutyClient::DeleteThreatIntelSet(const DeleteThreatIntelSetRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteThreatIntelSet", "Required field: DetectorId, is not set");
    return DeleteThreatIntelSetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [DetectorId]", false));
  }
  if (!request.ThreatIntelSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteThreatIntelSet", "Required field: ThreatIntelSetId, is not set");
    return DeleteThreatIntelSetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ThreatIntelSetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/threatintelset/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThreatIntelSetId());
  };

  return DeleteThreatIntelSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteTrustedEntitySetOutcome GuardDutyClient::DeleteTrustedEntitySet(const DeleteTrustedEntitySetRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTrustedEntitySet", "Required field: DetectorId, is not set");
    return DeleteTrustedEntitySetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [DetectorId]", false));
  }
  if (!request.TrustedEntitySetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTrustedEntitySet", "Required field: TrustedEntitySetId, is not set");
    return DeleteTrustedEntitySetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [TrustedEntitySetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/trustedentityset/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrustedEntitySetId());
  };

  return DeleteTrustedEntitySetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DescribeMalwareScansOutcome GuardDutyClient::DescribeMalwareScans(const DescribeMalwareScansRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeMalwareScans", "Required field: DetectorId, is not set");
    return DescribeMalwareScansOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/malware-scans");
  };

  return DescribeMalwareScansOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeOrganizationConfigurationOutcome GuardDutyClient::DescribeOrganizationConfiguration(
    const DescribeOrganizationConfigurationRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeOrganizationConfiguration", "Required field: DetectorId, is not set");
    return DescribeOrganizationConfigurationOutcome(Aws::Client::AWSError<GuardDutyErrors>(
        GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/admin");
  };

  return DescribeOrganizationConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribePublishingDestinationOutcome GuardDutyClient::DescribePublishingDestination(
    const DescribePublishingDestinationRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribePublishingDestination", "Required field: DetectorId, is not set");
    return DescribePublishingDestinationOutcome(Aws::Client::AWSError<GuardDutyErrors>(
        GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  if (!request.DestinationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribePublishingDestination", "Required field: DestinationId, is not set");
    return DescribePublishingDestinationOutcome(Aws::Client::AWSError<GuardDutyErrors>(
        GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DestinationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/publishingDestination/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDestinationId());
  };

  return DescribePublishingDestinationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DisableOrganizationAdminAccountOutcome GuardDutyClient::DisableOrganizationAdminAccount(
    const DisableOrganizationAdminAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/admin/disable");
  };

  return DisableOrganizationAdminAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateFromAdministratorAccountOutcome GuardDutyClient::DisassociateFromAdministratorAccount(
    const DisassociateFromAdministratorAccountRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateFromAdministratorAccount", "Required field: DetectorId, is not set");
    return DisassociateFromAdministratorAccountOutcome(Aws::Client::AWSError<GuardDutyErrors>(
        GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/administrator/disassociate");
  };

  return DisassociateFromAdministratorAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateMembersOutcome GuardDutyClient::DisassociateMembers(const DisassociateMembersRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateMembers", "Required field: DetectorId, is not set");
    return DisassociateMembersOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/member/disassociate");
  };

  return DisassociateMembersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableOrganizationAdminAccountOutcome GuardDutyClient::EnableOrganizationAdminAccount(
    const EnableOrganizationAdminAccountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/admin/enable");
  };

  return EnableOrganizationAdminAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAdministratorAccountOutcome GuardDutyClient::GetAdministratorAccount(const GetAdministratorAccountRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAdministratorAccount", "Required field: DetectorId, is not set");
    return GetAdministratorAccountOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/administrator");
  };

  return GetAdministratorAccountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCoverageStatisticsOutcome GuardDutyClient::GetCoverageStatistics(const GetCoverageStatisticsRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCoverageStatistics", "Required field: DetectorId, is not set");
    return GetCoverageStatisticsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/coverage/statistics");
  };

  return GetCoverageStatisticsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDetectorOutcome GuardDutyClient::GetDetector(const GetDetectorRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDetector", "Required field: DetectorId, is not set");
    return GetDetectorOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  };

  return GetDetectorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetFilterOutcome GuardDutyClient::GetFilter(const GetFilterRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFilter", "Required field: DetectorId, is not set");
    return GetFilterOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [DetectorId]", false));
  }
  if (!request.FilterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFilter", "Required field: FilterName, is not set");
    return GetFilterOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [FilterName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/filter/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFilterName());
  };

  return GetFilterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetFindingsOutcome GuardDutyClient::GetFindings(const GetFindingsRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFindings", "Required field: DetectorId, is not set");
    return GetFindingsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/findings/get");
  };

  return GetFindingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetFindingsStatisticsOutcome GuardDutyClient::GetFindingsStatistics(const GetFindingsStatisticsRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFindingsStatistics", "Required field: DetectorId, is not set");
    return GetFindingsStatisticsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/findings/statistics");
  };

  return GetFindingsStatisticsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetIPSetOutcome GuardDutyClient::GetIPSet(const GetIPSetRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIPSet", "Required field: DetectorId, is not set");
    return GetIPSetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [DetectorId]", false));
  }
  if (!request.IpSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIPSet", "Required field: IpSetId, is not set");
    return GetIPSetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [IpSetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ipset/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIpSetId());
  };

  return GetIPSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetInvitationsCountOutcome GuardDutyClient::GetInvitationsCount(const GetInvitationsCountRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/invitation/count");
  };

  return GetInvitationsCountOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetMalwareProtectionPlanOutcome GuardDutyClient::GetMalwareProtectionPlan(const GetMalwareProtectionPlanRequest& request) const {
  if (!request.MalwareProtectionPlanIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMalwareProtectionPlan", "Required field: MalwareProtectionPlanId, is not set");
    return GetMalwareProtectionPlanOutcome(Aws::Client::AWSError<GuardDutyErrors>(
        GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MalwareProtectionPlanId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/malware-protection-plan/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMalwareProtectionPlanId());
  };

  return GetMalwareProtectionPlanOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetMalwareScanOutcome GuardDutyClient::GetMalwareScan(const GetMalwareScanRequest& request) const {
  if (!request.ScanIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMalwareScan", "Required field: ScanId, is not set");
    return GetMalwareScanOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ScanId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/malware-scan/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScanId());
  };

  return GetMalwareScanOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetMalwareScanSettingsOutcome GuardDutyClient::GetMalwareScanSettings(const GetMalwareScanSettingsRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMalwareScanSettings", "Required field: DetectorId, is not set");
    return GetMalwareScanSettingsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/malware-scan-settings");
  };

  return GetMalwareScanSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetMemberDetectorsOutcome GuardDutyClient::GetMemberDetectors(const GetMemberDetectorsRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMemberDetectors", "Required field: DetectorId, is not set");
    return GetMemberDetectorsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/member/detector/get");
  };

  return GetMemberDetectorsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetMembersOutcome GuardDutyClient::GetMembers(const GetMembersRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMembers", "Required field: DetectorId, is not set");
    return GetMembersOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/member/get");
  };

  return GetMembersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetOrganizationStatisticsOutcome GuardDutyClient::GetOrganizationStatistics(const GetOrganizationStatisticsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/organization/statistics");
  };

  return GetOrganizationStatisticsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetRemainingFreeTrialDaysOutcome GuardDutyClient::GetRemainingFreeTrialDays(const GetRemainingFreeTrialDaysRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRemainingFreeTrialDays", "Required field: DetectorId, is not set");
    return GetRemainingFreeTrialDaysOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/freeTrial/daysRemaining");
  };

  return GetRemainingFreeTrialDaysOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetThreatEntitySetOutcome GuardDutyClient::GetThreatEntitySet(const GetThreatEntitySetRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetThreatEntitySet", "Required field: DetectorId, is not set");
    return GetThreatEntitySetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [DetectorId]", false));
  }
  if (!request.ThreatEntitySetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetThreatEntitySet", "Required field: ThreatEntitySetId, is not set");
    return GetThreatEntitySetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ThreatEntitySetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/threatentityset/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThreatEntitySetId());
  };

  return GetThreatEntitySetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetThreatIntelSetOutcome GuardDutyClient::GetThreatIntelSet(const GetThreatIntelSetRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetThreatIntelSet", "Required field: DetectorId, is not set");
    return GetThreatIntelSetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DetectorId]", false));
  }
  if (!request.ThreatIntelSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetThreatIntelSet", "Required field: ThreatIntelSetId, is not set");
    return GetThreatIntelSetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ThreatIntelSetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/threatintelset/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThreatIntelSetId());
  };

  return GetThreatIntelSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetTrustedEntitySetOutcome GuardDutyClient::GetTrustedEntitySet(const GetTrustedEntitySetRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTrustedEntitySet", "Required field: DetectorId, is not set");
    return GetTrustedEntitySetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DetectorId]", false));
  }
  if (!request.TrustedEntitySetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTrustedEntitySet", "Required field: TrustedEntitySetId, is not set");
    return GetTrustedEntitySetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [TrustedEntitySetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/trustedentityset/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrustedEntitySetId());
  };

  return GetTrustedEntitySetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetUsageStatisticsOutcome GuardDutyClient::GetUsageStatistics(const GetUsageStatisticsRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetUsageStatistics", "Required field: DetectorId, is not set");
    return GetUsageStatisticsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/usage/statistics");
  };

  return GetUsageStatisticsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

InviteMembersOutcome GuardDutyClient::InviteMembers(const InviteMembersRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("InviteMembers", "Required field: DetectorId, is not set");
    return InviteMembersOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/member/invite");
  };

  return InviteMembersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCoverageOutcome GuardDutyClient::ListCoverage(const ListCoverageRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCoverage", "Required field: DetectorId, is not set");
    return ListCoverageOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/coverage");
  };

  return ListCoverageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDetectorsOutcome GuardDutyClient::ListDetectors(const ListDetectorsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector");
  };

  return ListDetectorsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListFiltersOutcome GuardDutyClient::ListFilters(const ListFiltersRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFilters", "Required field: DetectorId, is not set");
    return ListFiltersOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/filter");
  };

  return ListFiltersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListFindingsOutcome GuardDutyClient::ListFindings(const ListFindingsRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFindings", "Required field: DetectorId, is not set");
    return ListFindingsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/findings");
  };

  return ListFindingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListIPSetsOutcome GuardDutyClient::ListIPSets(const ListIPSetsRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListIPSets", "Required field: DetectorId, is not set");
    return ListIPSetsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ipset");
  };

  return ListIPSetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListInvitationsOutcome GuardDutyClient::ListInvitations(const ListInvitationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/invitation");
  };

  return ListInvitationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListMalwareProtectionPlansOutcome GuardDutyClient::ListMalwareProtectionPlans(const ListMalwareProtectionPlansRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/malware-protection-plan");
  };

  return ListMalwareProtectionPlansOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListMalwareScansOutcome GuardDutyClient::ListMalwareScans(const ListMalwareScansRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/malware-scan");
  };

  return ListMalwareScansOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListMembersOutcome GuardDutyClient::ListMembers(const ListMembersRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListMembers", "Required field: DetectorId, is not set");
    return ListMembersOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/member");
  };

  return ListMembersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListOrganizationAdminAccountsOutcome GuardDutyClient::ListOrganizationAdminAccounts(
    const ListOrganizationAdminAccountsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/admin");
  };

  return ListOrganizationAdminAccountsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListPublishingDestinationsOutcome GuardDutyClient::ListPublishingDestinations(const ListPublishingDestinationsRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPublishingDestinations", "Required field: DetectorId, is not set");
    return ListPublishingDestinationsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/publishingDestination");
  };

  return ListPublishingDestinationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome GuardDutyClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListThreatEntitySetsOutcome GuardDutyClient::ListThreatEntitySets(const ListThreatEntitySetsRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListThreatEntitySets", "Required field: DetectorId, is not set");
    return ListThreatEntitySetsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/threatentityset");
  };

  return ListThreatEntitySetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListThreatIntelSetsOutcome GuardDutyClient::ListThreatIntelSets(const ListThreatIntelSetsRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListThreatIntelSets", "Required field: DetectorId, is not set");
    return ListThreatIntelSetsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/threatintelset");
  };

  return ListThreatIntelSetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTrustedEntitySetsOutcome GuardDutyClient::ListTrustedEntitySets(const ListTrustedEntitySetsRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTrustedEntitySets", "Required field: DetectorId, is not set");
    return ListTrustedEntitySetsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/trustedentityset");
  };

  return ListTrustedEntitySetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

SendObjectMalwareScanOutcome GuardDutyClient::SendObjectMalwareScan(const SendObjectMalwareScanRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/object-malware-scan/send");
  };

  return SendObjectMalwareScanOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartMalwareScanOutcome GuardDutyClient::StartMalwareScan(const StartMalwareScanRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/malware-scan/start");
  };

  return StartMalwareScanOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartMonitoringMembersOutcome GuardDutyClient::StartMonitoringMembers(const StartMonitoringMembersRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartMonitoringMembers", "Required field: DetectorId, is not set");
    return StartMonitoringMembersOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/member/start");
  };

  return StartMonitoringMembersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StopMonitoringMembersOutcome GuardDutyClient::StopMonitoringMembers(const StopMonitoringMembersRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopMonitoringMembers", "Required field: DetectorId, is not set");
    return StopMonitoringMembersOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/member/stop");
  };

  return StopMonitoringMembersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome GuardDutyClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UnarchiveFindingsOutcome GuardDutyClient::UnarchiveFindings(const UnarchiveFindingsRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UnarchiveFindings", "Required field: DetectorId, is not set");
    return UnarchiveFindingsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/findings/unarchive");
  };

  return UnarchiveFindingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome GuardDutyClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateDetectorOutcome GuardDutyClient::UpdateDetector(const UpdateDetectorRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDetector", "Required field: DetectorId, is not set");
    return UpdateDetectorOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
  };

  return UpdateDetectorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateFilterOutcome GuardDutyClient::UpdateFilter(const UpdateFilterRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFilter", "Required field: DetectorId, is not set");
    return UpdateFilterOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [DetectorId]", false));
  }
  if (!request.FilterNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFilter", "Required field: FilterName, is not set");
    return UpdateFilterOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [FilterName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/filter/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFilterName());
  };

  return UpdateFilterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateFindingsFeedbackOutcome GuardDutyClient::UpdateFindingsFeedback(const UpdateFindingsFeedbackRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFindingsFeedback", "Required field: DetectorId, is not set");
    return UpdateFindingsFeedbackOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/findings/feedback");
  };

  return UpdateFindingsFeedbackOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateIPSetOutcome GuardDutyClient::UpdateIPSet(const UpdateIPSetRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIPSet", "Required field: DetectorId, is not set");
    return UpdateIPSetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [DetectorId]", false));
  }
  if (!request.IpSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIPSet", "Required field: IpSetId, is not set");
    return UpdateIPSetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [IpSetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ipset/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIpSetId());
  };

  return UpdateIPSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateMalwareProtectionPlanOutcome GuardDutyClient::UpdateMalwareProtectionPlan(const UpdateMalwareProtectionPlanRequest& request) const {
  if (!request.MalwareProtectionPlanIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMalwareProtectionPlan", "Required field: MalwareProtectionPlanId, is not set");
    return UpdateMalwareProtectionPlanOutcome(Aws::Client::AWSError<GuardDutyErrors>(
        GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MalwareProtectionPlanId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/malware-protection-plan/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMalwareProtectionPlanId());
  };

  return UpdateMalwareProtectionPlanOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateMalwareScanSettingsOutcome GuardDutyClient::UpdateMalwareScanSettings(const UpdateMalwareScanSettingsRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMalwareScanSettings", "Required field: DetectorId, is not set");
    return UpdateMalwareScanSettingsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/malware-scan-settings");
  };

  return UpdateMalwareScanSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateMemberDetectorsOutcome GuardDutyClient::UpdateMemberDetectors(const UpdateMemberDetectorsRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateMemberDetectors", "Required field: DetectorId, is not set");
    return UpdateMemberDetectorsOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/member/detector/update");
  };

  return UpdateMemberDetectorsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateOrganizationConfigurationOutcome GuardDutyClient::UpdateOrganizationConfiguration(
    const UpdateOrganizationConfigurationRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateOrganizationConfiguration", "Required field: DetectorId, is not set");
    return UpdateOrganizationConfigurationOutcome(Aws::Client::AWSError<GuardDutyErrors>(
        GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/admin");
  };

  return UpdateOrganizationConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdatePublishingDestinationOutcome GuardDutyClient::UpdatePublishingDestination(const UpdatePublishingDestinationRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePublishingDestination", "Required field: DetectorId, is not set");
    return UpdatePublishingDestinationOutcome(Aws::Client::AWSError<GuardDutyErrors>(
        GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DetectorId]", false));
  }
  if (!request.DestinationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePublishingDestination", "Required field: DestinationId, is not set");
    return UpdatePublishingDestinationOutcome(Aws::Client::AWSError<GuardDutyErrors>(
        GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DestinationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/publishingDestination/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDestinationId());
  };

  return UpdatePublishingDestinationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateThreatEntitySetOutcome GuardDutyClient::UpdateThreatEntitySet(const UpdateThreatEntitySetRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateThreatEntitySet", "Required field: DetectorId, is not set");
    return UpdateThreatEntitySetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [DetectorId]", false));
  }
  if (!request.ThreatEntitySetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateThreatEntitySet", "Required field: ThreatEntitySetId, is not set");
    return UpdateThreatEntitySetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ThreatEntitySetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/threatentityset/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThreatEntitySetId());
  };

  return UpdateThreatEntitySetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateThreatIntelSetOutcome GuardDutyClient::UpdateThreatIntelSet(const UpdateThreatIntelSetRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateThreatIntelSet", "Required field: DetectorId, is not set");
    return UpdateThreatIntelSetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [DetectorId]", false));
  }
  if (!request.ThreatIntelSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateThreatIntelSet", "Required field: ThreatIntelSetId, is not set");
    return UpdateThreatIntelSetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ThreatIntelSetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/threatintelset/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThreatIntelSetId());
  };

  return UpdateThreatIntelSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateTrustedEntitySetOutcome GuardDutyClient::UpdateTrustedEntitySet(const UpdateTrustedEntitySetRequest& request) const {
  if (!request.DetectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTrustedEntitySet", "Required field: DetectorId, is not set");
    return UpdateTrustedEntitySetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [DetectorId]", false));
  }
  if (!request.TrustedEntitySetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTrustedEntitySet", "Required field: TrustedEntitySetId, is not set");
    return UpdateTrustedEntitySetOutcome(Aws::Client::AWSError<GuardDutyErrors>(GuardDutyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [TrustedEntitySetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detector/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDetectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/trustedentityset/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTrustedEntitySetId());
  };

  return UpdateTrustedEntitySetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
