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

#include <aws/lambda/LambdaClient.h>
#include <aws/lambda/LambdaEndpoint.h>
#include <aws/lambda/LambdaErrorMarshaller.h>
#include <aws/lambda/model/AddLayerVersionPermissionRequest.h>
#include <aws/lambda/model/AddPermissionRequest.h>
#include <aws/lambda/model/CreateAliasRequest.h>
#include <aws/lambda/model/CreateCodeSigningConfigRequest.h>
#include <aws/lambda/model/CreateEventSourceMappingRequest.h>
#include <aws/lambda/model/CreateFunctionRequest.h>
#include <aws/lambda/model/CreateFunctionUrlConfigRequest.h>
#include <aws/lambda/model/DeleteAliasRequest.h>
#include <aws/lambda/model/DeleteCodeSigningConfigRequest.h>
#include <aws/lambda/model/DeleteEventSourceMappingRequest.h>
#include <aws/lambda/model/DeleteFunctionRequest.h>
#include <aws/lambda/model/DeleteFunctionCodeSigningConfigRequest.h>
#include <aws/lambda/model/DeleteFunctionConcurrencyRequest.h>
#include <aws/lambda/model/DeleteFunctionEventInvokeConfigRequest.h>
#include <aws/lambda/model/DeleteFunctionUrlConfigRequest.h>
#include <aws/lambda/model/DeleteLayerVersionRequest.h>
#include <aws/lambda/model/DeleteProvisionedConcurrencyConfigRequest.h>
#include <aws/lambda/model/GetAccountSettingsRequest.h>
#include <aws/lambda/model/GetAliasRequest.h>
#include <aws/lambda/model/GetCodeSigningConfigRequest.h>
#include <aws/lambda/model/GetEventSourceMappingRequest.h>
#include <aws/lambda/model/GetFunctionRequest.h>
#include <aws/lambda/model/GetFunctionCodeSigningConfigRequest.h>
#include <aws/lambda/model/GetFunctionConcurrencyRequest.h>
#include <aws/lambda/model/GetFunctionConfigurationRequest.h>
#include <aws/lambda/model/GetFunctionEventInvokeConfigRequest.h>
#include <aws/lambda/model/GetFunctionUrlConfigRequest.h>
#include <aws/lambda/model/GetLayerVersionRequest.h>
#include <aws/lambda/model/GetLayerVersionByArnRequest.h>
#include <aws/lambda/model/GetLayerVersionPolicyRequest.h>
#include <aws/lambda/model/GetPolicyRequest.h>
#include <aws/lambda/model/GetProvisionedConcurrencyConfigRequest.h>
#include <aws/lambda/model/InvokeRequest.h>
#include <aws/lambda/model/ListAliasesRequest.h>
#include <aws/lambda/model/ListCodeSigningConfigsRequest.h>
#include <aws/lambda/model/ListEventSourceMappingsRequest.h>
#include <aws/lambda/model/ListFunctionEventInvokeConfigsRequest.h>
#include <aws/lambda/model/ListFunctionUrlConfigsRequest.h>
#include <aws/lambda/model/ListFunctionsRequest.h>
#include <aws/lambda/model/ListFunctionsByCodeSigningConfigRequest.h>
#include <aws/lambda/model/ListLayerVersionsRequest.h>
#include <aws/lambda/model/ListLayersRequest.h>
#include <aws/lambda/model/ListProvisionedConcurrencyConfigsRequest.h>
#include <aws/lambda/model/ListTagsRequest.h>
#include <aws/lambda/model/ListVersionsByFunctionRequest.h>
#include <aws/lambda/model/PublishLayerVersionRequest.h>
#include <aws/lambda/model/PublishVersionRequest.h>
#include <aws/lambda/model/PutFunctionCodeSigningConfigRequest.h>
#include <aws/lambda/model/PutFunctionConcurrencyRequest.h>
#include <aws/lambda/model/PutFunctionEventInvokeConfigRequest.h>
#include <aws/lambda/model/PutProvisionedConcurrencyConfigRequest.h>
#include <aws/lambda/model/RemoveLayerVersionPermissionRequest.h>
#include <aws/lambda/model/RemovePermissionRequest.h>
#include <aws/lambda/model/TagResourceRequest.h>
#include <aws/lambda/model/UntagResourceRequest.h>
#include <aws/lambda/model/UpdateAliasRequest.h>
#include <aws/lambda/model/UpdateCodeSigningConfigRequest.h>
#include <aws/lambda/model/UpdateEventSourceMappingRequest.h>
#include <aws/lambda/model/UpdateFunctionCodeRequest.h>
#include <aws/lambda/model/UpdateFunctionConfigurationRequest.h>
#include <aws/lambda/model/UpdateFunctionEventInvokeConfigRequest.h>
#include <aws/lambda/model/UpdateFunctionUrlConfigRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Lambda;
using namespace Aws::Lambda::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "lambda";
static const char* ALLOCATION_TAG = "LambdaClient";

LambdaClient::LambdaClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LambdaErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LambdaClient::LambdaClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LambdaErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LambdaClient::LambdaClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LambdaErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

LambdaClient::~LambdaClient()
{
}

void LambdaClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Lambda");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + LambdaEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void LambdaClient::OverrideEndpoint(const Aws::String& endpoint)
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

AddLayerVersionPermissionOutcome LambdaClient::AddLayerVersionPermission(const AddLayerVersionPermissionRequest& request) const
{
  if (!request.LayerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AddLayerVersionPermission", "Required field: LayerName, is not set");
    return AddLayerVersionPermissionOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LayerName]", false));
  }
  if (!request.VersionNumberHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AddLayerVersionPermission", "Required field: VersionNumber, is not set");
    return AddLayerVersionPermissionOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionNumber]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2018-10-31/layers/");
  uri.AddPathSegment(request.GetLayerName());
  uri.AddPathSegments("/versions/");
  uri.AddPathSegment(request.GetVersionNumber());
  uri.AddPathSegments("/policy");
  return AddLayerVersionPermissionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddLayerVersionPermissionOutcomeCallable LambdaClient::AddLayerVersionPermissionCallable(const AddLayerVersionPermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddLayerVersionPermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddLayerVersionPermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientAddLayerVersionPermissionAsyncHelper(LambdaClient const * const clientThis, const AddLayerVersionPermissionRequest& request, const AddLayerVersionPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddLayerVersionPermission(request), context);
}

void LambdaClient::AddLayerVersionPermissionAsync(const AddLayerVersionPermissionRequest& request, const AddLayerVersionPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientAddLayerVersionPermissionAsyncHelper( this, request, handler, context ); } );
}

AddPermissionOutcome LambdaClient::AddPermission(const AddPermissionRequest& request) const
{
  if (!request.FunctionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AddPermission", "Required field: FunctionName, is not set");
    return AddPermissionOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2015-03-31/functions/");
  uri.AddPathSegment(request.GetFunctionName());
  uri.AddPathSegments("/policy");
  return AddPermissionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AddPermissionOutcomeCallable LambdaClient::AddPermissionCallable(const AddPermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddPermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddPermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientAddPermissionAsyncHelper(LambdaClient const * const clientThis, const AddPermissionRequest& request, const AddPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AddPermission(request), context);
}

void LambdaClient::AddPermissionAsync(const AddPermissionRequest& request, const AddPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientAddPermissionAsyncHelper( this, request, handler, context ); } );
}

CreateAliasOutcome LambdaClient::CreateAlias(const CreateAliasRequest& request) const
{
  if (!request.FunctionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAlias", "Required field: FunctionName, is not set");
    return CreateAliasOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2015-03-31/functions/");
  uri.AddPathSegment(request.GetFunctionName());
  uri.AddPathSegments("/aliases");
  return CreateAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAliasOutcomeCallable LambdaClient::CreateAliasCallable(const CreateAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientCreateAliasAsyncHelper(LambdaClient const * const clientThis, const CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAlias(request), context);
}

void LambdaClient::CreateAliasAsync(const CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientCreateAliasAsyncHelper( this, request, handler, context ); } );
}

