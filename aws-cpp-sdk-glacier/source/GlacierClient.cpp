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

#include <aws/glacier/GlacierClient.h>
#include <aws/glacier/GlacierEndpoint.h>
#include <aws/glacier/GlacierErrorMarshaller.h>
#include <aws/glacier/model/AbortMultipartUploadRequest.h>
#include <aws/glacier/model/AbortVaultLockRequest.h>
#include <aws/glacier/model/AddTagsToVaultRequest.h>
#include <aws/glacier/model/CompleteMultipartUploadRequest.h>
#include <aws/glacier/model/CompleteVaultLockRequest.h>
#include <aws/glacier/model/CreateVaultRequest.h>
#include <aws/glacier/model/DeleteArchiveRequest.h>
#include <aws/glacier/model/DeleteVaultRequest.h>
#include <aws/glacier/model/DeleteVaultAccessPolicyRequest.h>
#include <aws/glacier/model/DeleteVaultNotificationsRequest.h>
#include <aws/glacier/model/DescribeJobRequest.h>
#include <aws/glacier/model/DescribeVaultRequest.h>
#include <aws/glacier/model/GetDataRetrievalPolicyRequest.h>
#include <aws/glacier/model/GetJobOutputRequest.h>
#include <aws/glacier/model/GetVaultAccessPolicyRequest.h>
#include <aws/glacier/model/GetVaultLockRequest.h>
#include <aws/glacier/model/GetVaultNotificationsRequest.h>
#include <aws/glacier/model/InitiateJobRequest.h>
#include <aws/glacier/model/InitiateMultipartUploadRequest.h>
#include <aws/glacier/model/InitiateVaultLockRequest.h>
#include <aws/glacier/model/ListJobsRequest.h>
#include <aws/glacier/model/ListMultipartUploadsRequest.h>
#include <aws/glacier/model/ListPartsRequest.h>
#include <aws/glacier/model/ListProvisionedCapacityRequest.h>
#include <aws/glacier/model/ListTagsForVaultRequest.h>
#include <aws/glacier/model/ListVaultsRequest.h>
#include <aws/glacier/model/PurchaseProvisionedCapacityRequest.h>
#include <aws/glacier/model/RemoveTagsFromVaultRequest.h>
#include <aws/glacier/model/SetDataRetrievalPolicyRequest.h>
#include <aws/glacier/model/SetVaultAccessPolicyRequest.h>
#include <aws/glacier/model/SetVaultNotificationsRequest.h>
#include <aws/glacier/model/UploadArchiveRequest.h>
#include <aws/glacier/model/UploadMultipartPartRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Glacier;
using namespace Aws::Glacier::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "glacier";
static const char* ALLOCATION_TAG = "GlacierClient";


GlacierClient::GlacierClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<GlacierErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GlacierClient::GlacierClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<GlacierErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GlacierClient::GlacierClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<GlacierErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

GlacierClient::~GlacierClient()
{
}

void GlacierClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + GlacierEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void GlacierClient::OverrideEndpoint(const Aws::String& endpoint)
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

AbortMultipartUploadOutcome GlacierClient::AbortMultipartUpload(const AbortMultipartUploadRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AbortMultipartUpload", "Required field: AccountId, is not set");
    return AbortMultipartUploadOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AbortMultipartUpload", "Required field: VaultName, is not set");
    return AbortMultipartUploadOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  if (!request.UploadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AbortMultipartUpload", "Required field: UploadId, is not set");
    return AbortMultipartUploadOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UploadId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/multipart-uploads/";
  ss << request.GetUploadId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AbortMultipartUploadOutcome(NoResult());
  }
  else
  {
    return AbortMultipartUploadOutcome(outcome.GetError());
  }
}

AbortMultipartUploadOutcomeCallable GlacierClient::AbortMultipartUploadCallable(const AbortMultipartUploadRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AbortMultipartUploadOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AbortMultipartUpload(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlacierClient::AbortMultipartUploadAsync(const AbortMultipartUploadRequest& request, const AbortMultipartUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AbortMultipartUploadAsyncHelper( request, handler, context ); } );
}

void GlacierClient::AbortMultipartUploadAsyncHelper(const AbortMultipartUploadRequest& request, const AbortMultipartUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AbortMultipartUpload(request), context);
}

AbortVaultLockOutcome GlacierClient::AbortVaultLock(const AbortVaultLockRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AbortVaultLock", "Required field: AccountId, is not set");
    return AbortVaultLockOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AbortVaultLock", "Required field: VaultName, is not set");
    return AbortVaultLockOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/lock-policy";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AbortVaultLockOutcome(NoResult());
  }
  else
  {
    return AbortVaultLockOutcome(outcome.GetError());
  }
}

