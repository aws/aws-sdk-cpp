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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<APIGatewayErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

APIGatewayClient::APIGatewayClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<APIGatewayErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

APIGatewayClient::APIGatewayClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<APIGatewayErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

APIGatewayClient::~APIGatewayClient()
{
}

void APIGatewayClient::init(const ClientConfiguration& config)
{
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
  Aws::StringStream ss;
  ss << "/apikeys";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateApiKeyOutcome(CreateApiKeyResult(outcome.GetResult()));
  }
  else
  {
    return CreateApiKeyOutcome(outcome.GetError());
  }
}

CreateApiKeyOutcomeCallable APIGatewayClient::CreateApiKeyCallable(const CreateApiKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateApiKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApiKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::CreateApiKeyAsync(const CreateApiKeyRequest& request, const CreateApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateApiKeyAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::CreateApiKeyAsyncHelper(const CreateApiKeyRequest& request, const CreateApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateApiKey(request), context);
}

CreateAuthorizerOutcome APIGatewayClient::CreateAuthorizer(const CreateAuthorizerRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAuthorizer", "Required field: RestApiId, is not set");
    return CreateAuthorizerOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/authorizers";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateAuthorizerOutcome(CreateAuthorizerResult(outcome.GetResult()));
  }
  else
  {
    return CreateAuthorizerOutcome(outcome.GetError());
  }
}

CreateAuthorizerOutcomeCallable APIGatewayClient::CreateAuthorizerCallable(const CreateAuthorizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAuthorizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAuthorizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::CreateAuthorizerAsync(const CreateAuthorizerRequest& request, const CreateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAuthorizerAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::CreateAuthorizerAsyncHelper(const CreateAuthorizerRequest& request, const CreateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAuthorizer(request), context);
}

CreateBasePathMappingOutcome APIGatewayClient::CreateBasePathMapping(const CreateBasePathMappingRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateBasePathMapping", "Required field: DomainName, is not set");
    return CreateBasePathMappingOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/domainnames/";
  ss << request.GetDomainName();
  ss << "/basepathmappings";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateBasePathMappingOutcome(CreateBasePathMappingResult(outcome.GetResult()));
  }
  else
  {
    return CreateBasePathMappingOutcome(outcome.GetError());
  }
}

