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

#include <aws/amplifybackend/AmplifyBackendClient.h>
#include <aws/amplifybackend/AmplifyBackendEndpoint.h>
#include <aws/amplifybackend/AmplifyBackendErrorMarshaller.h>
#include <aws/amplifybackend/model/CloneBackendRequest.h>
#include <aws/amplifybackend/model/CreateBackendRequest.h>
#include <aws/amplifybackend/model/CreateBackendAPIRequest.h>
#include <aws/amplifybackend/model/CreateBackendAuthRequest.h>
#include <aws/amplifybackend/model/CreateBackendConfigRequest.h>
#include <aws/amplifybackend/model/CreateBackendStorageRequest.h>
#include <aws/amplifybackend/model/CreateTokenRequest.h>
#include <aws/amplifybackend/model/DeleteBackendRequest.h>
#include <aws/amplifybackend/model/DeleteBackendAPIRequest.h>
#include <aws/amplifybackend/model/DeleteBackendAuthRequest.h>
#include <aws/amplifybackend/model/DeleteBackendStorageRequest.h>
#include <aws/amplifybackend/model/DeleteTokenRequest.h>
#include <aws/amplifybackend/model/GenerateBackendAPIModelsRequest.h>
#include <aws/amplifybackend/model/GetBackendRequest.h>
#include <aws/amplifybackend/model/GetBackendAPIRequest.h>
#include <aws/amplifybackend/model/GetBackendAPIModelsRequest.h>
#include <aws/amplifybackend/model/GetBackendAuthRequest.h>
#include <aws/amplifybackend/model/GetBackendJobRequest.h>
#include <aws/amplifybackend/model/GetBackendStorageRequest.h>
#include <aws/amplifybackend/model/GetTokenRequest.h>
#include <aws/amplifybackend/model/ImportBackendAuthRequest.h>
#include <aws/amplifybackend/model/ImportBackendStorageRequest.h>
#include <aws/amplifybackend/model/ListBackendJobsRequest.h>
#include <aws/amplifybackend/model/ListS3BucketsRequest.h>
#include <aws/amplifybackend/model/RemoveAllBackendsRequest.h>
#include <aws/amplifybackend/model/RemoveBackendConfigRequest.h>
#include <aws/amplifybackend/model/UpdateBackendAPIRequest.h>
#include <aws/amplifybackend/model/UpdateBackendAuthRequest.h>
#include <aws/amplifybackend/model/UpdateBackendConfigRequest.h>
#include <aws/amplifybackend/model/UpdateBackendJobRequest.h>
#include <aws/amplifybackend/model/UpdateBackendStorageRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::AmplifyBackend;
using namespace Aws::AmplifyBackend::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "amplifybackend";
static const char* ALLOCATION_TAG = "AmplifyBackendClient";


AmplifyBackendClient::AmplifyBackendClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<AmplifyBackendErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AmplifyBackendClient::AmplifyBackendClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<AmplifyBackendErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AmplifyBackendClient::AmplifyBackendClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<AmplifyBackendErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AmplifyBackendClient::~AmplifyBackendClient()
{
}

void AmplifyBackendClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("AmplifyBackend");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + AmplifyBackendEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void AmplifyBackendClient::OverrideEndpoint(const Aws::String& endpoint)
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

CloneBackendOutcome AmplifyBackendClient::CloneBackend(const CloneBackendRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CloneBackend", "Required field: AppId, is not set");
    return CloneBackendOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CloneBackend", "Required field: BackendEnvironmentName, is not set");
    return CloneBackendOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backend/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/environments/");
  uri.AddPathSegment(request.GetBackendEnvironmentName());
  uri.AddPathSegments("/clone");
  return CloneBackendOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CloneBackendOutcomeCallable AmplifyBackendClient::CloneBackendCallable(const CloneBackendRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CloneBackendOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CloneBackend(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyBackendClient::CloneBackendAsync(const CloneBackendRequest& request, const CloneBackendResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CloneBackendAsyncHelper( request, handler, context ); } );
}

void AmplifyBackendClient::CloneBackendAsyncHelper(const CloneBackendRequest& request, const CloneBackendResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CloneBackend(request), context);
}