AbortVaultLockOutcomeCallable GlacierClient::AbortVaultLockCallable(const AbortVaultLockRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AbortVaultLockOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AbortVaultLock(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlacierClient::AbortVaultLockAsync(const AbortVaultLockRequest& request, const AbortVaultLockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AbortVaultLockAsyncHelper( request, handler, context ); } );
}

void GlacierClient::AbortVaultLockAsyncHelper(const AbortVaultLockRequest& request, const AbortVaultLockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AbortVaultLock(request), context);
}

AddTagsToVaultOutcome GlacierClient::AddTagsToVault(const AddTagsToVaultRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AddTagsToVault", "Required field: AccountId, is not set");
    return AddTagsToVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AddTagsToVault", "Required field: VaultName, is not set");
    return AddTagsToVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/tags";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=add");
  uri.SetQueryString(ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AddTagsToVaultOutcome(NoResult());
  }
  else
  {
    return AddTagsToVaultOutcome(outcome.GetError());
  }
}

AddTagsToVaultOutcomeCallable GlacierClient::AddTagsToVaultCallable(const AddTagsToVaultRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddTagsToVaultOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddTagsToVault(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlacierClient::AddTagsToVaultAsync(const AddTagsToVaultRequest& request, const AddTagsToVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AddTagsToVaultAsyncHelper( request, handler, context ); } );
}

void GlacierClient::AddTagsToVaultAsyncHelper(const AddTagsToVaultRequest& request, const AddTagsToVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AddTagsToVault(request), context);
}

CompleteMultipartUploadOutcome GlacierClient::CompleteMultipartUpload(const CompleteMultipartUploadRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CompleteMultipartUpload", "Required field: AccountId, is not set");
    return CompleteMultipartUploadOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CompleteMultipartUpload", "Required field: VaultName, is not set");
    return CompleteMultipartUploadOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  if (!request.UploadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CompleteMultipartUpload", "Required field: UploadId, is not set");
    return CompleteMultipartUploadOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UploadId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/multipart-uploads/";
  ss << request.GetUploadId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CompleteMultipartUploadOutcome(CompleteMultipartUploadResult(outcome.GetResult()));
  }
  else
  {
    return CompleteMultipartUploadOutcome(outcome.GetError());
  }
}

CompleteMultipartUploadOutcomeCallable GlacierClient::CompleteMultipartUploadCallable(const CompleteMultipartUploadRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CompleteMultipartUploadOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CompleteMultipartUpload(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlacierClient::CompleteMultipartUploadAsync(const CompleteMultipartUploadRequest& request, const CompleteMultipartUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CompleteMultipartUploadAsyncHelper( request, handler, context ); } );
}

void GlacierClient::CompleteMultipartUploadAsyncHelper(const CompleteMultipartUploadRequest& request, const CompleteMultipartUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CompleteMultipartUpload(request), context);
}

CompleteVaultLockOutcome GlacierClient::CompleteVaultLock(const CompleteVaultLockRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CompleteVaultLock", "Required field: AccountId, is not set");
    return CompleteVaultLockOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CompleteVaultLock", "Required field: VaultName, is not set");
    return CompleteVaultLockOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  if (!request.LockIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CompleteVaultLock", "Required field: LockId, is not set");
    return CompleteVaultLockOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LockId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/lock-policy/";
  ss << request.GetLockId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CompleteVaultLockOutcome(NoResult());
  }
  else
  {
    return CompleteVaultLockOutcome(outcome.GetError());
  }
}

CompleteVaultLockOutcomeCallable GlacierClient::CompleteVaultLockCallable(const CompleteVaultLockRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CompleteVaultLockOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CompleteVaultLock(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlacierClient::CompleteVaultLockAsync(const CompleteVaultLockRequest& request, const CompleteVaultLockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CompleteVaultLockAsyncHelper( request, handler, context ); } );
}

void GlacierClient::CompleteVaultLockAsyncHelper(const CompleteVaultLockRequest& request, const CompleteVaultLockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CompleteVaultLock(request), context);
}

CreateVaultOutcome GlacierClient::CreateVault(const CreateVaultRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateVault", "Required field: AccountId, is not set");
    return CreateVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateVault", "Required field: VaultName, is not set");
    return CreateVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateVaultOutcome(CreateVaultResult(outcome.GetResult()));
  }
  else
  {
    return CreateVaultOutcome(outcome.GetError());
  }
}

CreateVaultOutcomeCallable GlacierClient::CreateVaultCallable(const CreateVaultRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVaultOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVault(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlacierClient::CreateVaultAsync(const CreateVaultRequest& request, const CreateVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateVaultAsyncHelper( request, handler, context ); } );
}

