/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/BackupClient.h>
#include <aws/backup/BackupEndpointProvider.h>
#include <aws/backup/BackupErrorMarshaller.h>
#include <aws/backup/model/AssociateBackupVaultMpaApprovalTeamRequest.h>
#include <aws/backup/model/CancelLegalHoldRequest.h>
#include <aws/backup/model/CreateBackupPlanRequest.h>
#include <aws/backup/model/CreateBackupSelectionRequest.h>
#include <aws/backup/model/CreateBackupVaultRequest.h>
#include <aws/backup/model/CreateFrameworkRequest.h>
#include <aws/backup/model/CreateLegalHoldRequest.h>
#include <aws/backup/model/CreateLogicallyAirGappedBackupVaultRequest.h>
#include <aws/backup/model/CreateReportPlanRequest.h>
#include <aws/backup/model/CreateRestoreAccessBackupVaultRequest.h>
#include <aws/backup/model/CreateRestoreTestingPlanRequest.h>
#include <aws/backup/model/CreateRestoreTestingSelectionRequest.h>
#include <aws/backup/model/CreateTieringConfigurationRequest.h>
#include <aws/backup/model/DeleteBackupPlanRequest.h>
#include <aws/backup/model/DeleteBackupSelectionRequest.h>
#include <aws/backup/model/DeleteBackupVaultAccessPolicyRequest.h>
#include <aws/backup/model/DeleteBackupVaultLockConfigurationRequest.h>
#include <aws/backup/model/DeleteBackupVaultNotificationsRequest.h>
#include <aws/backup/model/DeleteBackupVaultRequest.h>
#include <aws/backup/model/DeleteFrameworkRequest.h>
#include <aws/backup/model/DeleteRecoveryPointRequest.h>
#include <aws/backup/model/DeleteReportPlanRequest.h>
#include <aws/backup/model/DeleteRestoreTestingPlanRequest.h>
#include <aws/backup/model/DeleteRestoreTestingSelectionRequest.h>
#include <aws/backup/model/DeleteTieringConfigurationRequest.h>
#include <aws/backup/model/DescribeBackupJobRequest.h>
#include <aws/backup/model/DescribeBackupVaultRequest.h>
#include <aws/backup/model/DescribeCopyJobRequest.h>
#include <aws/backup/model/DescribeFrameworkRequest.h>
#include <aws/backup/model/DescribeGlobalSettingsRequest.h>
#include <aws/backup/model/DescribeProtectedResourceRequest.h>
#include <aws/backup/model/DescribeRecoveryPointRequest.h>
#include <aws/backup/model/DescribeRegionSettingsRequest.h>
#include <aws/backup/model/DescribeReportJobRequest.h>
#include <aws/backup/model/DescribeReportPlanRequest.h>
#include <aws/backup/model/DescribeRestoreJobRequest.h>
#include <aws/backup/model/DescribeScanJobRequest.h>
#include <aws/backup/model/DisassociateBackupVaultMpaApprovalTeamRequest.h>
#include <aws/backup/model/DisassociateRecoveryPointFromParentRequest.h>
#include <aws/backup/model/DisassociateRecoveryPointRequest.h>
#include <aws/backup/model/ExportBackupPlanTemplateRequest.h>
#include <aws/backup/model/GetBackupPlanFromJSONRequest.h>
#include <aws/backup/model/GetBackupPlanFromTemplateRequest.h>
#include <aws/backup/model/GetBackupPlanRequest.h>
#include <aws/backup/model/GetBackupSelectionRequest.h>
#include <aws/backup/model/GetBackupVaultAccessPolicyRequest.h>
#include <aws/backup/model/GetBackupVaultNotificationsRequest.h>
#include <aws/backup/model/GetLegalHoldRequest.h>
#include <aws/backup/model/GetRecoveryPointIndexDetailsRequest.h>
#include <aws/backup/model/GetRecoveryPointRestoreMetadataRequest.h>
#include <aws/backup/model/GetRestoreJobMetadataRequest.h>
#include <aws/backup/model/GetRestoreTestingInferredMetadataRequest.h>
#include <aws/backup/model/GetRestoreTestingPlanRequest.h>
#include <aws/backup/model/GetRestoreTestingSelectionRequest.h>
#include <aws/backup/model/GetSupportedResourceTypesRequest.h>
#include <aws/backup/model/GetTieringConfigurationRequest.h>
#include <aws/backup/model/ListBackupJobSummariesRequest.h>
#include <aws/backup/model/ListBackupJobsRequest.h>
#include <aws/backup/model/ListBackupPlanTemplatesRequest.h>
#include <aws/backup/model/ListBackupPlanVersionsRequest.h>
#include <aws/backup/model/ListBackupPlansRequest.h>
#include <aws/backup/model/ListBackupSelectionsRequest.h>
#include <aws/backup/model/ListBackupVaultsRequest.h>
#include <aws/backup/model/ListCopyJobSummariesRequest.h>
#include <aws/backup/model/ListCopyJobsRequest.h>
#include <aws/backup/model/ListFrameworksRequest.h>
#include <aws/backup/model/ListIndexedRecoveryPointsRequest.h>
#include <aws/backup/model/ListLegalHoldsRequest.h>
#include <aws/backup/model/ListProtectedResourcesByBackupVaultRequest.h>
#include <aws/backup/model/ListProtectedResourcesRequest.h>
#include <aws/backup/model/ListRecoveryPointsByBackupVaultRequest.h>
#include <aws/backup/model/ListRecoveryPointsByLegalHoldRequest.h>
#include <aws/backup/model/ListRecoveryPointsByResourceRequest.h>
#include <aws/backup/model/ListReportJobsRequest.h>
#include <aws/backup/model/ListReportPlansRequest.h>
#include <aws/backup/model/ListRestoreAccessBackupVaultsRequest.h>
#include <aws/backup/model/ListRestoreJobSummariesRequest.h>
#include <aws/backup/model/ListRestoreJobsByProtectedResourceRequest.h>
#include <aws/backup/model/ListRestoreJobsRequest.h>
#include <aws/backup/model/ListRestoreTestingPlansRequest.h>
#include <aws/backup/model/ListRestoreTestingSelectionsRequest.h>
#include <aws/backup/model/ListScanJobSummariesRequest.h>
#include <aws/backup/model/ListScanJobsRequest.h>
#include <aws/backup/model/ListTagsRequest.h>
#include <aws/backup/model/ListTieringConfigurationsRequest.h>
#include <aws/backup/model/PutBackupVaultAccessPolicyRequest.h>
#include <aws/backup/model/PutBackupVaultLockConfigurationRequest.h>
#include <aws/backup/model/PutBackupVaultNotificationsRequest.h>
#include <aws/backup/model/PutRestoreValidationResultRequest.h>
#include <aws/backup/model/RevokeRestoreAccessBackupVaultRequest.h>
#include <aws/backup/model/StartBackupJobRequest.h>
#include <aws/backup/model/StartCopyJobRequest.h>
#include <aws/backup/model/StartReportJobRequest.h>
#include <aws/backup/model/StartRestoreJobRequest.h>
#include <aws/backup/model/StartScanJobRequest.h>
#include <aws/backup/model/StopBackupJobRequest.h>
#include <aws/backup/model/TagResourceRequest.h>
#include <aws/backup/model/UntagResourceRequest.h>
#include <aws/backup/model/UpdateBackupPlanRequest.h>
#include <aws/backup/model/UpdateFrameworkRequest.h>
#include <aws/backup/model/UpdateGlobalSettingsRequest.h>
#include <aws/backup/model/UpdateRecoveryPointIndexSettingsRequest.h>
#include <aws/backup/model/UpdateRecoveryPointLifecycleRequest.h>
#include <aws/backup/model/UpdateRegionSettingsRequest.h>
#include <aws/backup/model/UpdateReportPlanRequest.h>
#include <aws/backup/model/UpdateRestoreTestingPlanRequest.h>
#include <aws/backup/model/UpdateRestoreTestingSelectionRequest.h>
#include <aws/backup/model/UpdateTieringConfigurationRequest.h>
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
using namespace Aws::Backup;
using namespace Aws::Backup::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Backup {
const char SERVICE_NAME[] = "backup";
const char ALLOCATION_TAG[] = "BackupClient";
}  // namespace Backup
}  // namespace Aws
const char* BackupClient::GetServiceName() { return SERVICE_NAME; }
const char* BackupClient::GetAllocationTag() { return ALLOCATION_TAG; }