CreateBackendOutcome AmplifyBackendClient::CreateBackend(const CreateBackendRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backend");
  return CreateBackendOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBackendOutcomeCallable AmplifyBackendClient::CreateBackendCallable(const CreateBackendRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBackendOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBackend(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyBackendClient::CreateBackendAsync(const CreateBackendRequest& request, const CreateBackendResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateBackendAsyncHelper( request, handler, context ); } );
}

void AmplifyBackendClient::CreateBackendAsyncHelper(const CreateBackendRequest& request, const CreateBackendResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateBackend(request), context);
}

CreateBackendAPIOutcome AmplifyBackendClient::CreateBackendAPI(const CreateBackendAPIRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBackendAPI", "Required field: AppId, is not set");
    return CreateBackendAPIOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backend/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/api");
  return CreateBackendAPIOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBackendAPIOutcomeCallable AmplifyBackendClient::CreateBackendAPICallable(const CreateBackendAPIRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBackendAPIOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBackendAPI(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyBackendClient::CreateBackendAPIAsync(const CreateBackendAPIRequest& request, const CreateBackendAPIResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateBackendAPIAsyncHelper( request, handler, context ); } );
}

void AmplifyBackendClient::CreateBackendAPIAsyncHelper(const CreateBackendAPIRequest& request, const CreateBackendAPIResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateBackendAPI(request), context);
}

CreateBackendAuthOutcome AmplifyBackendClient::CreateBackendAuth(const CreateBackendAuthRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBackendAuth", "Required field: AppId, is not set");
    return CreateBackendAuthOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backend/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/auth");
  return CreateBackendAuthOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBackendAuthOutcomeCallable AmplifyBackendClient::CreateBackendAuthCallable(const CreateBackendAuthRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBackendAuthOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBackendAuth(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyBackendClient::CreateBackendAuthAsync(const CreateBackendAuthRequest& request, const CreateBackendAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateBackendAuthAsyncHelper( request, handler, context ); } );
}

void AmplifyBackendClient::CreateBackendAuthAsyncHelper(const CreateBackendAuthRequest& request, const CreateBackendAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateBackendAuth(request), context);
}

CreateBackendConfigOutcome AmplifyBackendClient::CreateBackendConfig(const CreateBackendConfigRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBackendConfig", "Required field: AppId, is not set");
    return CreateBackendConfigOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backend/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/config");
  return CreateBackendConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBackendConfigOutcomeCallable AmplifyBackendClient::CreateBackendConfigCallable(const CreateBackendConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBackendConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBackendConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyBackendClient::CreateBackendConfigAsync(const CreateBackendConfigRequest& request, const CreateBackendConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateBackendConfigAsyncHelper( request, handler, context ); } );
}

void AmplifyBackendClient::CreateBackendConfigAsyncHelper(const CreateBackendConfigRequest& request, const CreateBackendConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateBackendConfig(request), context);
}

CreateBackendStorageOutcome AmplifyBackendClient::CreateBackendStorage(const CreateBackendStorageRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBackendStorage", "Required field: AppId, is not set");
    return CreateBackendStorageOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backend/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/storage");
  return CreateBackendStorageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBackendStorageOutcomeCallable AmplifyBackendClient::CreateBackendStorageCallable(const CreateBackendStorageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBackendStorageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBackendStorage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyBackendClient::CreateBackendStorageAsync(const CreateBackendStorageRequest& request, const CreateBackendStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateBackendStorageAsyncHelper( request, handler, context ); } );
}

void AmplifyBackendClient::CreateBackendStorageAsyncHelper(const CreateBackendStorageRequest& request, const CreateBackendStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateBackendStorage(request), context);
}

