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

#include <aws/appsync/AppSyncClient.h>
#include <aws/appsync/AppSyncEndpoint.h>
#include <aws/appsync/AppSyncErrorMarshaller.h>
#include <aws/appsync/model/AssociateApiRequest.h>
#include <aws/appsync/model/CreateApiCacheRequest.h>
#include <aws/appsync/model/CreateApiKeyRequest.h>
#include <aws/appsync/model/CreateDataSourceRequest.h>
#include <aws/appsync/model/CreateDomainNameRequest.h>
#include <aws/appsync/model/CreateFunctionRequest.h>
#include <aws/appsync/model/CreateGraphqlApiRequest.h>
#include <aws/appsync/model/CreateResolverRequest.h>
#include <aws/appsync/model/CreateTypeRequest.h>
#include <aws/appsync/model/DeleteApiCacheRequest.h>
#include <aws/appsync/model/DeleteApiKeyRequest.h>
#include <aws/appsync/model/DeleteDataSourceRequest.h>
#include <aws/appsync/model/DeleteDomainNameRequest.h>
#include <aws/appsync/model/DeleteFunctionRequest.h>
#include <aws/appsync/model/DeleteGraphqlApiRequest.h>
#include <aws/appsync/model/DeleteResolverRequest.h>
#include <aws/appsync/model/DeleteTypeRequest.h>
#include <aws/appsync/model/DisassociateApiRequest.h>
#include <aws/appsync/model/EvaluateMappingTemplateRequest.h>
#include <aws/appsync/model/FlushApiCacheRequest.h>
#include <aws/appsync/model/GetApiAssociationRequest.h>
#include <aws/appsync/model/GetApiCacheRequest.h>
#include <aws/appsync/model/GetDataSourceRequest.h>
#include <aws/appsync/model/GetDomainNameRequest.h>
#include <aws/appsync/model/GetFunctionRequest.h>
#include <aws/appsync/model/GetGraphqlApiRequest.h>
#include <aws/appsync/model/GetIntrospectionSchemaRequest.h>
#include <aws/appsync/model/GetResolverRequest.h>
#include <aws/appsync/model/GetSchemaCreationStatusRequest.h>
#include <aws/appsync/model/GetTypeRequest.h>
#include <aws/appsync/model/ListApiKeysRequest.h>
#include <aws/appsync/model/ListDataSourcesRequest.h>
#include <aws/appsync/model/ListDomainNamesRequest.h>
#include <aws/appsync/model/ListFunctionsRequest.h>
#include <aws/appsync/model/ListGraphqlApisRequest.h>
#include <aws/appsync/model/ListResolversRequest.h>
#include <aws/appsync/model/ListResolversByFunctionRequest.h>
#include <aws/appsync/model/ListTagsForResourceRequest.h>
#include <aws/appsync/model/ListTypesRequest.h>
#include <aws/appsync/model/StartSchemaCreationRequest.h>
#include <aws/appsync/model/TagResourceRequest.h>
#include <aws/appsync/model/UntagResourceRequest.h>
#include <aws/appsync/model/UpdateApiCacheRequest.h>
#include <aws/appsync/model/UpdateApiKeyRequest.h>
#include <aws/appsync/model/UpdateDataSourceRequest.h>
#include <aws/appsync/model/UpdateDomainNameRequest.h>
#include <aws/appsync/model/UpdateFunctionRequest.h>
#include <aws/appsync/model/UpdateGraphqlApiRequest.h>
#include <aws/appsync/model/UpdateResolverRequest.h>
#include <aws/appsync/model/UpdateTypeRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::AppSync;
using namespace Aws::AppSync::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "appsync";
static const char* ALLOCATION_TAG = "AppSyncClient";

AppSyncClient::AppSyncClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppSyncErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppSyncClient::AppSyncClient(const AWSCredentials& credentials,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppSyncErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppSyncClient::AppSyncClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AppSyncErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppSyncClient::~AppSyncClient()
{
}

void AppSyncClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("AppSync");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + AppSyncEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void AppSyncClient::OverrideEndpoint(const Aws::String& endpoint)
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

AssociateApiOutcome AppSyncClient::AssociateApi(const AssociateApiRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("AssociateApi", "Required field: DomainName, is not set");
    return AssociateApiOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/domainnames/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/apiassociation");
  return AssociateApiOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssociateApiOutcomeCallable AppSyncClient::AssociateApiCallable(const AssociateApiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateApiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateApi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientAssociateApiAsyncHelper(AppSyncClient const * const clientThis, const AssociateApiRequest& request, const AssociateApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->AssociateApi(request), context);
}

void AppSyncClient::AssociateApiAsync(const AssociateApiRequest& request, const AssociateApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientAssociateApiAsyncHelper( this, request, handler, context ); } );
}

CreateApiCacheOutcome AppSyncClient::CreateApiCache(const CreateApiCacheRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateApiCache", "Required field: ApiId, is not set");
    return CreateApiCacheOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apis/");
  uri.AddPathSegment(request.GetApiId());
  uri.AddPathSegments("/ApiCaches");
  return CreateApiCacheOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateApiCacheOutcomeCallable AppSyncClient::CreateApiCacheCallable(const CreateApiCacheRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateApiCacheOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApiCache(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientCreateApiCacheAsyncHelper(AppSyncClient const * const clientThis, const CreateApiCacheRequest& request, const CreateApiCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateApiCache(request), context);
}

void AppSyncClient::CreateApiCacheAsync(const CreateApiCacheRequest& request, const CreateApiCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientCreateApiCacheAsyncHelper( this, request, handler, context ); } );
}

