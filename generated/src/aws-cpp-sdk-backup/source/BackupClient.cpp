/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
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
#include <aws/backup/model/CreateReportPlanRequest.h>
#include <aws/backup/model/DeleteBackupPlanRequest.h>
#include <aws/backup/model/DeleteBackupSelectionRequest.h>
#include <aws/backup/model/DeleteBackupVaultRequest.h>
#include <aws/backup/model/DeleteBackupVaultAccessPolicyRequest.h>
#include <aws/backup/model/DeleteBackupVaultLockConfigurationRequest.h>
#include <aws/backup/model/DeleteBackupVaultNotificationsRequest.h>
#include <aws/backup/model/DeleteFrameworkRequest.h>
#include <aws/backup/model/DeleteRecoveryPointRequest.h>
#include <aws/backup/model/DeleteReportPlanRequest.h>
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
#include <aws/backup/model/GetRecoveryPointRestoreMetadataRequest.h>
#include <aws/backup/model/ListBackupJobsRequest.h>
#include <aws/backup/model/ListBackupPlanTemplatesRequest.h>
#include <aws/backup/model/ListBackupPlanVersionsRequest.h>
#include <aws/backup/model/ListBackupPlansRequest.h>
#include <aws/backup/model/ListBackupSelectionsRequest.h>
#include <aws/backup/model/ListBackupVaultsRequest.h>
#include <aws/backup/model/ListCopyJobsRequest.h>
#include <aws/backup/model/ListFrameworksRequest.h>
#include <aws/backup/model/ListLegalHoldsRequest.h>
#include <aws/backup/model/ListProtectedResourcesRequest.h>
#include <aws/backup/model/ListRecoveryPointsByBackupVaultRequest.h>
#include <aws/backup/model/ListRecoveryPointsByLegalHoldRequest.h>
#include <aws/backup/model/ListRecoveryPointsByResourceRequest.h>
#include <aws/backup/model/ListReportJobsRequest.h>
#include <aws/backup/model/ListReportPlansRequest.h>
#include <aws/backup/model/ListRestoreJobsRequest.h>
#include <aws/backup/model/ListTagsRequest.h>
#include <aws/backup/model/PutBackupVaultAccessPolicyRequest.h>
#include <aws/backup/model/PutBackupVaultLockConfigurationRequest.h>
#include <aws/backup/model/PutBackupVaultNotificationsRequest.h>
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
#include <aws/backup/model/UpdateRecoveryPointLifecycleRequest.h>
#include <aws/backup/model/UpdateRegionSettingsRequest.h>
#include <aws/backup/model/UpdateReportPlanRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Backup;
using namespace Aws::Backup::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* BackupClient::SERVICE_NAME = "backup";
const char* BackupClient::ALLOCATION_TAG = "BackupClient";