void GlacierClient::CreateVaultAsyncHelper(const CreateVaultRequest& request, const CreateVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVault(request), context);
}

DeleteArchiveOutcome GlacierClient::DeleteArchive(const DeleteArchiveRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteArchive", "Required field: AccountId, is not set");
    return DeleteArchiveOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteArchive", "Required field: VaultName, is not set");
    return DeleteArchiveOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  if (!request.ArchiveIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteArchive", "Required field: ArchiveId, is not set");
    return DeleteArchiveOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ArchiveId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/archives/";
  ss << request.GetArchiveId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteArchiveOutcome(NoResult());
  }
  else
  {
    return DeleteArchiveOutcome(outcome.GetError());
  }
}

DeleteArchiveOutcomeCallable GlacierClient::DeleteArchiveCallable(const DeleteArchiveRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteArchiveOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteArchive(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlacierClient::DeleteArchiveAsync(const DeleteArchiveRequest& request, const DeleteArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteArchiveAsyncHelper( request, handler, context ); } );
}

void GlacierClient::DeleteArchiveAsyncHelper(const DeleteArchiveRequest& request, const DeleteArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteArchive(request), context);
}

DeleteVaultOutcome GlacierClient::DeleteVault(const DeleteVaultRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVault", "Required field: AccountId, is not set");
    return DeleteVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVault", "Required field: VaultName, is not set");
    return DeleteVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteVaultOutcome(NoResult());
  }
  else
  {
    return DeleteVaultOutcome(outcome.GetError());
  }
}

DeleteVaultOutcomeCallable GlacierClient::DeleteVaultCallable(const DeleteVaultRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVaultOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVault(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlacierClient::DeleteVaultAsync(const DeleteVaultRequest& request, const DeleteVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVaultAsyncHelper( request, handler, context ); } );
}

void GlacierClient::DeleteVaultAsyncHelper(const DeleteVaultRequest& request, const DeleteVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVault(request), context);
}

DeleteVaultAccessPolicyOutcome GlacierClient::DeleteVaultAccessPolicy(const DeleteVaultAccessPolicyRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVaultAccessPolicy", "Required field: AccountId, is not set");
    return DeleteVaultAccessPolicyOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVaultAccessPolicy", "Required field: VaultName, is not set");
    return DeleteVaultAccessPolicyOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/access-policy";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteVaultAccessPolicyOutcome(NoResult());
  }
  else
  {
    return DeleteVaultAccessPolicyOutcome(outcome.GetError());
  }
}

DeleteVaultAccessPolicyOutcomeCallable GlacierClient::DeleteVaultAccessPolicyCallable(const DeleteVaultAccessPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVaultAccessPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVaultAccessPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlacierClient::DeleteVaultAccessPolicyAsync(const DeleteVaultAccessPolicyRequest& request, const DeleteVaultAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVaultAccessPolicyAsyncHelper( request, handler, context ); } );
}

void GlacierClient::DeleteVaultAccessPolicyAsyncHelper(const DeleteVaultAccessPolicyRequest& request, const DeleteVaultAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVaultAccessPolicy(request), context);
}

DeleteVaultNotificationsOutcome GlacierClient::DeleteVaultNotifications(const DeleteVaultNotificationsRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVaultNotifications", "Required field: AccountId, is not set");
    return DeleteVaultNotificationsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVaultNotifications", "Required field: VaultName, is not set");
    return DeleteVaultNotificationsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/notification-configuration";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteVaultNotificationsOutcome(NoResult());
  }
  else
  {
    return DeleteVaultNotificationsOutcome(outcome.GetError());
  }
}

DeleteVaultNotificationsOutcomeCallable GlacierClient::DeleteVaultNotificationsCallable(const DeleteVaultNotificationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVaultNotificationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVaultNotifications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlacierClient::DeleteVaultNotificationsAsync(const DeleteVaultNotificationsRequest& request, const DeleteVaultNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVaultNotificationsAsyncHelper( request, handler, context ); } );
}

void GlacierClient::DeleteVaultNotificationsAsyncHelper(const DeleteVaultNotificationsRequest& request, const DeleteVaultNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVaultNotifications(request), context);
}

DescribeJobOutcome GlacierClient::DescribeJob(const DescribeJobRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeJob", "Required field: AccountId, is not set");
    return DescribeJobOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeJob", "Required field: VaultName, is not set");
    return DescribeJobOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeJob", "Required field: JobId, is not set");
    return DescribeJobOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/jobs/";
  ss << request.GetJobId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeJobOutcome(DescribeJobResult(outcome.GetResult()));
  }
  else
  {
    return DescribeJobOutcome(outcome.GetError());
  }
}

