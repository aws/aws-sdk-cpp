/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>


#include <aws/backup/BackupClient.h>
#include <aws/backup/BackupErrorMarshaller.h>
#include <aws/backup/BackupEndpointProvider.h>
#include <aws/backup/model/CancelLegalHoldRequest.h>
#include <aws/backup/model/CreateBackupPlanRequest.h>
#include <aws/backup/model/CreateBackupSelectionRequest.h>
#include <aws/backup/model/CreateBackupVaultRequest.h>
#include <aws/backup/model/CreateFrameworkRequest.h>
#include <aws/backup/model/CreateLegalHoldRequest.h>
#include <aws/backup/model/CreateLogicallyAirGappedBackupVaultRequest.h>
#include <aws/backup/model/CreateReportPlanRequest.h>
#include <aws/backup/model/CreateRestoreTestingPlanRequest.h>
#include <aws/backup/model/CreateRestoreTestingSelectionRequest.h>
#include <aws/backup/model/DeleteBackupPlanRequest.h>
#include <aws/backup/model/DeleteBackupSelectionRequest.h>
#include <aws/backup/model/DeleteBackupVaultRequest.h>
#include <aws/backup/model/DeleteBackupVaultAccessPolicyRequest.h>
#include <aws/backup/model/DeleteBackupVaultLockConfigurationRequest.h>
#include <aws/backup/model/DeleteBackupVaultNotificationsRequest.h>
#include <aws/backup/model/DeleteFrameworkRequest.h>
#include <aws/backup/model/DeleteRecoveryPointRequest.h>
#include <aws/backup/model/DeleteReportPlanRequest.h>
#include <aws/backup/model/DeleteRestoreTestingPlanRequest.h>
#include <aws/backup/model/DeleteRestoreTestingSelectionRequest.h>
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
#include <aws/backup/model/DisassociateRecoveryPointRequest.h>
#include <aws/backup/model/DisassociateRecoveryPointFromParentRequest.h>
#include <aws/backup/model/ExportBackupPlanTemplateRequest.h>
#include <aws/backup/model/GetBackupPlanRequest.h>
#include <aws/backup/model/GetBackupPlanFromJSONRequest.h>
#include <aws/backup/model/GetBackupPlanFromTemplateRequest.h>
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
#include <aws/backup/model/ListProtectedResourcesRequest.h>
#include <aws/backup/model/ListProtectedResourcesByBackupVaultRequest.h>
#include <aws/backup/model/ListRecoveryPointsByBackupVaultRequest.h>
#include <aws/backup/model/ListRecoveryPointsByLegalHoldRequest.h>
#include <aws/backup/model/ListRecoveryPointsByResourceRequest.h>
#include <aws/backup/model/ListReportJobsRequest.h>
#include <aws/backup/model/ListReportPlansRequest.h>
#include <aws/backup/model/ListRestoreJobSummariesRequest.h>
#include <aws/backup/model/ListRestoreJobsRequest.h>
#include <aws/backup/model/ListRestoreJobsByProtectedResourceRequest.h>
#include <aws/backup/model/ListRestoreTestingPlansRequest.h>
#include <aws/backup/model/ListRestoreTestingSelectionsRequest.h>
#include <aws/backup/model/ListTagsRequest.h>
#include <aws/backup/model/PutBackupVaultAccessPolicyRequest.h>
#include <aws/backup/model/PutBackupVaultLockConfigurationRequest.h>
#include <aws/backup/model/PutBackupVaultNotificationsRequest.h>
#include <aws/backup/model/PutRestoreValidationResultRequest.h>
#include <aws/backup/model/StartBackupJobRequest.h>
#include <aws/backup/model/StartCopyJobRequest.h>
#include <aws/backup/model/StartReportJobRequest.h>
#include <aws/backup/model/StartRestoreJobRequest.h>
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

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Backup;
using namespace Aws::Backup::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace Backup
  {
    const char ALLOCATION_TAG[] = "BackupClient";
    const char SERVICE_NAME[] = "backup";
  }
}
const char* BackupClient::GetServiceName() {return SERVICE_NAME;}
const char* BackupClient::GetAllocationTag() {return ALLOCATION_TAG;}