BackupClient::BackupClient(const Backup::BackupClientConfiguration& clientConfiguration,
                           std::shared_ptr<BackupEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BackupErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

BackupClient::BackupClient(const AWSCredentials& credentials,
                           std::shared_ptr<BackupEndpointProviderBase> endpointProvider,
                           const Backup::BackupClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BackupErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

BackupClient::BackupClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<BackupEndpointProviderBase> endpointProvider,
                           const Backup::BackupClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BackupErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  BackupClient::BackupClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BackupErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<BackupEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

BackupClient::BackupClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BackupErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<BackupEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

BackupClient::BackupClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<BackupErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<BackupEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
BackupClient::~BackupClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<BackupEndpointProviderBase>& BackupClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void BackupClient::init(const Backup::BackupClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Backup");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelLegalHold, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/legal-holds/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLegalHoldId());
  return CancelLegalHoldOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

CreateBackupPlanOutcome BackupClient::CreateBackupPlan(const CreateBackupPlanRequest& request) const
{
  AWS_OPERATION_GUARD(CreateBackupPlan);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateBackupPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBackupPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup/plans/");
  return CreateBackupPlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBackupSelection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup/plans/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupPlanId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/selections/");
  return CreateBackupSelectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateBackupVault, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
  return CreateBackupVaultOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateFrameworkOutcome BackupClient::CreateFramework(const CreateFrameworkRequest& request) const
{
  AWS_OPERATION_GUARD(CreateFramework);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFramework, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFramework, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/audit/frameworks");
  return CreateFrameworkOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLegalHoldOutcome BackupClient::CreateLegalHold(const CreateLegalHoldRequest& request) const
{
  AWS_OPERATION_GUARD(CreateLegalHold);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLegalHold, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLegalHold, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/legal-holds/");
  return CreateLegalHoldOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateReportPlanOutcome BackupClient::CreateReportPlan(const CreateReportPlanRequest& request) const
{
  AWS_OPERATION_GUARD(CreateReportPlan);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateReportPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateReportPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/audit/report-plans");
  return CreateReportPlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBackupPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup/plans/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupPlanId());
  return DeleteBackupPlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBackupSelection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup/plans/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupPlanId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/selections/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSelectionId());
  return DeleteBackupSelectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBackupVault, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
  return DeleteBackupVaultOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBackupVaultAccessPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/access-policy");
  return DeleteBackupVaultAccessPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBackupVaultLockConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/vault-lock");
  return DeleteBackupVaultLockConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteBackupVaultNotifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/notification-configuration");
  return DeleteBackupVaultNotificationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFramework, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/audit/frameworks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFrameworkName());
  return DeleteFrameworkOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteRecoveryPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/recovery-points/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecoveryPointArn());
  return DeleteRecoveryPointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteReportPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/audit/report-plans/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReportPlanName());
  return DeleteReportPlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBackupJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup-jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupJobId());
  return DescribeBackupJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeBackupVault, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
  return DescribeBackupVaultOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCopyJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/copy-jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCopyJobId());
  return DescribeCopyJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeFramework, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/audit/frameworks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFrameworkName());
  return DescribeFrameworkOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeGlobalSettingsOutcome BackupClient::DescribeGlobalSettings(const DescribeGlobalSettingsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeGlobalSettings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeGlobalSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeGlobalSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/global-settings");
  return DescribeGlobalSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeProtectedResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return DescribeProtectedResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeRecoveryPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/recovery-points/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecoveryPointArn());
  return DescribeRecoveryPointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeRegionSettingsOutcome BackupClient::DescribeRegionSettings(const DescribeRegionSettingsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeRegionSettings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRegionSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeRegionSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/account-settings");
  return DescribeRegionSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/audit/report-jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReportJobId());
  return DescribeReportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeReportPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/audit/report-plans/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReportPlanName());
  return DescribeReportPlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeRestoreJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/restore-jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRestoreJobId());
  return DescribeRestoreJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateRecoveryPoint, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/recovery-points/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecoveryPointArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/disassociate");
  return DisassociateRecoveryPointOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateRecoveryPointFromParent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/recovery-points/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecoveryPointArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/parentAssociation");
  return DisassociateRecoveryPointFromParentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExportBackupPlanTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup/plans/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupPlanId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/toTemplate/");
  return ExportBackupPlanTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBackupPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup/plans/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupPlanId());
  return GetBackupPlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetBackupPlanFromJSONOutcome BackupClient::GetBackupPlanFromJSON(const GetBackupPlanFromJSONRequest& request) const
{
  AWS_OPERATION_GUARD(GetBackupPlanFromJSON);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetBackupPlanFromJSON, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBackupPlanFromJSON, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup/template/json/toPlan");
  return GetBackupPlanFromJSONOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBackupPlanFromTemplate, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup/template/plans/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupPlanTemplateId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/toPlan");
  return GetBackupPlanFromTemplateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBackupSelection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup/plans/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupPlanId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/selections/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSelectionId());
  return GetBackupSelectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBackupVaultAccessPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/access-policy");
  return GetBackupVaultAccessPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetBackupVaultNotifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/notification-configuration");
  return GetBackupVaultNotificationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLegalHold, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/legal-holds/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLegalHoldId());
  return GetLegalHoldOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetRecoveryPointRestoreMetadata, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/recovery-points/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecoveryPointArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/restore-metadata");
  return GetRecoveryPointRestoreMetadataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSupportedResourceTypesOutcome BackupClient::GetSupportedResourceTypes() const
{
AWS_OPERATION_GUARD(GetSupportedResourceTypes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSupportedResourceTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  const Aws::Vector<Aws::Endpoint::EndpointParameter> staticEndpointParameters;
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(staticEndpointParameters);
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSupportedResourceTypes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/supported-resource-types");
  return GetSupportedResourceTypesOutcome(MakeRequest(endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, "GetSupportedResourceTypes"));
}

ListBackupJobsOutcome BackupClient::ListBackupJobs(const ListBackupJobsRequest& request) const
{
  AWS_OPERATION_GUARD(ListBackupJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBackupJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBackupJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup-jobs/");
  return ListBackupJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListBackupPlanTemplatesOutcome BackupClient::ListBackupPlanTemplates(const ListBackupPlanTemplatesRequest& request) const
{
  AWS_OPERATION_GUARD(ListBackupPlanTemplates);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBackupPlanTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBackupPlanTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup/template/plans");
  return ListBackupPlanTemplatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBackupPlanVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup/plans/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupPlanId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
  return ListBackupPlanVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListBackupPlansOutcome BackupClient::ListBackupPlans(const ListBackupPlansRequest& request) const
{
  AWS_OPERATION_GUARD(ListBackupPlans);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBackupPlans, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBackupPlans, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup/plans/");
  return ListBackupPlansOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBackupSelections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup/plans/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupPlanId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/selections/");
  return ListBackupSelectionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListBackupVaultsOutcome BackupClient::ListBackupVaults(const ListBackupVaultsRequest& request) const
{
  AWS_OPERATION_GUARD(ListBackupVaults);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBackupVaults, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBackupVaults, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
  return ListBackupVaultsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListCopyJobsOutcome BackupClient::ListCopyJobs(const ListCopyJobsRequest& request) const
{
  AWS_OPERATION_GUARD(ListCopyJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCopyJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCopyJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/copy-jobs/");
  return ListCopyJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListFrameworksOutcome BackupClient::ListFrameworks(const ListFrameworksRequest& request) const
{
  AWS_OPERATION_GUARD(ListFrameworks);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFrameworks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFrameworks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/audit/frameworks");
  return ListFrameworksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListLegalHoldsOutcome BackupClient::ListLegalHolds(const ListLegalHoldsRequest& request) const
{
  AWS_OPERATION_GUARD(ListLegalHolds);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLegalHolds, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLegalHolds, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/legal-holds/");
  return ListLegalHoldsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListProtectedResourcesOutcome BackupClient::ListProtectedResources(const ListProtectedResourcesRequest& request) const
{
  AWS_OPERATION_GUARD(ListProtectedResources);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProtectedResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListProtectedResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
  return ListProtectedResourcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRecoveryPointsByBackupVault, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/recovery-points/");
  return ListRecoveryPointsByBackupVaultOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRecoveryPointsByLegalHold, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/legal-holds/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLegalHoldId());
  endpointResolutionOutcome.GetResult().AddPathSegments("/recovery-points");
  return ListRecoveryPointsByLegalHoldOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRecoveryPointsByResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/recovery-points/");
  return ListRecoveryPointsByResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListReportJobsOutcome BackupClient::ListReportJobs(const ListReportJobsRequest& request) const
{
  AWS_OPERATION_GUARD(ListReportJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListReportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListReportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/audit/report-jobs");
  return ListReportJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListReportPlansOutcome BackupClient::ListReportPlans(const ListReportPlansRequest& request) const
{
  AWS_OPERATION_GUARD(ListReportPlans);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListReportPlans, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListReportPlans, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/audit/report-plans");
  return ListReportPlansOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListRestoreJobsOutcome BackupClient::ListRestoreJobs(const ListRestoreJobsRequest& request) const
{
  AWS_OPERATION_GUARD(ListRestoreJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRestoreJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRestoreJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/restore-jobs/");
  return ListRestoreJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBackupVaultAccessPolicy, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/access-policy");
  return PutBackupVaultAccessPolicyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBackupVaultLockConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/vault-lock");
  return PutBackupVaultLockConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutBackupVaultNotifications, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/notification-configuration");
  return PutBackupVaultNotificationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

StartBackupJobOutcome BackupClient::StartBackupJob(const StartBackupJobRequest& request) const
{
  AWS_OPERATION_GUARD(StartBackupJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartBackupJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartBackupJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup-jobs");
  return StartBackupJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

StartCopyJobOutcome BackupClient::StartCopyJob(const StartCopyJobRequest& request) const
{
  AWS_OPERATION_GUARD(StartCopyJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartCopyJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartCopyJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/copy-jobs");
  return StartCopyJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartReportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/audit/report-jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReportPlanName());
  return StartReportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartRestoreJobOutcome BackupClient::StartRestoreJob(const StartRestoreJobRequest& request) const
{
  AWS_OPERATION_GUARD(StartRestoreJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartRestoreJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartRestoreJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/restore-jobs");
  return StartRestoreJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopBackupJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup-jobs/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupJobId());
  return StopBackupJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/untag/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBackupPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup/plans/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupPlanId());
  return UpdateBackupPlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFramework, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/audit/frameworks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFrameworkName());
  return UpdateFrameworkOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateGlobalSettingsOutcome BackupClient::UpdateGlobalSettings(const UpdateGlobalSettingsRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateGlobalSettings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateGlobalSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateGlobalSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/global-settings");
  return UpdateGlobalSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRecoveryPointLifecycle, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/backup-vaults/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBackupVaultName());
  endpointResolutionOutcome.GetResult().AddPathSegments("/recovery-points/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecoveryPointArn());
  return UpdateRecoveryPointLifecycleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRegionSettingsOutcome BackupClient::UpdateRegionSettings(const UpdateRegionSettingsRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateRegionSettings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRegionSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRegionSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/account-settings");
  return UpdateRegionSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateReportPlan, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/audit/report-plans/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetReportPlanName());
  return UpdateReportPlanOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