CreateBasePathMappingOutcomeCallable APIGatewayClient::CreateBasePathMappingCallable(const CreateBasePathMappingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateBasePathMappingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateBasePathMapping(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::CreateBasePathMappingAsync(const CreateBasePathMappingRequest& request, const CreateBasePathMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateBasePathMappingAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::CreateBasePathMappingAsyncHelper(const CreateBasePathMappingRequest& request, const CreateBasePathMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateBasePathMapping(request), context);
}

CreateDeploymentOutcome APIGatewayClient::CreateDeployment(const CreateDeploymentRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDeployment", "Required field: RestApiId, is not set");
    return CreateDeploymentOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/deployments";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDeploymentOutcome(CreateDeploymentResult(outcome.GetResult()));
  }
  else
  {
    return CreateDeploymentOutcome(outcome.GetError());
  }
}

CreateDeploymentOutcomeCallable APIGatewayClient::CreateDeploymentCallable(const CreateDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::CreateDeploymentAsync(const CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDeploymentAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::CreateDeploymentAsyncHelper(const CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDeployment(request), context);
}

CreateDocumentationPartOutcome APIGatewayClient::CreateDocumentationPart(const CreateDocumentationPartRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDocumentationPart", "Required field: RestApiId, is not set");
    return CreateDocumentationPartOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/documentation/parts";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDocumentationPartOutcome(CreateDocumentationPartResult(outcome.GetResult()));
  }
  else
  {
    return CreateDocumentationPartOutcome(outcome.GetError());
  }
}

CreateDocumentationPartOutcomeCallable APIGatewayClient::CreateDocumentationPartCallable(const CreateDocumentationPartRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDocumentationPartOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDocumentationPart(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::CreateDocumentationPartAsync(const CreateDocumentationPartRequest& request, const CreateDocumentationPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDocumentationPartAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::CreateDocumentationPartAsyncHelper(const CreateDocumentationPartRequest& request, const CreateDocumentationPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDocumentationPart(request), context);
}

CreateDocumentationVersionOutcome APIGatewayClient::CreateDocumentationVersion(const CreateDocumentationVersionRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDocumentationVersion", "Required field: RestApiId, is not set");
    return CreateDocumentationVersionOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/documentation/versions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDocumentationVersionOutcome(CreateDocumentationVersionResult(outcome.GetResult()));
  }
  else
  {
    return CreateDocumentationVersionOutcome(outcome.GetError());
  }
}

CreateDocumentationVersionOutcomeCallable APIGatewayClient::CreateDocumentationVersionCallable(const CreateDocumentationVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDocumentationVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDocumentationVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::CreateDocumentationVersionAsync(const CreateDocumentationVersionRequest& request, const CreateDocumentationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDocumentationVersionAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::CreateDocumentationVersionAsyncHelper(const CreateDocumentationVersionRequest& request, const CreateDocumentationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDocumentationVersion(request), context);
}

CreateDomainNameOutcome APIGatewayClient::CreateDomainName(const CreateDomainNameRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/domainnames";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDomainNameOutcome(CreateDomainNameResult(outcome.GetResult()));
  }
  else
  {
    return CreateDomainNameOutcome(outcome.GetError());
  }
}

CreateDomainNameOutcomeCallable APIGatewayClient::CreateDomainNameCallable(const CreateDomainNameRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDomainNameOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDomainName(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::CreateDomainNameAsync(const CreateDomainNameRequest& request, const CreateDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDomainNameAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::CreateDomainNameAsyncHelper(const CreateDomainNameRequest& request, const CreateDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDomainName(request), context);
}

CreateModelOutcome APIGatewayClient::CreateModel(const CreateModelRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateModel", "Required field: RestApiId, is not set");
    return CreateModelOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/models";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateModelOutcome(CreateModelResult(outcome.GetResult()));
  }
  else
  {
    return CreateModelOutcome(outcome.GetError());
  }
}

CreateModelOutcomeCallable APIGatewayClient::CreateModelCallable(const CreateModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::CreateModelAsync(const CreateModelRequest& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateModelAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::CreateModelAsyncHelper(const CreateModelRequest& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateModel(request), context);
}

CreateRequestValidatorOutcome APIGatewayClient::CreateRequestValidator(const CreateRequestValidatorRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateRequestValidator", "Required field: RestApiId, is not set");
    return CreateRequestValidatorOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/requestvalidators";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateRequestValidatorOutcome(CreateRequestValidatorResult(outcome.GetResult()));
  }
  else
  {
    return CreateRequestValidatorOutcome(outcome.GetError());
  }
}

CreateRequestValidatorOutcomeCallable APIGatewayClient::CreateRequestValidatorCallable(const CreateRequestValidatorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRequestValidatorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRequestValidator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::CreateRequestValidatorAsync(const CreateRequestValidatorRequest& request, const CreateRequestValidatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateRequestValidatorAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::CreateRequestValidatorAsyncHelper(const CreateRequestValidatorRequest& request, const CreateRequestValidatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRequestValidator(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/resources/";
  ss << request.GetParentId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateResourceOutcome(CreateResourceResult(outcome.GetResult()));
  }
  else
  {
    return CreateResourceOutcome(outcome.GetError());
  }
}

CreateResourceOutcomeCallable APIGatewayClient::CreateResourceCallable(const CreateResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::CreateResourceAsync(const CreateResourceRequest& request, const CreateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateResourceAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::CreateResourceAsyncHelper(const CreateResourceRequest& request, const CreateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateResource(request), context);
}

CreateRestApiOutcome APIGatewayClient::CreateRestApi(const CreateRestApiRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/restapis";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateRestApiOutcome(CreateRestApiResult(outcome.GetResult()));
  }
  else
  {
    return CreateRestApiOutcome(outcome.GetError());
  }
}

CreateRestApiOutcomeCallable APIGatewayClient::CreateRestApiCallable(const CreateRestApiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRestApiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRestApi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::CreateRestApiAsync(const CreateRestApiRequest& request, const CreateRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateRestApiAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::CreateRestApiAsyncHelper(const CreateRestApiRequest& request, const CreateRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRestApi(request), context);
}

CreateStageOutcome APIGatewayClient::CreateStage(const CreateStageRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateStage", "Required field: RestApiId, is not set");
    return CreateStageOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/stages";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateStageOutcome(CreateStageResult(outcome.GetResult()));
  }
  else
  {
    return CreateStageOutcome(outcome.GetError());
  }
}

CreateStageOutcomeCallable APIGatewayClient::CreateStageCallable(const CreateStageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::CreateStageAsync(const CreateStageRequest& request, const CreateStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateStageAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::CreateStageAsyncHelper(const CreateStageRequest& request, const CreateStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateStage(request), context);
}

CreateUsagePlanOutcome APIGatewayClient::CreateUsagePlan(const CreateUsagePlanRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/usageplans";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateUsagePlanOutcome(CreateUsagePlanResult(outcome.GetResult()));
  }
  else
  {
    return CreateUsagePlanOutcome(outcome.GetError());
  }
}

CreateUsagePlanOutcomeCallable APIGatewayClient::CreateUsagePlanCallable(const CreateUsagePlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUsagePlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUsagePlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::CreateUsagePlanAsync(const CreateUsagePlanRequest& request, const CreateUsagePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateUsagePlanAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::CreateUsagePlanAsyncHelper(const CreateUsagePlanRequest& request, const CreateUsagePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateUsagePlan(request), context);
}

CreateUsagePlanKeyOutcome APIGatewayClient::CreateUsagePlanKey(const CreateUsagePlanKeyRequest& request) const
{
  if (!request.UsagePlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateUsagePlanKey", "Required field: UsagePlanId, is not set");
    return CreateUsagePlanKeyOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UsagePlanId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/usageplans/";
  ss << request.GetUsagePlanId();
  ss << "/keys";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateUsagePlanKeyOutcome(CreateUsagePlanKeyResult(outcome.GetResult()));
  }
  else
  {
    return CreateUsagePlanKeyOutcome(outcome.GetError());
  }
}

CreateUsagePlanKeyOutcomeCallable APIGatewayClient::CreateUsagePlanKeyCallable(const CreateUsagePlanKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateUsagePlanKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateUsagePlanKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::CreateUsagePlanKeyAsync(const CreateUsagePlanKeyRequest& request, const CreateUsagePlanKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateUsagePlanKeyAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::CreateUsagePlanKeyAsyncHelper(const CreateUsagePlanKeyRequest& request, const CreateUsagePlanKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateUsagePlanKey(request), context);
}

CreateVpcLinkOutcome APIGatewayClient::CreateVpcLink(const CreateVpcLinkRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/vpclinks";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateVpcLinkOutcome(CreateVpcLinkResult(outcome.GetResult()));
  }
  else
  {
    return CreateVpcLinkOutcome(outcome.GetError());
  }
}

CreateVpcLinkOutcomeCallable APIGatewayClient::CreateVpcLinkCallable(const CreateVpcLinkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVpcLinkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVpcLink(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::CreateVpcLinkAsync(const CreateVpcLinkRequest& request, const CreateVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateVpcLinkAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::CreateVpcLinkAsyncHelper(const CreateVpcLinkRequest& request, const CreateVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVpcLink(request), context);
}

DeleteApiKeyOutcome APIGatewayClient::DeleteApiKey(const DeleteApiKeyRequest& request) const
{
  if (!request.ApiKeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApiKey", "Required field: ApiKey, is not set");
    return DeleteApiKeyOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiKey]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/apikeys/";
  ss << request.GetApiKey();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteApiKeyOutcome(NoResult());
  }
  else
  {
    return DeleteApiKeyOutcome(outcome.GetError());
  }
}

DeleteApiKeyOutcomeCallable APIGatewayClient::DeleteApiKeyCallable(const DeleteApiKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApiKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApiKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::DeleteApiKeyAsync(const DeleteApiKeyRequest& request, const DeleteApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteApiKeyAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::DeleteApiKeyAsyncHelper(const DeleteApiKeyRequest& request, const DeleteApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteApiKey(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/authorizers/";
  ss << request.GetAuthorizerId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteAuthorizerOutcome(NoResult());
  }
  else
  {
    return DeleteAuthorizerOutcome(outcome.GetError());
  }
}

DeleteAuthorizerOutcomeCallable APIGatewayClient::DeleteAuthorizerCallable(const DeleteAuthorizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAuthorizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAuthorizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::DeleteAuthorizerAsync(const DeleteAuthorizerRequest& request, const DeleteAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAuthorizerAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::DeleteAuthorizerAsyncHelper(const DeleteAuthorizerRequest& request, const DeleteAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAuthorizer(request), context);
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
  Aws::StringStream ss;
  ss << "/domainnames/";
  ss << request.GetDomainName();
  ss << "/basepathmappings/";
  ss << request.GetBasePath();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteBasePathMappingOutcome(NoResult());
  }
  else
  {
    return DeleteBasePathMappingOutcome(outcome.GetError());
  }
}

DeleteBasePathMappingOutcomeCallable APIGatewayClient::DeleteBasePathMappingCallable(const DeleteBasePathMappingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteBasePathMappingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteBasePathMapping(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::DeleteBasePathMappingAsync(const DeleteBasePathMappingRequest& request, const DeleteBasePathMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteBasePathMappingAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::DeleteBasePathMappingAsyncHelper(const DeleteBasePathMappingRequest& request, const DeleteBasePathMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteBasePathMapping(request), context);
}

DeleteClientCertificateOutcome APIGatewayClient::DeleteClientCertificate(const DeleteClientCertificateRequest& request) const
{
  if (!request.ClientCertificateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteClientCertificate", "Required field: ClientCertificateId, is not set");
    return DeleteClientCertificateOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClientCertificateId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/clientcertificates/";
  ss << request.GetClientCertificateId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteClientCertificateOutcome(NoResult());
  }
  else
  {
    return DeleteClientCertificateOutcome(outcome.GetError());
  }
}

DeleteClientCertificateOutcomeCallable APIGatewayClient::DeleteClientCertificateCallable(const DeleteClientCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteClientCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteClientCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::DeleteClientCertificateAsync(const DeleteClientCertificateRequest& request, const DeleteClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteClientCertificateAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::DeleteClientCertificateAsyncHelper(const DeleteClientCertificateRequest& request, const DeleteClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteClientCertificate(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/deployments/";
  ss << request.GetDeploymentId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDeploymentOutcome(NoResult());
  }
  else
  {
    return DeleteDeploymentOutcome(outcome.GetError());
  }
}

DeleteDeploymentOutcomeCallable APIGatewayClient::DeleteDeploymentCallable(const DeleteDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::DeleteDeploymentAsync(const DeleteDeploymentRequest& request, const DeleteDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDeploymentAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::DeleteDeploymentAsyncHelper(const DeleteDeploymentRequest& request, const DeleteDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDeployment(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/documentation/parts/";
  ss << request.GetDocumentationPartId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDocumentationPartOutcome(NoResult());
  }
  else
  {
    return DeleteDocumentationPartOutcome(outcome.GetError());
  }
}

DeleteDocumentationPartOutcomeCallable APIGatewayClient::DeleteDocumentationPartCallable(const DeleteDocumentationPartRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDocumentationPartOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDocumentationPart(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::DeleteDocumentationPartAsync(const DeleteDocumentationPartRequest& request, const DeleteDocumentationPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDocumentationPartAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::DeleteDocumentationPartAsyncHelper(const DeleteDocumentationPartRequest& request, const DeleteDocumentationPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDocumentationPart(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/documentation/versions/";
  ss << request.GetDocumentationVersion();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDocumentationVersionOutcome(NoResult());
  }
  else
  {
    return DeleteDocumentationVersionOutcome(outcome.GetError());
  }
}

DeleteDocumentationVersionOutcomeCallable APIGatewayClient::DeleteDocumentationVersionCallable(const DeleteDocumentationVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDocumentationVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDocumentationVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::DeleteDocumentationVersionAsync(const DeleteDocumentationVersionRequest& request, const DeleteDocumentationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDocumentationVersionAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::DeleteDocumentationVersionAsyncHelper(const DeleteDocumentationVersionRequest& request, const DeleteDocumentationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDocumentationVersion(request), context);
}

DeleteDomainNameOutcome APIGatewayClient::DeleteDomainName(const DeleteDomainNameRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDomainName", "Required field: DomainName, is not set");
    return DeleteDomainNameOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/domainnames/";
  ss << request.GetDomainName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDomainNameOutcome(NoResult());
  }
  else
  {
    return DeleteDomainNameOutcome(outcome.GetError());
  }
}

DeleteDomainNameOutcomeCallable APIGatewayClient::DeleteDomainNameCallable(const DeleteDomainNameRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDomainNameOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDomainName(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::DeleteDomainNameAsync(const DeleteDomainNameRequest& request, const DeleteDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDomainNameAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::DeleteDomainNameAsyncHelper(const DeleteDomainNameRequest& request, const DeleteDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDomainName(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/gatewayresponses/";
  ss << GatewayResponseTypeMapper::GetNameForGatewayResponseType(request.GetResponseType());
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteGatewayResponseOutcome(NoResult());
  }
  else
  {
    return DeleteGatewayResponseOutcome(outcome.GetError());
  }
}

DeleteGatewayResponseOutcomeCallable APIGatewayClient::DeleteGatewayResponseCallable(const DeleteGatewayResponseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteGatewayResponseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteGatewayResponse(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::DeleteGatewayResponseAsync(const DeleteGatewayResponseRequest& request, const DeleteGatewayResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteGatewayResponseAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::DeleteGatewayResponseAsyncHelper(const DeleteGatewayResponseRequest& request, const DeleteGatewayResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteGatewayResponse(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/resources/";
  ss << request.GetResourceId();
  ss << "/methods/";
  ss << request.GetHttpMethod();
  ss << "/integration";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteIntegrationOutcome(NoResult());
  }
  else
  {
    return DeleteIntegrationOutcome(outcome.GetError());
  }
}

DeleteIntegrationOutcomeCallable APIGatewayClient::DeleteIntegrationCallable(const DeleteIntegrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIntegrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIntegration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::DeleteIntegrationAsync(const DeleteIntegrationRequest& request, const DeleteIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteIntegrationAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::DeleteIntegrationAsyncHelper(const DeleteIntegrationRequest& request, const DeleteIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteIntegration(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/resources/";
  ss << request.GetResourceId();
  ss << "/methods/";
  ss << request.GetHttpMethod();
  ss << "/integration/responses/";
  ss << request.GetStatusCode();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteIntegrationResponseOutcome(NoResult());
  }
  else
  {
    return DeleteIntegrationResponseOutcome(outcome.GetError());
  }
}

DeleteIntegrationResponseOutcomeCallable APIGatewayClient::DeleteIntegrationResponseCallable(const DeleteIntegrationResponseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIntegrationResponseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIntegrationResponse(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::DeleteIntegrationResponseAsync(const DeleteIntegrationResponseRequest& request, const DeleteIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteIntegrationResponseAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::DeleteIntegrationResponseAsyncHelper(const DeleteIntegrationResponseRequest& request, const DeleteIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteIntegrationResponse(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/resources/";
  ss << request.GetResourceId();
  ss << "/methods/";
  ss << request.GetHttpMethod();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteMethodOutcome(NoResult());
  }
  else
  {
    return DeleteMethodOutcome(outcome.GetError());
  }
}

DeleteMethodOutcomeCallable APIGatewayClient::DeleteMethodCallable(const DeleteMethodRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMethodOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMethod(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::DeleteMethodAsync(const DeleteMethodRequest& request, const DeleteMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteMethodAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::DeleteMethodAsyncHelper(const DeleteMethodRequest& request, const DeleteMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteMethod(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/resources/";
  ss << request.GetResourceId();
  ss << "/methods/";
  ss << request.GetHttpMethod();
  ss << "/responses/";
  ss << request.GetStatusCode();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteMethodResponseOutcome(NoResult());
  }
  else
  {
    return DeleteMethodResponseOutcome(outcome.GetError());
  }
}

DeleteMethodResponseOutcomeCallable APIGatewayClient::DeleteMethodResponseCallable(const DeleteMethodResponseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMethodResponseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMethodResponse(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::DeleteMethodResponseAsync(const DeleteMethodResponseRequest& request, const DeleteMethodResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteMethodResponseAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::DeleteMethodResponseAsyncHelper(const DeleteMethodResponseRequest& request, const DeleteMethodResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteMethodResponse(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/models/";
  ss << request.GetModelName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteModelOutcome(NoResult());
  }
  else
  {
    return DeleteModelOutcome(outcome.GetError());
  }
}

DeleteModelOutcomeCallable APIGatewayClient::DeleteModelCallable(const DeleteModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::DeleteModelAsync(const DeleteModelRequest& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteModelAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::DeleteModelAsyncHelper(const DeleteModelRequest& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteModel(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/requestvalidators/";
  ss << request.GetRequestValidatorId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteRequestValidatorOutcome(NoResult());
  }
  else
  {
    return DeleteRequestValidatorOutcome(outcome.GetError());
  }
}

DeleteRequestValidatorOutcomeCallable APIGatewayClient::DeleteRequestValidatorCallable(const DeleteRequestValidatorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRequestValidatorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRequestValidator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::DeleteRequestValidatorAsync(const DeleteRequestValidatorRequest& request, const DeleteRequestValidatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRequestValidatorAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::DeleteRequestValidatorAsyncHelper(const DeleteRequestValidatorRequest& request, const DeleteRequestValidatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRequestValidator(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/resources/";
  ss << request.GetResourceId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteResourceOutcome(NoResult());
  }
  else
  {
    return DeleteResourceOutcome(outcome.GetError());
  }
}

DeleteResourceOutcomeCallable APIGatewayClient::DeleteResourceCallable(const DeleteResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::DeleteResourceAsync(const DeleteResourceRequest& request, const DeleteResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteResourceAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::DeleteResourceAsyncHelper(const DeleteResourceRequest& request, const DeleteResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteResource(request), context);
}

DeleteRestApiOutcome APIGatewayClient::DeleteRestApi(const DeleteRestApiRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRestApi", "Required field: RestApiId, is not set");
    return DeleteRestApiOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteRestApiOutcome(NoResult());
  }
  else
  {
    return DeleteRestApiOutcome(outcome.GetError());
  }
}

DeleteRestApiOutcomeCallable APIGatewayClient::DeleteRestApiCallable(const DeleteRestApiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRestApiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRestApi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::DeleteRestApiAsync(const DeleteRestApiRequest& request, const DeleteRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRestApiAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::DeleteRestApiAsyncHelper(const DeleteRestApiRequest& request, const DeleteRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRestApi(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/stages/";
  ss << request.GetStageName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteStageOutcome(NoResult());
  }
  else
  {
    return DeleteStageOutcome(outcome.GetError());
  }
}

DeleteStageOutcomeCallable APIGatewayClient::DeleteStageCallable(const DeleteStageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::DeleteStageAsync(const DeleteStageRequest& request, const DeleteStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteStageAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::DeleteStageAsyncHelper(const DeleteStageRequest& request, const DeleteStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteStage(request), context);
}

DeleteUsagePlanOutcome APIGatewayClient::DeleteUsagePlan(const DeleteUsagePlanRequest& request) const
{
  if (!request.UsagePlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteUsagePlan", "Required field: UsagePlanId, is not set");
    return DeleteUsagePlanOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UsagePlanId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/usageplans/";
  ss << request.GetUsagePlanId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteUsagePlanOutcome(NoResult());
  }
  else
  {
    return DeleteUsagePlanOutcome(outcome.GetError());
  }
}

DeleteUsagePlanOutcomeCallable APIGatewayClient::DeleteUsagePlanCallable(const DeleteUsagePlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUsagePlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUsagePlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::DeleteUsagePlanAsync(const DeleteUsagePlanRequest& request, const DeleteUsagePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteUsagePlanAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::DeleteUsagePlanAsyncHelper(const DeleteUsagePlanRequest& request, const DeleteUsagePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteUsagePlan(request), context);
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
  Aws::StringStream ss;
  ss << "/usageplans/";
  ss << request.GetUsagePlanId();
  ss << "/keys/";
  ss << request.GetKeyId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteUsagePlanKeyOutcome(NoResult());
  }
  else
  {
    return DeleteUsagePlanKeyOutcome(outcome.GetError());
  }
}

DeleteUsagePlanKeyOutcomeCallable APIGatewayClient::DeleteUsagePlanKeyCallable(const DeleteUsagePlanKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteUsagePlanKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteUsagePlanKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::DeleteUsagePlanKeyAsync(const DeleteUsagePlanKeyRequest& request, const DeleteUsagePlanKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteUsagePlanKeyAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::DeleteUsagePlanKeyAsyncHelper(const DeleteUsagePlanKeyRequest& request, const DeleteUsagePlanKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteUsagePlanKey(request), context);
}

DeleteVpcLinkOutcome APIGatewayClient::DeleteVpcLink(const DeleteVpcLinkRequest& request) const
{
  if (!request.VpcLinkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVpcLink", "Required field: VpcLinkId, is not set");
    return DeleteVpcLinkOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VpcLinkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/vpclinks/";
  ss << request.GetVpcLinkId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteVpcLinkOutcome(NoResult());
  }
  else
  {
    return DeleteVpcLinkOutcome(outcome.GetError());
  }
}

DeleteVpcLinkOutcomeCallable APIGatewayClient::DeleteVpcLinkCallable(const DeleteVpcLinkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVpcLinkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVpcLink(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::DeleteVpcLinkAsync(const DeleteVpcLinkRequest& request, const DeleteVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVpcLinkAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::DeleteVpcLinkAsyncHelper(const DeleteVpcLinkRequest& request, const DeleteVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVpcLink(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/stages/";
  ss << request.GetStageName();
  ss << "/cache/authorizers";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return FlushStageAuthorizersCacheOutcome(NoResult());
  }
  else
  {
    return FlushStageAuthorizersCacheOutcome(outcome.GetError());
  }
}

FlushStageAuthorizersCacheOutcomeCallable APIGatewayClient::FlushStageAuthorizersCacheCallable(const FlushStageAuthorizersCacheRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< FlushStageAuthorizersCacheOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->FlushStageAuthorizersCache(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::FlushStageAuthorizersCacheAsync(const FlushStageAuthorizersCacheRequest& request, const FlushStageAuthorizersCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->FlushStageAuthorizersCacheAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::FlushStageAuthorizersCacheAsyncHelper(const FlushStageAuthorizersCacheRequest& request, const FlushStageAuthorizersCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, FlushStageAuthorizersCache(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/stages/";
  ss << request.GetStageName();
  ss << "/cache/data";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return FlushStageCacheOutcome(NoResult());
  }
  else
  {
    return FlushStageCacheOutcome(outcome.GetError());
  }
}

FlushStageCacheOutcomeCallable APIGatewayClient::FlushStageCacheCallable(const FlushStageCacheRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< FlushStageCacheOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->FlushStageCache(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::FlushStageCacheAsync(const FlushStageCacheRequest& request, const FlushStageCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->FlushStageCacheAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::FlushStageCacheAsyncHelper(const FlushStageCacheRequest& request, const FlushStageCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, FlushStageCache(request), context);
}

GenerateClientCertificateOutcome APIGatewayClient::GenerateClientCertificate(const GenerateClientCertificateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/clientcertificates";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GenerateClientCertificateOutcome(GenerateClientCertificateResult(outcome.GetResult()));
  }
  else
  {
    return GenerateClientCertificateOutcome(outcome.GetError());
  }
}

GenerateClientCertificateOutcomeCallable APIGatewayClient::GenerateClientCertificateCallable(const GenerateClientCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GenerateClientCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GenerateClientCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GenerateClientCertificateAsync(const GenerateClientCertificateRequest& request, const GenerateClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GenerateClientCertificateAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GenerateClientCertificateAsyncHelper(const GenerateClientCertificateRequest& request, const GenerateClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GenerateClientCertificate(request), context);
}

GetAccountOutcome APIGatewayClient::GetAccount(const GetAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/account";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetAccountOutcome(GetAccountResult(outcome.GetResult()));
  }
  else
  {
    return GetAccountOutcome(outcome.GetError());
  }
}

GetAccountOutcomeCallable APIGatewayClient::GetAccountCallable(const GetAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetAccountAsync(const GetAccountRequest& request, const GetAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAccountAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetAccountAsyncHelper(const GetAccountRequest& request, const GetAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAccount(request), context);
}

GetApiKeyOutcome APIGatewayClient::GetApiKey(const GetApiKeyRequest& request) const
{
  if (!request.ApiKeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApiKey", "Required field: ApiKey, is not set");
    return GetApiKeyOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiKey]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/apikeys/";
  ss << request.GetApiKey();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetApiKeyOutcome(GetApiKeyResult(outcome.GetResult()));
  }
  else
  {
    return GetApiKeyOutcome(outcome.GetError());
  }
}

GetApiKeyOutcomeCallable APIGatewayClient::GetApiKeyCallable(const GetApiKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApiKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApiKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetApiKeyAsync(const GetApiKeyRequest& request, const GetApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetApiKeyAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetApiKeyAsyncHelper(const GetApiKeyRequest& request, const GetApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetApiKey(request), context);
}

GetApiKeysOutcome APIGatewayClient::GetApiKeys(const GetApiKeysRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/apikeys";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetApiKeysOutcome(GetApiKeysResult(outcome.GetResult()));
  }
  else
  {
    return GetApiKeysOutcome(outcome.GetError());
  }
}

GetApiKeysOutcomeCallable APIGatewayClient::GetApiKeysCallable(const GetApiKeysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApiKeysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApiKeys(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetApiKeysAsync(const GetApiKeysRequest& request, const GetApiKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetApiKeysAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetApiKeysAsyncHelper(const GetApiKeysRequest& request, const GetApiKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetApiKeys(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/authorizers/";
  ss << request.GetAuthorizerId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetAuthorizerOutcome(GetAuthorizerResult(outcome.GetResult()));
  }
  else
  {
    return GetAuthorizerOutcome(outcome.GetError());
  }
}

GetAuthorizerOutcomeCallable APIGatewayClient::GetAuthorizerCallable(const GetAuthorizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAuthorizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAuthorizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetAuthorizerAsync(const GetAuthorizerRequest& request, const GetAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAuthorizerAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetAuthorizerAsyncHelper(const GetAuthorizerRequest& request, const GetAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAuthorizer(request), context);
}

GetAuthorizersOutcome APIGatewayClient::GetAuthorizers(const GetAuthorizersRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAuthorizers", "Required field: RestApiId, is not set");
    return GetAuthorizersOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/authorizers";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetAuthorizersOutcome(GetAuthorizersResult(outcome.GetResult()));
  }
  else
  {
    return GetAuthorizersOutcome(outcome.GetError());
  }
}

GetAuthorizersOutcomeCallable APIGatewayClient::GetAuthorizersCallable(const GetAuthorizersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAuthorizersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAuthorizers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetAuthorizersAsync(const GetAuthorizersRequest& request, const GetAuthorizersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAuthorizersAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetAuthorizersAsyncHelper(const GetAuthorizersRequest& request, const GetAuthorizersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAuthorizers(request), context);
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
  Aws::StringStream ss;
  ss << "/domainnames/";
  ss << request.GetDomainName();
  ss << "/basepathmappings/";
  ss << request.GetBasePath();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetBasePathMappingOutcome(GetBasePathMappingResult(outcome.GetResult()));
  }
  else
  {
    return GetBasePathMappingOutcome(outcome.GetError());
  }
}

GetBasePathMappingOutcomeCallable APIGatewayClient::GetBasePathMappingCallable(const GetBasePathMappingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBasePathMappingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBasePathMapping(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetBasePathMappingAsync(const GetBasePathMappingRequest& request, const GetBasePathMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetBasePathMappingAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetBasePathMappingAsyncHelper(const GetBasePathMappingRequest& request, const GetBasePathMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBasePathMapping(request), context);
}

GetBasePathMappingsOutcome APIGatewayClient::GetBasePathMappings(const GetBasePathMappingsRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetBasePathMappings", "Required field: DomainName, is not set");
    return GetBasePathMappingsOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/domainnames/";
  ss << request.GetDomainName();
  ss << "/basepathmappings";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetBasePathMappingsOutcome(GetBasePathMappingsResult(outcome.GetResult()));
  }
  else
  {
    return GetBasePathMappingsOutcome(outcome.GetError());
  }
}

GetBasePathMappingsOutcomeCallable APIGatewayClient::GetBasePathMappingsCallable(const GetBasePathMappingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetBasePathMappingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetBasePathMappings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetBasePathMappingsAsync(const GetBasePathMappingsRequest& request, const GetBasePathMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetBasePathMappingsAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetBasePathMappingsAsyncHelper(const GetBasePathMappingsRequest& request, const GetBasePathMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetBasePathMappings(request), context);
}

GetClientCertificateOutcome APIGatewayClient::GetClientCertificate(const GetClientCertificateRequest& request) const
{
  if (!request.ClientCertificateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetClientCertificate", "Required field: ClientCertificateId, is not set");
    return GetClientCertificateOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClientCertificateId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/clientcertificates/";
  ss << request.GetClientCertificateId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetClientCertificateOutcome(GetClientCertificateResult(outcome.GetResult()));
  }
  else
  {
    return GetClientCertificateOutcome(outcome.GetError());
  }
}

GetClientCertificateOutcomeCallable APIGatewayClient::GetClientCertificateCallable(const GetClientCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetClientCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetClientCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetClientCertificateAsync(const GetClientCertificateRequest& request, const GetClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetClientCertificateAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetClientCertificateAsyncHelper(const GetClientCertificateRequest& request, const GetClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetClientCertificate(request), context);
}

GetClientCertificatesOutcome APIGatewayClient::GetClientCertificates(const GetClientCertificatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/clientcertificates";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetClientCertificatesOutcome(GetClientCertificatesResult(outcome.GetResult()));
  }
  else
  {
    return GetClientCertificatesOutcome(outcome.GetError());
  }
}

GetClientCertificatesOutcomeCallable APIGatewayClient::GetClientCertificatesCallable(const GetClientCertificatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetClientCertificatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetClientCertificates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetClientCertificatesAsync(const GetClientCertificatesRequest& request, const GetClientCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetClientCertificatesAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetClientCertificatesAsyncHelper(const GetClientCertificatesRequest& request, const GetClientCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetClientCertificates(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/deployments/";
  ss << request.GetDeploymentId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDeploymentOutcome(GetDeploymentResult(outcome.GetResult()));
  }
  else
  {
    return GetDeploymentOutcome(outcome.GetError());
  }
}

GetDeploymentOutcomeCallable APIGatewayClient::GetDeploymentCallable(const GetDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetDeploymentAsync(const GetDeploymentRequest& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDeploymentAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetDeploymentAsyncHelper(const GetDeploymentRequest& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDeployment(request), context);
}

GetDeploymentsOutcome APIGatewayClient::GetDeployments(const GetDeploymentsRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDeployments", "Required field: RestApiId, is not set");
    return GetDeploymentsOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/deployments";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDeploymentsOutcome(GetDeploymentsResult(outcome.GetResult()));
  }
  else
  {
    return GetDeploymentsOutcome(outcome.GetError());
  }
}

GetDeploymentsOutcomeCallable APIGatewayClient::GetDeploymentsCallable(const GetDeploymentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeploymentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeployments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetDeploymentsAsync(const GetDeploymentsRequest& request, const GetDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDeploymentsAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetDeploymentsAsyncHelper(const GetDeploymentsRequest& request, const GetDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDeployments(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/documentation/parts/";
  ss << request.GetDocumentationPartId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDocumentationPartOutcome(GetDocumentationPartResult(outcome.GetResult()));
  }
  else
  {
    return GetDocumentationPartOutcome(outcome.GetError());
  }
}

GetDocumentationPartOutcomeCallable APIGatewayClient::GetDocumentationPartCallable(const GetDocumentationPartRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDocumentationPartOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDocumentationPart(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetDocumentationPartAsync(const GetDocumentationPartRequest& request, const GetDocumentationPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDocumentationPartAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetDocumentationPartAsyncHelper(const GetDocumentationPartRequest& request, const GetDocumentationPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDocumentationPart(request), context);
}

GetDocumentationPartsOutcome APIGatewayClient::GetDocumentationParts(const GetDocumentationPartsRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDocumentationParts", "Required field: RestApiId, is not set");
    return GetDocumentationPartsOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/documentation/parts";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDocumentationPartsOutcome(GetDocumentationPartsResult(outcome.GetResult()));
  }
  else
  {
    return GetDocumentationPartsOutcome(outcome.GetError());
  }
}

GetDocumentationPartsOutcomeCallable APIGatewayClient::GetDocumentationPartsCallable(const GetDocumentationPartsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDocumentationPartsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDocumentationParts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetDocumentationPartsAsync(const GetDocumentationPartsRequest& request, const GetDocumentationPartsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDocumentationPartsAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetDocumentationPartsAsyncHelper(const GetDocumentationPartsRequest& request, const GetDocumentationPartsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDocumentationParts(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/documentation/versions/";
  ss << request.GetDocumentationVersion();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDocumentationVersionOutcome(GetDocumentationVersionResult(outcome.GetResult()));
  }
  else
  {
    return GetDocumentationVersionOutcome(outcome.GetError());
  }
}

GetDocumentationVersionOutcomeCallable APIGatewayClient::GetDocumentationVersionCallable(const GetDocumentationVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDocumentationVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDocumentationVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetDocumentationVersionAsync(const GetDocumentationVersionRequest& request, const GetDocumentationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDocumentationVersionAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetDocumentationVersionAsyncHelper(const GetDocumentationVersionRequest& request, const GetDocumentationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDocumentationVersion(request), context);
}

GetDocumentationVersionsOutcome APIGatewayClient::GetDocumentationVersions(const GetDocumentationVersionsRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDocumentationVersions", "Required field: RestApiId, is not set");
    return GetDocumentationVersionsOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/documentation/versions";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDocumentationVersionsOutcome(GetDocumentationVersionsResult(outcome.GetResult()));
  }
  else
  {
    return GetDocumentationVersionsOutcome(outcome.GetError());
  }
}

GetDocumentationVersionsOutcomeCallable APIGatewayClient::GetDocumentationVersionsCallable(const GetDocumentationVersionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDocumentationVersionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDocumentationVersions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetDocumentationVersionsAsync(const GetDocumentationVersionsRequest& request, const GetDocumentationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDocumentationVersionsAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetDocumentationVersionsAsyncHelper(const GetDocumentationVersionsRequest& request, const GetDocumentationVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDocumentationVersions(request), context);
}

GetDomainNameOutcome APIGatewayClient::GetDomainName(const GetDomainNameRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDomainName", "Required field: DomainName, is not set");
    return GetDomainNameOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/domainnames/";
  ss << request.GetDomainName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDomainNameOutcome(GetDomainNameResult(outcome.GetResult()));
  }
  else
  {
    return GetDomainNameOutcome(outcome.GetError());
  }
}

GetDomainNameOutcomeCallable APIGatewayClient::GetDomainNameCallable(const GetDomainNameRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDomainNameOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDomainName(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetDomainNameAsync(const GetDomainNameRequest& request, const GetDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDomainNameAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetDomainNameAsyncHelper(const GetDomainNameRequest& request, const GetDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDomainName(request), context);
}

GetDomainNamesOutcome APIGatewayClient::GetDomainNames(const GetDomainNamesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/domainnames";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDomainNamesOutcome(GetDomainNamesResult(outcome.GetResult()));
  }
  else
  {
    return GetDomainNamesOutcome(outcome.GetError());
  }
}

GetDomainNamesOutcomeCallable APIGatewayClient::GetDomainNamesCallable(const GetDomainNamesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDomainNamesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDomainNames(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetDomainNamesAsync(const GetDomainNamesRequest& request, const GetDomainNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDomainNamesAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetDomainNamesAsyncHelper(const GetDomainNamesRequest& request, const GetDomainNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDomainNames(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/stages/";
  ss << request.GetStageName();
  ss << "/exports/";
  ss << request.GetExportType();
  uri.SetPath(uri.GetPath() + ss.str());
  StreamOutcome outcome = MakeRequestWithUnparsedResponse(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetExportOutcome(GetExportResult(outcome.GetResultWithOwnership()));
  }
  else
  {
    return GetExportOutcome(outcome.GetError());
  }
}

GetExportOutcomeCallable APIGatewayClient::GetExportCallable(const GetExportRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetExportOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetExport(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetExportAsync(const GetExportRequest& request, const GetExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetExportAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetExportAsyncHelper(const GetExportRequest& request, const GetExportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetExport(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/gatewayresponses/";
  ss << GatewayResponseTypeMapper::GetNameForGatewayResponseType(request.GetResponseType());
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetGatewayResponseOutcome(GetGatewayResponseResult(outcome.GetResult()));
  }
  else
  {
    return GetGatewayResponseOutcome(outcome.GetError());
  }
}

GetGatewayResponseOutcomeCallable APIGatewayClient::GetGatewayResponseCallable(const GetGatewayResponseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGatewayResponseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGatewayResponse(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetGatewayResponseAsync(const GetGatewayResponseRequest& request, const GetGatewayResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetGatewayResponseAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetGatewayResponseAsyncHelper(const GetGatewayResponseRequest& request, const GetGatewayResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetGatewayResponse(request), context);
}

GetGatewayResponsesOutcome APIGatewayClient::GetGatewayResponses(const GetGatewayResponsesRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGatewayResponses", "Required field: RestApiId, is not set");
    return GetGatewayResponsesOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/gatewayresponses";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetGatewayResponsesOutcome(GetGatewayResponsesResult(outcome.GetResult()));
  }
  else
  {
    return GetGatewayResponsesOutcome(outcome.GetError());
  }
}

GetGatewayResponsesOutcomeCallable APIGatewayClient::GetGatewayResponsesCallable(const GetGatewayResponsesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetGatewayResponsesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetGatewayResponses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetGatewayResponsesAsync(const GetGatewayResponsesRequest& request, const GetGatewayResponsesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetGatewayResponsesAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetGatewayResponsesAsyncHelper(const GetGatewayResponsesRequest& request, const GetGatewayResponsesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetGatewayResponses(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/resources/";
  ss << request.GetResourceId();
  ss << "/methods/";
  ss << request.GetHttpMethod();
  ss << "/integration";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetIntegrationOutcome(GetIntegrationResult(outcome.GetResult()));
  }
  else
  {
    return GetIntegrationOutcome(outcome.GetError());
  }
}

GetIntegrationOutcomeCallable APIGatewayClient::GetIntegrationCallable(const GetIntegrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIntegrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIntegration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetIntegrationAsync(const GetIntegrationRequest& request, const GetIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetIntegrationAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetIntegrationAsyncHelper(const GetIntegrationRequest& request, const GetIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetIntegration(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/resources/";
  ss << request.GetResourceId();
  ss << "/methods/";
  ss << request.GetHttpMethod();
  ss << "/integration/responses/";
  ss << request.GetStatusCode();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetIntegrationResponseOutcome(GetIntegrationResponseResult(outcome.GetResult()));
  }
  else
  {
    return GetIntegrationResponseOutcome(outcome.GetError());
  }
}

GetIntegrationResponseOutcomeCallable APIGatewayClient::GetIntegrationResponseCallable(const GetIntegrationResponseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIntegrationResponseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIntegrationResponse(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetIntegrationResponseAsync(const GetIntegrationResponseRequest& request, const GetIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetIntegrationResponseAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetIntegrationResponseAsyncHelper(const GetIntegrationResponseRequest& request, const GetIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetIntegrationResponse(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/resources/";
  ss << request.GetResourceId();
  ss << "/methods/";
  ss << request.GetHttpMethod();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetMethodOutcome(GetMethodResult(outcome.GetResult()));
  }
  else
  {
    return GetMethodOutcome(outcome.GetError());
  }
}

GetMethodOutcomeCallable APIGatewayClient::GetMethodCallable(const GetMethodRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMethodOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMethod(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetMethodAsync(const GetMethodRequest& request, const GetMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetMethodAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetMethodAsyncHelper(const GetMethodRequest& request, const GetMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetMethod(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/resources/";
  ss << request.GetResourceId();
  ss << "/methods/";
  ss << request.GetHttpMethod();
  ss << "/responses/";
  ss << request.GetStatusCode();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetMethodResponseOutcome(GetMethodResponseResult(outcome.GetResult()));
  }
  else
  {
    return GetMethodResponseOutcome(outcome.GetError());
  }
}

GetMethodResponseOutcomeCallable APIGatewayClient::GetMethodResponseCallable(const GetMethodResponseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMethodResponseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMethodResponse(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetMethodResponseAsync(const GetMethodResponseRequest& request, const GetMethodResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetMethodResponseAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetMethodResponseAsyncHelper(const GetMethodResponseRequest& request, const GetMethodResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetMethodResponse(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/models/";
  ss << request.GetModelName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetModelOutcome(GetModelResult(outcome.GetResult()));
  }
  else
  {
    return GetModelOutcome(outcome.GetError());
  }
}

GetModelOutcomeCallable APIGatewayClient::GetModelCallable(const GetModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetModelAsync(const GetModelRequest& request, const GetModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetModelAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetModelAsyncHelper(const GetModelRequest& request, const GetModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetModel(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/models/";
  ss << request.GetModelName();
  ss << "/default_template";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetModelTemplateOutcome(GetModelTemplateResult(outcome.GetResult()));
  }
  else
  {
    return GetModelTemplateOutcome(outcome.GetError());
  }
}

GetModelTemplateOutcomeCallable APIGatewayClient::GetModelTemplateCallable(const GetModelTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetModelTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetModelTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetModelTemplateAsync(const GetModelTemplateRequest& request, const GetModelTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetModelTemplateAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetModelTemplateAsyncHelper(const GetModelTemplateRequest& request, const GetModelTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetModelTemplate(request), context);
}

GetModelsOutcome APIGatewayClient::GetModels(const GetModelsRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetModels", "Required field: RestApiId, is not set");
    return GetModelsOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/models";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetModelsOutcome(GetModelsResult(outcome.GetResult()));
  }
  else
  {
    return GetModelsOutcome(outcome.GetError());
  }
}

GetModelsOutcomeCallable APIGatewayClient::GetModelsCallable(const GetModelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetModelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetModels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetModelsAsync(const GetModelsRequest& request, const GetModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetModelsAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetModelsAsyncHelper(const GetModelsRequest& request, const GetModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetModels(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/requestvalidators/";
  ss << request.GetRequestValidatorId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRequestValidatorOutcome(GetRequestValidatorResult(outcome.GetResult()));
  }
  else
  {
    return GetRequestValidatorOutcome(outcome.GetError());
  }
}

GetRequestValidatorOutcomeCallable APIGatewayClient::GetRequestValidatorCallable(const GetRequestValidatorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRequestValidatorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRequestValidator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetRequestValidatorAsync(const GetRequestValidatorRequest& request, const GetRequestValidatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRequestValidatorAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetRequestValidatorAsyncHelper(const GetRequestValidatorRequest& request, const GetRequestValidatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRequestValidator(request), context);
}

GetRequestValidatorsOutcome APIGatewayClient::GetRequestValidators(const GetRequestValidatorsRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRequestValidators", "Required field: RestApiId, is not set");
    return GetRequestValidatorsOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/requestvalidators";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRequestValidatorsOutcome(GetRequestValidatorsResult(outcome.GetResult()));
  }
  else
  {
    return GetRequestValidatorsOutcome(outcome.GetError());
  }
}

GetRequestValidatorsOutcomeCallable APIGatewayClient::GetRequestValidatorsCallable(const GetRequestValidatorsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRequestValidatorsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRequestValidators(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetRequestValidatorsAsync(const GetRequestValidatorsRequest& request, const GetRequestValidatorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRequestValidatorsAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetRequestValidatorsAsyncHelper(const GetRequestValidatorsRequest& request, const GetRequestValidatorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRequestValidators(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/resources/";
  ss << request.GetResourceId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetResourceOutcome(GetResourceResult(outcome.GetResult()));
  }
  else
  {
    return GetResourceOutcome(outcome.GetError());
  }
}

GetResourceOutcomeCallable APIGatewayClient::GetResourceCallable(const GetResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetResourceAsync(const GetResourceRequest& request, const GetResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetResourceAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetResourceAsyncHelper(const GetResourceRequest& request, const GetResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetResource(request), context);
}

GetResourcesOutcome APIGatewayClient::GetResources(const GetResourcesRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetResources", "Required field: RestApiId, is not set");
    return GetResourcesOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/resources";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetResourcesOutcome(GetResourcesResult(outcome.GetResult()));
  }
  else
  {
    return GetResourcesOutcome(outcome.GetError());
  }
}

GetResourcesOutcomeCallable APIGatewayClient::GetResourcesCallable(const GetResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetResourcesAsync(const GetResourcesRequest& request, const GetResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetResourcesAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetResourcesAsyncHelper(const GetResourcesRequest& request, const GetResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetResources(request), context);
}

GetRestApiOutcome APIGatewayClient::GetRestApi(const GetRestApiRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRestApi", "Required field: RestApiId, is not set");
    return GetRestApiOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRestApiOutcome(GetRestApiResult(outcome.GetResult()));
  }
  else
  {
    return GetRestApiOutcome(outcome.GetError());
  }
}

GetRestApiOutcomeCallable APIGatewayClient::GetRestApiCallable(const GetRestApiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRestApiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRestApi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetRestApiAsync(const GetRestApiRequest& request, const GetRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRestApiAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetRestApiAsyncHelper(const GetRestApiRequest& request, const GetRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRestApi(request), context);
}

GetRestApisOutcome APIGatewayClient::GetRestApis(const GetRestApisRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/restapis";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetRestApisOutcome(GetRestApisResult(outcome.GetResult()));
  }
  else
  {
    return GetRestApisOutcome(outcome.GetError());
  }
}

GetRestApisOutcomeCallable APIGatewayClient::GetRestApisCallable(const GetRestApisRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRestApisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRestApis(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetRestApisAsync(const GetRestApisRequest& request, const GetRestApisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRestApisAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetRestApisAsyncHelper(const GetRestApisRequest& request, const GetRestApisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRestApis(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/stages/";
  ss << request.GetStageName();
  ss << "/sdks/";
  ss << request.GetSdkType();
  uri.SetPath(uri.GetPath() + ss.str());
  StreamOutcome outcome = MakeRequestWithUnparsedResponse(uri, request, HttpMethod::HTTP_GET);
  if(outcome.IsSuccess())
  {
    return GetSdkOutcome(GetSdkResult(outcome.GetResultWithOwnership()));
  }
  else
  {
    return GetSdkOutcome(outcome.GetError());
  }
}

GetSdkOutcomeCallable APIGatewayClient::GetSdkCallable(const GetSdkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSdkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSdk(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetSdkAsync(const GetSdkRequest& request, const GetSdkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSdkAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetSdkAsyncHelper(const GetSdkRequest& request, const GetSdkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSdk(request), context);
}

GetSdkTypeOutcome APIGatewayClient::GetSdkType(const GetSdkTypeRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSdkType", "Required field: Id, is not set");
    return GetSdkTypeOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/sdktypes/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetSdkTypeOutcome(GetSdkTypeResult(outcome.GetResult()));
  }
  else
  {
    return GetSdkTypeOutcome(outcome.GetError());
  }
}

GetSdkTypeOutcomeCallable APIGatewayClient::GetSdkTypeCallable(const GetSdkTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSdkTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSdkType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetSdkTypeAsync(const GetSdkTypeRequest& request, const GetSdkTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSdkTypeAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetSdkTypeAsyncHelper(const GetSdkTypeRequest& request, const GetSdkTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSdkType(request), context);
}

GetSdkTypesOutcome APIGatewayClient::GetSdkTypes(const GetSdkTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/sdktypes";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetSdkTypesOutcome(GetSdkTypesResult(outcome.GetResult()));
  }
  else
  {
    return GetSdkTypesOutcome(outcome.GetError());
  }
}

GetSdkTypesOutcomeCallable APIGatewayClient::GetSdkTypesCallable(const GetSdkTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSdkTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSdkTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetSdkTypesAsync(const GetSdkTypesRequest& request, const GetSdkTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetSdkTypesAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetSdkTypesAsyncHelper(const GetSdkTypesRequest& request, const GetSdkTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetSdkTypes(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/stages/";
  ss << request.GetStageName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetStageOutcome(GetStageResult(outcome.GetResult()));
  }
  else
  {
    return GetStageOutcome(outcome.GetError());
  }
}

GetStageOutcomeCallable APIGatewayClient::GetStageCallable(const GetStageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetStageAsync(const GetStageRequest& request, const GetStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetStageAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetStageAsyncHelper(const GetStageRequest& request, const GetStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetStage(request), context);
}

GetStagesOutcome APIGatewayClient::GetStages(const GetStagesRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStages", "Required field: RestApiId, is not set");
    return GetStagesOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/stages";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetStagesOutcome(GetStagesResult(outcome.GetResult()));
  }
  else
  {
    return GetStagesOutcome(outcome.GetError());
  }
}

GetStagesOutcomeCallable APIGatewayClient::GetStagesCallable(const GetStagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetStagesAsync(const GetStagesRequest& request, const GetStagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetStagesAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetStagesAsyncHelper(const GetStagesRequest& request, const GetStagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetStages(request), context);
}

GetTagsOutcome APIGatewayClient::GetTags(const GetTagsRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTags", "Required field: ResourceArn, is not set");
    return GetTagsOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetTagsOutcome(GetTagsResult(outcome.GetResult()));
  }
  else
  {
    return GetTagsOutcome(outcome.GetError());
  }
}

GetTagsOutcomeCallable APIGatewayClient::GetTagsCallable(const GetTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetTagsAsync(const GetTagsRequest& request, const GetTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTagsAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetTagsAsyncHelper(const GetTagsRequest& request, const GetTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTags(request), context);
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
  Aws::StringStream ss;
  ss << "/usageplans/";
  ss << request.GetUsagePlanId();
  ss << "/usage";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetUsageOutcome(GetUsageResult(outcome.GetResult()));
  }
  else
  {
    return GetUsageOutcome(outcome.GetError());
  }
}

GetUsageOutcomeCallable APIGatewayClient::GetUsageCallable(const GetUsageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUsageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUsage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetUsageAsync(const GetUsageRequest& request, const GetUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetUsageAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetUsageAsyncHelper(const GetUsageRequest& request, const GetUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetUsage(request), context);
}

GetUsagePlanOutcome APIGatewayClient::GetUsagePlan(const GetUsagePlanRequest& request) const
{
  if (!request.UsagePlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUsagePlan", "Required field: UsagePlanId, is not set");
    return GetUsagePlanOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UsagePlanId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/usageplans/";
  ss << request.GetUsagePlanId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetUsagePlanOutcome(GetUsagePlanResult(outcome.GetResult()));
  }
  else
  {
    return GetUsagePlanOutcome(outcome.GetError());
  }
}

GetUsagePlanOutcomeCallable APIGatewayClient::GetUsagePlanCallable(const GetUsagePlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUsagePlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUsagePlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetUsagePlanAsync(const GetUsagePlanRequest& request, const GetUsagePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetUsagePlanAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetUsagePlanAsyncHelper(const GetUsagePlanRequest& request, const GetUsagePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetUsagePlan(request), context);
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
  Aws::StringStream ss;
  ss << "/usageplans/";
  ss << request.GetUsagePlanId();
  ss << "/keys/";
  ss << request.GetKeyId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetUsagePlanKeyOutcome(GetUsagePlanKeyResult(outcome.GetResult()));
  }
  else
  {
    return GetUsagePlanKeyOutcome(outcome.GetError());
  }
}

GetUsagePlanKeyOutcomeCallable APIGatewayClient::GetUsagePlanKeyCallable(const GetUsagePlanKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUsagePlanKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUsagePlanKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetUsagePlanKeyAsync(const GetUsagePlanKeyRequest& request, const GetUsagePlanKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetUsagePlanKeyAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetUsagePlanKeyAsyncHelper(const GetUsagePlanKeyRequest& request, const GetUsagePlanKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetUsagePlanKey(request), context);
}

GetUsagePlanKeysOutcome APIGatewayClient::GetUsagePlanKeys(const GetUsagePlanKeysRequest& request) const
{
  if (!request.UsagePlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetUsagePlanKeys", "Required field: UsagePlanId, is not set");
    return GetUsagePlanKeysOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UsagePlanId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/usageplans/";
  ss << request.GetUsagePlanId();
  ss << "/keys";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetUsagePlanKeysOutcome(GetUsagePlanKeysResult(outcome.GetResult()));
  }
  else
  {
    return GetUsagePlanKeysOutcome(outcome.GetError());
  }
}

GetUsagePlanKeysOutcomeCallable APIGatewayClient::GetUsagePlanKeysCallable(const GetUsagePlanKeysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUsagePlanKeysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUsagePlanKeys(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetUsagePlanKeysAsync(const GetUsagePlanKeysRequest& request, const GetUsagePlanKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetUsagePlanKeysAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetUsagePlanKeysAsyncHelper(const GetUsagePlanKeysRequest& request, const GetUsagePlanKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetUsagePlanKeys(request), context);
}

GetUsagePlansOutcome APIGatewayClient::GetUsagePlans(const GetUsagePlansRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/usageplans";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetUsagePlansOutcome(GetUsagePlansResult(outcome.GetResult()));
  }
  else
  {
    return GetUsagePlansOutcome(outcome.GetError());
  }
}

GetUsagePlansOutcomeCallable APIGatewayClient::GetUsagePlansCallable(const GetUsagePlansRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetUsagePlansOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetUsagePlans(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetUsagePlansAsync(const GetUsagePlansRequest& request, const GetUsagePlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetUsagePlansAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetUsagePlansAsyncHelper(const GetUsagePlansRequest& request, const GetUsagePlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetUsagePlans(request), context);
}

GetVpcLinkOutcome APIGatewayClient::GetVpcLink(const GetVpcLinkRequest& request) const
{
  if (!request.VpcLinkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVpcLink", "Required field: VpcLinkId, is not set");
    return GetVpcLinkOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VpcLinkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/vpclinks/";
  ss << request.GetVpcLinkId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetVpcLinkOutcome(GetVpcLinkResult(outcome.GetResult()));
  }
  else
  {
    return GetVpcLinkOutcome(outcome.GetError());
  }
}

GetVpcLinkOutcomeCallable APIGatewayClient::GetVpcLinkCallable(const GetVpcLinkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVpcLinkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVpcLink(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetVpcLinkAsync(const GetVpcLinkRequest& request, const GetVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetVpcLinkAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetVpcLinkAsyncHelper(const GetVpcLinkRequest& request, const GetVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetVpcLink(request), context);
}

GetVpcLinksOutcome APIGatewayClient::GetVpcLinks(const GetVpcLinksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/vpclinks";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetVpcLinksOutcome(GetVpcLinksResult(outcome.GetResult()));
  }
  else
  {
    return GetVpcLinksOutcome(outcome.GetError());
  }
}

GetVpcLinksOutcomeCallable APIGatewayClient::GetVpcLinksCallable(const GetVpcLinksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVpcLinksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVpcLinks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::GetVpcLinksAsync(const GetVpcLinksRequest& request, const GetVpcLinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetVpcLinksAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::GetVpcLinksAsyncHelper(const GetVpcLinksRequest& request, const GetVpcLinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetVpcLinks(request), context);
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
  ss << "/apikeys";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?mode=import");
  uri.SetQueryString(ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ImportApiKeysOutcome(ImportApiKeysResult(outcome.GetResult()));
  }
  else
  {
    return ImportApiKeysOutcome(outcome.GetError());
  }
}

ImportApiKeysOutcomeCallable APIGatewayClient::ImportApiKeysCallable(const ImportApiKeysRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportApiKeysOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportApiKeys(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::ImportApiKeysAsync(const ImportApiKeysRequest& request, const ImportApiKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ImportApiKeysAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::ImportApiKeysAsyncHelper(const ImportApiKeysRequest& request, const ImportApiKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ImportApiKeys(request), context);
}

ImportDocumentationPartsOutcome APIGatewayClient::ImportDocumentationParts(const ImportDocumentationPartsRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ImportDocumentationParts", "Required field: RestApiId, is not set");
    return ImportDocumentationPartsOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/documentation/parts";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ImportDocumentationPartsOutcome(ImportDocumentationPartsResult(outcome.GetResult()));
  }
  else
  {
    return ImportDocumentationPartsOutcome(outcome.GetError());
  }
}

ImportDocumentationPartsOutcomeCallable APIGatewayClient::ImportDocumentationPartsCallable(const ImportDocumentationPartsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportDocumentationPartsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportDocumentationParts(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::ImportDocumentationPartsAsync(const ImportDocumentationPartsRequest& request, const ImportDocumentationPartsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ImportDocumentationPartsAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::ImportDocumentationPartsAsyncHelper(const ImportDocumentationPartsRequest& request, const ImportDocumentationPartsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ImportDocumentationParts(request), context);
}

ImportRestApiOutcome APIGatewayClient::ImportRestApi(const ImportRestApiRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/restapis";
  uri.SetPath(uri.GetPath() + ss.str());
  ss.str("?mode=import");
  uri.SetQueryString(ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ImportRestApiOutcome(ImportRestApiResult(outcome.GetResult()));
  }
  else
  {
    return ImportRestApiOutcome(outcome.GetError());
  }
}

ImportRestApiOutcomeCallable APIGatewayClient::ImportRestApiCallable(const ImportRestApiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportRestApiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportRestApi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::ImportRestApiAsync(const ImportRestApiRequest& request, const ImportRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ImportRestApiAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::ImportRestApiAsyncHelper(const ImportRestApiRequest& request, const ImportRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ImportRestApi(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/gatewayresponses/";
  ss << GatewayResponseTypeMapper::GetNameForGatewayResponseType(request.GetResponseType());
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutGatewayResponseOutcome(PutGatewayResponseResult(outcome.GetResult()));
  }
  else
  {
    return PutGatewayResponseOutcome(outcome.GetError());
  }
}

PutGatewayResponseOutcomeCallable APIGatewayClient::PutGatewayResponseCallable(const PutGatewayResponseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutGatewayResponseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutGatewayResponse(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::PutGatewayResponseAsync(const PutGatewayResponseRequest& request, const PutGatewayResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutGatewayResponseAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::PutGatewayResponseAsyncHelper(const PutGatewayResponseRequest& request, const PutGatewayResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutGatewayResponse(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/resources/";
  ss << request.GetResourceId();
  ss << "/methods/";
  ss << request.GetHttpMethod();
  ss << "/integration";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutIntegrationOutcome(PutIntegrationResult(outcome.GetResult()));
  }
  else
  {
    return PutIntegrationOutcome(outcome.GetError());
  }
}

PutIntegrationOutcomeCallable APIGatewayClient::PutIntegrationCallable(const PutIntegrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutIntegrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutIntegration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::PutIntegrationAsync(const PutIntegrationRequest& request, const PutIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutIntegrationAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::PutIntegrationAsyncHelper(const PutIntegrationRequest& request, const PutIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutIntegration(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/resources/";
  ss << request.GetResourceId();
  ss << "/methods/";
  ss << request.GetHttpMethod();
  ss << "/integration/responses/";
  ss << request.GetStatusCode();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutIntegrationResponseOutcome(PutIntegrationResponseResult(outcome.GetResult()));
  }
  else
  {
    return PutIntegrationResponseOutcome(outcome.GetError());
  }
}

PutIntegrationResponseOutcomeCallable APIGatewayClient::PutIntegrationResponseCallable(const PutIntegrationResponseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutIntegrationResponseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutIntegrationResponse(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::PutIntegrationResponseAsync(const PutIntegrationResponseRequest& request, const PutIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutIntegrationResponseAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::PutIntegrationResponseAsyncHelper(const PutIntegrationResponseRequest& request, const PutIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutIntegrationResponse(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/resources/";
  ss << request.GetResourceId();
  ss << "/methods/";
  ss << request.GetHttpMethod();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutMethodOutcome(PutMethodResult(outcome.GetResult()));
  }
  else
  {
    return PutMethodOutcome(outcome.GetError());
  }
}

PutMethodOutcomeCallable APIGatewayClient::PutMethodCallable(const PutMethodRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutMethodOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutMethod(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::PutMethodAsync(const PutMethodRequest& request, const PutMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutMethodAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::PutMethodAsyncHelper(const PutMethodRequest& request, const PutMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutMethod(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/resources/";
  ss << request.GetResourceId();
  ss << "/methods/";
  ss << request.GetHttpMethod();
  ss << "/responses/";
  ss << request.GetStatusCode();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutMethodResponseOutcome(PutMethodResponseResult(outcome.GetResult()));
  }
  else
  {
    return PutMethodResponseOutcome(outcome.GetError());
  }
}

PutMethodResponseOutcomeCallable APIGatewayClient::PutMethodResponseCallable(const PutMethodResponseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutMethodResponseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutMethodResponse(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::PutMethodResponseAsync(const PutMethodResponseRequest& request, const PutMethodResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutMethodResponseAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::PutMethodResponseAsyncHelper(const PutMethodResponseRequest& request, const PutMethodResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutMethodResponse(request), context);
}

PutRestApiOutcome APIGatewayClient::PutRestApi(const PutRestApiRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutRestApi", "Required field: RestApiId, is not set");
    return PutRestApiOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutRestApiOutcome(PutRestApiResult(outcome.GetResult()));
  }
  else
  {
    return PutRestApiOutcome(outcome.GetError());
  }
}

PutRestApiOutcomeCallable APIGatewayClient::PutRestApiCallable(const PutRestApiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRestApiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRestApi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::PutRestApiAsync(const PutRestApiRequest& request, const PutRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutRestApiAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::PutRestApiAsyncHelper(const PutRestApiRequest& request, const PutRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutRestApi(request), context);
}

TagResourceOutcome APIGatewayClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TagResourceOutcome(NoResult());
  }
  else
  {
    return TagResourceOutcome(outcome.GetError());
  }
}

TagResourceOutcomeCallable APIGatewayClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/authorizers/";
  ss << request.GetAuthorizerId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TestInvokeAuthorizerOutcome(TestInvokeAuthorizerResult(outcome.GetResult()));
  }
  else
  {
    return TestInvokeAuthorizerOutcome(outcome.GetError());
  }
}

TestInvokeAuthorizerOutcomeCallable APIGatewayClient::TestInvokeAuthorizerCallable(const TestInvokeAuthorizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TestInvokeAuthorizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TestInvokeAuthorizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::TestInvokeAuthorizerAsync(const TestInvokeAuthorizerRequest& request, const TestInvokeAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TestInvokeAuthorizerAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::TestInvokeAuthorizerAsyncHelper(const TestInvokeAuthorizerRequest& request, const TestInvokeAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TestInvokeAuthorizer(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/resources/";
  ss << request.GetResourceId();
  ss << "/methods/";
  ss << request.GetHttpMethod();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TestInvokeMethodOutcome(TestInvokeMethodResult(outcome.GetResult()));
  }
  else
  {
    return TestInvokeMethodOutcome(outcome.GetError());
  }
}

TestInvokeMethodOutcomeCallable APIGatewayClient::TestInvokeMethodCallable(const TestInvokeMethodRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TestInvokeMethodOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TestInvokeMethod(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::TestInvokeMethodAsync(const TestInvokeMethodRequest& request, const TestInvokeMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TestInvokeMethodAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::TestInvokeMethodAsyncHelper(const TestInvokeMethodRequest& request, const TestInvokeMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TestInvokeMethod(request), context);
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
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UntagResourceOutcome(NoResult());
  }
  else
  {
    return UntagResourceOutcome(outcome.GetError());
  }
}

UntagResourceOutcomeCallable APIGatewayClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateAccountOutcome APIGatewayClient::UpdateAccount(const UpdateAccountRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/account";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateAccountOutcome(UpdateAccountResult(outcome.GetResult()));
  }
  else
  {
    return UpdateAccountOutcome(outcome.GetError());
  }
}

UpdateAccountOutcomeCallable APIGatewayClient::UpdateAccountCallable(const UpdateAccountRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAccountOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAccount(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::UpdateAccountAsync(const UpdateAccountRequest& request, const UpdateAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAccountAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::UpdateAccountAsyncHelper(const UpdateAccountRequest& request, const UpdateAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAccount(request), context);
}

UpdateApiKeyOutcome APIGatewayClient::UpdateApiKey(const UpdateApiKeyRequest& request) const
{
  if (!request.ApiKeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApiKey", "Required field: ApiKey, is not set");
    return UpdateApiKeyOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiKey]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/apikeys/";
  ss << request.GetApiKey();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateApiKeyOutcome(UpdateApiKeyResult(outcome.GetResult()));
  }
  else
  {
    return UpdateApiKeyOutcome(outcome.GetError());
  }
}

UpdateApiKeyOutcomeCallable APIGatewayClient::UpdateApiKeyCallable(const UpdateApiKeyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApiKeyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApiKey(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::UpdateApiKeyAsync(const UpdateApiKeyRequest& request, const UpdateApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateApiKeyAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::UpdateApiKeyAsyncHelper(const UpdateApiKeyRequest& request, const UpdateApiKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateApiKey(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/authorizers/";
  ss << request.GetAuthorizerId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateAuthorizerOutcome(UpdateAuthorizerResult(outcome.GetResult()));
  }
  else
  {
    return UpdateAuthorizerOutcome(outcome.GetError());
  }
}

UpdateAuthorizerOutcomeCallable APIGatewayClient::UpdateAuthorizerCallable(const UpdateAuthorizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAuthorizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAuthorizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::UpdateAuthorizerAsync(const UpdateAuthorizerRequest& request, const UpdateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAuthorizerAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::UpdateAuthorizerAsyncHelper(const UpdateAuthorizerRequest& request, const UpdateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAuthorizer(request), context);
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
  Aws::StringStream ss;
  ss << "/domainnames/";
  ss << request.GetDomainName();
  ss << "/basepathmappings/";
  ss << request.GetBasePath();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateBasePathMappingOutcome(UpdateBasePathMappingResult(outcome.GetResult()));
  }
  else
  {
    return UpdateBasePathMappingOutcome(outcome.GetError());
  }
}

UpdateBasePathMappingOutcomeCallable APIGatewayClient::UpdateBasePathMappingCallable(const UpdateBasePathMappingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateBasePathMappingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateBasePathMapping(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::UpdateBasePathMappingAsync(const UpdateBasePathMappingRequest& request, const UpdateBasePathMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateBasePathMappingAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::UpdateBasePathMappingAsyncHelper(const UpdateBasePathMappingRequest& request, const UpdateBasePathMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateBasePathMapping(request), context);
}

UpdateClientCertificateOutcome APIGatewayClient::UpdateClientCertificate(const UpdateClientCertificateRequest& request) const
{
  if (!request.ClientCertificateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateClientCertificate", "Required field: ClientCertificateId, is not set");
    return UpdateClientCertificateOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClientCertificateId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/clientcertificates/";
  ss << request.GetClientCertificateId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateClientCertificateOutcome(UpdateClientCertificateResult(outcome.GetResult()));
  }
  else
  {
    return UpdateClientCertificateOutcome(outcome.GetError());
  }
}

UpdateClientCertificateOutcomeCallable APIGatewayClient::UpdateClientCertificateCallable(const UpdateClientCertificateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateClientCertificateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateClientCertificate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::UpdateClientCertificateAsync(const UpdateClientCertificateRequest& request, const UpdateClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateClientCertificateAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::UpdateClientCertificateAsyncHelper(const UpdateClientCertificateRequest& request, const UpdateClientCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateClientCertificate(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/deployments/";
  ss << request.GetDeploymentId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateDeploymentOutcome(UpdateDeploymentResult(outcome.GetResult()));
  }
  else
  {
    return UpdateDeploymentOutcome(outcome.GetError());
  }
}

UpdateDeploymentOutcomeCallable APIGatewayClient::UpdateDeploymentCallable(const UpdateDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::UpdateDeploymentAsync(const UpdateDeploymentRequest& request, const UpdateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDeploymentAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::UpdateDeploymentAsyncHelper(const UpdateDeploymentRequest& request, const UpdateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDeployment(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/documentation/parts/";
  ss << request.GetDocumentationPartId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateDocumentationPartOutcome(UpdateDocumentationPartResult(outcome.GetResult()));
  }
  else
  {
    return UpdateDocumentationPartOutcome(outcome.GetError());
  }
}

UpdateDocumentationPartOutcomeCallable APIGatewayClient::UpdateDocumentationPartCallable(const UpdateDocumentationPartRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDocumentationPartOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDocumentationPart(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::UpdateDocumentationPartAsync(const UpdateDocumentationPartRequest& request, const UpdateDocumentationPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDocumentationPartAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::UpdateDocumentationPartAsyncHelper(const UpdateDocumentationPartRequest& request, const UpdateDocumentationPartResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDocumentationPart(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/documentation/versions/";
  ss << request.GetDocumentationVersion();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateDocumentationVersionOutcome(UpdateDocumentationVersionResult(outcome.GetResult()));
  }
  else
  {
    return UpdateDocumentationVersionOutcome(outcome.GetError());
  }
}

UpdateDocumentationVersionOutcomeCallable APIGatewayClient::UpdateDocumentationVersionCallable(const UpdateDocumentationVersionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDocumentationVersionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDocumentationVersion(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::UpdateDocumentationVersionAsync(const UpdateDocumentationVersionRequest& request, const UpdateDocumentationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDocumentationVersionAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::UpdateDocumentationVersionAsyncHelper(const UpdateDocumentationVersionRequest& request, const UpdateDocumentationVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDocumentationVersion(request), context);
}

UpdateDomainNameOutcome APIGatewayClient::UpdateDomainName(const UpdateDomainNameRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDomainName", "Required field: DomainName, is not set");
    return UpdateDomainNameOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/domainnames/";
  ss << request.GetDomainName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateDomainNameOutcome(UpdateDomainNameResult(outcome.GetResult()));
  }
  else
  {
    return UpdateDomainNameOutcome(outcome.GetError());
  }
}

UpdateDomainNameOutcomeCallable APIGatewayClient::UpdateDomainNameCallable(const UpdateDomainNameRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDomainNameOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDomainName(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::UpdateDomainNameAsync(const UpdateDomainNameRequest& request, const UpdateDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDomainNameAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::UpdateDomainNameAsyncHelper(const UpdateDomainNameRequest& request, const UpdateDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDomainName(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/gatewayresponses/";
  ss << GatewayResponseTypeMapper::GetNameForGatewayResponseType(request.GetResponseType());
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateGatewayResponseOutcome(UpdateGatewayResponseResult(outcome.GetResult()));
  }
  else
  {
    return UpdateGatewayResponseOutcome(outcome.GetError());
  }
}

UpdateGatewayResponseOutcomeCallable APIGatewayClient::UpdateGatewayResponseCallable(const UpdateGatewayResponseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateGatewayResponseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateGatewayResponse(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::UpdateGatewayResponseAsync(const UpdateGatewayResponseRequest& request, const UpdateGatewayResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateGatewayResponseAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::UpdateGatewayResponseAsyncHelper(const UpdateGatewayResponseRequest& request, const UpdateGatewayResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateGatewayResponse(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/resources/";
  ss << request.GetResourceId();
  ss << "/methods/";
  ss << request.GetHttpMethod();
  ss << "/integration";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateIntegrationOutcome(UpdateIntegrationResult(outcome.GetResult()));
  }
  else
  {
    return UpdateIntegrationOutcome(outcome.GetError());
  }
}

UpdateIntegrationOutcomeCallable APIGatewayClient::UpdateIntegrationCallable(const UpdateIntegrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateIntegrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateIntegration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::UpdateIntegrationAsync(const UpdateIntegrationRequest& request, const UpdateIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateIntegrationAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::UpdateIntegrationAsyncHelper(const UpdateIntegrationRequest& request, const UpdateIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateIntegration(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/resources/";
  ss << request.GetResourceId();
  ss << "/methods/";
  ss << request.GetHttpMethod();
  ss << "/integration/responses/";
  ss << request.GetStatusCode();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateIntegrationResponseOutcome(UpdateIntegrationResponseResult(outcome.GetResult()));
  }
  else
  {
    return UpdateIntegrationResponseOutcome(outcome.GetError());
  }
}

UpdateIntegrationResponseOutcomeCallable APIGatewayClient::UpdateIntegrationResponseCallable(const UpdateIntegrationResponseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateIntegrationResponseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateIntegrationResponse(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::UpdateIntegrationResponseAsync(const UpdateIntegrationResponseRequest& request, const UpdateIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateIntegrationResponseAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::UpdateIntegrationResponseAsyncHelper(const UpdateIntegrationResponseRequest& request, const UpdateIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateIntegrationResponse(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/resources/";
  ss << request.GetResourceId();
  ss << "/methods/";
  ss << request.GetHttpMethod();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateMethodOutcome(UpdateMethodResult(outcome.GetResult()));
  }
  else
  {
    return UpdateMethodOutcome(outcome.GetError());
  }
}

UpdateMethodOutcomeCallable APIGatewayClient::UpdateMethodCallable(const UpdateMethodRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMethodOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMethod(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::UpdateMethodAsync(const UpdateMethodRequest& request, const UpdateMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateMethodAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::UpdateMethodAsyncHelper(const UpdateMethodRequest& request, const UpdateMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateMethod(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/resources/";
  ss << request.GetResourceId();
  ss << "/methods/";
  ss << request.GetHttpMethod();
  ss << "/responses/";
  ss << request.GetStatusCode();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateMethodResponseOutcome(UpdateMethodResponseResult(outcome.GetResult()));
  }
  else
  {
    return UpdateMethodResponseOutcome(outcome.GetError());
  }
}

UpdateMethodResponseOutcomeCallable APIGatewayClient::UpdateMethodResponseCallable(const UpdateMethodResponseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateMethodResponseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateMethodResponse(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::UpdateMethodResponseAsync(const UpdateMethodResponseRequest& request, const UpdateMethodResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateMethodResponseAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::UpdateMethodResponseAsyncHelper(const UpdateMethodResponseRequest& request, const UpdateMethodResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateMethodResponse(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/models/";
  ss << request.GetModelName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateModelOutcome(UpdateModelResult(outcome.GetResult()));
  }
  else
  {
    return UpdateModelOutcome(outcome.GetError());
  }
}

UpdateModelOutcomeCallable APIGatewayClient::UpdateModelCallable(const UpdateModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::UpdateModelAsync(const UpdateModelRequest& request, const UpdateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateModelAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::UpdateModelAsyncHelper(const UpdateModelRequest& request, const UpdateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateModel(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/requestvalidators/";
  ss << request.GetRequestValidatorId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateRequestValidatorOutcome(UpdateRequestValidatorResult(outcome.GetResult()));
  }
  else
  {
    return UpdateRequestValidatorOutcome(outcome.GetError());
  }
}

UpdateRequestValidatorOutcomeCallable APIGatewayClient::UpdateRequestValidatorCallable(const UpdateRequestValidatorRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRequestValidatorOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRequestValidator(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::UpdateRequestValidatorAsync(const UpdateRequestValidatorRequest& request, const UpdateRequestValidatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRequestValidatorAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::UpdateRequestValidatorAsyncHelper(const UpdateRequestValidatorRequest& request, const UpdateRequestValidatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRequestValidator(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/resources/";
  ss << request.GetResourceId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateResourceOutcome(UpdateResourceResult(outcome.GetResult()));
  }
  else
  {
    return UpdateResourceOutcome(outcome.GetError());
  }
}

UpdateResourceOutcomeCallable APIGatewayClient::UpdateResourceCallable(const UpdateResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::UpdateResourceAsync(const UpdateResourceRequest& request, const UpdateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateResourceAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::UpdateResourceAsyncHelper(const UpdateResourceRequest& request, const UpdateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateResource(request), context);
}

UpdateRestApiOutcome APIGatewayClient::UpdateRestApi(const UpdateRestApiRequest& request) const
{
  if (!request.RestApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRestApi", "Required field: RestApiId, is not set");
    return UpdateRestApiOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RestApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateRestApiOutcome(UpdateRestApiResult(outcome.GetResult()));
  }
  else
  {
    return UpdateRestApiOutcome(outcome.GetError());
  }
}

UpdateRestApiOutcomeCallable APIGatewayClient::UpdateRestApiCallable(const UpdateRestApiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRestApiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRestApi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::UpdateRestApiAsync(const UpdateRestApiRequest& request, const UpdateRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRestApiAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::UpdateRestApiAsyncHelper(const UpdateRestApiRequest& request, const UpdateRestApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRestApi(request), context);
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
  Aws::StringStream ss;
  ss << "/restapis/";
  ss << request.GetRestApiId();
  ss << "/stages/";
  ss << request.GetStageName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateStageOutcome(UpdateStageResult(outcome.GetResult()));
  }
  else
  {
    return UpdateStageOutcome(outcome.GetError());
  }
}

UpdateStageOutcomeCallable APIGatewayClient::UpdateStageCallable(const UpdateStageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::UpdateStageAsync(const UpdateStageRequest& request, const UpdateStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateStageAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::UpdateStageAsyncHelper(const UpdateStageRequest& request, const UpdateStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateStage(request), context);
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
  Aws::StringStream ss;
  ss << "/usageplans/";
  ss << request.GetUsagePlanId();
  ss << "/keys/";
  ss << request.GetKeyId();
  ss << "/usage";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateUsageOutcome(UpdateUsageResult(outcome.GetResult()));
  }
  else
  {
    return UpdateUsageOutcome(outcome.GetError());
  }
}

UpdateUsageOutcomeCallable APIGatewayClient::UpdateUsageCallable(const UpdateUsageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUsageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUsage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::UpdateUsageAsync(const UpdateUsageRequest& request, const UpdateUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateUsageAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::UpdateUsageAsyncHelper(const UpdateUsageRequest& request, const UpdateUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateUsage(request), context);
}

UpdateUsagePlanOutcome APIGatewayClient::UpdateUsagePlan(const UpdateUsagePlanRequest& request) const
{
  if (!request.UsagePlanIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateUsagePlan", "Required field: UsagePlanId, is not set");
    return UpdateUsagePlanOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UsagePlanId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/usageplans/";
  ss << request.GetUsagePlanId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateUsagePlanOutcome(UpdateUsagePlanResult(outcome.GetResult()));
  }
  else
  {
    return UpdateUsagePlanOutcome(outcome.GetError());
  }
}

UpdateUsagePlanOutcomeCallable APIGatewayClient::UpdateUsagePlanCallable(const UpdateUsagePlanRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateUsagePlanOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateUsagePlan(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::UpdateUsagePlanAsync(const UpdateUsagePlanRequest& request, const UpdateUsagePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateUsagePlanAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::UpdateUsagePlanAsyncHelper(const UpdateUsagePlanRequest& request, const UpdateUsagePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateUsagePlan(request), context);
}

UpdateVpcLinkOutcome APIGatewayClient::UpdateVpcLink(const UpdateVpcLinkRequest& request) const
{
  if (!request.VpcLinkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateVpcLink", "Required field: VpcLinkId, is not set");
    return UpdateVpcLinkOutcome(Aws::Client::AWSError<APIGatewayErrors>(APIGatewayErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VpcLinkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/vpclinks/";
  ss << request.GetVpcLinkId();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateVpcLinkOutcome(UpdateVpcLinkResult(outcome.GetResult()));
  }
  else
  {
    return UpdateVpcLinkOutcome(outcome.GetError());
  }
}

UpdateVpcLinkOutcomeCallable APIGatewayClient::UpdateVpcLinkCallable(const UpdateVpcLinkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVpcLinkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVpcLink(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void APIGatewayClient::UpdateVpcLinkAsync(const UpdateVpcLinkRequest& request, const UpdateVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateVpcLinkAsyncHelper( request, handler, context ); } );
}

void APIGatewayClient::UpdateVpcLinkAsyncHelper(const UpdateVpcLinkRequest& request, const UpdateVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateVpcLink(request), context);
}

