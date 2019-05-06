/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
#include <aws/backup/model/DeleteBackupPlanRequest.h>
#include <aws/backup/model/DeleteBackupSelectionRequest.h>
#include <aws/backup/model/DeleteBackupVaultRequest.h>
#include <aws/backup/model/DeleteBackupVaultAccessPolicyRequest.h>
#include <aws/backup/model/DeleteBackupVaultNotificationsRequest.h>
#include <aws/backup/model/DeleteRecoveryPointRequest.h>
#include <aws/backup/model/DescribeBackupJobRequest.h>
#include <aws/backup/model/DescribeBackupVaultRequest.h>
#include <aws/backup/model/DescribeProtectedResourceRequest.h>
#include <aws/backup/model/DescribeRecoveryPointRequest.h>
#include <aws/backup/model/DescribeRestoreJobRequest.h>
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
#include <aws/backup/model/ListProtectedResourcesRequest.h>
#include <aws/backup/model/ListRecoveryPointsByBackupVaultRequest.h>
#include <aws/backup/model/ListRecoveryPointsByResourceRequest.h>
#include <aws/backup/model/ListRestoreJobsRequest.h>
#include <aws/backup/model/ListTagsRequest.h>
#include <aws/backup/model/PutBackupVaultAccessPolicyRequest.h>
#include <aws/backup/model/PutBackupVaultNotificationsRequest.h>
#include <aws/backup/model/StartBackupJobRequest.h>
#include <aws/backup/model/StartRestoreJobRequest.h>
#include <aws/backup/model/StopBackupJobRequest.h>
#include <aws/backup/model/TagResourceRequest.h>
#include <aws/backup/model/UntagResourceRequest.h>
#include <aws/backup/model/UpdateBackupPlanRequest.h>
#include <aws/backup/model/UpdateRecoveryPointLifecycleRequest.h>

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
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<BackupErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

BackupClient::BackupClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<BackupErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

BackupClient::BackupClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<BackupErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

BackupClient::~BackupClient()
{
}

void BackupClient::init(const ClientConfiguration& config)
{
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
  Aws::StringStream ss;
  ss << "/backup/plans/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateBackupPlanOutcome(CreateBackupPlanResult(outcome.GetResult()));
  }
  else
  {
    return CreateBackupPlanOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << "/backup/plans/";
  ss << request.GetBackupPlanId();
  ss << "/selections/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateBackupSelectionOutcome(CreateBackupSelectionResult(outcome.GetResult()));
  }
  else
  {
    return CreateBackupSelectionOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << "/backup-vaults/";
  ss << request.GetBackupVaultName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateBackupVaultOutcome(CreateBackupVaultResult(outcome.GetResult()));
  }
  else
  {
    return CreateBackupVaultOutcome(outcome.GetError());
  }
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