CreateCodeSigningConfigOutcome LambdaClient::CreateCodeSigningConfig(const CreateCodeSigningConfigRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-04-22/code-signing-configs/");
  return CreateCodeSigningConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCodeSigningConfigOutcomeCallable LambdaClient::CreateCodeSigningConfigCallable(const CreateCodeSigningConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCodeSigningConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCodeSigningConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientCreateCodeSigningConfigAsyncHelper(LambdaClient const * const clientThis, const CreateCodeSigningConfigRequest& request, const CreateCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateCodeSigningConfig(request), context);
}

void LambdaClient::CreateCodeSigningConfigAsync(const CreateCodeSigningConfigRequest& request, const CreateCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientCreateCodeSigningConfigAsyncHelper( this, request, handler, context ); } );
}

CreateEventSourceMappingOutcome LambdaClient::CreateEventSourceMapping(const CreateEventSourceMappingRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2015-03-31/event-source-mappings/");
  return CreateEventSourceMappingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEventSourceMappingOutcomeCallable LambdaClient::CreateEventSourceMappingCallable(const CreateEventSourceMappingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEventSourceMappingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEventSourceMapping(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientCreateEventSourceMappingAsyncHelper(LambdaClient const * const clientThis, const CreateEventSourceMappingRequest& request, const CreateEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateEventSourceMapping(request), context);
}

void LambdaClient::CreateEventSourceMappingAsync(const CreateEventSourceMappingRequest& request, const CreateEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientCreateEventSourceMappingAsyncHelper( this, request, handler, context ); } );
}

CreateFunctionOutcome LambdaClient::CreateFunction(const CreateFunctionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2015-03-31/functions");
  return CreateFunctionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFunctionOutcomeCallable LambdaClient::CreateFunctionCallable(const CreateFunctionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFunctionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFunction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientCreateFunctionAsyncHelper(LambdaClient const * const clientThis, const CreateFunctionRequest& request, const CreateFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateFunction(request), context);
}

void LambdaClient::CreateFunctionAsync(const CreateFunctionRequest& request, const CreateFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientCreateFunctionAsyncHelper( this, request, handler, context ); } );
}

CreateFunctionUrlConfigOutcome LambdaClient::CreateFunctionUrlConfig(const CreateFunctionUrlConfigRequest& request) const
{
  if (!request.FunctionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateFunctionUrlConfig", "Required field: FunctionName, is not set");
    return CreateFunctionUrlConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-10-31/functions/");
  uri.AddPathSegment(request.GetFunctionName());
  uri.AddPathSegments("/url");
  return CreateFunctionUrlConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFunctionUrlConfigOutcomeCallable LambdaClient::CreateFunctionUrlConfigCallable(const CreateFunctionUrlConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFunctionUrlConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFunctionUrlConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientCreateFunctionUrlConfigAsyncHelper(LambdaClient const * const clientThis, const CreateFunctionUrlConfigRequest& request, const CreateFunctionUrlConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateFunctionUrlConfig(request), context);
}

void LambdaClient::CreateFunctionUrlConfigAsync(const CreateFunctionUrlConfigRequest& request, const CreateFunctionUrlConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientCreateFunctionUrlConfigAsyncHelper( this, request, handler, context ); } );
}

DeleteAliasOutcome LambdaClient::DeleteAlias(const DeleteAliasRequest& request) const
{
  if (!request.FunctionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAlias", "Required field: FunctionName, is not set");
    return DeleteAliasOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionName]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAlias", "Required field: Name, is not set");
    return DeleteAliasOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2015-03-31/functions/");
  uri.AddPathSegment(request.GetFunctionName());
  uri.AddPathSegments("/aliases/");
  uri.AddPathSegment(request.GetName());
  return DeleteAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAliasOutcomeCallable LambdaClient::DeleteAliasCallable(const DeleteAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientDeleteAliasAsyncHelper(LambdaClient const * const clientThis, const DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAlias(request), context);
}

void LambdaClient::DeleteAliasAsync(const DeleteAliasRequest& request, const DeleteAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientDeleteAliasAsyncHelper( this, request, handler, context ); } );
}

DeleteCodeSigningConfigOutcome LambdaClient::DeleteCodeSigningConfig(const DeleteCodeSigningConfigRequest& request) const
{
  if (!request.CodeSigningConfigArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCodeSigningConfig", "Required field: CodeSigningConfigArn, is not set");
    return DeleteCodeSigningConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CodeSigningConfigArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-04-22/code-signing-configs/");
  uri.AddPathSegment(request.GetCodeSigningConfigArn());
  return DeleteCodeSigningConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteCodeSigningConfigOutcomeCallable LambdaClient::DeleteCodeSigningConfigCallable(const DeleteCodeSigningConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCodeSigningConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCodeSigningConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientDeleteCodeSigningConfigAsyncHelper(LambdaClient const * const clientThis, const DeleteCodeSigningConfigRequest& request, const DeleteCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteCodeSigningConfig(request), context);
}

void LambdaClient::DeleteCodeSigningConfigAsync(const DeleteCodeSigningConfigRequest& request, const DeleteCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientDeleteCodeSigningConfigAsyncHelper( this, request, handler, context ); } );
}

DeleteEventSourceMappingOutcome LambdaClient::DeleteEventSourceMapping(const DeleteEventSourceMappingRequest& request) const
{
  if (!request.UUIDHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteEventSourceMapping", "Required field: UUID, is not set");
    return DeleteEventSourceMappingOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UUID]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2015-03-31/event-source-mappings/");
  uri.AddPathSegment(request.GetUUID());
  return DeleteEventSourceMappingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteEventSourceMappingOutcomeCallable LambdaClient::DeleteEventSourceMappingCallable(const DeleteEventSourceMappingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEventSourceMappingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEventSourceMapping(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientDeleteEventSourceMappingAsyncHelper(LambdaClient const * const clientThis, const DeleteEventSourceMappingRequest& request, const DeleteEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteEventSourceMapping(request), context);
}

void LambdaClient::DeleteEventSourceMappingAsync(const DeleteEventSourceMappingRequest& request, const DeleteEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientDeleteEventSourceMappingAsyncHelper( this, request, handler, context ); } );
}

DeleteFunctionOutcome LambdaClient::DeleteFunction(const DeleteFunctionRequest& request) const
{
  if (!request.FunctionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFunction", "Required field: FunctionName, is not set");
    return DeleteFunctionOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2015-03-31/functions/");
  uri.AddPathSegment(request.GetFunctionName());
  return DeleteFunctionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteFunctionOutcomeCallable LambdaClient::DeleteFunctionCallable(const DeleteFunctionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFunctionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFunction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientDeleteFunctionAsyncHelper(LambdaClient const * const clientThis, const DeleteFunctionRequest& request, const DeleteFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteFunction(request), context);
}

void LambdaClient::DeleteFunctionAsync(const DeleteFunctionRequest& request, const DeleteFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientDeleteFunctionAsyncHelper( this, request, handler, context ); } );
}

DeleteFunctionCodeSigningConfigOutcome LambdaClient::DeleteFunctionCodeSigningConfig(const DeleteFunctionCodeSigningConfigRequest& request) const
{
  if (!request.FunctionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFunctionCodeSigningConfig", "Required field: FunctionName, is not set");
    return DeleteFunctionCodeSigningConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-06-30/functions/");
  uri.AddPathSegment(request.GetFunctionName());
  uri.AddPathSegments("/code-signing-config");
  return DeleteFunctionCodeSigningConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteFunctionCodeSigningConfigOutcomeCallable LambdaClient::DeleteFunctionCodeSigningConfigCallable(const DeleteFunctionCodeSigningConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFunctionCodeSigningConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFunctionCodeSigningConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientDeleteFunctionCodeSigningConfigAsyncHelper(LambdaClient const * const clientThis, const DeleteFunctionCodeSigningConfigRequest& request, const DeleteFunctionCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteFunctionCodeSigningConfig(request), context);
}

void LambdaClient::DeleteFunctionCodeSigningConfigAsync(const DeleteFunctionCodeSigningConfigRequest& request, const DeleteFunctionCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientDeleteFunctionCodeSigningConfigAsyncHelper( this, request, handler, context ); } );
}