BackupClient::BackupClient(const Backup::BackupClientConfiguration& clientConfiguration,
                           std::shared_ptr<BackupEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Backup",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<BackupErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<BackupEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

BackupClient::BackupClient(const AWSCredentials& credentials,
                           std::shared_ptr<BackupEndpointProviderBase> endpointProvider,
                           const Backup::BackupClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Backup",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<BackupErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<BackupEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

BackupClient::BackupClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<BackupEndpointProviderBase> endpointProvider,
                           const Backup::BackupClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Backup",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<BackupErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<BackupEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
BackupClient::BackupClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "Backup",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<BackupErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<BackupEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

BackupClient::BackupClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Backup",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<BackupErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<BackupEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

BackupClient::BackupClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Backup",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<BackupErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<BackupEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

BackupClient::~BackupClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<BackupEndpointProviderBase>& BackupClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void BackupClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
CancelLegalHoldOutcome BackupClient::CancelLegalHold(const CancelLegalHoldRequest& request) const
{
  AWS_OPERATION_GUARD(CancelLegalHold);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelLegalHold, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LegalHoldIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelLegalHold", "Required field: LegalHoldId, is not set");
    return CancelLegalHoldOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LegalHoldId]", false));
  }
  if (!request.CancelDescriptionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CancelLegalHold", "Required field: CancelDescription, is not set");
    return CancelLegalHoldOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CancelDescription]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CancelLegalHold, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CancelLegalHold, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CancelLegalHold",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CancelLegalHoldOutcome>(
    [&]()-> CancelLegalHoldOutcome {
      return CancelLegalHoldOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/legal-holds/");
      resolvedEndpoint.AddPathSegment(request.GetLegalHoldId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateBackupPlanOutcome BackupClient::CreateBackupPlan(const CreateBackupPlanRequest& request) const
{
  AWS_OPERATION_GUARD(CreateBackupPlan);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBackupPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateBackupPlan, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateBackupPlan, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateBackupPlan",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateBackupPlanOutcome>(
    [&]()-> CreateBackupPlanOutcome {
      return CreateBackupPlanOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup/plans/");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateBackupSelectionOutcome BackupClient::CreateBackupSelection(const CreateBackupSelectionRequest& request) const
{
  AWS_OPERATION_GUARD(CreateBackupSelection);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBackupSelection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupPlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBackupSelection", "Required field: BackupPlanId, is not set");
    return CreateBackupSelectionOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupPlanId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateBackupSelection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateBackupSelection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateBackupSelection",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateBackupSelectionOutcome>(
    [&]()-> CreateBackupSelectionOutcome {
      return CreateBackupSelectionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup/plans/");
      resolvedEndpoint.AddPathSegment(request.GetBackupPlanId());
      resolvedEndpoint.AddPathSegments("/selections/");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateBackupVaultOutcome BackupClient::CreateBackupVault(const CreateBackupVaultRequest& request) const
{
  AWS_OPERATION_GUARD(CreateBackupVault);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBackupVault, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupVaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBackupVault", "Required field: BackupVaultName, is not set");
    return CreateBackupVaultOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateBackupVault, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateBackupVault, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateBackupVault",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateBackupVaultOutcome>(
    [&]()-> CreateBackupVaultOutcome {
      return CreateBackupVaultOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup-vaults/");
      resolvedEndpoint.AddPathSegment(request.GetBackupVaultName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateFrameworkOutcome BackupClient::CreateFramework(const CreateFrameworkRequest& request) const
{
  AWS_OPERATION_GUARD(CreateFramework);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFramework, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateFramework, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateFramework, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateFramework",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateFrameworkOutcome>(
    [&]()-> CreateFrameworkOutcome {
      return CreateFrameworkOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/audit/frameworks");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateLegalHoldOutcome BackupClient::CreateLegalHold(const CreateLegalHoldRequest& request) const
{
  AWS_OPERATION_GUARD(CreateLegalHold);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLegalHold, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateLegalHold, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateLegalHold, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateLegalHold",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateLegalHoldOutcome>(
    [&]()-> CreateLegalHoldOutcome {
      return CreateLegalHoldOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/legal-holds/");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateLogicallyAirGappedBackupVaultOutcome BackupClient::CreateLogicallyAirGappedBackupVault(const CreateLogicallyAirGappedBackupVaultRequest& request) const
{
  AWS_OPERATION_GUARD(CreateLogicallyAirGappedBackupVault);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLogicallyAirGappedBackupVault, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupVaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateLogicallyAirGappedBackupVault", "Required field: BackupVaultName, is not set");
    return CreateLogicallyAirGappedBackupVaultOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateLogicallyAirGappedBackupVault, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateLogicallyAirGappedBackupVault, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateLogicallyAirGappedBackupVault",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateLogicallyAirGappedBackupVaultOutcome>(
    [&]()-> CreateLogicallyAirGappedBackupVaultOutcome {
      return CreateLogicallyAirGappedBackupVaultOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/logically-air-gapped-backup-vaults/");
      resolvedEndpoint.AddPathSegment(request.GetBackupVaultName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateReportPlanOutcome BackupClient::CreateReportPlan(const CreateReportPlanRequest& request) const
{
  AWS_OPERATION_GUARD(CreateReportPlan);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateReportPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateReportPlan, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateReportPlan, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateReportPlan",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateReportPlanOutcome>(
    [&]()-> CreateReportPlanOutcome {
      return CreateReportPlanOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/audit/report-plans");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateRestoreTestingPlanOutcome BackupClient::CreateRestoreTestingPlan(const CreateRestoreTestingPlanRequest& request) const
{
  AWS_OPERATION_GUARD(CreateRestoreTestingPlan);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRestoreTestingPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateRestoreTestingPlan, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateRestoreTestingPlan, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateRestoreTestingPlan",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateRestoreTestingPlanOutcome>(
    [&]()-> CreateRestoreTestingPlanOutcome {
      return CreateRestoreTestingPlanOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/restore-testing/plans");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

CreateRestoreTestingSelectionOutcome BackupClient::CreateRestoreTestingSelection(const CreateRestoreTestingSelectionRequest& request) const
{
  AWS_OPERATION_GUARD(CreateRestoreTestingSelection);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateRestoreTestingSelection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestoreTestingPlanNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateRestoreTestingSelection", "Required field: RestoreTestingPlanName, is not set");
    return CreateRestoreTestingSelectionOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestoreTestingPlanName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, CreateRestoreTestingSelection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, CreateRestoreTestingSelection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".CreateRestoreTestingSelection",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<CreateRestoreTestingSelectionOutcome>(
    [&]()-> CreateRestoreTestingSelectionOutcome {
      return CreateRestoreTestingSelectionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/restore-testing/plans/");
      resolvedEndpoint.AddPathSegment(request.GetRestoreTestingPlanName());
      resolvedEndpoint.AddPathSegments("/selections");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteBackupPlanOutcome BackupClient::DeleteBackupPlan(const DeleteBackupPlanRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBackupPlan);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBackupPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupPlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBackupPlan", "Required field: BackupPlanId, is not set");
    return DeleteBackupPlanOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupPlanId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteBackupPlan, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBackupPlan, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteBackupPlan",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBackupPlanOutcome>(
    [&]()-> DeleteBackupPlanOutcome {
      return DeleteBackupPlanOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup/plans/");
      resolvedEndpoint.AddPathSegment(request.GetBackupPlanId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteBackupSelectionOutcome BackupClient::DeleteBackupSelection(const DeleteBackupSelectionRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBackupSelection);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBackupSelection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupPlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBackupSelection", "Required field: BackupPlanId, is not set");
    return DeleteBackupSelectionOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupPlanId]", false));
  }
  if (!request.SelectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBackupSelection", "Required field: SelectionId, is not set");
    return DeleteBackupSelectionOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SelectionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteBackupSelection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBackupSelection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteBackupSelection",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBackupSelectionOutcome>(
    [&]()-> DeleteBackupSelectionOutcome {
      return DeleteBackupSelectionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup/plans/");
      resolvedEndpoint.AddPathSegment(request.GetBackupPlanId());
      resolvedEndpoint.AddPathSegments("/selections/");
      resolvedEndpoint.AddPathSegment(request.GetSelectionId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteBackupVaultOutcome BackupClient::DeleteBackupVault(const DeleteBackupVaultRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBackupVault);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBackupVault, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupVaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBackupVault", "Required field: BackupVaultName, is not set");
    return DeleteBackupVaultOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteBackupVault, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBackupVault, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteBackupVault",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBackupVaultOutcome>(
    [&]()-> DeleteBackupVaultOutcome {
      return DeleteBackupVaultOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup-vaults/");
      resolvedEndpoint.AddPathSegment(request.GetBackupVaultName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteBackupVaultAccessPolicyOutcome BackupClient::DeleteBackupVaultAccessPolicy(const DeleteBackupVaultAccessPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBackupVaultAccessPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBackupVaultAccessPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupVaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBackupVaultAccessPolicy", "Required field: BackupVaultName, is not set");
    return DeleteBackupVaultAccessPolicyOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteBackupVaultAccessPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBackupVaultAccessPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteBackupVaultAccessPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBackupVaultAccessPolicyOutcome>(
    [&]()-> DeleteBackupVaultAccessPolicyOutcome {
      return DeleteBackupVaultAccessPolicyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup-vaults/");
      resolvedEndpoint.AddPathSegment(request.GetBackupVaultName());
      resolvedEndpoint.AddPathSegments("/access-policy");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteBackupVaultLockConfigurationOutcome BackupClient::DeleteBackupVaultLockConfiguration(const DeleteBackupVaultLockConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBackupVaultLockConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBackupVaultLockConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupVaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBackupVaultLockConfiguration", "Required field: BackupVaultName, is not set");
    return DeleteBackupVaultLockConfigurationOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteBackupVaultLockConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBackupVaultLockConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteBackupVaultLockConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBackupVaultLockConfigurationOutcome>(
    [&]()-> DeleteBackupVaultLockConfigurationOutcome {
      return DeleteBackupVaultLockConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup-vaults/");
      resolvedEndpoint.AddPathSegment(request.GetBackupVaultName());
      resolvedEndpoint.AddPathSegments("/vault-lock");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteBackupVaultNotificationsOutcome BackupClient::DeleteBackupVaultNotifications(const DeleteBackupVaultNotificationsRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteBackupVaultNotifications);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteBackupVaultNotifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupVaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBackupVaultNotifications", "Required field: BackupVaultName, is not set");
    return DeleteBackupVaultNotificationsOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteBackupVaultNotifications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteBackupVaultNotifications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteBackupVaultNotifications",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteBackupVaultNotificationsOutcome>(
    [&]()-> DeleteBackupVaultNotificationsOutcome {
      return DeleteBackupVaultNotificationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup-vaults/");
      resolvedEndpoint.AddPathSegment(request.GetBackupVaultName());
      resolvedEndpoint.AddPathSegments("/notification-configuration");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteFrameworkOutcome BackupClient::DeleteFramework(const DeleteFrameworkRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteFramework);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFramework, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FrameworkNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFramework", "Required field: FrameworkName, is not set");
    return DeleteFrameworkOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FrameworkName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteFramework, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteFramework, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteFramework",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteFrameworkOutcome>(
    [&]()-> DeleteFrameworkOutcome {
      return DeleteFrameworkOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/audit/frameworks/");
      resolvedEndpoint.AddPathSegment(request.GetFrameworkName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteRecoveryPointOutcome BackupClient::DeleteRecoveryPoint(const DeleteRecoveryPointRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteRecoveryPoint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRecoveryPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupVaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRecoveryPoint", "Required field: BackupVaultName, is not set");
    return DeleteRecoveryPointOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  if (!request.RecoveryPointArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRecoveryPoint", "Required field: RecoveryPointArn, is not set");
    return DeleteRecoveryPointOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecoveryPointArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteRecoveryPoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteRecoveryPoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteRecoveryPoint",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteRecoveryPointOutcome>(
    [&]()-> DeleteRecoveryPointOutcome {
      return DeleteRecoveryPointOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup-vaults/");
      resolvedEndpoint.AddPathSegment(request.GetBackupVaultName());
      resolvedEndpoint.AddPathSegments("/recovery-points/");
      resolvedEndpoint.AddPathSegment(request.GetRecoveryPointArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteReportPlanOutcome BackupClient::DeleteReportPlan(const DeleteReportPlanRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteReportPlan);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteReportPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ReportPlanNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteReportPlan", "Required field: ReportPlanName, is not set");
    return DeleteReportPlanOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReportPlanName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteReportPlan, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteReportPlan, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteReportPlan",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteReportPlanOutcome>(
    [&]()-> DeleteReportPlanOutcome {
      return DeleteReportPlanOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/audit/report-plans/");
      resolvedEndpoint.AddPathSegment(request.GetReportPlanName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteRestoreTestingPlanOutcome BackupClient::DeleteRestoreTestingPlan(const DeleteRestoreTestingPlanRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteRestoreTestingPlan);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRestoreTestingPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestoreTestingPlanNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRestoreTestingPlan", "Required field: RestoreTestingPlanName, is not set");
    return DeleteRestoreTestingPlanOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestoreTestingPlanName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteRestoreTestingPlan, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteRestoreTestingPlan, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteRestoreTestingPlan",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteRestoreTestingPlanOutcome>(
    [&]()-> DeleteRestoreTestingPlanOutcome {
      return DeleteRestoreTestingPlanOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/restore-testing/plans/");
      resolvedEndpoint.AddPathSegment(request.GetRestoreTestingPlanName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DeleteRestoreTestingSelectionOutcome BackupClient::DeleteRestoreTestingSelection(const DeleteRestoreTestingSelectionRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteRestoreTestingSelection);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteRestoreTestingSelection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestoreTestingPlanNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRestoreTestingSelection", "Required field: RestoreTestingPlanName, is not set");
    return DeleteRestoreTestingSelectionOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestoreTestingPlanName]", false));
  }
  if (!request.RestoreTestingSelectionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRestoreTestingSelection", "Required field: RestoreTestingSelectionName, is not set");
    return DeleteRestoreTestingSelectionOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestoreTestingSelectionName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteRestoreTestingSelection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteRestoreTestingSelection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteRestoreTestingSelection",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteRestoreTestingSelectionOutcome>(
    [&]()-> DeleteRestoreTestingSelectionOutcome {
      return DeleteRestoreTestingSelectionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/restore-testing/plans/");
      resolvedEndpoint.AddPathSegment(request.GetRestoreTestingPlanName());
      resolvedEndpoint.AddPathSegments("/selections/");
      resolvedEndpoint.AddPathSegment(request.GetRestoreTestingSelectionName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeBackupJobOutcome BackupClient::DescribeBackupJob(const DescribeBackupJobRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeBackupJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeBackupJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupJobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeBackupJob", "Required field: BackupJobId, is not set");
    return DescribeBackupJobOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupJobId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeBackupJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeBackupJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeBackupJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeBackupJobOutcome>(
    [&]()-> DescribeBackupJobOutcome {
      return DescribeBackupJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup-jobs/");
      resolvedEndpoint.AddPathSegment(request.GetBackupJobId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeBackupVaultOutcome BackupClient::DescribeBackupVault(const DescribeBackupVaultRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeBackupVault);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeBackupVault, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupVaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeBackupVault", "Required field: BackupVaultName, is not set");
    return DescribeBackupVaultOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeBackupVault, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeBackupVault, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeBackupVault",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeBackupVaultOutcome>(
    [&]()-> DescribeBackupVaultOutcome {
      return DescribeBackupVaultOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup-vaults/");
      resolvedEndpoint.AddPathSegment(request.GetBackupVaultName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeCopyJobOutcome BackupClient::DescribeCopyJob(const DescribeCopyJobRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeCopyJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCopyJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CopyJobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeCopyJob", "Required field: CopyJobId, is not set");
    return DescribeCopyJobOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CopyJobId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeCopyJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeCopyJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeCopyJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeCopyJobOutcome>(
    [&]()-> DescribeCopyJobOutcome {
      return DescribeCopyJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/copy-jobs/");
      resolvedEndpoint.AddPathSegment(request.GetCopyJobId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeFrameworkOutcome BackupClient::DescribeFramework(const DescribeFrameworkRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeFramework);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeFramework, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FrameworkNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeFramework", "Required field: FrameworkName, is not set");
    return DescribeFrameworkOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FrameworkName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeFramework, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeFramework, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeFramework",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeFrameworkOutcome>(
    [&]()-> DescribeFrameworkOutcome {
      return DescribeFrameworkOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/audit/frameworks/");
      resolvedEndpoint.AddPathSegment(request.GetFrameworkName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeGlobalSettingsOutcome BackupClient::DescribeGlobalSettings(const DescribeGlobalSettingsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeGlobalSettings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeGlobalSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeGlobalSettings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeGlobalSettings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeGlobalSettings",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeGlobalSettingsOutcome>(
    [&]()-> DescribeGlobalSettingsOutcome {
      return DescribeGlobalSettingsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/global-settings");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeProtectedResourceOutcome BackupClient::DescribeProtectedResource(const DescribeProtectedResourceRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeProtectedResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeProtectedResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeProtectedResource", "Required field: ResourceArn, is not set");
    return DescribeProtectedResourceOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeProtectedResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeProtectedResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeProtectedResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeProtectedResourceOutcome>(
    [&]()-> DescribeProtectedResourceOutcome {
      return DescribeProtectedResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/resources/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeRecoveryPointOutcome BackupClient::DescribeRecoveryPoint(const DescribeRecoveryPointRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeRecoveryPoint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRecoveryPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupVaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeRecoveryPoint", "Required field: BackupVaultName, is not set");
    return DescribeRecoveryPointOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  if (!request.RecoveryPointArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeRecoveryPoint", "Required field: RecoveryPointArn, is not set");
    return DescribeRecoveryPointOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecoveryPointArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeRecoveryPoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeRecoveryPoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeRecoveryPoint",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeRecoveryPointOutcome>(
    [&]()-> DescribeRecoveryPointOutcome {
      return DescribeRecoveryPointOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup-vaults/");
      resolvedEndpoint.AddPathSegment(request.GetBackupVaultName());
      resolvedEndpoint.AddPathSegments("/recovery-points/");
      resolvedEndpoint.AddPathSegment(request.GetRecoveryPointArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeRegionSettingsOutcome BackupClient::DescribeRegionSettings(const DescribeRegionSettingsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeRegionSettings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRegionSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeRegionSettings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeRegionSettings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeRegionSettings",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeRegionSettingsOutcome>(
    [&]()-> DescribeRegionSettingsOutcome {
      return DescribeRegionSettingsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/account-settings");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeReportJobOutcome BackupClient::DescribeReportJob(const DescribeReportJobRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeReportJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ReportJobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeReportJob", "Required field: ReportJobId, is not set");
    return DescribeReportJobOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReportJobId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeReportJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeReportJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeReportJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeReportJobOutcome>(
    [&]()-> DescribeReportJobOutcome {
      return DescribeReportJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/audit/report-jobs/");
      resolvedEndpoint.AddPathSegment(request.GetReportJobId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeReportPlanOutcome BackupClient::DescribeReportPlan(const DescribeReportPlanRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeReportPlan);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeReportPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ReportPlanNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeReportPlan", "Required field: ReportPlanName, is not set");
    return DescribeReportPlanOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReportPlanName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeReportPlan, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeReportPlan, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeReportPlan",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeReportPlanOutcome>(
    [&]()-> DescribeReportPlanOutcome {
      return DescribeReportPlanOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/audit/report-plans/");
      resolvedEndpoint.AddPathSegment(request.GetReportPlanName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeRestoreJobOutcome BackupClient::DescribeRestoreJob(const DescribeRestoreJobRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeRestoreJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRestoreJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestoreJobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeRestoreJob", "Required field: RestoreJobId, is not set");
    return DescribeRestoreJobOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestoreJobId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeRestoreJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeRestoreJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeRestoreJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeRestoreJobOutcome>(
    [&]()-> DescribeRestoreJobOutcome {
      return DescribeRestoreJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/restore-jobs/");
      resolvedEndpoint.AddPathSegment(request.GetRestoreJobId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DisassociateRecoveryPointOutcome BackupClient::DisassociateRecoveryPoint(const DisassociateRecoveryPointRequest& request) const
{
  AWS_OPERATION_GUARD(DisassociateRecoveryPoint);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateRecoveryPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupVaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateRecoveryPoint", "Required field: BackupVaultName, is not set");
    return DisassociateRecoveryPointOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  if (!request.RecoveryPointArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateRecoveryPoint", "Required field: RecoveryPointArn, is not set");
    return DisassociateRecoveryPointOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecoveryPointArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DisassociateRecoveryPoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DisassociateRecoveryPoint, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DisassociateRecoveryPoint",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DisassociateRecoveryPointOutcome>(
    [&]()-> DisassociateRecoveryPointOutcome {
      return DisassociateRecoveryPointOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup-vaults/");
      resolvedEndpoint.AddPathSegment(request.GetBackupVaultName());
      resolvedEndpoint.AddPathSegments("/recovery-points/");
      resolvedEndpoint.AddPathSegment(request.GetRecoveryPointArn());
      resolvedEndpoint.AddPathSegments("/disassociate");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DisassociateRecoveryPointFromParentOutcome BackupClient::DisassociateRecoveryPointFromParent(const DisassociateRecoveryPointFromParentRequest& request) const
{
  AWS_OPERATION_GUARD(DisassociateRecoveryPointFromParent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateRecoveryPointFromParent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupVaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateRecoveryPointFromParent", "Required field: BackupVaultName, is not set");
    return DisassociateRecoveryPointFromParentOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  if (!request.RecoveryPointArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateRecoveryPointFromParent", "Required field: RecoveryPointArn, is not set");
    return DisassociateRecoveryPointFromParentOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecoveryPointArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DisassociateRecoveryPointFromParent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DisassociateRecoveryPointFromParent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DisassociateRecoveryPointFromParent",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DisassociateRecoveryPointFromParentOutcome>(
    [&]()-> DisassociateRecoveryPointFromParentOutcome {
      return DisassociateRecoveryPointFromParentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup-vaults/");
      resolvedEndpoint.AddPathSegment(request.GetBackupVaultName());
      resolvedEndpoint.AddPathSegments("/recovery-points/");
      resolvedEndpoint.AddPathSegment(request.GetRecoveryPointArn());
      resolvedEndpoint.AddPathSegments("/parentAssociation");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ExportBackupPlanTemplateOutcome BackupClient::ExportBackupPlanTemplate(const ExportBackupPlanTemplateRequest& request) const
{
  AWS_OPERATION_GUARD(ExportBackupPlanTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExportBackupPlanTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupPlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ExportBackupPlanTemplate", "Required field: BackupPlanId, is not set");
    return ExportBackupPlanTemplateOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupPlanId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ExportBackupPlanTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ExportBackupPlanTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ExportBackupPlanTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ExportBackupPlanTemplateOutcome>(
    [&]()-> ExportBackupPlanTemplateOutcome {
      return ExportBackupPlanTemplateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup/plans/");
      resolvedEndpoint.AddPathSegment(request.GetBackupPlanId());
      resolvedEndpoint.AddPathSegments("/toTemplate/");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBackupPlanOutcome BackupClient::GetBackupPlan(const GetBackupPlanRequest& request) const
{
  AWS_OPERATION_GUARD(GetBackupPlan);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBackupPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupPlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBackupPlan", "Required field: BackupPlanId, is not set");
    return GetBackupPlanOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupPlanId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetBackupPlan, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBackupPlan, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetBackupPlan",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBackupPlanOutcome>(
    [&]()-> GetBackupPlanOutcome {
      return GetBackupPlanOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup/plans/");
      resolvedEndpoint.AddPathSegment(request.GetBackupPlanId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBackupPlanFromJSONOutcome BackupClient::GetBackupPlanFromJSON(const GetBackupPlanFromJSONRequest& request) const
{
  AWS_OPERATION_GUARD(GetBackupPlanFromJSON);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBackupPlanFromJSON, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetBackupPlanFromJSON, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBackupPlanFromJSON, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetBackupPlanFromJSON",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBackupPlanFromJSONOutcome>(
    [&]()-> GetBackupPlanFromJSONOutcome {
      return GetBackupPlanFromJSONOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup/template/json/toPlan");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBackupPlanFromTemplateOutcome BackupClient::GetBackupPlanFromTemplate(const GetBackupPlanFromTemplateRequest& request) const
{
  AWS_OPERATION_GUARD(GetBackupPlanFromTemplate);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBackupPlanFromTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupPlanTemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBackupPlanFromTemplate", "Required field: BackupPlanTemplateId, is not set");
    return GetBackupPlanFromTemplateOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupPlanTemplateId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetBackupPlanFromTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBackupPlanFromTemplate, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetBackupPlanFromTemplate",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBackupPlanFromTemplateOutcome>(
    [&]()-> GetBackupPlanFromTemplateOutcome {
      return GetBackupPlanFromTemplateOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup/template/plans/");
      resolvedEndpoint.AddPathSegment(request.GetBackupPlanTemplateId());
      resolvedEndpoint.AddPathSegments("/toPlan");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBackupSelectionOutcome BackupClient::GetBackupSelection(const GetBackupSelectionRequest& request) const
{
  AWS_OPERATION_GUARD(GetBackupSelection);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBackupSelection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupPlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBackupSelection", "Required field: BackupPlanId, is not set");
    return GetBackupSelectionOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupPlanId]", false));
  }
  if (!request.SelectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBackupSelection", "Required field: SelectionId, is not set");
    return GetBackupSelectionOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SelectionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetBackupSelection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBackupSelection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetBackupSelection",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBackupSelectionOutcome>(
    [&]()-> GetBackupSelectionOutcome {
      return GetBackupSelectionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup/plans/");
      resolvedEndpoint.AddPathSegment(request.GetBackupPlanId());
      resolvedEndpoint.AddPathSegments("/selections/");
      resolvedEndpoint.AddPathSegment(request.GetSelectionId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBackupVaultAccessPolicyOutcome BackupClient::GetBackupVaultAccessPolicy(const GetBackupVaultAccessPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(GetBackupVaultAccessPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBackupVaultAccessPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupVaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBackupVaultAccessPolicy", "Required field: BackupVaultName, is not set");
    return GetBackupVaultAccessPolicyOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetBackupVaultAccessPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBackupVaultAccessPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetBackupVaultAccessPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBackupVaultAccessPolicyOutcome>(
    [&]()-> GetBackupVaultAccessPolicyOutcome {
      return GetBackupVaultAccessPolicyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup-vaults/");
      resolvedEndpoint.AddPathSegment(request.GetBackupVaultName());
      resolvedEndpoint.AddPathSegments("/access-policy");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetBackupVaultNotificationsOutcome BackupClient::GetBackupVaultNotifications(const GetBackupVaultNotificationsRequest& request) const
{
  AWS_OPERATION_GUARD(GetBackupVaultNotifications);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBackupVaultNotifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupVaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBackupVaultNotifications", "Required field: BackupVaultName, is not set");
    return GetBackupVaultNotificationsOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetBackupVaultNotifications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetBackupVaultNotifications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetBackupVaultNotifications",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetBackupVaultNotificationsOutcome>(
    [&]()-> GetBackupVaultNotificationsOutcome {
      return GetBackupVaultNotificationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup-vaults/");
      resolvedEndpoint.AddPathSegment(request.GetBackupVaultName());
      resolvedEndpoint.AddPathSegments("/notification-configuration");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetLegalHoldOutcome BackupClient::GetLegalHold(const GetLegalHoldRequest& request) const
{
  AWS_OPERATION_GUARD(GetLegalHold);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLegalHold, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LegalHoldIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLegalHold", "Required field: LegalHoldId, is not set");
    return GetLegalHoldOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LegalHoldId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetLegalHold, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetLegalHold, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetLegalHold",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetLegalHoldOutcome>(
    [&]()-> GetLegalHoldOutcome {
      return GetLegalHoldOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/legal-holds/");
      resolvedEndpoint.AddPathSegment(request.GetLegalHoldId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetRecoveryPointIndexDetailsOutcome BackupClient::GetRecoveryPointIndexDetails(const GetRecoveryPointIndexDetailsRequest& request) const
{
  AWS_OPERATION_GUARD(GetRecoveryPointIndexDetails);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRecoveryPointIndexDetails, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupVaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRecoveryPointIndexDetails", "Required field: BackupVaultName, is not set");
    return GetRecoveryPointIndexDetailsOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  if (!request.RecoveryPointArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRecoveryPointIndexDetails", "Required field: RecoveryPointArn, is not set");
    return GetRecoveryPointIndexDetailsOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecoveryPointArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetRecoveryPointIndexDetails, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetRecoveryPointIndexDetails, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetRecoveryPointIndexDetails",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetRecoveryPointIndexDetailsOutcome>(
    [&]()-> GetRecoveryPointIndexDetailsOutcome {
      return GetRecoveryPointIndexDetailsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup-vaults/");
      resolvedEndpoint.AddPathSegment(request.GetBackupVaultName());
      resolvedEndpoint.AddPathSegments("/recovery-points/");
      resolvedEndpoint.AddPathSegment(request.GetRecoveryPointArn());
      resolvedEndpoint.AddPathSegments("/index");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetRecoveryPointRestoreMetadataOutcome BackupClient::GetRecoveryPointRestoreMetadata(const GetRecoveryPointRestoreMetadataRequest& request) const
{
  AWS_OPERATION_GUARD(GetRecoveryPointRestoreMetadata);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRecoveryPointRestoreMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupVaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRecoveryPointRestoreMetadata", "Required field: BackupVaultName, is not set");
    return GetRecoveryPointRestoreMetadataOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  if (!request.RecoveryPointArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRecoveryPointRestoreMetadata", "Required field: RecoveryPointArn, is not set");
    return GetRecoveryPointRestoreMetadataOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecoveryPointArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetRecoveryPointRestoreMetadata, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetRecoveryPointRestoreMetadata, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetRecoveryPointRestoreMetadata",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetRecoveryPointRestoreMetadataOutcome>(
    [&]()-> GetRecoveryPointRestoreMetadataOutcome {
      return GetRecoveryPointRestoreMetadataOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup-vaults/");
      resolvedEndpoint.AddPathSegment(request.GetBackupVaultName());
      resolvedEndpoint.AddPathSegments("/recovery-points/");
      resolvedEndpoint.AddPathSegment(request.GetRecoveryPointArn());
      resolvedEndpoint.AddPathSegments("/restore-metadata");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetRestoreJobMetadataOutcome BackupClient::GetRestoreJobMetadata(const GetRestoreJobMetadataRequest& request) const
{
  AWS_OPERATION_GUARD(GetRestoreJobMetadata);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRestoreJobMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestoreJobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRestoreJobMetadata", "Required field: RestoreJobId, is not set");
    return GetRestoreJobMetadataOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestoreJobId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetRestoreJobMetadata, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetRestoreJobMetadata, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetRestoreJobMetadata",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetRestoreJobMetadataOutcome>(
    [&]()-> GetRestoreJobMetadataOutcome {
      return GetRestoreJobMetadataOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/restore-jobs/");
      resolvedEndpoint.AddPathSegment(request.GetRestoreJobId());
      resolvedEndpoint.AddPathSegments("/metadata");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetRestoreTestingInferredMetadataOutcome BackupClient::GetRestoreTestingInferredMetadata(const GetRestoreTestingInferredMetadataRequest& request) const
{
  AWS_OPERATION_GUARD(GetRestoreTestingInferredMetadata);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRestoreTestingInferredMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupVaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRestoreTestingInferredMetadata", "Required field: BackupVaultName, is not set");
    return GetRestoreTestingInferredMetadataOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  if (!request.RecoveryPointArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRestoreTestingInferredMetadata", "Required field: RecoveryPointArn, is not set");
    return GetRestoreTestingInferredMetadataOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecoveryPointArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetRestoreTestingInferredMetadata, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetRestoreTestingInferredMetadata, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetRestoreTestingInferredMetadata",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetRestoreTestingInferredMetadataOutcome>(
    [&]()-> GetRestoreTestingInferredMetadataOutcome {
      return GetRestoreTestingInferredMetadataOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/restore-testing/inferred-metadata");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetRestoreTestingPlanOutcome BackupClient::GetRestoreTestingPlan(const GetRestoreTestingPlanRequest& request) const
{
  AWS_OPERATION_GUARD(GetRestoreTestingPlan);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRestoreTestingPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestoreTestingPlanNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRestoreTestingPlan", "Required field: RestoreTestingPlanName, is not set");
    return GetRestoreTestingPlanOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestoreTestingPlanName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetRestoreTestingPlan, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetRestoreTestingPlan, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetRestoreTestingPlan",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetRestoreTestingPlanOutcome>(
    [&]()-> GetRestoreTestingPlanOutcome {
      return GetRestoreTestingPlanOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/restore-testing/plans/");
      resolvedEndpoint.AddPathSegment(request.GetRestoreTestingPlanName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetRestoreTestingSelectionOutcome BackupClient::GetRestoreTestingSelection(const GetRestoreTestingSelectionRequest& request) const
{
  AWS_OPERATION_GUARD(GetRestoreTestingSelection);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRestoreTestingSelection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestoreTestingPlanNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRestoreTestingSelection", "Required field: RestoreTestingPlanName, is not set");
    return GetRestoreTestingSelectionOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestoreTestingPlanName]", false));
  }
  if (!request.RestoreTestingSelectionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRestoreTestingSelection", "Required field: RestoreTestingSelectionName, is not set");
    return GetRestoreTestingSelectionOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestoreTestingSelectionName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetRestoreTestingSelection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetRestoreTestingSelection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetRestoreTestingSelection",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetRestoreTestingSelectionOutcome>(
    [&]()-> GetRestoreTestingSelectionOutcome {
      return GetRestoreTestingSelectionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/restore-testing/plans/");
      resolvedEndpoint.AddPathSegment(request.GetRestoreTestingPlanName());
      resolvedEndpoint.AddPathSegments("/selections/");
      resolvedEndpoint.AddPathSegment(request.GetRestoreTestingSelectionName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSupportedResourceTypesOutcome BackupClient::GetSupportedResourceTypes(const GetSupportedResourceTypesRequest& request) const
{
  AWS_OPERATION_GUARD(GetSupportedResourceTypes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSupportedResourceTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetSupportedResourceTypes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSupportedResourceTypes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSupportedResourceTypes",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSupportedResourceTypesOutcome>(
    [&]()-> GetSupportedResourceTypesOutcome {
      return GetSupportedResourceTypesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/supported-resource-types");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListBackupJobSummariesOutcome BackupClient::ListBackupJobSummaries(const ListBackupJobSummariesRequest& request) const
{
  AWS_OPERATION_GUARD(ListBackupJobSummaries);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBackupJobSummaries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListBackupJobSummaries, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBackupJobSummaries, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListBackupJobSummaries",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBackupJobSummariesOutcome>(
    [&]()-> ListBackupJobSummariesOutcome {
      return ListBackupJobSummariesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/audit/backup-job-summaries");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListBackupJobsOutcome BackupClient::ListBackupJobs(const ListBackupJobsRequest& request) const
{
  AWS_OPERATION_GUARD(ListBackupJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBackupJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListBackupJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBackupJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListBackupJobs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBackupJobsOutcome>(
    [&]()-> ListBackupJobsOutcome {
      return ListBackupJobsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup-jobs/");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListBackupPlanTemplatesOutcome BackupClient::ListBackupPlanTemplates(const ListBackupPlanTemplatesRequest& request) const
{
  AWS_OPERATION_GUARD(ListBackupPlanTemplates);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBackupPlanTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListBackupPlanTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBackupPlanTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListBackupPlanTemplates",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBackupPlanTemplatesOutcome>(
    [&]()-> ListBackupPlanTemplatesOutcome {
      return ListBackupPlanTemplatesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup/template/plans");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListBackupPlanVersionsOutcome BackupClient::ListBackupPlanVersions(const ListBackupPlanVersionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListBackupPlanVersions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBackupPlanVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupPlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBackupPlanVersions", "Required field: BackupPlanId, is not set");
    return ListBackupPlanVersionsOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupPlanId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListBackupPlanVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBackupPlanVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListBackupPlanVersions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBackupPlanVersionsOutcome>(
    [&]()-> ListBackupPlanVersionsOutcome {
      return ListBackupPlanVersionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup/plans/");
      resolvedEndpoint.AddPathSegment(request.GetBackupPlanId());
      resolvedEndpoint.AddPathSegments("/versions/");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListBackupPlansOutcome BackupClient::ListBackupPlans(const ListBackupPlansRequest& request) const
{
  AWS_OPERATION_GUARD(ListBackupPlans);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBackupPlans, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListBackupPlans, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBackupPlans, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListBackupPlans",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBackupPlansOutcome>(
    [&]()-> ListBackupPlansOutcome {
      return ListBackupPlansOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup/plans/");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListBackupSelectionsOutcome BackupClient::ListBackupSelections(const ListBackupSelectionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListBackupSelections);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBackupSelections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupPlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBackupSelections", "Required field: BackupPlanId, is not set");
    return ListBackupSelectionsOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupPlanId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListBackupSelections, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBackupSelections, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListBackupSelections",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBackupSelectionsOutcome>(
    [&]()-> ListBackupSelectionsOutcome {
      return ListBackupSelectionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup/plans/");
      resolvedEndpoint.AddPathSegment(request.GetBackupPlanId());
      resolvedEndpoint.AddPathSegments("/selections/");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListBackupVaultsOutcome BackupClient::ListBackupVaults(const ListBackupVaultsRequest& request) const
{
  AWS_OPERATION_GUARD(ListBackupVaults);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBackupVaults, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListBackupVaults, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBackupVaults, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListBackupVaults",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBackupVaultsOutcome>(
    [&]()-> ListBackupVaultsOutcome {
      return ListBackupVaultsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup-vaults/");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListCopyJobSummariesOutcome BackupClient::ListCopyJobSummaries(const ListCopyJobSummariesRequest& request) const
{
  AWS_OPERATION_GUARD(ListCopyJobSummaries);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCopyJobSummaries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListCopyJobSummaries, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListCopyJobSummaries, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListCopyJobSummaries",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListCopyJobSummariesOutcome>(
    [&]()-> ListCopyJobSummariesOutcome {
      return ListCopyJobSummariesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/audit/copy-job-summaries");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListCopyJobsOutcome BackupClient::ListCopyJobs(const ListCopyJobsRequest& request) const
{
  AWS_OPERATION_GUARD(ListCopyJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCopyJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListCopyJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListCopyJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListCopyJobs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListCopyJobsOutcome>(
    [&]()-> ListCopyJobsOutcome {
      return ListCopyJobsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/copy-jobs/");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListFrameworksOutcome BackupClient::ListFrameworks(const ListFrameworksRequest& request) const
{
  AWS_OPERATION_GUARD(ListFrameworks);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFrameworks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListFrameworks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListFrameworks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListFrameworks",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListFrameworksOutcome>(
    [&]()-> ListFrameworksOutcome {
      return ListFrameworksOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/audit/frameworks");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListIndexedRecoveryPointsOutcome BackupClient::ListIndexedRecoveryPoints(const ListIndexedRecoveryPointsRequest& request) const
{
  AWS_OPERATION_GUARD(ListIndexedRecoveryPoints);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIndexedRecoveryPoints, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListIndexedRecoveryPoints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListIndexedRecoveryPoints, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListIndexedRecoveryPoints",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListIndexedRecoveryPointsOutcome>(
    [&]()-> ListIndexedRecoveryPointsOutcome {
      return ListIndexedRecoveryPointsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/indexes/recovery-point/");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListLegalHoldsOutcome BackupClient::ListLegalHolds(const ListLegalHoldsRequest& request) const
{
  AWS_OPERATION_GUARD(ListLegalHolds);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLegalHolds, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListLegalHolds, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListLegalHolds, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListLegalHolds",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListLegalHoldsOutcome>(
    [&]()-> ListLegalHoldsOutcome {
      return ListLegalHoldsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/legal-holds/");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListProtectedResourcesOutcome BackupClient::ListProtectedResources(const ListProtectedResourcesRequest& request) const
{
  AWS_OPERATION_GUARD(ListProtectedResources);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProtectedResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListProtectedResources, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListProtectedResources, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListProtectedResources",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListProtectedResourcesOutcome>(
    [&]()-> ListProtectedResourcesOutcome {
      return ListProtectedResourcesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/resources/");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListProtectedResourcesByBackupVaultOutcome BackupClient::ListProtectedResourcesByBackupVault(const ListProtectedResourcesByBackupVaultRequest& request) const
{
  AWS_OPERATION_GUARD(ListProtectedResourcesByBackupVault);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProtectedResourcesByBackupVault, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupVaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProtectedResourcesByBackupVault", "Required field: BackupVaultName, is not set");
    return ListProtectedResourcesByBackupVaultOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListProtectedResourcesByBackupVault, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListProtectedResourcesByBackupVault, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListProtectedResourcesByBackupVault",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListProtectedResourcesByBackupVaultOutcome>(
    [&]()-> ListProtectedResourcesByBackupVaultOutcome {
      return ListProtectedResourcesByBackupVaultOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup-vaults/");
      resolvedEndpoint.AddPathSegment(request.GetBackupVaultName());
      resolvedEndpoint.AddPathSegments("/resources/");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListRecoveryPointsByBackupVaultOutcome BackupClient::ListRecoveryPointsByBackupVault(const ListRecoveryPointsByBackupVaultRequest& request) const
{
  AWS_OPERATION_GUARD(ListRecoveryPointsByBackupVault);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRecoveryPointsByBackupVault, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupVaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRecoveryPointsByBackupVault", "Required field: BackupVaultName, is not set");
    return ListRecoveryPointsByBackupVaultOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListRecoveryPointsByBackupVault, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListRecoveryPointsByBackupVault, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListRecoveryPointsByBackupVault",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListRecoveryPointsByBackupVaultOutcome>(
    [&]()-> ListRecoveryPointsByBackupVaultOutcome {
      return ListRecoveryPointsByBackupVaultOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup-vaults/");
      resolvedEndpoint.AddPathSegment(request.GetBackupVaultName());
      resolvedEndpoint.AddPathSegments("/recovery-points/");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListRecoveryPointsByLegalHoldOutcome BackupClient::ListRecoveryPointsByLegalHold(const ListRecoveryPointsByLegalHoldRequest& request) const
{
  AWS_OPERATION_GUARD(ListRecoveryPointsByLegalHold);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRecoveryPointsByLegalHold, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LegalHoldIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRecoveryPointsByLegalHold", "Required field: LegalHoldId, is not set");
    return ListRecoveryPointsByLegalHoldOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LegalHoldId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListRecoveryPointsByLegalHold, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListRecoveryPointsByLegalHold, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListRecoveryPointsByLegalHold",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListRecoveryPointsByLegalHoldOutcome>(
    [&]()-> ListRecoveryPointsByLegalHoldOutcome {
      return ListRecoveryPointsByLegalHoldOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/legal-holds/");
      resolvedEndpoint.AddPathSegment(request.GetLegalHoldId());
      resolvedEndpoint.AddPathSegments("/recovery-points");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListRecoveryPointsByResourceOutcome BackupClient::ListRecoveryPointsByResource(const ListRecoveryPointsByResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListRecoveryPointsByResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRecoveryPointsByResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRecoveryPointsByResource", "Required field: ResourceArn, is not set");
    return ListRecoveryPointsByResourceOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListRecoveryPointsByResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListRecoveryPointsByResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListRecoveryPointsByResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListRecoveryPointsByResourceOutcome>(
    [&]()-> ListRecoveryPointsByResourceOutcome {
      return ListRecoveryPointsByResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/resources/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      resolvedEndpoint.AddPathSegments("/recovery-points/");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListReportJobsOutcome BackupClient::ListReportJobs(const ListReportJobsRequest& request) const
{
  AWS_OPERATION_GUARD(ListReportJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListReportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListReportJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListReportJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListReportJobs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListReportJobsOutcome>(
    [&]()-> ListReportJobsOutcome {
      return ListReportJobsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/audit/report-jobs");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListReportPlansOutcome BackupClient::ListReportPlans(const ListReportPlansRequest& request) const
{
  AWS_OPERATION_GUARD(ListReportPlans);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListReportPlans, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListReportPlans, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListReportPlans, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListReportPlans",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListReportPlansOutcome>(
    [&]()-> ListReportPlansOutcome {
      return ListReportPlansOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/audit/report-plans");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListRestoreJobSummariesOutcome BackupClient::ListRestoreJobSummaries(const ListRestoreJobSummariesRequest& request) const
{
  AWS_OPERATION_GUARD(ListRestoreJobSummaries);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRestoreJobSummaries, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListRestoreJobSummaries, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListRestoreJobSummaries, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListRestoreJobSummaries",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListRestoreJobSummariesOutcome>(
    [&]()-> ListRestoreJobSummariesOutcome {
      return ListRestoreJobSummariesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/audit/restore-job-summaries");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListRestoreJobsOutcome BackupClient::ListRestoreJobs(const ListRestoreJobsRequest& request) const
{
  AWS_OPERATION_GUARD(ListRestoreJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRestoreJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListRestoreJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListRestoreJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListRestoreJobs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListRestoreJobsOutcome>(
    [&]()-> ListRestoreJobsOutcome {
      return ListRestoreJobsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/restore-jobs/");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListRestoreJobsByProtectedResourceOutcome BackupClient::ListRestoreJobsByProtectedResource(const ListRestoreJobsByProtectedResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListRestoreJobsByProtectedResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRestoreJobsByProtectedResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRestoreJobsByProtectedResource", "Required field: ResourceArn, is not set");
    return ListRestoreJobsByProtectedResourceOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListRestoreJobsByProtectedResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListRestoreJobsByProtectedResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListRestoreJobsByProtectedResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListRestoreJobsByProtectedResourceOutcome>(
    [&]()-> ListRestoreJobsByProtectedResourceOutcome {
      return ListRestoreJobsByProtectedResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/resources/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      resolvedEndpoint.AddPathSegments("/restore-jobs/");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListRestoreTestingPlansOutcome BackupClient::ListRestoreTestingPlans(const ListRestoreTestingPlansRequest& request) const
{
  AWS_OPERATION_GUARD(ListRestoreTestingPlans);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRestoreTestingPlans, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListRestoreTestingPlans, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListRestoreTestingPlans, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListRestoreTestingPlans",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListRestoreTestingPlansOutcome>(
    [&]()-> ListRestoreTestingPlansOutcome {
      return ListRestoreTestingPlansOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/restore-testing/plans");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListRestoreTestingSelectionsOutcome BackupClient::ListRestoreTestingSelections(const ListRestoreTestingSelectionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListRestoreTestingSelections);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRestoreTestingSelections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestoreTestingPlanNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRestoreTestingSelections", "Required field: RestoreTestingPlanName, is not set");
    return ListRestoreTestingSelectionsOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestoreTestingPlanName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListRestoreTestingSelections, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListRestoreTestingSelections, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListRestoreTestingSelections",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListRestoreTestingSelectionsOutcome>(
    [&]()-> ListRestoreTestingSelectionsOutcome {
      return ListRestoreTestingSelectionsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/restore-testing/plans/");
      resolvedEndpoint.AddPathSegment(request.GetRestoreTestingPlanName());
      resolvedEndpoint.AddPathSegments("/selections");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsOutcome BackupClient::ListTags(const ListTagsRequest& request) const
{
  AWS_OPERATION_GUARD(ListTags);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTags", "Required field: ResourceArn, is not set");
    return ListTagsOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListTags, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTags, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTags",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsOutcome>(
    [&]()-> ListTagsOutcome {
      return ListTagsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutBackupVaultAccessPolicyOutcome BackupClient::PutBackupVaultAccessPolicy(const PutBackupVaultAccessPolicyRequest& request) const
{
  AWS_OPERATION_GUARD(PutBackupVaultAccessPolicy);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBackupVaultAccessPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupVaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBackupVaultAccessPolicy", "Required field: BackupVaultName, is not set");
    return PutBackupVaultAccessPolicyOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutBackupVaultAccessPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBackupVaultAccessPolicy, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutBackupVaultAccessPolicy",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBackupVaultAccessPolicyOutcome>(
    [&]()-> PutBackupVaultAccessPolicyOutcome {
      return PutBackupVaultAccessPolicyOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup-vaults/");
      resolvedEndpoint.AddPathSegment(request.GetBackupVaultName());
      resolvedEndpoint.AddPathSegments("/access-policy");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutBackupVaultLockConfigurationOutcome BackupClient::PutBackupVaultLockConfiguration(const PutBackupVaultLockConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(PutBackupVaultLockConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBackupVaultLockConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupVaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBackupVaultLockConfiguration", "Required field: BackupVaultName, is not set");
    return PutBackupVaultLockConfigurationOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutBackupVaultLockConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBackupVaultLockConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutBackupVaultLockConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBackupVaultLockConfigurationOutcome>(
    [&]()-> PutBackupVaultLockConfigurationOutcome {
      return PutBackupVaultLockConfigurationOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup-vaults/");
      resolvedEndpoint.AddPathSegment(request.GetBackupVaultName());
      resolvedEndpoint.AddPathSegments("/vault-lock");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutBackupVaultNotificationsOutcome BackupClient::PutBackupVaultNotifications(const PutBackupVaultNotificationsRequest& request) const
{
  AWS_OPERATION_GUARD(PutBackupVaultNotifications);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutBackupVaultNotifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupVaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBackupVaultNotifications", "Required field: BackupVaultName, is not set");
    return PutBackupVaultNotificationsOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutBackupVaultNotifications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutBackupVaultNotifications, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutBackupVaultNotifications",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutBackupVaultNotificationsOutcome>(
    [&]()-> PutBackupVaultNotificationsOutcome {
      return PutBackupVaultNotificationsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup-vaults/");
      resolvedEndpoint.AddPathSegment(request.GetBackupVaultName());
      resolvedEndpoint.AddPathSegments("/notification-configuration");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutRestoreValidationResultOutcome BackupClient::PutRestoreValidationResult(const PutRestoreValidationResultRequest& request) const
{
  AWS_OPERATION_GUARD(PutRestoreValidationResult);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutRestoreValidationResult, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestoreJobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutRestoreValidationResult", "Required field: RestoreJobId, is not set");
    return PutRestoreValidationResultOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestoreJobId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutRestoreValidationResult, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutRestoreValidationResult, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutRestoreValidationResult",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutRestoreValidationResultOutcome>(
    [&]()-> PutRestoreValidationResultOutcome {
      return PutRestoreValidationResultOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/restore-jobs/");
      resolvedEndpoint.AddPathSegment(request.GetRestoreJobId());
      resolvedEndpoint.AddPathSegments("/validations");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartBackupJobOutcome BackupClient::StartBackupJob(const StartBackupJobRequest& request) const
{
  AWS_OPERATION_GUARD(StartBackupJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartBackupJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartBackupJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartBackupJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartBackupJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartBackupJobOutcome>(
    [&]()-> StartBackupJobOutcome {
      return StartBackupJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup-jobs");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartCopyJobOutcome BackupClient::StartCopyJob(const StartCopyJobRequest& request) const
{
  AWS_OPERATION_GUARD(StartCopyJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartCopyJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartCopyJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartCopyJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartCopyJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartCopyJobOutcome>(
    [&]()-> StartCopyJobOutcome {
      return StartCopyJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/copy-jobs");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartReportJobOutcome BackupClient::StartReportJob(const StartReportJobRequest& request) const
{
  AWS_OPERATION_GUARD(StartReportJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartReportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ReportPlanNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartReportJob", "Required field: ReportPlanName, is not set");
    return StartReportJobOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReportPlanName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartReportJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartReportJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartReportJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartReportJobOutcome>(
    [&]()-> StartReportJobOutcome {
      return StartReportJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/audit/report-jobs/");
      resolvedEndpoint.AddPathSegment(request.GetReportPlanName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartRestoreJobOutcome BackupClient::StartRestoreJob(const StartRestoreJobRequest& request) const
{
  AWS_OPERATION_GUARD(StartRestoreJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartRestoreJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StartRestoreJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartRestoreJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartRestoreJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartRestoreJobOutcome>(
    [&]()-> StartRestoreJobOutcome {
      return StartRestoreJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/restore-jobs");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StopBackupJobOutcome BackupClient::StopBackupJob(const StopBackupJobRequest& request) const
{
  AWS_OPERATION_GUARD(StopBackupJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopBackupJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupJobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopBackupJob", "Required field: BackupJobId, is not set");
    return StopBackupJobOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupJobId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, StopBackupJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StopBackupJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StopBackupJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StopBackupJobOutcome>(
    [&]()-> StopBackupJobOutcome {
      return StopBackupJobOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup-jobs/");
      resolvedEndpoint.AddPathSegment(request.GetBackupJobId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome BackupClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
    [&]()-> TagResourceOutcome {
      return TagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tags/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome BackupClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
    [&]()-> UntagResourceOutcome {
      return UntagResourceOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/untag/");
      resolvedEndpoint.AddPathSegment(request.GetResourceArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateBackupPlanOutcome BackupClient::UpdateBackupPlan(const UpdateBackupPlanRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateBackupPlan);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBackupPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupPlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBackupPlan", "Required field: BackupPlanId, is not set");
    return UpdateBackupPlanOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupPlanId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateBackupPlan, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateBackupPlan, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateBackupPlan",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateBackupPlanOutcome>(
    [&]()-> UpdateBackupPlanOutcome {
      return UpdateBackupPlanOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup/plans/");
      resolvedEndpoint.AddPathSegment(request.GetBackupPlanId());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateFrameworkOutcome BackupClient::UpdateFramework(const UpdateFrameworkRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateFramework);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFramework, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FrameworkNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFramework", "Required field: FrameworkName, is not set");
    return UpdateFrameworkOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FrameworkName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateFramework, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateFramework, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateFramework",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateFrameworkOutcome>(
    [&]()-> UpdateFrameworkOutcome {
      return UpdateFrameworkOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/audit/frameworks/");
      resolvedEndpoint.AddPathSegment(request.GetFrameworkName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateGlobalSettingsOutcome BackupClient::UpdateGlobalSettings(const UpdateGlobalSettingsRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateGlobalSettings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateGlobalSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateGlobalSettings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateGlobalSettings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateGlobalSettings",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateGlobalSettingsOutcome>(
    [&]()-> UpdateGlobalSettingsOutcome {
      return UpdateGlobalSettingsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/global-settings");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateRecoveryPointIndexSettingsOutcome BackupClient::UpdateRecoveryPointIndexSettings(const UpdateRecoveryPointIndexSettingsRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateRecoveryPointIndexSettings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRecoveryPointIndexSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupVaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRecoveryPointIndexSettings", "Required field: BackupVaultName, is not set");
    return UpdateRecoveryPointIndexSettingsOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  if (!request.RecoveryPointArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRecoveryPointIndexSettings", "Required field: RecoveryPointArn, is not set");
    return UpdateRecoveryPointIndexSettingsOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecoveryPointArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateRecoveryPointIndexSettings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateRecoveryPointIndexSettings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateRecoveryPointIndexSettings",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateRecoveryPointIndexSettingsOutcome>(
    [&]()-> UpdateRecoveryPointIndexSettingsOutcome {
      return UpdateRecoveryPointIndexSettingsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup-vaults/");
      resolvedEndpoint.AddPathSegment(request.GetBackupVaultName());
      resolvedEndpoint.AddPathSegments("/recovery-points/");
      resolvedEndpoint.AddPathSegment(request.GetRecoveryPointArn());
      resolvedEndpoint.AddPathSegments("/index");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateRecoveryPointLifecycleOutcome BackupClient::UpdateRecoveryPointLifecycle(const UpdateRecoveryPointLifecycleRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateRecoveryPointLifecycle);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRecoveryPointLifecycle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BackupVaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRecoveryPointLifecycle", "Required field: BackupVaultName, is not set");
    return UpdateRecoveryPointLifecycleOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  if (!request.RecoveryPointArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRecoveryPointLifecycle", "Required field: RecoveryPointArn, is not set");
    return UpdateRecoveryPointLifecycleOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecoveryPointArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateRecoveryPointLifecycle, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateRecoveryPointLifecycle, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateRecoveryPointLifecycle",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateRecoveryPointLifecycleOutcome>(
    [&]()-> UpdateRecoveryPointLifecycleOutcome {
      return UpdateRecoveryPointLifecycleOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/backup-vaults/");
      resolvedEndpoint.AddPathSegment(request.GetBackupVaultName());
      resolvedEndpoint.AddPathSegments("/recovery-points/");
      resolvedEndpoint.AddPathSegment(request.GetRecoveryPointArn());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateRegionSettingsOutcome BackupClient::UpdateRegionSettings(const UpdateRegionSettingsRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateRegionSettings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRegionSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateRegionSettings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateRegionSettings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateRegionSettings",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateRegionSettingsOutcome>(
    [&]()-> UpdateRegionSettingsOutcome {
      return UpdateRegionSettingsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/account-settings");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateReportPlanOutcome BackupClient::UpdateReportPlan(const UpdateReportPlanRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateReportPlan);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateReportPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ReportPlanNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateReportPlan", "Required field: ReportPlanName, is not set");
    return UpdateReportPlanOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReportPlanName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateReportPlan, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateReportPlan, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateReportPlan",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateReportPlanOutcome>(
    [&]()-> UpdateReportPlanOutcome {
      return UpdateReportPlanOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/audit/report-plans/");
      resolvedEndpoint.AddPathSegment(request.GetReportPlanName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateRestoreTestingPlanOutcome BackupClient::UpdateRestoreTestingPlan(const UpdateRestoreTestingPlanRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateRestoreTestingPlan);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRestoreTestingPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestoreTestingPlanNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRestoreTestingPlan", "Required field: RestoreTestingPlanName, is not set");
    return UpdateRestoreTestingPlanOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestoreTestingPlanName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateRestoreTestingPlan, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateRestoreTestingPlan, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateRestoreTestingPlan",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateRestoreTestingPlanOutcome>(
    [&]()-> UpdateRestoreTestingPlanOutcome {
      return UpdateRestoreTestingPlanOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/restore-testing/plans/");
      resolvedEndpoint.AddPathSegment(request.GetRestoreTestingPlanName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateRestoreTestingSelectionOutcome BackupClient::UpdateRestoreTestingSelection(const UpdateRestoreTestingSelectionRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateRestoreTestingSelection);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRestoreTestingSelection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RestoreTestingPlanNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRestoreTestingSelection", "Required field: RestoreTestingPlanName, is not set");
    return UpdateRestoreTestingSelectionOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestoreTestingPlanName]", false));
  }
  if (!request.RestoreTestingSelectionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRestoreTestingSelection", "Required field: RestoreTestingSelectionName, is not set");
    return UpdateRestoreTestingSelectionOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestoreTestingSelectionName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, UpdateRestoreTestingSelection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateRestoreTestingSelection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateRestoreTestingSelection",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateRestoreTestingSelectionOutcome>(
    [&]()-> UpdateRestoreTestingSelectionOutcome {
      return UpdateRestoreTestingSelectionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_PUT, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/restore-testing/plans/");
      resolvedEndpoint.AddPathSegment(request.GetRestoreTestingPlanName());
      resolvedEndpoint.AddPathSegments("/selections/");
      resolvedEndpoint.AddPathSegment(request.GetRestoreTestingSelectionName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