CreateApiKeyOutcome AppSyncClient::CreateApiKey(const CreateApiKeyRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateApiKey", "Required field: ApiId, is not set");
    return CreateApiKeyOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apis/");
  uri.AddPathSegment(request.GetApiId());
  uri.AddPathSegments("/apikeys");
  return CreateApiKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateApiKeyOutcomeCallable AppSyncClient::CreateApiKeyCallable(const CreateApiKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateApiKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApiKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientCreateApiKeyAsyncHelper(AppSyncClient const * const clientThis, const CreateApiKeyRequest& request, const CreateApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateApiKey(request), context);
}

void AppSyncClient::CreateApiKeyAsync(const CreateApiKeyRequest& request, const CreateApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientCreateApiKeyAsyncHelper( this, request, handler, context ); } );
}

CreateDataSourceOutcome AppSyncClient::CreateDataSource(const CreateDataSourceRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDataSource", "Required field: ApiId, is not set");
    return CreateDataSourceOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apis/");
  uri.AddPathSegment(request.GetApiId());
  uri.AddPathSegments("/datasources");
  return CreateDataSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDataSourceOutcomeCallable AppSyncClient::CreateDataSourceCallable(const CreateDataSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDataSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientCreateDataSourceAsyncHelper(AppSyncClient const * const clientThis, const CreateDataSourceRequest& request, const CreateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDataSource(request), context);
}

void AppSyncClient::CreateDataSourceAsync(const CreateDataSourceRequest& request, const CreateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientCreateDataSourceAsyncHelper( this, request, handler, context ); } );
}

CreateDomainNameOutcome AppSyncClient::CreateDomainName(const CreateDomainNameRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/domainnames");
  return CreateDomainNameOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDomainNameOutcomeCallable AppSyncClient::CreateDomainNameCallable(const CreateDomainNameRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDomainNameOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDomainName(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientCreateDomainNameAsyncHelper(AppSyncClient const * const clientThis, const CreateDomainNameRequest& request, const CreateDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDomainName(request), context);
}

void AppSyncClient::CreateDomainNameAsync(const CreateDomainNameRequest& request, const CreateDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientCreateDomainNameAsyncHelper( this, request, handler, context ); } );
}

CreateFunctionOutcome AppSyncClient::CreateFunction(const CreateFunctionRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateFunction", "Required field: ApiId, is not set");
    return CreateFunctionOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apis/");
  uri.AddPathSegment(request.GetApiId());
  uri.AddPathSegments("/functions");
  return CreateFunctionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFunctionOutcomeCallable AppSyncClient::CreateFunctionCallable(const CreateFunctionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFunctionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFunction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientCreateFunctionAsyncHelper(AppSyncClient const * const clientThis, const CreateFunctionRequest& request, const CreateFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateFunction(request), context);
}

void AppSyncClient::CreateFunctionAsync(const CreateFunctionRequest& request, const CreateFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientCreateFunctionAsyncHelper( this, request, handler, context ); } );
}

CreateGraphqlApiOutcome AppSyncClient::CreateGraphqlApi(const CreateGraphqlApiRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apis");
  return CreateGraphqlApiOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateGraphqlApiOutcomeCallable AppSyncClient::CreateGraphqlApiCallable(const CreateGraphqlApiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateGraphqlApiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateGraphqlApi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientCreateGraphqlApiAsyncHelper(AppSyncClient const * const clientThis, const CreateGraphqlApiRequest& request, const CreateGraphqlApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateGraphqlApi(request), context);
}

void AppSyncClient::CreateGraphqlApiAsync(const CreateGraphqlApiRequest& request, const CreateGraphqlApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientCreateGraphqlApiAsyncHelper( this, request, handler, context ); } );
}

CreateResolverOutcome AppSyncClient::CreateResolver(const CreateResolverRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateResolver", "Required field: ApiId, is not set");
    return CreateResolverOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.TypeNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateResolver", "Required field: TypeName, is not set");
    return CreateResolverOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TypeName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apis/");
  uri.AddPathSegment(request.GetApiId());
  uri.AddPathSegments("/types/");
  uri.AddPathSegment(request.GetTypeName());
  uri.AddPathSegments("/resolvers");
  return CreateResolverOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateResolverOutcomeCallable AppSyncClient::CreateResolverCallable(const CreateResolverRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateResolverOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateResolver(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientCreateResolverAsyncHelper(AppSyncClient const * const clientThis, const CreateResolverRequest& request, const CreateResolverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateResolver(request), context);
}

void AppSyncClient::CreateResolverAsync(const CreateResolverRequest& request, const CreateResolverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientCreateResolverAsyncHelper( this, request, handler, context ); } );
}

CreateTypeOutcome AppSyncClient::CreateType(const CreateTypeRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateType", "Required field: ApiId, is not set");
    return CreateTypeOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apis/");
  uri.AddPathSegment(request.GetApiId());
  uri.AddPathSegments("/types");
  return CreateTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateTypeOutcomeCallable AppSyncClient::CreateTypeCallable(const CreateTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientCreateTypeAsyncHelper(AppSyncClient const * const clientThis, const CreateTypeRequest& request, const CreateTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateType(request), context);
}

void AppSyncClient::CreateTypeAsync(const CreateTypeRequest& request, const CreateTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientCreateTypeAsyncHelper( this, request, handler, context ); } );
}