DeleteFunctionConcurrencyOutcome LambdaClient::DeleteFunctionConcurrency(const DeleteFunctionConcurrencyRequest& request) const
{
  if (!request.FunctionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFunctionConcurrency", "Required field: FunctionName, is not set");
    return DeleteFunctionConcurrencyOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2017-10-31/functions/");
  uri.AddPathSegment(request.GetFunctionName());
  uri.AddPathSegments("/concurrency");
  return DeleteFunctionConcurrencyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteFunctionConcurrencyOutcomeCallable LambdaClient::DeleteFunctionConcurrencyCallable(const DeleteFunctionConcurrencyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFunctionConcurrencyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFunctionConcurrency(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientDeleteFunctionConcurrencyAsyncHelper(LambdaClient const * const clientThis, const DeleteFunctionConcurrencyRequest& request, const DeleteFunctionConcurrencyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteFunctionConcurrency(request), context);
}

void LambdaClient::DeleteFunctionConcurrencyAsync(const DeleteFunctionConcurrencyRequest& request, const DeleteFunctionConcurrencyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientDeleteFunctionConcurrencyAsyncHelper( this, request, handler, context ); } );
}

DeleteFunctionEventInvokeConfigOutcome LambdaClient::DeleteFunctionEventInvokeConfig(const DeleteFunctionEventInvokeConfigRequest& request) const
{
  if (!request.FunctionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFunctionEventInvokeConfig", "Required field: FunctionName, is not set");
    return DeleteFunctionEventInvokeConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2019-09-25/functions/");
  uri.AddPathSegment(request.GetFunctionName());
  uri.AddPathSegments("/event-invoke-config");
  return DeleteFunctionEventInvokeConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteFunctionEventInvokeConfigOutcomeCallable LambdaClient::DeleteFunctionEventInvokeConfigCallable(const DeleteFunctionEventInvokeConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFunctionEventInvokeConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFunctionEventInvokeConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientDeleteFunctionEventInvokeConfigAsyncHelper(LambdaClient const * const clientThis, const DeleteFunctionEventInvokeConfigRequest& request, const DeleteFunctionEventInvokeConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteFunctionEventInvokeConfig(request), context);
}

void LambdaClient::DeleteFunctionEventInvokeConfigAsync(const DeleteFunctionEventInvokeConfigRequest& request, const DeleteFunctionEventInvokeConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientDeleteFunctionEventInvokeConfigAsyncHelper( this, request, handler, context ); } );
}

DeleteFunctionUrlConfigOutcome LambdaClient::DeleteFunctionUrlConfig(const DeleteFunctionUrlConfigRequest& request) const
{
  if (!request.FunctionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFunctionUrlConfig", "Required field: FunctionName, is not set");
    return DeleteFunctionUrlConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-10-31/functions/");
  uri.AddPathSegment(request.GetFunctionName());
  uri.AddPathSegments("/url");
  return DeleteFunctionUrlConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteFunctionUrlConfigOutcomeCallable LambdaClient::DeleteFunctionUrlConfigCallable(const DeleteFunctionUrlConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFunctionUrlConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFunctionUrlConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientDeleteFunctionUrlConfigAsyncHelper(LambdaClient const * const clientThis, const DeleteFunctionUrlConfigRequest& request, const DeleteFunctionUrlConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteFunctionUrlConfig(request), context);
}

void LambdaClient::DeleteFunctionUrlConfigAsync(const DeleteFunctionUrlConfigRequest& request, const DeleteFunctionUrlConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientDeleteFunctionUrlConfigAsyncHelper( this, request, handler, context ); } );
}

DeleteLayerVersionOutcome LambdaClient::DeleteLayerVersion(const DeleteLayerVersionRequest& request) const
{
  if (!request.LayerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteLayerVersion", "Required field: LayerName, is not set");
    return DeleteLayerVersionOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LayerName]", false));
  }
  if (!request.VersionNumberHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteLayerVersion", "Required field: VersionNumber, is not set");
    return DeleteLayerVersionOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionNumber]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2018-10-31/layers/");
  uri.AddPathSegment(request.GetLayerName());
  uri.AddPathSegments("/versions/");
  uri.AddPathSegment(request.GetVersionNumber());
  return DeleteLayerVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteLayerVersionOutcomeCallable LambdaClient::DeleteLayerVersionCallable(const DeleteLayerVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLayerVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLayerVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientDeleteLayerVersionAsyncHelper(LambdaClient const * const clientThis, const DeleteLayerVersionRequest& request, const DeleteLayerVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteLayerVersion(request), context);
}

void LambdaClient::DeleteLayerVersionAsync(const DeleteLayerVersionRequest& request, const DeleteLayerVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientDeleteLayerVersionAsyncHelper( this, request, handler, context ); } );
}

DeleteProvisionedConcurrencyConfigOutcome LambdaClient::DeleteProvisionedConcurrencyConfig(const DeleteProvisionedConcurrencyConfigRequest& request) const
{
  if (!request.FunctionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProvisionedConcurrencyConfig", "Required field: FunctionName, is not set");
    return DeleteProvisionedConcurrencyConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionName]", false));
  }
  if (!request.QualifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProvisionedConcurrencyConfig", "Required field: Qualifier, is not set");
    return DeleteProvisionedConcurrencyConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Qualifier]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2019-09-30/functions/");
  uri.AddPathSegment(request.GetFunctionName());
  uri.AddPathSegments("/provisioned-concurrency");
  return DeleteProvisionedConcurrencyConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteProvisionedConcurrencyConfigOutcomeCallable LambdaClient::DeleteProvisionedConcurrencyConfigCallable(const DeleteProvisionedConcurrencyConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProvisionedConcurrencyConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProvisionedConcurrencyConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientDeleteProvisionedConcurrencyConfigAsyncHelper(LambdaClient const * const clientThis, const DeleteProvisionedConcurrencyConfigRequest& request, const DeleteProvisionedConcurrencyConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteProvisionedConcurrencyConfig(request), context);
}

void LambdaClient::DeleteProvisionedConcurrencyConfigAsync(const DeleteProvisionedConcurrencyConfigRequest& request, const DeleteProvisionedConcurrencyConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientDeleteProvisionedConcurrencyConfigAsyncHelper( this, request, handler, context ); } );
}

GetAccountSettingsOutcome LambdaClient::GetAccountSettings(const GetAccountSettingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2016-08-19/account-settings/");
  return GetAccountSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAccountSettingsOutcomeCallable LambdaClient::GetAccountSettingsCallable(const GetAccountSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccountSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccountSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientGetAccountSettingsAsyncHelper(LambdaClient const * const clientThis, const GetAccountSettingsRequest& request, const GetAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAccountSettings(request), context);
}

void LambdaClient::GetAccountSettingsAsync(const GetAccountSettingsRequest& request, const GetAccountSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientGetAccountSettingsAsyncHelper( this, request, handler, context ); } );
}

GetAliasOutcome LambdaClient::GetAlias(const GetAliasRequest& request) const
{
  if (!request.FunctionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAlias", "Required field: FunctionName, is not set");
    return GetAliasOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionName]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAlias", "Required field: Name, is not set");
    return GetAliasOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2015-03-31/functions/");
  uri.AddPathSegment(request.GetFunctionName());
  uri.AddPathSegments("/aliases/");
  uri.AddPathSegment(request.GetName());
  return GetAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAliasOutcomeCallable LambdaClient::GetAliasCallable(const GetAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientGetAliasAsyncHelper(LambdaClient const * const clientThis, const GetAliasRequest& request, const GetAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAlias(request), context);
}

void LambdaClient::GetAliasAsync(const GetAliasRequest& request, const GetAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientGetAliasAsyncHelper( this, request, handler, context ); } );
}

GetCodeSigningConfigOutcome LambdaClient::GetCodeSigningConfig(const GetCodeSigningConfigRequest& request) const
{
  if (!request.CodeSigningConfigArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetCodeSigningConfig", "Required field: CodeSigningConfigArn, is not set");
    return GetCodeSigningConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CodeSigningConfigArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-04-22/code-signing-configs/");
  uri.AddPathSegment(request.GetCodeSigningConfigArn());
  return GetCodeSigningConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetCodeSigningConfigOutcomeCallable LambdaClient::GetCodeSigningConfigCallable(const GetCodeSigningConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetCodeSigningConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetCodeSigningConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientGetCodeSigningConfigAsyncHelper(LambdaClient const * const clientThis, const GetCodeSigningConfigRequest& request, const GetCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetCodeSigningConfig(request), context);
}

void LambdaClient::GetCodeSigningConfigAsync(const GetCodeSigningConfigRequest& request, const GetCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientGetCodeSigningConfigAsyncHelper( this, request, handler, context ); } );
}

