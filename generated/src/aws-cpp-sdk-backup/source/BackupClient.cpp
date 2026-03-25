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

  return AssociateBackupVaultMpaApprovalTeamOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return CancelLegalHoldOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

CreateBackupPlanOutcome BackupClient::CreateBackupPlan(const CreateBackupPlanRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup/plans/");
  };

  return CreateBackupPlanOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return CreateBackupSelectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return CreateBackupVaultOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateFrameworkOutcome BackupClient::CreateFramework(const CreateFrameworkRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/frameworks");
  };

  return CreateFrameworkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLegalHoldOutcome BackupClient::CreateLegalHold(const CreateLegalHoldRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/legal-holds/");
  };

  return CreateLegalHoldOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CreateLogicallyAirGappedBackupVaultOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateReportPlanOutcome BackupClient::CreateReportPlan(const CreateReportPlanRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/report-plans");
  };

  return CreateReportPlanOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRestoreAccessBackupVaultOutcome BackupClient::CreateRestoreAccessBackupVault(
    const CreateRestoreAccessBackupVaultRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restore-access-backup-vaults");
  };

  return CreateRestoreAccessBackupVaultOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateRestoreTestingPlanOutcome BackupClient::CreateRestoreTestingPlan(const CreateRestoreTestingPlanRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restore-testing/plans");
  };

  return CreateRestoreTestingPlanOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return CreateRestoreTestingSelectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateTieringConfigurationOutcome BackupClient::CreateTieringConfiguration(const CreateTieringConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tiering-configurations");
  };

  return CreateTieringConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return DeleteBackupPlanOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteBackupSelectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteBackupVaultOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteBackupVaultAccessPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteBackupVaultLockConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteBackupVaultNotificationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteFrameworkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteRecoveryPointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteReportPlanOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteRestoreTestingPlanOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteRestoreTestingSelectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteTieringConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DescribeBackupJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return DescribeBackupVaultOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return DescribeCopyJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return DescribeFrameworkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeGlobalSettingsOutcome BackupClient::DescribeGlobalSettings(const DescribeGlobalSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-settings");
  };

  return DescribeGlobalSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return DescribeProtectedResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return DescribeRecoveryPointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeRegionSettingsOutcome BackupClient::DescribeRegionSettings(const DescribeRegionSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/account-settings");
  };

  return DescribeRegionSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return DescribeReportJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return DescribeReportPlanOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return DescribeRestoreJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return DescribeScanJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return DisassociateBackupVaultMpaApprovalTeamOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return DisassociateRecoveryPointOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return DisassociateRecoveryPointFromParentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return ExportBackupPlanTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetBackupPlanOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetBackupPlanFromJSONOutcome BackupClient::GetBackupPlanFromJSON(const GetBackupPlanFromJSONRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup/template/json/toPlan");
  };

  return GetBackupPlanFromJSONOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return GetBackupPlanFromTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetBackupSelectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetBackupVaultAccessPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetBackupVaultNotificationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetLegalHoldOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetRecoveryPointIndexDetailsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetRecoveryPointRestoreMetadataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetRestoreJobMetadataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetRestoreTestingInferredMetadataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetRestoreTestingPlanOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetRestoreTestingSelectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSupportedResourceTypesOutcome BackupClient::GetSupportedResourceTypes(const GetSupportedResourceTypesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/supported-resource-types");
  };

  return GetSupportedResourceTypesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetTieringConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListBackupJobSummariesOutcome BackupClient::ListBackupJobSummaries(const ListBackupJobSummariesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/backup-job-summaries");
  };

  return ListBackupJobSummariesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListBackupJobsOutcome BackupClient::ListBackupJobs(const ListBackupJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup-jobs/");
  };

  return ListBackupJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListBackupPlanTemplatesOutcome BackupClient::ListBackupPlanTemplates(const ListBackupPlanTemplatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup/template/plans");
  };

  return ListBackupPlanTemplatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListBackupPlanVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListBackupPlansOutcome BackupClient::ListBackupPlans(const ListBackupPlansRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup/plans/");
  };

  return ListBackupPlansOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListBackupSelectionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListBackupVaultsOutcome BackupClient::ListBackupVaults(const ListBackupVaultsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
  };

  return ListBackupVaultsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCopyJobSummariesOutcome BackupClient::ListCopyJobSummaries(const ListCopyJobSummariesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/copy-job-summaries");
  };

  return ListCopyJobSummariesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCopyJobsOutcome BackupClient::ListCopyJobs(const ListCopyJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/copy-jobs/");
  };

  return ListCopyJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListFrameworksOutcome BackupClient::ListFrameworks(const ListFrameworksRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/frameworks");
  };

  return ListFrameworksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListIndexedRecoveryPointsOutcome BackupClient::ListIndexedRecoveryPoints(const ListIndexedRecoveryPointsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/indexes/recovery-point/");
  };

  return ListIndexedRecoveryPointsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListLegalHoldsOutcome BackupClient::ListLegalHolds(const ListLegalHoldsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/legal-holds/");
  };

  return ListLegalHoldsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListProtectedResourcesOutcome BackupClient::ListProtectedResources(const ListProtectedResourcesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
  };

  return ListProtectedResourcesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListProtectedResourcesByBackupVaultOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListRecoveryPointsByBackupVaultOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListRecoveryPointsByLegalHoldOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListRecoveryPointsByResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListReportJobsOutcome BackupClient::ListReportJobs(const ListReportJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/report-jobs");
  };

  return ListReportJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListReportPlansOutcome BackupClient::ListReportPlans(const ListReportPlansRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/report-plans");
  };

  return ListReportPlansOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListRestoreAccessBackupVaultsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRestoreJobSummariesOutcome BackupClient::ListRestoreJobSummaries(const ListRestoreJobSummariesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/restore-job-summaries");
  };

  return ListRestoreJobSummariesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRestoreJobsOutcome BackupClient::ListRestoreJobs(const ListRestoreJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restore-jobs/");
  };

  return ListRestoreJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListRestoreJobsByProtectedResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRestoreTestingPlansOutcome BackupClient::ListRestoreTestingPlans(const ListRestoreTestingPlansRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restore-testing/plans");
  };

  return ListRestoreTestingPlansOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListRestoreTestingSelectionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListScanJobSummariesOutcome BackupClient::ListScanJobSummaries(const ListScanJobSummariesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit/scan-job-summaries");
  };

  return ListScanJobSummariesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListScanJobsOutcome BackupClient::ListScanJobs(const ListScanJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/scan/jobs");
  };

  return ListScanJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListTagsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTieringConfigurationsOutcome BackupClient::ListTieringConfigurations(const ListTieringConfigurationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tiering-configurations/");
  };

  return ListTieringConfigurationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return PutBackupVaultAccessPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return PutBackupVaultLockConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return PutBackupVaultNotificationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return PutRestoreValidationResultOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return RevokeRestoreAccessBackupVaultOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

StartBackupJobOutcome BackupClient::StartBackupJob(const StartBackupJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/backup-jobs");
  };

  return StartBackupJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

StartCopyJobOutcome BackupClient::StartCopyJob(const StartCopyJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/copy-jobs");
  };

  return StartCopyJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return StartReportJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartRestoreJobOutcome BackupClient::StartRestoreJob(const StartRestoreJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/restore-jobs");
  };

  return StartRestoreJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

StartScanJobOutcome BackupClient::StartScanJob(const StartScanJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/scan/job");
  };

  return StartScanJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return StopBackupJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return UpdateBackupPlanOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return UpdateFrameworkOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateGlobalSettingsOutcome BackupClient::UpdateGlobalSettings(const UpdateGlobalSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-settings");
  };

  return UpdateGlobalSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return UpdateRecoveryPointIndexSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return UpdateRecoveryPointLifecycleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateRegionSettingsOutcome BackupClient::UpdateRegionSettings(const UpdateRegionSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/account-settings");
  };

  return UpdateRegionSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return UpdateReportPlanOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return UpdateRestoreTestingPlanOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return UpdateRestoreTestingSelectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return UpdateTieringConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