DeleteApiCacheOutcome AppSyncClient::DeleteApiCache(const DeleteApiCacheRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApiCache", "Required field: ApiId, is not set");
    return DeleteApiCacheOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apis/");
  uri.AddPathSegment(request.GetApiId());
  uri.AddPathSegments("/ApiCaches");
  return DeleteApiCacheOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteApiCacheOutcomeCallable AppSyncClient::DeleteApiCacheCallable(const DeleteApiCacheRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApiCacheOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApiCache(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientDeleteApiCacheAsyncHelper(AppSyncClient const * const clientThis, const DeleteApiCacheRequest& request, const DeleteApiCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteApiCache(request), context);
}

void AppSyncClient::DeleteApiCacheAsync(const DeleteApiCacheRequest& request, const DeleteApiCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientDeleteApiCacheAsyncHelper( this, request, handler, context ); } );
}

DeleteApiKeyOutcome AppSyncClient::DeleteApiKey(const DeleteApiKeyRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApiKey", "Required field: ApiId, is not set");
    return DeleteApiKeyOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApiKey", "Required field: Id, is not set");
    return DeleteApiKeyOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apis/");
  uri.AddPathSegment(request.GetApiId());
  uri.AddPathSegments("/apikeys/");
  uri.AddPathSegment(request.GetId());
  return DeleteApiKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteApiKeyOutcomeCallable AppSyncClient::DeleteApiKeyCallable(const DeleteApiKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApiKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApiKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientDeleteApiKeyAsyncHelper(AppSyncClient const * const clientThis, const DeleteApiKeyRequest& request, const DeleteApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteApiKey(request), context);
}

void AppSyncClient::DeleteApiKeyAsync(const DeleteApiKeyRequest& request, const DeleteApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientDeleteApiKeyAsyncHelper( this, request, handler, context ); } );
}

DeleteDataSourceOutcome AppSyncClient::DeleteDataSource(const DeleteDataSourceRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataSource", "Required field: ApiId, is not set");
    return DeleteDataSourceOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDataSource", "Required field: Name, is not set");
    return DeleteDataSourceOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apis/");
  uri.AddPathSegment(request.GetApiId());
  uri.AddPathSegments("/datasources/");
  uri.AddPathSegment(request.GetName());
  return DeleteDataSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDataSourceOutcomeCallable AppSyncClient::DeleteDataSourceCallable(const DeleteDataSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDataSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDataSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientDeleteDataSourceAsyncHelper(AppSyncClient const * const clientThis, const DeleteDataSourceRequest& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDataSource(request), context);
}

void AppSyncClient::DeleteDataSourceAsync(const DeleteDataSourceRequest& request, const DeleteDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientDeleteDataSourceAsyncHelper( this, request, handler, context ); } );
}

DeleteDomainNameOutcome AppSyncClient::DeleteDomainName(const DeleteDomainNameRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDomainName", "Required field: DomainName, is not set");
    return DeleteDomainNameOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/domainnames/");
  uri.AddPathSegment(request.GetDomainName());
  return DeleteDomainNameOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDomainNameOutcomeCallable AppSyncClient::DeleteDomainNameCallable(const DeleteDomainNameRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDomainNameOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDomainName(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientDeleteDomainNameAsyncHelper(AppSyncClient const * const clientThis, const DeleteDomainNameRequest& request, const DeleteDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDomainName(request), context);
}

void AppSyncClient::DeleteDomainNameAsync(const DeleteDomainNameRequest& request, const DeleteDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientDeleteDomainNameAsyncHelper( this, request, handler, context ); } );
}

DeleteFunctionOutcome AppSyncClient::DeleteFunction(const DeleteFunctionRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFunction", "Required field: ApiId, is not set");
    return DeleteFunctionOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.FunctionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFunction", "Required field: FunctionId, is not set");
    return DeleteFunctionOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apis/");
  uri.AddPathSegment(request.GetApiId());
  uri.AddPathSegments("/functions/");
  uri.AddPathSegment(request.GetFunctionId());
  return DeleteFunctionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteFunctionOutcomeCallable AppSyncClient::DeleteFunctionCallable(const DeleteFunctionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFunctionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFunction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientDeleteFunctionAsyncHelper(AppSyncClient const * const clientThis, const DeleteFunctionRequest& request, const DeleteFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteFunction(request), context);
}

void AppSyncClient::DeleteFunctionAsync(const DeleteFunctionRequest& request, const DeleteFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientDeleteFunctionAsyncHelper( this, request, handler, context ); } );
}

DeleteGraphqlApiOutcome AppSyncClient::DeleteGraphqlApi(const DeleteGraphqlApiRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGraphqlApi", "Required field: ApiId, is not set");
    return DeleteGraphqlApiOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apis/");
  uri.AddPathSegment(request.GetApiId());
  return DeleteGraphqlApiOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteGraphqlApiOutcomeCallable AppSyncClient::DeleteGraphqlApiCallable(const DeleteGraphqlApiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGraphqlApiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGraphqlApi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientDeleteGraphqlApiAsyncHelper(AppSyncClient const * const clientThis, const DeleteGraphqlApiRequest& request, const DeleteGraphqlApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteGraphqlApi(request), context);
}

void AppSyncClient::DeleteGraphqlApiAsync(const DeleteGraphqlApiRequest& request, const DeleteGraphqlApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientDeleteGraphqlApiAsyncHelper( this, request, handler, context ); } );
}

DeleteResolverOutcome AppSyncClient::DeleteResolver(const DeleteResolverRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteResolver", "Required field: ApiId, is not set");
    return DeleteResolverOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.TypeNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteResolver", "Required field: TypeName, is not set");
    return DeleteResolverOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TypeName]", false));
  }
  if (!request.FieldNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteResolver", "Required field: FieldName, is not set");
    return DeleteResolverOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FieldName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apis/");
  uri.AddPathSegment(request.GetApiId());
  uri.AddPathSegments("/types/");
  uri.AddPathSegment(request.GetTypeName());
  uri.AddPathSegments("/resolvers/");
  uri.AddPathSegment(request.GetFieldName());
  return DeleteResolverOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteResolverOutcomeCallable AppSyncClient::DeleteResolverCallable(const DeleteResolverRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResolverOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResolver(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientDeleteResolverAsyncHelper(AppSyncClient const * const clientThis, const DeleteResolverRequest& request, const DeleteResolverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteResolver(request), context);
}

void AppSyncClient::DeleteResolverAsync(const DeleteResolverRequest& request, const DeleteResolverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientDeleteResolverAsyncHelper( this, request, handler, context ); } );
}