CreateTokenOutcome AmplifyBackendClient::CreateToken(const CreateTokenRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateToken", "Required field: AppId, is not set");
    return CreateTokenOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backend/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/challenge");
  return CreateTokenOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTokenOutcomeCallable AmplifyBackendClient::CreateTokenCallable(const CreateTokenRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTokenOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateToken(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyBackendClient::CreateTokenAsync(const CreateTokenRequest& request, const CreateTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateTokenAsyncHelper( request, handler, context ); } );
}

void AmplifyBackendClient::CreateTokenAsyncHelper(const CreateTokenRequest& request, const CreateTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateToken(request), context);
}

DeleteBackendOutcome AmplifyBackendClient::DeleteBackend(const DeleteBackendRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBackend", "Required field: AppId, is not set");
    return DeleteBackendOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBackend", "Required field: BackendEnvironmentName, is not set");
    return DeleteBackendOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backend/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/environments/");
  uri.AddPathSegment(request.GetBackendEnvironmentName());
  uri.AddPathSegments("/remove");
  return DeleteBackendOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteBackendOutcomeCallable AmplifyBackendClient::DeleteBackendCallable(const DeleteBackendRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBackendOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBackend(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyBackendClient::DeleteBackendAsync(const DeleteBackendRequest& request, const DeleteBackendResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteBackendAsyncHelper( request, handler, context ); } );
}

void AmplifyBackendClient::DeleteBackendAsyncHelper(const DeleteBackendRequest& request, const DeleteBackendResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteBackend(request), context);
}

DeleteBackendAPIOutcome AmplifyBackendClient::DeleteBackendAPI(const DeleteBackendAPIRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBackendAPI", "Required field: AppId, is not set");
    return DeleteBackendAPIOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBackendAPI", "Required field: BackendEnvironmentName, is not set");
    return DeleteBackendAPIOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backend/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/api/");
  uri.AddPathSegment(request.GetBackendEnvironmentName());
  uri.AddPathSegments("/remove");
  return DeleteBackendAPIOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteBackendAPIOutcomeCallable AmplifyBackendClient::DeleteBackendAPICallable(const DeleteBackendAPIRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBackendAPIOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBackendAPI(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyBackendClient::DeleteBackendAPIAsync(const DeleteBackendAPIRequest& request, const DeleteBackendAPIResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteBackendAPIAsyncHelper( request, handler, context ); } );
}

void AmplifyBackendClient::DeleteBackendAPIAsyncHelper(const DeleteBackendAPIRequest& request, const DeleteBackendAPIResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteBackendAPI(request), context);
}

DeleteBackendAuthOutcome AmplifyBackendClient::DeleteBackendAuth(const DeleteBackendAuthRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBackendAuth", "Required field: AppId, is not set");
    return DeleteBackendAuthOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBackendAuth", "Required field: BackendEnvironmentName, is not set");
    return DeleteBackendAuthOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backend/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/auth/");
  uri.AddPathSegment(request.GetBackendEnvironmentName());
  uri.AddPathSegments("/remove");
  return DeleteBackendAuthOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteBackendAuthOutcomeCallable AmplifyBackendClient::DeleteBackendAuthCallable(const DeleteBackendAuthRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBackendAuthOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBackendAuth(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyBackendClient::DeleteBackendAuthAsync(const DeleteBackendAuthRequest& request, const DeleteBackendAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteBackendAuthAsyncHelper( request, handler, context ); } );
}

void AmplifyBackendClient::DeleteBackendAuthAsyncHelper(const DeleteBackendAuthRequest& request, const DeleteBackendAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteBackendAuth(request), context);
}