DescribeJobOutcomeCallable GlacierClient::DescribeJobCallable(const DescribeJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlacierClient::DescribeJobAsync(const DescribeJobRequest& request, const DescribeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeJobAsyncHelper( request, handler, context ); } );
}

void GlacierClient::DescribeJobAsyncHelper(const DescribeJobRequest& request, const DescribeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeJob(request), context);
}

DescribeVaultOutcome GlacierClient::DescribeVault(const DescribeVaultRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeVault", "Required field: AccountId, is not set");
    return DescribeVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeVault", "Required field: VaultName, is not set");
    return DescribeVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeVaultOutcome(DescribeVaultResult(outcome.GetResult()));
  }
  else
  {
    return DescribeVaultOutcome(outcome.GetError());
  }
}

DescribeVaultOutcomeCallable GlacierClient::DescribeVaultCallable(const DescribeVaultRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVaultOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVault(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlacierClient::DescribeVaultAsync(const DescribeVaultRequest& request, const DescribeVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeVaultAsyncHelper( request, handler, context ); } );
}

void GlacierClient::DescribeVaultAsyncHelper(const DescribeVaultRequest& request, const DescribeVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVault(request), context);
}

GetDataRetrievalPolicyOutcome GlacierClient::GetDataRetrievalPolicy(const GetDataRetrievalPolicyRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDataRetrievalPolicy", "Required field: AccountId, is not set");
    return GetDataRetrievalPolicyOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  ss << request.GetAccountId();
  ss << "/policies/data-retrieval";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDataRetrievalPolicyOutcome(GetDataRetrievalPolicyResult(outcome.GetResult()));
  }
  else
  {
    return GetDataRetrievalPolicyOutcome(outcome.GetError());
  }
}

GetDataRetrievalPolicyOutcomeCallable GlacierClient::GetDataRetrievalPolicyCallable(const GetDataRetrievalPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDataRetrievalPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDataRetrievalPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlacierClient::GetDataRetrievalPolicyAsync(const GetDataRetrievalPolicyRequest& request, const GetDataRetrievalPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDataRetrievalPolicyAsyncHelper( request, handler, context ); } );
}

void GlacierClient::GetDataRetrievalPolicyAsyncHelper(const GetDataRetrievalPolicyRequest& request, const GetDataRetrievalPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDataRetrievalPolicy(request), context);
}

GetJobOutputOutcome GlacierClient::GetJobOutput(const GetJobOutputRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJobOutput", "Required field: AccountId, is not set");
    return GetJobOutputOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJobOutput", "Required field: VaultName, is not set");
    return GetJobOutputOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetJobOutput", "Required field: JobId, is not set");
    return GetJobOutputOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/jobs/";
  ss << request.GetJobId();
  ss << "/output";
  uri.SetPath(uri.GetPath() + ss.str());
  StreamOutcome outcome = MakeRequestWithUnparsedResponse(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetJobOutputOutcome(GetJobOutputResult(outcome.GetResultWithOwnership()));
  }
  else
  {
    return GetJobOutputOutcome(outcome.GetError());
  }
}

GetJobOutputOutcomeCallable GlacierClient::GetJobOutputCallable(const GetJobOutputRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetJobOutputOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetJobOutput(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlacierClient::GetJobOutputAsync(const GetJobOutputRequest& request, const GetJobOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetJobOutputAsyncHelper( request, handler, context ); } );
}

void GlacierClient::GetJobOutputAsyncHelper(const GetJobOutputRequest& request, const GetJobOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetJobOutput(request), context);
}

GetVaultAccessPolicyOutcome GlacierClient::GetVaultAccessPolicy(const GetVaultAccessPolicyRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVaultAccessPolicy", "Required field: AccountId, is not set");
    return GetVaultAccessPolicyOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVaultAccessPolicy", "Required field: VaultName, is not set");
    return GetVaultAccessPolicyOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/access-policy";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetVaultAccessPolicyOutcome(GetVaultAccessPolicyResult(outcome.GetResult()));
  }
  else
  {
    return GetVaultAccessPolicyOutcome(outcome.GetError());
  }
}

GetVaultAccessPolicyOutcomeCallable GlacierClient::GetVaultAccessPolicyCallable(const GetVaultAccessPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVaultAccessPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVaultAccessPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlacierClient::GetVaultAccessPolicyAsync(const GetVaultAccessPolicyRequest& request, const GetVaultAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetVaultAccessPolicyAsyncHelper( request, handler, context ); } );
}

void GlacierClient::GetVaultAccessPolicyAsyncHelper(const GetVaultAccessPolicyRequest& request, const GetVaultAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetVaultAccessPolicy(request), context);
}

