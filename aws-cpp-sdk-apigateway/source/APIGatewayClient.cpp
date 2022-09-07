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

#include <aws/apigateway/APIGatewayClient.h>
#include <aws/apigateway/APIGatewayEndpoint.h>
#include <aws/apigateway/APIGatewayErrorMarshaller.h>
#include <aws/apigateway/model/CreateApiKeyRequest.h>
#include <aws/apigateway/model/CreateAuthorizerRequest.h>
#include <aws/apigateway/model/CreateBasePathMappingRequest.h>
#include <aws/apigateway/model/CreateDeploymentRequest.h>
#include <aws/apigateway/model/CreateDocumentationPartRequest.h>
#include <aws/apigateway/model/CreateDocumentationVersionRequest.h>
#include <aws/apigateway/model/CreateDomainNameRequest.h>
#include <aws/apigateway/model/CreateModelRequest.h>
#include <aws/apigateway/model/CreateRequestValidatorRequest.h>
#include <aws/apigateway/model/CreateResourceRequest.h>
#include <aws/apigateway/model/CreateRestApiRequest.h>
#include <aws/apigateway/model/CreateStageRequest.h>
#include <aws/apigateway/model/CreateUsagePlanRequest.h>
#include <aws/apigateway/model/CreateUsagePlanKeyRequest.h>
#include <aws/apigateway/model/CreateVpcLinkRequest.h>
#include <aws/apigateway/model/DeleteApiKeyRequest.h>
#include <aws/apigateway/model/DeleteAuthorizerRequest.h>
#include <aws/apigateway/model/DeleteBasePathMappingRequest.h>
#include <aws/apigateway/model/DeleteClientCertificateRequest.h>
#include <aws/apigateway/model/DeleteDeploymentRequest.h>
#include <aws/apigateway/model/DeleteDocumentationPartRequest.h>
#include <aws/apigateway/model/DeleteDocumentationVersionRequest.h>
#include <aws/apigateway/model/DeleteDomainNameRequest.h>
#include <aws/apigateway/model/DeleteGatewayResponseRequest.h>
#include <aws/apigateway/model/DeleteIntegrationRequest.h>
#include <aws/apigateway/model/DeleteIntegrationResponseRequest.h>
#include <aws/apigateway/model/DeleteMethodRequest.h>
#include <aws/apigateway/model/DeleteMethodResponseRequest.h>
#include <aws/apigateway/model/DeleteModelRequest.h>
#include <aws/apigateway/model/DeleteRequestValidatorRequest.h>
#include <aws/apigateway/model/DeleteResourceRequest.h>
#include <aws/apigateway/model/DeleteRestApiRequest.h>
#include <aws/apigateway/model/DeleteStageRequest.h>
#include <aws/apigateway/model/DeleteUsagePlanRequest.h>
#include <aws/apigateway/model/DeleteUsagePlanKeyRequest.h>
#include <aws/apigateway/model/DeleteVpcLinkRequest.h>
#include <aws/apigateway/model/FlushStageAuthorizersCacheRequest.h>
#include <aws/apigateway/model/FlushStageCacheRequest.h>
#include <aws/apigateway/model/GenerateClientCertificateRequest.h>
#include <aws/apigateway/model/GetAccountRequest.h>
#include <aws/apigateway/model/GetApiKeyRequest.h>
#include <aws/apigateway/model/GetApiKeysRequest.h>
#include <aws/apigateway/model/GetAuthorizerRequest.h>
#include <aws/apigateway/model/GetAuthorizersRequest.h>
#include <aws/apigateway/model/GetBasePathMappingRequest.h>
#include <aws/apigateway/model/GetBasePathMappingsRequest.h>
#include <aws/apigateway/model/GetClientCertificateRequest.h>
#include <aws/apigateway/model/GetClientCertificatesRequest.h>
#include <aws/apigateway/model/GetDeploymentRequest.h>
#include <aws/apigateway/model/GetDeploymentsRequest.h>
#include <aws/apigateway/model/GetDocumentationPartRequest.h>
#include <aws/apigateway/model/GetDocumentationPartsRequest.h>
#include <aws/apigateway/model/GetDocumentationVersionRequest.h>
#include <aws/apigateway/model/GetDocumentationVersionsRequest.h>
#include <aws/apigateway/model/GetDomainNameRequest.h>
#include <aws/apigateway/model/GetDomainNamesRequest.h>
#include <aws/apigateway/model/GetExportRequest.h>
#include <aws/apigateway/model/GetGatewayResponseRequest.h>
#include <aws/apigateway/model/GetGatewayResponsesRequest.h>
#include <aws/apigateway/model/GetIntegrationRequest.h>
#include <aws/apigateway/model/GetIntegrationResponseRequest.h>
#include <aws/apigateway/model/GetMethodRequest.h>
#include <aws/apigateway/model/GetMethodResponseRequest.h>
#include <aws/apigateway/model/GetModelRequest.h>
#include <aws/apigateway/model/GetModelTemplateRequest.h>
#include <aws/apigateway/model/GetModelsRequest.h>
#include <aws/apigateway/model/GetRequestValidatorRequest.h>
#include <aws/apigateway/model/GetRequestValidatorsRequest.h>
#include <aws/apigateway/model/GetResourceRequest.h>
#include <aws/apigateway/model/GetResourcesRequest.h>
#include <aws/apigateway/model/GetRestApiRequest.h>
#include <aws/apigateway/model/GetRestApisRequest.h>
#include <aws/apigateway/model/GetSdkRequest.h>
#include <aws/apigateway/model/GetSdkTypeRequest.h>
#include <aws/apigateway/model/GetSdkTypesRequest.h>
#include <aws/apigateway/model/GetStageRequest.h>
#include <aws/apigateway/model/GetStagesRequest.h>
#include <aws/apigateway/model/GetTagsRequest.h>
#include <aws/apigateway/model/GetUsageRequest.h>
#include <aws/apigateway/model/GetUsagePlanRequest.h>
#include <aws/apigateway/model/GetUsagePlanKeyRequest.h>
#include <aws/apigateway/model/GetUsagePlanKeysRequest.h>
#include <aws/apigateway/model/GetUsagePlansRequest.h>
#include <aws/apigateway/model/GetVpcLinkRequest.h>
#include <aws/apigateway/model/GetVpcLinksRequest.h>
#include <aws/apigateway/model/ImportApiKeysRequest.h>
#include <aws/apigateway/model/ImportDocumentationPartsRequest.h>
#include <aws/apigateway/model/ImportRestApiRequest.h>
#include <aws/apigateway/model/PutGatewayResponseRequest.h>
#include <aws/apigateway/model/PutIntegrationRequest.h>
#include <aws/apigateway/model/PutIntegrationResponseRequest.h>
#include <aws/apigateway/model/PutMethodRequest.h>
#include <aws/apigateway/model/PutMethodResponseRequest.h>
#include <aws/apigateway/model/PutRestApiRequest.h>
#include <aws/apigateway/model/TagResourceRequest.h>
#include <aws/apigateway/model/TestInvokeAuthorizerRequest.h>
#include <aws/apigateway/model/TestInvokeMethodRequest.h>
#include <aws/apigateway/model/UntagResourceRequest.h>
#include <aws/apigateway/model/UpdateAccountRequest.h>
#include <aws/apigateway/model/UpdateApiKeyRequest.h>
#include <aws/apigateway/model/UpdateAuthorizerRequest.h>
#include <aws/apigateway/model/UpdateBasePathMappingRequest.h>
#include <aws/apigateway/model/UpdateClientCertificateRequest.h>
#include <aws/apigateway/model/UpdateDeploymentRequest.h>
#include <aws/apigateway/model/UpdateDocumentationPartRequest.h>
#include <aws/apigateway/model/UpdateDocumentationVersionRequest.h>
#include <aws/apigateway/model/UpdateDomainNameRequest.h>
#include <aws/apigateway/model/UpdateGatewayResponseRequest.h>
#include <aws/apigateway/model/UpdateIntegrationRequest.h>
#include <aws/apigateway/model/UpdateIntegrationResponseRequest.h>
#include <aws/apigateway/model/UpdateMethodRequest.h>
#include <aws/apigateway/model/UpdateMethodResponseRequest.h>
#include <aws/apigateway/model/UpdateModelRequest.h>
#include <aws/apigateway/model/UpdateRequestValidatorRequest.h>
#include <aws/apigateway/model/UpdateResourceRequest.h>
#include <aws/apigateway/model/UpdateRestApiRequest.h>
#include <aws/apigateway/model/UpdateStageRequest.h>
#include <aws/apigateway/model/UpdateUsageRequest.h>
#include <aws/apigateway/model/UpdateUsagePlanRequest.h>
#include <aws/apigateway/model/UpdateVpcLinkRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::APIGateway;
using namespace Aws::APIGateway::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "apigateway";
static const char* ALLOCATION_TAG = "APIGatewayClient";

APIGatewayClient::APIGatewayClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<APIGatewayErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

APIGatewayClient::APIGatewayClient(const AWSCredentials& credentials,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<APIGatewayErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

APIGatewayClient::APIGatewayClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<APIGatewayErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

APIGatewayClient::~APIGatewayClient()
{
}

void APIGatewayClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("API Gateway");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + APIGatewayEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void APIGatewayClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateApiKeyOutcome APIGatewayClient::CreateApiKey(const CreateApiKeyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/apikeys");
  return CreateApiKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateApiKeyOutcomeCallable APIGatewayClient::CreateApiKeyCallable(const CreateApiKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateApiKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApiKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientCreateApiKeyAsyncHelper(APIGatewayClient const * const clientThis, const CreateApiKeyRequest& request, const CreateApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateApiKey(request), context);
}

void APIGatewayClient::CreateApiKeyAsync(const CreateApiKeyRequest& request, const CreateApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientCreateApiKeyAsyncHelper( this, request, handler, context ); } );
}

CreateAuthorizerOutcome APIGatewayClient::CreateAuthorizer(const CreateAuthorizerRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAuthorizer", "Required field: RestApiId, is not set");
    return CreateAuthorizerOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/authorizers");
  return CreateAuthorizerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAuthorizerOutcomeCallable APIGatewayClient::CreateAuthorizerCallable(const CreateAuthorizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAuthorizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAuthorizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientCreateAuthorizerAsyncHelper(APIGatewayClient const * const clientThis, const CreateAuthorizerRequest& request, const CreateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateAuthorizer(request), context);
}

void APIGatewayClient::CreateAuthorizerAsync(const CreateAuthorizerRequest& request, const CreateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientCreateAuthorizerAsyncHelper( this, request, handler, context ); } );
}

CreateBasePathMappingOutcome APIGatewayClient::CreateBasePathMapping(const CreateBasePathMappingRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBasePathMapping", "Required field: DomainName, is not set");
    return CreateBasePathMappingOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domainnames/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/basepathmappings");
  return CreateBasePathMappingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateBasePathMappingOutcomeCallable APIGatewayClient::CreateBasePathMappingCallable(const CreateBasePathMappingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBasePathMappingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBasePathMapping(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientCreateBasePathMappingAsyncHelper(APIGatewayClient const * const clientThis, const CreateBasePathMappingRequest& request, const CreateBasePathMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateBasePathMapping(request), context);
}

void APIGatewayClient::CreateBasePathMappingAsync(const CreateBasePathMappingRequest& request, const CreateBasePathMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientCreateBasePathMappingAsyncHelper( this, request, handler, context ); } );
}

CreateDeploymentOutcome APIGatewayClient::CreateDeployment(const CreateDeploymentRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDeployment", "Required field: RestApiId, is not set");
    return CreateDeploymentOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/deployments");
  return CreateDeploymentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDeploymentOutcomeCallable APIGatewayClient::CreateDeploymentCallable(const CreateDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientCreateDeploymentAsyncHelper(APIGatewayClient const * const clientThis, const CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDeployment(request), context);
}

void APIGatewayClient::CreateDeploymentAsync(const CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientCreateDeploymentAsyncHelper( this, request, handler, context ); } );
}

CreateDocumentationPartOutcome APIGatewayClient::CreateDocumentationPart(const CreateDocumentationPartRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDocumentationPart", "Required field: RestApiId, is not set");
    return CreateDocumentationPartOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/documentation/parts");
  return CreateDocumentationPartOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDocumentationPartOutcomeCallable APIGatewayClient::CreateDocumentationPartCallable(const CreateDocumentationPartRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDocumentationPartOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDocumentationPart(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientCreateDocumentationPartAsyncHelper(APIGatewayClient const * const clientThis, const CreateDocumentationPartRequest& request, const CreateDocumentationPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDocumentationPart(request), context);
}

void APIGatewayClient::CreateDocumentationPartAsync(const CreateDocumentationPartRequest& request, const CreateDocumentationPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientCreateDocumentationPartAsyncHelper( this, request, handler, context ); } );
}

CreateDocumentationVersionOutcome APIGatewayClient::CreateDocumentationVersion(const CreateDocumentationVersionRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDocumentationVersion", "Required field: RestApiId, is not set");
    return CreateDocumentationVersionOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/documentation/versions");
  return CreateDocumentationVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDocumentationVersionOutcomeCallable APIGatewayClient::CreateDocumentationVersionCallable(const CreateDocumentationVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDocumentationVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDocumentationVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientCreateDocumentationVersionAsyncHelper(APIGatewayClient const * const clientThis, const CreateDocumentationVersionRequest& request, const CreateDocumentationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDocumentationVersion(request), context);
}

void APIGatewayClient::CreateDocumentationVersionAsync(const CreateDocumentationVersionRequest& request, const CreateDocumentationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientCreateDocumentationVersionAsyncHelper( this, request, handler, context ); } );
}

CreateDomainNameOutcome APIGatewayClient::CreateDomainName(const CreateDomainNameRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domainnames");
  return CreateDomainNameOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDomainNameOutcomeCallable APIGatewayClient::CreateDomainNameCallable(const CreateDomainNameRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDomainNameOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDomainName(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientCreateDomainNameAsyncHelper(APIGatewayClient const * const clientThis, const CreateDomainNameRequest& request, const CreateDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDomainName(request), context);
}

void APIGatewayClient::CreateDomainNameAsync(const CreateDomainNameRequest& request, const CreateDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientCreateDomainNameAsyncHelper( this, request, handler, context ); } );
}