DeleteBackendStorageOutcome AmplifyBackendClient::DeleteBackendStorage(const DeleteBackendStorageRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBackendStorage", "Required field: AppId, is not set");
    return DeleteBackendStorageOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBackendStorage", "Required field: BackendEnvironmentName, is not set");
    return DeleteBackendStorageOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backend/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/storage/");
  uri.AddPathSegment(request.GetBackendEnvironmentName());
  uri.AddPathSegments("/remove");
  return DeleteBackendStorageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteBackendStorageOutcomeCallable AmplifyBackendClient::DeleteBackendStorageCallable(const DeleteBackendStorageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBackendStorageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBackendStorage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyBackendClient::DeleteBackendStorageAsync(const DeleteBackendStorageRequest& request, const DeleteBackendStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteBackendStorageAsyncHelper( request, handler, context ); } );
}

void AmplifyBackendClient::DeleteBackendStorageAsyncHelper(const DeleteBackendStorageRequest& request, const DeleteBackendStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteBackendStorage(request), context);
}

DeleteTokenOutcome AmplifyBackendClient::DeleteToken(const DeleteTokenRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteToken", "Required field: AppId, is not set");
    return DeleteTokenOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.SessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteToken", "Required field: SessionId, is not set");
    return DeleteTokenOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backend/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/challenge/");
  uri.AddPathSegment(request.GetSessionId());
  uri.AddPathSegments("/remove");
  return DeleteTokenOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTokenOutcomeCallable AmplifyBackendClient::DeleteTokenCallable(const DeleteTokenRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTokenOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteToken(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyBackendClient::DeleteTokenAsync(const DeleteTokenRequest& request, const DeleteTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteTokenAsyncHelper( request, handler, context ); } );
}

void AmplifyBackendClient::DeleteTokenAsyncHelper(const DeleteTokenRequest& request, const DeleteTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteToken(request), context);
}

GenerateBackendAPIModelsOutcome AmplifyBackendClient::GenerateBackendAPIModels(const GenerateBackendAPIModelsRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GenerateBackendAPIModels", "Required field: AppId, is not set");
    return GenerateBackendAPIModelsOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GenerateBackendAPIModels", "Required field: BackendEnvironmentName, is not set");
    return GenerateBackendAPIModelsOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backend/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/api/");
  uri.AddPathSegment(request.GetBackendEnvironmentName());
  uri.AddPathSegments("/generateModels");
  return GenerateBackendAPIModelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GenerateBackendAPIModelsOutcomeCallable AmplifyBackendClient::GenerateBackendAPIModelsCallable(const GenerateBackendAPIModelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GenerateBackendAPIModelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GenerateBackendAPIModels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyBackendClient::GenerateBackendAPIModelsAsync(const GenerateBackendAPIModelsRequest& request, const GenerateBackendAPIModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GenerateBackendAPIModelsAsyncHelper( request, handler, context ); } );
}

void AmplifyBackendClient::GenerateBackendAPIModelsAsyncHelper(const GenerateBackendAPIModelsRequest& request, const GenerateBackendAPIModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GenerateBackendAPIModels(request), context);
}

GetBackendOutcome AmplifyBackendClient::GetBackend(const GetBackendRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBackend", "Required field: AppId, is not set");
    return GetBackendOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backend/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/details");
  return GetBackendOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBackendOutcomeCallable AmplifyBackendClient::GetBackendCallable(const GetBackendRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBackendOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBackend(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyBackendClient::GetBackendAsync(const GetBackendRequest& request, const GetBackendResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetBackendAsyncHelper( request, handler, context ); } );
}

void AmplifyBackendClient::GetBackendAsyncHelper(const GetBackendRequest& request, const GetBackendResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBackend(request), context);
}