GetVaultLockOutcome GlacierClient::GetVaultLock(const GetVaultLockRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVaultLock", "Required field: AccountId, is not set");
    return GetVaultLockOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVaultLock", "Required field: VaultName, is not set");
    return GetVaultLockOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/lock-policy";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetVaultLockOutcome(GetVaultLockResult(outcome.GetResult()));
  }
  else
  {
    return GetVaultLockOutcome(outcome.GetError());
  }
}

GetVaultLockOutcomeCallable GlacierClient::GetVaultLockCallable(const GetVaultLockRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVaultLockOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVaultLock(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlacierClient::GetVaultLockAsync(const GetVaultLockRequest& request, const GetVaultLockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetVaultLockAsyncHelper( request, handler, context ); } );
}

void GlacierClient::GetVaultLockAsyncHelper(const GetVaultLockRequest& request, const GetVaultLockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetVaultLock(request), context);
}

GetVaultNotificationsOutcome GlacierClient::GetVaultNotifications(const GetVaultNotificationsRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVaultNotifications", "Required field: AccountId, is not set");
    return GetVaultNotificationsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVaultNotifications", "Required field: VaultName, is not set");
    return GetVaultNotificationsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/notification-configuration";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetVaultNotificationsOutcome(GetVaultNotificationsResult(outcome.GetResult()));
  }
  else
  {
    return GetVaultNotificationsOutcome(outcome.GetError());
  }
}

GetVaultNotificationsOutcomeCallable GlacierClient::GetVaultNotificationsCallable(const GetVaultNotificationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVaultNotificationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVaultNotifications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlacierClient::GetVaultNotificationsAsync(const GetVaultNotificationsRequest& request, const GetVaultNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetVaultNotificationsAsyncHelper( request, handler, context ); } );
}

void GlacierClient::GetVaultNotificationsAsyncHelper(const GetVaultNotificationsRequest& request, const GetVaultNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetVaultNotifications(request), context);
}

InitiateJobOutcome GlacierClient::InitiateJob(const InitiateJobRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InitiateJob", "Required field: AccountId, is not set");
    return InitiateJobOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InitiateJob", "Required field: VaultName, is not set");
    return InitiateJobOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/jobs";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return InitiateJobOutcome(InitiateJobResult(outcome.GetResult()));
  }
  else
  {
    return InitiateJobOutcome(outcome.GetError());
  }
}

InitiateJobOutcomeCallable GlacierClient::InitiateJobCallable(const InitiateJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< InitiateJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->InitiateJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlacierClient::InitiateJobAsync(const InitiateJobRequest& request, const InitiateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->InitiateJobAsyncHelper( request, handler, context ); } );
}

void GlacierClient::InitiateJobAsyncHelper(const InitiateJobRequest& request, const InitiateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, InitiateJob(request), context);
}

InitiateMultipartUploadOutcome GlacierClient::InitiateMultipartUpload(const InitiateMultipartUploadRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InitiateMultipartUpload", "Required field: AccountId, is not set");
    return InitiateMultipartUploadOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InitiateMultipartUpload", "Required field: VaultName, is not set");
    return InitiateMultipartUploadOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/multipart-uploads";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return InitiateMultipartUploadOutcome(InitiateMultipartUploadResult(outcome.GetResult()));
  }
  else
  {
    return InitiateMultipartUploadOutcome(outcome.GetError());
  }
}

InitiateMultipartUploadOutcomeCallable GlacierClient::InitiateMultipartUploadCallable(const InitiateMultipartUploadRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< InitiateMultipartUploadOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->InitiateMultipartUpload(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlacierClient::InitiateMultipartUploadAsync(const InitiateMultipartUploadRequest& request, const InitiateMultipartUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->InitiateMultipartUploadAsyncHelper( request, handler, context ); } );
}

void GlacierClient::InitiateMultipartUploadAsyncHelper(const InitiateMultipartUploadRequest& request, const InitiateMultipartUploadResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, InitiateMultipartUpload(request), context);
}

InitiateVaultLockOutcome GlacierClient::InitiateVaultLock(const InitiateVaultLockRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InitiateVaultLock", "Required field: AccountId, is not set");
    return InitiateVaultLockOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("InitiateVaultLock", "Required field: VaultName, is not set");
    return InitiateVaultLockOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/lock-policy";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return InitiateVaultLockOutcome(InitiateVaultLockResult(outcome.GetResult()));
  }
  else
  {
    return InitiateVaultLockOutcome(outcome.GetError());
  }
}