DeleteTypeOutcome AppSyncClient::DeleteType(const DeleteTypeRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteType", "Required field: ApiId, is not set");
    return DeleteTypeOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.TypeNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteType", "Required field: TypeName, is not set");
    return DeleteTypeOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TypeName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apis/");
  uri.AddPathSegment(request.GetApiId());
  uri.AddPathSegments("/types/");
  uri.AddPathSegment(request.GetTypeName());
  return DeleteTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteTypeOutcomeCallable AppSyncClient::DeleteTypeCallable(const DeleteTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientDeleteTypeAsyncHelper(AppSyncClient const * const clientThis, const DeleteTypeRequest& request, const DeleteTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteType(request), context);
}

void AppSyncClient::DeleteTypeAsync(const DeleteTypeRequest& request, const DeleteTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientDeleteTypeAsyncHelper( this, request, handler, context ); } );
}

DisassociateApiOutcome AppSyncClient::DisassociateApi(const DisassociateApiRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateApi", "Required field: DomainName, is not set");
    return DisassociateApiOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/domainnames/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/apiassociation");
  return DisassociateApiOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DisassociateApiOutcomeCallable AppSyncClient::DisassociateApiCallable(const DisassociateApiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateApiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateApi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientDisassociateApiAsyncHelper(AppSyncClient const * const clientThis, const DisassociateApiRequest& request, const DisassociateApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DisassociateApi(request), context);
}

void AppSyncClient::DisassociateApiAsync(const DisassociateApiRequest& request, const DisassociateApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientDisassociateApiAsyncHelper( this, request, handler, context ); } );
}

EvaluateMappingTemplateOutcome AppSyncClient::EvaluateMappingTemplate(const EvaluateMappingTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/dataplane-evaluatetemplate");
  return EvaluateMappingTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EvaluateMappingTemplateOutcomeCallable AppSyncClient::EvaluateMappingTemplateCallable(const EvaluateMappingTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EvaluateMappingTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EvaluateMappingTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientEvaluateMappingTemplateAsyncHelper(AppSyncClient const * const clientThis, const EvaluateMappingTemplateRequest& request, const EvaluateMappingTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->EvaluateMappingTemplate(request), context);
}

void AppSyncClient::EvaluateMappingTemplateAsync(const EvaluateMappingTemplateRequest& request, const EvaluateMappingTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientEvaluateMappingTemplateAsyncHelper( this, request, handler, context ); } );
}

FlushApiCacheOutcome AppSyncClient::FlushApiCache(const FlushApiCacheRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("FlushApiCache", "Required field: ApiId, is not set");
    return FlushApiCacheOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apis/");
  uri.AddPathSegment(request.GetApiId());
  uri.AddPathSegments("/FlushCache");
  return FlushApiCacheOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

FlushApiCacheOutcomeCallable AppSyncClient::FlushApiCacheCallable(const FlushApiCacheRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< FlushApiCacheOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->FlushApiCache(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientFlushApiCacheAsyncHelper(AppSyncClient const * const clientThis, const FlushApiCacheRequest& request, const FlushApiCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->FlushApiCache(request), context);
}

void AppSyncClient::FlushApiCacheAsync(const FlushApiCacheRequest& request, const FlushApiCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientFlushApiCacheAsyncHelper( this, request, handler, context ); } );
}

GetApiAssociationOutcome AppSyncClient::GetApiAssociation(const GetApiAssociationRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApiAssociation", "Required field: DomainName, is not set");
    return GetApiAssociationOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/domainnames/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/apiassociation");
  return GetApiAssociationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetApiAssociationOutcomeCallable AppSyncClient::GetApiAssociationCallable(const GetApiAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApiAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApiAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientGetApiAssociationAsyncHelper(AppSyncClient const * const clientThis, const GetApiAssociationRequest& request, const GetApiAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetApiAssociation(request), context);
}

void AppSyncClient::GetApiAssociationAsync(const GetApiAssociationRequest& request, const GetApiAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientGetApiAssociationAsyncHelper( this, request, handler, context ); } );
}

GetApiCacheOutcome AppSyncClient::GetApiCache(const GetApiCacheRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApiCache", "Required field: ApiId, is not set");
    return GetApiCacheOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apis/");
  uri.AddPathSegment(request.GetApiId());
  uri.AddPathSegments("/ApiCaches");
  return GetApiCacheOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetApiCacheOutcomeCallable AppSyncClient::GetApiCacheCallable(const GetApiCacheRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApiCacheOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApiCache(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientGetApiCacheAsyncHelper(AppSyncClient const * const clientThis, const GetApiCacheRequest& request, const GetApiCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetApiCache(request), context);
}

void AppSyncClient::GetApiCacheAsync(const GetApiCacheRequest& request, const GetApiCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientGetApiCacheAsyncHelper( this, request, handler, context ); } );
}