GetBackendAPIOutcome AmplifyBackendClient::GetBackendAPI(const GetBackendAPIRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBackendAPI", "Required field: AppId, is not set");
    return GetBackendAPIOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBackendAPI", "Required field: BackendEnvironmentName, is not set");
    return GetBackendAPIOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backend/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/api/");
  uri.AddPathSegment(request.GetBackendEnvironmentName());
  uri.AddPathSegments("/details");
  return GetBackendAPIOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBackendAPIOutcomeCallable AmplifyBackendClient::GetBackendAPICallable(const GetBackendAPIRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBackendAPIOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBackendAPI(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyBackendClient::GetBackendAPIAsync(const GetBackendAPIRequest& request, const GetBackendAPIResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetBackendAPIAsyncHelper( request, handler, context ); } );
}

void AmplifyBackendClient::GetBackendAPIAsyncHelper(const GetBackendAPIRequest& request, const GetBackendAPIResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBackendAPI(request), context);
}

GetBackendAPIModelsOutcome AmplifyBackendClient::GetBackendAPIModels(const GetBackendAPIModelsRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBackendAPIModels", "Required field: AppId, is not set");
    return GetBackendAPIModelsOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBackendAPIModels", "Required field: BackendEnvironmentName, is not set");
    return GetBackendAPIModelsOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backend/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/api/");
  uri.AddPathSegment(request.GetBackendEnvironmentName());
  uri.AddPathSegments("/getModels");
  return GetBackendAPIModelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBackendAPIModelsOutcomeCallable AmplifyBackendClient::GetBackendAPIModelsCallable(const GetBackendAPIModelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBackendAPIModelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBackendAPIModels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyBackendClient::GetBackendAPIModelsAsync(const GetBackendAPIModelsRequest& request, const GetBackendAPIModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetBackendAPIModelsAsyncHelper( request, handler, context ); } );
}

void AmplifyBackendClient::GetBackendAPIModelsAsyncHelper(const GetBackendAPIModelsRequest& request, const GetBackendAPIModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBackendAPIModels(request), context);
}

GetBackendAuthOutcome AmplifyBackendClient::GetBackendAuth(const GetBackendAuthRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBackendAuth", "Required field: AppId, is not set");
    return GetBackendAuthOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBackendAuth", "Required field: BackendEnvironmentName, is not set");
    return GetBackendAuthOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backend/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/auth/");
  uri.AddPathSegment(request.GetBackendEnvironmentName());
  uri.AddPathSegments("/details");
  return GetBackendAuthOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBackendAuthOutcomeCallable AmplifyBackendClient::GetBackendAuthCallable(const GetBackendAuthRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBackendAuthOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBackendAuth(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyBackendClient::GetBackendAuthAsync(const GetBackendAuthRequest& request, const GetBackendAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetBackendAuthAsyncHelper( request, handler, context ); } );
}

void AmplifyBackendClient::GetBackendAuthAsyncHelper(const GetBackendAuthRequest& request, const GetBackendAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBackendAuth(request), context);
}

GetBackendJobOutcome AmplifyBackendClient::GetBackendJob(const GetBackendJobRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBackendJob", "Required field: AppId, is not set");
    return GetBackendJobOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBackendJob", "Required field: BackendEnvironmentName, is not set");
    return GetBackendJobOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBackendJob", "Required field: JobId, is not set");
    return GetBackendJobOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backend/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/job/");
  uri.AddPathSegment(request.GetBackendEnvironmentName());
  uri.AddPathSegment(request.GetJobId());
  return GetBackendJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetBackendJobOutcomeCallable AmplifyBackendClient::GetBackendJobCallable(const GetBackendJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBackendJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBackendJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyBackendClient::GetBackendJobAsync(const GetBackendJobRequest& request, const GetBackendJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetBackendJobAsyncHelper( request, handler, context ); } );
}

void AmplifyBackendClient::GetBackendJobAsyncHelper(const GetBackendJobRequest& request, const GetBackendJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBackendJob(request), context);
}