CreateModelOutcome APIGatewayClient::CreateModel(const CreateModelRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateModel", "Required field: RestApiId, is not set");
    return CreateModelOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/models");
  return CreateModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateModelOutcomeCallable APIGatewayClient::CreateModelCallable(const CreateModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientCreateModelAsyncHelper(APIGatewayClient const * const clientThis, const CreateModelRequest& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateModel(request), context);
}

void APIGatewayClient::CreateModelAsync(const CreateModelRequest& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientCreateModelAsyncHelper( this, request, handler, context ); } );
}

CreateRequestValidatorOutcome APIGatewayClient::CreateRequestValidator(const CreateRequestValidatorRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateRequestValidator", "Required field: RestApiId, is not set");
    return CreateRequestValidatorOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/requestvalidators");
  return CreateRequestValidatorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRequestValidatorOutcomeCallable APIGatewayClient::CreateRequestValidatorCallable(const CreateRequestValidatorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRequestValidatorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRequestValidator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientCreateRequestValidatorAsyncHelper(APIGatewayClient const * const clientThis, const CreateRequestValidatorRequest& request, const CreateRequestValidatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateRequestValidator(request), context);
}

void APIGatewayClient::CreateRequestValidatorAsync(const CreateRequestValidatorRequest& request, const CreateRequestValidatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientCreateRequestValidatorAsyncHelper( this, request, handler, context ); } );
}

CreateResourceOutcome APIGatewayClient::CreateResource(const CreateResourceRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateResource", "Required field: RestApiId, is not set");
    return CreateResourceOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ParentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateResource", "Required field: ParentId, is not set");
    return CreateResourceOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ParentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/resources/");
  uri.AddPathSegment(request.GetParentId());
  return CreateResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateResourceOutcomeCallable APIGatewayClient::CreateResourceCallable(const CreateResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientCreateResourceAsyncHelper(APIGatewayClient const * const clientThis, const CreateResourceRequest& request, const CreateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateResource(request), context);
}

void APIGatewayClient::CreateResourceAsync(const CreateResourceRequest& request, const CreateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientCreateResourceAsyncHelper( this, request, handler, context ); } );
}

CreateRestApiOutcome APIGatewayClient::CreateRestApi(const CreateRestApiRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis");
  return CreateRestApiOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRestApiOutcomeCallable APIGatewayClient::CreateRestApiCallable(const CreateRestApiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRestApiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRestApi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientCreateRestApiAsyncHelper(APIGatewayClient const * const clientThis, const CreateRestApiRequest& request, const CreateRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateRestApi(request), context);
}

void APIGatewayClient::CreateRestApiAsync(const CreateRestApiRequest& request, const CreateRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientCreateRestApiAsyncHelper( this, request, handler, context ); } );
}

CreateStageOutcome APIGatewayClient::CreateStage(const CreateStageRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateStage", "Required field: RestApiId, is not set");
    return CreateStageOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/stages");
  return CreateStageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateStageOutcomeCallable APIGatewayClient::CreateStageCallable(const CreateStageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientCreateStageAsyncHelper(APIGatewayClient const * const clientThis, const CreateStageRequest& request, const CreateStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateStage(request), context);
}

void APIGatewayClient::CreateStageAsync(const CreateStageRequest& request, const CreateStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientCreateStageAsyncHelper( this, request, handler, context ); } );
}

CreateUsagePlanOutcome APIGatewayClient::CreateUsagePlan(const CreateUsagePlanRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/usageplans");
  return CreateUsagePlanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUsagePlanOutcomeCallable APIGatewayClient::CreateUsagePlanCallable(const CreateUsagePlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUsagePlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUsagePlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientCreateUsagePlanAsyncHelper(APIGatewayClient const * const clientThis, const CreateUsagePlanRequest& request, const CreateUsagePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateUsagePlan(request), context);
}

void APIGatewayClient::CreateUsagePlanAsync(const CreateUsagePlanRequest& request, const CreateUsagePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientCreateUsagePlanAsyncHelper( this, request, handler, context ); } );
}

CreateUsagePlanKeyOutcome APIGatewayClient::CreateUsagePlanKey(const CreateUsagePlanKeyRequest& request) const
{
  if (!request.UsagePlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateUsagePlanKey", "Required field: UsagePlanId, is not set");
    return CreateUsagePlanKeyOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UsagePlanId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/usageplans/");
  uri.AddPathSegment(request.GetUsagePlanId());
  uri.AddPathSegments("/keys");
  return CreateUsagePlanKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateUsagePlanKeyOutcomeCallable APIGatewayClient::CreateUsagePlanKeyCallable(const CreateUsagePlanKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUsagePlanKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUsagePlanKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientCreateUsagePlanKeyAsyncHelper(APIGatewayClient const * const clientThis, const CreateUsagePlanKeyRequest& request, const CreateUsagePlanKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateUsagePlanKey(request), context);
}

void APIGatewayClient::CreateUsagePlanKeyAsync(const CreateUsagePlanKeyRequest& request, const CreateUsagePlanKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientCreateUsagePlanKeyAsyncHelper( this, request, handler, context ); } );
}

CreateVpcLinkOutcome APIGatewayClient::CreateVpcLink(const CreateVpcLinkRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/vpclinks");
  return CreateVpcLinkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateVpcLinkOutcomeCallable APIGatewayClient::CreateVpcLinkCallable(const CreateVpcLinkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVpcLinkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVpcLink(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientCreateVpcLinkAsyncHelper(APIGatewayClient const * const clientThis, const CreateVpcLinkRequest& request, const CreateVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateVpcLink(request), context);
}

void APIGatewayClient::CreateVpcLinkAsync(const CreateVpcLinkRequest& request, const CreateVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientCreateVpcLinkAsyncHelper( this, request, handler, context ); } );
}

DeleteApiKeyOutcome APIGatewayClient::DeleteApiKey(const DeleteApiKeyRequest& request) const
{
  if (!request.ApiKeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApiKey", "Required field: ApiKey, is not set");
    return DeleteApiKeyOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiKey]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/apikeys/");
  uri.AddPathSegment(request.GetApiKey());
  return DeleteApiKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteApiKeyOutcomeCallable APIGatewayClient::DeleteApiKeyCallable(const DeleteApiKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApiKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApiKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientDeleteApiKeyAsyncHelper(APIGatewayClient const * const clientThis, const DeleteApiKeyRequest& request, const DeleteApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteApiKey(request), context);
}

void APIGatewayClient::DeleteApiKeyAsync(const DeleteApiKeyRequest& request, const DeleteApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientDeleteApiKeyAsyncHelper( this, request, handler, context ); } );
}

DeleteAuthorizerOutcome APIGatewayClient::DeleteAuthorizer(const DeleteAuthorizerRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAuthorizer", "Required field: RestApiId, is not set");
    return DeleteAuthorizerOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.AuthorizerIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAuthorizer", "Required field: AuthorizerId, is not set");
    return DeleteAuthorizerOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AuthorizerId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/authorizers/");
  uri.AddPathSegment(request.GetAuthorizerId());
  return DeleteAuthorizerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAuthorizerOutcomeCallable APIGatewayClient::DeleteAuthorizerCallable(const DeleteAuthorizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAuthorizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAuthorizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientDeleteAuthorizerAsyncHelper(APIGatewayClient const * const clientThis, const DeleteAuthorizerRequest& request, const DeleteAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAuthorizer(request), context);
}

void APIGatewayClient::DeleteAuthorizerAsync(const DeleteAuthorizerRequest& request, const DeleteAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientDeleteAuthorizerAsyncHelper( this, request, handler, context ); } );
}

DeleteBasePathMappingOutcome APIGatewayClient::DeleteBasePathMapping(const DeleteBasePathMappingRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBasePathMapping", "Required field: DomainName, is not set");
    return DeleteBasePathMappingOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.BasePathHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteBasePathMapping", "Required field: BasePath, is not set");
    return DeleteBasePathMappingOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BasePath]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domainnames/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/basepathmappings/");
  uri.AddPathSegment(request.GetBasePath());
  return DeleteBasePathMappingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteBasePathMappingOutcomeCallable APIGatewayClient::DeleteBasePathMappingCallable(const DeleteBasePathMappingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBasePathMappingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBasePathMapping(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientDeleteBasePathMappingAsyncHelper(APIGatewayClient const * const clientThis, const DeleteBasePathMappingRequest& request, const DeleteBasePathMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteBasePathMapping(request), context);
}

void APIGatewayClient::DeleteBasePathMappingAsync(const DeleteBasePathMappingRequest& request, const DeleteBasePathMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientDeleteBasePathMappingAsyncHelper( this, request, handler, context ); } );
}

DeleteClientCertificateOutcome APIGatewayClient::DeleteClientCertificate(const DeleteClientCertificateRequest& request) const
{
  if (!request.ClientCertificateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteClientCertificate", "Required field: ClientCertificateId, is not set");
    return DeleteClientCertificateOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClientCertificateId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/clientcertificates/");
  uri.AddPathSegment(request.GetClientCertificateId());
  return DeleteClientCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteClientCertificateOutcomeCallable APIGatewayClient::DeleteClientCertificateCallable(const DeleteClientCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteClientCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteClientCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientDeleteClientCertificateAsyncHelper(APIGatewayClient const * const clientThis, const DeleteClientCertificateRequest& request, const DeleteClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteClientCertificate(request), context);
}

void APIGatewayClient::DeleteClientCertificateAsync(const DeleteClientCertificateRequest& request, const DeleteClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientDeleteClientCertificateAsyncHelper( this, request, handler, context ); } );
}

DeleteDeploymentOutcome APIGatewayClient::DeleteDeployment(const DeleteDeploymentRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDeployment", "Required field: RestApiId, is not set");
    return DeleteDeploymentOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.DeploymentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDeployment", "Required field: DeploymentId, is not set");
    return DeleteDeploymentOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeploymentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/deployments/");
  uri.AddPathSegment(request.GetDeploymentId());
  return DeleteDeploymentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDeploymentOutcomeCallable APIGatewayClient::DeleteDeploymentCallable(const DeleteDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientDeleteDeploymentAsyncHelper(APIGatewayClient const * const clientThis, const DeleteDeploymentRequest& request, const DeleteDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDeployment(request), context);
}

void APIGatewayClient::DeleteDeploymentAsync(const DeleteDeploymentRequest& request, const DeleteDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientDeleteDeploymentAsyncHelper( this, request, handler, context ); } );
}

DeleteDocumentationPartOutcome APIGatewayClient::DeleteDocumentationPart(const DeleteDocumentationPartRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDocumentationPart", "Required field: RestApiId, is not set");
    return DeleteDocumentationPartOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.DocumentationPartIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDocumentationPart", "Required field: DocumentationPartId, is not set");
    return DeleteDocumentationPartOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DocumentationPartId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/documentation/parts/");
  uri.AddPathSegment(request.GetDocumentationPartId());
  return DeleteDocumentationPartOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDocumentationPartOutcomeCallable APIGatewayClient::DeleteDocumentationPartCallable(const DeleteDocumentationPartRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDocumentationPartOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDocumentationPart(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientDeleteDocumentationPartAsyncHelper(APIGatewayClient const * const clientThis, const DeleteDocumentationPartRequest& request, const DeleteDocumentationPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDocumentationPart(request), context);
}

void APIGatewayClient::DeleteDocumentationPartAsync(const DeleteDocumentationPartRequest& request, const DeleteDocumentationPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientDeleteDocumentationPartAsyncHelper( this, request, handler, context ); } );
}

DeleteDocumentationVersionOutcome APIGatewayClient::DeleteDocumentationVersion(const DeleteDocumentationVersionRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDocumentationVersion", "Required field: RestApiId, is not set");
    return DeleteDocumentationVersionOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.DocumentationVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDocumentationVersion", "Required field: DocumentationVersion, is not set");
    return DeleteDocumentationVersionOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DocumentationVersion]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/documentation/versions/");
  uri.AddPathSegment(request.GetDocumentationVersion());
  return DeleteDocumentationVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDocumentationVersionOutcomeCallable APIGatewayClient::DeleteDocumentationVersionCallable(const DeleteDocumentationVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDocumentationVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDocumentationVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientDeleteDocumentationVersionAsyncHelper(APIGatewayClient const * const clientThis, const DeleteDocumentationVersionRequest& request, const DeleteDocumentationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDocumentationVersion(request), context);
}

void APIGatewayClient::DeleteDocumentationVersionAsync(const DeleteDocumentationVersionRequest& request, const DeleteDocumentationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientDeleteDocumentationVersionAsyncHelper( this, request, handler, context ); } );
}

DeleteDomainNameOutcome APIGatewayClient::DeleteDomainName(const DeleteDomainNameRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDomainName", "Required field: DomainName, is not set");
    return DeleteDomainNameOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domainnames/");
  uri.AddPathSegment(request.GetDomainName());
  return DeleteDomainNameOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDomainNameOutcomeCallable APIGatewayClient::DeleteDomainNameCallable(const DeleteDomainNameRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDomainNameOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDomainName(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientDeleteDomainNameAsyncHelper(APIGatewayClient const * const clientThis, const DeleteDomainNameRequest& request, const DeleteDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDomainName(request), context);
}

void APIGatewayClient::DeleteDomainNameAsync(const DeleteDomainNameRequest& request, const DeleteDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientDeleteDomainNameAsyncHelper( this, request, handler, context ); } );
}

DeleteGatewayResponseOutcome APIGatewayClient::DeleteGatewayResponse(const DeleteGatewayResponseRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGatewayResponse", "Required field: RestApiId, is not set");
    return DeleteGatewayResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResponseTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteGatewayResponse", "Required field: ResponseType, is not set");
    return DeleteGatewayResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResponseType]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/gatewayresponses/");
  uri.AddPathSegment(GatewayResponseTypeMapper::GetNameForGatewayResponseType(request.GetResponseType()));
  return DeleteGatewayResponseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteGatewayResponseOutcomeCallable APIGatewayClient::DeleteGatewayResponseCallable(const DeleteGatewayResponseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGatewayResponseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGatewayResponse(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientDeleteGatewayResponseAsyncHelper(APIGatewayClient const * const clientThis, const DeleteGatewayResponseRequest& request, const DeleteGatewayResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteGatewayResponse(request), context);
}

void APIGatewayClient::DeleteGatewayResponseAsync(const DeleteGatewayResponseRequest& request, const DeleteGatewayResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientDeleteGatewayResponseAsyncHelper( this, request, handler, context ); } );
}