DeleteBackupPlanOutcome BackupClient::DeleteBackupPlan(const DeleteBackupPlanRequest& request) const
{
  if (!request.BackupPlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBackupPlan", "Required field: BackupPlanId, is not set");
    return DeleteBackupPlanOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupPlanId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/backup/plans/";
  ss << request.GetBackupPlanId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteBackupPlanOutcome(DeleteBackupPlanResult(outcome.GetResult()));
  }
  else
  {
    return DeleteBackupPlanOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << "/backup/plans/";
  ss << request.GetBackupPlanId();
  ss << "/selections/";
  ss << request.GetSelectionId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteBackupSelectionOutcome(NoResult());
  }
  else
  {
    return DeleteBackupSelectionOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << "/backup-vaults/";
  ss << request.GetBackupVaultName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteBackupVaultOutcome(NoResult());
  }
  else
  {
    return DeleteBackupVaultOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << "/backup-vaults/";
  ss << request.GetBackupVaultName();
  ss << "/access-policy";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteBackupVaultAccessPolicyOutcome(NoResult());
  }
  else
  {
    return DeleteBackupVaultAccessPolicyOutcome(outcome.GetError());
  }
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

DeleteBackupVaultNotificationsOutcome BackupClient::DeleteBackupVaultNotifications(const DeleteBackupVaultNotificationsRequest& request) const
{
  if (!request.BackupVaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBackupVaultNotifications", "Required field: BackupVaultName, is not set");
    return DeleteBackupVaultNotificationsOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/backup-vaults/";
  ss << request.GetBackupVaultName();
  ss << "/notification-configuration";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteBackupVaultNotificationsOutcome(NoResult());
  }
  else
  {
    return DeleteBackupVaultNotificationsOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << "/backup-vaults/";
  ss << request.GetBackupVaultName();
  ss << "/recovery-points/";
  ss << request.GetRecoveryPointArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteRecoveryPointOutcome(NoResult());
  }
  else
  {
    return DeleteRecoveryPointOutcome(outcome.GetError());
  }
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

DescribeBackupJobOutcome BackupClient::DescribeBackupJob(const DescribeBackupJobRequest& request) const
{
  if (!request.BackupJobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeBackupJob", "Required field: BackupJobId, is not set");
    return DescribeBackupJobOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupJobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/backup-jobs/";
  ss << request.GetBackupJobId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeBackupJobOutcome(DescribeBackupJobResult(outcome.GetResult()));
  }
  else
  {
    return DescribeBackupJobOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << "/backup-vaults/";
  ss << request.GetBackupVaultName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeBackupVaultOutcome(DescribeBackupVaultResult(outcome.GetResult()));
  }
  else
  {
    return DescribeBackupVaultOutcome(outcome.GetError());
  }
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

DescribeProtectedResourceOutcome BackupClient::DescribeProtectedResource(const DescribeProtectedResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeProtectedResource", "Required field: ResourceArn, is not set");
    return DescribeProtectedResourceOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/resources/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeProtectedResourceOutcome(DescribeProtectedResourceResult(outcome.GetResult()));
  }
  else
  {
    return DescribeProtectedResourceOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << "/backup-vaults/";
  ss << request.GetBackupVaultName();
  ss << "/recovery-points/";
  ss << request.GetRecoveryPointArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeRecoveryPointOutcome(DescribeRecoveryPointResult(outcome.GetResult()));
  }
  else
  {
    return DescribeRecoveryPointOutcome(outcome.GetError());
  }
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

DescribeRestoreJobOutcome BackupClient::DescribeRestoreJob(const DescribeRestoreJobRequest& request) const
{
  if (!request.RestoreJobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeRestoreJob", "Required field: RestoreJobId, is not set");
    return DescribeRestoreJobOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestoreJobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/restore-jobs/";
  ss << request.GetRestoreJobId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeRestoreJobOutcome(DescribeRestoreJobResult(outcome.GetResult()));
  }
  else
  {
    return DescribeRestoreJobOutcome(outcome.GetError());
  }
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

ExportBackupPlanTemplateOutcome BackupClient::ExportBackupPlanTemplate(const ExportBackupPlanTemplateRequest& request) const
{
  if (!request.BackupPlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ExportBackupPlanTemplate", "Required field: BackupPlanId, is not set");
    return ExportBackupPlanTemplateOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupPlanId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/backup/plans/";
  ss << request.GetBackupPlanId();
  ss << "/toTemplate/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ExportBackupPlanTemplateOutcome(ExportBackupPlanTemplateResult(outcome.GetResult()));
  }
  else
  {
    return ExportBackupPlanTemplateOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << "/backup/plans/";
  ss << request.GetBackupPlanId();
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetBackupPlanOutcome(GetBackupPlanResult(outcome.GetResult()));
  }
  else
  {
    return GetBackupPlanOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << "/backup/template/json/toPlan";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetBackupPlanFromJSONOutcome(GetBackupPlanFromJSONResult(outcome.GetResult()));
  }
  else
  {
    return GetBackupPlanFromJSONOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << "/backup/template/plans/";
  ss << request.GetBackupPlanTemplateId();
  ss << "/toPlan";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetBackupPlanFromTemplateOutcome(GetBackupPlanFromTemplateResult(outcome.GetResult()));
  }
  else
  {
    return GetBackupPlanFromTemplateOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << "/backup/plans/";
  ss << request.GetBackupPlanId();
  ss << "/selections/";
  ss << request.GetSelectionId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetBackupSelectionOutcome(GetBackupSelectionResult(outcome.GetResult()));
  }
  else
  {
    return GetBackupSelectionOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << "/backup-vaults/";
  ss << request.GetBackupVaultName();
  ss << "/access-policy";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetBackupVaultAccessPolicyOutcome(GetBackupVaultAccessPolicyResult(outcome.GetResult()));
  }
  else
  {
    return GetBackupVaultAccessPolicyOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << "/backup-vaults/";
  ss << request.GetBackupVaultName();
  ss << "/notification-configuration";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetBackupVaultNotificationsOutcome(GetBackupVaultNotificationsResult(outcome.GetResult()));
  }
  else
  {
    return GetBackupVaultNotificationsOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << "/backup-vaults/";
  ss << request.GetBackupVaultName();
  ss << "/recovery-points/";
  ss << request.GetRecoveryPointArn();
  ss << "/restore-metadata";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRecoveryPointRestoreMetadataOutcome(GetRecoveryPointRestoreMetadataResult(outcome.GetResult()));
  }
  else
  {
    return GetRecoveryPointRestoreMetadataOutcome(outcome.GetError());
  }
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
  JsonOutcome outcome = MakeRequest(ss.str(), HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER, "GetSupportedResourceTypes");
  if(outcome.IsSuccess())
  {
    return GetSupportedResourceTypesOutcome(GetSupportedResourceTypesResult(outcome.GetResult()));
  }
  else
  {
    return GetSupportedResourceTypesOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << "/backup-jobs/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListBackupJobsOutcome(ListBackupJobsResult(outcome.GetResult()));
  }
  else
  {
    return ListBackupJobsOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << "/backup/template/plans";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListBackupPlanTemplatesOutcome(ListBackupPlanTemplatesResult(outcome.GetResult()));
  }
  else
  {
    return ListBackupPlanTemplatesOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << "/backup/plans/";
  ss << request.GetBackupPlanId();
  ss << "/versions/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListBackupPlanVersionsOutcome(ListBackupPlanVersionsResult(outcome.GetResult()));
  }
  else
  {
    return ListBackupPlanVersionsOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << "/backup/plans/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListBackupPlansOutcome(ListBackupPlansResult(outcome.GetResult()));
  }
  else
  {
    return ListBackupPlansOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << "/backup/plans/";
  ss << request.GetBackupPlanId();
  ss << "/selections/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListBackupSelectionsOutcome(ListBackupSelectionsResult(outcome.GetResult()));
  }
  else
  {
    return ListBackupSelectionsOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << "/backup-vaults/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListBackupVaultsOutcome(ListBackupVaultsResult(outcome.GetResult()));
  }
  else
  {
    return ListBackupVaultsOutcome(outcome.GetError());
  }
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

ListProtectedResourcesOutcome BackupClient::ListProtectedResources(const ListProtectedResourcesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/resources/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListProtectedResourcesOutcome(ListProtectedResourcesResult(outcome.GetResult()));
  }
  else
  {
    return ListProtectedResourcesOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << "/backup-vaults/";
  ss << request.GetBackupVaultName();
  ss << "/recovery-points/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListRecoveryPointsByBackupVaultOutcome(ListRecoveryPointsByBackupVaultResult(outcome.GetResult()));
  }
  else
  {
    return ListRecoveryPointsByBackupVaultOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << "/resources/";
  ss << request.GetResourceArn();
  ss << "/recovery-points/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListRecoveryPointsByResourceOutcome(ListRecoveryPointsByResourceResult(outcome.GetResult()));
  }
  else
  {
    return ListRecoveryPointsByResourceOutcome(outcome.GetError());
  }
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

ListRestoreJobsOutcome BackupClient::ListRestoreJobs(const ListRestoreJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/restore-jobs/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListRestoreJobsOutcome(ListRestoreJobsResult(outcome.GetResult()));
  }
  else
  {
    return ListRestoreJobsOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsOutcome(ListTagsResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << "/backup-vaults/";
  ss << request.GetBackupVaultName();
  ss << "/access-policy";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutBackupVaultAccessPolicyOutcome(NoResult());
  }
  else
  {
    return PutBackupVaultAccessPolicyOutcome(outcome.GetError());
  }
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

PutBackupVaultNotificationsOutcome BackupClient::PutBackupVaultNotifications(const PutBackupVaultNotificationsRequest& request) const
{
  if (!request.BackupVaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutBackupVaultNotifications", "Required field: BackupVaultName, is not set");
    return PutBackupVaultNotificationsOutcome(Aws::Client::AWSError<BackupErrors>(BackupErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackupVaultName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/backup-vaults/";
  ss << request.GetBackupVaultName();
  ss << "/notification-configuration";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutBackupVaultNotificationsOutcome(NoResult());
  }
  else
  {
    return PutBackupVaultNotificationsOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << "/backup-jobs";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartBackupJobOutcome(StartBackupJobResult(outcome.GetResult()));
  }
  else
  {
    return StartBackupJobOutcome(outcome.GetError());
  }
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

StartRestoreJobOutcome BackupClient::StartRestoreJob(const StartRestoreJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/restore-jobs";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartRestoreJobOutcome(StartRestoreJobResult(outcome.GetResult()));
  }
  else
  {
    return StartRestoreJobOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << "/backup-jobs/";
  ss << request.GetBackupJobId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopBackupJobOutcome(NoResult());
  }
  else
  {
    return StopBackupJobOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TagResourceOutcome(NoResult());
  }
  else
  {
    return TagResourceOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << "/untag/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UntagResourceOutcome(NoResult());
  }
  else
  {
    return UntagResourceOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << "/backup/plans/";
  ss << request.GetBackupPlanId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateBackupPlanOutcome(UpdateBackupPlanResult(outcome.GetResult()));
  }
  else
  {
    return UpdateBackupPlanOutcome(outcome.GetError());
  }
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
  Aws::StringStream ss;
  ss << "/backup-vaults/";
  ss << request.GetBackupVaultName();
  ss << "/recovery-points/";
  ss << request.GetRecoveryPointArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateRecoveryPointLifecycleOutcome(UpdateRecoveryPointLifecycleResult(outcome.GetResult()));
  }
  else
  {
    return UpdateRecoveryPointLifecycleOutcome(outcome.GetError());
  }
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