GetDataSourceOutcome AppSyncClient::GetDataSource(const GetDataSourceRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDataSource", "Required field: ApiId, is not set");
    return GetDataSourceOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDataSource", "Required field: Name, is not set");
    return GetDataSourceOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apis/");
  uri.AddPathSegment(request.GetApiId());
  uri.AddPathSegments("/datasources/");
  uri.AddPathSegment(request.GetName());
  return GetDataSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDataSourceOutcomeCallable AppSyncClient::GetDataSourceCallable(const GetDataSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDataSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDataSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientGetDataSourceAsyncHelper(AppSyncClient const * const clientThis, const GetDataSourceRequest& request, const GetDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDataSource(request), context);
}

void AppSyncClient::GetDataSourceAsync(const GetDataSourceRequest& request, const GetDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientGetDataSourceAsyncHelper( this, request, handler, context ); } );
}

GetDomainNameOutcome AppSyncClient::GetDomainName(const GetDomainNameRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDomainName", "Required field: DomainName, is not set");
    return GetDomainNameOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/domainnames/");
  uri.AddPathSegment(request.GetDomainName());
  return GetDomainNameOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDomainNameOutcomeCallable AppSyncClient::GetDomainNameCallable(const GetDomainNameRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDomainNameOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDomainName(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientGetDomainNameAsyncHelper(AppSyncClient const * const clientThis, const GetDomainNameRequest& request, const GetDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDomainName(request), context);
}

void AppSyncClient::GetDomainNameAsync(const GetDomainNameRequest& request, const GetDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientGetDomainNameAsyncHelper( this, request, handler, context ); } );
}

GetFunctionOutcome AppSyncClient::GetFunction(const GetFunctionRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFunction", "Required field: ApiId, is not set");
    return GetFunctionOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.FunctionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFunction", "Required field: FunctionId, is not set");
    return GetFunctionOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apis/");
  uri.AddPathSegment(request.GetApiId());
  uri.AddPathSegments("/functions/");
  uri.AddPathSegment(request.GetFunctionId());
  return GetFunctionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetFunctionOutcomeCallable AppSyncClient::GetFunctionCallable(const GetFunctionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFunctionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFunction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientGetFunctionAsyncHelper(AppSyncClient const * const clientThis, const GetFunctionRequest& request, const GetFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetFunction(request), context);
}

void AppSyncClient::GetFunctionAsync(const GetFunctionRequest& request, const GetFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientGetFunctionAsyncHelper( this, request, handler, context ); } );
}

GetGraphqlApiOutcome AppSyncClient::GetGraphqlApi(const GetGraphqlApiRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGraphqlApi", "Required field: ApiId, is not set");
    return GetGraphqlApiOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apis/");
  uri.AddPathSegment(request.GetApiId());
  return GetGraphqlApiOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetGraphqlApiOutcomeCallable AppSyncClient::GetGraphqlApiCallable(const GetGraphqlApiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGraphqlApiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGraphqlApi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientGetGraphqlApiAsyncHelper(AppSyncClient const * const clientThis, const GetGraphqlApiRequest& request, const GetGraphqlApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetGraphqlApi(request), context);
}

void AppSyncClient::GetGraphqlApiAsync(const GetGraphqlApiRequest& request, const GetGraphqlApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientGetGraphqlApiAsyncHelper( this, request, handler, context ); } );
}

GetIntrospectionSchemaOutcome AppSyncClient::GetIntrospectionSchema(const GetIntrospectionSchemaRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIntrospectionSchema", "Required field: ApiId, is not set");
    return GetIntrospectionSchemaOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.FormatHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIntrospectionSchema", "Required field: Format, is not set");
    return GetIntrospectionSchemaOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Format]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apis/");
  uri.AddPathSegment(request.GetApiId());
  uri.AddPathSegments("/schema");
  return GetIntrospectionSchemaOutcome(MakeRequestWithUnparsedResponse(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetIntrospectionSchemaOutcomeCallable AppSyncClient::GetIntrospectionSchemaCallable(const GetIntrospectionSchemaRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIntrospectionSchemaOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIntrospectionSchema(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientGetIntrospectionSchemaAsyncHelper(AppSyncClient const * const clientThis, const GetIntrospectionSchemaRequest& request, const GetIntrospectionSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetIntrospectionSchema(request), context);
}

void AppSyncClient::GetIntrospectionSchemaAsync(const GetIntrospectionSchemaRequest& request, const GetIntrospectionSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientGetIntrospectionSchemaAsyncHelper( this, request, handler, context ); } );
}

GetResolverOutcome AppSyncClient::GetResolver(const GetResolverRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetResolver", "Required field: ApiId, is not set");
    return GetResolverOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.TypeNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetResolver", "Required field: TypeName, is not set");
    return GetResolverOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TypeName]", false));
  }
  if (!request.FieldNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetResolver", "Required field: FieldName, is not set");
    return GetResolverOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FieldName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apis/");
  uri.AddPathSegment(request.GetApiId());
  uri.AddPathSegments("/types/");
  uri.AddPathSegment(request.GetTypeName());
  uri.AddPathSegments("/resolvers/");
  uri.AddPathSegment(request.GetFieldName());
  return GetResolverOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetResolverOutcomeCallable AppSyncClient::GetResolverCallable(const GetResolverRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResolverOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResolver(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientGetResolverAsyncHelper(AppSyncClient const * const clientThis, const GetResolverRequest& request, const GetResolverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetResolver(request), context);
}

void AppSyncClient::GetResolverAsync(const GetResolverRequest& request, const GetResolverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientGetResolverAsyncHelper( this, request, handler, context ); } );
}