DeleteIntegrationOutcome APIGatewayClient::DeleteIntegration(const DeleteIntegrationRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIntegration", "Required field: RestApiId, is not set");
    return DeleteIntegrationOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIntegration", "Required field: ResourceId, is not set");
    return DeleteIntegrationOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIntegration", "Required field: HttpMethod, is not set");
    return DeleteIntegrationOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HttpMethod]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/resources/");
  uri.AddPathSegment(request.GetResourceId());
  uri.AddPathSegments("/methods/");
  uri.AddPathSegment(request.GetHttpMethod());
  uri.AddPathSegments("/integration");
  return DeleteIntegrationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteIntegrationOutcomeCallable APIGatewayClient::DeleteIntegrationCallable(const DeleteIntegrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIntegrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIntegration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientDeleteIntegrationAsyncHelper(APIGatewayClient const * const clientThis, const DeleteIntegrationRequest& request, const DeleteIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteIntegration(request), context);
}

void APIGatewayClient::DeleteIntegrationAsync(const DeleteIntegrationRequest& request, const DeleteIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientDeleteIntegrationAsyncHelper( this, request, handler, context ); } );
}

DeleteIntegrationResponseOutcome APIGatewayClient::DeleteIntegrationResponse(const DeleteIntegrationResponseRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIntegrationResponse", "Required field: RestApiId, is not set");
    return DeleteIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIntegrationResponse", "Required field: ResourceId, is not set");
    return DeleteIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIntegrationResponse", "Required field: HttpMethod, is not set");
    return DeleteIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HttpMethod]", false));
  }
  if (!request.StatusCodeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIntegrationResponse", "Required field: StatusCode, is not set");
    return DeleteIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StatusCode]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/resources/");
  uri.AddPathSegment(request.GetResourceId());
  uri.AddPathSegments("/methods/");
  uri.AddPathSegment(request.GetHttpMethod());
  uri.AddPathSegments("/integration/responses/");
  uri.AddPathSegment(request.GetStatusCode());
  return DeleteIntegrationResponseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteIntegrationResponseOutcomeCallable APIGatewayClient::DeleteIntegrationResponseCallable(const DeleteIntegrationResponseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIntegrationResponseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIntegrationResponse(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientDeleteIntegrationResponseAsyncHelper(APIGatewayClient const * const clientThis, const DeleteIntegrationResponseRequest& request, const DeleteIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteIntegrationResponse(request), context);
}

void APIGatewayClient::DeleteIntegrationResponseAsync(const DeleteIntegrationResponseRequest& request, const DeleteIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientDeleteIntegrationResponseAsyncHelper( this, request, handler, context ); } );
}

DeleteMethodOutcome APIGatewayClient::DeleteMethod(const DeleteMethodRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMethod", "Required field: RestApiId, is not set");
    return DeleteMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMethod", "Required field: ResourceId, is not set");
    return DeleteMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMethod", "Required field: HttpMethod, is not set");
    return DeleteMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HttpMethod]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/resources/");
  uri.AddPathSegment(request.GetResourceId());
  uri.AddPathSegments("/methods/");
  uri.AddPathSegment(request.GetHttpMethod());
  return DeleteMethodOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteMethodOutcomeCallable APIGatewayClient::DeleteMethodCallable(const DeleteMethodRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMethodOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMethod(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientDeleteMethodAsyncHelper(APIGatewayClient const * const clientThis, const DeleteMethodRequest& request, const DeleteMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteMethod(request), context);
}

void APIGatewayClient::DeleteMethodAsync(const DeleteMethodRequest& request, const DeleteMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientDeleteMethodAsyncHelper( this, request, handler, context ); } );
}

DeleteMethodResponseOutcome APIGatewayClient::DeleteMethodResponse(const DeleteMethodResponseRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMethodResponse", "Required field: RestApiId, is not set");
    return DeleteMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMethodResponse", "Required field: ResourceId, is not set");
    return DeleteMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMethodResponse", "Required field: HttpMethod, is not set");
    return DeleteMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HttpMethod]", false));
  }
  if (!request.StatusCodeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteMethodResponse", "Required field: StatusCode, is not set");
    return DeleteMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StatusCode]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/resources/");
  uri.AddPathSegment(request.GetResourceId());
  uri.AddPathSegments("/methods/");
  uri.AddPathSegment(request.GetHttpMethod());
  uri.AddPathSegments("/responses/");
  uri.AddPathSegment(request.GetStatusCode());
  return DeleteMethodResponseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteMethodResponseOutcomeCallable APIGatewayClient::DeleteMethodResponseCallable(const DeleteMethodResponseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMethodResponseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMethodResponse(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientDeleteMethodResponseAsyncHelper(APIGatewayClient const * const clientThis, const DeleteMethodResponseRequest& request, const DeleteMethodResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteMethodResponse(request), context);
}

void APIGatewayClient::DeleteMethodResponseAsync(const DeleteMethodResponseRequest& request, const DeleteMethodResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientDeleteMethodResponseAsyncHelper( this, request, handler, context ); } );
}

DeleteModelOutcome APIGatewayClient::DeleteModel(const DeleteModelRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteModel", "Required field: RestApiId, is not set");
    return DeleteModelOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ModelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteModel", "Required field: ModelName, is not set");
    return DeleteModelOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ModelName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/models/");
  uri.AddPathSegment(request.GetModelName());
  return DeleteModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteModelOutcomeCallable APIGatewayClient::DeleteModelCallable(const DeleteModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientDeleteModelAsyncHelper(APIGatewayClient const * const clientThis, const DeleteModelRequest& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteModel(request), context);
}

void APIGatewayClient::DeleteModelAsync(const DeleteModelRequest& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientDeleteModelAsyncHelper( this, request, handler, context ); } );
}

DeleteRequestValidatorOutcome APIGatewayClient::DeleteRequestValidator(const DeleteRequestValidatorRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRequestValidator", "Required field: RestApiId, is not set");
    return DeleteRequestValidatorOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.RequestValidatorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRequestValidator", "Required field: RequestValidatorId, is not set");
    return DeleteRequestValidatorOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RequestValidatorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/requestvalidators/");
  uri.AddPathSegment(request.GetRequestValidatorId());
  return DeleteRequestValidatorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteRequestValidatorOutcomeCallable APIGatewayClient::DeleteRequestValidatorCallable(const DeleteRequestValidatorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRequestValidatorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRequestValidator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientDeleteRequestValidatorAsyncHelper(APIGatewayClient const * const clientThis, const DeleteRequestValidatorRequest& request, const DeleteRequestValidatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRequestValidator(request), context);
}

void APIGatewayClient::DeleteRequestValidatorAsync(const DeleteRequestValidatorRequest& request, const DeleteRequestValidatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientDeleteRequestValidatorAsyncHelper( this, request, handler, context ); } );
}

DeleteResourceOutcome APIGatewayClient::DeleteResource(const DeleteResourceRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteResource", "Required field: RestApiId, is not set");
    return DeleteResourceOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteResource", "Required field: ResourceId, is not set");
    return DeleteResourceOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/resources/");
  uri.AddPathSegment(request.GetResourceId());
  return DeleteResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourceOutcomeCallable APIGatewayClient::DeleteResourceCallable(const DeleteResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientDeleteResourceAsyncHelper(APIGatewayClient const * const clientThis, const DeleteResourceRequest& request, const DeleteResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteResource(request), context);
}

void APIGatewayClient::DeleteResourceAsync(const DeleteResourceRequest& request, const DeleteResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientDeleteResourceAsyncHelper( this, request, handler, context ); } );
}

DeleteRestApiOutcome APIGatewayClient::DeleteRestApi(const DeleteRestApiRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRestApi", "Required field: RestApiId, is not set");
    return DeleteRestApiOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  return DeleteRestApiOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteRestApiOutcomeCallable APIGatewayClient::DeleteRestApiCallable(const DeleteRestApiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRestApiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRestApi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientDeleteRestApiAsyncHelper(APIGatewayClient const * const clientThis, const DeleteRestApiRequest& request, const DeleteRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteRestApi(request), context);
}

void APIGatewayClient::DeleteRestApiAsync(const DeleteRestApiRequest& request, const DeleteRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientDeleteRestApiAsyncHelper( this, request, handler, context ); } );
}

DeleteStageOutcome APIGatewayClient::DeleteStage(const DeleteStageRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteStage", "Required field: RestApiId, is not set");
    return DeleteStageOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.StageNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteStage", "Required field: StageName, is not set");
    return DeleteStageOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StageName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/stages/");
  uri.AddPathSegment(request.GetStageName());
  return DeleteStageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteStageOutcomeCallable APIGatewayClient::DeleteStageCallable(const DeleteStageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientDeleteStageAsyncHelper(APIGatewayClient const * const clientThis, const DeleteStageRequest& request, const DeleteStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteStage(request), context);
}

void APIGatewayClient::DeleteStageAsync(const DeleteStageRequest& request, const DeleteStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientDeleteStageAsyncHelper( this, request, handler, context ); } );
}

DeleteUsagePlanOutcome APIGatewayClient::DeleteUsagePlan(const DeleteUsagePlanRequest& request) const
{
  if (!request.UsagePlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUsagePlan", "Required field: UsagePlanId, is not set");
    return DeleteUsagePlanOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UsagePlanId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/usageplans/");
  uri.AddPathSegment(request.GetUsagePlanId());
  return DeleteUsagePlanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteUsagePlanOutcomeCallable APIGatewayClient::DeleteUsagePlanCallable(const DeleteUsagePlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUsagePlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUsagePlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientDeleteUsagePlanAsyncHelper(APIGatewayClient const * const clientThis, const DeleteUsagePlanRequest& request, const DeleteUsagePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteUsagePlan(request), context);
}

void APIGatewayClient::DeleteUsagePlanAsync(const DeleteUsagePlanRequest& request, const DeleteUsagePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientDeleteUsagePlanAsyncHelper( this, request, handler, context ); } );
}

DeleteUsagePlanKeyOutcome APIGatewayClient::DeleteUsagePlanKey(const DeleteUsagePlanKeyRequest& request) const
{
  if (!request.UsagePlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUsagePlanKey", "Required field: UsagePlanId, is not set");
    return DeleteUsagePlanKeyOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UsagePlanId]", false));
  }
  if (!request.KeyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUsagePlanKey", "Required field: KeyId, is not set");
    return DeleteUsagePlanKeyOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KeyId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/usageplans/");
  uri.AddPathSegment(request.GetUsagePlanId());
  uri.AddPathSegments("/keys/");
  uri.AddPathSegment(request.GetKeyId());
  return DeleteUsagePlanKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteUsagePlanKeyOutcomeCallable APIGatewayClient::DeleteUsagePlanKeyCallable(const DeleteUsagePlanKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUsagePlanKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUsagePlanKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientDeleteUsagePlanKeyAsyncHelper(APIGatewayClient const * const clientThis, const DeleteUsagePlanKeyRequest& request, const DeleteUsagePlanKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteUsagePlanKey(request), context);
}

void APIGatewayClient::DeleteUsagePlanKeyAsync(const DeleteUsagePlanKeyRequest& request, const DeleteUsagePlanKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientDeleteUsagePlanKeyAsyncHelper( this, request, handler, context ); } );
}

DeleteVpcLinkOutcome APIGatewayClient::DeleteVpcLink(const DeleteVpcLinkRequest& request) const
{
  if (!request.VpcLinkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVpcLink", "Required field: VpcLinkId, is not set");
    return DeleteVpcLinkOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VpcLinkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/vpclinks/");
  uri.AddPathSegment(request.GetVpcLinkId());
  return DeleteVpcLinkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteVpcLinkOutcomeCallable APIGatewayClient::DeleteVpcLinkCallable(const DeleteVpcLinkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVpcLinkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVpcLink(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientDeleteVpcLinkAsyncHelper(APIGatewayClient const * const clientThis, const DeleteVpcLinkRequest& request, const DeleteVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteVpcLink(request), context);
}

void APIGatewayClient::DeleteVpcLinkAsync(const DeleteVpcLinkRequest& request, const DeleteVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientDeleteVpcLinkAsyncHelper( this, request, handler, context ); } );
}

FlushStageAuthorizersCacheOutcome APIGatewayClient::FlushStageAuthorizersCache(const FlushStageAuthorizersCacheRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("FlushStageAuthorizersCache", "Required field: RestApiId, is not set");
    return FlushStageAuthorizersCacheOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.StageNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("FlushStageAuthorizersCache", "Required field: StageName, is not set");
    return FlushStageAuthorizersCacheOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StageName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/stages/");
  uri.AddPathSegment(request.GetStageName());
  uri.AddPathSegments("/cache/authorizers");
  return FlushStageAuthorizersCacheOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

FlushStageAuthorizersCacheOutcomeCallable APIGatewayClient::FlushStageAuthorizersCacheCallable(const FlushStageAuthorizersCacheRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< FlushStageAuthorizersCacheOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->FlushStageAuthorizersCache(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientFlushStageAuthorizersCacheAsyncHelper(APIGatewayClient const * const clientThis, const FlushStageAuthorizersCacheRequest& request, const FlushStageAuthorizersCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->FlushStageAuthorizersCache(request), context);
}

void APIGatewayClient::FlushStageAuthorizersCacheAsync(const FlushStageAuthorizersCacheRequest& request, const FlushStageAuthorizersCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientFlushStageAuthorizersCacheAsyncHelper( this, request, handler, context ); } );
}

FlushStageCacheOutcome APIGatewayClient::FlushStageCache(const FlushStageCacheRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("FlushStageCache", "Required field: RestApiId, is not set");
    return FlushStageCacheOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.StageNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("FlushStageCache", "Required field: StageName, is not set");
    return FlushStageCacheOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StageName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/stages/");
  uri.AddPathSegment(request.GetStageName());
  uri.AddPathSegments("/cache/data");
  return FlushStageCacheOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

FlushStageCacheOutcomeCallable APIGatewayClient::FlushStageCacheCallable(const FlushStageCacheRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< FlushStageCacheOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->FlushStageCache(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientFlushStageCacheAsyncHelper(APIGatewayClient const * const clientThis, const FlushStageCacheRequest& request, const FlushStageCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->FlushStageCache(request), context);
}

void APIGatewayClient::FlushStageCacheAsync(const FlushStageCacheRequest& request, const FlushStageCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientFlushStageCacheAsyncHelper( this, request, handler, context ); } );
}

GenerateClientCertificateOutcome APIGatewayClient::GenerateClientCertificate(const GenerateClientCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/clientcertificates");
  return GenerateClientCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GenerateClientCertificateOutcomeCallable APIGatewayClient::GenerateClientCertificateCallable(const GenerateClientCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GenerateClientCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GenerateClientCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGenerateClientCertificateAsyncHelper(APIGatewayClient const * const clientThis, const GenerateClientCertificateRequest& request, const GenerateClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GenerateClientCertificate(request), context);
}

void APIGatewayClient::GenerateClientCertificateAsync(const GenerateClientCertificateRequest& request, const GenerateClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGenerateClientCertificateAsyncHelper( this, request, handler, context ); } );
}