GetBackendStorageOutcome AmplifyBackendClient::GetBackendStorage(const GetBackendStorageRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBackendStorage", "Required field: AppId, is not set");
    return GetBackendStorageOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBackendStorage", "Required field: BackendEnvironmentName, is not set");
    return GetBackendStorageOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backend/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/storage/");
  uri.AddPathSegment(request.GetBackendEnvironmentName());
  uri.AddPathSegments("/details");
  return GetBackendStorageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetBackendStorageOutcomeCallable AmplifyBackendClient::GetBackendStorageCallable(const GetBackendStorageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBackendStorageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBackendStorage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyBackendClient::GetBackendStorageAsync(const GetBackendStorageRequest& request, const GetBackendStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetBackendStorageAsyncHelper( request, handler, context ); } );
}

void AmplifyBackendClient::GetBackendStorageAsyncHelper(const GetBackendStorageRequest& request, const GetBackendStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBackendStorage(request), context);
}

GetTokenOutcome AmplifyBackendClient::GetToken(const GetTokenRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetToken", "Required field: AppId, is not set");
    return GetTokenOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.SessionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetToken", "Required field: SessionId, is not set");
    return GetTokenOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SessionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backend/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/challenge/");
  uri.AddPathSegment(request.GetSessionId());
  return GetTokenOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetTokenOutcomeCallable AmplifyBackendClient::GetTokenCallable(const GetTokenRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTokenOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetToken(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyBackendClient::GetTokenAsync(const GetTokenRequest& request, const GetTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTokenAsyncHelper( request, handler, context ); } );
}

void AmplifyBackendClient::GetTokenAsyncHelper(const GetTokenRequest& request, const GetTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetToken(request), context);
}

ImportBackendAuthOutcome AmplifyBackendClient::ImportBackendAuth(const ImportBackendAuthRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ImportBackendAuth", "Required field: AppId, is not set");
    return ImportBackendAuthOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ImportBackendAuth", "Required field: BackendEnvironmentName, is not set");
    return ImportBackendAuthOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backend/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/auth/");
  uri.AddPathSegment(request.GetBackendEnvironmentName());
  uri.AddPathSegments("/import");
  return ImportBackendAuthOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportBackendAuthOutcomeCallable AmplifyBackendClient::ImportBackendAuthCallable(const ImportBackendAuthRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportBackendAuthOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportBackendAuth(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyBackendClient::ImportBackendAuthAsync(const ImportBackendAuthRequest& request, const ImportBackendAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ImportBackendAuthAsyncHelper( request, handler, context ); } );
}

void AmplifyBackendClient::ImportBackendAuthAsyncHelper(const ImportBackendAuthRequest& request, const ImportBackendAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ImportBackendAuth(request), context);
}

ImportBackendStorageOutcome AmplifyBackendClient::ImportBackendStorage(const ImportBackendStorageRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ImportBackendStorage", "Required field: AppId, is not set");
    return ImportBackendStorageOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ImportBackendStorage", "Required field: BackendEnvironmentName, is not set");
    return ImportBackendStorageOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backend/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/storage/");
  uri.AddPathSegment(request.GetBackendEnvironmentName());
  uri.AddPathSegments("/import");
  return ImportBackendStorageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportBackendStorageOutcomeCallable AmplifyBackendClient::ImportBackendStorageCallable(const ImportBackendStorageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportBackendStorageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportBackendStorage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyBackendClient::ImportBackendStorageAsync(const ImportBackendStorageRequest& request, const ImportBackendStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ImportBackendStorageAsyncHelper( request, handler, context ); } );
}

void AmplifyBackendClient::ImportBackendStorageAsyncHelper(const ImportBackendStorageRequest& request, const ImportBackendStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ImportBackendStorage(request), context);
}

ListBackendJobsOutcome AmplifyBackendClient::ListBackendJobs(const ListBackendJobsRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBackendJobs", "Required field: AppId, is not set");
    return ListBackendJobsOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBackendJobs", "Required field: BackendEnvironmentName, is not set");
    return ListBackendJobsOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backend/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/job/");
  uri.AddPathSegment(request.GetBackendEnvironmentName());
  return ListBackendJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListBackendJobsOutcomeCallable AmplifyBackendClient::ListBackendJobsCallable(const ListBackendJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListBackendJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListBackendJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyBackendClient::ListBackendJobsAsync(const ListBackendJobsRequest& request, const ListBackendJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListBackendJobsAsyncHelper( request, handler, context ); } );
}