GetSchemaCreationStatusOutcome AppSyncClient::GetSchemaCreationStatus(const GetSchemaCreationStatusRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSchemaCreationStatus", "Required field: ApiId, is not set");
    return GetSchemaCreationStatusOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apis/");
  uri.AddPathSegment(request.GetApiId());
  uri.AddPathSegments("/schemacreation");
  return GetSchemaCreationStatusOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSchemaCreationStatusOutcomeCallable AppSyncClient::GetSchemaCreationStatusCallable(const GetSchemaCreationStatusRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSchemaCreationStatusOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSchemaCreationStatus(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientGetSchemaCreationStatusAsyncHelper(AppSyncClient const * const clientThis, const GetSchemaCreationStatusRequest& request, const GetSchemaCreationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSchemaCreationStatus(request), context);
}

void AppSyncClient::GetSchemaCreationStatusAsync(const GetSchemaCreationStatusRequest& request, const GetSchemaCreationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientGetSchemaCreationStatusAsyncHelper( this, request, handler, context ); } );
}

GetTypeOutcome AppSyncClient::GetType(const GetTypeRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetType", "Required field: ApiId, is not set");
    return GetTypeOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.TypeNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetType", "Required field: TypeName, is not set");
    return GetTypeOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TypeName]", false));
  }
  if (!request.FormatHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetType", "Required field: Format, is not set");
    return GetTypeOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Format]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apis/");
  uri.AddPathSegment(request.GetApiId());
  uri.AddPathSegments("/types/");
  uri.AddPathSegment(request.GetTypeName());
  return GetTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetTypeOutcomeCallable AppSyncClient::GetTypeCallable(const GetTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientGetTypeAsyncHelper(AppSyncClient const * const clientThis, const GetTypeRequest& request, const GetTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetType(request), context);
}

void AppSyncClient::GetTypeAsync(const GetTypeRequest& request, const GetTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientGetTypeAsyncHelper( this, request, handler, context ); } );
}

ListApiKeysOutcome AppSyncClient::ListApiKeys(const ListApiKeysRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListApiKeys", "Required field: ApiId, is not set");
    return ListApiKeysOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apis/");
  uri.AddPathSegment(request.GetApiId());
  uri.AddPathSegments("/apikeys");
  return ListApiKeysOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListApiKeysOutcomeCallable AppSyncClient::ListApiKeysCallable(const ListApiKeysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListApiKeysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListApiKeys(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientListApiKeysAsyncHelper(AppSyncClient const * const clientThis, const ListApiKeysRequest& request, const ListApiKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListApiKeys(request), context);
}

void AppSyncClient::ListApiKeysAsync(const ListApiKeysRequest& request, const ListApiKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientListApiKeysAsyncHelper( this, request, handler, context ); } );
}

ListDataSourcesOutcome AppSyncClient::ListDataSources(const ListDataSourcesRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDataSources", "Required field: ApiId, is not set");
    return ListDataSourcesOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apis/");
  uri.AddPathSegment(request.GetApiId());
  uri.AddPathSegments("/datasources");
  return ListDataSourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDataSourcesOutcomeCallable AppSyncClient::ListDataSourcesCallable(const ListDataSourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDataSourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDataSources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientListDataSourcesAsyncHelper(AppSyncClient const * const clientThis, const ListDataSourcesRequest& request, const ListDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDataSources(request), context);
}

void AppSyncClient::ListDataSourcesAsync(const ListDataSourcesRequest& request, const ListDataSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientListDataSourcesAsyncHelper( this, request, handler, context ); } );
}

ListDomainNamesOutcome AppSyncClient::ListDomainNames(const ListDomainNamesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/domainnames");
  return ListDomainNamesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListDomainNamesOutcomeCallable AppSyncClient::ListDomainNamesCallable(const ListDomainNamesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDomainNamesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDomainNames(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientListDomainNamesAsyncHelper(AppSyncClient const * const clientThis, const ListDomainNamesRequest& request, const ListDomainNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDomainNames(request), context);
}

void AppSyncClient::ListDomainNamesAsync(const ListDomainNamesRequest& request, const ListDomainNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientListDomainNamesAsyncHelper( this, request, handler, context ); } );
}

ListFunctionsOutcome AppSyncClient::ListFunctions(const ListFunctionsRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFunctions", "Required field: ApiId, is not set");
    return ListFunctionsOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apis/");
  uri.AddPathSegment(request.GetApiId());
  uri.AddPathSegments("/functions");
  return ListFunctionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListFunctionsOutcomeCallable AppSyncClient::ListFunctionsCallable(const ListFunctionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFunctionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFunctions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientListFunctionsAsyncHelper(AppSyncClient const * const clientThis, const ListFunctionsRequest& request, const ListFunctionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListFunctions(request), context);
}

void AppSyncClient::ListFunctionsAsync(const ListFunctionsRequest& request, const ListFunctionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientListFunctionsAsyncHelper( this, request, handler, context ); } );
}

ListGraphqlApisOutcome AppSyncClient::ListGraphqlApis(const ListGraphqlApisRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apis");
  return ListGraphqlApisOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListGraphqlApisOutcomeCallable AppSyncClient::ListGraphqlApisCallable(const ListGraphqlApisRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListGraphqlApisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListGraphqlApis(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientListGraphqlApisAsyncHelper(AppSyncClient const * const clientThis, const ListGraphqlApisRequest& request, const ListGraphqlApisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListGraphqlApis(request), context);
}

void AppSyncClient::ListGraphqlApisAsync(const ListGraphqlApisRequest& request, const ListGraphqlApisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientListGraphqlApisAsyncHelper( this, request, handler, context ); } );
}