GetAccountOutcome APIGatewayClient::GetAccount(const GetAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/account");
  return GetAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAccountOutcomeCallable APIGatewayClient::GetAccountCallable(const GetAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetAccountAsyncHelper(APIGatewayClient const * const clientThis, const GetAccountRequest& request, const GetAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAccount(request), context);
}

void APIGatewayClient::GetAccountAsync(const GetAccountRequest& request, const GetAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetAccountAsyncHelper( this, request, handler, context ); } );
}

GetApiKeyOutcome APIGatewayClient::GetApiKey(const GetApiKeyRequest& request) const
{
  if (!request.ApiKeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApiKey", "Required field: ApiKey, is not set");
    return GetApiKeyOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiKey]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/apikeys/");
  uri.AddPathSegment(request.GetApiKey());
  return GetApiKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetApiKeyOutcomeCallable APIGatewayClient::GetApiKeyCallable(const GetApiKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApiKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApiKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetApiKeyAsyncHelper(APIGatewayClient const * const clientThis, const GetApiKeyRequest& request, const GetApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetApiKey(request), context);
}

void APIGatewayClient::GetApiKeyAsync(const GetApiKeyRequest& request, const GetApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetApiKeyAsyncHelper( this, request, handler, context ); } );
}

GetApiKeysOutcome APIGatewayClient::GetApiKeys(const GetApiKeysRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/apikeys");
  return GetApiKeysOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetApiKeysOutcomeCallable APIGatewayClient::GetApiKeysCallable(const GetApiKeysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApiKeysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApiKeys(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetApiKeysAsyncHelper(APIGatewayClient const * const clientThis, const GetApiKeysRequest& request, const GetApiKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetApiKeys(request), context);
}

void APIGatewayClient::GetApiKeysAsync(const GetApiKeysRequest& request, const GetApiKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetApiKeysAsyncHelper( this, request, handler, context ); } );
}

GetAuthorizerOutcome APIGatewayClient::GetAuthorizer(const GetAuthorizerRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAuthorizer", "Required field: RestApiId, is not set");
    return GetAuthorizerOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.AuthorizerIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAuthorizer", "Required field: AuthorizerId, is not set");
    return GetAuthorizerOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AuthorizerId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/authorizers/");
  uri.AddPathSegment(request.GetAuthorizerId());
  return GetAuthorizerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAuthorizerOutcomeCallable APIGatewayClient::GetAuthorizerCallable(const GetAuthorizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAuthorizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAuthorizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetAuthorizerAsyncHelper(APIGatewayClient const * const clientThis, const GetAuthorizerRequest& request, const GetAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAuthorizer(request), context);
}

void APIGatewayClient::GetAuthorizerAsync(const GetAuthorizerRequest& request, const GetAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetAuthorizerAsyncHelper( this, request, handler, context ); } );
}

GetAuthorizersOutcome APIGatewayClient::GetAuthorizers(const GetAuthorizersRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAuthorizers", "Required field: RestApiId, is not set");
    return GetAuthorizersOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/authorizers");
  return GetAuthorizersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAuthorizersOutcomeCallable APIGatewayClient::GetAuthorizersCallable(const GetAuthorizersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAuthorizersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAuthorizers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetAuthorizersAsyncHelper(APIGatewayClient const * const clientThis, const GetAuthorizersRequest& request, const GetAuthorizersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAuthorizers(request), context);
}

void APIGatewayClient::GetAuthorizersAsync(const GetAuthorizersRequest& request, const GetAuthorizersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetAuthorizersAsyncHelper( this, request, handler, context ); } );
}

GetBasePathMappingOutcome APIGatewayClient::GetBasePathMapping(const GetBasePathMappingRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBasePathMapping", "Required field: DomainName, is not set");
    return GetBasePathMappingOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.BasePathHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBasePathMapping", "Required field: BasePath, is not set");
    return GetBasePathMappingOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BasePath]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domainnames/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/basepathmappings/");
  uri.AddPathSegment(request.GetBasePath());
  return GetBasePathMappingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetBasePathMappingOutcomeCallable APIGatewayClient::GetBasePathMappingCallable(const GetBasePathMappingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBasePathMappingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBasePathMapping(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetBasePathMappingAsyncHelper(APIGatewayClient const * const clientThis, const GetBasePathMappingRequest& request, const GetBasePathMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetBasePathMapping(request), context);
}

void APIGatewayClient::GetBasePathMappingAsync(const GetBasePathMappingRequest& request, const GetBasePathMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetBasePathMappingAsyncHelper( this, request, handler, context ); } );
}

GetBasePathMappingsOutcome APIGatewayClient::GetBasePathMappings(const GetBasePathMappingsRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBasePathMappings", "Required field: DomainName, is not set");
    return GetBasePathMappingsOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domainnames/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/basepathmappings");
  return GetBasePathMappingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetBasePathMappingsOutcomeCallable APIGatewayClient::GetBasePathMappingsCallable(const GetBasePathMappingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBasePathMappingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBasePathMappings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetBasePathMappingsAsyncHelper(APIGatewayClient const * const clientThis, const GetBasePathMappingsRequest& request, const GetBasePathMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetBasePathMappings(request), context);
}

void APIGatewayClient::GetBasePathMappingsAsync(const GetBasePathMappingsRequest& request, const GetBasePathMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetBasePathMappingsAsyncHelper( this, request, handler, context ); } );
}

GetClientCertificateOutcome APIGatewayClient::GetClientCertificate(const GetClientCertificateRequest& request) const
{
  if (!request.ClientCertificateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetClientCertificate", "Required field: ClientCertificateId, is not set");
    return GetClientCertificateOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClientCertificateId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/clientcertificates/");
  uri.AddPathSegment(request.GetClientCertificateId());
  return GetClientCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetClientCertificateOutcomeCallable APIGatewayClient::GetClientCertificateCallable(const GetClientCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetClientCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetClientCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetClientCertificateAsyncHelper(APIGatewayClient const * const clientThis, const GetClientCertificateRequest& request, const GetClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetClientCertificate(request), context);
}

void APIGatewayClient::GetClientCertificateAsync(const GetClientCertificateRequest& request, const GetClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetClientCertificateAsyncHelper( this, request, handler, context ); } );
}

GetClientCertificatesOutcome APIGatewayClient::GetClientCertificates(const GetClientCertificatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/clientcertificates");
  return GetClientCertificatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetClientCertificatesOutcomeCallable APIGatewayClient::GetClientCertificatesCallable(const GetClientCertificatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetClientCertificatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetClientCertificates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetClientCertificatesAsyncHelper(APIGatewayClient const * const clientThis, const GetClientCertificatesRequest& request, const GetClientCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetClientCertificates(request), context);
}

void APIGatewayClient::GetClientCertificatesAsync(const GetClientCertificatesRequest& request, const GetClientCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetClientCertificatesAsyncHelper( this, request, handler, context ); } );
}

GetDeploymentOutcome APIGatewayClient::GetDeployment(const GetDeploymentRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDeployment", "Required field: RestApiId, is not set");
    return GetDeploymentOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.DeploymentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDeployment", "Required field: DeploymentId, is not set");
    return GetDeploymentOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeploymentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/deployments/");
  uri.AddPathSegment(request.GetDeploymentId());
  return GetDeploymentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDeploymentOutcomeCallable APIGatewayClient::GetDeploymentCallable(const GetDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetDeploymentAsyncHelper(APIGatewayClient const * const clientThis, const GetDeploymentRequest& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDeployment(request), context);
}

void APIGatewayClient::GetDeploymentAsync(const GetDeploymentRequest& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetDeploymentAsyncHelper( this, request, handler, context ); } );
}

GetDeploymentsOutcome APIGatewayClient::GetDeployments(const GetDeploymentsRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDeployments", "Required field: RestApiId, is not set");
    return GetDeploymentsOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/deployments");
  return GetDeploymentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDeploymentsOutcomeCallable APIGatewayClient::GetDeploymentsCallable(const GetDeploymentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeploymentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeployments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetDeploymentsAsyncHelper(APIGatewayClient const * const clientThis, const GetDeploymentsRequest& request, const GetDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDeployments(request), context);
}

void APIGatewayClient::GetDeploymentsAsync(const GetDeploymentsRequest& request, const GetDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetDeploymentsAsyncHelper( this, request, handler, context ); } );
}

GetDocumentationPartOutcome APIGatewayClient::GetDocumentationPart(const GetDocumentationPartRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDocumentationPart", "Required field: RestApiId, is not set");
    return GetDocumentationPartOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.DocumentationPartIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDocumentationPart", "Required field: DocumentationPartId, is not set");
    return GetDocumentationPartOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DocumentationPartId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/documentation/parts/");
  uri.AddPathSegment(request.GetDocumentationPartId());
  return GetDocumentationPartOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDocumentationPartOutcomeCallable APIGatewayClient::GetDocumentationPartCallable(const GetDocumentationPartRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDocumentationPartOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDocumentationPart(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetDocumentationPartAsyncHelper(APIGatewayClient const * const clientThis, const GetDocumentationPartRequest& request, const GetDocumentationPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDocumentationPart(request), context);
}

void APIGatewayClient::GetDocumentationPartAsync(const GetDocumentationPartRequest& request, const GetDocumentationPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetDocumentationPartAsyncHelper( this, request, handler, context ); } );
}

GetDocumentationPartsOutcome APIGatewayClient::GetDocumentationParts(const GetDocumentationPartsRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDocumentationParts", "Required field: RestApiId, is not set");
    return GetDocumentationPartsOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/documentation/parts");
  return GetDocumentationPartsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDocumentationPartsOutcomeCallable APIGatewayClient::GetDocumentationPartsCallable(const GetDocumentationPartsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDocumentationPartsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDocumentationParts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetDocumentationPartsAsyncHelper(APIGatewayClient const * const clientThis, const GetDocumentationPartsRequest& request, const GetDocumentationPartsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDocumentationParts(request), context);
}

void APIGatewayClient::GetDocumentationPartsAsync(const GetDocumentationPartsRequest& request, const GetDocumentationPartsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetDocumentationPartsAsyncHelper( this, request, handler, context ); } );
}

GetDocumentationVersionOutcome APIGatewayClient::GetDocumentationVersion(const GetDocumentationVersionRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDocumentationVersion", "Required field: RestApiId, is not set");
    return GetDocumentationVersionOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.DocumentationVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDocumentationVersion", "Required field: DocumentationVersion, is not set");
    return GetDocumentationVersionOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DocumentationVersion]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/documentation/versions/");
  uri.AddPathSegment(request.GetDocumentationVersion());
  return GetDocumentationVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDocumentationVersionOutcomeCallable APIGatewayClient::GetDocumentationVersionCallable(const GetDocumentationVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDocumentationVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDocumentationVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetDocumentationVersionAsyncHelper(APIGatewayClient const * const clientThis, const GetDocumentationVersionRequest& request, const GetDocumentationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDocumentationVersion(request), context);
}

void APIGatewayClient::GetDocumentationVersionAsync(const GetDocumentationVersionRequest& request, const GetDocumentationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetDocumentationVersionAsyncHelper( this, request, handler, context ); } );
}

GetDocumentationVersionsOutcome APIGatewayClient::GetDocumentationVersions(const GetDocumentationVersionsRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDocumentationVersions", "Required field: RestApiId, is not set");
    return GetDocumentationVersionsOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/documentation/versions");
  return GetDocumentationVersionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDocumentationVersionsOutcomeCallable APIGatewayClient::GetDocumentationVersionsCallable(const GetDocumentationVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDocumentationVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDocumentationVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetDocumentationVersionsAsyncHelper(APIGatewayClient const * const clientThis, const GetDocumentationVersionsRequest& request, const GetDocumentationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDocumentationVersions(request), context);
}

void APIGatewayClient::GetDocumentationVersionsAsync(const GetDocumentationVersionsRequest& request, const GetDocumentationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetDocumentationVersionsAsyncHelper( this, request, handler, context ); } );
}

GetDomainNameOutcome APIGatewayClient::GetDomainName(const GetDomainNameRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDomainName", "Required field: DomainName, is not set");
    return GetDomainNameOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domainnames/");
  uri.AddPathSegment(request.GetDomainName());
  return GetDomainNameOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDomainNameOutcomeCallable APIGatewayClient::GetDomainNameCallable(const GetDomainNameRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDomainNameOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDomainName(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetDomainNameAsyncHelper(APIGatewayClient const * const clientThis, const GetDomainNameRequest& request, const GetDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDomainName(request), context);
}

void APIGatewayClient::GetDomainNameAsync(const GetDomainNameRequest& request, const GetDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetDomainNameAsyncHelper( this, request, handler, context ); } );
}

GetDomainNamesOutcome APIGatewayClient::GetDomainNames(const GetDomainNamesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domainnames");
  return GetDomainNamesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDomainNamesOutcomeCallable APIGatewayClient::GetDomainNamesCallable(const GetDomainNamesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDomainNamesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDomainNames(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetDomainNamesAsyncHelper(APIGatewayClient const * const clientThis, const GetDomainNamesRequest& request, const GetDomainNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetDomainNames(request), context);
}

void APIGatewayClient::GetDomainNamesAsync(const GetDomainNamesRequest& request, const GetDomainNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetDomainNamesAsyncHelper( this, request, handler, context ); } );
}

