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

#include <aws/chime-sdk-identity/ChimeSDKIdentityClient.h>
#include <aws/chime-sdk-identity/ChimeSDKIdentityEndpoint.h>
#include <aws/chime-sdk-identity/ChimeSDKIdentityErrorMarshaller.h>
#include <aws/chime-sdk-identity/model/CreateAppInstanceRequest.h>
#include <aws/chime-sdk-identity/model/CreateAppInstanceAdminRequest.h>
#include <aws/chime-sdk-identity/model/CreateAppInstanceUserRequest.h>
#include <aws/chime-sdk-identity/model/DeleteAppInstanceRequest.h>
#include <aws/chime-sdk-identity/model/DeleteAppInstanceAdminRequest.h>
#include <aws/chime-sdk-identity/model/DeleteAppInstanceUserRequest.h>
#include <aws/chime-sdk-identity/model/DeregisterAppInstanceUserEndpointRequest.h>
#include <aws/chime-sdk-identity/model/DescribeAppInstanceRequest.h>
#include <aws/chime-sdk-identity/model/DescribeAppInstanceAdminRequest.h>
#include <aws/chime-sdk-identity/model/DescribeAppInstanceUserRequest.h>
#include <aws/chime-sdk-identity/model/DescribeAppInstanceUserEndpointRequest.h>
#include <aws/chime-sdk-identity/model/GetAppInstanceRetentionSettingsRequest.h>
#include <aws/chime-sdk-identity/model/ListAppInstanceAdminsRequest.h>
#include <aws/chime-sdk-identity/model/ListAppInstanceUserEndpointsRequest.h>
#include <aws/chime-sdk-identity/model/ListAppInstanceUsersRequest.h>
#include <aws/chime-sdk-identity/model/ListAppInstancesRequest.h>
#include <aws/chime-sdk-identity/model/ListTagsForResourceRequest.h>
#include <aws/chime-sdk-identity/model/PutAppInstanceRetentionSettingsRequest.h>
#include <aws/chime-sdk-identity/model/RegisterAppInstanceUserEndpointRequest.h>
#include <aws/chime-sdk-identity/model/TagResourceRequest.h>
#include <aws/chime-sdk-identity/model/UntagResourceRequest.h>
#include <aws/chime-sdk-identity/model/UpdateAppInstanceRequest.h>
#include <aws/chime-sdk-identity/model/UpdateAppInstanceUserRequest.h>
#include <aws/chime-sdk-identity/model/UpdateAppInstanceUserEndpointRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ChimeSDKIdentity;
using namespace Aws::ChimeSDKIdentity::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "chime";
static const char* ALLOCATION_TAG = "ChimeSDKIdentityClient";

ChimeSDKIdentityClient::ChimeSDKIdentityClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ChimeSDKIdentityErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ChimeSDKIdentityClient::ChimeSDKIdentityClient(const AWSCredentials& credentials,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ChimeSDKIdentityErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ChimeSDKIdentityClient::ChimeSDKIdentityClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ChimeSDKIdentityErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ChimeSDKIdentityClient::~ChimeSDKIdentityClient()
{
}

void ChimeSDKIdentityClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Chime SDK Identity");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ChimeSDKIdentityEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ChimeSDKIdentityClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateAppInstanceOutcome ChimeSDKIdentityClient::CreateAppInstance(const CreateAppInstanceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/app-instances");
  return CreateAppInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAppInstanceOutcomeCallable ChimeSDKIdentityClient::CreateAppInstanceCallable(const CreateAppInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAppInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAppInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKIdentityClientCreateAppInstanceAsyncHelper(ChimeSDKIdentityClient const * const clientThis, const CreateAppInstanceRequest& request, const CreateAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAppInstance(request), context);
}

void ChimeSDKIdentityClient::CreateAppInstanceAsync(const CreateAppInstanceRequest& request, const CreateAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ChimeSDKIdentityClientCreateAppInstanceAsyncHelper( this, request, handler, context ); } );
}