GetEventSourceMappingOutcome LambdaClient::GetEventSourceMapping(const GetEventSourceMappingRequest& request) const
{
  if (!request.UUIDHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetEventSourceMapping", "Required field: UUID, is not set");
    return GetEventSourceMappingOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UUID]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2015-03-31/event-source-mappings/");
  uri.AddPathSegment(request.GetUUID());
  return GetEventSourceMappingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetEventSourceMappingOutcomeCallable LambdaClient::GetEventSourceMappingCallable(const GetEventSourceMappingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEventSourceMappingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEventSourceMapping(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientGetEventSourceMappingAsyncHelper(LambdaClient const * const clientThis, const GetEventSourceMappingRequest& request, const GetEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetEventSourceMapping(request), context);
}

void LambdaClient::GetEventSourceMappingAsync(const GetEventSourceMappingRequest& request, const GetEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientGetEventSourceMappingAsyncHelper( this, request, handler, context ); } );
}

GetFunctionOutcome LambdaClient::GetFunction(const GetFunctionRequest& request) const
{
  if (!request.FunctionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFunction", "Required field: FunctionName, is not set");
    return GetFunctionOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2015-03-31/functions/");
  uri.AddPathSegment(request.GetFunctionName());
  return GetFunctionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetFunctionOutcomeCallable LambdaClient::GetFunctionCallable(const GetFunctionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFunctionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFunction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientGetFunctionAsyncHelper(LambdaClient const * const clientThis, const GetFunctionRequest& request, const GetFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetFunction(request), context);
}

void LambdaClient::GetFunctionAsync(const GetFunctionRequest& request, const GetFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientGetFunctionAsyncHelper( this, request, handler, context ); } );
}

GetFunctionCodeSigningConfigOutcome LambdaClient::GetFunctionCodeSigningConfig(const GetFunctionCodeSigningConfigRequest& request) const
{
  if (!request.FunctionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFunctionCodeSigningConfig", "Required field: FunctionName, is not set");
    return GetFunctionCodeSigningConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-06-30/functions/");
  uri.AddPathSegment(request.GetFunctionName());
  uri.AddPathSegments("/code-signing-config");
  return GetFunctionCodeSigningConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetFunctionCodeSigningConfigOutcomeCallable LambdaClient::GetFunctionCodeSigningConfigCallable(const GetFunctionCodeSigningConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFunctionCodeSigningConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFunctionCodeSigningConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientGetFunctionCodeSigningConfigAsyncHelper(LambdaClient const * const clientThis, const GetFunctionCodeSigningConfigRequest& request, const GetFunctionCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetFunctionCodeSigningConfig(request), context);
}

void LambdaClient::GetFunctionCodeSigningConfigAsync(const GetFunctionCodeSigningConfigRequest& request, const GetFunctionCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientGetFunctionCodeSigningConfigAsyncHelper( this, request, handler, context ); } );
}

GetFunctionConcurrencyOutcome LambdaClient::GetFunctionConcurrency(const GetFunctionConcurrencyRequest& request) const
{
  if (!request.FunctionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFunctionConcurrency", "Required field: FunctionName, is not set");
    return GetFunctionConcurrencyOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2019-09-30/functions/");
  uri.AddPathSegment(request.GetFunctionName());
  uri.AddPathSegments("/concurrency");
  return GetFunctionConcurrencyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetFunctionConcurrencyOutcomeCallable LambdaClient::GetFunctionConcurrencyCallable(const GetFunctionConcurrencyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFunctionConcurrencyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFunctionConcurrency(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientGetFunctionConcurrencyAsyncHelper(LambdaClient const * const clientThis, const GetFunctionConcurrencyRequest& request, const GetFunctionConcurrencyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetFunctionConcurrency(request), context);
}

void LambdaClient::GetFunctionConcurrencyAsync(const GetFunctionConcurrencyRequest& request, const GetFunctionConcurrencyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientGetFunctionConcurrencyAsyncHelper( this, request, handler, context ); } );
}

GetFunctionConfigurationOutcome LambdaClient::GetFunctionConfiguration(const GetFunctionConfigurationRequest& request) const
{
  if (!request.FunctionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFunctionConfiguration", "Required field: FunctionName, is not set");
    return GetFunctionConfigurationOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2015-03-31/functions/");
  uri.AddPathSegment(request.GetFunctionName());
  uri.AddPathSegments("/configuration");
  return GetFunctionConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetFunctionConfigurationOutcomeCallable LambdaClient::GetFunctionConfigurationCallable(const GetFunctionConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFunctionConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFunctionConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientGetFunctionConfigurationAsyncHelper(LambdaClient const * const clientThis, const GetFunctionConfigurationRequest& request, const GetFunctionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetFunctionConfiguration(request), context);
}

void LambdaClient::GetFunctionConfigurationAsync(const GetFunctionConfigurationRequest& request, const GetFunctionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientGetFunctionConfigurationAsyncHelper( this, request, handler, context ); } );
}

GetFunctionEventInvokeConfigOutcome LambdaClient::GetFunctionEventInvokeConfig(const GetFunctionEventInvokeConfigRequest& request) const
{
  if (!request.FunctionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFunctionEventInvokeConfig", "Required field: FunctionName, is not set");
    return GetFunctionEventInvokeConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2019-09-25/functions/");
  uri.AddPathSegment(request.GetFunctionName());
  uri.AddPathSegments("/event-invoke-config");
  return GetFunctionEventInvokeConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetFunctionEventInvokeConfigOutcomeCallable LambdaClient::GetFunctionEventInvokeConfigCallable(const GetFunctionEventInvokeConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFunctionEventInvokeConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFunctionEventInvokeConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientGetFunctionEventInvokeConfigAsyncHelper(LambdaClient const * const clientThis, const GetFunctionEventInvokeConfigRequest& request, const GetFunctionEventInvokeConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetFunctionEventInvokeConfig(request), context);
}

void LambdaClient::GetFunctionEventInvokeConfigAsync(const GetFunctionEventInvokeConfigRequest& request, const GetFunctionEventInvokeConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientGetFunctionEventInvokeConfigAsyncHelper( this, request, handler, context ); } );
}

GetFunctionUrlConfigOutcome LambdaClient::GetFunctionUrlConfig(const GetFunctionUrlConfigRequest& request) const
{
  if (!request.FunctionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFunctionUrlConfig", "Required field: FunctionName, is not set");
    return GetFunctionUrlConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-10-31/functions/");
  uri.AddPathSegment(request.GetFunctionName());
  uri.AddPathSegments("/url");
  return GetFunctionUrlConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetFunctionUrlConfigOutcomeCallable LambdaClient::GetFunctionUrlConfigCallable(const GetFunctionUrlConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFunctionUrlConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFunctionUrlConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientGetFunctionUrlConfigAsyncHelper(LambdaClient const * const clientThis, const GetFunctionUrlConfigRequest& request, const GetFunctionUrlConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetFunctionUrlConfig(request), context);
}

void LambdaClient::GetFunctionUrlConfigAsync(const GetFunctionUrlConfigRequest& request, const GetFunctionUrlConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientGetFunctionUrlConfigAsyncHelper( this, request, handler, context ); } );
}

GetLayerVersionOutcome LambdaClient::GetLayerVersion(const GetLayerVersionRequest& request) const
{
  if (!request.LayerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLayerVersion", "Required field: LayerName, is not set");
    return GetLayerVersionOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LayerName]", false));
  }
  if (!request.VersionNumberHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLayerVersion", "Required field: VersionNumber, is not set");
    return GetLayerVersionOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionNumber]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2018-10-31/layers/");
  uri.AddPathSegment(request.GetLayerName());
  uri.AddPathSegments("/versions/");
  uri.AddPathSegment(request.GetVersionNumber());
  return GetLayerVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetLayerVersionOutcomeCallable LambdaClient::GetLayerVersionCallable(const GetLayerVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLayerVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLayerVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientGetLayerVersionAsyncHelper(LambdaClient const * const clientThis, const GetLayerVersionRequest& request, const GetLayerVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetLayerVersion(request), context);
}

void LambdaClient::GetLayerVersionAsync(const GetLayerVersionRequest& request, const GetLayerVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientGetLayerVersionAsyncHelper( this, request, handler, context ); } );
}