BackupClient::BackupClient(const Backup::BackupClientConfiguration& clientConfiguration,
                           std::shared_ptr<BackupEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BackupErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<BackupEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

BackupClient::BackupClient(const AWSCredentials& credentials, std::shared_ptr<BackupEndpointProviderBase> endpointProvider,
                           const Backup::BackupClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BackupErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<BackupEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

BackupClient::BackupClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<BackupEndpointProviderBase> endpointProvider,
                           const Backup::BackupClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BackupErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<BackupEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
BackupClient::BackupClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BackupErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<BackupEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

BackupClient::BackupClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BackupErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<BackupEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

BackupClient::BackupClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BackupErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<BackupEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
BackupClient::~BackupClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<BackupEndpointProviderBase>& BackupClient::accessEndpointProvider() { return m_endpointProvider; }

void BackupClient::init(const Backup::BackupClientConfiguration& config) {
  AWSClient::SetServiceClientName("Backup");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "backup");
}

void BackupClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
BackupClient::InvokeOperationOutcome BackupClient::InvokeServiceOperation(
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

AssociateBackupVaultMpaApprovalTeamOutcome BackupClient::AssociateBackupVaultMpaApprovalTeam(
    const AssociateBackupVaultMpaApprovalTeamRequest& request) const {
  if (!request.BackupVaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateBackupVaultMpaApprovalTeam", "Required field: BackupVaultName, is not set");
    return AssociateBackupVaultMpaApprovalTeamOutcome(Aws::Client::AWSError<BackupErrors>(
        BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/mpaApprovalTeam");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? AssociateBackupVaultMpaApprovalTeamOutcome(result.GetResultWithOwnership())
                            : AssociateBackupVaultMpaApprovalTeamOutcome(std::move(result.GetError()));
}

CancelLegalHoldOutcome BackupClient::CancelLegalHold(const CancelLegalHoldRequest& request) const {
  if (!request.LegalHoldIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelLegalHold", "Required field: LegalHoldId, is not set");
    return CancelLegalHoldOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [LegalHoldId]", false));
  }
  if (!request.CancelDescriptionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelLegalHold", "Required field: CancelDescription, is not set");
    return CancelLegalHoldOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [CancelDescription]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/legal-holds/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLegalHoldId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? CancelLegalHoldOutcome(result.GetResultWithOwnership())
                            : CancelLegalHoldOutcome(std::move(result.GetError()));
}

CreateBackupPlanOutcome BackupClient::CreateBackupPlan(const CreateBackupPlanRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup/plans/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateBackupPlanOutcome(result.GetResultWithOwnership())
                            : CreateBackupPlanOutcome(std::move(result.GetError()));
}

CreateBackupSelectionOutcome BackupClient::CreateBackupSelection(const CreateBackupSelectionRequest& request) const {
  if (!request.BackupPlanIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateBackupSelection", "Required field: BackupPlanId, is not set");
    return CreateBackupSelectionOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [BackupPlanId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup/plans/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupPlanId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/selections/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateBackupSelectionOutcome(result.GetResultWithOwnership())
                            : CreateBackupSelectionOutcome(std::move(result.GetError()));
}

CreateBackupVaultOutcome BackupClient::CreateBackupVault(const CreateBackupVaultRequest& request) const {
  if (!request.BackupVaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateBackupVault", "Required field: BackupVaultName, is not set");
    return CreateBackupVaultOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [BackupVaultName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateBackupVaultOutcome(result.GetResultWithOwnership())
                            : CreateBackupVaultOutcome(std::move(result.GetError()));
}

CreateFrameworkOutcome BackupClient::CreateFramework(const CreateFrameworkRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/frameworks");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateFrameworkOutcome(result.GetResultWithOwnership())
                            : CreateFrameworkOutcome(std::move(result.GetError()));
}

CreateLegalHoldOutcome BackupClient::CreateLegalHold(const CreateLegalHoldRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/legal-holds/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateLegalHoldOutcome(result.GetResultWithOwnership())
                            : CreateLegalHoldOutcome(std::move(result.GetError()));
}

CreateLogicallyAirGappedBackupVaultOutcome BackupClient::CreateLogicallyAirGappedBackupVault(
    const CreateLogicallyAirGappedBackupVaultRequest& request) const {
  if (!request.BackupVaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateLogicallyAirGappedBackupVault", "Required field: BackupVaultName, is not set");
    return CreateLogicallyAirGappedBackupVaultOutcome(Aws::Client::AWSError<BackupErrors>(
        BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/logically-air-gapped-backup-vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateLogicallyAirGappedBackupVaultOutcome(result.GetResultWithOwnership())
                            : CreateLogicallyAirGappedBackupVaultOutcome(std::move(result.GetError()));
}

CreateReportPlanOutcome BackupClient::CreateReportPlan(const CreateReportPlanRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/report-plans");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateReportPlanOutcome(result.GetResultWithOwnership())
                            : CreateReportPlanOutcome(std::move(result.GetError()));
}

CreateRestoreAccessBackupVaultOutcome BackupClient::CreateRestoreAccessBackupVault(
    const CreateRestoreAccessBackupVaultRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restore-access-backup-vaults");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateRestoreAccessBackupVaultOutcome(result.GetResultWithOwnership())
                            : CreateRestoreAccessBackupVaultOutcome(std::move(result.GetError()));
}

CreateRestoreTestingPlanOutcome BackupClient::CreateRestoreTestingPlan(const CreateRestoreTestingPlanRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restore-testing/plans");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateRestoreTestingPlanOutcome(result.GetResultWithOwnership())
                            : CreateRestoreTestingPlanOutcome(std::move(result.GetError()));
}

CreateRestoreTestingSelectionOutcome BackupClient::CreateRestoreTestingSelection(
    const CreateRestoreTestingSelectionRequest& request) const {
  if (!request.RestoreTestingPlanNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRestoreTestingSelection", "Required field: RestoreTestingPlanName, is not set");
    return CreateRestoreTestingSelectionOutcome(Aws::Client::AWSError<BackupErrors>(
        BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestoreTestingPlanName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restore-testing/plans/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestoreTestingPlanName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/selections");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateRestoreTestingSelectionOutcome(result.GetResultWithOwnership())
                            : CreateRestoreTestingSelectionOutcome(std::move(result.GetError()));
}

CreateTieringConfigurationOutcome BackupClient::CreateTieringConfiguration(const CreateTieringConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tiering-configurations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateTieringConfigurationOutcome(result.GetResultWithOwnership())
                            : CreateTieringConfigurationOutcome(std::move(result.GetError()));
}

DeleteBackupPlanOutcome BackupClient::DeleteBackupPlan(const DeleteBackupPlanRequest& request) const {
  if (!request.BackupPlanIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBackupPlan", "Required field: BackupPlanId, is not set");
    return DeleteBackupPlanOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [BackupPlanId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup/plans/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupPlanId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBackupPlanOutcome(result.GetResultWithOwnership())
                            : DeleteBackupPlanOutcome(std::move(result.GetError()));
}

DeleteBackupSelectionOutcome BackupClient::DeleteBackupSelection(const DeleteBackupSelectionRequest& request) const {
  if (!request.BackupPlanIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBackupSelection", "Required field: BackupPlanId, is not set");
    return DeleteBackupSelectionOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [BackupPlanId]", false));
  }
  if (!request.SelectionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBackupSelection", "Required field: SelectionId, is not set");
    return DeleteBackupSelectionOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [SelectionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup/plans/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupPlanId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/selections/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSelectionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBackupSelectionOutcome(result.GetResultWithOwnership())
                            : DeleteBackupSelectionOutcome(std::move(result.GetError()));
}

DeleteBackupVaultOutcome BackupClient::DeleteBackupVault(const DeleteBackupVaultRequest& request) const {
  if (!request.BackupVaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBackupVault", "Required field: BackupVaultName, is not set");
    return DeleteBackupVaultOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [BackupVaultName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBackupVaultOutcome(result.GetResultWithOwnership())
                            : DeleteBackupVaultOutcome(std::move(result.GetError()));
}

DeleteBackupVaultAccessPolicyOutcome BackupClient::DeleteBackupVaultAccessPolicy(
    const DeleteBackupVaultAccessPolicyRequest& request) const {
  if (!request.BackupVaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBackupVaultAccessPolicy", "Required field: BackupVaultName, is not set");
    return DeleteBackupVaultAccessPolicyOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [BackupVaultName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/access-policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBackupVaultAccessPolicyOutcome(result.GetResultWithOwnership())
                            : DeleteBackupVaultAccessPolicyOutcome(std::move(result.GetError()));
}

DeleteBackupVaultLockConfigurationOutcome BackupClient::DeleteBackupVaultLockConfiguration(
    const DeleteBackupVaultLockConfigurationRequest& request) const {
  if (!request.BackupVaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBackupVaultLockConfiguration", "Required field: BackupVaultName, is not set");
    return DeleteBackupVaultLockConfigurationOutcome(Aws::Client::AWSError<BackupErrors>(
        BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vault-lock");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBackupVaultLockConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteBackupVaultLockConfigurationOutcome(std::move(result.GetError()));
}

DeleteBackupVaultNotificationsOutcome BackupClient::DeleteBackupVaultNotifications(
    const DeleteBackupVaultNotificationsRequest& request) const {
  if (!request.BackupVaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBackupVaultNotifications", "Required field: BackupVaultName, is not set");
    return DeleteBackupVaultNotificationsOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [BackupVaultName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/notification-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteBackupVaultNotificationsOutcome(result.GetResultWithOwnership())
                            : DeleteBackupVaultNotificationsOutcome(std::move(result.GetError()));
}

DeleteFrameworkOutcome BackupClient::DeleteFramework(const DeleteFrameworkRequest& request) const {
  if (!request.FrameworkNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFramework", "Required field: FrameworkName, is not set");
    return DeleteFrameworkOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [FrameworkName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/frameworks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFrameworkName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteFrameworkOutcome(result.GetResultWithOwnership())
                            : DeleteFrameworkOutcome(std::move(result.GetError()));
}

DeleteRecoveryPointOutcome BackupClient::DeleteRecoveryPoint(const DeleteRecoveryPointRequest& request) const {
  if (!request.BackupVaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRecoveryPoint", "Required field: BackupVaultName, is not set");
    return DeleteRecoveryPointOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [BackupVaultName]", false));
  }
  if (!request.RecoveryPointArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRecoveryPoint", "Required field: RecoveryPointArn, is not set");
    return DeleteRecoveryPointOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [RecoveryPointArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/recovery-points/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecoveryPointArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteRecoveryPointOutcome(result.GetResultWithOwnership())
                            : DeleteRecoveryPointOutcome(std::move(result.GetError()));
}

DeleteReportPlanOutcome BackupClient::DeleteReportPlan(const DeleteReportPlanRequest& request) const {
  if (!request.ReportPlanNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteReportPlan", "Required field: ReportPlanName, is not set");
    return DeleteReportPlanOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ReportPlanName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/report-plans/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReportPlanName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteReportPlanOutcome(result.GetResultWithOwnership())
                            : DeleteReportPlanOutcome(std::move(result.GetError()));
}

DeleteRestoreTestingPlanOutcome BackupClient::DeleteRestoreTestingPlan(const DeleteRestoreTestingPlanRequest& request) const {
  if (!request.RestoreTestingPlanNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRestoreTestingPlan", "Required field: RestoreTestingPlanName, is not set");
    return DeleteRestoreTestingPlanOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [RestoreTestingPlanName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restore-testing/plans/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestoreTestingPlanName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteRestoreTestingPlanOutcome(result.GetResultWithOwnership())
                            : DeleteRestoreTestingPlanOutcome(std::move(result.GetError()));
}

DeleteRestoreTestingSelectionOutcome BackupClient::DeleteRestoreTestingSelection(
    const DeleteRestoreTestingSelectionRequest& request) const {
  if (!request.RestoreTestingPlanNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRestoreTestingSelection", "Required field: RestoreTestingPlanName, is not set");
    return DeleteRestoreTestingSelectionOutcome(Aws::Client::AWSError<BackupErrors>(
        BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestoreTestingPlanName]", false));
  }
  if (!request.RestoreTestingSelectionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRestoreTestingSelection", "Required field: RestoreTestingSelectionName, is not set");
    return DeleteRestoreTestingSelectionOutcome(Aws::Client::AWSError<BackupErrors>(
        BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestoreTestingSelectionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restore-testing/plans/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestoreTestingPlanName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/selections/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestoreTestingSelectionName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteRestoreTestingSelectionOutcome(result.GetResultWithOwnership())
                            : DeleteRestoreTestingSelectionOutcome(std::move(result.GetError()));
}

DeleteTieringConfigurationOutcome BackupClient::DeleteTieringConfiguration(const DeleteTieringConfigurationRequest& request) const {
  if (!request.TieringConfigurationNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTieringConfiguration", "Required field: TieringConfigurationName, is not set");
    return DeleteTieringConfigurationOutcome(Aws::Client::AWSError<BackupErrors>(
        BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TieringConfigurationName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tiering-configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTieringConfigurationName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteTieringConfigurationOutcome(result.GetResultWithOwnership())
                            : DeleteTieringConfigurationOutcome(std::move(result.GetError()));
}

DescribeBackupJobOutcome BackupClient::DescribeBackupJob(const DescribeBackupJobRequest& request) const {
  if (!request.BackupJobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeBackupJob", "Required field: BackupJobId, is not set");
    return DescribeBackupJobOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [BackupJobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupJobId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeBackupJobOutcome(result.GetResultWithOwnership())
                            : DescribeBackupJobOutcome(std::move(result.GetError()));
}

DescribeBackupVaultOutcome BackupClient::DescribeBackupVault(const DescribeBackupVaultRequest& request) const {
  if (!request.BackupVaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeBackupVault", "Required field: BackupVaultName, is not set");
    return DescribeBackupVaultOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [BackupVaultName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeBackupVaultOutcome(result.GetResultWithOwnership())
                            : DescribeBackupVaultOutcome(std::move(result.GetError()));
}

DescribeCopyJobOutcome BackupClient::DescribeCopyJob(const DescribeCopyJobRequest& request) const {
  if (!request.CopyJobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeCopyJob", "Required field: CopyJobId, is not set");
    return DescribeCopyJobOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [CopyJobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/copy-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCopyJobId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeCopyJobOutcome(result.GetResultWithOwnership())
                            : DescribeCopyJobOutcome(std::move(result.GetError()));
}

DescribeFrameworkOutcome BackupClient::DescribeFramework(const DescribeFrameworkRequest& request) const {
  if (!request.FrameworkNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeFramework", "Required field: FrameworkName, is not set");
    return DescribeFrameworkOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [FrameworkName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/frameworks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFrameworkName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeFrameworkOutcome(result.GetResultWithOwnership())
                            : DescribeFrameworkOutcome(std::move(result.GetError()));
}

DescribeGlobalSettingsOutcome BackupClient::DescribeGlobalSettings(const DescribeGlobalSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-settings");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeGlobalSettingsOutcome(result.GetResultWithOwnership())
                            : DescribeGlobalSettingsOutcome(std::move(result.GetError()));
}

DescribeProtectedResourceOutcome BackupClient::DescribeProtectedResource(const DescribeProtectedResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeProtectedResource", "Required field: ResourceArn, is not set");
    return DescribeProtectedResourceOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeProtectedResourceOutcome(result.GetResultWithOwnership())
                            : DescribeProtectedResourceOutcome(std::move(result.GetError()));
}

DescribeRecoveryPointOutcome BackupClient::DescribeRecoveryPoint(const DescribeRecoveryPointRequest& request) const {
  if (!request.BackupVaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeRecoveryPoint", "Required field: BackupVaultName, is not set");
    return DescribeRecoveryPointOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [BackupVaultName]", false));
  }
  if (!request.RecoveryPointArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeRecoveryPoint", "Required field: RecoveryPointArn, is not set");
    return DescribeRecoveryPointOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [RecoveryPointArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/recovery-points/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecoveryPointArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeRecoveryPointOutcome(result.GetResultWithOwnership())
                            : DescribeRecoveryPointOutcome(std::move(result.GetError()));
}

DescribeRegionSettingsOutcome BackupClient::DescribeRegionSettings(const DescribeRegionSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/account-settings");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeRegionSettingsOutcome(result.GetResultWithOwnership())
                            : DescribeRegionSettingsOutcome(std::move(result.GetError()));
}

DescribeReportJobOutcome BackupClient::DescribeReportJob(const DescribeReportJobRequest& request) const {
  if (!request.ReportJobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeReportJob", "Required field: ReportJobId, is not set");
    return DescribeReportJobOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ReportJobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/report-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReportJobId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeReportJobOutcome(result.GetResultWithOwnership())
                            : DescribeReportJobOutcome(std::move(result.GetError()));
}

DescribeReportPlanOutcome BackupClient::DescribeReportPlan(const DescribeReportPlanRequest& request) const {
  if (!request.ReportPlanNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeReportPlan", "Required field: ReportPlanName, is not set");
    return DescribeReportPlanOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ReportPlanName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/report-plans/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReportPlanName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeReportPlanOutcome(result.GetResultWithOwnership())
                            : DescribeReportPlanOutcome(std::move(result.GetError()));
}

DescribeRestoreJobOutcome BackupClient::DescribeRestoreJob(const DescribeRestoreJobRequest& request) const {
  if (!request.RestoreJobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeRestoreJob", "Required field: RestoreJobId, is not set");
    return DescribeRestoreJobOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [RestoreJobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restore-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestoreJobId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeRestoreJobOutcome(result.GetResultWithOwnership())
                            : DescribeRestoreJobOutcome(std::move(result.GetError()));
}

DescribeScanJobOutcome BackupClient::DescribeScanJob(const DescribeScanJobRequest& request) const {
  if (!request.ScanJobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeScanJob", "Required field: ScanJobId, is not set");
    return DescribeScanJobOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ScanJobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/scan/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScanJobId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeScanJobOutcome(result.GetResultWithOwnership())
                            : DescribeScanJobOutcome(std::move(result.GetError()));
}

DisassociateBackupVaultMpaApprovalTeamOutcome BackupClient::DisassociateBackupVaultMpaApprovalTeam(
    const DisassociateBackupVaultMpaApprovalTeamRequest& request) const {
  if (!request.BackupVaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateBackupVaultMpaApprovalTeam", "Required field: BackupVaultName, is not set");
    return DisassociateBackupVaultMpaApprovalTeamOutcome(Aws::Client::AWSError<BackupErrors>(
        BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/mpaApprovalTeam");
    ss.str("?delete");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateBackupVaultMpaApprovalTeamOutcome(result.GetResultWithOwnership())
                            : DisassociateBackupVaultMpaApprovalTeamOutcome(std::move(result.GetError()));
}

DisassociateRecoveryPointOutcome BackupClient::DisassociateRecoveryPoint(const DisassociateRecoveryPointRequest& request) const {
  if (!request.BackupVaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateRecoveryPoint", "Required field: BackupVaultName, is not set");
    return DisassociateRecoveryPointOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [BackupVaultName]", false));
  }
  if (!request.RecoveryPointArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateRecoveryPoint", "Required field: RecoveryPointArn, is not set");
    return DisassociateRecoveryPointOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [RecoveryPointArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/recovery-points/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecoveryPointArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/disassociate");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateRecoveryPointOutcome(result.GetResultWithOwnership())
                            : DisassociateRecoveryPointOutcome(std::move(result.GetError()));
}

DisassociateRecoveryPointFromParentOutcome BackupClient::DisassociateRecoveryPointFromParent(
    const DisassociateRecoveryPointFromParentRequest& request) const {
  if (!request.BackupVaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateRecoveryPointFromParent", "Required field: BackupVaultName, is not set");
    return DisassociateRecoveryPointFromParentOutcome(Aws::Client::AWSError<BackupErrors>(
        BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  if (!request.RecoveryPointArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateRecoveryPointFromParent", "Required field: RecoveryPointArn, is not set");
    return DisassociateRecoveryPointFromParentOutcome(Aws::Client::AWSError<BackupErrors>(
        BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecoveryPointArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/recovery-points/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecoveryPointArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/parentAssociation");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DisassociateRecoveryPointFromParentOutcome(result.GetResultWithOwnership())
                            : DisassociateRecoveryPointFromParentOutcome(std::move(result.GetError()));
}

ExportBackupPlanTemplateOutcome BackupClient::ExportBackupPlanTemplate(const ExportBackupPlanTemplateRequest& request) const {
  if (!request.BackupPlanIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ExportBackupPlanTemplate", "Required field: BackupPlanId, is not set");
    return ExportBackupPlanTemplateOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [BackupPlanId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup/plans/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupPlanId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/toTemplate/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ExportBackupPlanTemplateOutcome(result.GetResultWithOwnership())
                            : ExportBackupPlanTemplateOutcome(std::move(result.GetError()));
}

GetBackupPlanOutcome BackupClient::GetBackupPlan(const GetBackupPlanRequest& request) const {
  if (!request.BackupPlanIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBackupPlan", "Required field: BackupPlanId, is not set");
    return GetBackupPlanOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [BackupPlanId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup/plans/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupPlanId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBackupPlanOutcome(result.GetResultWithOwnership()) : GetBackupPlanOutcome(std::move(result.GetError()));
}

GetBackupPlanFromJSONOutcome BackupClient::GetBackupPlanFromJSON(const GetBackupPlanFromJSONRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup/template/json/toPlan");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetBackupPlanFromJSONOutcome(result.GetResultWithOwnership())
                            : GetBackupPlanFromJSONOutcome(std::move(result.GetError()));
}

GetBackupPlanFromTemplateOutcome BackupClient::GetBackupPlanFromTemplate(const GetBackupPlanFromTemplateRequest& request) const {
  if (!request.BackupPlanTemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBackupPlanFromTemplate", "Required field: BackupPlanTemplateId, is not set");
    return GetBackupPlanFromTemplateOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [BackupPlanTemplateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup/template/plans/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupPlanTemplateId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/toPlan");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBackupPlanFromTemplateOutcome(result.GetResultWithOwnership())
                            : GetBackupPlanFromTemplateOutcome(std::move(result.GetError()));
}

GetBackupSelectionOutcome BackupClient::GetBackupSelection(const GetBackupSelectionRequest& request) const {
  if (!request.BackupPlanIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBackupSelection", "Required field: BackupPlanId, is not set");
    return GetBackupSelectionOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [BackupPlanId]", false));
  }
  if (!request.SelectionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBackupSelection", "Required field: SelectionId, is not set");
    return GetBackupSelectionOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [SelectionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup/plans/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupPlanId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/selections/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSelectionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBackupSelectionOutcome(result.GetResultWithOwnership())
                            : GetBackupSelectionOutcome(std::move(result.GetError()));
}

GetBackupVaultAccessPolicyOutcome BackupClient::GetBackupVaultAccessPolicy(const GetBackupVaultAccessPolicyRequest& request) const {
  if (!request.BackupVaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBackupVaultAccessPolicy", "Required field: BackupVaultName, is not set");
    return GetBackupVaultAccessPolicyOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [BackupVaultName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/access-policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBackupVaultAccessPolicyOutcome(result.GetResultWithOwnership())
                            : GetBackupVaultAccessPolicyOutcome(std::move(result.GetError()));
}

GetBackupVaultNotificationsOutcome BackupClient::GetBackupVaultNotifications(const GetBackupVaultNotificationsRequest& request) const {
  if (!request.BackupVaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBackupVaultNotifications", "Required field: BackupVaultName, is not set");
    return GetBackupVaultNotificationsOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [BackupVaultName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/notification-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBackupVaultNotificationsOutcome(result.GetResultWithOwnership())
                            : GetBackupVaultNotificationsOutcome(std::move(result.GetError()));
}

GetLegalHoldOutcome BackupClient::GetLegalHold(const GetLegalHoldRequest& request) const {
  if (!request.LegalHoldIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetLegalHold", "Required field: LegalHoldId, is not set");
    return GetLegalHoldOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [LegalHoldId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/legal-holds/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLegalHoldId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetLegalHoldOutcome(result.GetResultWithOwnership()) : GetLegalHoldOutcome(std::move(result.GetError()));
}

GetRecoveryPointIndexDetailsOutcome BackupClient::GetRecoveryPointIndexDetails(const GetRecoveryPointIndexDetailsRequest& request) const {
  if (!request.BackupVaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRecoveryPointIndexDetails", "Required field: BackupVaultName, is not set");
    return GetRecoveryPointIndexDetailsOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [BackupVaultName]", false));
  }
  if (!request.RecoveryPointArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRecoveryPointIndexDetails", "Required field: RecoveryPointArn, is not set");
    return GetRecoveryPointIndexDetailsOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [RecoveryPointArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/recovery-points/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecoveryPointArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/index");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetRecoveryPointIndexDetailsOutcome(result.GetResultWithOwnership())
                            : GetRecoveryPointIndexDetailsOutcome(std::move(result.GetError()));
}

GetRecoveryPointRestoreMetadataOutcome BackupClient::GetRecoveryPointRestoreMetadata(
    const GetRecoveryPointRestoreMetadataRequest& request) const {
  if (!request.BackupVaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRecoveryPointRestoreMetadata", "Required field: BackupVaultName, is not set");
    return GetRecoveryPointRestoreMetadataOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [BackupVaultName]", false));
  }
  if (!request.RecoveryPointArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRecoveryPointRestoreMetadata", "Required field: RecoveryPointArn, is not set");
    return GetRecoveryPointRestoreMetadataOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [RecoveryPointArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/recovery-points/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecoveryPointArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/restore-metadata");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetRecoveryPointRestoreMetadataOutcome(result.GetResultWithOwnership())
                            : GetRecoveryPointRestoreMetadataOutcome(std::move(result.GetError()));
}

GetRestoreJobMetadataOutcome BackupClient::GetRestoreJobMetadata(const GetRestoreJobMetadataRequest& request) const {
  if (!request.RestoreJobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRestoreJobMetadata", "Required field: RestoreJobId, is not set");
    return GetRestoreJobMetadataOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [RestoreJobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restore-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestoreJobId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/metadata");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetRestoreJobMetadataOutcome(result.GetResultWithOwnership())
                            : GetRestoreJobMetadataOutcome(std::move(result.GetError()));
}

GetRestoreTestingInferredMetadataOutcome BackupClient::GetRestoreTestingInferredMetadata(
    const GetRestoreTestingInferredMetadataRequest& request) const {
  if (!request.BackupVaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRestoreTestingInferredMetadata", "Required field: BackupVaultName, is not set");
    return GetRestoreTestingInferredMetadataOutcome(Aws::Client::AWSError<BackupErrors>(
        BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  if (!request.RecoveryPointArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRestoreTestingInferredMetadata", "Required field: RecoveryPointArn, is not set");
    return GetRestoreTestingInferredMetadataOutcome(Aws::Client::AWSError<BackupErrors>(
        BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecoveryPointArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restore-testing/inferred-metadata");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetRestoreTestingInferredMetadataOutcome(result.GetResultWithOwnership())
                            : GetRestoreTestingInferredMetadataOutcome(std::move(result.GetError()));
}

GetRestoreTestingPlanOutcome BackupClient::GetRestoreTestingPlan(const GetRestoreTestingPlanRequest& request) const {
  if (!request.RestoreTestingPlanNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRestoreTestingPlan", "Required field: RestoreTestingPlanName, is not set");
    return GetRestoreTestingPlanOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [RestoreTestingPlanName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restore-testing/plans/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestoreTestingPlanName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetRestoreTestingPlanOutcome(result.GetResultWithOwnership())
                            : GetRestoreTestingPlanOutcome(std::move(result.GetError()));
}

GetRestoreTestingSelectionOutcome BackupClient::GetRestoreTestingSelection(const GetRestoreTestingSelectionRequest& request) const {
  if (!request.RestoreTestingPlanNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRestoreTestingSelection", "Required field: RestoreTestingPlanName, is not set");
    return GetRestoreTestingSelectionOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [RestoreTestingPlanName]", false));
  }
  if (!request.RestoreTestingSelectionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRestoreTestingSelection", "Required field: RestoreTestingSelectionName, is not set");
    return GetRestoreTestingSelectionOutcome(Aws::Client::AWSError<BackupErrors>(
        BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestoreTestingSelectionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restore-testing/plans/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestoreTestingPlanName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/selections/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestoreTestingSelectionName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetRestoreTestingSelectionOutcome(result.GetResultWithOwnership())
                            : GetRestoreTestingSelectionOutcome(std::move(result.GetError()));
}

GetSupportedResourceTypesOutcome BackupClient::GetSupportedResourceTypes(const GetSupportedResourceTypesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/supported-resource-types");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetSupportedResourceTypesOutcome(result.GetResultWithOwnership())
                            : GetSupportedResourceTypesOutcome(std::move(result.GetError()));
}

GetTieringConfigurationOutcome BackupClient::GetTieringConfiguration(const GetTieringConfigurationRequest& request) const {
  if (!request.TieringConfigurationNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTieringConfiguration", "Required field: TieringConfigurationName, is not set");
    return GetTieringConfigurationOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [TieringConfigurationName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tiering-configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTieringConfigurationName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetTieringConfigurationOutcome(result.GetResultWithOwnership())
                            : GetTieringConfigurationOutcome(std::move(result.GetError()));
}

ListBackupJobSummariesOutcome BackupClient::ListBackupJobSummaries(const ListBackupJobSummariesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/backup-job-summaries");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListBackupJobSummariesOutcome(result.GetResultWithOwnership())
                            : ListBackupJobSummariesOutcome(std::move(result.GetError()));
}

ListBackupJobsOutcome BackupClient::ListBackupJobs(const ListBackupJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup-jobs/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListBackupJobsOutcome(result.GetResultWithOwnership()) : ListBackupJobsOutcome(std::move(result.GetError()));
}

ListBackupPlanTemplatesOutcome BackupClient::ListBackupPlanTemplates(const ListBackupPlanTemplatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup/template/plans");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListBackupPlanTemplatesOutcome(result.GetResultWithOwnership())
                            : ListBackupPlanTemplatesOutcome(std::move(result.GetError()));
}

ListBackupPlanVersionsOutcome BackupClient::ListBackupPlanVersions(const ListBackupPlanVersionsRequest& request) const {
  if (!request.BackupPlanIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBackupPlanVersions", "Required field: BackupPlanId, is not set");
    return ListBackupPlanVersionsOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [BackupPlanId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup/plans/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupPlanId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListBackupPlanVersionsOutcome(result.GetResultWithOwnership())
                            : ListBackupPlanVersionsOutcome(std::move(result.GetError()));
}

ListBackupPlansOutcome BackupClient::ListBackupPlans(const ListBackupPlansRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup/plans/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListBackupPlansOutcome(result.GetResultWithOwnership())
                            : ListBackupPlansOutcome(std::move(result.GetError()));
}

ListBackupSelectionsOutcome BackupClient::ListBackupSelections(const ListBackupSelectionsRequest& request) const {
  if (!request.BackupPlanIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBackupSelections", "Required field: BackupPlanId, is not set");
    return ListBackupSelectionsOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [BackupPlanId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup/plans/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupPlanId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/selections/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListBackupSelectionsOutcome(result.GetResultWithOwnership())
                            : ListBackupSelectionsOutcome(std::move(result.GetError()));
}

ListBackupVaultsOutcome BackupClient::ListBackupVaults(const ListBackupVaultsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListBackupVaultsOutcome(result.GetResultWithOwnership())
                            : ListBackupVaultsOutcome(std::move(result.GetError()));
}

ListCopyJobSummariesOutcome BackupClient::ListCopyJobSummaries(const ListCopyJobSummariesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/copy-job-summaries");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListCopyJobSummariesOutcome(result.GetResultWithOwnership())
                            : ListCopyJobSummariesOutcome(std::move(result.GetError()));
}

ListCopyJobsOutcome BackupClient::ListCopyJobs(const ListCopyJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/copy-jobs/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListCopyJobsOutcome(result.GetResultWithOwnership()) : ListCopyJobsOutcome(std::move(result.GetError()));
}

ListFrameworksOutcome BackupClient::ListFrameworks(const ListFrameworksRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/frameworks");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListFrameworksOutcome(result.GetResultWithOwnership()) : ListFrameworksOutcome(std::move(result.GetError()));
}

ListIndexedRecoveryPointsOutcome BackupClient::ListIndexedRecoveryPoints(const ListIndexedRecoveryPointsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/indexes/recovery-point/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListIndexedRecoveryPointsOutcome(result.GetResultWithOwnership())
                            : ListIndexedRecoveryPointsOutcome(std::move(result.GetError()));
}

ListLegalHoldsOutcome BackupClient::ListLegalHolds(const ListLegalHoldsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/legal-holds/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListLegalHoldsOutcome(result.GetResultWithOwnership()) : ListLegalHoldsOutcome(std::move(result.GetError()));
}

ListProtectedResourcesOutcome BackupClient::ListProtectedResources(const ListProtectedResourcesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListProtectedResourcesOutcome(result.GetResultWithOwnership())
                            : ListProtectedResourcesOutcome(std::move(result.GetError()));
}

ListProtectedResourcesByBackupVaultOutcome BackupClient::ListProtectedResourcesByBackupVault(
    const ListProtectedResourcesByBackupVaultRequest& request) const {
  if (!request.BackupVaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListProtectedResourcesByBackupVault", "Required field: BackupVaultName, is not set");
    return ListProtectedResourcesByBackupVaultOutcome(Aws::Client::AWSError<BackupErrors>(
        BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListProtectedResourcesByBackupVaultOutcome(result.GetResultWithOwnership())
                            : ListProtectedResourcesByBackupVaultOutcome(std::move(result.GetError()));
}

ListRecoveryPointsByBackupVaultOutcome BackupClient::ListRecoveryPointsByBackupVault(
    const ListRecoveryPointsByBackupVaultRequest& request) const {
  if (!request.BackupVaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRecoveryPointsByBackupVault", "Required field: BackupVaultName, is not set");
    return ListRecoveryPointsByBackupVaultOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [BackupVaultName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/recovery-points/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListRecoveryPointsByBackupVaultOutcome(result.GetResultWithOwnership())
                            : ListRecoveryPointsByBackupVaultOutcome(std::move(result.GetError()));
}

ListRecoveryPointsByLegalHoldOutcome BackupClient::ListRecoveryPointsByLegalHold(
    const ListRecoveryPointsByLegalHoldRequest& request) const {
  if (!request.LegalHoldIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRecoveryPointsByLegalHold", "Required field: LegalHoldId, is not set");
    return ListRecoveryPointsByLegalHoldOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [LegalHoldId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/legal-holds/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLegalHoldId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/recovery-points");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListRecoveryPointsByLegalHoldOutcome(result.GetResultWithOwnership())
                            : ListRecoveryPointsByLegalHoldOutcome(std::move(result.GetError()));
}

ListRecoveryPointsByResourceOutcome BackupClient::ListRecoveryPointsByResource(const ListRecoveryPointsByResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRecoveryPointsByResource", "Required field: ResourceArn, is not set");
    return ListRecoveryPointsByResourceOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/recovery-points/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListRecoveryPointsByResourceOutcome(result.GetResultWithOwnership())
                            : ListRecoveryPointsByResourceOutcome(std::move(result.GetError()));
}

ListReportJobsOutcome BackupClient::ListReportJobs(const ListReportJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/report-jobs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListReportJobsOutcome(result.GetResultWithOwnership()) : ListReportJobsOutcome(std::move(result.GetError()));
}

ListReportPlansOutcome BackupClient::ListReportPlans(const ListReportPlansRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/report-plans");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListReportPlansOutcome(result.GetResultWithOwnership())
                            : ListReportPlansOutcome(std::move(result.GetError()));
}

ListRestoreAccessBackupVaultsOutcome BackupClient::ListRestoreAccessBackupVaults(
    const ListRestoreAccessBackupVaultsRequest& request) const {
  if (!request.BackupVaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRestoreAccessBackupVaults", "Required field: BackupVaultName, is not set");
    return ListRestoreAccessBackupVaultsOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [BackupVaultName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/logically-air-gapped-backup-vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/restore-access-backup-vaults/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListRestoreAccessBackupVaultsOutcome(result.GetResultWithOwnership())
                            : ListRestoreAccessBackupVaultsOutcome(std::move(result.GetError()));
}

ListRestoreJobSummariesOutcome BackupClient::ListRestoreJobSummaries(const ListRestoreJobSummariesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/restore-job-summaries");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListRestoreJobSummariesOutcome(result.GetResultWithOwnership())
                            : ListRestoreJobSummariesOutcome(std::move(result.GetError()));
}

ListRestoreJobsOutcome BackupClient::ListRestoreJobs(const ListRestoreJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restore-jobs/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListRestoreJobsOutcome(result.GetResultWithOwnership())
                            : ListRestoreJobsOutcome(std::move(result.GetError()));
}

ListRestoreJobsByProtectedResourceOutcome BackupClient::ListRestoreJobsByProtectedResource(
    const ListRestoreJobsByProtectedResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRestoreJobsByProtectedResource", "Required field: ResourceArn, is not set");
    return ListRestoreJobsByProtectedResourceOutcome(Aws::Client::AWSError<BackupErrors>(
        BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/restore-jobs/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListRestoreJobsByProtectedResourceOutcome(result.GetResultWithOwnership())
                            : ListRestoreJobsByProtectedResourceOutcome(std::move(result.GetError()));
}

ListRestoreTestingPlansOutcome BackupClient::ListRestoreTestingPlans(const ListRestoreTestingPlansRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restore-testing/plans");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListRestoreTestingPlansOutcome(result.GetResultWithOwnership())
                            : ListRestoreTestingPlansOutcome(std::move(result.GetError()));
}

ListRestoreTestingSelectionsOutcome BackupClient::ListRestoreTestingSelections(const ListRestoreTestingSelectionsRequest& request) const {
  if (!request.RestoreTestingPlanNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRestoreTestingSelections", "Required field: RestoreTestingPlanName, is not set");
    return ListRestoreTestingSelectionsOutcome(Aws::Client::AWSError<BackupErrors>(
        BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestoreTestingPlanName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restore-testing/plans/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestoreTestingPlanName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/selections");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListRestoreTestingSelectionsOutcome(result.GetResultWithOwnership())
                            : ListRestoreTestingSelectionsOutcome(std::move(result.GetError()));
}

ListScanJobSummariesOutcome BackupClient::ListScanJobSummaries(const ListScanJobSummariesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/scan-job-summaries");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListScanJobSummariesOutcome(result.GetResultWithOwnership())
                            : ListScanJobSummariesOutcome(std::move(result.GetError()));
}

ListScanJobsOutcome BackupClient::ListScanJobs(const ListScanJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/scan/jobs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListScanJobsOutcome(result.GetResultWithOwnership()) : ListScanJobsOutcome(std::move(result.GetError()));
}

ListTagsOutcome BackupClient::ListTags(const ListTagsRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTags", "Required field: ResourceArn, is not set");
    return ListTagsOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                               "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsOutcome(result.GetResultWithOwnership()) : ListTagsOutcome(std::move(result.GetError()));
}

ListTieringConfigurationsOutcome BackupClient::ListTieringConfigurations(const ListTieringConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tiering-configurations/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTieringConfigurationsOutcome(result.GetResultWithOwnership())
                            : ListTieringConfigurationsOutcome(std::move(result.GetError()));
}

PutBackupVaultAccessPolicyOutcome BackupClient::PutBackupVaultAccessPolicy(const PutBackupVaultAccessPolicyRequest& request) const {
  if (!request.BackupVaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutBackupVaultAccessPolicy", "Required field: BackupVaultName, is not set");
    return PutBackupVaultAccessPolicyOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [BackupVaultName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/access-policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutBackupVaultAccessPolicyOutcome(result.GetResultWithOwnership())
                            : PutBackupVaultAccessPolicyOutcome(std::move(result.GetError()));
}

PutBackupVaultLockConfigurationOutcome BackupClient::PutBackupVaultLockConfiguration(
    const PutBackupVaultLockConfigurationRequest& request) const {
  if (!request.BackupVaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutBackupVaultLockConfiguration", "Required field: BackupVaultName, is not set");
    return PutBackupVaultLockConfigurationOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                      "Missing required field [BackupVaultName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vault-lock");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutBackupVaultLockConfigurationOutcome(result.GetResultWithOwnership())
                            : PutBackupVaultLockConfigurationOutcome(std::move(result.GetError()));
}

PutBackupVaultNotificationsOutcome BackupClient::PutBackupVaultNotifications(const PutBackupVaultNotificationsRequest& request) const {
  if (!request.BackupVaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutBackupVaultNotifications", "Required field: BackupVaultName, is not set");
    return PutBackupVaultNotificationsOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [BackupVaultName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/notification-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutBackupVaultNotificationsOutcome(result.GetResultWithOwnership())
                            : PutBackupVaultNotificationsOutcome(std::move(result.GetError()));
}

PutRestoreValidationResultOutcome BackupClient::PutRestoreValidationResult(const PutRestoreValidationResultRequest& request) const {
  if (!request.RestoreJobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutRestoreValidationResult", "Required field: RestoreJobId, is not set");
    return PutRestoreValidationResultOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [RestoreJobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restore-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestoreJobId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/validations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutRestoreValidationResultOutcome(result.GetResultWithOwnership())
                            : PutRestoreValidationResultOutcome(std::move(result.GetError()));
}

RevokeRestoreAccessBackupVaultOutcome BackupClient::RevokeRestoreAccessBackupVault(
    const RevokeRestoreAccessBackupVaultRequest& request) const {
  if (!request.BackupVaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RevokeRestoreAccessBackupVault", "Required field: BackupVaultName, is not set");
    return RevokeRestoreAccessBackupVaultOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [BackupVaultName]", false));
  }
  if (!request.RestoreAccessBackupVaultArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RevokeRestoreAccessBackupVault", "Required field: RestoreAccessBackupVaultArn, is not set");
    return RevokeRestoreAccessBackupVaultOutcome(Aws::Client::AWSError<BackupErrors>(
        BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestoreAccessBackupVaultArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/logically-air-gapped-backup-vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/restore-access-backup-vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestoreAccessBackupVaultArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? RevokeRestoreAccessBackupVaultOutcome(result.GetResultWithOwnership())
                            : RevokeRestoreAccessBackupVaultOutcome(std::move(result.GetError()));
}

StartBackupJobOutcome BackupClient::StartBackupJob(const StartBackupJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup-jobs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? StartBackupJobOutcome(result.GetResultWithOwnership()) : StartBackupJobOutcome(std::move(result.GetError()));
}

StartCopyJobOutcome BackupClient::StartCopyJob(const StartCopyJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/copy-jobs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? StartCopyJobOutcome(result.GetResultWithOwnership()) : StartCopyJobOutcome(std::move(result.GetError()));
}

StartReportJobOutcome BackupClient::StartReportJob(const StartReportJobRequest& request) const {
  if (!request.ReportPlanNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartReportJob", "Required field: ReportPlanName, is not set");
    return StartReportJobOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ReportPlanName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/report-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReportPlanName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartReportJobOutcome(result.GetResultWithOwnership()) : StartReportJobOutcome(std::move(result.GetError()));
}

StartRestoreJobOutcome BackupClient::StartRestoreJob(const StartRestoreJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restore-jobs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? StartRestoreJobOutcome(result.GetResultWithOwnership())
                            : StartRestoreJobOutcome(std::move(result.GetError()));
}

StartScanJobOutcome BackupClient::StartScanJob(const StartScanJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/scan/job");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? StartScanJobOutcome(result.GetResultWithOwnership()) : StartScanJobOutcome(std::move(result.GetError()));
}

StopBackupJobOutcome BackupClient::StopBackupJob(const StopBackupJobRequest& request) const {
  if (!request.BackupJobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopBackupJob", "Required field: BackupJobId, is not set");
    return StopBackupJobOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [BackupJobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupJobId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopBackupJobOutcome(result.GetResultWithOwnership()) : StopBackupJobOutcome(std::move(result.GetError()));
}

TagResourceOutcome BackupClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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

UntagResourceOutcome BackupClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/untag/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateBackupPlanOutcome BackupClient::UpdateBackupPlan(const UpdateBackupPlanRequest& request) const {
  if (!request.BackupPlanIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBackupPlan", "Required field: BackupPlanId, is not set");
    return UpdateBackupPlanOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [BackupPlanId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup/plans/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupPlanId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateBackupPlanOutcome(result.GetResultWithOwnership())
                            : UpdateBackupPlanOutcome(std::move(result.GetError()));
}

UpdateFrameworkOutcome BackupClient::UpdateFramework(const UpdateFrameworkRequest& request) const {
  if (!request.FrameworkNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFramework", "Required field: FrameworkName, is not set");
    return UpdateFrameworkOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [FrameworkName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/frameworks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFrameworkName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateFrameworkOutcome(result.GetResultWithOwnership())
                            : UpdateFrameworkOutcome(std::move(result.GetError()));
}

UpdateGlobalSettingsOutcome BackupClient::UpdateGlobalSettings(const UpdateGlobalSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-settings");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateGlobalSettingsOutcome(result.GetResultWithOwnership())
                            : UpdateGlobalSettingsOutcome(std::move(result.GetError()));
}

UpdateRecoveryPointIndexSettingsOutcome BackupClient::UpdateRecoveryPointIndexSettings(
    const UpdateRecoveryPointIndexSettingsRequest& request) const {
  if (!request.BackupVaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRecoveryPointIndexSettings", "Required field: BackupVaultName, is not set");
    return UpdateRecoveryPointIndexSettingsOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                       "Missing required field [BackupVaultName]", false));
  }
  if (!request.RecoveryPointArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRecoveryPointIndexSettings", "Required field: RecoveryPointArn, is not set");
    return UpdateRecoveryPointIndexSettingsOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                       "Missing required field [RecoveryPointArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/recovery-points/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecoveryPointArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/index");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateRecoveryPointIndexSettingsOutcome(result.GetResultWithOwnership())
                            : UpdateRecoveryPointIndexSettingsOutcome(std::move(result.GetError()));
}

UpdateRecoveryPointLifecycleOutcome BackupClient::UpdateRecoveryPointLifecycle(const UpdateRecoveryPointLifecycleRequest& request) const {
  if (!request.BackupVaultNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRecoveryPointLifecycle", "Required field: BackupVaultName, is not set");
    return UpdateRecoveryPointLifecycleOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [BackupVaultName]", false));
  }
  if (!request.RecoveryPointArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRecoveryPointLifecycle", "Required field: RecoveryPointArn, is not set");
    return UpdateRecoveryPointLifecycleOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [RecoveryPointArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/recovery-points/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecoveryPointArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateRecoveryPointLifecycleOutcome(result.GetResultWithOwnership())
                            : UpdateRecoveryPointLifecycleOutcome(std::move(result.GetError()));
}

UpdateRegionSettingsOutcome BackupClient::UpdateRegionSettings(const UpdateRegionSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/account-settings");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateRegionSettingsOutcome(result.GetResultWithOwnership())
                            : UpdateRegionSettingsOutcome(std::move(result.GetError()));
}

UpdateReportPlanOutcome BackupClient::UpdateReportPlan(const UpdateReportPlanRequest& request) const {
  if (!request.ReportPlanNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateReportPlan", "Required field: ReportPlanName, is not set");
    return UpdateReportPlanOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ReportPlanName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/report-plans/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReportPlanName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateReportPlanOutcome(result.GetResultWithOwnership())
                            : UpdateReportPlanOutcome(std::move(result.GetError()));
}

UpdateRestoreTestingPlanOutcome BackupClient::UpdateRestoreTestingPlan(const UpdateRestoreTestingPlanRequest& request) const {
  if (!request.RestoreTestingPlanNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRestoreTestingPlan", "Required field: RestoreTestingPlanName, is not set");
    return UpdateRestoreTestingPlanOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [RestoreTestingPlanName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restore-testing/plans/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestoreTestingPlanName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateRestoreTestingPlanOutcome(result.GetResultWithOwnership())
                            : UpdateRestoreTestingPlanOutcome(std::move(result.GetError()));
}

UpdateRestoreTestingSelectionOutcome BackupClient::UpdateRestoreTestingSelection(
    const UpdateRestoreTestingSelectionRequest& request) const {
  if (!request.RestoreTestingPlanNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRestoreTestingSelection", "Required field: RestoreTestingPlanName, is not set");
    return UpdateRestoreTestingSelectionOutcome(Aws::Client::AWSError<BackupErrors>(
        BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestoreTestingPlanName]", false));
  }
  if (!request.RestoreTestingSelectionNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRestoreTestingSelection", "Required field: RestoreTestingSelectionName, is not set");
    return UpdateRestoreTestingSelectionOutcome(Aws::Client::AWSError<BackupErrors>(
        BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestoreTestingSelectionName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restore-testing/plans/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestoreTestingPlanName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/selections/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestoreTestingSelectionName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateRestoreTestingSelectionOutcome(result.GetResultWithOwnership())
                            : UpdateRestoreTestingSelectionOutcome(std::move(result.GetError()));
}

UpdateTieringConfigurationOutcome BackupClient::UpdateTieringConfiguration(const UpdateTieringConfigurationRequest& request) const {
  if (!request.TieringConfigurationNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTieringConfiguration", "Required field: TieringConfigurationName, is not set");
    return UpdateTieringConfigurationOutcome(Aws::Client::AWSError<BackupErrors>(
        BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TieringConfigurationName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tiering-configurations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTieringConfigurationName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateTieringConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateTieringConfigurationOutcome(std::move(result.GetError()));
}