CreateAppInstanceAdminOutcome ChimeSDKIdentityClient::CreateAppInstanceAdmin(const CreateAppInstanceAdminRequest& request) const
{
  if (!request.AppInstanceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAppInstanceAdmin", "Required field: AppInstanceArn, is not set");
    return CreateAppInstanceAdminOutcome(Aws::Client::AWSError<ChimeSDKIdentityErrors>(ChimeSDKIdentityErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/app-instances/");
  uri.AddPathSegment(request.GetAppInstanceArn());
  uri.AddPathSegments("/admins");
  return CreateAppInstanceAdminOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAppInstanceAdminOutcomeCallable ChimeSDKIdentityClient::CreateAppInstanceAdminCallable(const CreateAppInstanceAdminRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAppInstanceAdminOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAppInstanceAdmin(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKIdentityClientCreateAppInstanceAdminAsyncHelper(ChimeSDKIdentityClient const * const clientThis, const CreateAppInstanceAdminRequest& request, const CreateAppInstanceAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAppInstanceAdmin(request), context);
}

void ChimeSDKIdentityClient::CreateAppInstanceAdminAsync(const CreateAppInstanceAdminRequest& request, const CreateAppInstanceAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ChimeSDKIdentityClientCreateAppInstanceAdminAsyncHelper( this, request, handler, context ); } );
}

CreateAppInstanceUserOutcome ChimeSDKIdentityClient::CreateAppInstanceUser(const CreateAppInstanceUserRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/app-instance-users");
  return CreateAppInstanceUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAppInstanceUserOutcomeCallable ChimeSDKIdentityClient::CreateAppInstanceUserCallable(const CreateAppInstanceUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAppInstanceUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAppInstanceUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKIdentityClientCreateAppInstanceUserAsyncHelper(ChimeSDKIdentityClient const * const clientThis, const CreateAppInstanceUserRequest& request, const CreateAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAppInstanceUser(request), context);
}

void ChimeSDKIdentityClient::CreateAppInstanceUserAsync(const CreateAppInstanceUserRequest& request, const CreateAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ChimeSDKIdentityClientCreateAppInstanceUserAsyncHelper( this, request, handler, context ); } );
}

DeleteAppInstanceOutcome ChimeSDKIdentityClient::DeleteAppInstance(const DeleteAppInstanceRequest& request) const
{
  if (!request.AppInstanceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAppInstance", "Required field: AppInstanceArn, is not set");
    return DeleteAppInstanceOutcome(Aws::Client::AWSError<ChimeSDKIdentityErrors>(ChimeSDKIdentityErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/app-instances/");
  uri.AddPathSegment(request.GetAppInstanceArn());
  return DeleteAppInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAppInstanceOutcomeCallable ChimeSDKIdentityClient::DeleteAppInstanceCallable(const DeleteAppInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAppInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAppInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKIdentityClientDeleteAppInstanceAsyncHelper(ChimeSDKIdentityClient const * const clientThis, const DeleteAppInstanceRequest& request, const DeleteAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAppInstance(request), context);
}

void ChimeSDKIdentityClient::DeleteAppInstanceAsync(const DeleteAppInstanceRequest& request, const DeleteAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ChimeSDKIdentityClientDeleteAppInstanceAsyncHelper( this, request, handler, context ); } );
}

DeleteAppInstanceAdminOutcome ChimeSDKIdentityClient::DeleteAppInstanceAdmin(const DeleteAppInstanceAdminRequest& request) const
{
  if (!request.AppInstanceAdminArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAppInstanceAdmin", "Required field: AppInstanceAdminArn, is not set");
    return DeleteAppInstanceAdminOutcome(Aws::Client::AWSError<ChimeSDKIdentityErrors>(ChimeSDKIdentityErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceAdminArn]", false));
  }
  if (!request.AppInstanceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAppInstanceAdmin", "Required field: AppInstanceArn, is not set");
    return DeleteAppInstanceAdminOutcome(Aws::Client::AWSError<ChimeSDKIdentityErrors>(ChimeSDKIdentityErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/app-instances/");
  uri.AddPathSegment(request.GetAppInstanceArn());
  uri.AddPathSegments("/admins/");
  uri.AddPathSegment(request.GetAppInstanceAdminArn());
  return DeleteAppInstanceAdminOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAppInstanceAdminOutcomeCallable ChimeSDKIdentityClient::DeleteAppInstanceAdminCallable(const DeleteAppInstanceAdminRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAppInstanceAdminOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAppInstanceAdmin(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKIdentityClientDeleteAppInstanceAdminAsyncHelper(ChimeSDKIdentityClient const * const clientThis, const DeleteAppInstanceAdminRequest& request, const DeleteAppInstanceAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAppInstanceAdmin(request), context);
}

void ChimeSDKIdentityClient::DeleteAppInstanceAdminAsync(const DeleteAppInstanceAdminRequest& request, const DeleteAppInstanceAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ChimeSDKIdentityClientDeleteAppInstanceAdminAsyncHelper( this, request, handler, context ); } );
}

DeleteAppInstanceUserOutcome ChimeSDKIdentityClient::DeleteAppInstanceUser(const DeleteAppInstanceUserRequest& request) const
{
  if (!request.AppInstanceUserArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAppInstanceUser", "Required field: AppInstanceUserArn, is not set");
    return DeleteAppInstanceUserOutcome(Aws::Client::AWSError<ChimeSDKIdentityErrors>(ChimeSDKIdentityErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceUserArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/app-instance-users/");
  uri.AddPathSegment(request.GetAppInstanceUserArn());
  return DeleteAppInstanceUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAppInstanceUserOutcomeCallable ChimeSDKIdentityClient::DeleteAppInstanceUserCallable(const DeleteAppInstanceUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAppInstanceUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAppInstanceUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKIdentityClientDeleteAppInstanceUserAsyncHelper(ChimeSDKIdentityClient const * const clientThis, const DeleteAppInstanceUserRequest& request, const DeleteAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAppInstanceUser(request), context);
}

void ChimeSDKIdentityClient::DeleteAppInstanceUserAsync(const DeleteAppInstanceUserRequest& request, const DeleteAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ChimeSDKIdentityClientDeleteAppInstanceUserAsyncHelper( this, request, handler, context ); } );
}

DeregisterAppInstanceUserEndpointOutcome ChimeSDKIdentityClient::DeregisterAppInstanceUserEndpoint(const DeregisterAppInstanceUserEndpointRequest& request) const
{
  if (!request.AppInstanceUserArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeregisterAppInstanceUserEndpoint", "Required field: AppInstanceUserArn, is not set");
    return DeregisterAppInstanceUserEndpointOutcome(Aws::Client::AWSError<ChimeSDKIdentityErrors>(ChimeSDKIdentityErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceUserArn]", false));
  }
  if (!request.EndpointIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeregisterAppInstanceUserEndpoint", "Required field: EndpointId, is not set");
    return DeregisterAppInstanceUserEndpointOutcome(Aws::Client::AWSError<ChimeSDKIdentityErrors>(ChimeSDKIdentityErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndpointId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/app-instance-users/");
  uri.AddPathSegment(request.GetAppInstanceUserArn());
  uri.AddPathSegments("/endpoints/");
  uri.AddPathSegment(request.GetEndpointId());
  return DeregisterAppInstanceUserEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeregisterAppInstanceUserEndpointOutcomeCallable ChimeSDKIdentityClient::DeregisterAppInstanceUserEndpointCallable(const DeregisterAppInstanceUserEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterAppInstanceUserEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterAppInstanceUserEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKIdentityClientDeregisterAppInstanceUserEndpointAsyncHelper(ChimeSDKIdentityClient const * const clientThis, const DeregisterAppInstanceUserEndpointRequest& request, const DeregisterAppInstanceUserEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeregisterAppInstanceUserEndpoint(request), context);
}

void ChimeSDKIdentityClient::DeregisterAppInstanceUserEndpointAsync(const DeregisterAppInstanceUserEndpointRequest& request, const DeregisterAppInstanceUserEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ChimeSDKIdentityClientDeregisterAppInstanceUserEndpointAsyncHelper( this, request, handler, context ); } );
}

DescribeAppInstanceOutcome ChimeSDKIdentityClient::DescribeAppInstance(const DescribeAppInstanceRequest& request) const
{
  if (!request.AppInstanceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAppInstance", "Required field: AppInstanceArn, is not set");
    return DescribeAppInstanceOutcome(Aws::Client::AWSError<ChimeSDKIdentityErrors>(ChimeSDKIdentityErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/app-instances/");
  uri.AddPathSegment(request.GetAppInstanceArn());
  return DescribeAppInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAppInstanceOutcomeCallable ChimeSDKIdentityClient::DescribeAppInstanceCallable(const DescribeAppInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAppInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAppInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKIdentityClientDescribeAppInstanceAsyncHelper(ChimeSDKIdentityClient const * const clientThis, const DescribeAppInstanceRequest& request, const DescribeAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAppInstance(request), context);
}

void ChimeSDKIdentityClient::DescribeAppInstanceAsync(const DescribeAppInstanceRequest& request, const DescribeAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ChimeSDKIdentityClientDescribeAppInstanceAsyncHelper( this, request, handler, context ); } );
}

DescribeAppInstanceAdminOutcome ChimeSDKIdentityClient::DescribeAppInstanceAdmin(const DescribeAppInstanceAdminRequest& request) const
{
  if (!request.AppInstanceAdminArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAppInstanceAdmin", "Required field: AppInstanceAdminArn, is not set");
    return DescribeAppInstanceAdminOutcome(Aws::Client::AWSError<ChimeSDKIdentityErrors>(ChimeSDKIdentityErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceAdminArn]", false));
  }
  if (!request.AppInstanceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAppInstanceAdmin", "Required field: AppInstanceArn, is not set");
    return DescribeAppInstanceAdminOutcome(Aws::Client::AWSError<ChimeSDKIdentityErrors>(ChimeSDKIdentityErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/app-instances/");
  uri.AddPathSegment(request.GetAppInstanceArn());
  uri.AddPathSegments("/admins/");
  uri.AddPathSegment(request.GetAppInstanceAdminArn());
  return DescribeAppInstanceAdminOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAppInstanceAdminOutcomeCallable ChimeSDKIdentityClient::DescribeAppInstanceAdminCallable(const DescribeAppInstanceAdminRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAppInstanceAdminOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAppInstanceAdmin(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKIdentityClientDescribeAppInstanceAdminAsyncHelper(ChimeSDKIdentityClient const * const clientThis, const DescribeAppInstanceAdminRequest& request, const DescribeAppInstanceAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAppInstanceAdmin(request), context);
}

void ChimeSDKIdentityClient::DescribeAppInstanceAdminAsync(const DescribeAppInstanceAdminRequest& request, const DescribeAppInstanceAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ChimeSDKIdentityClientDescribeAppInstanceAdminAsyncHelper( this, request, handler, context ); } );
}

DescribeAppInstanceUserOutcome ChimeSDKIdentityClient::DescribeAppInstanceUser(const DescribeAppInstanceUserRequest& request) const
{
  if (!request.AppInstanceUserArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAppInstanceUser", "Required field: AppInstanceUserArn, is not set");
    return DescribeAppInstanceUserOutcome(Aws::Client::AWSError<ChimeSDKIdentityErrors>(ChimeSDKIdentityErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceUserArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/app-instance-users/");
  uri.AddPathSegment(request.GetAppInstanceUserArn());
  return DescribeAppInstanceUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAppInstanceUserOutcomeCallable ChimeSDKIdentityClient::DescribeAppInstanceUserCallable(const DescribeAppInstanceUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAppInstanceUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAppInstanceUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKIdentityClientDescribeAppInstanceUserAsyncHelper(ChimeSDKIdentityClient const * const clientThis, const DescribeAppInstanceUserRequest& request, const DescribeAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAppInstanceUser(request), context);
}

void ChimeSDKIdentityClient::DescribeAppInstanceUserAsync(const DescribeAppInstanceUserRequest& request, const DescribeAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ChimeSDKIdentityClientDescribeAppInstanceUserAsyncHelper( this, request, handler, context ); } );
}

DescribeAppInstanceUserEndpointOutcome ChimeSDKIdentityClient::DescribeAppInstanceUserEndpoint(const DescribeAppInstanceUserEndpointRequest& request) const
{
  if (!request.AppInstanceUserArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAppInstanceUserEndpoint", "Required field: AppInstanceUserArn, is not set");
    return DescribeAppInstanceUserEndpointOutcome(Aws::Client::AWSError<ChimeSDKIdentityErrors>(ChimeSDKIdentityErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceUserArn]", false));
  }
  if (!request.EndpointIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeAppInstanceUserEndpoint", "Required field: EndpointId, is not set");
    return DescribeAppInstanceUserEndpointOutcome(Aws::Client::AWSError<ChimeSDKIdentityErrors>(ChimeSDKIdentityErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndpointId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/app-instance-users/");
  uri.AddPathSegment(request.GetAppInstanceUserArn());
  uri.AddPathSegments("/endpoints/");
  uri.AddPathSegment(request.GetEndpointId());
  return DescribeAppInstanceUserEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeAppInstanceUserEndpointOutcomeCallable ChimeSDKIdentityClient::DescribeAppInstanceUserEndpointCallable(const DescribeAppInstanceUserEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAppInstanceUserEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAppInstanceUserEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKIdentityClientDescribeAppInstanceUserEndpointAsyncHelper(ChimeSDKIdentityClient const * const clientThis, const DescribeAppInstanceUserEndpointRequest& request, const DescribeAppInstanceUserEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAppInstanceUserEndpoint(request), context);
}

void ChimeSDKIdentityClient::DescribeAppInstanceUserEndpointAsync(const DescribeAppInstanceUserEndpointRequest& request, const DescribeAppInstanceUserEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ChimeSDKIdentityClientDescribeAppInstanceUserEndpointAsyncHelper( this, request, handler, context ); } );
}

GetAppInstanceRetentionSettingsOutcome ChimeSDKIdentityClient::GetAppInstanceRetentionSettings(const GetAppInstanceRetentionSettingsRequest& request) const
{
  if (!request.AppInstanceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAppInstanceRetentionSettings", "Required field: AppInstanceArn, is not set");
    return GetAppInstanceRetentionSettingsOutcome(Aws::Client::AWSError<ChimeSDKIdentityErrors>(ChimeSDKIdentityErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/app-instances/");
  uri.AddPathSegment(request.GetAppInstanceArn());
  uri.AddPathSegments("/retention-settings");
  return GetAppInstanceRetentionSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAppInstanceRetentionSettingsOutcomeCallable ChimeSDKIdentityClient::GetAppInstanceRetentionSettingsCallable(const GetAppInstanceRetentionSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAppInstanceRetentionSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAppInstanceRetentionSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKIdentityClientGetAppInstanceRetentionSettingsAsyncHelper(ChimeSDKIdentityClient const * const clientThis, const GetAppInstanceRetentionSettingsRequest& request, const GetAppInstanceRetentionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAppInstanceRetentionSettings(request), context);
}

void ChimeSDKIdentityClient::GetAppInstanceRetentionSettingsAsync(const GetAppInstanceRetentionSettingsRequest& request, const GetAppInstanceRetentionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ChimeSDKIdentityClientGetAppInstanceRetentionSettingsAsyncHelper( this, request, handler, context ); } );
}

ListAppInstanceAdminsOutcome ChimeSDKIdentityClient::ListAppInstanceAdmins(const ListAppInstanceAdminsRequest& request) const
{
  if (!request.AppInstanceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAppInstanceAdmins", "Required field: AppInstanceArn, is not set");
    return ListAppInstanceAdminsOutcome(Aws::Client::AWSError<ChimeSDKIdentityErrors>(ChimeSDKIdentityErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/app-instances/");
  uri.AddPathSegment(request.GetAppInstanceArn());
  uri.AddPathSegments("/admins");
  return ListAppInstanceAdminsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAppInstanceAdminsOutcomeCallable ChimeSDKIdentityClient::ListAppInstanceAdminsCallable(const ListAppInstanceAdminsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAppInstanceAdminsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAppInstanceAdmins(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKIdentityClientListAppInstanceAdminsAsyncHelper(ChimeSDKIdentityClient const * const clientThis, const ListAppInstanceAdminsRequest& request, const ListAppInstanceAdminsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAppInstanceAdmins(request), context);
}

void ChimeSDKIdentityClient::ListAppInstanceAdminsAsync(const ListAppInstanceAdminsRequest& request, const ListAppInstanceAdminsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ChimeSDKIdentityClientListAppInstanceAdminsAsyncHelper( this, request, handler, context ); } );
}

ListAppInstanceUserEndpointsOutcome ChimeSDKIdentityClient::ListAppInstanceUserEndpoints(const ListAppInstanceUserEndpointsRequest& request) const
{
  if (!request.AppInstanceUserArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAppInstanceUserEndpoints", "Required field: AppInstanceUserArn, is not set");
    return ListAppInstanceUserEndpointsOutcome(Aws::Client::AWSError<ChimeSDKIdentityErrors>(ChimeSDKIdentityErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceUserArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/app-instance-users/");
  uri.AddPathSegment(request.GetAppInstanceUserArn());
  uri.AddPathSegments("/endpoints");
  return ListAppInstanceUserEndpointsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAppInstanceUserEndpointsOutcomeCallable ChimeSDKIdentityClient::ListAppInstanceUserEndpointsCallable(const ListAppInstanceUserEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAppInstanceUserEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAppInstanceUserEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKIdentityClientListAppInstanceUserEndpointsAsyncHelper(ChimeSDKIdentityClient const * const clientThis, const ListAppInstanceUserEndpointsRequest& request, const ListAppInstanceUserEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAppInstanceUserEndpoints(request), context);
}

void ChimeSDKIdentityClient::ListAppInstanceUserEndpointsAsync(const ListAppInstanceUserEndpointsRequest& request, const ListAppInstanceUserEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ChimeSDKIdentityClientListAppInstanceUserEndpointsAsyncHelper( this, request, handler, context ); } );
}

ListAppInstanceUsersOutcome ChimeSDKIdentityClient::ListAppInstanceUsers(const ListAppInstanceUsersRequest& request) const
{
  if (!request.AppInstanceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAppInstanceUsers", "Required field: AppInstanceArn, is not set");
    return ListAppInstanceUsersOutcome(Aws::Client::AWSError<ChimeSDKIdentityErrors>(ChimeSDKIdentityErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/app-instance-users");
  return ListAppInstanceUsersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAppInstanceUsersOutcomeCallable ChimeSDKIdentityClient::ListAppInstanceUsersCallable(const ListAppInstanceUsersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAppInstanceUsersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAppInstanceUsers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKIdentityClientListAppInstanceUsersAsyncHelper(ChimeSDKIdentityClient const * const clientThis, const ListAppInstanceUsersRequest& request, const ListAppInstanceUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAppInstanceUsers(request), context);
}

void ChimeSDKIdentityClient::ListAppInstanceUsersAsync(const ListAppInstanceUsersRequest& request, const ListAppInstanceUsersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ChimeSDKIdentityClientListAppInstanceUsersAsyncHelper( this, request, handler, context ); } );
}

ListAppInstancesOutcome ChimeSDKIdentityClient::ListAppInstances(const ListAppInstancesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/app-instances");
  return ListAppInstancesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAppInstancesOutcomeCallable ChimeSDKIdentityClient::ListAppInstancesCallable(const ListAppInstancesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAppInstancesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAppInstances(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKIdentityClientListAppInstancesAsyncHelper(ChimeSDKIdentityClient const * const clientThis, const ListAppInstancesRequest& request, const ListAppInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAppInstances(request), context);
}

void ChimeSDKIdentityClient::ListAppInstancesAsync(const ListAppInstancesRequest& request, const ListAppInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ChimeSDKIdentityClientListAppInstancesAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome ChimeSDKIdentityClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceARNHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceARN, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ChimeSDKIdentityErrors>(ChimeSDKIdentityErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceARN]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags");
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable ChimeSDKIdentityClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKIdentityClientListTagsForResourceAsyncHelper(ChimeSDKIdentityClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void ChimeSDKIdentityClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ChimeSDKIdentityClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

PutAppInstanceRetentionSettingsOutcome ChimeSDKIdentityClient::PutAppInstanceRetentionSettings(const PutAppInstanceRetentionSettingsRequest& request) const
{
  if (!request.AppInstanceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutAppInstanceRetentionSettings", "Required field: AppInstanceArn, is not set");
    return PutAppInstanceRetentionSettingsOutcome(Aws::Client::AWSError<ChimeSDKIdentityErrors>(ChimeSDKIdentityErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/app-instances/");
  uri.AddPathSegment(request.GetAppInstanceArn());
  uri.AddPathSegments("/retention-settings");
  return PutAppInstanceRetentionSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutAppInstanceRetentionSettingsOutcomeCallable ChimeSDKIdentityClient::PutAppInstanceRetentionSettingsCallable(const PutAppInstanceRetentionSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutAppInstanceRetentionSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutAppInstanceRetentionSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKIdentityClientPutAppInstanceRetentionSettingsAsyncHelper(ChimeSDKIdentityClient const * const clientThis, const PutAppInstanceRetentionSettingsRequest& request, const PutAppInstanceRetentionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutAppInstanceRetentionSettings(request), context);
}

void ChimeSDKIdentityClient::PutAppInstanceRetentionSettingsAsync(const PutAppInstanceRetentionSettingsRequest& request, const PutAppInstanceRetentionSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ChimeSDKIdentityClientPutAppInstanceRetentionSettingsAsyncHelper( this, request, handler, context ); } );
}

RegisterAppInstanceUserEndpointOutcome ChimeSDKIdentityClient::RegisterAppInstanceUserEndpoint(const RegisterAppInstanceUserEndpointRequest& request) const
{
  if (!request.AppInstanceUserArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RegisterAppInstanceUserEndpoint", "Required field: AppInstanceUserArn, is not set");
    return RegisterAppInstanceUserEndpointOutcome(Aws::Client::AWSError<ChimeSDKIdentityErrors>(ChimeSDKIdentityErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceUserArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/app-instance-users/");
  uri.AddPathSegment(request.GetAppInstanceUserArn());
  uri.AddPathSegments("/endpoints");
  return RegisterAppInstanceUserEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterAppInstanceUserEndpointOutcomeCallable ChimeSDKIdentityClient::RegisterAppInstanceUserEndpointCallable(const RegisterAppInstanceUserEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterAppInstanceUserEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterAppInstanceUserEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKIdentityClientRegisterAppInstanceUserEndpointAsyncHelper(ChimeSDKIdentityClient const * const clientThis, const RegisterAppInstanceUserEndpointRequest& request, const RegisterAppInstanceUserEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RegisterAppInstanceUserEndpoint(request), context);
}

void ChimeSDKIdentityClient::RegisterAppInstanceUserEndpointAsync(const RegisterAppInstanceUserEndpointRequest& request, const RegisterAppInstanceUserEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ChimeSDKIdentityClientRegisterAppInstanceUserEndpointAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome ChimeSDKIdentityClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  uri.AddPathSegments("/tags");
  ss.str("?operation=tag-resource");
  uri.SetQueryString(ss.str());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable ChimeSDKIdentityClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKIdentityClientTagResourceAsyncHelper(ChimeSDKIdentityClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void ChimeSDKIdentityClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ChimeSDKIdentityClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome ChimeSDKIdentityClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  uri.AddPathSegments("/tags");
  ss.str("?operation=untag-resource");
  uri.SetQueryString(ss.str());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable ChimeSDKIdentityClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKIdentityClientUntagResourceAsyncHelper(ChimeSDKIdentityClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void ChimeSDKIdentityClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ChimeSDKIdentityClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateAppInstanceOutcome ChimeSDKIdentityClient::UpdateAppInstance(const UpdateAppInstanceRequest& request) const
{
  if (!request.AppInstanceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAppInstance", "Required field: AppInstanceArn, is not set");
    return UpdateAppInstanceOutcome(Aws::Client::AWSError<ChimeSDKIdentityErrors>(ChimeSDKIdentityErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/app-instances/");
  uri.AddPathSegment(request.GetAppInstanceArn());
  return UpdateAppInstanceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAppInstanceOutcomeCallable ChimeSDKIdentityClient::UpdateAppInstanceCallable(const UpdateAppInstanceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAppInstanceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAppInstance(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKIdentityClientUpdateAppInstanceAsyncHelper(ChimeSDKIdentityClient const * const clientThis, const UpdateAppInstanceRequest& request, const UpdateAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAppInstance(request), context);
}

void ChimeSDKIdentityClient::UpdateAppInstanceAsync(const UpdateAppInstanceRequest& request, const UpdateAppInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ChimeSDKIdentityClientUpdateAppInstanceAsyncHelper( this, request, handler, context ); } );
}

UpdateAppInstanceUserOutcome ChimeSDKIdentityClient::UpdateAppInstanceUser(const UpdateAppInstanceUserRequest& request) const
{
  if (!request.AppInstanceUserArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAppInstanceUser", "Required field: AppInstanceUserArn, is not set");
    return UpdateAppInstanceUserOutcome(Aws::Client::AWSError<ChimeSDKIdentityErrors>(ChimeSDKIdentityErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceUserArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/app-instance-users/");
  uri.AddPathSegment(request.GetAppInstanceUserArn());
  return UpdateAppInstanceUserOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAppInstanceUserOutcomeCallable ChimeSDKIdentityClient::UpdateAppInstanceUserCallable(const UpdateAppInstanceUserRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAppInstanceUserOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAppInstanceUser(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKIdentityClientUpdateAppInstanceUserAsyncHelper(ChimeSDKIdentityClient const * const clientThis, const UpdateAppInstanceUserRequest& request, const UpdateAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAppInstanceUser(request), context);
}

void ChimeSDKIdentityClient::UpdateAppInstanceUserAsync(const UpdateAppInstanceUserRequest& request, const UpdateAppInstanceUserResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ChimeSDKIdentityClientUpdateAppInstanceUserAsyncHelper( this, request, handler, context ); } );
}

UpdateAppInstanceUserEndpointOutcome ChimeSDKIdentityClient::UpdateAppInstanceUserEndpoint(const UpdateAppInstanceUserEndpointRequest& request) const
{
  if (!request.AppInstanceUserArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAppInstanceUserEndpoint", "Required field: AppInstanceUserArn, is not set");
    return UpdateAppInstanceUserEndpointOutcome(Aws::Client::AWSError<ChimeSDKIdentityErrors>(ChimeSDKIdentityErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppInstanceUserArn]", false));
  }
  if (!request.EndpointIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAppInstanceUserEndpoint", "Required field: EndpointId, is not set");
    return UpdateAppInstanceUserEndpointOutcome(Aws::Client::AWSError<ChimeSDKIdentityErrors>(ChimeSDKIdentityErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndpointId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/app-instance-users/");
  uri.AddPathSegment(request.GetAppInstanceUserArn());
  uri.AddPathSegments("/endpoints/");
  uri.AddPathSegment(request.GetEndpointId());
  return UpdateAppInstanceUserEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAppInstanceUserEndpointOutcomeCallable ChimeSDKIdentityClient::UpdateAppInstanceUserEndpointCallable(const UpdateAppInstanceUserEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAppInstanceUserEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAppInstanceUserEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ChimeSDKIdentityClientUpdateAppInstanceUserEndpointAsyncHelper(ChimeSDKIdentityClient const * const clientThis, const UpdateAppInstanceUserEndpointRequest& request, const UpdateAppInstanceUserEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAppInstanceUserEndpoint(request), context);
}

void ChimeSDKIdentityClient::UpdateAppInstanceUserEndpointAsync(const UpdateAppInstanceUserEndpointRequest& request, const UpdateAppInstanceUserEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ ChimeSDKIdentityClientUpdateAppInstanceUserEndpointAsyncHelper( this, request, handler, context ); } );
}