GetLayerVersionByArnOutcome LambdaClient::GetLayerVersionByArn(const GetLayerVersionByArnRequest& request) const
{
  if (!request.ArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLayerVersionByArn", "Required field: Arn, is not set");
    return GetLayerVersionByArnOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  uri.AddPathSegments("/2018-10-31/layers");
  ss.str("?find=LayerVersion");
  uri.SetQueryString(ss.str());
  return GetLayerVersionByArnOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetLayerVersionByArnOutcomeCallable LambdaClient::GetLayerVersionByArnCallable(const GetLayerVersionByArnRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLayerVersionByArnOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLayerVersionByArn(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientGetLayerVersionByArnAsyncHelper(LambdaClient const * const clientThis, const GetLayerVersionByArnRequest& request, const GetLayerVersionByArnResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetLayerVersionByArn(request), context);
}

void LambdaClient::GetLayerVersionByArnAsync(const GetLayerVersionByArnRequest& request, const GetLayerVersionByArnResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientGetLayerVersionByArnAsyncHelper( this, request, handler, context ); } );
}

GetLayerVersionPolicyOutcome LambdaClient::GetLayerVersionPolicy(const GetLayerVersionPolicyRequest& request) const
{
  if (!request.LayerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLayerVersionPolicy", "Required field: LayerName, is not set");
    return GetLayerVersionPolicyOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LayerName]", false));
  }
  if (!request.VersionNumberHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLayerVersionPolicy", "Required field: VersionNumber, is not set");
    return GetLayerVersionPolicyOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionNumber]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2018-10-31/layers/");
  uri.AddPathSegment(request.GetLayerName());
  uri.AddPathSegments("/versions/");
  uri.AddPathSegment(request.GetVersionNumber());
  uri.AddPathSegments("/policy");
  return GetLayerVersionPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetLayerVersionPolicyOutcomeCallable LambdaClient::GetLayerVersionPolicyCallable(const GetLayerVersionPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLayerVersionPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLayerVersionPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientGetLayerVersionPolicyAsyncHelper(LambdaClient const * const clientThis, const GetLayerVersionPolicyRequest& request, const GetLayerVersionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetLayerVersionPolicy(request), context);
}

void LambdaClient::GetLayerVersionPolicyAsync(const GetLayerVersionPolicyRequest& request, const GetLayerVersionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientGetLayerVersionPolicyAsyncHelper( this, request, handler, context ); } );
}

GetPolicyOutcome LambdaClient::GetPolicy(const GetPolicyRequest& request) const
{
  if (!request.FunctionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetPolicy", "Required field: FunctionName, is not set");
    return GetPolicyOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2015-03-31/functions/");
  uri.AddPathSegment(request.GetFunctionName());
  uri.AddPathSegments("/policy");
  return GetPolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetPolicyOutcomeCallable LambdaClient::GetPolicyCallable(const GetPolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetPolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetPolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientGetPolicyAsyncHelper(LambdaClient const * const clientThis, const GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetPolicy(request), context);
}

void LambdaClient::GetPolicyAsync(const GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientGetPolicyAsyncHelper( this, request, handler, context ); } );
}

GetProvisionedConcurrencyConfigOutcome LambdaClient::GetProvisionedConcurrencyConfig(const GetProvisionedConcurrencyConfigRequest& request) const
{
  if (!request.FunctionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProvisionedConcurrencyConfig", "Required field: FunctionName, is not set");
    return GetProvisionedConcurrencyConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionName]", false));
  }
  if (!request.QualifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProvisionedConcurrencyConfig", "Required field: Qualifier, is not set");
    return GetProvisionedConcurrencyConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Qualifier]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2019-09-30/functions/");
  uri.AddPathSegment(request.GetFunctionName());
  uri.AddPathSegments("/provisioned-concurrency");
  return GetProvisionedConcurrencyConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetProvisionedConcurrencyConfigOutcomeCallable LambdaClient::GetProvisionedConcurrencyConfigCallable(const GetProvisionedConcurrencyConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetProvisionedConcurrencyConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetProvisionedConcurrencyConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientGetProvisionedConcurrencyConfigAsyncHelper(LambdaClient const * const clientThis, const GetProvisionedConcurrencyConfigRequest& request, const GetProvisionedConcurrencyConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetProvisionedConcurrencyConfig(request), context);
}

void LambdaClient::GetProvisionedConcurrencyConfigAsync(const GetProvisionedConcurrencyConfigRequest& request, const GetProvisionedConcurrencyConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientGetProvisionedConcurrencyConfigAsyncHelper( this, request, handler, context ); } );
}

InvokeOutcome LambdaClient::Invoke(const InvokeRequest& request) const
{
  if (!request.FunctionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("Invoke", "Required field: FunctionName, is not set");
    return InvokeOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2015-03-31/functions/");
  uri.AddPathSegment(request.GetFunctionName());
  uri.AddPathSegments("/invocations");
  return InvokeOutcome(MakeRequestWithUnparsedResponse(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

InvokeOutcomeCallable LambdaClient::InvokeCallable(const InvokeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< InvokeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Invoke(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientInvokeAsyncHelper(LambdaClient const * const clientThis, const InvokeRequest& request, const InvokeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->Invoke(request), context);
}

void LambdaClient::InvokeAsync(const InvokeRequest& request, const InvokeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientInvokeAsyncHelper( this, request, handler, context ); } );
}

ListAliasesOutcome LambdaClient::ListAliases(const ListAliasesRequest& request) const
{
  if (!request.FunctionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAliases", "Required field: FunctionName, is not set");
    return ListAliasesOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2015-03-31/functions/");
  uri.AddPathSegment(request.GetFunctionName());
  uri.AddPathSegments("/aliases");
  return ListAliasesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListAliasesOutcomeCallable LambdaClient::ListAliasesCallable(const ListAliasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListAliasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListAliases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientListAliasesAsyncHelper(LambdaClient const * const clientThis, const ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListAliases(request), context);
}

void LambdaClient::ListAliasesAsync(const ListAliasesRequest& request, const ListAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientListAliasesAsyncHelper( this, request, handler, context ); } );
}

ListCodeSigningConfigsOutcome LambdaClient::ListCodeSigningConfigs(const ListCodeSigningConfigsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-04-22/code-signing-configs/");
  return ListCodeSigningConfigsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListCodeSigningConfigsOutcomeCallable LambdaClient::ListCodeSigningConfigsCallable(const ListCodeSigningConfigsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCodeSigningConfigsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCodeSigningConfigs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientListCodeSigningConfigsAsyncHelper(LambdaClient const * const clientThis, const ListCodeSigningConfigsRequest& request, const ListCodeSigningConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListCodeSigningConfigs(request), context);
}

void LambdaClient::ListCodeSigningConfigsAsync(const ListCodeSigningConfigsRequest& request, const ListCodeSigningConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientListCodeSigningConfigsAsyncHelper( this, request, handler, context ); } );
}

ListEventSourceMappingsOutcome LambdaClient::ListEventSourceMappings(const ListEventSourceMappingsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2015-03-31/event-source-mappings/");
  return ListEventSourceMappingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListEventSourceMappingsOutcomeCallable LambdaClient::ListEventSourceMappingsCallable(const ListEventSourceMappingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEventSourceMappingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEventSourceMappings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientListEventSourceMappingsAsyncHelper(LambdaClient const * const clientThis, const ListEventSourceMappingsRequest& request, const ListEventSourceMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListEventSourceMappings(request), context);
}

void LambdaClient::ListEventSourceMappingsAsync(const ListEventSourceMappingsRequest& request, const ListEventSourceMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientListEventSourceMappingsAsyncHelper( this, request, handler, context ); } );
}

ListFunctionEventInvokeConfigsOutcome LambdaClient::ListFunctionEventInvokeConfigs(const ListFunctionEventInvokeConfigsRequest& request) const
{
  if (!request.FunctionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFunctionEventInvokeConfigs", "Required field: FunctionName, is not set");
    return ListFunctionEventInvokeConfigsOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2019-09-25/functions/");
  uri.AddPathSegment(request.GetFunctionName());
  uri.AddPathSegments("/event-invoke-config/list");
  return ListFunctionEventInvokeConfigsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListFunctionEventInvokeConfigsOutcomeCallable LambdaClient::ListFunctionEventInvokeConfigsCallable(const ListFunctionEventInvokeConfigsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFunctionEventInvokeConfigsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFunctionEventInvokeConfigs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientListFunctionEventInvokeConfigsAsyncHelper(LambdaClient const * const clientThis, const ListFunctionEventInvokeConfigsRequest& request, const ListFunctionEventInvokeConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListFunctionEventInvokeConfigs(request), context);
}

void LambdaClient::ListFunctionEventInvokeConfigsAsync(const ListFunctionEventInvokeConfigsRequest& request, const ListFunctionEventInvokeConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientListFunctionEventInvokeConfigsAsyncHelper( this, request, handler, context ); } );
}

ListFunctionUrlConfigsOutcome LambdaClient::ListFunctionUrlConfigs(const ListFunctionUrlConfigsRequest& request) const
{
  if (!request.FunctionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFunctionUrlConfigs", "Required field: FunctionName, is not set");
    return ListFunctionUrlConfigsOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-10-31/functions/");
  uri.AddPathSegment(request.GetFunctionName());
  uri.AddPathSegments("/urls");
  return ListFunctionUrlConfigsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListFunctionUrlConfigsOutcomeCallable LambdaClient::ListFunctionUrlConfigsCallable(const ListFunctionUrlConfigsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFunctionUrlConfigsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFunctionUrlConfigs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientListFunctionUrlConfigsAsyncHelper(LambdaClient const * const clientThis, const ListFunctionUrlConfigsRequest& request, const ListFunctionUrlConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListFunctionUrlConfigs(request), context);
}

void LambdaClient::ListFunctionUrlConfigsAsync(const ListFunctionUrlConfigsRequest& request, const ListFunctionUrlConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientListFunctionUrlConfigsAsyncHelper( this, request, handler, context ); } );
}

ListFunctionsOutcome LambdaClient::ListFunctions(const ListFunctionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2015-03-31/functions/");
  return ListFunctionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListFunctionsOutcomeCallable LambdaClient::ListFunctionsCallable(const ListFunctionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFunctionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFunctions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientListFunctionsAsyncHelper(LambdaClient const * const clientThis, const ListFunctionsRequest& request, const ListFunctionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListFunctions(request), context);
}

void LambdaClient::ListFunctionsAsync(const ListFunctionsRequest& request, const ListFunctionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientListFunctionsAsyncHelper( this, request, handler, context ); } );
}