GetExportOutcome APIGatewayClient::GetExport(const GetExportRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExport", "Required field: RestApiId, is not set");
    return GetExportOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.StageNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExport", "Required field: StageName, is not set");
    return GetExportOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StageName]", false));
  }
  if (!request.ExportTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExport", "Required field: ExportType, is not set");
    return GetExportOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExportType]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/stages/");
  uri.AddPathSegment(request.GetStageName());
  uri.AddPathSegments("/exports/");
  uri.AddPathSegment(request.GetExportType());
  return GetExportOutcome(MakeRequestWithUnparsedResponse(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetExportOutcomeCallable APIGatewayClient::GetExportCallable(const GetExportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetExportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetExport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetExportAsyncHelper(APIGatewayClient const * const clientThis, const GetExportRequest& request, const GetExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetExport(request), context);
}

void APIGatewayClient::GetExportAsync(const GetExportRequest& request, const GetExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetExportAsyncHelper( this, request, handler, context ); } );
}

GetGatewayResponseOutcome APIGatewayClient::GetGatewayResponse(const GetGatewayResponseRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGatewayResponse", "Required field: RestApiId, is not set");
    return GetGatewayResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResponseTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGatewayResponse", "Required field: ResponseType, is not set");
    return GetGatewayResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResponseType]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/gatewayresponses/");
  uri.AddPathSegment(GatewayResponseTypeMapper::GetNameForGatewayResponseType(request.GetResponseType()));
  return GetGatewayResponseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetGatewayResponseOutcomeCallable APIGatewayClient::GetGatewayResponseCallable(const GetGatewayResponseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGatewayResponseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGatewayResponse(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetGatewayResponseAsyncHelper(APIGatewayClient const * const clientThis, const GetGatewayResponseRequest& request, const GetGatewayResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetGatewayResponse(request), context);
}

void APIGatewayClient::GetGatewayResponseAsync(const GetGatewayResponseRequest& request, const GetGatewayResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetGatewayResponseAsyncHelper( this, request, handler, context ); } );
}

GetGatewayResponsesOutcome APIGatewayClient::GetGatewayResponses(const GetGatewayResponsesRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGatewayResponses", "Required field: RestApiId, is not set");
    return GetGatewayResponsesOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/gatewayresponses");
  return GetGatewayResponsesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetGatewayResponsesOutcomeCallable APIGatewayClient::GetGatewayResponsesCallable(const GetGatewayResponsesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGatewayResponsesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGatewayResponses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetGatewayResponsesAsyncHelper(APIGatewayClient const * const clientThis, const GetGatewayResponsesRequest& request, const GetGatewayResponsesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetGatewayResponses(request), context);
}

void APIGatewayClient::GetGatewayResponsesAsync(const GetGatewayResponsesRequest& request, const GetGatewayResponsesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetGatewayResponsesAsyncHelper( this, request, handler, context ); } );
}

GetIntegrationOutcome APIGatewayClient::GetIntegration(const GetIntegrationRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIntegration", "Required field: RestApiId, is not set");
    return GetIntegrationOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIntegration", "Required field: ResourceId, is not set");
    return GetIntegrationOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIntegration", "Required field: HttpMethod, is not set");
    return GetIntegrationOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HttpMethod]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/resources/");
  uri.AddPathSegment(request.GetResourceId());
  uri.AddPathSegments("/methods/");
  uri.AddPathSegment(request.GetHttpMethod());
  uri.AddPathSegments("/integration");
  return GetIntegrationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetIntegrationOutcomeCallable APIGatewayClient::GetIntegrationCallable(const GetIntegrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIntegrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIntegration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetIntegrationAsyncHelper(APIGatewayClient const * const clientThis, const GetIntegrationRequest& request, const GetIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetIntegration(request), context);
}

void APIGatewayClient::GetIntegrationAsync(const GetIntegrationRequest& request, const GetIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetIntegrationAsyncHelper( this, request, handler, context ); } );
}

GetIntegrationResponseOutcome APIGatewayClient::GetIntegrationResponse(const GetIntegrationResponseRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIntegrationResponse", "Required field: RestApiId, is not set");
    return GetIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIntegrationResponse", "Required field: ResourceId, is not set");
    return GetIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIntegrationResponse", "Required field: HttpMethod, is not set");
    return GetIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HttpMethod]", false));
  }
  if (!request.StatusCodeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIntegrationResponse", "Required field: StatusCode, is not set");
    return GetIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StatusCode]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/resources/");
  uri.AddPathSegment(request.GetResourceId());
  uri.AddPathSegments("/methods/");
  uri.AddPathSegment(request.GetHttpMethod());
  uri.AddPathSegments("/integration/responses/");
  uri.AddPathSegment(request.GetStatusCode());
  return GetIntegrationResponseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetIntegrationResponseOutcomeCallable APIGatewayClient::GetIntegrationResponseCallable(const GetIntegrationResponseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIntegrationResponseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIntegrationResponse(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetIntegrationResponseAsyncHelper(APIGatewayClient const * const clientThis, const GetIntegrationResponseRequest& request, const GetIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetIntegrationResponse(request), context);
}

void APIGatewayClient::GetIntegrationResponseAsync(const GetIntegrationResponseRequest& request, const GetIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetIntegrationResponseAsyncHelper( this, request, handler, context ); } );
}

GetMethodOutcome APIGatewayClient::GetMethod(const GetMethodRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMethod", "Required field: RestApiId, is not set");
    return GetMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMethod", "Required field: ResourceId, is not set");
    return GetMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMethod", "Required field: HttpMethod, is not set");
    return GetMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HttpMethod]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/resources/");
  uri.AddPathSegment(request.GetResourceId());
  uri.AddPathSegments("/methods/");
  uri.AddPathSegment(request.GetHttpMethod());
  return GetMethodOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetMethodOutcomeCallable APIGatewayClient::GetMethodCallable(const GetMethodRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMethodOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMethod(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetMethodAsyncHelper(APIGatewayClient const * const clientThis, const GetMethodRequest& request, const GetMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMethod(request), context);
}

void APIGatewayClient::GetMethodAsync(const GetMethodRequest& request, const GetMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetMethodAsyncHelper( this, request, handler, context ); } );
}

GetMethodResponseOutcome APIGatewayClient::GetMethodResponse(const GetMethodResponseRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMethodResponse", "Required field: RestApiId, is not set");
    return GetMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMethodResponse", "Required field: ResourceId, is not set");
    return GetMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMethodResponse", "Required field: HttpMethod, is not set");
    return GetMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HttpMethod]", false));
  }
  if (!request.StatusCodeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMethodResponse", "Required field: StatusCode, is not set");
    return GetMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StatusCode]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/resources/");
  uri.AddPathSegment(request.GetResourceId());
  uri.AddPathSegments("/methods/");
  uri.AddPathSegment(request.GetHttpMethod());
  uri.AddPathSegments("/responses/");
  uri.AddPathSegment(request.GetStatusCode());
  return GetMethodResponseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetMethodResponseOutcomeCallable APIGatewayClient::GetMethodResponseCallable(const GetMethodResponseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMethodResponseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMethodResponse(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetMethodResponseAsyncHelper(APIGatewayClient const * const clientThis, const GetMethodResponseRequest& request, const GetMethodResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetMethodResponse(request), context);
}

void APIGatewayClient::GetMethodResponseAsync(const GetMethodResponseRequest& request, const GetMethodResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetMethodResponseAsyncHelper( this, request, handler, context ); } );
}

GetModelOutcome APIGatewayClient::GetModel(const GetModelRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetModel", "Required field: RestApiId, is not set");
    return GetModelOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ModelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetModel", "Required field: ModelName, is not set");
    return GetModelOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ModelName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/models/");
  uri.AddPathSegment(request.GetModelName());
  return GetModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetModelOutcomeCallable APIGatewayClient::GetModelCallable(const GetModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetModelAsyncHelper(APIGatewayClient const * const clientThis, const GetModelRequest& request, const GetModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetModel(request), context);
}

void APIGatewayClient::GetModelAsync(const GetModelRequest& request, const GetModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetModelAsyncHelper( this, request, handler, context ); } );
}

GetModelTemplateOutcome APIGatewayClient::GetModelTemplate(const GetModelTemplateRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetModelTemplate", "Required field: RestApiId, is not set");
    return GetModelTemplateOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ModelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetModelTemplate", "Required field: ModelName, is not set");
    return GetModelTemplateOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ModelName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/models/");
  uri.AddPathSegment(request.GetModelName());
  uri.AddPathSegments("/default_template");
  return GetModelTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetModelTemplateOutcomeCallable APIGatewayClient::GetModelTemplateCallable(const GetModelTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetModelTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetModelTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetModelTemplateAsyncHelper(APIGatewayClient const * const clientThis, const GetModelTemplateRequest& request, const GetModelTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetModelTemplate(request), context);
}

void APIGatewayClient::GetModelTemplateAsync(const GetModelTemplateRequest& request, const GetModelTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetModelTemplateAsyncHelper( this, request, handler, context ); } );
}

GetModelsOutcome APIGatewayClient::GetModels(const GetModelsRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetModels", "Required field: RestApiId, is not set");
    return GetModelsOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/models");
  return GetModelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetModelsOutcomeCallable APIGatewayClient::GetModelsCallable(const GetModelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetModelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetModels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetModelsAsyncHelper(APIGatewayClient const * const clientThis, const GetModelsRequest& request, const GetModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetModels(request), context);
}

void APIGatewayClient::GetModelsAsync(const GetModelsRequest& request, const GetModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetModelsAsyncHelper( this, request, handler, context ); } );
}

GetRequestValidatorOutcome APIGatewayClient::GetRequestValidator(const GetRequestValidatorRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRequestValidator", "Required field: RestApiId, is not set");
    return GetRequestValidatorOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.RequestValidatorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRequestValidator", "Required field: RequestValidatorId, is not set");
    return GetRequestValidatorOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RequestValidatorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/requestvalidators/");
  uri.AddPathSegment(request.GetRequestValidatorId());
  return GetRequestValidatorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetRequestValidatorOutcomeCallable APIGatewayClient::GetRequestValidatorCallable(const GetRequestValidatorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRequestValidatorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRequestValidator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetRequestValidatorAsyncHelper(APIGatewayClient const * const clientThis, const GetRequestValidatorRequest& request, const GetRequestValidatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRequestValidator(request), context);
}

void APIGatewayClient::GetRequestValidatorAsync(const GetRequestValidatorRequest& request, const GetRequestValidatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetRequestValidatorAsyncHelper( this, request, handler, context ); } );
}

GetRequestValidatorsOutcome APIGatewayClient::GetRequestValidators(const GetRequestValidatorsRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRequestValidators", "Required field: RestApiId, is not set");
    return GetRequestValidatorsOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/requestvalidators");
  return GetRequestValidatorsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetRequestValidatorsOutcomeCallable APIGatewayClient::GetRequestValidatorsCallable(const GetRequestValidatorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRequestValidatorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRequestValidators(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetRequestValidatorsAsyncHelper(APIGatewayClient const * const clientThis, const GetRequestValidatorsRequest& request, const GetRequestValidatorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRequestValidators(request), context);
}

void APIGatewayClient::GetRequestValidatorsAsync(const GetRequestValidatorsRequest& request, const GetRequestValidatorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetRequestValidatorsAsyncHelper( this, request, handler, context ); } );
}

GetResourceOutcome APIGatewayClient::GetResource(const GetResourceRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetResource", "Required field: RestApiId, is not set");
    return GetResourceOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetResource", "Required field: ResourceId, is not set");
    return GetResourceOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/resources/");
  uri.AddPathSegment(request.GetResourceId());
  return GetResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetResourceOutcomeCallable APIGatewayClient::GetResourceCallable(const GetResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetResourceAsyncHelper(APIGatewayClient const * const clientThis, const GetResourceRequest& request, const GetResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetResource(request), context);
}

void APIGatewayClient::GetResourceAsync(const GetResourceRequest& request, const GetResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetResourceAsyncHelper( this, request, handler, context ); } );
}

GetResourcesOutcome APIGatewayClient::GetResources(const GetResourcesRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetResources", "Required field: RestApiId, is not set");
    return GetResourcesOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/resources");
  return GetResourcesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetResourcesOutcomeCallable APIGatewayClient::GetResourcesCallable(const GetResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetResourcesAsyncHelper(APIGatewayClient const * const clientThis, const GetResourcesRequest& request, const GetResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetResources(request), context);
}

void APIGatewayClient::GetResourcesAsync(const GetResourcesRequest& request, const GetResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetResourcesAsyncHelper( this, request, handler, context ); } );
}

GetRestApiOutcome APIGatewayClient::GetRestApi(const GetRestApiRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRestApi", "Required field: RestApiId, is not set");
    return GetRestApiOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  return GetRestApiOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetRestApiOutcomeCallable APIGatewayClient::GetRestApiCallable(const GetRestApiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRestApiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRestApi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetRestApiAsyncHelper(APIGatewayClient const * const clientThis, const GetRestApiRequest& request, const GetRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRestApi(request), context);
}

void APIGatewayClient::GetRestApiAsync(const GetRestApiRequest& request, const GetRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetRestApiAsyncHelper( this, request, handler, context ); } );
}

GetRestApisOutcome APIGatewayClient::GetRestApis(const GetRestApisRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis");
  return GetRestApisOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetRestApisOutcomeCallable APIGatewayClient::GetRestApisCallable(const GetRestApisRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRestApisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRestApis(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetRestApisAsyncHelper(APIGatewayClient const * const clientThis, const GetRestApisRequest& request, const GetRestApisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetRestApis(request), context);
}

void APIGatewayClient::GetRestApisAsync(const GetRestApisRequest& request, const GetRestApisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetRestApisAsyncHelper( this, request, handler, context ); } );
}

