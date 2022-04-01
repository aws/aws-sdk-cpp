﻿/**
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

#include <aws/backup/BackupClient.h>
#include <aws/backup/BackupEndpoint.h>
#include <aws/backup/BackupErrorMarshaller.h>
#include <aws/backup/model/CreateBackupPlanRequest.h>
#include <aws/backup/model/CreateBackupSelectionRequest.h>
#include <aws/backup/model/CreateBackupVaultRequest.h>
#include <aws/backup/model/CreateFrameworkRequest.h>
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
#include <aws/backup/model/ExportBackupPlanTemplateRequest.h>
#include <aws/backup/model/GetBackupPlanRequest.h>
#include <aws/backup/model/GetBackupPlanFromJSONRequest.h>
#include <aws/backup/model/GetBackupPlanFromTemplateRequest.h>
#include <aws/backup/model/GetBackupSelectionRequest.h>
#include <aws/backup/model/GetBackupVaultAccessPolicyRequest.h>
#include <aws/backup/model/GetBackupVaultNotificationsRequest.h>
#include <aws/backup/model/GetRecoveryPointRestoreMetadataRequest.h>
#include <aws/backup/model/ListBackupJobsRequest.h>
#include <aws/backup/model/ListBackupPlanTemplatesRequest.h>
#include <aws/backup/model/ListBackupPlanVersionsRequest.h>
#include <aws/backup/model/ListBackupPlansRequest.h>
#include <aws/backup/model/ListBackupSelectionsRequest.h>
#include <aws/backup/model/ListBackupVaultsRequest.h>
#include <aws/backup/model/ListCopyJobsRequest.h>
#include <aws/backup/model/ListFrameworksRequest.h>
#include <aws/backup/model/ListProtectedResourcesRequest.h>
#include <aws/backup/model/ListRecoveryPointsByBackupVaultRequest.h>
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

static const char* SERVICE_NAME = "backup";
static const char* ALLOCATION_TAG = "BackupClient";


BackupClient::BackupClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<BackupErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

BackupClient::BackupClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<BackupErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

BackupClient::BackupClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<BackupErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

BackupClient::~BackupClient()
{
}

void BackupClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("Backup");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + BackupEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void BackupClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

CreateBackupPlanOutcome BackupClient::CreateBackupPlan(const CreateBackupPlanRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup/plans/");
  return CreateBackupPlanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateBackupPlanOutcomeCallable BackupClient::CreateBackupPlanCallable(const CreateBackupPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBackupPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBackupPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::CreateBackupPlanAsync(const CreateBackupPlanRequest& request, const CreateBackupPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateBackupPlanAsyncHelper( request, handler, context ); } );
}

void BackupClient::CreateBackupPlanAsyncHelper(const CreateBackupPlanRequest& request, const CreateBackupPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateBackupPlan(request), context);
}

CreateBackupSelectionOutcome BackupClient::CreateBackupSelection(const CreateBackupSelectionRequest& request) const
{
  if (!request.BackupPlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBackupSelection", "Required field: BackupPlanId, is not set");
    return CreateBackupSelectionOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupPlanId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup/plans/");
  uri.AddPathSegment(request.GetBackupPlanId());
  uri.AddPathSegments("/selections/");
  return CreateBackupSelectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateBackupSelectionOutcomeCallable BackupClient::CreateBackupSelectionCallable(const CreateBackupSelectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBackupSelectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBackupSelection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::CreateBackupSelectionAsync(const CreateBackupSelectionRequest& request, const CreateBackupSelectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateBackupSelectionAsyncHelper( request, handler, context ); } );
}

void BackupClient::CreateBackupSelectionAsyncHelper(const CreateBackupSelectionRequest& request, const CreateBackupSelectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateBackupSelection(request), context);
}

CreateBackupVaultOutcome BackupClient::CreateBackupVault(const CreateBackupVaultRequest& request) const
{
  if (!request.BackupVaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBackupVault", "Required field: BackupVaultName, is not set");
    return CreateBackupVaultOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup-vaults/");
  uri.AddPathSegment(request.GetBackupVaultName());
  return CreateBackupVaultOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

CreateBackupVaultOutcomeCallable BackupClient::CreateBackupVaultCallable(const CreateBackupVaultRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBackupVaultOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBackupVault(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::CreateBackupVaultAsync(const CreateBackupVaultRequest& request, const CreateBackupVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateBackupVaultAsyncHelper( request, handler, context ); } );
}

void BackupClient::CreateBackupVaultAsyncHelper(const CreateBackupVaultRequest& request, const CreateBackupVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateBackupVault(request), context);
}

CreateFrameworkOutcome BackupClient::CreateFramework(const CreateFrameworkRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/audit/frameworks");
  return CreateFrameworkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFrameworkOutcomeCallable BackupClient::CreateFrameworkCallable(const CreateFrameworkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFrameworkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFramework(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::CreateFrameworkAsync(const CreateFrameworkRequest& request, const CreateFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateFrameworkAsyncHelper( request, handler, context ); } );
}

void BackupClient::CreateFrameworkAsyncHelper(const CreateFrameworkRequest& request, const CreateFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateFramework(request), context);
}

CreateReportPlanOutcome BackupClient::CreateReportPlan(const CreateReportPlanRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/audit/report-plans");
  return CreateReportPlanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateReportPlanOutcomeCallable BackupClient::CreateReportPlanCallable(const CreateReportPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateReportPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateReportPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::CreateReportPlanAsync(const CreateReportPlanRequest& request, const CreateReportPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateReportPlanAsyncHelper( request, handler, context ); } );
}

void BackupClient::CreateReportPlanAsyncHelper(const CreateReportPlanRequest& request, const CreateReportPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateReportPlan(request), context);
}

DeleteBackupPlanOutcome BackupClient::DeleteBackupPlan(const DeleteBackupPlanRequest& request) const
{
  if (!request.BackupPlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBackupPlan", "Required field: BackupPlanId, is not set");
    return DeleteBackupPlanOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupPlanId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup/plans/");
  uri.AddPathSegment(request.GetBackupPlanId());
  return DeleteBackupPlanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteBackupPlanOutcomeCallable BackupClient::DeleteBackupPlanCallable(const DeleteBackupPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBackupPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBackupPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::DeleteBackupPlanAsync(const DeleteBackupPlanRequest& request, const DeleteBackupPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteBackupPlanAsyncHelper( request, handler, context ); } );
}

void BackupClient::DeleteBackupPlanAsyncHelper(const DeleteBackupPlanRequest& request, const DeleteBackupPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteBackupPlan(request), context);
}

DeleteBackupSelectionOutcome BackupClient::DeleteBackupSelection(const DeleteBackupSelectionRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup/plans/");
  uri.AddPathSegment(request.GetBackupPlanId());
  uri.AddPathSegments("/selections/");
  uri.AddPathSegment(request.GetSelectionId());
  return DeleteBackupSelectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteBackupSelectionOutcomeCallable BackupClient::DeleteBackupSelectionCallable(const DeleteBackupSelectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBackupSelectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBackupSelection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::DeleteBackupSelectionAsync(const DeleteBackupSelectionRequest& request, const DeleteBackupSelectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteBackupSelectionAsyncHelper( request, handler, context ); } );
}

void BackupClient::DeleteBackupSelectionAsyncHelper(const DeleteBackupSelectionRequest& request, const DeleteBackupSelectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteBackupSelection(request), context);
}

DeleteBackupVaultOutcome BackupClient::DeleteBackupVault(const DeleteBackupVaultRequest& request) const
{
  if (!request.BackupVaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBackupVault", "Required field: BackupVaultName, is not set");
    return DeleteBackupVaultOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup-vaults/");
  uri.AddPathSegment(request.GetBackupVaultName());
  return DeleteBackupVaultOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteBackupVaultOutcomeCallable BackupClient::DeleteBackupVaultCallable(const DeleteBackupVaultRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBackupVaultOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBackupVault(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::DeleteBackupVaultAsync(const DeleteBackupVaultRequest& request, const DeleteBackupVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteBackupVaultAsyncHelper( request, handler, context ); } );
}

void BackupClient::DeleteBackupVaultAsyncHelper(const DeleteBackupVaultRequest& request, const DeleteBackupVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteBackupVault(request), context);
}

DeleteBackupVaultAccessPolicyOutcome BackupClient::DeleteBackupVaultAccessPolicy(const DeleteBackupVaultAccessPolicyRequest& request) const
{
  if (!request.BackupVaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBackupVaultAccessPolicy", "Required field: BackupVaultName, is not set");
    return DeleteBackupVaultAccessPolicyOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup-vaults/");
  uri.AddPathSegment(request.GetBackupVaultName());
  uri.AddPathSegments("/access-policy");
  return DeleteBackupVaultAccessPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteBackupVaultAccessPolicyOutcomeCallable BackupClient::DeleteBackupVaultAccessPolicyCallable(const DeleteBackupVaultAccessPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBackupVaultAccessPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBackupVaultAccessPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::DeleteBackupVaultAccessPolicyAsync(const DeleteBackupVaultAccessPolicyRequest& request, const DeleteBackupVaultAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteBackupVaultAccessPolicyAsyncHelper( request, handler, context ); } );
}

void BackupClient::DeleteBackupVaultAccessPolicyAsyncHelper(const DeleteBackupVaultAccessPolicyRequest& request, const DeleteBackupVaultAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteBackupVaultAccessPolicy(request), context);
}

DeleteBackupVaultLockConfigurationOutcome BackupClient::DeleteBackupVaultLockConfiguration(const DeleteBackupVaultLockConfigurationRequest& request) const
{
  if (!request.BackupVaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBackupVaultLockConfiguration", "Required field: BackupVaultName, is not set");
    return DeleteBackupVaultLockConfigurationOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup-vaults/");
  uri.AddPathSegment(request.GetBackupVaultName());
  uri.AddPathSegments("/vault-lock");
  return DeleteBackupVaultLockConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteBackupVaultLockConfigurationOutcomeCallable BackupClient::DeleteBackupVaultLockConfigurationCallable(const DeleteBackupVaultLockConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBackupVaultLockConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBackupVaultLockConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::DeleteBackupVaultLockConfigurationAsync(const DeleteBackupVaultLockConfigurationRequest& request, const DeleteBackupVaultLockConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteBackupVaultLockConfigurationAsyncHelper( request, handler, context ); } );
}

void BackupClient::DeleteBackupVaultLockConfigurationAsyncHelper(const DeleteBackupVaultLockConfigurationRequest& request, const DeleteBackupVaultLockConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteBackupVaultLockConfiguration(request), context);
}

DeleteBackupVaultNotificationsOutcome BackupClient::DeleteBackupVaultNotifications(const DeleteBackupVaultNotificationsRequest& request) const
{
  if (!request.BackupVaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBackupVaultNotifications", "Required field: BackupVaultName, is not set");
    return DeleteBackupVaultNotificationsOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup-vaults/");
  uri.AddPathSegment(request.GetBackupVaultName());
  uri.AddPathSegments("/notification-configuration");
  return DeleteBackupVaultNotificationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteBackupVaultNotificationsOutcomeCallable BackupClient::DeleteBackupVaultNotificationsCallable(const DeleteBackupVaultNotificationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBackupVaultNotificationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBackupVaultNotifications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::DeleteBackupVaultNotificationsAsync(const DeleteBackupVaultNotificationsRequest& request, const DeleteBackupVaultNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteBackupVaultNotificationsAsyncHelper( request, handler, context ); } );
}

void BackupClient::DeleteBackupVaultNotificationsAsyncHelper(const DeleteBackupVaultNotificationsRequest& request, const DeleteBackupVaultNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteBackupVaultNotifications(request), context);
}

DeleteFrameworkOutcome BackupClient::DeleteFramework(const DeleteFrameworkRequest& request) const
{
  if (!request.FrameworkNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFramework", "Required field: FrameworkName, is not set");
    return DeleteFrameworkOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FrameworkName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/audit/frameworks/");
  uri.AddPathSegment(request.GetFrameworkName());
  return DeleteFrameworkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteFrameworkOutcomeCallable BackupClient::DeleteFrameworkCallable(const DeleteFrameworkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFrameworkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFramework(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::DeleteFrameworkAsync(const DeleteFrameworkRequest& request, const DeleteFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteFrameworkAsyncHelper( request, handler, context ); } );
}

void BackupClient::DeleteFrameworkAsyncHelper(const DeleteFrameworkRequest& request, const DeleteFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteFramework(request), context);
}

DeleteRecoveryPointOutcome BackupClient::DeleteRecoveryPoint(const DeleteRecoveryPointRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup-vaults/");
  uri.AddPathSegment(request.GetBackupVaultName());
  uri.AddPathSegments("/recovery-points/");
  uri.AddPathSegment(request.GetRecoveryPointArn());
  return DeleteRecoveryPointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteRecoveryPointOutcomeCallable BackupClient::DeleteRecoveryPointCallable(const DeleteRecoveryPointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRecoveryPointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRecoveryPoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::DeleteRecoveryPointAsync(const DeleteRecoveryPointRequest& request, const DeleteRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRecoveryPointAsyncHelper( request, handler, context ); } );
}

void BackupClient::DeleteRecoveryPointAsyncHelper(const DeleteRecoveryPointRequest& request, const DeleteRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRecoveryPoint(request), context);
}

DeleteReportPlanOutcome BackupClient::DeleteReportPlan(const DeleteReportPlanRequest& request) const
{
  if (!request.ReportPlanNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteReportPlan", "Required field: ReportPlanName, is not set");
    return DeleteReportPlanOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReportPlanName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/audit/report-plans/");
  uri.AddPathSegment(request.GetReportPlanName());
  return DeleteReportPlanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteReportPlanOutcomeCallable BackupClient::DeleteReportPlanCallable(const DeleteReportPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteReportPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteReportPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::DeleteReportPlanAsync(const DeleteReportPlanRequest& request, const DeleteReportPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteReportPlanAsyncHelper( request, handler, context ); } );
}

void BackupClient::DeleteReportPlanAsyncHelper(const DeleteReportPlanRequest& request, const DeleteReportPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteReportPlan(request), context);
}

DescribeBackupJobOutcome BackupClient::DescribeBackupJob(const DescribeBackupJobRequest& request) const
{
  if (!request.BackupJobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeBackupJob", "Required field: BackupJobId, is not set");
    return DescribeBackupJobOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupJobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup-jobs/");
  uri.AddPathSegment(request.GetBackupJobId());
  return DescribeBackupJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeBackupJobOutcomeCallable BackupClient::DescribeBackupJobCallable(const DescribeBackupJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeBackupJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeBackupJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::DescribeBackupJobAsync(const DescribeBackupJobRequest& request, const DescribeBackupJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeBackupJobAsyncHelper( request, handler, context ); } );
}

void BackupClient::DescribeBackupJobAsyncHelper(const DescribeBackupJobRequest& request, const DescribeBackupJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeBackupJob(request), context);
}

DescribeBackupVaultOutcome BackupClient::DescribeBackupVault(const DescribeBackupVaultRequest& request) const
{
  if (!request.BackupVaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeBackupVault", "Required field: BackupVaultName, is not set");
    return DescribeBackupVaultOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup-vaults/");
  uri.AddPathSegment(request.GetBackupVaultName());
  return DescribeBackupVaultOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeBackupVaultOutcomeCallable BackupClient::DescribeBackupVaultCallable(const DescribeBackupVaultRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeBackupVaultOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeBackupVault(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::DescribeBackupVaultAsync(const DescribeBackupVaultRequest& request, const DescribeBackupVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeBackupVaultAsyncHelper( request, handler, context ); } );
}

void BackupClient::DescribeBackupVaultAsyncHelper(const DescribeBackupVaultRequest& request, const DescribeBackupVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeBackupVault(request), context);
}

DescribeCopyJobOutcome BackupClient::DescribeCopyJob(const DescribeCopyJobRequest& request) const
{
  if (!request.CopyJobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeCopyJob", "Required field: CopyJobId, is not set");
    return DescribeCopyJobOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CopyJobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/copy-jobs/");
  uri.AddPathSegment(request.GetCopyJobId());
  return DescribeCopyJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeCopyJobOutcomeCallable BackupClient::DescribeCopyJobCallable(const DescribeCopyJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCopyJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCopyJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::DescribeCopyJobAsync(const DescribeCopyJobRequest& request, const DescribeCopyJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCopyJobAsyncHelper( request, handler, context ); } );
}

void BackupClient::DescribeCopyJobAsyncHelper(const DescribeCopyJobRequest& request, const DescribeCopyJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCopyJob(request), context);
}

DescribeFrameworkOutcome BackupClient::DescribeFramework(const DescribeFrameworkRequest& request) const
{
  if (!request.FrameworkNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeFramework", "Required field: FrameworkName, is not set");
    return DescribeFrameworkOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FrameworkName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/audit/frameworks/");
  uri.AddPathSegment(request.GetFrameworkName());
  return DescribeFrameworkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeFrameworkOutcomeCallable BackupClient::DescribeFrameworkCallable(const DescribeFrameworkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeFrameworkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeFramework(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::DescribeFrameworkAsync(const DescribeFrameworkRequest& request, const DescribeFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeFrameworkAsyncHelper( request, handler, context ); } );
}

void BackupClient::DescribeFrameworkAsyncHelper(const DescribeFrameworkRequest& request, const DescribeFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeFramework(request), context);
}

DescribeGlobalSettingsOutcome BackupClient::DescribeGlobalSettings(const DescribeGlobalSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-settings");
  return DescribeGlobalSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeGlobalSettingsOutcomeCallable BackupClient::DescribeGlobalSettingsCallable(const DescribeGlobalSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeGlobalSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeGlobalSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::DescribeGlobalSettingsAsync(const DescribeGlobalSettingsRequest& request, const DescribeGlobalSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeGlobalSettingsAsyncHelper( request, handler, context ); } );
}

void BackupClient::DescribeGlobalSettingsAsyncHelper(const DescribeGlobalSettingsRequest& request, const DescribeGlobalSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeGlobalSettings(request), context);
}

DescribeProtectedResourceOutcome BackupClient::DescribeProtectedResource(const DescribeProtectedResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeProtectedResource", "Required field: ResourceArn, is not set");
    return DescribeProtectedResourceOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/resources/");
  uri.AddPathSegment(request.GetResourceArn());
  return DescribeProtectedResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeProtectedResourceOutcomeCallable BackupClient::DescribeProtectedResourceCallable(const DescribeProtectedResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeProtectedResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeProtectedResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::DescribeProtectedResourceAsync(const DescribeProtectedResourceRequest& request, const DescribeProtectedResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeProtectedResourceAsyncHelper( request, handler, context ); } );
}

void BackupClient::DescribeProtectedResourceAsyncHelper(const DescribeProtectedResourceRequest& request, const DescribeProtectedResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeProtectedResource(request), context);
}

DescribeRecoveryPointOutcome BackupClient::DescribeRecoveryPoint(const DescribeRecoveryPointRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup-vaults/");
  uri.AddPathSegment(request.GetBackupVaultName());
  uri.AddPathSegments("/recovery-points/");
  uri.AddPathSegment(request.GetRecoveryPointArn());
  return DescribeRecoveryPointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeRecoveryPointOutcomeCallable BackupClient::DescribeRecoveryPointCallable(const DescribeRecoveryPointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRecoveryPointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRecoveryPoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::DescribeRecoveryPointAsync(const DescribeRecoveryPointRequest& request, const DescribeRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeRecoveryPointAsyncHelper( request, handler, context ); } );
}

void BackupClient::DescribeRecoveryPointAsyncHelper(const DescribeRecoveryPointRequest& request, const DescribeRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRecoveryPoint(request), context);
}

DescribeRegionSettingsOutcome BackupClient::DescribeRegionSettings(const DescribeRegionSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/account-settings");
  return DescribeRegionSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeRegionSettingsOutcomeCallable BackupClient::DescribeRegionSettingsCallable(const DescribeRegionSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRegionSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRegionSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::DescribeRegionSettingsAsync(const DescribeRegionSettingsRequest& request, const DescribeRegionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeRegionSettingsAsyncHelper( request, handler, context ); } );
}

void BackupClient::DescribeRegionSettingsAsyncHelper(const DescribeRegionSettingsRequest& request, const DescribeRegionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRegionSettings(request), context);
}

DescribeReportJobOutcome BackupClient::DescribeReportJob(const DescribeReportJobRequest& request) const
{
  if (!request.ReportJobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeReportJob", "Required field: ReportJobId, is not set");
    return DescribeReportJobOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReportJobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/audit/report-jobs/");
  uri.AddPathSegment(request.GetReportJobId());
  return DescribeReportJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeReportJobOutcomeCallable BackupClient::DescribeReportJobCallable(const DescribeReportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::DescribeReportJobAsync(const DescribeReportJobRequest& request, const DescribeReportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeReportJobAsyncHelper( request, handler, context ); } );
}

void BackupClient::DescribeReportJobAsyncHelper(const DescribeReportJobRequest& request, const DescribeReportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeReportJob(request), context);
}

DescribeReportPlanOutcome BackupClient::DescribeReportPlan(const DescribeReportPlanRequest& request) const
{
  if (!request.ReportPlanNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeReportPlan", "Required field: ReportPlanName, is not set");
    return DescribeReportPlanOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReportPlanName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/audit/report-plans/");
  uri.AddPathSegment(request.GetReportPlanName());
  return DescribeReportPlanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeReportPlanOutcomeCallable BackupClient::DescribeReportPlanCallable(const DescribeReportPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeReportPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeReportPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::DescribeReportPlanAsync(const DescribeReportPlanRequest& request, const DescribeReportPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeReportPlanAsyncHelper( request, handler, context ); } );
}

void BackupClient::DescribeReportPlanAsyncHelper(const DescribeReportPlanRequest& request, const DescribeReportPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeReportPlan(request), context);
}

DescribeRestoreJobOutcome BackupClient::DescribeRestoreJob(const DescribeRestoreJobRequest& request) const
{
  if (!request.RestoreJobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeRestoreJob", "Required field: RestoreJobId, is not set");
    return DescribeRestoreJobOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestoreJobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restore-jobs/");
  uri.AddPathSegment(request.GetRestoreJobId());
  return DescribeRestoreJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeRestoreJobOutcomeCallable BackupClient::DescribeRestoreJobCallable(const DescribeRestoreJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRestoreJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRestoreJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::DescribeRestoreJobAsync(const DescribeRestoreJobRequest& request, const DescribeRestoreJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeRestoreJobAsyncHelper( request, handler, context ); } );
}

void BackupClient::DescribeRestoreJobAsyncHelper(const DescribeRestoreJobRequest& request, const DescribeRestoreJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRestoreJob(request), context);
}

DisassociateRecoveryPointOutcome BackupClient::DisassociateRecoveryPoint(const DisassociateRecoveryPointRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup-vaults/");
  uri.AddPathSegment(request.GetBackupVaultName());
  uri.AddPathSegments("/recovery-points/");
  uri.AddPathSegment(request.GetRecoveryPointArn());
  uri.AddPathSegments("/disassociate");
  return DisassociateRecoveryPointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DisassociateRecoveryPointOutcomeCallable BackupClient::DisassociateRecoveryPointCallable(const DisassociateRecoveryPointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateRecoveryPointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateRecoveryPoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::DisassociateRecoveryPointAsync(const DisassociateRecoveryPointRequest& request, const DisassociateRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateRecoveryPointAsyncHelper( request, handler, context ); } );
}

void BackupClient::DisassociateRecoveryPointAsyncHelper(const DisassociateRecoveryPointRequest& request, const DisassociateRecoveryPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateRecoveryPoint(request), context);
}

ExportBackupPlanTemplateOutcome BackupClient::ExportBackupPlanTemplate(const ExportBackupPlanTemplateRequest& request) const
{
  if (!request.BackupPlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ExportBackupPlanTemplate", "Required field: BackupPlanId, is not set");
    return ExportBackupPlanTemplateOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupPlanId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup/plans/");
  uri.AddPathSegment(request.GetBackupPlanId());
  uri.AddPathSegments("/toTemplate/");
  return ExportBackupPlanTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ExportBackupPlanTemplateOutcomeCallable BackupClient::ExportBackupPlanTemplateCallable(const ExportBackupPlanTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExportBackupPlanTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExportBackupPlanTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::ExportBackupPlanTemplateAsync(const ExportBackupPlanTemplateRequest& request, const ExportBackupPlanTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ExportBackupPlanTemplateAsyncHelper( request, handler, context ); } );
}

void BackupClient::ExportBackupPlanTemplateAsyncHelper(const ExportBackupPlanTemplateRequest& request, const ExportBackupPlanTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ExportBackupPlanTemplate(request), context);
}

GetBackupPlanOutcome BackupClient::GetBackupPlan(const GetBackupPlanRequest& request) const
{
  if (!request.BackupPlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBackupPlan", "Required field: BackupPlanId, is not set");
    return GetBackupPlanOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupPlanId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup/plans/");
  uri.AddPathSegment(request.GetBackupPlanId());
  return GetBackupPlanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetBackupPlanOutcomeCallable BackupClient::GetBackupPlanCallable(const GetBackupPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBackupPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBackupPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::GetBackupPlanAsync(const GetBackupPlanRequest& request, const GetBackupPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetBackupPlanAsyncHelper( request, handler, context ); } );
}

void BackupClient::GetBackupPlanAsyncHelper(const GetBackupPlanRequest& request, const GetBackupPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBackupPlan(request), context);
}

GetBackupPlanFromJSONOutcome BackupClient::GetBackupPlanFromJSON(const GetBackupPlanFromJSONRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup/template/json/toPlan");
  return GetBackupPlanFromJSONOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBackupPlanFromJSONOutcomeCallable BackupClient::GetBackupPlanFromJSONCallable(const GetBackupPlanFromJSONRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBackupPlanFromJSONOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBackupPlanFromJSON(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::GetBackupPlanFromJSONAsync(const GetBackupPlanFromJSONRequest& request, const GetBackupPlanFromJSONResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetBackupPlanFromJSONAsyncHelper( request, handler, context ); } );
}

void BackupClient::GetBackupPlanFromJSONAsyncHelper(const GetBackupPlanFromJSONRequest& request, const GetBackupPlanFromJSONResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBackupPlanFromJSON(request), context);
}

GetBackupPlanFromTemplateOutcome BackupClient::GetBackupPlanFromTemplate(const GetBackupPlanFromTemplateRequest& request) const
{
  if (!request.BackupPlanTemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBackupPlanFromTemplate", "Required field: BackupPlanTemplateId, is not set");
    return GetBackupPlanFromTemplateOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupPlanTemplateId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup/template/plans/");
  uri.AddPathSegment(request.GetBackupPlanTemplateId());
  uri.AddPathSegments("/toPlan");
  return GetBackupPlanFromTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetBackupPlanFromTemplateOutcomeCallable BackupClient::GetBackupPlanFromTemplateCallable(const GetBackupPlanFromTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBackupPlanFromTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBackupPlanFromTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::GetBackupPlanFromTemplateAsync(const GetBackupPlanFromTemplateRequest& request, const GetBackupPlanFromTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetBackupPlanFromTemplateAsyncHelper( request, handler, context ); } );
}

void BackupClient::GetBackupPlanFromTemplateAsyncHelper(const GetBackupPlanFromTemplateRequest& request, const GetBackupPlanFromTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBackupPlanFromTemplate(request), context);
}

GetBackupSelectionOutcome BackupClient::GetBackupSelection(const GetBackupSelectionRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup/plans/");
  uri.AddPathSegment(request.GetBackupPlanId());
  uri.AddPathSegments("/selections/");
  uri.AddPathSegment(request.GetSelectionId());
  return GetBackupSelectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetBackupSelectionOutcomeCallable BackupClient::GetBackupSelectionCallable(const GetBackupSelectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBackupSelectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBackupSelection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::GetBackupSelectionAsync(const GetBackupSelectionRequest& request, const GetBackupSelectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetBackupSelectionAsyncHelper( request, handler, context ); } );
}

void BackupClient::GetBackupSelectionAsyncHelper(const GetBackupSelectionRequest& request, const GetBackupSelectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBackupSelection(request), context);
}

GetBackupVaultAccessPolicyOutcome BackupClient::GetBackupVaultAccessPolicy(const GetBackupVaultAccessPolicyRequest& request) const
{
  if (!request.BackupVaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBackupVaultAccessPolicy", "Required field: BackupVaultName, is not set");
    return GetBackupVaultAccessPolicyOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup-vaults/");
  uri.AddPathSegment(request.GetBackupVaultName());
  uri.AddPathSegments("/access-policy");
  return GetBackupVaultAccessPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetBackupVaultAccessPolicyOutcomeCallable BackupClient::GetBackupVaultAccessPolicyCallable(const GetBackupVaultAccessPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBackupVaultAccessPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBackupVaultAccessPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::GetBackupVaultAccessPolicyAsync(const GetBackupVaultAccessPolicyRequest& request, const GetBackupVaultAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetBackupVaultAccessPolicyAsyncHelper( request, handler, context ); } );
}

void BackupClient::GetBackupVaultAccessPolicyAsyncHelper(const GetBackupVaultAccessPolicyRequest& request, const GetBackupVaultAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBackupVaultAccessPolicy(request), context);
}

GetBackupVaultNotificationsOutcome BackupClient::GetBackupVaultNotifications(const GetBackupVaultNotificationsRequest& request) const
{
  if (!request.BackupVaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBackupVaultNotifications", "Required field: BackupVaultName, is not set");
    return GetBackupVaultNotificationsOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup-vaults/");
  uri.AddPathSegment(request.GetBackupVaultName());
  uri.AddPathSegments("/notification-configuration");
  return GetBackupVaultNotificationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetBackupVaultNotificationsOutcomeCallable BackupClient::GetBackupVaultNotificationsCallable(const GetBackupVaultNotificationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBackupVaultNotificationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBackupVaultNotifications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::GetBackupVaultNotificationsAsync(const GetBackupVaultNotificationsRequest& request, const GetBackupVaultNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetBackupVaultNotificationsAsyncHelper( request, handler, context ); } );
}

void BackupClient::GetBackupVaultNotificationsAsyncHelper(const GetBackupVaultNotificationsRequest& request, const GetBackupVaultNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBackupVaultNotifications(request), context);
}

GetRecoveryPointRestoreMetadataOutcome BackupClient::GetRecoveryPointRestoreMetadata(const GetRecoveryPointRestoreMetadataRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup-vaults/");
  uri.AddPathSegment(request.GetBackupVaultName());
  uri.AddPathSegments("/recovery-points/");
  uri.AddPathSegment(request.GetRecoveryPointArn());
  uri.AddPathSegments("/restore-metadata");
  return GetRecoveryPointRestoreMetadataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetRecoveryPointRestoreMetadataOutcomeCallable BackupClient::GetRecoveryPointRestoreMetadataCallable(const GetRecoveryPointRestoreMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRecoveryPointRestoreMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRecoveryPointRestoreMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::GetRecoveryPointRestoreMetadataAsync(const GetRecoveryPointRestoreMetadataRequest& request, const GetRecoveryPointRestoreMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRecoveryPointRestoreMetadataAsyncHelper( request, handler, context ); } );
}

void BackupClient::GetRecoveryPointRestoreMetadataAsyncHelper(const GetRecoveryPointRestoreMetadataRequest& request, const GetRecoveryPointRestoreMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRecoveryPointRestoreMetadata(request), context);
}

GetSupportedResourceTypesOutcome BackupClient::GetSupportedResourceTypes() const
{
  Aws::StringStream ss;
  ss << m_uri << "/supported-resource-types";
  return GetSupportedResourceTypesOutcome(MakeRequest(ss.str(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, "GetSupportedResourceTypes"));
}

GetSupportedResourceTypesOutcomeCallable BackupClient::GetSupportedResourceTypesCallable() const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSupportedResourceTypesOutcome() > >(ALLOCATION_TAG, [this](){ return this->GetSupportedResourceTypes(); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::GetSupportedResourceTypesAsync(const GetSupportedResourceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, handler, context](){ this->GetSupportedResourceTypesAsyncHelper( handler, context ); } );
}

void BackupClient::GetSupportedResourceTypesAsyncHelper(const GetSupportedResourceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, GetSupportedResourceTypes(), context);
}

ListBackupJobsOutcome BackupClient::ListBackupJobs(const ListBackupJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup-jobs/");
  return ListBackupJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListBackupJobsOutcomeCallable BackupClient::ListBackupJobsCallable(const ListBackupJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBackupJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBackupJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::ListBackupJobsAsync(const ListBackupJobsRequest& request, const ListBackupJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListBackupJobsAsyncHelper( request, handler, context ); } );
}

void BackupClient::ListBackupJobsAsyncHelper(const ListBackupJobsRequest& request, const ListBackupJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListBackupJobs(request), context);
}

ListBackupPlanTemplatesOutcome BackupClient::ListBackupPlanTemplates(const ListBackupPlanTemplatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup/template/plans");
  return ListBackupPlanTemplatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListBackupPlanTemplatesOutcomeCallable BackupClient::ListBackupPlanTemplatesCallable(const ListBackupPlanTemplatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBackupPlanTemplatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBackupPlanTemplates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::ListBackupPlanTemplatesAsync(const ListBackupPlanTemplatesRequest& request, const ListBackupPlanTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListBackupPlanTemplatesAsyncHelper( request, handler, context ); } );
}

void BackupClient::ListBackupPlanTemplatesAsyncHelper(const ListBackupPlanTemplatesRequest& request, const ListBackupPlanTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListBackupPlanTemplates(request), context);
}

ListBackupPlanVersionsOutcome BackupClient::ListBackupPlanVersions(const ListBackupPlanVersionsRequest& request) const
{
  if (!request.BackupPlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBackupPlanVersions", "Required field: BackupPlanId, is not set");
    return ListBackupPlanVersionsOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupPlanId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup/plans/");
  uri.AddPathSegment(request.GetBackupPlanId());
  uri.AddPathSegments("/versions/");
  return ListBackupPlanVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListBackupPlanVersionsOutcomeCallable BackupClient::ListBackupPlanVersionsCallable(const ListBackupPlanVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBackupPlanVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBackupPlanVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::ListBackupPlanVersionsAsync(const ListBackupPlanVersionsRequest& request, const ListBackupPlanVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListBackupPlanVersionsAsyncHelper( request, handler, context ); } );
}

void BackupClient::ListBackupPlanVersionsAsyncHelper(const ListBackupPlanVersionsRequest& request, const ListBackupPlanVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListBackupPlanVersions(request), context);
}

ListBackupPlansOutcome BackupClient::ListBackupPlans(const ListBackupPlansRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup/plans/");
  return ListBackupPlansOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListBackupPlansOutcomeCallable BackupClient::ListBackupPlansCallable(const ListBackupPlansRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBackupPlansOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBackupPlans(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::ListBackupPlansAsync(const ListBackupPlansRequest& request, const ListBackupPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListBackupPlansAsyncHelper( request, handler, context ); } );
}

void BackupClient::ListBackupPlansAsyncHelper(const ListBackupPlansRequest& request, const ListBackupPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListBackupPlans(request), context);
}

ListBackupSelectionsOutcome BackupClient::ListBackupSelections(const ListBackupSelectionsRequest& request) const
{
  if (!request.BackupPlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBackupSelections", "Required field: BackupPlanId, is not set");
    return ListBackupSelectionsOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupPlanId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup/plans/");
  uri.AddPathSegment(request.GetBackupPlanId());
  uri.AddPathSegments("/selections/");
  return ListBackupSelectionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListBackupSelectionsOutcomeCallable BackupClient::ListBackupSelectionsCallable(const ListBackupSelectionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBackupSelectionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBackupSelections(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::ListBackupSelectionsAsync(const ListBackupSelectionsRequest& request, const ListBackupSelectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListBackupSelectionsAsyncHelper( request, handler, context ); } );
}

void BackupClient::ListBackupSelectionsAsyncHelper(const ListBackupSelectionsRequest& request, const ListBackupSelectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListBackupSelections(request), context);
}

ListBackupVaultsOutcome BackupClient::ListBackupVaults(const ListBackupVaultsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup-vaults/");
  return ListBackupVaultsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListBackupVaultsOutcomeCallable BackupClient::ListBackupVaultsCallable(const ListBackupVaultsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBackupVaultsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBackupVaults(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::ListBackupVaultsAsync(const ListBackupVaultsRequest& request, const ListBackupVaultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListBackupVaultsAsyncHelper( request, handler, context ); } );
}

void BackupClient::ListBackupVaultsAsyncHelper(const ListBackupVaultsRequest& request, const ListBackupVaultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListBackupVaults(request), context);
}

ListCopyJobsOutcome BackupClient::ListCopyJobs(const ListCopyJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/copy-jobs/");
  return ListCopyJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListCopyJobsOutcomeCallable BackupClient::ListCopyJobsCallable(const ListCopyJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCopyJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCopyJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::ListCopyJobsAsync(const ListCopyJobsRequest& request, const ListCopyJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListCopyJobsAsyncHelper( request, handler, context ); } );
}

void BackupClient::ListCopyJobsAsyncHelper(const ListCopyJobsRequest& request, const ListCopyJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCopyJobs(request), context);
}

ListFrameworksOutcome BackupClient::ListFrameworks(const ListFrameworksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/audit/frameworks");
  return ListFrameworksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListFrameworksOutcomeCallable BackupClient::ListFrameworksCallable(const ListFrameworksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFrameworksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFrameworks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::ListFrameworksAsync(const ListFrameworksRequest& request, const ListFrameworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListFrameworksAsyncHelper( request, handler, context ); } );
}

void BackupClient::ListFrameworksAsyncHelper(const ListFrameworksRequest& request, const ListFrameworksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListFrameworks(request), context);
}

ListProtectedResourcesOutcome BackupClient::ListProtectedResources(const ListProtectedResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/resources/");
  return ListProtectedResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListProtectedResourcesOutcomeCallable BackupClient::ListProtectedResourcesCallable(const ListProtectedResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProtectedResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProtectedResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::ListProtectedResourcesAsync(const ListProtectedResourcesRequest& request, const ListProtectedResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListProtectedResourcesAsyncHelper( request, handler, context ); } );
}

void BackupClient::ListProtectedResourcesAsyncHelper(const ListProtectedResourcesRequest& request, const ListProtectedResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListProtectedResources(request), context);
}

ListRecoveryPointsByBackupVaultOutcome BackupClient::ListRecoveryPointsByBackupVault(const ListRecoveryPointsByBackupVaultRequest& request) const
{
  if (!request.BackupVaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRecoveryPointsByBackupVault", "Required field: BackupVaultName, is not set");
    return ListRecoveryPointsByBackupVaultOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup-vaults/");
  uri.AddPathSegment(request.GetBackupVaultName());
  uri.AddPathSegments("/recovery-points/");
  return ListRecoveryPointsByBackupVaultOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListRecoveryPointsByBackupVaultOutcomeCallable BackupClient::ListRecoveryPointsByBackupVaultCallable(const ListRecoveryPointsByBackupVaultRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRecoveryPointsByBackupVaultOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRecoveryPointsByBackupVault(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::ListRecoveryPointsByBackupVaultAsync(const ListRecoveryPointsByBackupVaultRequest& request, const ListRecoveryPointsByBackupVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRecoveryPointsByBackupVaultAsyncHelper( request, handler, context ); } );
}

void BackupClient::ListRecoveryPointsByBackupVaultAsyncHelper(const ListRecoveryPointsByBackupVaultRequest& request, const ListRecoveryPointsByBackupVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRecoveryPointsByBackupVault(request), context);
}

ListRecoveryPointsByResourceOutcome BackupClient::ListRecoveryPointsByResource(const ListRecoveryPointsByResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRecoveryPointsByResource", "Required field: ResourceArn, is not set");
    return ListRecoveryPointsByResourceOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/resources/");
  uri.AddPathSegment(request.GetResourceArn());
  uri.AddPathSegments("/recovery-points/");
  return ListRecoveryPointsByResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListRecoveryPointsByResourceOutcomeCallable BackupClient::ListRecoveryPointsByResourceCallable(const ListRecoveryPointsByResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRecoveryPointsByResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRecoveryPointsByResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::ListRecoveryPointsByResourceAsync(const ListRecoveryPointsByResourceRequest& request, const ListRecoveryPointsByResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRecoveryPointsByResourceAsyncHelper( request, handler, context ); } );
}

void BackupClient::ListRecoveryPointsByResourceAsyncHelper(const ListRecoveryPointsByResourceRequest& request, const ListRecoveryPointsByResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRecoveryPointsByResource(request), context);
}

ListReportJobsOutcome BackupClient::ListReportJobs(const ListReportJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/audit/report-jobs");
  return ListReportJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListReportJobsOutcomeCallable BackupClient::ListReportJobsCallable(const ListReportJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListReportJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListReportJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::ListReportJobsAsync(const ListReportJobsRequest& request, const ListReportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListReportJobsAsyncHelper( request, handler, context ); } );
}

void BackupClient::ListReportJobsAsyncHelper(const ListReportJobsRequest& request, const ListReportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListReportJobs(request), context);
}

ListReportPlansOutcome BackupClient::ListReportPlans(const ListReportPlansRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/audit/report-plans");
  return ListReportPlansOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListReportPlansOutcomeCallable BackupClient::ListReportPlansCallable(const ListReportPlansRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListReportPlansOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListReportPlans(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::ListReportPlansAsync(const ListReportPlansRequest& request, const ListReportPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListReportPlansAsyncHelper( request, handler, context ); } );
}

void BackupClient::ListReportPlansAsyncHelper(const ListReportPlansRequest& request, const ListReportPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListReportPlans(request), context);
}

ListRestoreJobsOutcome BackupClient::ListRestoreJobs(const ListRestoreJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restore-jobs/");
  return ListRestoreJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListRestoreJobsOutcomeCallable BackupClient::ListRestoreJobsCallable(const ListRestoreJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRestoreJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRestoreJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::ListRestoreJobsAsync(const ListRestoreJobsRequest& request, const ListRestoreJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRestoreJobsAsyncHelper( request, handler, context ); } );
}

void BackupClient::ListRestoreJobsAsyncHelper(const ListRestoreJobsRequest& request, const ListRestoreJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRestoreJobs(request), context);
}

ListTagsOutcome BackupClient::ListTags(const ListTagsRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTags", "Required field: ResourceArn, is not set");
    return ListTagsOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsOutcomeCallable BackupClient::ListTagsCallable(const ListTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::ListTagsAsync(const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsAsyncHelper( request, handler, context ); } );
}

void BackupClient::ListTagsAsyncHelper(const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTags(request), context);
}

PutBackupVaultAccessPolicyOutcome BackupClient::PutBackupVaultAccessPolicy(const PutBackupVaultAccessPolicyRequest& request) const
{
  if (!request.BackupVaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBackupVaultAccessPolicy", "Required field: BackupVaultName, is not set");
    return PutBackupVaultAccessPolicyOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup-vaults/");
  uri.AddPathSegment(request.GetBackupVaultName());
  uri.AddPathSegments("/access-policy");
  return PutBackupVaultAccessPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutBackupVaultAccessPolicyOutcomeCallable BackupClient::PutBackupVaultAccessPolicyCallable(const PutBackupVaultAccessPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBackupVaultAccessPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBackupVaultAccessPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::PutBackupVaultAccessPolicyAsync(const PutBackupVaultAccessPolicyRequest& request, const PutBackupVaultAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutBackupVaultAccessPolicyAsyncHelper( request, handler, context ); } );
}

void BackupClient::PutBackupVaultAccessPolicyAsyncHelper(const PutBackupVaultAccessPolicyRequest& request, const PutBackupVaultAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutBackupVaultAccessPolicy(request), context);
}

PutBackupVaultLockConfigurationOutcome BackupClient::PutBackupVaultLockConfiguration(const PutBackupVaultLockConfigurationRequest& request) const
{
  if (!request.BackupVaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBackupVaultLockConfiguration", "Required field: BackupVaultName, is not set");
    return PutBackupVaultLockConfigurationOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup-vaults/");
  uri.AddPathSegment(request.GetBackupVaultName());
  uri.AddPathSegments("/vault-lock");
  return PutBackupVaultLockConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutBackupVaultLockConfigurationOutcomeCallable BackupClient::PutBackupVaultLockConfigurationCallable(const PutBackupVaultLockConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBackupVaultLockConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBackupVaultLockConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::PutBackupVaultLockConfigurationAsync(const PutBackupVaultLockConfigurationRequest& request, const PutBackupVaultLockConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutBackupVaultLockConfigurationAsyncHelper( request, handler, context ); } );
}

void BackupClient::PutBackupVaultLockConfigurationAsyncHelper(const PutBackupVaultLockConfigurationRequest& request, const PutBackupVaultLockConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutBackupVaultLockConfiguration(request), context);
}

PutBackupVaultNotificationsOutcome BackupClient::PutBackupVaultNotifications(const PutBackupVaultNotificationsRequest& request) const
{
  if (!request.BackupVaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBackupVaultNotifications", "Required field: BackupVaultName, is not set");
    return PutBackupVaultNotificationsOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup-vaults/");
  uri.AddPathSegment(request.GetBackupVaultName());
  uri.AddPathSegments("/notification-configuration");
  return PutBackupVaultNotificationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutBackupVaultNotificationsOutcomeCallable BackupClient::PutBackupVaultNotificationsCallable(const PutBackupVaultNotificationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutBackupVaultNotificationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutBackupVaultNotifications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::PutBackupVaultNotificationsAsync(const PutBackupVaultNotificationsRequest& request, const PutBackupVaultNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutBackupVaultNotificationsAsyncHelper( request, handler, context ); } );
}

void BackupClient::PutBackupVaultNotificationsAsyncHelper(const PutBackupVaultNotificationsRequest& request, const PutBackupVaultNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutBackupVaultNotifications(request), context);
}

StartBackupJobOutcome BackupClient::StartBackupJob(const StartBackupJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup-jobs");
  return StartBackupJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

StartBackupJobOutcomeCallable BackupClient::StartBackupJobCallable(const StartBackupJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartBackupJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartBackupJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::StartBackupJobAsync(const StartBackupJobRequest& request, const StartBackupJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartBackupJobAsyncHelper( request, handler, context ); } );
}

void BackupClient::StartBackupJobAsyncHelper(const StartBackupJobRequest& request, const StartBackupJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartBackupJob(request), context);
}

StartCopyJobOutcome BackupClient::StartCopyJob(const StartCopyJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/copy-jobs");
  return StartCopyJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

StartCopyJobOutcomeCallable BackupClient::StartCopyJobCallable(const StartCopyJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartCopyJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartCopyJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::StartCopyJobAsync(const StartCopyJobRequest& request, const StartCopyJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartCopyJobAsyncHelper( request, handler, context ); } );
}

void BackupClient::StartCopyJobAsyncHelper(const StartCopyJobRequest& request, const StartCopyJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartCopyJob(request), context);
}

StartReportJobOutcome BackupClient::StartReportJob(const StartReportJobRequest& request) const
{
  if (!request.ReportPlanNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartReportJob", "Required field: ReportPlanName, is not set");
    return StartReportJobOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReportPlanName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/audit/report-jobs/");
  uri.AddPathSegment(request.GetReportPlanName());
  return StartReportJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartReportJobOutcomeCallable BackupClient::StartReportJobCallable(const StartReportJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartReportJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartReportJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::StartReportJobAsync(const StartReportJobRequest& request, const StartReportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartReportJobAsyncHelper( request, handler, context ); } );
}

void BackupClient::StartReportJobAsyncHelper(const StartReportJobRequest& request, const StartReportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartReportJob(request), context);
}

StartRestoreJobOutcome BackupClient::StartRestoreJob(const StartRestoreJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restore-jobs");
  return StartRestoreJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

StartRestoreJobOutcomeCallable BackupClient::StartRestoreJobCallable(const StartRestoreJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartRestoreJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartRestoreJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::StartRestoreJobAsync(const StartRestoreJobRequest& request, const StartRestoreJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartRestoreJobAsyncHelper( request, handler, context ); } );
}

void BackupClient::StartRestoreJobAsyncHelper(const StartRestoreJobRequest& request, const StartRestoreJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartRestoreJob(request), context);
}

StopBackupJobOutcome BackupClient::StopBackupJob(const StopBackupJobRequest& request) const
{
  if (!request.BackupJobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopBackupJob", "Required field: BackupJobId, is not set");
    return StopBackupJobOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupJobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup-jobs/");
  uri.AddPathSegment(request.GetBackupJobId());
  return StopBackupJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopBackupJobOutcomeCallable BackupClient::StopBackupJobCallable(const StopBackupJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopBackupJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopBackupJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::StopBackupJobAsync(const StopBackupJobRequest& request, const StopBackupJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopBackupJobAsyncHelper( request, handler, context ); } );
}

void BackupClient::StopBackupJobAsyncHelper(const StopBackupJobRequest& request, const StopBackupJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopBackupJob(request), context);
}

TagResourceOutcome BackupClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable BackupClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void BackupClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome BackupClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/untag/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable BackupClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void BackupClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateBackupPlanOutcome BackupClient::UpdateBackupPlan(const UpdateBackupPlanRequest& request) const
{
  if (!request.BackupPlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBackupPlan", "Required field: BackupPlanId, is not set");
    return UpdateBackupPlanOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupPlanId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup/plans/");
  uri.AddPathSegment(request.GetBackupPlanId());
  return UpdateBackupPlanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateBackupPlanOutcomeCallable BackupClient::UpdateBackupPlanCallable(const UpdateBackupPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBackupPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBackupPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::UpdateBackupPlanAsync(const UpdateBackupPlanRequest& request, const UpdateBackupPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateBackupPlanAsyncHelper( request, handler, context ); } );
}

void BackupClient::UpdateBackupPlanAsyncHelper(const UpdateBackupPlanRequest& request, const UpdateBackupPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateBackupPlan(request), context);
}

UpdateFrameworkOutcome BackupClient::UpdateFramework(const UpdateFrameworkRequest& request) const
{
  if (!request.FrameworkNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFramework", "Required field: FrameworkName, is not set");
    return UpdateFrameworkOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FrameworkName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/audit/frameworks/");
  uri.AddPathSegment(request.GetFrameworkName());
  return UpdateFrameworkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateFrameworkOutcomeCallable BackupClient::UpdateFrameworkCallable(const UpdateFrameworkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFrameworkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFramework(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::UpdateFrameworkAsync(const UpdateFrameworkRequest& request, const UpdateFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateFrameworkAsyncHelper( request, handler, context ); } );
}

void BackupClient::UpdateFrameworkAsyncHelper(const UpdateFrameworkRequest& request, const UpdateFrameworkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateFramework(request), context);
}

UpdateGlobalSettingsOutcome BackupClient::UpdateGlobalSettings(const UpdateGlobalSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/global-settings");
  return UpdateGlobalSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateGlobalSettingsOutcomeCallable BackupClient::UpdateGlobalSettingsCallable(const UpdateGlobalSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGlobalSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGlobalSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::UpdateGlobalSettingsAsync(const UpdateGlobalSettingsRequest& request, const UpdateGlobalSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateGlobalSettingsAsyncHelper( request, handler, context ); } );
}

void BackupClient::UpdateGlobalSettingsAsyncHelper(const UpdateGlobalSettingsRequest& request, const UpdateGlobalSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateGlobalSettings(request), context);
}

UpdateRecoveryPointLifecycleOutcome BackupClient::UpdateRecoveryPointLifecycle(const UpdateRecoveryPointLifecycleRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backup-vaults/");
  uri.AddPathSegment(request.GetBackupVaultName());
  uri.AddPathSegments("/recovery-points/");
  uri.AddPathSegment(request.GetRecoveryPointArn());
  return UpdateRecoveryPointLifecycleOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateRecoveryPointLifecycleOutcomeCallable BackupClient::UpdateRecoveryPointLifecycleCallable(const UpdateRecoveryPointLifecycleRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRecoveryPointLifecycleOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRecoveryPointLifecycle(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::UpdateRecoveryPointLifecycleAsync(const UpdateRecoveryPointLifecycleRequest& request, const UpdateRecoveryPointLifecycleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRecoveryPointLifecycleAsyncHelper( request, handler, context ); } );
}

void BackupClient::UpdateRecoveryPointLifecycleAsyncHelper(const UpdateRecoveryPointLifecycleRequest& request, const UpdateRecoveryPointLifecycleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRecoveryPointLifecycle(request), context);
}

UpdateRegionSettingsOutcome BackupClient::UpdateRegionSettings(const UpdateRegionSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/account-settings");
  return UpdateRegionSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateRegionSettingsOutcomeCallable BackupClient::UpdateRegionSettingsCallable(const UpdateRegionSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRegionSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRegionSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::UpdateRegionSettingsAsync(const UpdateRegionSettingsRequest& request, const UpdateRegionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRegionSettingsAsyncHelper( request, handler, context ); } );
}

void BackupClient::UpdateRegionSettingsAsyncHelper(const UpdateRegionSettingsRequest& request, const UpdateRegionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRegionSettings(request), context);
}

UpdateReportPlanOutcome BackupClient::UpdateReportPlan(const UpdateReportPlanRequest& request) const
{
  if (!request.ReportPlanNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateReportPlan", "Required field: ReportPlanName, is not set");
    return UpdateReportPlanOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ReportPlanName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/audit/report-plans/");
  uri.AddPathSegment(request.GetReportPlanName());
  return UpdateReportPlanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateReportPlanOutcomeCallable BackupClient::UpdateReportPlanCallable(const UpdateReportPlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateReportPlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateReportPlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void BackupClient::UpdateReportPlanAsync(const UpdateReportPlanRequest& request, const UpdateReportPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateReportPlanAsyncHelper( request, handler, context ); } );
}

void BackupClient::UpdateReportPlanAsyncHelper(const UpdateReportPlanRequest& request, const UpdateReportPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateReportPlan(request), context);
}