void AmplifyBackendClient::ListBackendJobsAsyncHelper(const ListBackendJobsRequest& request, const ListBackendJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListBackendJobs(request), context);
}

ListS3BucketsOutcome AmplifyBackendClient::ListS3Buckets(const ListS3BucketsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/s3Buckets");
  return ListS3BucketsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListS3BucketsOutcomeCallable AmplifyBackendClient::ListS3BucketsCallable(const ListS3BucketsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListS3BucketsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListS3Buckets(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyBackendClient::ListS3BucketsAsync(const ListS3BucketsRequest& request, const ListS3BucketsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListS3BucketsAsyncHelper( request, handler, context ); } );
}

void AmplifyBackendClient::ListS3BucketsAsyncHelper(const ListS3BucketsRequest& request, const ListS3BucketsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListS3Buckets(request), context);
}

RemoveAllBackendsOutcome AmplifyBackendClient::RemoveAllBackends(const RemoveAllBackendsRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveAllBackends", "Required field: AppId, is not set");
    return RemoveAllBackendsOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backend/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/remove");
  return RemoveAllBackendsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveAllBackendsOutcomeCallable AmplifyBackendClient::RemoveAllBackendsCallable(const RemoveAllBackendsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveAllBackendsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveAllBackends(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyBackendClient::RemoveAllBackendsAsync(const RemoveAllBackendsRequest& request, const RemoveAllBackendsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveAllBackendsAsyncHelper( request, handler, context ); } );
}

void AmplifyBackendClient::RemoveAllBackendsAsyncHelper(const RemoveAllBackendsRequest& request, const RemoveAllBackendsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveAllBackends(request), context);
}

RemoveBackendConfigOutcome AmplifyBackendClient::RemoveBackendConfig(const RemoveBackendConfigRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveBackendConfig", "Required field: AppId, is not set");
    return RemoveBackendConfigOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backend/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/config/remove");
  return RemoveBackendConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveBackendConfigOutcomeCallable AmplifyBackendClient::RemoveBackendConfigCallable(const RemoveBackendConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveBackendConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveBackendConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyBackendClient::RemoveBackendConfigAsync(const RemoveBackendConfigRequest& request, const RemoveBackendConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->RemoveBackendConfigAsyncHelper( request, handler, context ); } );
}

void AmplifyBackendClient::RemoveBackendConfigAsyncHelper(const RemoveBackendConfigRequest& request, const RemoveBackendConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RemoveBackendConfig(request), context);
}

UpdateBackendAPIOutcome AmplifyBackendClient::UpdateBackendAPI(const UpdateBackendAPIRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBackendAPI", "Required field: AppId, is not set");
    return UpdateBackendAPIOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBackendAPI", "Required field: BackendEnvironmentName, is not set");
    return UpdateBackendAPIOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backend/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/api/");
  uri.AddPathSegment(request.GetBackendEnvironmentName());
  return UpdateBackendAPIOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateBackendAPIOutcomeCallable AmplifyBackendClient::UpdateBackendAPICallable(const UpdateBackendAPIRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBackendAPIOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBackendAPI(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyBackendClient::UpdateBackendAPIAsync(const UpdateBackendAPIRequest& request, const UpdateBackendAPIResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateBackendAPIAsyncHelper( request, handler, context ); } );
}

void AmplifyBackendClient::UpdateBackendAPIAsyncHelper(const UpdateBackendAPIRequest& request, const UpdateBackendAPIResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateBackendAPI(request), context);
}