ListFunctionsByCodeSigningConfigOutcome LambdaClient::ListFunctionsByCodeSigningConfig(const ListFunctionsByCodeSigningConfigRequest& request) const
{
  if (!request.CodeSigningConfigArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFunctionsByCodeSigningConfig", "Required field: CodeSigningConfigArn, is not set");
    return ListFunctionsByCodeSigningConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CodeSigningConfigArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-04-22/code-signing-configs/");
  uri.AddPathSegment(request.GetCodeSigningConfigArn());
  uri.AddPathSegments("/functions");
  return ListFunctionsByCodeSigningConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListFunctionsByCodeSigningConfigOutcomeCallable LambdaClient::ListFunctionsByCodeSigningConfigCallable(const ListFunctionsByCodeSigningConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFunctionsByCodeSigningConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFunctionsByCodeSigningConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientListFunctionsByCodeSigningConfigAsyncHelper(LambdaClient const * const clientThis, const ListFunctionsByCodeSigningConfigRequest& request, const ListFunctionsByCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListFunctionsByCodeSigningConfig(request), context);
}

void LambdaClient::ListFunctionsByCodeSigningConfigAsync(const ListFunctionsByCodeSigningConfigRequest& request, const ListFunctionsByCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientListFunctionsByCodeSigningConfigAsyncHelper( this, request, handler, context ); } );
}

ListLayerVersionsOutcome LambdaClient::ListLayerVersions(const ListLayerVersionsRequest& request) const
{
  if (!request.LayerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListLayerVersions", "Required field: LayerName, is not set");
    return ListLayerVersionsOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LayerName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2018-10-31/layers/");
  uri.AddPathSegment(request.GetLayerName());
  uri.AddPathSegments("/versions");
  return ListLayerVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListLayerVersionsOutcomeCallable LambdaClient::ListLayerVersionsCallable(const ListLayerVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLayerVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLayerVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientListLayerVersionsAsyncHelper(LambdaClient const * const clientThis, const ListLayerVersionsRequest& request, const ListLayerVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListLayerVersions(request), context);
}

void LambdaClient::ListLayerVersionsAsync(const ListLayerVersionsRequest& request, const ListLayerVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientListLayerVersionsAsyncHelper( this, request, handler, context ); } );
}

ListLayersOutcome LambdaClient::ListLayers(const ListLayersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2018-10-31/layers");
  return ListLayersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListLayersOutcomeCallable LambdaClient::ListLayersCallable(const ListLayersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLayersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLayers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientListLayersAsyncHelper(LambdaClient const * const clientThis, const ListLayersRequest& request, const ListLayersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListLayers(request), context);
}

void LambdaClient::ListLayersAsync(const ListLayersRequest& request, const ListLayersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientListLayersAsyncHelper( this, request, handler, context ); } );
}

ListProvisionedConcurrencyConfigsOutcome LambdaClient::ListProvisionedConcurrencyConfigs(const ListProvisionedConcurrencyConfigsRequest& request) const
{
  if (!request.FunctionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListProvisionedConcurrencyConfigs", "Required field: FunctionName, is not set");
    return ListProvisionedConcurrencyConfigsOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  uri.AddPathSegments("/2019-09-30/functions/");
  uri.AddPathSegment(request.GetFunctionName());
  uri.AddPathSegments("/provisioned-concurrency");
  ss.str("?List=ALL");
  uri.SetQueryString(ss.str());
  return ListProvisionedConcurrencyConfigsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListProvisionedConcurrencyConfigsOutcomeCallable LambdaClient::ListProvisionedConcurrencyConfigsCallable(const ListProvisionedConcurrencyConfigsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProvisionedConcurrencyConfigsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProvisionedConcurrencyConfigs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientListProvisionedConcurrencyConfigsAsyncHelper(LambdaClient const * const clientThis, const ListProvisionedConcurrencyConfigsRequest& request, const ListProvisionedConcurrencyConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListProvisionedConcurrencyConfigs(request), context);
}

void LambdaClient::ListProvisionedConcurrencyConfigsAsync(const ListProvisionedConcurrencyConfigsRequest& request, const ListProvisionedConcurrencyConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientListProvisionedConcurrencyConfigsAsyncHelper( this, request, handler, context ); } );
}

ListTagsOutcome LambdaClient::ListTags(const ListTagsRequest& request) const
{
  if (!request.ResourceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTags", "Required field: Resource, is not set");
    return ListTagsOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Resource]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2017-03-31/tags/");
  uri.AddPathSegment(request.GetResource());
  return ListTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsOutcomeCallable LambdaClient::ListTagsCallable(const ListTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientListTagsAsyncHelper(LambdaClient const * const clientThis, const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTags(request), context);
}

void LambdaClient::ListTagsAsync(const ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientListTagsAsyncHelper( this, request, handler, context ); } );
}

ListVersionsByFunctionOutcome LambdaClient::ListVersionsByFunction(const ListVersionsByFunctionRequest& request) const
{
  if (!request.FunctionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListVersionsByFunction", "Required field: FunctionName, is not set");
    return ListVersionsByFunctionOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2015-03-31/functions/");
  uri.AddPathSegment(request.GetFunctionName());
  uri.AddPathSegments("/versions");
  return ListVersionsByFunctionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListVersionsByFunctionOutcomeCallable LambdaClient::ListVersionsByFunctionCallable(const ListVersionsByFunctionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVersionsByFunctionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVersionsByFunction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientListVersionsByFunctionAsyncHelper(LambdaClient const * const clientThis, const ListVersionsByFunctionRequest& request, const ListVersionsByFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListVersionsByFunction(request), context);
}

void LambdaClient::ListVersionsByFunctionAsync(const ListVersionsByFunctionRequest& request, const ListVersionsByFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientListVersionsByFunctionAsyncHelper( this, request, handler, context ); } );
}

PublishLayerVersionOutcome LambdaClient::PublishLayerVersion(const PublishLayerVersionRequest& request) const
{
  if (!request.LayerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PublishLayerVersion", "Required field: LayerName, is not set");
    return PublishLayerVersionOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LayerName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2018-10-31/layers/");
  uri.AddPathSegment(request.GetLayerName());
  uri.AddPathSegments("/versions");
  return PublishLayerVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PublishLayerVersionOutcomeCallable LambdaClient::PublishLayerVersionCallable(const PublishLayerVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PublishLayerVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PublishLayerVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientPublishLayerVersionAsyncHelper(LambdaClient const * const clientThis, const PublishLayerVersionRequest& request, const PublishLayerVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PublishLayerVersion(request), context);
}

void LambdaClient::PublishLayerVersionAsync(const PublishLayerVersionRequest& request, const PublishLayerVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientPublishLayerVersionAsyncHelper( this, request, handler, context ); } );
}

