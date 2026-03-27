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
#include <aws/iot/IoTClient.h>
#include <aws/iot/IoTEndpointProvider.h>
#include <aws/iot/IoTErrorMarshaller.h>
#include <aws/iot/model/AcceptCertificateTransferRequest.h>
#include <aws/iot/model/AddThingToBillingGroupRequest.h>
#include <aws/iot/model/AddThingToThingGroupRequest.h>
#include <aws/iot/model/AssociateSbomWithPackageVersionRequest.h>
#include <aws/iot/model/AssociateTargetsWithJobRequest.h>
#include <aws/iot/model/AttachPolicyRequest.h>
#include <aws/iot/model/AttachSecurityProfileRequest.h>
#include <aws/iot/model/AttachThingPrincipalRequest.h>
#include <aws/iot/model/CancelAuditMitigationActionsTaskRequest.h>
#include <aws/iot/model/CancelAuditTaskRequest.h>
#include <aws/iot/model/CancelCertificateTransferRequest.h>
#include <aws/iot/model/CancelDetectMitigationActionsTaskRequest.h>
#include <aws/iot/model/CancelJobExecutionRequest.h>
#include <aws/iot/model/CancelJobRequest.h>
#include <aws/iot/model/ClearDefaultAuthorizerRequest.h>
#include <aws/iot/model/ConfirmTopicRuleDestinationRequest.h>
#include <aws/iot/model/CreateAuditSuppressionRequest.h>
#include <aws/iot/model/CreateAuthorizerRequest.h>
#include <aws/iot/model/CreateBillingGroupRequest.h>
#include <aws/iot/model/CreateCertificateFromCsrRequest.h>
#include <aws/iot/model/CreateCertificateProviderRequest.h>
#include <aws/iot/model/CreateCommandRequest.h>
#include <aws/iot/model/CreateCustomMetricRequest.h>
#include <aws/iot/model/CreateDimensionRequest.h>
#include <aws/iot/model/CreateDomainConfigurationRequest.h>
#include <aws/iot/model/CreateDynamicThingGroupRequest.h>
#include <aws/iot/model/CreateFleetMetricRequest.h>
#include <aws/iot/model/CreateJobRequest.h>
#include <aws/iot/model/CreateJobTemplateRequest.h>
#include <aws/iot/model/CreateKeysAndCertificateRequest.h>
#include <aws/iot/model/CreateMitigationActionRequest.h>
#include <aws/iot/model/CreateOTAUpdateRequest.h>
#include <aws/iot/model/CreatePackageRequest.h>
#include <aws/iot/model/CreatePackageVersionRequest.h>
#include <aws/iot/model/CreatePolicyRequest.h>
#include <aws/iot/model/CreatePolicyVersionRequest.h>
#include <aws/iot/model/CreateProvisioningClaimRequest.h>
#include <aws/iot/model/CreateProvisioningTemplateRequest.h>
#include <aws/iot/model/CreateProvisioningTemplateVersionRequest.h>
#include <aws/iot/model/CreateRoleAliasRequest.h>
#include <aws/iot/model/CreateScheduledAuditRequest.h>
#include <aws/iot/model/CreateSecurityProfileRequest.h>
#include <aws/iot/model/CreateStreamRequest.h>
#include <aws/iot/model/CreateThingGroupRequest.h>
#include <aws/iot/model/CreateThingRequest.h>
#include <aws/iot/model/CreateThingTypeRequest.h>
#include <aws/iot/model/CreateTopicRuleDestinationRequest.h>
#include <aws/iot/model/CreateTopicRuleRequest.h>
#include <aws/iot/model/DeleteAccountAuditConfigurationRequest.h>
#include <aws/iot/model/DeleteAuditSuppressionRequest.h>
#include <aws/iot/model/DeleteAuthorizerRequest.h>
#include <aws/iot/model/DeleteBillingGroupRequest.h>
#include <aws/iot/model/DeleteCACertificateRequest.h>
#include <aws/iot/model/DeleteCertificateProviderRequest.h>
#include <aws/iot/model/DeleteCertificateRequest.h>
#include <aws/iot/model/DeleteCommandExecutionRequest.h>
#include <aws/iot/model/DeleteCommandRequest.h>
#include <aws/iot/model/DeleteCustomMetricRequest.h>
#include <aws/iot/model/DeleteDimensionRequest.h>
#include <aws/iot/model/DeleteDomainConfigurationRequest.h>
#include <aws/iot/model/DeleteDynamicThingGroupRequest.h>
#include <aws/iot/model/DeleteFleetMetricRequest.h>
#include <aws/iot/model/DeleteJobExecutionRequest.h>
#include <aws/iot/model/DeleteJobRequest.h>
#include <aws/iot/model/DeleteJobTemplateRequest.h>
#include <aws/iot/model/DeleteMitigationActionRequest.h>
#include <aws/iot/model/DeleteOTAUpdateRequest.h>
#include <aws/iot/model/DeletePackageRequest.h>
#include <aws/iot/model/DeletePackageVersionRequest.h>
#include <aws/iot/model/DeletePolicyRequest.h>
#include <aws/iot/model/DeletePolicyVersionRequest.h>
#include <aws/iot/model/DeleteProvisioningTemplateRequest.h>
#include <aws/iot/model/DeleteProvisioningTemplateVersionRequest.h>
#include <aws/iot/model/DeleteRegistrationCodeRequest.h>
#include <aws/iot/model/DeleteRoleAliasRequest.h>
#include <aws/iot/model/DeleteScheduledAuditRequest.h>
#include <aws/iot/model/DeleteSecurityProfileRequest.h>
#include <aws/iot/model/DeleteStreamRequest.h>
#include <aws/iot/model/DeleteThingGroupRequest.h>
#include <aws/iot/model/DeleteThingRequest.h>
#include <aws/iot/model/DeleteThingTypeRequest.h>
#include <aws/iot/model/DeleteTopicRuleDestinationRequest.h>
#include <aws/iot/model/DeleteTopicRuleRequest.h>
#include <aws/iot/model/DeleteV2LoggingLevelRequest.h>
#include <aws/iot/model/DeprecateThingTypeRequest.h>
#include <aws/iot/model/DescribeAccountAuditConfigurationRequest.h>
#include <aws/iot/model/DescribeAuditFindingRequest.h>
#include <aws/iot/model/DescribeAuditMitigationActionsTaskRequest.h>
#include <aws/iot/model/DescribeAuditSuppressionRequest.h>
#include <aws/iot/model/DescribeAuditTaskRequest.h>
#include <aws/iot/model/DescribeAuthorizerRequest.h>
#include <aws/iot/model/DescribeBillingGroupRequest.h>
#include <aws/iot/model/DescribeCACertificateRequest.h>
#include <aws/iot/model/DescribeCertificateProviderRequest.h>
#include <aws/iot/model/DescribeCertificateRequest.h>
#include <aws/iot/model/DescribeCustomMetricRequest.h>
#include <aws/iot/model/DescribeDefaultAuthorizerRequest.h>
#include <aws/iot/model/DescribeDetectMitigationActionsTaskRequest.h>
#include <aws/iot/model/DescribeDimensionRequest.h>
#include <aws/iot/model/DescribeDomainConfigurationRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::IoT;
using namespace Aws::IoT::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace IoT {
const char SERVICE_NAME[] = "iot";
const char ALLOCATION_TAG[] = "IoTClient";
}  // namespace IoT
}  // namespace Aws
const char* IoTClient::GetServiceName() { return SERVICE_NAME; }
const char* IoTClient::GetAllocationTag() { return ALLOCATION_TAG; }