GetSdkOutcome APIGatewayClient::GetSdk(const GetSdkRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSdk", "Required field: RestApiId, is not set");
    return GetSdkOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.StageNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSdk", "Required field: StageName, is not set");
    return GetSdkOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StageName]", false));
  }
  if (!request.SdkTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSdk", "Required field: SdkType, is not set");
    return GetSdkOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SdkType]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/stages/");
  uri.AddPathSegment(request.GetStageName());
  uri.AddPathSegments("/sdks/");
  uri.AddPathSegment(request.GetSdkType());
  return GetSdkOutcome(MakeRequestWithUnparsedResponse(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

GetSdkOutcomeCallable APIGatewayClient::GetSdkCallable(const GetSdkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSdkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSdk(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetSdkAsyncHelper(APIGatewayClient const * const clientThis, const GetSdkRequest& request, const GetSdkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSdk(request), context);
}

void APIGatewayClient::GetSdkAsync(const GetSdkRequest& request, const GetSdkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetSdkAsyncHelper( this, request, handler, context ); } );
}

GetSdkTypeOutcome APIGatewayClient::GetSdkType(const GetSdkTypeRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSdkType", "Required field: Id, is not set");
    return GetSdkTypeOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/sdktypes/");
  uri.AddPathSegment(request.GetId());
  return GetSdkTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSdkTypeOutcomeCallable APIGatewayClient::GetSdkTypeCallable(const GetSdkTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSdkTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSdkType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetSdkTypeAsyncHelper(APIGatewayClient const * const clientThis, const GetSdkTypeRequest& request, const GetSdkTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSdkType(request), context);
}

void APIGatewayClient::GetSdkTypeAsync(const GetSdkTypeRequest& request, const GetSdkTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetSdkTypeAsyncHelper( this, request, handler, context ); } );
}

GetSdkTypesOutcome APIGatewayClient::GetSdkTypes(const GetSdkTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/sdktypes");
  return GetSdkTypesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSdkTypesOutcomeCallable APIGatewayClient::GetSdkTypesCallable(const GetSdkTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSdkTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSdkTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetSdkTypesAsyncHelper(APIGatewayClient const * const clientThis, const GetSdkTypesRequest& request, const GetSdkTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSdkTypes(request), context);
}

void APIGatewayClient::GetSdkTypesAsync(const GetSdkTypesRequest& request, const GetSdkTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetSdkTypesAsyncHelper( this, request, handler, context ); } );
}

GetStageOutcome APIGatewayClient::GetStage(const GetStageRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStage", "Required field: RestApiId, is not set");
    return GetStageOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.StageNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStage", "Required field: StageName, is not set");
    return GetStageOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StageName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/stages/");
  uri.AddPathSegment(request.GetStageName());
  return GetStageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetStageOutcomeCallable APIGatewayClient::GetStageCallable(const GetStageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetStageAsyncHelper(APIGatewayClient const * const clientThis, const GetStageRequest& request, const GetStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetStage(request), context);
}

void APIGatewayClient::GetStageAsync(const GetStageRequest& request, const GetStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetStageAsyncHelper( this, request, handler, context ); } );
}

GetStagesOutcome APIGatewayClient::GetStages(const GetStagesRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStages", "Required field: RestApiId, is not set");
    return GetStagesOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/stages");
  return GetStagesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetStagesOutcomeCallable APIGatewayClient::GetStagesCallable(const GetStagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetStagesAsyncHelper(APIGatewayClient const * const clientThis, const GetStagesRequest& request, const GetStagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetStages(request), context);
}

void APIGatewayClient::GetStagesAsync(const GetStagesRequest& request, const GetStagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetStagesAsyncHelper( this, request, handler, context ); } );
}

GetTagsOutcome APIGatewayClient::GetTags(const GetTagsRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTags", "Required field: ResourceArn, is not set");
    return GetTagsOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return GetTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetTagsOutcomeCallable APIGatewayClient::GetTagsCallable(const GetTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetTagsAsyncHelper(APIGatewayClient const * const clientThis, const GetTagsRequest& request, const GetTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTags(request), context);
}

void APIGatewayClient::GetTagsAsync(const GetTagsRequest& request, const GetTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetTagsAsyncHelper( this, request, handler, context ); } );
}

GetUsageOutcome APIGatewayClient::GetUsage(const GetUsageRequest& request) const
{
  if (!request.UsagePlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUsage", "Required field: UsagePlanId, is not set");
    return GetUsageOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UsagePlanId]", false));
  }
  if (!request.StartDateHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUsage", "Required field: StartDate, is not set");
    return GetUsageOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartDate]", false));
  }
  if (!request.EndDateHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUsage", "Required field: EndDate, is not set");
    return GetUsageOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndDate]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/usageplans/");
  uri.AddPathSegment(request.GetUsagePlanId());
  uri.AddPathSegments("/usage");
  return GetUsageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetUsageOutcomeCallable APIGatewayClient::GetUsageCallable(const GetUsageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUsageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUsage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetUsageAsyncHelper(APIGatewayClient const * const clientThis, const GetUsageRequest& request, const GetUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetUsage(request), context);
}

void APIGatewayClient::GetUsageAsync(const GetUsageRequest& request, const GetUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetUsageAsyncHelper( this, request, handler, context ); } );
}

GetUsagePlanOutcome APIGatewayClient::GetUsagePlan(const GetUsagePlanRequest& request) const
{
  if (!request.UsagePlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUsagePlan", "Required field: UsagePlanId, is not set");
    return GetUsagePlanOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UsagePlanId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/usageplans/");
  uri.AddPathSegment(request.GetUsagePlanId());
  return GetUsagePlanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetUsagePlanOutcomeCallable APIGatewayClient::GetUsagePlanCallable(const GetUsagePlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUsagePlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUsagePlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetUsagePlanAsyncHelper(APIGatewayClient const * const clientThis, const GetUsagePlanRequest& request, const GetUsagePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetUsagePlan(request), context);
}

void APIGatewayClient::GetUsagePlanAsync(const GetUsagePlanRequest& request, const GetUsagePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetUsagePlanAsyncHelper( this, request, handler, context ); } );
}

GetUsagePlanKeyOutcome APIGatewayClient::GetUsagePlanKey(const GetUsagePlanKeyRequest& request) const
{
  if (!request.UsagePlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUsagePlanKey", "Required field: UsagePlanId, is not set");
    return GetUsagePlanKeyOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UsagePlanId]", false));
  }
  if (!request.KeyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUsagePlanKey", "Required field: KeyId, is not set");
    return GetUsagePlanKeyOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KeyId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/usageplans/");
  uri.AddPathSegment(request.GetUsagePlanId());
  uri.AddPathSegments("/keys/");
  uri.AddPathSegment(request.GetKeyId());
  return GetUsagePlanKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetUsagePlanKeyOutcomeCallable APIGatewayClient::GetUsagePlanKeyCallable(const GetUsagePlanKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUsagePlanKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUsagePlanKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetUsagePlanKeyAsyncHelper(APIGatewayClient const * const clientThis, const GetUsagePlanKeyRequest& request, const GetUsagePlanKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetUsagePlanKey(request), context);
}

void APIGatewayClient::GetUsagePlanKeyAsync(const GetUsagePlanKeyRequest& request, const GetUsagePlanKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetUsagePlanKeyAsyncHelper( this, request, handler, context ); } );
}

GetUsagePlanKeysOutcome APIGatewayClient::GetUsagePlanKeys(const GetUsagePlanKeysRequest& request) const
{
  if (!request.UsagePlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUsagePlanKeys", "Required field: UsagePlanId, is not set");
    return GetUsagePlanKeysOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UsagePlanId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/usageplans/");
  uri.AddPathSegment(request.GetUsagePlanId());
  uri.AddPathSegments("/keys");
  return GetUsagePlanKeysOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetUsagePlanKeysOutcomeCallable APIGatewayClient::GetUsagePlanKeysCallable(const GetUsagePlanKeysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUsagePlanKeysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUsagePlanKeys(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetUsagePlanKeysAsyncHelper(APIGatewayClient const * const clientThis, const GetUsagePlanKeysRequest& request, const GetUsagePlanKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetUsagePlanKeys(request), context);
}

void APIGatewayClient::GetUsagePlanKeysAsync(const GetUsagePlanKeysRequest& request, const GetUsagePlanKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetUsagePlanKeysAsyncHelper( this, request, handler, context ); } );
}

GetUsagePlansOutcome APIGatewayClient::GetUsagePlans(const GetUsagePlansRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/usageplans");
  return GetUsagePlansOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetUsagePlansOutcomeCallable APIGatewayClient::GetUsagePlansCallable(const GetUsagePlansRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUsagePlansOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUsagePlans(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetUsagePlansAsyncHelper(APIGatewayClient const * const clientThis, const GetUsagePlansRequest& request, const GetUsagePlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetUsagePlans(request), context);
}

void APIGatewayClient::GetUsagePlansAsync(const GetUsagePlansRequest& request, const GetUsagePlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetUsagePlansAsyncHelper( this, request, handler, context ); } );
}

GetVpcLinkOutcome APIGatewayClient::GetVpcLink(const GetVpcLinkRequest& request) const
{
  if (!request.VpcLinkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVpcLink", "Required field: VpcLinkId, is not set");
    return GetVpcLinkOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VpcLinkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/vpclinks/");
  uri.AddPathSegment(request.GetVpcLinkId());
  return GetVpcLinkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetVpcLinkOutcomeCallable APIGatewayClient::GetVpcLinkCallable(const GetVpcLinkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVpcLinkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVpcLink(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetVpcLinkAsyncHelper(APIGatewayClient const * const clientThis, const GetVpcLinkRequest& request, const GetVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetVpcLink(request), context);
}

void APIGatewayClient::GetVpcLinkAsync(const GetVpcLinkRequest& request, const GetVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetVpcLinkAsyncHelper( this, request, handler, context ); } );
}

GetVpcLinksOutcome APIGatewayClient::GetVpcLinks(const GetVpcLinksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/vpclinks");
  return GetVpcLinksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetVpcLinksOutcomeCallable APIGatewayClient::GetVpcLinksCallable(const GetVpcLinksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVpcLinksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVpcLinks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientGetVpcLinksAsyncHelper(APIGatewayClient const * const clientThis, const GetVpcLinksRequest& request, const GetVpcLinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetVpcLinks(request), context);
}

void APIGatewayClient::GetVpcLinksAsync(const GetVpcLinksRequest& request, const GetVpcLinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientGetVpcLinksAsyncHelper( this, request, handler, context ); } );
}

ImportApiKeysOutcome APIGatewayClient::ImportApiKeys(const ImportApiKeysRequest& request) const
{
  if (!request.FormatHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ImportApiKeys", "Required field: Format, is not set");
    return ImportApiKeysOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Format]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  uri.AddPathSegments("/apikeys");
  ss.str("?mode=import");
  uri.SetQueryString(ss.str());
  return ImportApiKeysOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportApiKeysOutcomeCallable APIGatewayClient::ImportApiKeysCallable(const ImportApiKeysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportApiKeysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportApiKeys(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientImportApiKeysAsyncHelper(APIGatewayClient const * const clientThis, const ImportApiKeysRequest& request, const ImportApiKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ImportApiKeys(request), context);
}

void APIGatewayClient::ImportApiKeysAsync(const ImportApiKeysRequest& request, const ImportApiKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientImportApiKeysAsyncHelper( this, request, handler, context ); } );
}

ImportDocumentationPartsOutcome APIGatewayClient::ImportDocumentationParts(const ImportDocumentationPartsRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ImportDocumentationParts", "Required field: RestApiId, is not set");
    return ImportDocumentationPartsOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/documentation/parts");
  return ImportDocumentationPartsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

ImportDocumentationPartsOutcomeCallable APIGatewayClient::ImportDocumentationPartsCallable(const ImportDocumentationPartsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportDocumentationPartsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportDocumentationParts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientImportDocumentationPartsAsyncHelper(APIGatewayClient const * const clientThis, const ImportDocumentationPartsRequest& request, const ImportDocumentationPartsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ImportDocumentationParts(request), context);
}

void APIGatewayClient::ImportDocumentationPartsAsync(const ImportDocumentationPartsRequest& request, const ImportDocumentationPartsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientImportDocumentationPartsAsyncHelper( this, request, handler, context ); } );
}

ImportRestApiOutcome APIGatewayClient::ImportRestApi(const ImportRestApiRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  uri.AddPathSegments("/restapis");
  ss.str("?mode=import");
  uri.SetQueryString(ss.str());
  return ImportRestApiOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportRestApiOutcomeCallable APIGatewayClient::ImportRestApiCallable(const ImportRestApiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportRestApiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportRestApi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientImportRestApiAsyncHelper(APIGatewayClient const * const clientThis, const ImportRestApiRequest& request, const ImportRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ImportRestApi(request), context);
}

void APIGatewayClient::ImportRestApiAsync(const ImportRestApiRequest& request, const ImportRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientImportRestApiAsyncHelper( this, request, handler, context ); } );
}

PutGatewayResponseOutcome APIGatewayClient::PutGatewayResponse(const PutGatewayResponseRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutGatewayResponse", "Required field: RestApiId, is not set");
    return PutGatewayResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResponseTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutGatewayResponse", "Required field: ResponseType, is not set");
    return PutGatewayResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResponseType]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/gatewayresponses/");
  uri.AddPathSegment(GatewayResponseTypeMapper::GetNameForGatewayResponseType(request.GetResponseType()));
  return PutGatewayResponseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutGatewayResponseOutcomeCallable APIGatewayClient::PutGatewayResponseCallable(const PutGatewayResponseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutGatewayResponseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutGatewayResponse(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientPutGatewayResponseAsyncHelper(APIGatewayClient const * const clientThis, const PutGatewayResponseRequest& request, const PutGatewayResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutGatewayResponse(request), context);
}

void APIGatewayClient::PutGatewayResponseAsync(const PutGatewayResponseRequest& request, const PutGatewayResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientPutGatewayResponseAsyncHelper( this, request, handler, context ); } );
}

PutIntegrationOutcome APIGatewayClient::PutIntegration(const PutIntegrationRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutIntegration", "Required field: RestApiId, is not set");
    return PutIntegrationOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutIntegration", "Required field: ResourceId, is not set");
    return PutIntegrationOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutIntegration", "Required field: HttpMethod, is not set");
    return PutIntegrationOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HttpMethod]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/resources/");
  uri.AddPathSegment(request.GetResourceId());
  uri.AddPathSegments("/methods/");
  uri.AddPathSegment(request.GetHttpMethod());
  uri.AddPathSegments("/integration");
  return PutIntegrationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutIntegrationOutcomeCallable APIGatewayClient::PutIntegrationCallable(const PutIntegrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutIntegrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutIntegration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientPutIntegrationAsyncHelper(APIGatewayClient const * const clientThis, const PutIntegrationRequest& request, const PutIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutIntegration(request), context);
}