PublishVersionOutcome LambdaClient::PublishVersion(const PublishVersionRequest& request) const
{
  if (!request.FunctionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PublishVersion", "Required field: FunctionName, is not set");
    return PublishVersionOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2015-03-31/functions/");
  uri.AddPathSegment(request.GetFunctionName());
  uri.AddPathSegments("/versions");
  return PublishVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PublishVersionOutcomeCallable LambdaClient::PublishVersionCallable(const PublishVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PublishVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PublishVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientPublishVersionAsyncHelper(LambdaClient const * const clientThis, const PublishVersionRequest& request, const PublishVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PublishVersion(request), context);
}

void LambdaClient::PublishVersionAsync(const PublishVersionRequest& request, const PublishVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientPublishVersionAsyncHelper( this, request, handler, context ); } );
}

PutFunctionCodeSigningConfigOutcome LambdaClient::PutFunctionCodeSigningConfig(const PutFunctionCodeSigningConfigRequest& request) const
{
  if (!request.FunctionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutFunctionCodeSigningConfig", "Required field: FunctionName, is not set");
    return PutFunctionCodeSigningConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-06-30/functions/");
  uri.AddPathSegment(request.GetFunctionName());
  uri.AddPathSegments("/code-signing-config");
  return PutFunctionCodeSigningConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutFunctionCodeSigningConfigOutcomeCallable LambdaClient::PutFunctionCodeSigningConfigCallable(const PutFunctionCodeSigningConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutFunctionCodeSigningConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutFunctionCodeSigningConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientPutFunctionCodeSigningConfigAsyncHelper(LambdaClient const * const clientThis, const PutFunctionCodeSigningConfigRequest& request, const PutFunctionCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutFunctionCodeSigningConfig(request), context);
}

void LambdaClient::PutFunctionCodeSigningConfigAsync(const PutFunctionCodeSigningConfigRequest& request, const PutFunctionCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientPutFunctionCodeSigningConfigAsyncHelper( this, request, handler, context ); } );
}

PutFunctionConcurrencyOutcome LambdaClient::PutFunctionConcurrency(const PutFunctionConcurrencyRequest& request) const
{
  if (!request.FunctionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutFunctionConcurrency", "Required field: FunctionName, is not set");
    return PutFunctionConcurrencyOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2017-10-31/functions/");
  uri.AddPathSegment(request.GetFunctionName());
  uri.AddPathSegments("/concurrency");
  return PutFunctionConcurrencyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutFunctionConcurrencyOutcomeCallable LambdaClient::PutFunctionConcurrencyCallable(const PutFunctionConcurrencyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutFunctionConcurrencyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutFunctionConcurrency(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientPutFunctionConcurrencyAsyncHelper(LambdaClient const * const clientThis, const PutFunctionConcurrencyRequest& request, const PutFunctionConcurrencyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutFunctionConcurrency(request), context);
}

void LambdaClient::PutFunctionConcurrencyAsync(const PutFunctionConcurrencyRequest& request, const PutFunctionConcurrencyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientPutFunctionConcurrencyAsyncHelper( this, request, handler, context ); } );
}

PutFunctionEventInvokeConfigOutcome LambdaClient::PutFunctionEventInvokeConfig(const PutFunctionEventInvokeConfigRequest& request) const
{
  if (!request.FunctionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutFunctionEventInvokeConfig", "Required field: FunctionName, is not set");
    return PutFunctionEventInvokeConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2019-09-25/functions/");
  uri.AddPathSegment(request.GetFunctionName());
  uri.AddPathSegments("/event-invoke-config");
  return PutFunctionEventInvokeConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutFunctionEventInvokeConfigOutcomeCallable LambdaClient::PutFunctionEventInvokeConfigCallable(const PutFunctionEventInvokeConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutFunctionEventInvokeConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutFunctionEventInvokeConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientPutFunctionEventInvokeConfigAsyncHelper(LambdaClient const * const clientThis, const PutFunctionEventInvokeConfigRequest& request, const PutFunctionEventInvokeConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutFunctionEventInvokeConfig(request), context);
}

void LambdaClient::PutFunctionEventInvokeConfigAsync(const PutFunctionEventInvokeConfigRequest& request, const PutFunctionEventInvokeConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientPutFunctionEventInvokeConfigAsyncHelper( this, request, handler, context ); } );
}

PutProvisionedConcurrencyConfigOutcome LambdaClient::PutProvisionedConcurrencyConfig(const PutProvisionedConcurrencyConfigRequest& request) const
{
  if (!request.FunctionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutProvisionedConcurrencyConfig", "Required field: FunctionName, is not set");
    return PutProvisionedConcurrencyConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionName]", false));
  }
  if (!request.QualifierHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutProvisionedConcurrencyConfig", "Required field: Qualifier, is not set");
    return PutProvisionedConcurrencyConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Qualifier]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2019-09-30/functions/");
  uri.AddPathSegment(request.GetFunctionName());
  uri.AddPathSegments("/provisioned-concurrency");
  return PutProvisionedConcurrencyConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutProvisionedConcurrencyConfigOutcomeCallable LambdaClient::PutProvisionedConcurrencyConfigCallable(const PutProvisionedConcurrencyConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutProvisionedConcurrencyConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutProvisionedConcurrencyConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientPutProvisionedConcurrencyConfigAsyncHelper(LambdaClient const * const clientThis, const PutProvisionedConcurrencyConfigRequest& request, const PutProvisionedConcurrencyConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutProvisionedConcurrencyConfig(request), context);
}

void LambdaClient::PutProvisionedConcurrencyConfigAsync(const PutProvisionedConcurrencyConfigRequest& request, const PutProvisionedConcurrencyConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientPutProvisionedConcurrencyConfigAsyncHelper( this, request, handler, context ); } );
}

RemoveLayerVersionPermissionOutcome LambdaClient::RemoveLayerVersionPermission(const RemoveLayerVersionPermissionRequest& request) const
{
  if (!request.LayerNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveLayerVersionPermission", "Required field: LayerName, is not set");
    return RemoveLayerVersionPermissionOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LayerName]", false));
  }
  if (!request.VersionNumberHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveLayerVersionPermission", "Required field: VersionNumber, is not set");
    return RemoveLayerVersionPermissionOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionNumber]", false));
  }
  if (!request.StatementIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemoveLayerVersionPermission", "Required field: StatementId, is not set");
    return RemoveLayerVersionPermissionOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StatementId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2018-10-31/layers/");
  uri.AddPathSegment(request.GetLayerName());
  uri.AddPathSegments("/versions/");
  uri.AddPathSegment(request.GetVersionNumber());
  uri.AddPathSegments("/policy/");
  uri.AddPathSegment(request.GetStatementId());
  return RemoveLayerVersionPermissionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

RemoveLayerVersionPermissionOutcomeCallable LambdaClient::RemoveLayerVersionPermissionCallable(const RemoveLayerVersionPermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveLayerVersionPermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveLayerVersionPermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientRemoveLayerVersionPermissionAsyncHelper(LambdaClient const * const clientThis, const RemoveLayerVersionPermissionRequest& request, const RemoveLayerVersionPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemoveLayerVersionPermission(request), context);
}

void LambdaClient::RemoveLayerVersionPermissionAsync(const RemoveLayerVersionPermissionRequest& request, const RemoveLayerVersionPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientRemoveLayerVersionPermissionAsyncHelper( this, request, handler, context ); } );
}