IoTClient::IoTClient(const IoT::IoTClientConfiguration& clientConfiguration, std::shared_ptr<IoTEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<IoTEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IoTClient::IoTClient(const AWSCredentials& credentials, std::shared_ptr<IoTEndpointProviderBase> endpointProvider,
                     const IoT::IoTClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<IoTEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IoTClient::IoTClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<IoTEndpointProviderBase> endpointProvider, const IoT::IoTClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<IoTEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
IoTClient::IoTClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<IoTEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IoTClient::IoTClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<IoTEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IoTClient::IoTClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<IoTEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
IoTClient::~IoTClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<IoTEndpointProviderBase>& IoTClient::accessEndpointProvider() { return m_endpointProvider; }

void IoTClient::init(const IoT::IoTClientConfiguration& config) {
  AWSClient::SetServiceClientName("IoT");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "iot");
}

void IoTClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
IoTClient::InvokeOperationOutcome IoTClient::InvokeServiceOperation(
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

AcceptCertificateTransferOutcome IoTClient::AcceptCertificateTransfer(const AcceptCertificateTransferRequest& request) const {
  if (!request.CertificateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AcceptCertificateTransfer", "Required field: CertificateId, is not set");
    return AcceptCertificateTransferOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [CertificateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accept-certificate-transfer/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCertificateId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? AcceptCertificateTransferOutcome(result.GetResultWithOwnership())
                            : AcceptCertificateTransferOutcome(std::move(result.GetError()));
}

AddThingToBillingGroupOutcome IoTClient::AddThingToBillingGroup(const AddThingToBillingGroupRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/billing-groups/addThingToBillingGroup");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? AddThingToBillingGroupOutcome(result.GetResultWithOwnership())
                            : AddThingToBillingGroupOutcome(std::move(result.GetError()));
}

AddThingToThingGroupOutcome IoTClient::AddThingToThingGroup(const AddThingToThingGroupRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/thing-groups/addThingToThingGroup");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? AddThingToThingGroupOutcome(result.GetResultWithOwnership())
                            : AddThingToThingGroupOutcome(std::move(result.GetError()));
}

AssociateSbomWithPackageVersionOutcome IoTClient::AssociateSbomWithPackageVersion(
    const AssociateSbomWithPackageVersionRequest& request) const {
  if (!request.PackageNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateSbomWithPackageVersion", "Required field: PackageName, is not set");
    return AssociateSbomWithPackageVersionOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageName]", false));
  }
  if (!request.VersionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateSbomWithPackageVersion", "Required field: VersionName, is not set");
    return AssociateSbomWithPackageVersionOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/packages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sbom");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? AssociateSbomWithPackageVersionOutcome(result.GetResultWithOwnership())
                            : AssociateSbomWithPackageVersionOutcome(std::move(result.GetError()));
}

AssociateTargetsWithJobOutcome IoTClient::AssociateTargetsWithJob(const AssociateTargetsWithJobRequest& request) const {
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateTargetsWithJob", "Required field: JobId, is not set");
    return AssociateTargetsWithJobOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/targets");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateTargetsWithJobOutcome(result.GetResultWithOwnership())
                            : AssociateTargetsWithJobOutcome(std::move(result.GetError()));
}

AttachPolicyOutcome IoTClient::AttachPolicy(const AttachPolicyRequest& request) const {
  if (!request.PolicyNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AttachPolicy", "Required field: PolicyName, is not set");
    return AttachPolicyOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/target-policies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? AttachPolicyOutcome(result.GetResultWithOwnership()) : AttachPolicyOutcome(std::move(result.GetError()));
}

AttachSecurityProfileOutcome IoTClient::AttachSecurityProfile(const AttachSecurityProfileRequest& request) const {
  if (!request.SecurityProfileNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AttachSecurityProfile", "Required field: SecurityProfileName, is not set");
    return AttachSecurityProfileOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [SecurityProfileName]", false));
  }
  if (!request.SecurityProfileTargetArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AttachSecurityProfile", "Required field: SecurityProfileTargetArn, is not set");
    return AttachSecurityProfileOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [SecurityProfileTargetArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/security-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSecurityProfileName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/targets");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? AttachSecurityProfileOutcome(result.GetResultWithOwnership())
                            : AttachSecurityProfileOutcome(std::move(result.GetError()));
}

AttachThingPrincipalOutcome IoTClient::AttachThingPrincipal(const AttachThingPrincipalRequest& request) const {
  if (!request.ThingNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AttachThingPrincipal", "Required field: ThingName, is not set");
    return AttachThingPrincipalOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  if (!request.PrincipalHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AttachThingPrincipal", "Required field: Principal, is not set");
    return AttachThingPrincipalOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Principal]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/things/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThingName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/principals");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? AttachThingPrincipalOutcome(result.GetResultWithOwnership())
                            : AttachThingPrincipalOutcome(std::move(result.GetError()));
}

CancelAuditMitigationActionsTaskOutcome IoTClient::CancelAuditMitigationActionsTask(
    const CancelAuditMitigationActionsTaskRequest& request) const {
  if (!request.TaskIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelAuditMitigationActionsTask", "Required field: TaskId, is not set");
    return CancelAuditMitigationActionsTaskOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/mitigationactions/tasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTaskId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/cancel");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CancelAuditMitigationActionsTaskOutcome(result.GetResultWithOwnership())
                            : CancelAuditMitigationActionsTaskOutcome(std::move(result.GetError()));
}

CancelAuditTaskOutcome IoTClient::CancelAuditTask(const CancelAuditTaskRequest& request) const {
  if (!request.TaskIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelAuditTask", "Required field: TaskId, is not set");
    return CancelAuditTaskOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/tasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTaskId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/cancel");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CancelAuditTaskOutcome(result.GetResultWithOwnership())
                            : CancelAuditTaskOutcome(std::move(result.GetError()));
}

CancelCertificateTransferOutcome IoTClient::CancelCertificateTransfer(const CancelCertificateTransferRequest& request) const {
  if (!request.CertificateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelCertificateTransfer", "Required field: CertificateId, is not set");
    return CancelCertificateTransferOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [CertificateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cancel-certificate-transfer/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCertificateId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? CancelCertificateTransferOutcome(result.GetResultWithOwnership())
                            : CancelCertificateTransferOutcome(std::move(result.GetError()));
}

CancelDetectMitigationActionsTaskOutcome IoTClient::CancelDetectMitigationActionsTask(
    const CancelDetectMitigationActionsTaskRequest& request) const {
  if (!request.TaskIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelDetectMitigationActionsTask", "Required field: TaskId, is not set");
    return CancelDetectMitigationActionsTaskOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detect/mitigationactions/tasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTaskId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/cancel");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CancelDetectMitigationActionsTaskOutcome(result.GetResultWithOwnership())
                            : CancelDetectMitigationActionsTaskOutcome(std::move(result.GetError()));
}

CancelJobOutcome IoTClient::CancelJob(const CancelJobRequest& request) const {
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelJob", "Required field: JobId, is not set");
    return CancelJobOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/cancel");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CancelJobOutcome(result.GetResultWithOwnership()) : CancelJobOutcome(std::move(result.GetError()));
}

CancelJobExecutionOutcome IoTClient::CancelJobExecution(const CancelJobExecutionRequest& request) const {
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelJobExecution", "Required field: JobId, is not set");
    return CancelJobExecutionOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  if (!request.ThingNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelJobExecution", "Required field: ThingName, is not set");
    return CancelJobExecutionOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/things/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThingName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/cancel");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CancelJobExecutionOutcome(result.GetResultWithOwnership())
                            : CancelJobExecutionOutcome(std::move(result.GetError()));
}

ClearDefaultAuthorizerOutcome IoTClient::ClearDefaultAuthorizer(const ClearDefaultAuthorizerRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/default-authorizer");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? ClearDefaultAuthorizerOutcome(result.GetResultWithOwnership())
                            : ClearDefaultAuthorizerOutcome(std::move(result.GetError()));
}

ConfirmTopicRuleDestinationOutcome IoTClient::ConfirmTopicRuleDestination(const ConfirmTopicRuleDestinationRequest& request) const {
  if (!request.ConfirmationTokenHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ConfirmTopicRuleDestination", "Required field: ConfirmationToken, is not set");
    return ConfirmTopicRuleDestinationOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ConfirmationToken]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/confirmdestination/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetConfirmationToken());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ConfirmTopicRuleDestinationOutcome(result.GetResultWithOwnership())
                            : ConfirmTopicRuleDestinationOutcome(std::move(result.GetError()));
}

CreateAuditSuppressionOutcome IoTClient::CreateAuditSuppression(const CreateAuditSuppressionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/suppressions/create");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAuditSuppressionOutcome(result.GetResultWithOwnership())
                            : CreateAuditSuppressionOutcome(std::move(result.GetError()));
}

CreateAuthorizerOutcome IoTClient::CreateAuthorizer(const CreateAuthorizerRequest& request) const {
  if (!request.AuthorizerNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAuthorizer", "Required field: AuthorizerName, is not set");
    return CreateAuthorizerOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [AuthorizerName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/authorizer/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAuthorizerName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAuthorizerOutcome(result.GetResultWithOwnership())
                            : CreateAuthorizerOutcome(std::move(result.GetError()));
}

CreateBillingGroupOutcome IoTClient::CreateBillingGroup(const CreateBillingGroupRequest& request) const {
  if (!request.BillingGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateBillingGroup", "Required field: BillingGroupName, is not set");
    return CreateBillingGroupOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [BillingGroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/billing-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBillingGroupName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateBillingGroupOutcome(result.GetResultWithOwnership())
                            : CreateBillingGroupOutcome(std::move(result.GetError()));
}

CreateCertificateFromCsrOutcome IoTClient::CreateCertificateFromCsr(const CreateCertificateFromCsrRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/certificates");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCertificateFromCsrOutcome(result.GetResultWithOwnership())
                            : CreateCertificateFromCsrOutcome(std::move(result.GetError()));
}

CreateCertificateProviderOutcome IoTClient::CreateCertificateProvider(const CreateCertificateProviderRequest& request) const {
  if (!request.CertificateProviderNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateCertificateProvider", "Required field: CertificateProviderName, is not set");
    return CreateCertificateProviderOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [CertificateProviderName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/certificate-providers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCertificateProviderName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCertificateProviderOutcome(result.GetResultWithOwnership())
                            : CreateCertificateProviderOutcome(std::move(result.GetError()));
}

CreateCommandOutcome IoTClient::CreateCommand(const CreateCommandRequest& request) const {
  if (!request.CommandIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateCommand", "Required field: CommandId, is not set");
    return CreateCommandOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CommandId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/commands/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCommandId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateCommandOutcome(result.GetResultWithOwnership()) : CreateCommandOutcome(std::move(result.GetError()));
}

CreateCustomMetricOutcome IoTClient::CreateCustomMetric(const CreateCustomMetricRequest& request) const {
  if (!request.MetricNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateCustomMetric", "Required field: MetricName, is not set");
    return CreateCustomMetricOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MetricName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/custom-metric/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMetricName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCustomMetricOutcome(result.GetResultWithOwnership())
                            : CreateCustomMetricOutcome(std::move(result.GetError()));
}

CreateDimensionOutcome IoTClient::CreateDimension(const CreateDimensionRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDimension", "Required field: Name, is not set");
    return CreateDimensionOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dimensions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDimensionOutcome(result.GetResultWithOwnership())
                            : CreateDimensionOutcome(std::move(result.GetError()));
}

CreateDomainConfigurationOutcome IoTClient::CreateDomainConfiguration(const CreateDomainConfigurationRequest& request) const {
  if (!request.DomainConfigurationNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDomainConfiguration", "Required field: DomainConfigurationName, is not set");
    return CreateDomainConfigurationOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DomainConfigurationName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domainConfigurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainConfigurationName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDomainConfigurationOutcome(result.GetResultWithOwnership())
                            : CreateDomainConfigurationOutcome(std::move(result.GetError()));
}

CreateDynamicThingGroupOutcome IoTClient::CreateDynamicThingGroup(const CreateDynamicThingGroupRequest& request) const {
  if (!request.ThingGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDynamicThingGroup", "Required field: ThingGroupName, is not set");
    return CreateDynamicThingGroupOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ThingGroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dynamic-thing-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThingGroupName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDynamicThingGroupOutcome(result.GetResultWithOwnership())
                            : CreateDynamicThingGroupOutcome(std::move(result.GetError()));
}

CreateFleetMetricOutcome IoTClient::CreateFleetMetric(const CreateFleetMetricRequest& request) const {
  if (!request.MetricNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateFleetMetric", "Required field: MetricName, is not set");
    return CreateFleetMetricOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MetricName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/fleet-metric/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMetricName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateFleetMetricOutcome(result.GetResultWithOwnership())
                            : CreateFleetMetricOutcome(std::move(result.GetError()));
}

CreateJobOutcome IoTClient::CreateJob(const CreateJobRequest& request) const {
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateJob", "Required field: JobId, is not set");
    return CreateJobOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateJobOutcome(result.GetResultWithOwnership()) : CreateJobOutcome(std::move(result.GetError()));
}

CreateJobTemplateOutcome IoTClient::CreateJobTemplate(const CreateJobTemplateRequest& request) const {
  if (!request.JobTemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateJobTemplate", "Required field: JobTemplateId, is not set");
    return CreateJobTemplateOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [JobTemplateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/job-templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobTemplateId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateJobTemplateOutcome(result.GetResultWithOwnership())
                            : CreateJobTemplateOutcome(std::move(result.GetError()));
}

CreateKeysAndCertificateOutcome IoTClient::CreateKeysAndCertificate(const CreateKeysAndCertificateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/keys-and-certificate");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateKeysAndCertificateOutcome(result.GetResultWithOwnership())
                            : CreateKeysAndCertificateOutcome(std::move(result.GetError()));
}

CreateMitigationActionOutcome IoTClient::CreateMitigationAction(const CreateMitigationActionRequest& request) const {
  if (!request.ActionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateMitigationAction", "Required field: ActionName, is not set");
    return CreateMitigationActionOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ActionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/mitigationactions/actions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetActionName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateMitigationActionOutcome(result.GetResultWithOwnership())
                            : CreateMitigationActionOutcome(std::move(result.GetError()));
}

CreateOTAUpdateOutcome IoTClient::CreateOTAUpdate(const CreateOTAUpdateRequest& request) const {
  if (!request.OtaUpdateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateOTAUpdate", "Required field: OtaUpdateId, is not set");
    return CreateOTAUpdateOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OtaUpdateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/otaUpdates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOtaUpdateId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateOTAUpdateOutcome(result.GetResultWithOwnership())
                            : CreateOTAUpdateOutcome(std::move(result.GetError()));
}

CreatePackageOutcome IoTClient::CreatePackage(const CreatePackageRequest& request) const {
  if (!request.PackageNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreatePackage", "Required field: PackageName, is not set");
    return CreatePackageOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/packages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreatePackageOutcome(result.GetResultWithOwnership()) : CreatePackageOutcome(std::move(result.GetError()));
}

CreatePackageVersionOutcome IoTClient::CreatePackageVersion(const CreatePackageVersionRequest& request) const {
  if (!request.PackageNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreatePackageVersion", "Required field: PackageName, is not set");
    return CreatePackageVersionOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageName]", false));
  }
  if (!request.VersionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreatePackageVersion", "Required field: VersionName, is not set");
    return CreatePackageVersionOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/packages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreatePackageVersionOutcome(result.GetResultWithOwnership())
                            : CreatePackageVersionOutcome(std::move(result.GetError()));
}

CreatePolicyOutcome IoTClient::CreatePolicy(const CreatePolicyRequest& request) const {
  if (!request.PolicyNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreatePolicy", "Required field: PolicyName, is not set");
    return CreatePolicyOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePolicyOutcome(result.GetResultWithOwnership()) : CreatePolicyOutcome(std::move(result.GetError()));
}

CreatePolicyVersionOutcome IoTClient::CreatePolicyVersion(const CreatePolicyVersionRequest& request) const {
  if (!request.PolicyNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreatePolicyVersion", "Required field: PolicyName, is not set");
    return CreatePolicyVersionOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/version");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePolicyVersionOutcome(result.GetResultWithOwnership())
                            : CreatePolicyVersionOutcome(std::move(result.GetError()));
}

CreateProvisioningClaimOutcome IoTClient::CreateProvisioningClaim(const CreateProvisioningClaimRequest& request) const {
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateProvisioningClaim", "Required field: TemplateName, is not set");
    return CreateProvisioningClaimOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [TemplateName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/provisioning-templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/provisioning-claim");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateProvisioningClaimOutcome(result.GetResultWithOwnership())
                            : CreateProvisioningClaimOutcome(std::move(result.GetError()));
}

CreateProvisioningTemplateOutcome IoTClient::CreateProvisioningTemplate(const CreateProvisioningTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/provisioning-templates");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateProvisioningTemplateOutcome(result.GetResultWithOwnership())
                            : CreateProvisioningTemplateOutcome(std::move(result.GetError()));
}

CreateProvisioningTemplateVersionOutcome IoTClient::CreateProvisioningTemplateVersion(
    const CreateProvisioningTemplateVersionRequest& request) const {
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateProvisioningTemplateVersion", "Required field: TemplateName, is not set");
    return CreateProvisioningTemplateVersionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [TemplateName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/provisioning-templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateProvisioningTemplateVersionOutcome(result.GetResultWithOwnership())
                            : CreateProvisioningTemplateVersionOutcome(std::move(result.GetError()));
}

CreateRoleAliasOutcome IoTClient::CreateRoleAlias(const CreateRoleAliasRequest& request) const {
  if (!request.RoleAliasHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRoleAlias", "Required field: RoleAlias, is not set");
    return CreateRoleAliasOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoleAlias]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/role-aliases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoleAlias());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRoleAliasOutcome(result.GetResultWithOwnership())
                            : CreateRoleAliasOutcome(std::move(result.GetError()));
}

CreateScheduledAuditOutcome IoTClient::CreateScheduledAudit(const CreateScheduledAuditRequest& request) const {
  if (!request.ScheduledAuditNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateScheduledAudit", "Required field: ScheduledAuditName, is not set");
    return CreateScheduledAuditOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ScheduledAuditName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/scheduledaudits/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScheduledAuditName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateScheduledAuditOutcome(result.GetResultWithOwnership())
                            : CreateScheduledAuditOutcome(std::move(result.GetError()));
}

CreateSecurityProfileOutcome IoTClient::CreateSecurityProfile(const CreateSecurityProfileRequest& request) const {
  if (!request.SecurityProfileNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateSecurityProfile", "Required field: SecurityProfileName, is not set");
    return CreateSecurityProfileOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [SecurityProfileName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/security-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSecurityProfileName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSecurityProfileOutcome(result.GetResultWithOwnership())
                            : CreateSecurityProfileOutcome(std::move(result.GetError()));
}

CreateStreamOutcome IoTClient::CreateStream(const CreateStreamRequest& request) const {
  if (!request.StreamIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateStream", "Required field: StreamId, is not set");
    return CreateStreamOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StreamId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/streams/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStreamId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateStreamOutcome(result.GetResultWithOwnership()) : CreateStreamOutcome(std::move(result.GetError()));
}

CreateThingOutcome IoTClient::CreateThing(const CreateThingRequest& request) const {
  if (!request.ThingNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateThing", "Required field: ThingName, is not set");
    return CreateThingOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/things/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThingName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateThingOutcome(result.GetResultWithOwnership()) : CreateThingOutcome(std::move(result.GetError()));
}

CreateThingGroupOutcome IoTClient::CreateThingGroup(const CreateThingGroupRequest& request) const {
  if (!request.ThingGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateThingGroup", "Required field: ThingGroupName, is not set");
    return CreateThingGroupOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ThingGroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/thing-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThingGroupName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateThingGroupOutcome(result.GetResultWithOwnership())
                            : CreateThingGroupOutcome(std::move(result.GetError()));
}

CreateThingTypeOutcome IoTClient::CreateThingType(const CreateThingTypeRequest& request) const {
  if (!request.ThingTypeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateThingType", "Required field: ThingTypeName, is not set");
    return CreateThingTypeOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [ThingTypeName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/thing-types/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThingTypeName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateThingTypeOutcome(result.GetResultWithOwnership())
                            : CreateThingTypeOutcome(std::move(result.GetError()));
}

CreateTopicRuleOutcome IoTClient::CreateTopicRule(const CreateTopicRuleRequest& request) const {
  if (!request.RuleNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateTopicRule", "Required field: RuleName, is not set");
    return CreateTopicRuleOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuleName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/rules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRuleName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTopicRuleOutcome(result.GetResultWithOwnership())
                            : CreateTopicRuleOutcome(std::move(result.GetError()));
}

CreateTopicRuleDestinationOutcome IoTClient::CreateTopicRuleDestination(const CreateTopicRuleDestinationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/destinations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTopicRuleDestinationOutcome(result.GetResultWithOwnership())
                            : CreateTopicRuleDestinationOutcome(std::move(result.GetError()));
}

DeleteAccountAuditConfigurationOutcome IoTClient::DeleteAccountAuditConfiguration(
    const DeleteAccountAuditConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAccountAuditConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteAccountAuditConfigurationOutcome(std::move(result.GetError()));
}

DeleteAuditSuppressionOutcome IoTClient::DeleteAuditSuppression(const DeleteAuditSuppressionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/suppressions/delete");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAuditSuppressionOutcome(result.GetResultWithOwnership())
                            : DeleteAuditSuppressionOutcome(std::move(result.GetError()));
}

DeleteAuthorizerOutcome IoTClient::DeleteAuthorizer(const DeleteAuthorizerRequest& request) const {
  if (!request.AuthorizerNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAuthorizer", "Required field: AuthorizerName, is not set");
    return DeleteAuthorizerOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [AuthorizerName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/authorizer/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAuthorizerName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAuthorizerOutcome(result.GetResultWithOwnership())
                            : DeleteAuthorizerOutcome(std::move(result.GetError()));
}

DeleteBillingGroupOutcome IoTClient::DeleteBillingGroup(const DeleteBillingGroupRequest& request) const {
  if (!request.BillingGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBillingGroup", "Required field: BillingGroupName, is not set");
    return DeleteBillingGroupOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [BillingGroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/billing-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBillingGroupName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBillingGroupOutcome(result.GetResultWithOwnership())
                            : DeleteBillingGroupOutcome(std::move(result.GetError()));
}

DeleteCACertificateOutcome IoTClient::DeleteCACertificate(const DeleteCACertificateRequest& request) const {
  if (!request.CertificateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCACertificate", "Required field: CertificateId, is not set");
    return DeleteCACertificateOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [CertificateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cacertificate/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCertificateId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteCACertificateOutcome(result.GetResultWithOwnership())
                            : DeleteCACertificateOutcome(std::move(result.GetError()));
}

DeleteCertificateOutcome IoTClient::DeleteCertificate(const DeleteCertificateRequest& request) const {
  if (!request.CertificateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCertificate", "Required field: CertificateId, is not set");
    return DeleteCertificateOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [CertificateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/certificates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCertificateId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteCertificateOutcome(result.GetResultWithOwnership())
                            : DeleteCertificateOutcome(std::move(result.GetError()));
}

DeleteCertificateProviderOutcome IoTClient::DeleteCertificateProvider(const DeleteCertificateProviderRequest& request) const {
  if (!request.CertificateProviderNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCertificateProvider", "Required field: CertificateProviderName, is not set");
    return DeleteCertificateProviderOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [CertificateProviderName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/certificate-providers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCertificateProviderName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteCertificateProviderOutcome(result.GetResultWithOwnership())
                            : DeleteCertificateProviderOutcome(std::move(result.GetError()));
}

DeleteCommandOutcome IoTClient::DeleteCommand(const DeleteCommandRequest& request) const {
  if (!request.CommandIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCommand", "Required field: CommandId, is not set");
    return DeleteCommandOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CommandId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/commands/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCommandId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteCommandOutcome(result.GetResultWithOwnership()) : DeleteCommandOutcome(std::move(result.GetError()));
}

DeleteCommandExecutionOutcome IoTClient::DeleteCommandExecution(const DeleteCommandExecutionRequest& request) const {
  if (!request.ExecutionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCommandExecution", "Required field: ExecutionId, is not set");
    return DeleteCommandExecutionOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExecutionId]", false));
  }
  if (!request.TargetArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCommandExecution", "Required field: TargetArn, is not set");
    return DeleteCommandExecutionOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TargetArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/command-executions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExecutionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteCommandExecutionOutcome(result.GetResultWithOwnership())
                            : DeleteCommandExecutionOutcome(std::move(result.GetError()));
}

DeleteCustomMetricOutcome IoTClient::DeleteCustomMetric(const DeleteCustomMetricRequest& request) const {
  if (!request.MetricNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCustomMetric", "Required field: MetricName, is not set");
    return DeleteCustomMetricOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MetricName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/custom-metric/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMetricName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteCustomMetricOutcome(result.GetResultWithOwnership())
                            : DeleteCustomMetricOutcome(std::move(result.GetError()));
}

DeleteDimensionOutcome IoTClient::DeleteDimension(const DeleteDimensionRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDimension", "Required field: Name, is not set");
    return DeleteDimensionOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dimensions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteDimensionOutcome(result.GetResultWithOwnership())
                            : DeleteDimensionOutcome(std::move(result.GetError()));
}

DeleteDomainConfigurationOutcome IoTClient::DeleteDomainConfiguration(const DeleteDomainConfigurationRequest& request) const {
  if (!request.DomainConfigurationNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDomainConfiguration", "Required field: DomainConfigurationName, is not set");
    return DeleteDomainConfigurationOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DomainConfigurationName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domainConfigurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainConfigurationName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteDomainConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteDomainConfigurationOutcome(std::move(result.GetError()));
}

DeleteDynamicThingGroupOutcome IoTClient::DeleteDynamicThingGroup(const DeleteDynamicThingGroupRequest& request) const {
  if (!request.ThingGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDynamicThingGroup", "Required field: ThingGroupName, is not set");
    return DeleteDynamicThingGroupOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ThingGroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dynamic-thing-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThingGroupName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteDynamicThingGroupOutcome(result.GetResultWithOwnership())
                            : DeleteDynamicThingGroupOutcome(std::move(result.GetError()));
}

DeleteFleetMetricOutcome IoTClient::DeleteFleetMetric(const DeleteFleetMetricRequest& request) const {
  if (!request.MetricNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFleetMetric", "Required field: MetricName, is not set");
    return DeleteFleetMetricOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MetricName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/fleet-metric/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMetricName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteFleetMetricOutcome(result.GetResultWithOwnership())
                            : DeleteFleetMetricOutcome(std::move(result.GetError()));
}

DeleteJobOutcome IoTClient::DeleteJob(const DeleteJobRequest& request) const {
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteJob", "Required field: JobId, is not set");
    return DeleteJobOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteJobOutcome(result.GetResultWithOwnership()) : DeleteJobOutcome(std::move(result.GetError()));
}

DeleteJobExecutionOutcome IoTClient::DeleteJobExecution(const DeleteJobExecutionRequest& request) const {
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteJobExecution", "Required field: JobId, is not set");
    return DeleteJobExecutionOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  if (!request.ThingNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteJobExecution", "Required field: ThingName, is not set");
    return DeleteJobExecutionOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }
  if (!request.ExecutionNumberHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteJobExecution", "Required field: ExecutionNumber, is not set");
    return DeleteJobExecutionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ExecutionNumber]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/things/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThingName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/executionNumber/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExecutionNumber());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteJobExecutionOutcome(result.GetResultWithOwnership())
                            : DeleteJobExecutionOutcome(std::move(result.GetError()));
}

DeleteJobTemplateOutcome IoTClient::DeleteJobTemplate(const DeleteJobTemplateRequest& request) const {
  if (!request.JobTemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteJobTemplate", "Required field: JobTemplateId, is not set");
    return DeleteJobTemplateOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [JobTemplateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/job-templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobTemplateId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteJobTemplateOutcome(result.GetResultWithOwnership())
                            : DeleteJobTemplateOutcome(std::move(result.GetError()));
}

DeleteMitigationActionOutcome IoTClient::DeleteMitigationAction(const DeleteMitigationActionRequest& request) const {
  if (!request.ActionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteMitigationAction", "Required field: ActionName, is not set");
    return DeleteMitigationActionOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ActionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/mitigationactions/actions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetActionName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteMitigationActionOutcome(result.GetResultWithOwnership())
                            : DeleteMitigationActionOutcome(std::move(result.GetError()));
}

DeleteOTAUpdateOutcome IoTClient::DeleteOTAUpdate(const DeleteOTAUpdateRequest& request) const {
  if (!request.OtaUpdateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteOTAUpdate", "Required field: OtaUpdateId, is not set");
    return DeleteOTAUpdateOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OtaUpdateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/otaUpdates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOtaUpdateId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteOTAUpdateOutcome(result.GetResultWithOwnership())
                            : DeleteOTAUpdateOutcome(std::move(result.GetError()));
}

DeletePackageOutcome IoTClient::DeletePackage(const DeletePackageRequest& request) const {
  if (!request.PackageNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePackage", "Required field: PackageName, is not set");
    return DeletePackageOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/packages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeletePackageOutcome(result.GetResultWithOwnership()) : DeletePackageOutcome(std::move(result.GetError()));
}

DeletePackageVersionOutcome IoTClient::DeletePackageVersion(const DeletePackageVersionRequest& request) const {
  if (!request.PackageNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePackageVersion", "Required field: PackageName, is not set");
    return DeletePackageVersionOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PackageName]", false));
  }
  if (!request.VersionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePackageVersion", "Required field: VersionName, is not set");
    return DeletePackageVersionOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/packages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPackageName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeletePackageVersionOutcome(result.GetResultWithOwnership())
                            : DeletePackageVersionOutcome(std::move(result.GetError()));
}

DeletePolicyOutcome IoTClient::DeletePolicy(const DeletePolicyRequest& request) const {
  if (!request.PolicyNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePolicy", "Required field: PolicyName, is not set");
    return DeletePolicyOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeletePolicyOutcome(result.GetResultWithOwnership()) : DeletePolicyOutcome(std::move(result.GetError()));
}

DeletePolicyVersionOutcome IoTClient::DeletePolicyVersion(const DeletePolicyVersionRequest& request) const {
  if (!request.PolicyNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePolicyVersion", "Required field: PolicyName, is not set");
    return DeletePolicyVersionOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PolicyName]", false));
  }
  if (!request.PolicyVersionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePolicyVersion", "Required field: PolicyVersionId, is not set");
    return DeletePolicyVersionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [PolicyVersionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/policies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/version/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyVersionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeletePolicyVersionOutcome(result.GetResultWithOwnership())
                            : DeletePolicyVersionOutcome(std::move(result.GetError()));
}

DeleteProvisioningTemplateOutcome IoTClient::DeleteProvisioningTemplate(const DeleteProvisioningTemplateRequest& request) const {
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProvisioningTemplate", "Required field: TemplateName, is not set");
    return DeleteProvisioningTemplateOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [TemplateName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/provisioning-templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteProvisioningTemplateOutcome(result.GetResultWithOwnership())
                            : DeleteProvisioningTemplateOutcome(std::move(result.GetError()));
}

DeleteProvisioningTemplateVersionOutcome IoTClient::DeleteProvisioningTemplateVersion(
    const DeleteProvisioningTemplateVersionRequest& request) const {
  if (!request.TemplateNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProvisioningTemplateVersion", "Required field: TemplateName, is not set");
    return DeleteProvisioningTemplateVersionOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [TemplateName]", false));
  }
  if (!request.VersionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProvisioningTemplateVersion", "Required field: VersionId, is not set");
    return DeleteProvisioningTemplateVersionOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/provisioning-templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteProvisioningTemplateVersionOutcome(result.GetResultWithOwnership())
                            : DeleteProvisioningTemplateVersionOutcome(std::move(result.GetError()));
}

DeleteRegistrationCodeOutcome IoTClient::DeleteRegistrationCode(const DeleteRegistrationCodeRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/registrationcode");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteRegistrationCodeOutcome(result.GetResultWithOwnership())
                            : DeleteRegistrationCodeOutcome(std::move(result.GetError()));
}

DeleteRoleAliasOutcome IoTClient::DeleteRoleAlias(const DeleteRoleAliasRequest& request) const {
  if (!request.RoleAliasHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRoleAlias", "Required field: RoleAlias, is not set");
    return DeleteRoleAliasOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RoleAlias]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/role-aliases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRoleAlias());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteRoleAliasOutcome(result.GetResultWithOwnership())
                            : DeleteRoleAliasOutcome(std::move(result.GetError()));
}

DeleteScheduledAuditOutcome IoTClient::DeleteScheduledAudit(const DeleteScheduledAuditRequest& request) const {
  if (!request.ScheduledAuditNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteScheduledAudit", "Required field: ScheduledAuditName, is not set");
    return DeleteScheduledAuditOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ScheduledAuditName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/scheduledaudits/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScheduledAuditName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteScheduledAuditOutcome(result.GetResultWithOwnership())
                            : DeleteScheduledAuditOutcome(std::move(result.GetError()));
}

DeleteSecurityProfileOutcome IoTClient::DeleteSecurityProfile(const DeleteSecurityProfileRequest& request) const {
  if (!request.SecurityProfileNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSecurityProfile", "Required field: SecurityProfileName, is not set");
    return DeleteSecurityProfileOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [SecurityProfileName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/security-profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSecurityProfileName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteSecurityProfileOutcome(result.GetResultWithOwnership())
                            : DeleteSecurityProfileOutcome(std::move(result.GetError()));
}

DeleteStreamOutcome IoTClient::DeleteStream(const DeleteStreamRequest& request) const {
  if (!request.StreamIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteStream", "Required field: StreamId, is not set");
    return DeleteStreamOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StreamId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/streams/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetStreamId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteStreamOutcome(result.GetResultWithOwnership()) : DeleteStreamOutcome(std::move(result.GetError()));
}

DeleteThingOutcome IoTClient::DeleteThing(const DeleteThingRequest& request) const {
  if (!request.ThingNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteThing", "Required field: ThingName, is not set");
    return DeleteThingOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThingName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/things/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThingName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteThingOutcome(result.GetResultWithOwnership()) : DeleteThingOutcome(std::move(result.GetError()));
}

DeleteThingGroupOutcome IoTClient::DeleteThingGroup(const DeleteThingGroupRequest& request) const {
  if (!request.ThingGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteThingGroup", "Required field: ThingGroupName, is not set");
    return DeleteThingGroupOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ThingGroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/thing-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThingGroupName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteThingGroupOutcome(result.GetResultWithOwnership())
                            : DeleteThingGroupOutcome(std::move(result.GetError()));
}

DeleteThingTypeOutcome IoTClient::DeleteThingType(const DeleteThingTypeRequest& request) const {
  if (!request.ThingTypeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteThingType", "Required field: ThingTypeName, is not set");
    return DeleteThingTypeOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [ThingTypeName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/thing-types/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThingTypeName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteThingTypeOutcome(result.GetResultWithOwnership())
                            : DeleteThingTypeOutcome(std::move(result.GetError()));
}

DeleteTopicRuleOutcome IoTClient::DeleteTopicRule(const DeleteTopicRuleRequest& request) const {
  if (!request.RuleNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTopicRule", "Required field: RuleName, is not set");
    return DeleteTopicRuleOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RuleName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/rules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRuleName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteTopicRuleOutcome(result.GetResultWithOwnership())
                            : DeleteTopicRuleOutcome(std::move(result.GetError()));
}

DeleteTopicRuleDestinationOutcome IoTClient::DeleteTopicRuleDestination(const DeleteTopicRuleDestinationRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTopicRuleDestination", "Required field: Arn, is not set");
    return DeleteTopicRuleDestinationOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/destinations/");
    endpointResolutionOutcome.GetResult().AddPathSegments(request.GetArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteTopicRuleDestinationOutcome(result.GetResultWithOwnership())
                            : DeleteTopicRuleDestinationOutcome(std::move(result.GetError()));
}

DeleteV2LoggingLevelOutcome IoTClient::DeleteV2LoggingLevel(const DeleteV2LoggingLevelRequest& request) const {
  if (!request.TargetTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteV2LoggingLevel", "Required field: TargetType, is not set");
    return DeleteV2LoggingLevelOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TargetType]", false));
  }
  if (!request.TargetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteV2LoggingLevel", "Required field: TargetName, is not set");
    return DeleteV2LoggingLevelOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TargetName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v2LoggingLevel");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteV2LoggingLevelOutcome(result.GetResultWithOwnership())
                            : DeleteV2LoggingLevelOutcome(std::move(result.GetError()));
}

DeprecateThingTypeOutcome IoTClient::DeprecateThingType(const DeprecateThingTypeRequest& request) const {
  if (!request.ThingTypeNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeprecateThingType", "Required field: ThingTypeName, is not set");
    return DeprecateThingTypeOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ThingTypeName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/thing-types/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThingTypeName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/deprecate");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeprecateThingTypeOutcome(result.GetResultWithOwnership())
                            : DeprecateThingTypeOutcome(std::move(result.GetError()));
}

DescribeAccountAuditConfigurationOutcome IoTClient::DescribeAccountAuditConfiguration(
    const DescribeAccountAuditConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeAccountAuditConfigurationOutcome(result.GetResultWithOwnership())
                            : DescribeAccountAuditConfigurationOutcome(std::move(result.GetError()));
}

DescribeAuditFindingOutcome IoTClient::DescribeAuditFinding(const DescribeAuditFindingRequest& request) const {
  if (!request.FindingIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAuditFinding", "Required field: FindingId, is not set");
    return DescribeAuditFindingOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FindingId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/findings/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFindingId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeAuditFindingOutcome(result.GetResultWithOwnership())
                            : DescribeAuditFindingOutcome(std::move(result.GetError()));
}

DescribeAuditMitigationActionsTaskOutcome IoTClient::DescribeAuditMitigationActionsTask(
    const DescribeAuditMitigationActionsTaskRequest& request) const {
  if (!request.TaskIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAuditMitigationActionsTask", "Required field: TaskId, is not set");
    return DescribeAuditMitigationActionsTaskOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/mitigationactions/tasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTaskId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeAuditMitigationActionsTaskOutcome(result.GetResultWithOwnership())
                            : DescribeAuditMitigationActionsTaskOutcome(std::move(result.GetError()));
}

DescribeAuditSuppressionOutcome IoTClient::DescribeAuditSuppression(const DescribeAuditSuppressionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/suppressions/describe");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DescribeAuditSuppressionOutcome(result.GetResultWithOwnership())
                            : DescribeAuditSuppressionOutcome(std::move(result.GetError()));
}

DescribeAuditTaskOutcome IoTClient::DescribeAuditTask(const DescribeAuditTaskRequest& request) const {
  if (!request.TaskIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAuditTask", "Required field: TaskId, is not set");
    return DescribeAuditTaskOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/tasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTaskId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeAuditTaskOutcome(result.GetResultWithOwnership())
                            : DescribeAuditTaskOutcome(std::move(result.GetError()));
}

DescribeAuthorizerOutcome IoTClient::DescribeAuthorizer(const DescribeAuthorizerRequest& request) const {
  if (!request.AuthorizerNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAuthorizer", "Required field: AuthorizerName, is not set");
    return DescribeAuthorizerOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [AuthorizerName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/authorizer/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAuthorizerName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeAuthorizerOutcome(result.GetResultWithOwnership())
                            : DescribeAuthorizerOutcome(std::move(result.GetError()));
}

DescribeBillingGroupOutcome IoTClient::DescribeBillingGroup(const DescribeBillingGroupRequest& request) const {
  if (!request.BillingGroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeBillingGroup", "Required field: BillingGroupName, is not set");
    return DescribeBillingGroupOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [BillingGroupName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/billing-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBillingGroupName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeBillingGroupOutcome(result.GetResultWithOwnership())
                            : DescribeBillingGroupOutcome(std::move(result.GetError()));
}

DescribeCACertificateOutcome IoTClient::DescribeCACertificate(const DescribeCACertificateRequest& request) const {
  if (!request.CertificateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeCACertificate", "Required field: CertificateId, is not set");
    return DescribeCACertificateOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [CertificateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/cacertificate/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCertificateId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeCACertificateOutcome(result.GetResultWithOwnership())
                            : DescribeCACertificateOutcome(std::move(result.GetError()));
}

DescribeCertificateOutcome IoTClient::DescribeCertificate(const DescribeCertificateRequest& request) const {
  if (!request.CertificateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeCertificate", "Required field: CertificateId, is not set");
    return DescribeCertificateOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [CertificateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/certificates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCertificateId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeCertificateOutcome(result.GetResultWithOwnership())
                            : DescribeCertificateOutcome(std::move(result.GetError()));
}

DescribeCertificateProviderOutcome IoTClient::DescribeCertificateProvider(const DescribeCertificateProviderRequest& request) const {
  if (!request.CertificateProviderNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeCertificateProvider", "Required field: CertificateProviderName, is not set");
    return DescribeCertificateProviderOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [CertificateProviderName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/certificate-providers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCertificateProviderName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeCertificateProviderOutcome(result.GetResultWithOwnership())
                            : DescribeCertificateProviderOutcome(std::move(result.GetError()));
}

DescribeCustomMetricOutcome IoTClient::DescribeCustomMetric(const DescribeCustomMetricRequest& request) const {
  if (!request.MetricNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeCustomMetric", "Required field: MetricName, is not set");
    return DescribeCustomMetricOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [MetricName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/custom-metric/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMetricName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeCustomMetricOutcome(result.GetResultWithOwnership())
                            : DescribeCustomMetricOutcome(std::move(result.GetError()));
}

DescribeDefaultAuthorizerOutcome IoTClient::DescribeDefaultAuthorizer(const DescribeDefaultAuthorizerRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/default-authorizer");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeDefaultAuthorizerOutcome(result.GetResultWithOwnership())
                            : DescribeDefaultAuthorizerOutcome(std::move(result.GetError()));
}

DescribeDetectMitigationActionsTaskOutcome IoTClient::DescribeDetectMitigationActionsTask(
    const DescribeDetectMitigationActionsTaskRequest& request) const {
  if (!request.TaskIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDetectMitigationActionsTask", "Required field: TaskId, is not set");
    return DescribeDetectMitigationActionsTaskOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/detect/mitigationactions/tasks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTaskId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeDetectMitigationActionsTaskOutcome(result.GetResultWithOwnership())
                            : DescribeDetectMitigationActionsTaskOutcome(std::move(result.GetError()));
}

DescribeDimensionOutcome IoTClient::DescribeDimension(const DescribeDimensionRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDimension", "Required field: Name, is not set");
    return DescribeDimensionOutcome(
        Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dimensions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeDimensionOutcome(result.GetResultWithOwnership())
                            : DescribeDimensionOutcome(std::move(result.GetError()));
}

DescribeDomainConfigurationOutcome IoTClient::DescribeDomainConfiguration(const DescribeDomainConfigurationRequest& request) const {
  if (!request.DomainConfigurationNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDomainConfiguration", "Required field: DomainConfigurationName, is not set");
    return DescribeDomainConfigurationOutcome(Aws::Client::AWSError<IoTErrors>(IoTErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [DomainConfigurationName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domainConfigurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainConfigurationName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeDomainConfigurationOutcome(result.GetResultWithOwnership())
                            : DescribeDomainConfigurationOutcome(std::move(result.GetError()));
}