void APIGatewayClient::PutIntegrationAsync(const PutIntegrationRequest& request, const PutIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientPutIntegrationAsyncHelper( this, request, handler, context ); } );
}

PutIntegrationResponseOutcome APIGatewayClient::PutIntegrationResponse(const PutIntegrationResponseRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutIntegrationResponse", "Required field: RestApiId, is not set");
    return PutIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutIntegrationResponse", "Required field: ResourceId, is not set");
    return PutIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutIntegrationResponse", "Required field: HttpMethod, is not set");
    return PutIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HttpMethod]", false));
  }
  if (!request.StatusCodeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutIntegrationResponse", "Required field: StatusCode, is not set");
    return PutIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StatusCode]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/resources/");
  uri.AddPathSegment(request.GetResourceId());
  uri.AddPathSegments("/methods/");
  uri.AddPathSegment(request.GetHttpMethod());
  uri.AddPathSegments("/integration/responses/");
  uri.AddPathSegment(request.GetStatusCode());
  return PutIntegrationResponseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutIntegrationResponseOutcomeCallable APIGatewayClient::PutIntegrationResponseCallable(const PutIntegrationResponseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutIntegrationResponseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutIntegrationResponse(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientPutIntegrationResponseAsyncHelper(APIGatewayClient const * const clientThis, const PutIntegrationResponseRequest& request, const PutIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutIntegrationResponse(request), context);
}

void APIGatewayClient::PutIntegrationResponseAsync(const PutIntegrationResponseRequest& request, const PutIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientPutIntegrationResponseAsyncHelper( this, request, handler, context ); } );
}

PutMethodOutcome APIGatewayClient::PutMethod(const PutMethodRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutMethod", "Required field: RestApiId, is not set");
    return PutMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutMethod", "Required field: ResourceId, is not set");
    return PutMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutMethod", "Required field: HttpMethod, is not set");
    return PutMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HttpMethod]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/resources/");
  uri.AddPathSegment(request.GetResourceId());
  uri.AddPathSegments("/methods/");
  uri.AddPathSegment(request.GetHttpMethod());
  return PutMethodOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutMethodOutcomeCallable APIGatewayClient::PutMethodCallable(const PutMethodRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutMethodOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutMethod(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientPutMethodAsyncHelper(APIGatewayClient const * const clientThis, const PutMethodRequest& request, const PutMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutMethod(request), context);
}

void APIGatewayClient::PutMethodAsync(const PutMethodRequest& request, const PutMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientPutMethodAsyncHelper( this, request, handler, context ); } );
}

PutMethodResponseOutcome APIGatewayClient::PutMethodResponse(const PutMethodResponseRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutMethodResponse", "Required field: RestApiId, is not set");
    return PutMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutMethodResponse", "Required field: ResourceId, is not set");
    return PutMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutMethodResponse", "Required field: HttpMethod, is not set");
    return PutMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HttpMethod]", false));
  }
  if (!request.StatusCodeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutMethodResponse", "Required field: StatusCode, is not set");
    return PutMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StatusCode]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/resources/");
  uri.AddPathSegment(request.GetResourceId());
  uri.AddPathSegments("/methods/");
  uri.AddPathSegment(request.GetHttpMethod());
  uri.AddPathSegments("/responses/");
  uri.AddPathSegment(request.GetStatusCode());
  return PutMethodResponseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutMethodResponseOutcomeCallable APIGatewayClient::PutMethodResponseCallable(const PutMethodResponseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutMethodResponseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutMethodResponse(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientPutMethodResponseAsyncHelper(APIGatewayClient const * const clientThis, const PutMethodResponseRequest& request, const PutMethodResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutMethodResponse(request), context);
}

void APIGatewayClient::PutMethodResponseAsync(const PutMethodResponseRequest& request, const PutMethodResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientPutMethodResponseAsyncHelper( this, request, handler, context ); } );
}

PutRestApiOutcome APIGatewayClient::PutRestApi(const PutRestApiRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutRestApi", "Required field: RestApiId, is not set");
    return PutRestApiOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  return PutRestApiOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutRestApiOutcomeCallable APIGatewayClient::PutRestApiCallable(const PutRestApiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRestApiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRestApi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientPutRestApiAsyncHelper(APIGatewayClient const * const clientThis, const PutRestApiRequest& request, const PutRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutRestApi(request), context);
}

void APIGatewayClient::PutRestApiAsync(const PutRestApiRequest& request, const PutRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientPutRestApiAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome APIGatewayClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable APIGatewayClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientTagResourceAsyncHelper(APIGatewayClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void APIGatewayClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

TestInvokeAuthorizerOutcome APIGatewayClient::TestInvokeAuthorizer(const TestInvokeAuthorizerRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TestInvokeAuthorizer", "Required field: RestApiId, is not set");
    return TestInvokeAuthorizerOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.AuthorizerIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TestInvokeAuthorizer", "Required field: AuthorizerId, is not set");
    return TestInvokeAuthorizerOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AuthorizerId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/authorizers/");
  uri.AddPathSegment(request.GetAuthorizerId());
  return TestInvokeAuthorizerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TestInvokeAuthorizerOutcomeCallable APIGatewayClient::TestInvokeAuthorizerCallable(const TestInvokeAuthorizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TestInvokeAuthorizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TestInvokeAuthorizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientTestInvokeAuthorizerAsyncHelper(APIGatewayClient const * const clientThis, const TestInvokeAuthorizerRequest& request, const TestInvokeAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TestInvokeAuthorizer(request), context);
}

void APIGatewayClient::TestInvokeAuthorizerAsync(const TestInvokeAuthorizerRequest& request, const TestInvokeAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientTestInvokeAuthorizerAsyncHelper( this, request, handler, context ); } );
}

TestInvokeMethodOutcome APIGatewayClient::TestInvokeMethod(const TestInvokeMethodRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TestInvokeMethod", "Required field: RestApiId, is not set");
    return TestInvokeMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TestInvokeMethod", "Required field: ResourceId, is not set");
    return TestInvokeMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TestInvokeMethod", "Required field: HttpMethod, is not set");
    return TestInvokeMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HttpMethod]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/resources/");
  uri.AddPathSegment(request.GetResourceId());
  uri.AddPathSegments("/methods/");
  uri.AddPathSegment(request.GetHttpMethod());
  return TestInvokeMethodOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TestInvokeMethodOutcomeCallable APIGatewayClient::TestInvokeMethodCallable(const TestInvokeMethodRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TestInvokeMethodOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TestInvokeMethod(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientTestInvokeMethodAsyncHelper(APIGatewayClient const * const clientThis, const TestInvokeMethodRequest& request, const TestInvokeMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TestInvokeMethod(request), context);
}

void APIGatewayClient::TestInvokeMethodAsync(const TestInvokeMethodRequest& request, const TestInvokeMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientTestInvokeMethodAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome APIGatewayClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable APIGatewayClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientUntagResourceAsyncHelper(APIGatewayClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void APIGatewayClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateAccountOutcome APIGatewayClient::UpdateAccount(const UpdateAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/account");
  return UpdateAccountOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateAccountOutcomeCallable APIGatewayClient::UpdateAccountCallable(const UpdateAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientUpdateAccountAsyncHelper(APIGatewayClient const * const clientThis, const UpdateAccountRequest& request, const UpdateAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAccount(request), context);
}

void APIGatewayClient::UpdateAccountAsync(const UpdateAccountRequest& request, const UpdateAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientUpdateAccountAsyncHelper( this, request, handler, context ); } );
}

UpdateApiKeyOutcome APIGatewayClient::UpdateApiKey(const UpdateApiKeyRequest& request) const
{
  if (!request.ApiKeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApiKey", "Required field: ApiKey, is not set");
    return UpdateApiKeyOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiKey]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/apikeys/");
  uri.AddPathSegment(request.GetApiKey());
  return UpdateApiKeyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateApiKeyOutcomeCallable APIGatewayClient::UpdateApiKeyCallable(const UpdateApiKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApiKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApiKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientUpdateApiKeyAsyncHelper(APIGatewayClient const * const clientThis, const UpdateApiKeyRequest& request, const UpdateApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateApiKey(request), context);
}

void APIGatewayClient::UpdateApiKeyAsync(const UpdateApiKeyRequest& request, const UpdateApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientUpdateApiKeyAsyncHelper( this, request, handler, context ); } );
}

UpdateAuthorizerOutcome APIGatewayClient::UpdateAuthorizer(const UpdateAuthorizerRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAuthorizer", "Required field: RestApiId, is not set");
    return UpdateAuthorizerOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.AuthorizerIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAuthorizer", "Required field: AuthorizerId, is not set");
    return UpdateAuthorizerOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AuthorizerId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/authorizers/");
  uri.AddPathSegment(request.GetAuthorizerId());
  return UpdateAuthorizerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateAuthorizerOutcomeCallable APIGatewayClient::UpdateAuthorizerCallable(const UpdateAuthorizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAuthorizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAuthorizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientUpdateAuthorizerAsyncHelper(APIGatewayClient const * const clientThis, const UpdateAuthorizerRequest& request, const UpdateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAuthorizer(request), context);
}

void APIGatewayClient::UpdateAuthorizerAsync(const UpdateAuthorizerRequest& request, const UpdateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientUpdateAuthorizerAsyncHelper( this, request, handler, context ); } );
}

UpdateBasePathMappingOutcome APIGatewayClient::UpdateBasePathMapping(const UpdateBasePathMappingRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBasePathMapping", "Required field: DomainName, is not set");
    return UpdateBasePathMappingOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  if (!request.BasePathHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBasePathMapping", "Required field: BasePath, is not set");
    return UpdateBasePathMappingOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BasePath]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domainnames/");
  uri.AddPathSegment(request.GetDomainName());
  uri.AddPathSegments("/basepathmappings/");
  uri.AddPathSegment(request.GetBasePath());
  return UpdateBasePathMappingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateBasePathMappingOutcomeCallable APIGatewayClient::UpdateBasePathMappingCallable(const UpdateBasePathMappingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBasePathMappingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBasePathMapping(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientUpdateBasePathMappingAsyncHelper(APIGatewayClient const * const clientThis, const UpdateBasePathMappingRequest& request, const UpdateBasePathMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateBasePathMapping(request), context);
}

void APIGatewayClient::UpdateBasePathMappingAsync(const UpdateBasePathMappingRequest& request, const UpdateBasePathMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientUpdateBasePathMappingAsyncHelper( this, request, handler, context ); } );
}

UpdateClientCertificateOutcome APIGatewayClient::UpdateClientCertificate(const UpdateClientCertificateRequest& request) const
{
  if (!request.ClientCertificateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateClientCertificate", "Required field: ClientCertificateId, is not set");
    return UpdateClientCertificateOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClientCertificateId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/clientcertificates/");
  uri.AddPathSegment(request.GetClientCertificateId());
  return UpdateClientCertificateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateClientCertificateOutcomeCallable APIGatewayClient::UpdateClientCertificateCallable(const UpdateClientCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateClientCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateClientCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientUpdateClientCertificateAsyncHelper(APIGatewayClient const * const clientThis, const UpdateClientCertificateRequest& request, const UpdateClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateClientCertificate(request), context);
}

void APIGatewayClient::UpdateClientCertificateAsync(const UpdateClientCertificateRequest& request, const UpdateClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientUpdateClientCertificateAsyncHelper( this, request, handler, context ); } );
}

UpdateDeploymentOutcome APIGatewayClient::UpdateDeployment(const UpdateDeploymentRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDeployment", "Required field: RestApiId, is not set");
    return UpdateDeploymentOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.DeploymentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDeployment", "Required field: DeploymentId, is not set");
    return UpdateDeploymentOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeploymentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/deployments/");
  uri.AddPathSegment(request.GetDeploymentId());
  return UpdateDeploymentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateDeploymentOutcomeCallable APIGatewayClient::UpdateDeploymentCallable(const UpdateDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientUpdateDeploymentAsyncHelper(APIGatewayClient const * const clientThis, const UpdateDeploymentRequest& request, const UpdateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDeployment(request), context);
}

void APIGatewayClient::UpdateDeploymentAsync(const UpdateDeploymentRequest& request, const UpdateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientUpdateDeploymentAsyncHelper( this, request, handler, context ); } );
}

UpdateDocumentationPartOutcome APIGatewayClient::UpdateDocumentationPart(const UpdateDocumentationPartRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDocumentationPart", "Required field: RestApiId, is not set");
    return UpdateDocumentationPartOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.DocumentationPartIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDocumentationPart", "Required field: DocumentationPartId, is not set");
    return UpdateDocumentationPartOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DocumentationPartId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/documentation/parts/");
  uri.AddPathSegment(request.GetDocumentationPartId());
  return UpdateDocumentationPartOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateDocumentationPartOutcomeCallable APIGatewayClient::UpdateDocumentationPartCallable(const UpdateDocumentationPartRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDocumentationPartOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDocumentationPart(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientUpdateDocumentationPartAsyncHelper(APIGatewayClient const * const clientThis, const UpdateDocumentationPartRequest& request, const UpdateDocumentationPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDocumentationPart(request), context);
}

void APIGatewayClient::UpdateDocumentationPartAsync(const UpdateDocumentationPartRequest& request, const UpdateDocumentationPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientUpdateDocumentationPartAsyncHelper( this, request, handler, context ); } );
}

UpdateDocumentationVersionOutcome APIGatewayClient::UpdateDocumentationVersion(const UpdateDocumentationVersionRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDocumentationVersion", "Required field: RestApiId, is not set");
    return UpdateDocumentationVersionOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.DocumentationVersionHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDocumentationVersion", "Required field: DocumentationVersion, is not set");
    return UpdateDocumentationVersionOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DocumentationVersion]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/documentation/versions/");
  uri.AddPathSegment(request.GetDocumentationVersion());
  return UpdateDocumentationVersionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateDocumentationVersionOutcomeCallable APIGatewayClient::UpdateDocumentationVersionCallable(const UpdateDocumentationVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDocumentationVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDocumentationVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientUpdateDocumentationVersionAsyncHelper(APIGatewayClient const * const clientThis, const UpdateDocumentationVersionRequest& request, const UpdateDocumentationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDocumentationVersion(request), context);
}

void APIGatewayClient::UpdateDocumentationVersionAsync(const UpdateDocumentationVersionRequest& request, const UpdateDocumentationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientUpdateDocumentationVersionAsyncHelper( this, request, handler, context ); } );
}