InitiateVaultLockOutcomeCallable GlacierClient::InitiateVaultLockCallable(const InitiateVaultLockRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< InitiateVaultLockOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->InitiateVaultLock(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlacierClient::InitiateVaultLockAsync(const InitiateVaultLockRequest& request, const InitiateVaultLockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->InitiateVaultLockAsyncHelper( request, handler, context ); } );
}

void GlacierClient::InitiateVaultLockAsyncHelper(const InitiateVaultLockRequest& request, const InitiateVaultLockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, InitiateVaultLock(request), context);
}

ListJobsOutcome GlacierClient::ListJobs(const ListJobsRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJobs", "Required field: AccountId, is not set");
    return ListJobsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListJobs", "Required field: VaultName, is not set");
    return ListJobsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/jobs";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListJobsOutcome(ListJobsResult(outcome.GetResult()));
  }
  else
  {
    return ListJobsOutcome(outcome.GetError());
  }
}

ListJobsOutcomeCallable GlacierClient::ListJobsCallable(const ListJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlacierClient::ListJobsAsync(const ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListJobsAsyncHelper( request, handler, context ); } );
}

void GlacierClient::ListJobsAsyncHelper(const ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListJobs(request), context);
}

ListMultipartUploadsOutcome GlacierClient::ListMultipartUploads(const ListMultipartUploadsRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMultipartUploads", "Required field: AccountId, is not set");
    return ListMultipartUploadsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListMultipartUploads", "Required field: VaultName, is not set");
    return ListMultipartUploadsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/multipart-uploads";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListMultipartUploadsOutcome(ListMultipartUploadsResult(outcome.GetResult()));
  }
  else
  {
    return ListMultipartUploadsOutcome(outcome.GetError());
  }
}

ListMultipartUploadsOutcomeCallable GlacierClient::ListMultipartUploadsCallable(const ListMultipartUploadsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMultipartUploadsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMultipartUploads(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlacierClient::ListMultipartUploadsAsync(const ListMultipartUploadsRequest& request, const ListMultipartUploadsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListMultipartUploadsAsyncHelper( request, handler, context ); } );
}

void GlacierClient::ListMultipartUploadsAsyncHelper(const ListMultipartUploadsRequest& request, const ListMultipartUploadsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListMultipartUploads(request), context);
}

ListPartsOutcome GlacierClient::ListParts(const ListPartsRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListParts", "Required field: AccountId, is not set");
    return ListPartsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListParts", "Required field: VaultName, is not set");
    return ListPartsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  if (!request.UploadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListParts", "Required field: UploadId, is not set");
    return ListPartsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UploadId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/multipart-uploads/";
  ss << request.GetUploadId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListPartsOutcome(ListPartsResult(outcome.GetResult()));
  }
  else
  {
    return ListPartsOutcome(outcome.GetError());
  }
}

ListPartsOutcomeCallable GlacierClient::ListPartsCallable(const ListPartsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPartsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListParts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlacierClient::ListPartsAsync(const ListPartsRequest& request, const ListPartsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListPartsAsyncHelper( request, handler, context ); } );
}

void GlacierClient::ListPartsAsyncHelper(const ListPartsRequest& request, const ListPartsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListParts(request), context);
}

ListProvisionedCapacityOutcome GlacierClient::ListProvisionedCapacity(const ListProvisionedCapacityRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProvisionedCapacity", "Required field: AccountId, is not set");
    return ListProvisionedCapacityOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  ss << request.GetAccountId();
  ss << "/provisioned-capacity";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListProvisionedCapacityOutcome(ListProvisionedCapacityResult(outcome.GetResult()));
  }
  else
  {
    return ListProvisionedCapacityOutcome(outcome.GetError());
  }
}

ListProvisionedCapacityOutcomeCallable GlacierClient::ListProvisionedCapacityCallable(const ListProvisionedCapacityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProvisionedCapacityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProvisionedCapacity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlacierClient::ListProvisionedCapacityAsync(const ListProvisionedCapacityRequest& request, const ListProvisionedCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListProvisionedCapacityAsyncHelper( request, handler, context ); } );
}

void GlacierClient::ListProvisionedCapacityAsyncHelper(const ListProvisionedCapacityRequest& request, const ListProvisionedCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListProvisionedCapacity(request), context);
}

ListTagsForVaultOutcome GlacierClient::ListTagsForVault(const ListTagsForVaultRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForVault", "Required field: AccountId, is not set");
    return ListTagsForVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForVault", "Required field: VaultName, is not set");
    return ListTagsForVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/tags";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsForVaultOutcome(ListTagsForVaultResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForVaultOutcome(outcome.GetError());
  }
}