ListResolversOutcome AppSyncClient::ListResolvers(const ListResolversRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListResolvers", "Required field: ApiId, is not set");
    return ListResolversOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.TypeNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListResolvers", "Required field: TypeName, is not set");
    return ListResolversOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TypeName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apis/");
  uri.AddPathSegment(request.GetApiId());
  uri.AddPathSegments("/types/");
  uri.AddPathSegment(request.GetTypeName());
  uri.AddPathSegments("/resolvers");
  return ListResolversOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListResolversOutcomeCallable AppSyncClient::ListResolversCallable(const ListResolversRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResolversOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResolvers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientListResolversAsyncHelper(AppSyncClient const * const clientThis, const ListResolversRequest& request, const ListResolversResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListResolvers(request), context);
}

void AppSyncClient::ListResolversAsync(const ListResolversRequest& request, const ListResolversResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientListResolversAsyncHelper( this, request, handler, context ); } );
}

ListResolversByFunctionOutcome AppSyncClient::ListResolversByFunction(const ListResolversByFunctionRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListResolversByFunction", "Required field: ApiId, is not set");
    return ListResolversByFunctionOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.FunctionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListResolversByFunction", "Required field: FunctionId, is not set");
    return ListResolversByFunctionOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apis/");
  uri.AddPathSegment(request.GetApiId());
  uri.AddPathSegments("/functions/");
  uri.AddPathSegment(request.GetFunctionId());
  uri.AddPathSegments("/resolvers");
  return ListResolversByFunctionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListResolversByFunctionOutcomeCallable AppSyncClient::ListResolversByFunctionCallable(const ListResolversByFunctionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResolversByFunctionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResolversByFunction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientListResolversByFunctionAsyncHelper(AppSyncClient const * const clientThis, const ListResolversByFunctionRequest& request, const ListResolversByFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListResolversByFunction(request), context);
}

void AppSyncClient::ListResolversByFunctionAsync(const ListResolversByFunctionRequest& request, const ListResolversByFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientListResolversByFunctionAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome AppSyncClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable AppSyncClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientListTagsForResourceAsyncHelper(AppSyncClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void AppSyncClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListTypesOutcome AppSyncClient::ListTypes(const ListTypesRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTypes", "Required field: ApiId, is not set");
    return ListTypesOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.FormatHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTypes", "Required field: Format, is not set");
    return ListTypesOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Format]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apis/");
  uri.AddPathSegment(request.GetApiId());
  uri.AddPathSegments("/types");
  return ListTypesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTypesOutcomeCallable AppSyncClient::ListTypesCallable(const ListTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientListTypesAsyncHelper(AppSyncClient const * const clientThis, const ListTypesRequest& request, const ListTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTypes(request), context);
}

void AppSyncClient::ListTypesAsync(const ListTypesRequest& request, const ListTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientListTypesAsyncHelper( this, request, handler, context ); } );
}

StartSchemaCreationOutcome AppSyncClient::StartSchemaCreation(const StartSchemaCreationRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartSchemaCreation", "Required field: ApiId, is not set");
    return StartSchemaCreationOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apis/");
  uri.AddPathSegment(request.GetApiId());
  uri.AddPathSegments("/schemacreation");
  return StartSchemaCreationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartSchemaCreationOutcomeCallable AppSyncClient::StartSchemaCreationCallable(const StartSchemaCreationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartSchemaCreationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartSchemaCreation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientStartSchemaCreationAsyncHelper(AppSyncClient const * const clientThis, const StartSchemaCreationRequest& request, const StartSchemaCreationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartSchemaCreation(request), context);
}

void AppSyncClient::StartSchemaCreationAsync(const StartSchemaCreationRequest& request, const StartSchemaCreationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientStartSchemaCreationAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome AppSyncClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable AppSyncClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientTagResourceAsyncHelper(AppSyncClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void AppSyncClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome AppSyncClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable AppSyncClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientUntagResourceAsyncHelper(AppSyncClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void AppSyncClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateApiCacheOutcome AppSyncClient::UpdateApiCache(const UpdateApiCacheRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApiCache", "Required field: ApiId, is not set");
    return UpdateApiCacheOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apis/");
  uri.AddPathSegment(request.GetApiId());
  uri.AddPathSegments("/ApiCaches/update");
  return UpdateApiCacheOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateApiCacheOutcomeCallable AppSyncClient::UpdateApiCacheCallable(const UpdateApiCacheRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApiCacheOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApiCache(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientUpdateApiCacheAsyncHelper(AppSyncClient const * const clientThis, const UpdateApiCacheRequest& request, const UpdateApiCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateApiCache(request), context);
}

void AppSyncClient::UpdateApiCacheAsync(const UpdateApiCacheRequest& request, const UpdateApiCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientUpdateApiCacheAsyncHelper( this, request, handler, context ); } );
}

UpdateApiKeyOutcome AppSyncClient::UpdateApiKey(const UpdateApiKeyRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApiKey", "Required field: ApiId, is not set");
    return UpdateApiKeyOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApiKey", "Required field: Id, is not set");
    return UpdateApiKeyOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apis/");
  uri.AddPathSegment(request.GetApiId());
  uri.AddPathSegments("/apikeys/");
  uri.AddPathSegment(request.GetId());
  return UpdateApiKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateApiKeyOutcomeCallable AppSyncClient::UpdateApiKeyCallable(const UpdateApiKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApiKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApiKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientUpdateApiKeyAsyncHelper(AppSyncClient const * const clientThis, const UpdateApiKeyRequest& request, const UpdateApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateApiKey(request), context);
}

void AppSyncClient::UpdateApiKeyAsync(const UpdateApiKeyRequest& request, const UpdateApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientUpdateApiKeyAsyncHelper( this, request, handler, context ); } );
}

UpdateDataSourceOutcome AppSyncClient::UpdateDataSource(const UpdateDataSourceRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataSource", "Required field: ApiId, is not set");
    return UpdateDataSourceOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataSource", "Required field: Name, is not set");
    return UpdateDataSourceOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apis/");
  uri.AddPathSegment(request.GetApiId());
  uri.AddPathSegments("/datasources/");
  uri.AddPathSegment(request.GetName());
  return UpdateDataSourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDataSourceOutcomeCallable AppSyncClient::UpdateDataSourceCallable(const UpdateDataSourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDataSourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDataSource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientUpdateDataSourceAsyncHelper(AppSyncClient const * const clientThis, const UpdateDataSourceRequest& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDataSource(request), context);
}

void AppSyncClient::UpdateDataSourceAsync(const UpdateDataSourceRequest& request, const UpdateDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientUpdateDataSourceAsyncHelper( this, request, handler, context ); } );
}

UpdateDomainNameOutcome AppSyncClient::UpdateDomainName(const UpdateDomainNameRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDomainName", "Required field: DomainName, is not set");
    return UpdateDomainNameOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/domainnames/");
  uri.AddPathSegment(request.GetDomainName());
  return UpdateDomainNameOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDomainNameOutcomeCallable AppSyncClient::UpdateDomainNameCallable(const UpdateDomainNameRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDomainNameOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDomainName(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientUpdateDomainNameAsyncHelper(AppSyncClient const * const clientThis, const UpdateDomainNameRequest& request, const UpdateDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDomainName(request), context);
}

void AppSyncClient::UpdateDomainNameAsync(const UpdateDomainNameRequest& request, const UpdateDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientUpdateDomainNameAsyncHelper( this, request, handler, context ); } );
}

UpdateFunctionOutcome AppSyncClient::UpdateFunction(const UpdateFunctionRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFunction", "Required field: ApiId, is not set");
    return UpdateFunctionOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.FunctionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFunction", "Required field: FunctionId, is not set");
    return UpdateFunctionOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FunctionId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apis/");
  uri.AddPathSegment(request.GetApiId());
  uri.AddPathSegments("/functions/");
  uri.AddPathSegment(request.GetFunctionId());
  return UpdateFunctionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateFunctionOutcomeCallable AppSyncClient::UpdateFunctionCallable(const UpdateFunctionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFunctionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFunction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientUpdateFunctionAsyncHelper(AppSyncClient const * const clientThis, const UpdateFunctionRequest& request, const UpdateFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateFunction(request), context);
}

void AppSyncClient::UpdateFunctionAsync(const UpdateFunctionRequest& request, const UpdateFunctionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientUpdateFunctionAsyncHelper( this, request, handler, context ); } );
}

UpdateGraphqlApiOutcome AppSyncClient::UpdateGraphqlApi(const UpdateGraphqlApiRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateGraphqlApi", "Required field: ApiId, is not set");
    return UpdateGraphqlApiOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apis/");
  uri.AddPathSegment(request.GetApiId());
  return UpdateGraphqlApiOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateGraphqlApiOutcomeCallable AppSyncClient::UpdateGraphqlApiCallable(const UpdateGraphqlApiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGraphqlApiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGraphqlApi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientUpdateGraphqlApiAsyncHelper(AppSyncClient const * const clientThis, const UpdateGraphqlApiRequest& request, const UpdateGraphqlApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateGraphqlApi(request), context);
}

void AppSyncClient::UpdateGraphqlApiAsync(const UpdateGraphqlApiRequest& request, const UpdateGraphqlApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientUpdateGraphqlApiAsyncHelper( this, request, handler, context ); } );
}

UpdateResolverOutcome AppSyncClient::UpdateResolver(const UpdateResolverRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateResolver", "Required field: ApiId, is not set");
    return UpdateResolverOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.TypeNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateResolver", "Required field: TypeName, is not set");
    return UpdateResolverOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TypeName]", false));
  }
  if (!request.FieldNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateResolver", "Required field: FieldName, is not set");
    return UpdateResolverOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FieldName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apis/");
  uri.AddPathSegment(request.GetApiId());
  uri.AddPathSegments("/types/");
  uri.AddPathSegment(request.GetTypeName());
  uri.AddPathSegments("/resolvers/");
  uri.AddPathSegment(request.GetFieldName());
  return UpdateResolverOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateResolverOutcomeCallable AppSyncClient::UpdateResolverCallable(const UpdateResolverRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateResolverOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateResolver(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientUpdateResolverAsyncHelper(AppSyncClient const * const clientThis, const UpdateResolverRequest& request, const UpdateResolverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateResolver(request), context);
}

void AppSyncClient::UpdateResolverAsync(const UpdateResolverRequest& request, const UpdateResolverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientUpdateResolverAsyncHelper( this, request, handler, context ); } );
}

UpdateTypeOutcome AppSyncClient::UpdateType(const UpdateTypeRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateType", "Required field: ApiId, is not set");
    return UpdateTypeOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.TypeNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateType", "Required field: TypeName, is not set");
    return UpdateTypeOutcome(Aws::Client::AWSError<AppSyncErrors>(AppSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TypeName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/v1/apis/");
  uri.AddPathSegment(request.GetApiId());
  uri.AddPathSegments("/types/");
  uri.AddPathSegment(request.GetTypeName());
  return UpdateTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTypeOutcomeCallable AppSyncClient::UpdateTypeCallable(const UpdateTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppSyncClientUpdateTypeAsyncHelper(AppSyncClient const * const clientThis, const UpdateTypeRequest& request, const UpdateTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateType(request), context);
}

void AppSyncClient::UpdateTypeAsync(const UpdateTypeRequest& request, const UpdateTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ AppSyncClientUpdateTypeAsyncHelper( this, request, handler, context ); } );
}