UpdateDomainNameOutcome APIGatewayClient::UpdateDomainName(const UpdateDomainNameRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDomainName", "Required field: DomainName, is not set");
    return UpdateDomainNameOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/domainnames/");
  uri.AddPathSegment(request.GetDomainName());
  return UpdateDomainNameOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateDomainNameOutcomeCallable APIGatewayClient::UpdateDomainNameCallable(const UpdateDomainNameRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDomainNameOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDomainName(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientUpdateDomainNameAsyncHelper(APIGatewayClient const * const clientThis, const UpdateDomainNameRequest& request, const UpdateDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDomainName(request), context);
}

void APIGatewayClient::UpdateDomainNameAsync(const UpdateDomainNameRequest& request, const UpdateDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientUpdateDomainNameAsyncHelper( this, request, handler, context ); } );
}

UpdateGatewayResponseOutcome APIGatewayClient::UpdateGatewayResponse(const UpdateGatewayResponseRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateGatewayResponse", "Required field: RestApiId, is not set");
    return UpdateGatewayResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResponseTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateGatewayResponse", "Required field: ResponseType, is not set");
    return UpdateGatewayResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResponseType]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/gatewayresponses/");
  uri.AddPathSegment(GatewayResponseTypeMapper::GetNameForGatewayResponseType(request.GetResponseType()));
  return UpdateGatewayResponseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateGatewayResponseOutcomeCallable APIGatewayClient::UpdateGatewayResponseCallable(const UpdateGatewayResponseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGatewayResponseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGatewayResponse(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientUpdateGatewayResponseAsyncHelper(APIGatewayClient const * const clientThis, const UpdateGatewayResponseRequest& request, const UpdateGatewayResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateGatewayResponse(request), context);
}

void APIGatewayClient::UpdateGatewayResponseAsync(const UpdateGatewayResponseRequest& request, const UpdateGatewayResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientUpdateGatewayResponseAsyncHelper( this, request, handler, context ); } );
}

UpdateIntegrationOutcome APIGatewayClient::UpdateIntegration(const UpdateIntegrationRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIntegration", "Required field: RestApiId, is not set");
    return UpdateIntegrationOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIntegration", "Required field: ResourceId, is not set");
    return UpdateIntegrationOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIntegration", "Required field: HttpMethod, is not set");
    return UpdateIntegrationOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HttpMethod]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/resources/");
  uri.AddPathSegment(request.GetResourceId());
  uri.AddPathSegments("/methods/");
  uri.AddPathSegment(request.GetHttpMethod());
  uri.AddPathSegments("/integration");
  return UpdateIntegrationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateIntegrationOutcomeCallable APIGatewayClient::UpdateIntegrationCallable(const UpdateIntegrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateIntegrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateIntegration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientUpdateIntegrationAsyncHelper(APIGatewayClient const * const clientThis, const UpdateIntegrationRequest& request, const UpdateIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateIntegration(request), context);
}

void APIGatewayClient::UpdateIntegrationAsync(const UpdateIntegrationRequest& request, const UpdateIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientUpdateIntegrationAsyncHelper( this, request, handler, context ); } );
}

UpdateIntegrationResponseOutcome APIGatewayClient::UpdateIntegrationResponse(const UpdateIntegrationResponseRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIntegrationResponse", "Required field: RestApiId, is not set");
    return UpdateIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIntegrationResponse", "Required field: ResourceId, is not set");
    return UpdateIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIntegrationResponse", "Required field: HttpMethod, is not set");
    return UpdateIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HttpMethod]", false));
  }
  if (!request.StatusCodeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIntegrationResponse", "Required field: StatusCode, is not set");
    return UpdateIntegrationResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StatusCode]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/resources/");
  uri.AddPathSegment(request.GetResourceId());
  uri.AddPathSegments("/methods/");
  uri.AddPathSegment(request.GetHttpMethod());
  uri.AddPathSegments("/integration/responses/");
  uri.AddPathSegment(request.GetStatusCode());
  return UpdateIntegrationResponseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateIntegrationResponseOutcomeCallable APIGatewayClient::UpdateIntegrationResponseCallable(const UpdateIntegrationResponseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateIntegrationResponseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateIntegrationResponse(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientUpdateIntegrationResponseAsyncHelper(APIGatewayClient const * const clientThis, const UpdateIntegrationResponseRequest& request, const UpdateIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateIntegrationResponse(request), context);
}

void APIGatewayClient::UpdateIntegrationResponseAsync(const UpdateIntegrationResponseRequest& request, const UpdateIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientUpdateIntegrationResponseAsyncHelper( this, request, handler, context ); } );
}

UpdateMethodOutcome APIGatewayClient::UpdateMethod(const UpdateMethodRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMethod", "Required field: RestApiId, is not set");
    return UpdateMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMethod", "Required field: ResourceId, is not set");
    return UpdateMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMethod", "Required field: HttpMethod, is not set");
    return UpdateMethodOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HttpMethod]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/resources/");
  uri.AddPathSegment(request.GetResourceId());
  uri.AddPathSegments("/methods/");
  uri.AddPathSegment(request.GetHttpMethod());
  return UpdateMethodOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateMethodOutcomeCallable APIGatewayClient::UpdateMethodCallable(const UpdateMethodRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMethodOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMethod(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientUpdateMethodAsyncHelper(APIGatewayClient const * const clientThis, const UpdateMethodRequest& request, const UpdateMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateMethod(request), context);
}

void APIGatewayClient::UpdateMethodAsync(const UpdateMethodRequest& request, const UpdateMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientUpdateMethodAsyncHelper( this, request, handler, context ); } );
}

UpdateMethodResponseOutcome APIGatewayClient::UpdateMethodResponse(const UpdateMethodResponseRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMethodResponse", "Required field: RestApiId, is not set");
    return UpdateMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMethodResponse", "Required field: ResourceId, is not set");
    return UpdateMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  if (!request.HttpMethodHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMethodResponse", "Required field: HttpMethod, is not set");
    return UpdateMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [HttpMethod]", false));
  }
  if (!request.StatusCodeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateMethodResponse", "Required field: StatusCode, is not set");
    return UpdateMethodResponseOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StatusCode]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/resources/");
  uri.AddPathSegment(request.GetResourceId());
  uri.AddPathSegments("/methods/");
  uri.AddPathSegment(request.GetHttpMethod());
  uri.AddPathSegments("/responses/");
  uri.AddPathSegment(request.GetStatusCode());
  return UpdateMethodResponseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateMethodResponseOutcomeCallable APIGatewayClient::UpdateMethodResponseCallable(const UpdateMethodResponseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMethodResponseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMethodResponse(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientUpdateMethodResponseAsyncHelper(APIGatewayClient const * const clientThis, const UpdateMethodResponseRequest& request, const UpdateMethodResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateMethodResponse(request), context);
}

void APIGatewayClient::UpdateMethodResponseAsync(const UpdateMethodResponseRequest& request, const UpdateMethodResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientUpdateMethodResponseAsyncHelper( this, request, handler, context ); } );
}

UpdateModelOutcome APIGatewayClient::UpdateModel(const UpdateModelRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateModel", "Required field: RestApiId, is not set");
    return UpdateModelOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ModelNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateModel", "Required field: ModelName, is not set");
    return UpdateModelOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ModelName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/models/");
  uri.AddPathSegment(request.GetModelName());
  return UpdateModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateModelOutcomeCallable APIGatewayClient::UpdateModelCallable(const UpdateModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientUpdateModelAsyncHelper(APIGatewayClient const * const clientThis, const UpdateModelRequest& request, const UpdateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateModel(request), context);
}

void APIGatewayClient::UpdateModelAsync(const UpdateModelRequest& request, const UpdateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientUpdateModelAsyncHelper( this, request, handler, context ); } );
}

UpdateRequestValidatorOutcome APIGatewayClient::UpdateRequestValidator(const UpdateRequestValidatorRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRequestValidator", "Required field: RestApiId, is not set");
    return UpdateRequestValidatorOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.RequestValidatorIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRequestValidator", "Required field: RequestValidatorId, is not set");
    return UpdateRequestValidatorOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RequestValidatorId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/requestvalidators/");
  uri.AddPathSegment(request.GetRequestValidatorId());
  return UpdateRequestValidatorOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateRequestValidatorOutcomeCallable APIGatewayClient::UpdateRequestValidatorCallable(const UpdateRequestValidatorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRequestValidatorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRequestValidator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientUpdateRequestValidatorAsyncHelper(APIGatewayClient const * const clientThis, const UpdateRequestValidatorRequest& request, const UpdateRequestValidatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRequestValidator(request), context);
}

void APIGatewayClient::UpdateRequestValidatorAsync(const UpdateRequestValidatorRequest& request, const UpdateRequestValidatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientUpdateRequestValidatorAsyncHelper( this, request, handler, context ); } );
}

UpdateResourceOutcome APIGatewayClient::UpdateResource(const UpdateResourceRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateResource", "Required field: RestApiId, is not set");
    return UpdateResourceOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.ResourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateResource", "Required field: ResourceId, is not set");
    return UpdateResourceOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/resources/");
  uri.AddPathSegment(request.GetResourceId());
  return UpdateResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateResourceOutcomeCallable APIGatewayClient::UpdateResourceCallable(const UpdateResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientUpdateResourceAsyncHelper(APIGatewayClient const * const clientThis, const UpdateResourceRequest& request, const UpdateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateResource(request), context);
}

void APIGatewayClient::UpdateResourceAsync(const UpdateResourceRequest& request, const UpdateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientUpdateResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateRestApiOutcome APIGatewayClient::UpdateRestApi(const UpdateRestApiRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRestApi", "Required field: RestApiId, is not set");
    return UpdateRestApiOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  return UpdateRestApiOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateRestApiOutcomeCallable APIGatewayClient::UpdateRestApiCallable(const UpdateRestApiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRestApiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRestApi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientUpdateRestApiAsyncHelper(APIGatewayClient const * const clientThis, const UpdateRestApiRequest& request, const UpdateRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateRestApi(request), context);
}

void APIGatewayClient::UpdateRestApiAsync(const UpdateRestApiRequest& request, const UpdateRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientUpdateRestApiAsyncHelper( this, request, handler, context ); } );
}

UpdateStageOutcome APIGatewayClient::UpdateStage(const UpdateStageRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateStage", "Required field: RestApiId, is not set");
    return UpdateStageOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  if (!request.StageNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateStage", "Required field: StageName, is not set");
    return UpdateStageOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StageName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/restapis/");
  uri.AddPathSegment(request.GetRestApiId());
  uri.AddPathSegments("/stages/");
  uri.AddPathSegment(request.GetStageName());
  return UpdateStageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateStageOutcomeCallable APIGatewayClient::UpdateStageCallable(const UpdateStageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientUpdateStageAsyncHelper(APIGatewayClient const * const clientThis, const UpdateStageRequest& request, const UpdateStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateStage(request), context);
}

void APIGatewayClient::UpdateStageAsync(const UpdateStageRequest& request, const UpdateStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientUpdateStageAsyncHelper( this, request, handler, context ); } );
}

UpdateUsageOutcome APIGatewayClient::UpdateUsage(const UpdateUsageRequest& request) const
{
  if (!request.UsagePlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUsage", "Required field: UsagePlanId, is not set");
    return UpdateUsageOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UsagePlanId]", false));
  }
  if (!request.KeyIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUsage", "Required field: KeyId, is not set");
    return UpdateUsageOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KeyId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/usageplans/");
  uri.AddPathSegment(request.GetUsagePlanId());
  uri.AddPathSegments("/keys/");
  uri.AddPathSegment(request.GetKeyId());
  uri.AddPathSegments("/usage");
  return UpdateUsageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateUsageOutcomeCallable APIGatewayClient::UpdateUsageCallable(const UpdateUsageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUsageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUsage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientUpdateUsageAsyncHelper(APIGatewayClient const * const clientThis, const UpdateUsageRequest& request, const UpdateUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateUsage(request), context);
}

void APIGatewayClient::UpdateUsageAsync(const UpdateUsageRequest& request, const UpdateUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientUpdateUsageAsyncHelper( this, request, handler, context ); } );
}

UpdateUsagePlanOutcome APIGatewayClient::UpdateUsagePlan(const UpdateUsagePlanRequest& request) const
{
  if (!request.UsagePlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUsagePlan", "Required field: UsagePlanId, is not set");
    return UpdateUsagePlanOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UsagePlanId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/usageplans/");
  uri.AddPathSegment(request.GetUsagePlanId());
  return UpdateUsagePlanOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateUsagePlanOutcomeCallable APIGatewayClient::UpdateUsagePlanCallable(const UpdateUsagePlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUsagePlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUsagePlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientUpdateUsagePlanAsyncHelper(APIGatewayClient const * const clientThis, const UpdateUsagePlanRequest& request, const UpdateUsagePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateUsagePlan(request), context);
}

void APIGatewayClient::UpdateUsagePlanAsync(const UpdateUsagePlanRequest& request, const UpdateUsagePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientUpdateUsagePlanAsyncHelper( this, request, handler, context ); } );
}

UpdateVpcLinkOutcome APIGatewayClient::UpdateVpcLink(const UpdateVpcLinkRequest& request) const
{
  if (!request.VpcLinkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateVpcLink", "Required field: VpcLinkId, is not set");
    return UpdateVpcLinkOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VpcLinkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/vpclinks/");
  uri.AddPathSegment(request.GetVpcLinkId());
  return UpdateVpcLinkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateVpcLinkOutcomeCallable APIGatewayClient::UpdateVpcLinkCallable(const UpdateVpcLinkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVpcLinkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVpcLink(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClientUpdateVpcLinkAsyncHelper(APIGatewayClient const * const clientThis, const UpdateVpcLinkRequest& request, const UpdateVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateVpcLink(request), context);
}

void APIGatewayClient::UpdateVpcLinkAsync(const UpdateVpcLinkRequest& request, const UpdateVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ APIGatewayClientUpdateVpcLinkAsyncHelper( this, request, handler, context ); } );
}