ListTagsForVaultOutcomeCallable GlacierClient::ListTagsForVaultCallable(const ListTagsForVaultRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForVaultOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForVault(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlacierClient::ListTagsForVaultAsync(const ListTagsForVaultRequest& request, const ListTagsForVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForVaultAsyncHelper( request, handler, context ); } );
}

void GlacierClient::ListTagsForVaultAsyncHelper(const ListTagsForVaultRequest& request, const ListTagsForVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForVault(request), context);
}

ListVaultsOutcome GlacierClient::ListVaults(const ListVaultsRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListVaults", "Required field: AccountId, is not set");
    return ListVaultsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  ss << request.GetAccountId();
  ss << "/vaults";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListVaultsOutcome(ListVaultsResult(outcome.GetResult()));
  }
  else
  {
    return ListVaultsOutcome(outcome.GetError());
  }
}

ListVaultsOutcomeCallable GlacierClient::ListVaultsCallable(const ListVaultsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVaultsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVaults(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlacierClient::ListVaultsAsync(const ListVaultsRequest& request, const ListVaultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListVaultsAsyncHelper( request, handler, context ); } );
}

void GlacierClient::ListVaultsAsyncHelper(const ListVaultsRequest& request, const ListVaultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListVaults(request), context);
}

PurchaseProvisionedCapacityOutcome GlacierClient::PurchaseProvisionedCapacity(const PurchaseProvisionedCapacityRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PurchaseProvisionedCapacity", "Required field: AccountId, is not set");
    return PurchaseProvisionedCapacityOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  ss << request.GetAccountId();
  ss << "/provisioned-capacity";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PurchaseProvisionedCapacityOutcome(PurchaseProvisionedCapacityResult(outcome.GetResult()));
  }
  else
  {
    return PurchaseProvisionedCapacityOutcome(outcome.GetError());
  }
}

PurchaseProvisionedCapacityOutcomeCallable GlacierClient::PurchaseProvisionedCapacityCallable(const PurchaseProvisionedCapacityRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PurchaseProvisionedCapacityOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PurchaseProvisionedCapacity(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlacierClient::PurchaseProvisionedCapacityAsync(const PurchaseProvisionedCapacityRequest& request, const PurchaseProvisionedCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PurchaseProvisionedCapacityAsyncHelper( request, handler, context ); } );
}

void GlacierClient::PurchaseProvisionedCapacityAsyncHelper(const PurchaseProvisionedCapacityRequest& request, const PurchaseProvisionedCapacityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PurchaseProvisionedCapacity(request), context);
}

RemoveTagsFromVaultOutcome GlacierClient::RemoveTagsFromVault(const RemoveTagsFromVaultRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveTagsFromVault", "Required field: AccountId, is not set");
    return RemoveTagsFromVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveTagsFromVault", "Required field: VaultName, is not set");
    return RemoveTagsFromVaultOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/tags";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?operation=remove");
  uri.SetQueryString(ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return RemoveTagsFromVaultOutcome(NoResult());
  }
  else
  {
    return RemoveTagsFromVaultOutcome(outcome.GetError());
  }
}

RemoveTagsFromVaultOutcomeCallable GlacierClient::RemoveTagsFromVaultCallable(const RemoveTagsFromVaultRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveTagsFromVaultOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveTagsFromVault(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlacierClient::RemoveTagsFromVaultAsync(const RemoveTagsFromVaultRequest& request, const RemoveTagsFromVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveTagsFromVaultAsyncHelper( request, handler, context ); } );
}

void GlacierClient::RemoveTagsFromVaultAsyncHelper(const RemoveTagsFromVaultRequest& request, const RemoveTagsFromVaultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveTagsFromVault(request), context);
}

SetDataRetrievalPolicyOutcome GlacierClient::SetDataRetrievalPolicy(const SetDataRetrievalPolicyRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SetDataRetrievalPolicy", "Required field: AccountId, is not set");
    return SetDataRetrievalPolicyOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  ss << request.GetAccountId();
  ss << "/policies/data-retrieval";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SetDataRetrievalPolicyOutcome(NoResult());
  }
  else
  {
    return SetDataRetrievalPolicyOutcome(outcome.GetError());
  }
}

SetDataRetrievalPolicyOutcomeCallable GlacierClient::SetDataRetrievalPolicyCallable(const SetDataRetrievalPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetDataRetrievalPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetDataRetrievalPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlacierClient::SetDataRetrievalPolicyAsync(const SetDataRetrievalPolicyRequest& request, const SetDataRetrievalPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetDataRetrievalPolicyAsyncHelper( request, handler, context ); } );
}

void GlacierClient::SetDataRetrievalPolicyAsyncHelper(const SetDataRetrievalPolicyRequest& request, const SetDataRetrievalPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetDataRetrievalPolicy(request), context);
}