UpdateBackendAuthOutcome AmplifyBackendClient::UpdateBackendAuth(const UpdateBackendAuthRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBackendAuth", "Required field: AppId, is not set");
    return UpdateBackendAuthOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBackendAuth", "Required field: BackendEnvironmentName, is not set");
    return UpdateBackendAuthOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backend/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/auth/");
  uri.AddPathSegment(request.GetBackendEnvironmentName());
  return UpdateBackendAuthOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateBackendAuthOutcomeCallable AmplifyBackendClient::UpdateBackendAuthCallable(const UpdateBackendAuthRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBackendAuthOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBackendAuth(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyBackendClient::UpdateBackendAuthAsync(const UpdateBackendAuthRequest& request, const UpdateBackendAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateBackendAuthAsyncHelper( request, handler, context ); } );
}

void AmplifyBackendClient::UpdateBackendAuthAsyncHelper(const UpdateBackendAuthRequest& request, const UpdateBackendAuthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateBackendAuth(request), context);
}

UpdateBackendConfigOutcome AmplifyBackendClient::UpdateBackendConfig(const UpdateBackendConfigRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBackendConfig", "Required field: AppId, is not set");
    return UpdateBackendConfigOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backend/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/config/update");
  return UpdateBackendConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateBackendConfigOutcomeCallable AmplifyBackendClient::UpdateBackendConfigCallable(const UpdateBackendConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBackendConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBackendConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyBackendClient::UpdateBackendConfigAsync(const UpdateBackendConfigRequest& request, const UpdateBackendConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateBackendConfigAsyncHelper( request, handler, context ); } );
}

void AmplifyBackendClient::UpdateBackendConfigAsyncHelper(const UpdateBackendConfigRequest& request, const UpdateBackendConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateBackendConfig(request), context);
}

UpdateBackendJobOutcome AmplifyBackendClient::UpdateBackendJob(const UpdateBackendJobRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBackendJob", "Required field: AppId, is not set");
    return UpdateBackendJobOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBackendJob", "Required field: BackendEnvironmentName, is not set");
    return UpdateBackendJobOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  if (!request.JobIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBackendJob", "Required field: JobId, is not set");
    return UpdateBackendJobOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backend/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/job/");
  uri.AddPathSegment(request.GetBackendEnvironmentName());
  uri.AddPathSegment(request.GetJobId());
  return UpdateBackendJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateBackendJobOutcomeCallable AmplifyBackendClient::UpdateBackendJobCallable(const UpdateBackendJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBackendJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBackendJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyBackendClient::UpdateBackendJobAsync(const UpdateBackendJobRequest& request, const UpdateBackendJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateBackendJobAsyncHelper( request, handler, context ); } );
}

void AmplifyBackendClient::UpdateBackendJobAsyncHelper(const UpdateBackendJobRequest& request, const UpdateBackendJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateBackendJob(request), context);
}

UpdateBackendStorageOutcome AmplifyBackendClient::UpdateBackendStorage(const UpdateBackendStorageRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBackendStorage", "Required field: AppId, is not set");
    return UpdateBackendStorageOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.BackendEnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBackendStorage", "Required field: BackendEnvironmentName, is not set");
    return UpdateBackendStorageOutcome(Aws::Client::AWSError<AmplifyBackendErrors>(AmplifyBackendErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BackendEnvironmentName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/backend/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/storage/");
  uri.AddPathSegment(request.GetBackendEnvironmentName());
  return UpdateBackendStorageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateBackendStorageOutcomeCallable AmplifyBackendClient::UpdateBackendStorageCallable(const UpdateBackendStorageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBackendStorageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBackendStorage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyBackendClient::UpdateBackendStorageAsync(const UpdateBackendStorageRequest& request, const UpdateBackendStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateBackendStorageAsyncHelper( request, handler, context ); } );
}

void AmplifyBackendClient::UpdateBackendStorageAsyncHelper(const UpdateBackendStorageRequest& request, const UpdateBackendStorageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateBackendStorage(request), context);
}