RemovePermissionOutcome LambdaClient::RemovePermission(const RemovePermissionRequest& request) const
{
  if (!request.FunctionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemovePermission", "Required field: FunctionName, is not set");
    return RemovePermissionOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionName]", false));
  }
  if (!request.StatementIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RemovePermission", "Required field: StatementId, is not set");
    return RemovePermissionOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StatementId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2015-03-31/functions/");
  uri.AddPathSegment(request.GetFunctionName());
  uri.AddPathSegments("/policy/");
  uri.AddPathSegment(request.GetStatementId());
  return RemovePermissionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

RemovePermissionOutcomeCallable LambdaClient::RemovePermissionCallable(const RemovePermissionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemovePermissionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemovePermission(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientRemovePermissionAsyncHelper(LambdaClient const * const clientThis, const RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->RemovePermission(request), context);
}

void LambdaClient::RemovePermissionAsync(const RemovePermissionRequest& request, const RemovePermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientRemovePermissionAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome LambdaClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: Resource, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Resource]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2017-03-31/tags/");
  uri.AddPathSegment(request.GetResource());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable LambdaClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientTagResourceAsyncHelper(LambdaClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void LambdaClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome LambdaClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: Resource, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Resource]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2017-03-31/tags/");
  uri.AddPathSegment(request.GetResource());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable LambdaClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientUntagResourceAsyncHelper(LambdaClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void LambdaClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateAliasOutcome LambdaClient::UpdateAlias(const UpdateAliasRequest& request) const
{
  if (!request.FunctionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAlias", "Required field: FunctionName, is not set");
    return UpdateAliasOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionName]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAlias", "Required field: Name, is not set");
    return UpdateAliasOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2015-03-31/functions/");
  uri.AddPathSegment(request.GetFunctionName());
  uri.AddPathSegments("/aliases/");
  uri.AddPathSegment(request.GetName());
  return UpdateAliasOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateAliasOutcomeCallable LambdaClient::UpdateAliasCallable(const UpdateAliasRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAliasOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAlias(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientUpdateAliasAsyncHelper(LambdaClient const * const clientThis, const UpdateAliasRequest& request, const UpdateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAlias(request), context);
}

void LambdaClient::UpdateAliasAsync(const UpdateAliasRequest& request, const UpdateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientUpdateAliasAsyncHelper( this, request, handler, context ); } );
}

UpdateCodeSigningConfigOutcome LambdaClient::UpdateCodeSigningConfig(const UpdateCodeSigningConfigRequest& request) const
{
  if (!request.CodeSigningConfigArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateCodeSigningConfig", "Required field: CodeSigningConfigArn, is not set");
    return UpdateCodeSigningConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CodeSigningConfigArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2020-04-22/code-signing-configs/");
  uri.AddPathSegment(request.GetCodeSigningConfigArn());
  return UpdateCodeSigningConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateCodeSigningConfigOutcomeCallable LambdaClient::UpdateCodeSigningConfigCallable(const UpdateCodeSigningConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateCodeSigningConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateCodeSigningConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientUpdateCodeSigningConfigAsyncHelper(LambdaClient const * const clientThis, const UpdateCodeSigningConfigRequest& request, const UpdateCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateCodeSigningConfig(request), context);
}

void LambdaClient::UpdateCodeSigningConfigAsync(const UpdateCodeSigningConfigRequest& request, const UpdateCodeSigningConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientUpdateCodeSigningConfigAsyncHelper( this, request, handler, context ); } );
}

UpdateEventSourceMappingOutcome LambdaClient::UpdateEventSourceMapping(const UpdateEventSourceMappingRequest& request) const
{
  if (!request.UUIDHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateEventSourceMapping", "Required field: UUID, is not set");
    return UpdateEventSourceMappingOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UUID]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2015-03-31/event-source-mappings/");
  uri.AddPathSegment(request.GetUUID());
  return UpdateEventSourceMappingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateEventSourceMappingOutcomeCallable LambdaClient::UpdateEventSourceMappingCallable(const UpdateEventSourceMappingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEventSourceMappingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEventSourceMapping(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientUpdateEventSourceMappingAsyncHelper(LambdaClient const * const clientThis, const UpdateEventSourceMappingRequest& request, const UpdateEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateEventSourceMapping(request), context);
}

void LambdaClient::UpdateEventSourceMappingAsync(const UpdateEventSourceMappingRequest& request, const UpdateEventSourceMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientUpdateEventSourceMappingAsyncHelper( this, request, handler, context ); } );
}

UpdateFunctionCodeOutcome LambdaClient::UpdateFunctionCode(const UpdateFunctionCodeRequest& request) const
{
  if (!request.FunctionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFunctionCode", "Required field: FunctionName, is not set");
    return UpdateFunctionCodeOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2015-03-31/functions/");
  uri.AddPathSegment(request.GetFunctionName());
  uri.AddPathSegments("/code");
  return UpdateFunctionCodeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateFunctionCodeOutcomeCallable LambdaClient::UpdateFunctionCodeCallable(const UpdateFunctionCodeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFunctionCodeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFunctionCode(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientUpdateFunctionCodeAsyncHelper(LambdaClient const * const clientThis, const UpdateFunctionCodeRequest& request, const UpdateFunctionCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateFunctionCode(request), context);
}

void LambdaClient::UpdateFunctionCodeAsync(const UpdateFunctionCodeRequest& request, const UpdateFunctionCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientUpdateFunctionCodeAsyncHelper( this, request, handler, context ); } );
}

UpdateFunctionConfigurationOutcome LambdaClient::UpdateFunctionConfiguration(const UpdateFunctionConfigurationRequest& request) const
{
  if (!request.FunctionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFunctionConfiguration", "Required field: FunctionName, is not set");
    return UpdateFunctionConfigurationOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2015-03-31/functions/");
  uri.AddPathSegment(request.GetFunctionName());
  uri.AddPathSegments("/configuration");
  return UpdateFunctionConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateFunctionConfigurationOutcomeCallable LambdaClient::UpdateFunctionConfigurationCallable(const UpdateFunctionConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFunctionConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFunctionConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientUpdateFunctionConfigurationAsyncHelper(LambdaClient const * const clientThis, const UpdateFunctionConfigurationRequest& request, const UpdateFunctionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateFunctionConfiguration(request), context);
}

void LambdaClient::UpdateFunctionConfigurationAsync(const UpdateFunctionConfigurationRequest& request, const UpdateFunctionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientUpdateFunctionConfigurationAsyncHelper( this, request, handler, context ); } );
}

UpdateFunctionEventInvokeConfigOutcome LambdaClient::UpdateFunctionEventInvokeConfig(const UpdateFunctionEventInvokeConfigRequest& request) const
{
  if (!request.FunctionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFunctionEventInvokeConfig", "Required field: FunctionName, is not set");
    return UpdateFunctionEventInvokeConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2019-09-25/functions/");
  uri.AddPathSegment(request.GetFunctionName());
  uri.AddPathSegments("/event-invoke-config");
  return UpdateFunctionEventInvokeConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateFunctionEventInvokeConfigOutcomeCallable LambdaClient::UpdateFunctionEventInvokeConfigCallable(const UpdateFunctionEventInvokeConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFunctionEventInvokeConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFunctionEventInvokeConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientUpdateFunctionEventInvokeConfigAsyncHelper(LambdaClient const * const clientThis, const UpdateFunctionEventInvokeConfigRequest& request, const UpdateFunctionEventInvokeConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateFunctionEventInvokeConfig(request), context);
}

void LambdaClient::UpdateFunctionEventInvokeConfigAsync(const UpdateFunctionEventInvokeConfigRequest& request, const UpdateFunctionEventInvokeConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientUpdateFunctionEventInvokeConfigAsyncHelper( this, request, handler, context ); } );
}

UpdateFunctionUrlConfigOutcome LambdaClient::UpdateFunctionUrlConfig(const UpdateFunctionUrlConfigRequest& request) const
{
  if (!request.FunctionNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFunctionUrlConfig", "Required field: FunctionName, is not set");
    return UpdateFunctionUrlConfigOutcome(Aws::Client::AWSError<LambdaErrors>(LambdaErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/2021-10-31/functions/");
  uri.AddPathSegment(request.GetFunctionName());
  uri.AddPathSegments("/url");
  return UpdateFunctionUrlConfigOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

UpdateFunctionUrlConfigOutcomeCallable LambdaClient::UpdateFunctionUrlConfigCallable(const UpdateFunctionUrlConfigRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFunctionUrlConfigOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFunctionUrlConfig(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LambdaClientUpdateFunctionUrlConfigAsyncHelper(LambdaClient const * const clientThis, const UpdateFunctionUrlConfigRequest& request, const UpdateFunctionUrlConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateFunctionUrlConfig(request), context);
}

void LambdaClient::UpdateFunctionUrlConfigAsync(const UpdateFunctionUrlConfigRequest& request, const UpdateFunctionUrlConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ LambdaClientUpdateFunctionUrlConfigAsyncHelper( this, request, handler, context ); } );
}