SetVaultAccessPolicyOutcome GlacierClient::SetVaultAccessPolicy(const SetVaultAccessPolicyRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SetVaultAccessPolicy", "Required field: AccountId, is not set");
    return SetVaultAccessPolicyOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SetVaultAccessPolicy", "Required field: VaultName, is not set");
    return SetVaultAccessPolicyOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/access-policy";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SetVaultAccessPolicyOutcome(NoResult());
  }
  else
  {
    return SetVaultAccessPolicyOutcome(outcome.GetError());
  }
}

SetVaultAccessPolicyOutcomeCallable GlacierClient::SetVaultAccessPolicyCallable(const SetVaultAccessPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetVaultAccessPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetVaultAccessPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlacierClient::SetVaultAccessPolicyAsync(const SetVaultAccessPolicyRequest& request, const SetVaultAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetVaultAccessPolicyAsyncHelper( request, handler, context ); } );
}

void GlacierClient::SetVaultAccessPolicyAsyncHelper(const SetVaultAccessPolicyRequest& request, const SetVaultAccessPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetVaultAccessPolicy(request), context);
}

SetVaultNotificationsOutcome GlacierClient::SetVaultNotifications(const SetVaultNotificationsRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SetVaultNotifications", "Required field: AccountId, is not set");
    return SetVaultNotificationsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SetVaultNotifications", "Required field: VaultName, is not set");
    return SetVaultNotificationsOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/notification-configuration";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return SetVaultNotificationsOutcome(NoResult());
  }
  else
  {
    return SetVaultNotificationsOutcome(outcome.GetError());
  }
}

SetVaultNotificationsOutcomeCallable GlacierClient::SetVaultNotificationsCallable(const SetVaultNotificationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SetVaultNotificationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SetVaultNotifications(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlacierClient::SetVaultNotificationsAsync(const SetVaultNotificationsRequest& request, const SetVaultNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->SetVaultNotificationsAsyncHelper( request, handler, context ); } );
}

void GlacierClient::SetVaultNotificationsAsyncHelper(const SetVaultNotificationsRequest& request, const SetVaultNotificationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, SetVaultNotifications(request), context);
}

UploadArchiveOutcome GlacierClient::UploadArchive(const UploadArchiveRequest& request) const
{
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadArchive", "Required field: VaultName, is not set");
    return UploadArchiveOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadArchive", "Required field: AccountId, is not set");
    return UploadArchiveOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/archives";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UploadArchiveOutcome(UploadArchiveResult(outcome.GetResult()));
  }
  else
  {
    return UploadArchiveOutcome(outcome.GetError());
  }
}

UploadArchiveOutcomeCallable GlacierClient::UploadArchiveCallable(const UploadArchiveRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UploadArchiveOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UploadArchive(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlacierClient::UploadArchiveAsync(const UploadArchiveRequest& request, const UploadArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UploadArchiveAsyncHelper( request, handler, context ); } );
}

void GlacierClient::UploadArchiveAsyncHelper(const UploadArchiveRequest& request, const UploadArchiveResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UploadArchive(request), context);
}

UploadMultipartPartOutcome GlacierClient::UploadMultipartPart(const UploadMultipartPartRequest& request) const
{
  if (!request.AccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadMultipartPart", "Required field: AccountId, is not set");
    return UploadMultipartPartOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AccountId]", false));
  }
  if (!request.VaultNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadMultipartPart", "Required field: VaultName, is not set");
    return UploadMultipartPartOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VaultName]", false));
  }
  if (!request.UploadIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UploadMultipartPart", "Required field: UploadId, is not set");
    return UploadMultipartPartOutcome(Aws::Client::AWSError<GlacierErrors>(GlacierErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UploadId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  ss << request.GetAccountId();
  ss << "/vaults/";
  ss << request.GetVaultName();
  ss << "/multipart-uploads/";
  ss << request.GetUploadId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UploadMultipartPartOutcome(UploadMultipartPartResult(outcome.GetResult()));
  }
  else
  {
    return UploadMultipartPartOutcome(outcome.GetError());
  }
}

UploadMultipartPartOutcomeCallable GlacierClient::UploadMultipartPartCallable(const UploadMultipartPartRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UploadMultipartPartOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UploadMultipartPart(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void GlacierClient::UploadMultipartPartAsync(const UploadMultipartPartRequest& request, const UploadMultipartPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UploadMultipartPartAsyncHelper( request, handler, context ); } );
}

void GlacierClient::UploadMultipartPartAsyncHelper(const UploadMultipartPartRequest& request, const UploadMultipartPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UploadMultipartPart(request), context);
}

