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

#include <aws/apigatewayv2/ApiGatewayV2Client.h>
#include <aws/apigatewayv2/ApiGatewayV2Endpoint.h>
#include <aws/apigatewayv2/ApiGatewayV2ErrorMarshaller.h>
#include <aws/apigatewayv2/model/CreateApiRequest.h>
#include <aws/apigatewayv2/model/CreateApiMappingRequest.h>
#include <aws/apigatewayv2/model/CreateAuthorizerRequest.h>
#include <aws/apigatewayv2/model/CreateDeploymentRequest.h>
#include <aws/apigatewayv2/model/CreateDomainNameRequest.h>
#include <aws/apigatewayv2/model/CreateIntegrationRequest.h>
#include <aws/apigatewayv2/model/CreateIntegrationResponseRequest.h>
#include <aws/apigatewayv2/model/CreateModelRequest.h>
#include <aws/apigatewayv2/model/CreateRouteRequest.h>
#include <aws/apigatewayv2/model/CreateRouteResponseRequest.h>
#include <aws/apigatewayv2/model/CreateStageRequest.h>
#include <aws/apigatewayv2/model/CreateVpcLinkRequest.h>
#include <aws/apigatewayv2/model/DeleteAccessLogSettingsRequest.h>
#include <aws/apigatewayv2/model/DeleteApiRequest.h>
#include <aws/apigatewayv2/model/DeleteApiMappingRequest.h>
#include <aws/apigatewayv2/model/DeleteAuthorizerRequest.h>
#include <aws/apigatewayv2/model/DeleteCorsConfigurationRequest.h>
#include <aws/apigatewayv2/model/DeleteDeploymentRequest.h>
#include <aws/apigatewayv2/model/DeleteDomainNameRequest.h>
#include <aws/apigatewayv2/model/DeleteIntegrationRequest.h>
#include <aws/apigatewayv2/model/DeleteIntegrationResponseRequest.h>
#include <aws/apigatewayv2/model/DeleteModelRequest.h>
#include <aws/apigatewayv2/model/DeleteRouteRequest.h>
#include <aws/apigatewayv2/model/DeleteRouteRequestParameterRequest.h>
#include <aws/apigatewayv2/model/DeleteRouteResponseRequest.h>
#include <aws/apigatewayv2/model/DeleteRouteSettingsRequest.h>
#include <aws/apigatewayv2/model/DeleteStageRequest.h>
#include <aws/apigatewayv2/model/DeleteVpcLinkRequest.h>
#include <aws/apigatewayv2/model/ExportApiRequest.h>
#include <aws/apigatewayv2/model/ResetAuthorizersCacheRequest.h>
#include <aws/apigatewayv2/model/GetApiRequest.h>
#include <aws/apigatewayv2/model/GetApiMappingRequest.h>
#include <aws/apigatewayv2/model/GetApiMappingsRequest.h>
#include <aws/apigatewayv2/model/GetApisRequest.h>
#include <aws/apigatewayv2/model/GetAuthorizerRequest.h>
#include <aws/apigatewayv2/model/GetAuthorizersRequest.h>
#include <aws/apigatewayv2/model/GetDeploymentRequest.h>
#include <aws/apigatewayv2/model/GetDeploymentsRequest.h>
#include <aws/apigatewayv2/model/GetDomainNameRequest.h>
#include <aws/apigatewayv2/model/GetDomainNamesRequest.h>
#include <aws/apigatewayv2/model/GetIntegrationRequest.h>
#include <aws/apigatewayv2/model/GetIntegrationResponseRequest.h>
#include <aws/apigatewayv2/model/GetIntegrationResponsesRequest.h>
#include <aws/apigatewayv2/model/GetIntegrationsRequest.h>
#include <aws/apigatewayv2/model/GetModelRequest.h>
#include <aws/apigatewayv2/model/GetModelTemplateRequest.h>
#include <aws/apigatewayv2/model/GetModelsRequest.h>
#include <aws/apigatewayv2/model/GetRouteRequest.h>
#include <aws/apigatewayv2/model/GetRouteResponseRequest.h>
#include <aws/apigatewayv2/model/GetRouteResponsesRequest.h>
#include <aws/apigatewayv2/model/GetRoutesRequest.h>
#include <aws/apigatewayv2/model/GetStageRequest.h>
#include <aws/apigatewayv2/model/GetStagesRequest.h>
#include <aws/apigatewayv2/model/GetTagsRequest.h>
#include <aws/apigatewayv2/model/GetVpcLinkRequest.h>
#include <aws/apigatewayv2/model/GetVpcLinksRequest.h>
#include <aws/apigatewayv2/model/ImportApiRequest.h>
#include <aws/apigatewayv2/model/ReimportApiRequest.h>
#include <aws/apigatewayv2/model/TagResourceRequest.h>
#include <aws/apigatewayv2/model/UntagResourceRequest.h>
#include <aws/apigatewayv2/model/UpdateApiRequest.h>
#include <aws/apigatewayv2/model/UpdateApiMappingRequest.h>
#include <aws/apigatewayv2/model/UpdateAuthorizerRequest.h>
#include <aws/apigatewayv2/model/UpdateDeploymentRequest.h>
#include <aws/apigatewayv2/model/UpdateDomainNameRequest.h>
#include <aws/apigatewayv2/model/UpdateIntegrationRequest.h>
#include <aws/apigatewayv2/model/UpdateIntegrationResponseRequest.h>
#include <aws/apigatewayv2/model/UpdateModelRequest.h>
#include <aws/apigatewayv2/model/UpdateRouteRequest.h>
#include <aws/apigatewayv2/model/UpdateRouteResponseRequest.h>
#include <aws/apigatewayv2/model/UpdateStageRequest.h>
#include <aws/apigatewayv2/model/UpdateVpcLinkRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ApiGatewayV2;
using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "apigateway";
static const char* ALLOCATION_TAG = "ApiGatewayV2Client";


ApiGatewayV2Client::ApiGatewayV2Client(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<ApiGatewayV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ApiGatewayV2Client::ApiGatewayV2Client(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<ApiGatewayV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ApiGatewayV2Client::ApiGatewayV2Client(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<ApiGatewayV2ErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ApiGatewayV2Client::~ApiGatewayV2Client()
{
}

void ApiGatewayV2Client::init(const ClientConfiguration& config)
{
  SetServiceClientName("ApiGatewayV2");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ApiGatewayV2Endpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ApiGatewayV2Client::OverrideEndpoint(const Aws::String& endpoint)
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

CreateApiOutcome ApiGatewayV2Client::CreateApi(const CreateApiRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateApiOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateApiOutcomeCallable ApiGatewayV2Client::CreateApiCallable(const CreateApiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateApiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::CreateApiAsync(const CreateApiRequest& request, const CreateApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateApiAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::CreateApiAsyncHelper(const CreateApiRequest& request, const CreateApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateApi(request), context);
}

CreateApiMappingOutcome ApiGatewayV2Client::CreateApiMapping(const CreateApiMappingRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateApiMapping", "Required field: DomainName, is not set");
    return CreateApiMappingOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/domainnames/";
  ss << request.GetDomainName();
  ss << "/apimappings";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateApiMappingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateApiMappingOutcomeCallable ApiGatewayV2Client::CreateApiMappingCallable(const CreateApiMappingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateApiMappingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateApiMapping(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::CreateApiMappingAsync(const CreateApiMappingRequest& request, const CreateApiMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateApiMappingAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::CreateApiMappingAsyncHelper(const CreateApiMappingRequest& request, const CreateApiMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateApiMapping(request), context);
}

CreateAuthorizerOutcome ApiGatewayV2Client::CreateAuthorizer(const CreateAuthorizerRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateAuthorizer", "Required field: ApiId, is not set");
    return CreateAuthorizerOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/authorizers";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateAuthorizerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateAuthorizerOutcomeCallable ApiGatewayV2Client::CreateAuthorizerCallable(const CreateAuthorizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateAuthorizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateAuthorizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::CreateAuthorizerAsync(const CreateAuthorizerRequest& request, const CreateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateAuthorizerAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::CreateAuthorizerAsyncHelper(const CreateAuthorizerRequest& request, const CreateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateAuthorizer(request), context);
}

CreateDeploymentOutcome ApiGatewayV2Client::CreateDeployment(const CreateDeploymentRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateDeployment", "Required field: ApiId, is not set");
    return CreateDeploymentOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/deployments";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateDeploymentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDeploymentOutcomeCallable ApiGatewayV2Client::CreateDeploymentCallable(const CreateDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::CreateDeploymentAsync(const CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDeploymentAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::CreateDeploymentAsyncHelper(const CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDeployment(request), context);
}

CreateDomainNameOutcome ApiGatewayV2Client::CreateDomainName(const CreateDomainNameRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/domainnames";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateDomainNameOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDomainNameOutcomeCallable ApiGatewayV2Client::CreateDomainNameCallable(const CreateDomainNameRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDomainNameOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDomainName(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::CreateDomainNameAsync(const CreateDomainNameRequest& request, const CreateDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDomainNameAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::CreateDomainNameAsyncHelper(const CreateDomainNameRequest& request, const CreateDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDomainName(request), context);
}

CreateIntegrationOutcome ApiGatewayV2Client::CreateIntegration(const CreateIntegrationRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateIntegration", "Required field: ApiId, is not set");
    return CreateIntegrationOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/integrations";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateIntegrationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateIntegrationOutcomeCallable ApiGatewayV2Client::CreateIntegrationCallable(const CreateIntegrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateIntegrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateIntegration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::CreateIntegrationAsync(const CreateIntegrationRequest& request, const CreateIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateIntegrationAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::CreateIntegrationAsyncHelper(const CreateIntegrationRequest& request, const CreateIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateIntegration(request), context);
}

CreateIntegrationResponseOutcome ApiGatewayV2Client::CreateIntegrationResponse(const CreateIntegrationResponseRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateIntegrationResponse", "Required field: ApiId, is not set");
    return CreateIntegrationResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.IntegrationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateIntegrationResponse", "Required field: IntegrationId, is not set");
    return CreateIntegrationResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IntegrationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/integrations/";
  ss << request.GetIntegrationId();
  ss << "/integrationresponses";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateIntegrationResponseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateIntegrationResponseOutcomeCallable ApiGatewayV2Client::CreateIntegrationResponseCallable(const CreateIntegrationResponseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateIntegrationResponseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateIntegrationResponse(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::CreateIntegrationResponseAsync(const CreateIntegrationResponseRequest& request, const CreateIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateIntegrationResponseAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::CreateIntegrationResponseAsyncHelper(const CreateIntegrationResponseRequest& request, const CreateIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateIntegrationResponse(request), context);
}

CreateModelOutcome ApiGatewayV2Client::CreateModel(const CreateModelRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateModel", "Required field: ApiId, is not set");
    return CreateModelOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/models";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateModelOutcomeCallable ApiGatewayV2Client::CreateModelCallable(const CreateModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::CreateModelAsync(const CreateModelRequest& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateModelAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::CreateModelAsyncHelper(const CreateModelRequest& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateModel(request), context);
}

CreateRouteOutcome ApiGatewayV2Client::CreateRoute(const CreateRouteRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateRoute", "Required field: ApiId, is not set");
    return CreateRouteOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/routes";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateRouteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRouteOutcomeCallable ApiGatewayV2Client::CreateRouteCallable(const CreateRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::CreateRouteAsync(const CreateRouteRequest& request, const CreateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateRouteAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::CreateRouteAsyncHelper(const CreateRouteRequest& request, const CreateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRoute(request), context);
}

CreateRouteResponseOutcome ApiGatewayV2Client::CreateRouteResponse(const CreateRouteResponseRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateRouteResponse", "Required field: ApiId, is not set");
    return CreateRouteResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.RouteIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateRouteResponse", "Required field: RouteId, is not set");
    return CreateRouteResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RouteId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/routes/";
  ss << request.GetRouteId();
  ss << "/routeresponses";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateRouteResponseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateRouteResponseOutcomeCallable ApiGatewayV2Client::CreateRouteResponseCallable(const CreateRouteResponseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRouteResponseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRouteResponse(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::CreateRouteResponseAsync(const CreateRouteResponseRequest& request, const CreateRouteResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateRouteResponseAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::CreateRouteResponseAsyncHelper(const CreateRouteResponseRequest& request, const CreateRouteResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRouteResponse(request), context);
}

CreateStageOutcome ApiGatewayV2Client::CreateStage(const CreateStageRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateStage", "Required field: ApiId, is not set");
    return CreateStageOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/stages";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateStageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateStageOutcomeCallable ApiGatewayV2Client::CreateStageCallable(const CreateStageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateStageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateStage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::CreateStageAsync(const CreateStageRequest& request, const CreateStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateStageAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::CreateStageAsyncHelper(const CreateStageRequest& request, const CreateStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateStage(request), context);
}

CreateVpcLinkOutcome ApiGatewayV2Client::CreateVpcLink(const CreateVpcLinkRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/vpclinks";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateVpcLinkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateVpcLinkOutcomeCallable ApiGatewayV2Client::CreateVpcLinkCallable(const CreateVpcLinkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVpcLinkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVpcLink(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::CreateVpcLinkAsync(const CreateVpcLinkRequest& request, const CreateVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateVpcLinkAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::CreateVpcLinkAsyncHelper(const CreateVpcLinkRequest& request, const CreateVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVpcLink(request), context);
}

DeleteAccessLogSettingsOutcome ApiGatewayV2Client::DeleteAccessLogSettings(const DeleteAccessLogSettingsRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAccessLogSettings", "Required field: ApiId, is not set");
    return DeleteAccessLogSettingsOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.StageNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAccessLogSettings", "Required field: StageName, is not set");
    return DeleteAccessLogSettingsOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StageName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/stages/";
  ss << request.GetStageName();
  ss << "/accesslogsettings";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteAccessLogSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAccessLogSettingsOutcomeCallable ApiGatewayV2Client::DeleteAccessLogSettingsCallable(const DeleteAccessLogSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAccessLogSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAccessLogSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::DeleteAccessLogSettingsAsync(const DeleteAccessLogSettingsRequest& request, const DeleteAccessLogSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAccessLogSettingsAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::DeleteAccessLogSettingsAsyncHelper(const DeleteAccessLogSettingsRequest& request, const DeleteAccessLogSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAccessLogSettings(request), context);
}

DeleteApiOutcome ApiGatewayV2Client::DeleteApi(const DeleteApiRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApi", "Required field: ApiId, is not set");
    return DeleteApiOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteApiOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteApiOutcomeCallable ApiGatewayV2Client::DeleteApiCallable(const DeleteApiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::DeleteApiAsync(const DeleteApiRequest& request, const DeleteApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteApiAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::DeleteApiAsyncHelper(const DeleteApiRequest& request, const DeleteApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteApi(request), context);
}

DeleteApiMappingOutcome ApiGatewayV2Client::DeleteApiMapping(const DeleteApiMappingRequest& request) const
{
  if (!request.ApiMappingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApiMapping", "Required field: ApiMappingId, is not set");
    return DeleteApiMappingOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiMappingId]", false));
  }
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteApiMapping", "Required field: DomainName, is not set");
    return DeleteApiMappingOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/domainnames/";
  ss << request.GetDomainName();
  ss << "/apimappings/";
  ss << request.GetApiMappingId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteApiMappingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteApiMappingOutcomeCallable ApiGatewayV2Client::DeleteApiMappingCallable(const DeleteApiMappingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteApiMappingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteApiMapping(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::DeleteApiMappingAsync(const DeleteApiMappingRequest& request, const DeleteApiMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteApiMappingAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::DeleteApiMappingAsyncHelper(const DeleteApiMappingRequest& request, const DeleteApiMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteApiMapping(request), context);
}

DeleteAuthorizerOutcome ApiGatewayV2Client::DeleteAuthorizer(const DeleteAuthorizerRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAuthorizer", "Required field: ApiId, is not set");
    return DeleteAuthorizerOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.AuthorizerIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteAuthorizer", "Required field: AuthorizerId, is not set");
    return DeleteAuthorizerOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AuthorizerId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/authorizers/";
  ss << request.GetAuthorizerId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteAuthorizerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteAuthorizerOutcomeCallable ApiGatewayV2Client::DeleteAuthorizerCallable(const DeleteAuthorizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAuthorizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAuthorizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::DeleteAuthorizerAsync(const DeleteAuthorizerRequest& request, const DeleteAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAuthorizerAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::DeleteAuthorizerAsyncHelper(const DeleteAuthorizerRequest& request, const DeleteAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAuthorizer(request), context);
}

DeleteCorsConfigurationOutcome ApiGatewayV2Client::DeleteCorsConfiguration(const DeleteCorsConfigurationRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteCorsConfiguration", "Required field: ApiId, is not set");
    return DeleteCorsConfigurationOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/cors";
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteCorsConfigurationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteCorsConfigurationOutcomeCallable ApiGatewayV2Client::DeleteCorsConfigurationCallable(const DeleteCorsConfigurationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteCorsConfigurationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteCorsConfiguration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::DeleteCorsConfigurationAsync(const DeleteCorsConfigurationRequest& request, const DeleteCorsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteCorsConfigurationAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::DeleteCorsConfigurationAsyncHelper(const DeleteCorsConfigurationRequest& request, const DeleteCorsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCorsConfiguration(request), context);
}

DeleteDeploymentOutcome ApiGatewayV2Client::DeleteDeployment(const DeleteDeploymentRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDeployment", "Required field: ApiId, is not set");
    return DeleteDeploymentOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.DeploymentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDeployment", "Required field: DeploymentId, is not set");
    return DeleteDeploymentOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeploymentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/deployments/";
  ss << request.GetDeploymentId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteDeploymentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDeploymentOutcomeCallable ApiGatewayV2Client::DeleteDeploymentCallable(const DeleteDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::DeleteDeploymentAsync(const DeleteDeploymentRequest& request, const DeleteDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDeploymentAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::DeleteDeploymentAsyncHelper(const DeleteDeploymentRequest& request, const DeleteDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDeployment(request), context);
}

DeleteDomainNameOutcome ApiGatewayV2Client::DeleteDomainName(const DeleteDomainNameRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteDomainName", "Required field: DomainName, is not set");
    return DeleteDomainNameOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/domainnames/";
  ss << request.GetDomainName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteDomainNameOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteDomainNameOutcomeCallable ApiGatewayV2Client::DeleteDomainNameCallable(const DeleteDomainNameRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDomainNameOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDomainName(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::DeleteDomainNameAsync(const DeleteDomainNameRequest& request, const DeleteDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDomainNameAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::DeleteDomainNameAsyncHelper(const DeleteDomainNameRequest& request, const DeleteDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDomainName(request), context);
}

DeleteIntegrationOutcome ApiGatewayV2Client::DeleteIntegration(const DeleteIntegrationRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIntegration", "Required field: ApiId, is not set");
    return DeleteIntegrationOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.IntegrationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIntegration", "Required field: IntegrationId, is not set");
    return DeleteIntegrationOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IntegrationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/integrations/";
  ss << request.GetIntegrationId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteIntegrationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteIntegrationOutcomeCallable ApiGatewayV2Client::DeleteIntegrationCallable(const DeleteIntegrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIntegrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIntegration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::DeleteIntegrationAsync(const DeleteIntegrationRequest& request, const DeleteIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteIntegrationAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::DeleteIntegrationAsyncHelper(const DeleteIntegrationRequest& request, const DeleteIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteIntegration(request), context);
}

DeleteIntegrationResponseOutcome ApiGatewayV2Client::DeleteIntegrationResponse(const DeleteIntegrationResponseRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIntegrationResponse", "Required field: ApiId, is not set");
    return DeleteIntegrationResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.IntegrationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIntegrationResponse", "Required field: IntegrationId, is not set");
    return DeleteIntegrationResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IntegrationId]", false));
  }
  if (!request.IntegrationResponseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteIntegrationResponse", "Required field: IntegrationResponseId, is not set");
    return DeleteIntegrationResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IntegrationResponseId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/integrations/";
  ss << request.GetIntegrationId();
  ss << "/integrationresponses/";
  ss << request.GetIntegrationResponseId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteIntegrationResponseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteIntegrationResponseOutcomeCallable ApiGatewayV2Client::DeleteIntegrationResponseCallable(const DeleteIntegrationResponseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIntegrationResponseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIntegrationResponse(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::DeleteIntegrationResponseAsync(const DeleteIntegrationResponseRequest& request, const DeleteIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteIntegrationResponseAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::DeleteIntegrationResponseAsyncHelper(const DeleteIntegrationResponseRequest& request, const DeleteIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteIntegrationResponse(request), context);
}

DeleteModelOutcome ApiGatewayV2Client::DeleteModel(const DeleteModelRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteModel", "Required field: ApiId, is not set");
    return DeleteModelOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.ModelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteModel", "Required field: ModelId, is not set");
    return DeleteModelOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ModelId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/models/";
  ss << request.GetModelId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteModelOutcomeCallable ApiGatewayV2Client::DeleteModelCallable(const DeleteModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::DeleteModelAsync(const DeleteModelRequest& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteModelAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::DeleteModelAsyncHelper(const DeleteModelRequest& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteModel(request), context);
}

DeleteRouteOutcome ApiGatewayV2Client::DeleteRoute(const DeleteRouteRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRoute", "Required field: ApiId, is not set");
    return DeleteRouteOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.RouteIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRoute", "Required field: RouteId, is not set");
    return DeleteRouteOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RouteId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/routes/";
  ss << request.GetRouteId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteRouteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteRouteOutcomeCallable ApiGatewayV2Client::DeleteRouteCallable(const DeleteRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::DeleteRouteAsync(const DeleteRouteRequest& request, const DeleteRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRouteAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::DeleteRouteAsyncHelper(const DeleteRouteRequest& request, const DeleteRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRoute(request), context);
}

DeleteRouteRequestParameterOutcome ApiGatewayV2Client::DeleteRouteRequestParameter(const DeleteRouteRequestParameterRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRouteRequestParameter", "Required field: ApiId, is not set");
    return DeleteRouteRequestParameterOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.RequestParameterKeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRouteRequestParameter", "Required field: RequestParameterKey, is not set");
    return DeleteRouteRequestParameterOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RequestParameterKey]", false));
  }
  if (!request.RouteIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRouteRequestParameter", "Required field: RouteId, is not set");
    return DeleteRouteRequestParameterOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RouteId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/routes/";
  ss << request.GetRouteId();
  ss << "/requestparameters/";
  ss << request.GetRequestParameterKey();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteRouteRequestParameterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteRouteRequestParameterOutcomeCallable ApiGatewayV2Client::DeleteRouteRequestParameterCallable(const DeleteRouteRequestParameterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRouteRequestParameterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRouteRequestParameter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::DeleteRouteRequestParameterAsync(const DeleteRouteRequestParameterRequest& request, const DeleteRouteRequestParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRouteRequestParameterAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::DeleteRouteRequestParameterAsyncHelper(const DeleteRouteRequestParameterRequest& request, const DeleteRouteRequestParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRouteRequestParameter(request), context);
}

DeleteRouteResponseOutcome ApiGatewayV2Client::DeleteRouteResponse(const DeleteRouteResponseRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRouteResponse", "Required field: ApiId, is not set");
    return DeleteRouteResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.RouteIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRouteResponse", "Required field: RouteId, is not set");
    return DeleteRouteResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RouteId]", false));
  }
  if (!request.RouteResponseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRouteResponse", "Required field: RouteResponseId, is not set");
    return DeleteRouteResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RouteResponseId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/routes/";
  ss << request.GetRouteId();
  ss << "/routeresponses/";
  ss << request.GetRouteResponseId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteRouteResponseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteRouteResponseOutcomeCallable ApiGatewayV2Client::DeleteRouteResponseCallable(const DeleteRouteResponseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRouteResponseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRouteResponse(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::DeleteRouteResponseAsync(const DeleteRouteResponseRequest& request, const DeleteRouteResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRouteResponseAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::DeleteRouteResponseAsyncHelper(const DeleteRouteResponseRequest& request, const DeleteRouteResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRouteResponse(request), context);
}

DeleteRouteSettingsOutcome ApiGatewayV2Client::DeleteRouteSettings(const DeleteRouteSettingsRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRouteSettings", "Required field: ApiId, is not set");
    return DeleteRouteSettingsOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.RouteKeyHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRouteSettings", "Required field: RouteKey, is not set");
    return DeleteRouteSettingsOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RouteKey]", false));
  }
  if (!request.StageNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteRouteSettings", "Required field: StageName, is not set");
    return DeleteRouteSettingsOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StageName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/stages/";
  ss << request.GetStageName();
  ss << "/routesettings/";
  ss << request.GetRouteKey();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteRouteSettingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteRouteSettingsOutcomeCallable ApiGatewayV2Client::DeleteRouteSettingsCallable(const DeleteRouteSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRouteSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRouteSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::DeleteRouteSettingsAsync(const DeleteRouteSettingsRequest& request, const DeleteRouteSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRouteSettingsAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::DeleteRouteSettingsAsyncHelper(const DeleteRouteSettingsRequest& request, const DeleteRouteSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRouteSettings(request), context);
}

DeleteStageOutcome ApiGatewayV2Client::DeleteStage(const DeleteStageRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteStage", "Required field: ApiId, is not set");
    return DeleteStageOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.StageNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteStage", "Required field: StageName, is not set");
    return DeleteStageOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StageName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/stages/";
  ss << request.GetStageName();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteStageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteStageOutcomeCallable ApiGatewayV2Client::DeleteStageCallable(const DeleteStageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteStageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteStage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::DeleteStageAsync(const DeleteStageRequest& request, const DeleteStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteStageAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::DeleteStageAsyncHelper(const DeleteStageRequest& request, const DeleteStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteStage(request), context);
}

DeleteVpcLinkOutcome ApiGatewayV2Client::DeleteVpcLink(const DeleteVpcLinkRequest& request) const
{
  if (!request.VpcLinkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteVpcLink", "Required field: VpcLinkId, is not set");
    return DeleteVpcLinkOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VpcLinkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/vpclinks/";
  ss << request.GetVpcLinkId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteVpcLinkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteVpcLinkOutcomeCallable ApiGatewayV2Client::DeleteVpcLinkCallable(const DeleteVpcLinkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVpcLinkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVpcLink(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::DeleteVpcLinkAsync(const DeleteVpcLinkRequest& request, const DeleteVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVpcLinkAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::DeleteVpcLinkAsyncHelper(const DeleteVpcLinkRequest& request, const DeleteVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVpcLink(request), context);
}

ExportApiOutcome ApiGatewayV2Client::ExportApi(const ExportApiRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ExportApi", "Required field: ApiId, is not set");
    return ExportApiOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.OutputTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ExportApi", "Required field: OutputType, is not set");
    return ExportApiOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OutputType]", false));
  }
  if (!request.SpecificationHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ExportApi", "Required field: Specification, is not set");
    return ExportApiOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Specification]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/exports/";
  ss << request.GetSpecification();
  uri.SetPath(uri.GetPath() + ss.str());
  return ExportApiOutcome(MakeRequestWithUnparsedResponse(uri, request, Aws::Http::HttpMethod::HTTP_GET));
}

ExportApiOutcomeCallable ApiGatewayV2Client::ExportApiCallable(const ExportApiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExportApiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExportApi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::ExportApiAsync(const ExportApiRequest& request, const ExportApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ExportApiAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::ExportApiAsyncHelper(const ExportApiRequest& request, const ExportApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ExportApi(request), context);
}

ResetAuthorizersCacheOutcome ApiGatewayV2Client::ResetAuthorizersCache(const ResetAuthorizersCacheRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ResetAuthorizersCache", "Required field: ApiId, is not set");
    return ResetAuthorizersCacheOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.StageNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ResetAuthorizersCache", "Required field: StageName, is not set");
    return ResetAuthorizersCacheOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StageName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/stages/";
  ss << request.GetStageName();
  ss << "/cache/authorizers";
  uri.SetPath(uri.GetPath() + ss.str());
  return ResetAuthorizersCacheOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

ResetAuthorizersCacheOutcomeCallable ApiGatewayV2Client::ResetAuthorizersCacheCallable(const ResetAuthorizersCacheRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ResetAuthorizersCacheOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ResetAuthorizersCache(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::ResetAuthorizersCacheAsync(const ResetAuthorizersCacheRequest& request, const ResetAuthorizersCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ResetAuthorizersCacheAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::ResetAuthorizersCacheAsyncHelper(const ResetAuthorizersCacheRequest& request, const ResetAuthorizersCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResetAuthorizersCache(request), context);
}

GetApiOutcome ApiGatewayV2Client::GetApi(const GetApiRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApi", "Required field: ApiId, is not set");
    return GetApiOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetApiOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetApiOutcomeCallable ApiGatewayV2Client::GetApiCallable(const GetApiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::GetApiAsync(const GetApiRequest& request, const GetApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetApiAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::GetApiAsyncHelper(const GetApiRequest& request, const GetApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetApi(request), context);
}

GetApiMappingOutcome ApiGatewayV2Client::GetApiMapping(const GetApiMappingRequest& request) const
{
  if (!request.ApiMappingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApiMapping", "Required field: ApiMappingId, is not set");
    return GetApiMappingOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiMappingId]", false));
  }
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApiMapping", "Required field: DomainName, is not set");
    return GetApiMappingOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/domainnames/";
  ss << request.GetDomainName();
  ss << "/apimappings/";
  ss << request.GetApiMappingId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetApiMappingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetApiMappingOutcomeCallable ApiGatewayV2Client::GetApiMappingCallable(const GetApiMappingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApiMappingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApiMapping(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::GetApiMappingAsync(const GetApiMappingRequest& request, const GetApiMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetApiMappingAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::GetApiMappingAsyncHelper(const GetApiMappingRequest& request, const GetApiMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetApiMapping(request), context);
}

GetApiMappingsOutcome ApiGatewayV2Client::GetApiMappings(const GetApiMappingsRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetApiMappings", "Required field: DomainName, is not set");
    return GetApiMappingsOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/domainnames/";
  ss << request.GetDomainName();
  ss << "/apimappings";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetApiMappingsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetApiMappingsOutcomeCallable ApiGatewayV2Client::GetApiMappingsCallable(const GetApiMappingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApiMappingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApiMappings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::GetApiMappingsAsync(const GetApiMappingsRequest& request, const GetApiMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetApiMappingsAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::GetApiMappingsAsyncHelper(const GetApiMappingsRequest& request, const GetApiMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetApiMappings(request), context);
}

GetApisOutcome ApiGatewayV2Client::GetApis(const GetApisRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetApisOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetApisOutcomeCallable ApiGatewayV2Client::GetApisCallable(const GetApisRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetApisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetApis(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::GetApisAsync(const GetApisRequest& request, const GetApisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetApisAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::GetApisAsyncHelper(const GetApisRequest& request, const GetApisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetApis(request), context);
}

GetAuthorizerOutcome ApiGatewayV2Client::GetAuthorizer(const GetAuthorizerRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAuthorizer", "Required field: ApiId, is not set");
    return GetAuthorizerOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.AuthorizerIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAuthorizer", "Required field: AuthorizerId, is not set");
    return GetAuthorizerOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AuthorizerId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/authorizers/";
  ss << request.GetAuthorizerId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetAuthorizerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAuthorizerOutcomeCallable ApiGatewayV2Client::GetAuthorizerCallable(const GetAuthorizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAuthorizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAuthorizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::GetAuthorizerAsync(const GetAuthorizerRequest& request, const GetAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAuthorizerAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::GetAuthorizerAsyncHelper(const GetAuthorizerRequest& request, const GetAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAuthorizer(request), context);
}

GetAuthorizersOutcome ApiGatewayV2Client::GetAuthorizers(const GetAuthorizersRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAuthorizers", "Required field: ApiId, is not set");
    return GetAuthorizersOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/authorizers";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetAuthorizersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetAuthorizersOutcomeCallable ApiGatewayV2Client::GetAuthorizersCallable(const GetAuthorizersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetAuthorizersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAuthorizers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::GetAuthorizersAsync(const GetAuthorizersRequest& request, const GetAuthorizersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetAuthorizersAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::GetAuthorizersAsyncHelper(const GetAuthorizersRequest& request, const GetAuthorizersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAuthorizers(request), context);
}

GetDeploymentOutcome ApiGatewayV2Client::GetDeployment(const GetDeploymentRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDeployment", "Required field: ApiId, is not set");
    return GetDeploymentOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.DeploymentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDeployment", "Required field: DeploymentId, is not set");
    return GetDeploymentOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeploymentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/deployments/";
  ss << request.GetDeploymentId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetDeploymentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDeploymentOutcomeCallable ApiGatewayV2Client::GetDeploymentCallable(const GetDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::GetDeploymentAsync(const GetDeploymentRequest& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDeploymentAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::GetDeploymentAsyncHelper(const GetDeploymentRequest& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDeployment(request), context);
}

GetDeploymentsOutcome ApiGatewayV2Client::GetDeployments(const GetDeploymentsRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDeployments", "Required field: ApiId, is not set");
    return GetDeploymentsOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/deployments";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetDeploymentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDeploymentsOutcomeCallable ApiGatewayV2Client::GetDeploymentsCallable(const GetDeploymentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDeploymentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDeployments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::GetDeploymentsAsync(const GetDeploymentsRequest& request, const GetDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDeploymentsAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::GetDeploymentsAsyncHelper(const GetDeploymentsRequest& request, const GetDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDeployments(request), context);
}

GetDomainNameOutcome ApiGatewayV2Client::GetDomainName(const GetDomainNameRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDomainName", "Required field: DomainName, is not set");
    return GetDomainNameOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/domainnames/";
  ss << request.GetDomainName();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetDomainNameOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDomainNameOutcomeCallable ApiGatewayV2Client::GetDomainNameCallable(const GetDomainNameRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDomainNameOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDomainName(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::GetDomainNameAsync(const GetDomainNameRequest& request, const GetDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDomainNameAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::GetDomainNameAsyncHelper(const GetDomainNameRequest& request, const GetDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDomainName(request), context);
}

GetDomainNamesOutcome ApiGatewayV2Client::GetDomainNames(const GetDomainNamesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/domainnames";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetDomainNamesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetDomainNamesOutcomeCallable ApiGatewayV2Client::GetDomainNamesCallable(const GetDomainNamesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDomainNamesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDomainNames(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::GetDomainNamesAsync(const GetDomainNamesRequest& request, const GetDomainNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDomainNamesAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::GetDomainNamesAsyncHelper(const GetDomainNamesRequest& request, const GetDomainNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDomainNames(request), context);
}

GetIntegrationOutcome ApiGatewayV2Client::GetIntegration(const GetIntegrationRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIntegration", "Required field: ApiId, is not set");
    return GetIntegrationOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.IntegrationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIntegration", "Required field: IntegrationId, is not set");
    return GetIntegrationOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IntegrationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/integrations/";
  ss << request.GetIntegrationId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetIntegrationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetIntegrationOutcomeCallable ApiGatewayV2Client::GetIntegrationCallable(const GetIntegrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIntegrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIntegration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::GetIntegrationAsync(const GetIntegrationRequest& request, const GetIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetIntegrationAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::GetIntegrationAsyncHelper(const GetIntegrationRequest& request, const GetIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetIntegration(request), context);
}

GetIntegrationResponseOutcome ApiGatewayV2Client::GetIntegrationResponse(const GetIntegrationResponseRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIntegrationResponse", "Required field: ApiId, is not set");
    return GetIntegrationResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.IntegrationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIntegrationResponse", "Required field: IntegrationId, is not set");
    return GetIntegrationResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IntegrationId]", false));
  }
  if (!request.IntegrationResponseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIntegrationResponse", "Required field: IntegrationResponseId, is not set");
    return GetIntegrationResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IntegrationResponseId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/integrations/";
  ss << request.GetIntegrationId();
  ss << "/integrationresponses/";
  ss << request.GetIntegrationResponseId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetIntegrationResponseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetIntegrationResponseOutcomeCallable ApiGatewayV2Client::GetIntegrationResponseCallable(const GetIntegrationResponseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIntegrationResponseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIntegrationResponse(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::GetIntegrationResponseAsync(const GetIntegrationResponseRequest& request, const GetIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetIntegrationResponseAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::GetIntegrationResponseAsyncHelper(const GetIntegrationResponseRequest& request, const GetIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetIntegrationResponse(request), context);
}

GetIntegrationResponsesOutcome ApiGatewayV2Client::GetIntegrationResponses(const GetIntegrationResponsesRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIntegrationResponses", "Required field: ApiId, is not set");
    return GetIntegrationResponsesOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.IntegrationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIntegrationResponses", "Required field: IntegrationId, is not set");
    return GetIntegrationResponsesOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IntegrationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/integrations/";
  ss << request.GetIntegrationId();
  ss << "/integrationresponses";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetIntegrationResponsesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetIntegrationResponsesOutcomeCallable ApiGatewayV2Client::GetIntegrationResponsesCallable(const GetIntegrationResponsesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIntegrationResponsesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIntegrationResponses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::GetIntegrationResponsesAsync(const GetIntegrationResponsesRequest& request, const GetIntegrationResponsesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetIntegrationResponsesAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::GetIntegrationResponsesAsyncHelper(const GetIntegrationResponsesRequest& request, const GetIntegrationResponsesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetIntegrationResponses(request), context);
}

GetIntegrationsOutcome ApiGatewayV2Client::GetIntegrations(const GetIntegrationsRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetIntegrations", "Required field: ApiId, is not set");
    return GetIntegrationsOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/integrations";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetIntegrationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetIntegrationsOutcomeCallable ApiGatewayV2Client::GetIntegrationsCallable(const GetIntegrationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetIntegrationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetIntegrations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::GetIntegrationsAsync(const GetIntegrationsRequest& request, const GetIntegrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetIntegrationsAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::GetIntegrationsAsyncHelper(const GetIntegrationsRequest& request, const GetIntegrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetIntegrations(request), context);
}

GetModelOutcome ApiGatewayV2Client::GetModel(const GetModelRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetModel", "Required field: ApiId, is not set");
    return GetModelOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.ModelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetModel", "Required field: ModelId, is not set");
    return GetModelOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ModelId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/models/";
  ss << request.GetModelId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetModelOutcomeCallable ApiGatewayV2Client::GetModelCallable(const GetModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::GetModelAsync(const GetModelRequest& request, const GetModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetModelAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::GetModelAsyncHelper(const GetModelRequest& request, const GetModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetModel(request), context);
}

GetModelTemplateOutcome ApiGatewayV2Client::GetModelTemplate(const GetModelTemplateRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetModelTemplate", "Required field: ApiId, is not set");
    return GetModelTemplateOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.ModelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetModelTemplate", "Required field: ModelId, is not set");
    return GetModelTemplateOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ModelId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/models/";
  ss << request.GetModelId();
  ss << "/template";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetModelTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetModelTemplateOutcomeCallable ApiGatewayV2Client::GetModelTemplateCallable(const GetModelTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetModelTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetModelTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::GetModelTemplateAsync(const GetModelTemplateRequest& request, const GetModelTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetModelTemplateAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::GetModelTemplateAsyncHelper(const GetModelTemplateRequest& request, const GetModelTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetModelTemplate(request), context);
}

GetModelsOutcome ApiGatewayV2Client::GetModels(const GetModelsRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetModels", "Required field: ApiId, is not set");
    return GetModelsOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/models";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetModelsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetModelsOutcomeCallable ApiGatewayV2Client::GetModelsCallable(const GetModelsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetModelsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetModels(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::GetModelsAsync(const GetModelsRequest& request, const GetModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetModelsAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::GetModelsAsyncHelper(const GetModelsRequest& request, const GetModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetModels(request), context);
}

GetRouteOutcome ApiGatewayV2Client::GetRoute(const GetRouteRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRoute", "Required field: ApiId, is not set");
    return GetRouteOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.RouteIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRoute", "Required field: RouteId, is not set");
    return GetRouteOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RouteId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/routes/";
  ss << request.GetRouteId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetRouteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetRouteOutcomeCallable ApiGatewayV2Client::GetRouteCallable(const GetRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::GetRouteAsync(const GetRouteRequest& request, const GetRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRouteAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::GetRouteAsyncHelper(const GetRouteRequest& request, const GetRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRoute(request), context);
}

GetRouteResponseOutcome ApiGatewayV2Client::GetRouteResponse(const GetRouteResponseRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRouteResponse", "Required field: ApiId, is not set");
    return GetRouteResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.RouteIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRouteResponse", "Required field: RouteId, is not set");
    return GetRouteResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RouteId]", false));
  }
  if (!request.RouteResponseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRouteResponse", "Required field: RouteResponseId, is not set");
    return GetRouteResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RouteResponseId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/routes/";
  ss << request.GetRouteId();
  ss << "/routeresponses/";
  ss << request.GetRouteResponseId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetRouteResponseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetRouteResponseOutcomeCallable ApiGatewayV2Client::GetRouteResponseCallable(const GetRouteResponseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRouteResponseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRouteResponse(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::GetRouteResponseAsync(const GetRouteResponseRequest& request, const GetRouteResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRouteResponseAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::GetRouteResponseAsyncHelper(const GetRouteResponseRequest& request, const GetRouteResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRouteResponse(request), context);
}

GetRouteResponsesOutcome ApiGatewayV2Client::GetRouteResponses(const GetRouteResponsesRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRouteResponses", "Required field: ApiId, is not set");
    return GetRouteResponsesOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.RouteIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRouteResponses", "Required field: RouteId, is not set");
    return GetRouteResponsesOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RouteId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/routes/";
  ss << request.GetRouteId();
  ss << "/routeresponses";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetRouteResponsesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetRouteResponsesOutcomeCallable ApiGatewayV2Client::GetRouteResponsesCallable(const GetRouteResponsesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRouteResponsesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRouteResponses(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::GetRouteResponsesAsync(const GetRouteResponsesRequest& request, const GetRouteResponsesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRouteResponsesAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::GetRouteResponsesAsyncHelper(const GetRouteResponsesRequest& request, const GetRouteResponsesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRouteResponses(request), context);
}

GetRoutesOutcome ApiGatewayV2Client::GetRoutes(const GetRoutesRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetRoutes", "Required field: ApiId, is not set");
    return GetRoutesOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/routes";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetRoutesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetRoutesOutcomeCallable ApiGatewayV2Client::GetRoutesCallable(const GetRoutesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetRoutesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetRoutes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::GetRoutesAsync(const GetRoutesRequest& request, const GetRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetRoutesAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::GetRoutesAsyncHelper(const GetRoutesRequest& request, const GetRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetRoutes(request), context);
}

GetStageOutcome ApiGatewayV2Client::GetStage(const GetStageRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStage", "Required field: ApiId, is not set");
    return GetStageOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.StageNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStage", "Required field: StageName, is not set");
    return GetStageOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StageName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/stages/";
  ss << request.GetStageName();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetStageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetStageOutcomeCallable ApiGatewayV2Client::GetStageCallable(const GetStageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::GetStageAsync(const GetStageRequest& request, const GetStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetStageAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::GetStageAsyncHelper(const GetStageRequest& request, const GetStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetStage(request), context);
}

GetStagesOutcome ApiGatewayV2Client::GetStages(const GetStagesRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStages", "Required field: ApiId, is not set");
    return GetStagesOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/stages";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetStagesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetStagesOutcomeCallable ApiGatewayV2Client::GetStagesCallable(const GetStagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetStagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetStages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::GetStagesAsync(const GetStagesRequest& request, const GetStagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetStagesAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::GetStagesAsyncHelper(const GetStagesRequest& request, const GetStagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetStages(request), context);
}

GetTagsOutcome ApiGatewayV2Client::GetTags(const GetTagsRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTags", "Required field: ResourceArn, is not set");
    return GetTagsOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetTagsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetTagsOutcomeCallable ApiGatewayV2Client::GetTagsCallable(const GetTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::GetTagsAsync(const GetTagsRequest& request, const GetTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetTagsAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::GetTagsAsyncHelper(const GetTagsRequest& request, const GetTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetTags(request), context);
}

GetVpcLinkOutcome ApiGatewayV2Client::GetVpcLink(const GetVpcLinkRequest& request) const
{
  if (!request.VpcLinkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetVpcLink", "Required field: VpcLinkId, is not set");
    return GetVpcLinkOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VpcLinkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/vpclinks/";
  ss << request.GetVpcLinkId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetVpcLinkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetVpcLinkOutcomeCallable ApiGatewayV2Client::GetVpcLinkCallable(const GetVpcLinkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVpcLinkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVpcLink(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::GetVpcLinkAsync(const GetVpcLinkRequest& request, const GetVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetVpcLinkAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::GetVpcLinkAsyncHelper(const GetVpcLinkRequest& request, const GetVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetVpcLink(request), context);
}

GetVpcLinksOutcome ApiGatewayV2Client::GetVpcLinks(const GetVpcLinksRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/vpclinks";
  uri.SetPath(uri.GetPath() + ss.str());
  return GetVpcLinksOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetVpcLinksOutcomeCallable ApiGatewayV2Client::GetVpcLinksCallable(const GetVpcLinksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetVpcLinksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetVpcLinks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::GetVpcLinksAsync(const GetVpcLinksRequest& request, const GetVpcLinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetVpcLinksAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::GetVpcLinksAsyncHelper(const GetVpcLinksRequest& request, const GetVpcLinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetVpcLinks(request), context);
}

ImportApiOutcome ApiGatewayV2Client::ImportApi(const ImportApiRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis";
  uri.SetPath(uri.GetPath() + ss.str());
  return ImportApiOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

ImportApiOutcomeCallable ApiGatewayV2Client::ImportApiCallable(const ImportApiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportApiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportApi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::ImportApiAsync(const ImportApiRequest& request, const ImportApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ImportApiAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::ImportApiAsyncHelper(const ImportApiRequest& request, const ImportApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ImportApi(request), context);
}

ReimportApiOutcome ApiGatewayV2Client::ReimportApi(const ReimportApiRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ReimportApi", "Required field: ApiId, is not set");
    return ReimportApiOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  uri.SetPath(uri.GetPath() + ss.str());
  return ReimportApiOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

ReimportApiOutcomeCallable ApiGatewayV2Client::ReimportApiCallable(const ReimportApiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ReimportApiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ReimportApi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::ReimportApiAsync(const ReimportApiRequest& request, const ReimportApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ReimportApiAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::ReimportApiAsyncHelper(const ReimportApiRequest& request, const ReimportApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ReimportApi(request), context);
}

TagResourceOutcome ApiGatewayV2Client::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable ApiGatewayV2Client::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome ApiGatewayV2Client::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable ApiGatewayV2Client::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateApiOutcome ApiGatewayV2Client::UpdateApi(const UpdateApiRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApi", "Required field: ApiId, is not set");
    return UpdateApiOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateApiOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateApiOutcomeCallable ApiGatewayV2Client::UpdateApiCallable(const UpdateApiRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApiOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApi(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::UpdateApiAsync(const UpdateApiRequest& request, const UpdateApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateApiAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::UpdateApiAsyncHelper(const UpdateApiRequest& request, const UpdateApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateApi(request), context);
}

UpdateApiMappingOutcome ApiGatewayV2Client::UpdateApiMapping(const UpdateApiMappingRequest& request) const
{
  if (!request.ApiMappingIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApiMapping", "Required field: ApiMappingId, is not set");
    return UpdateApiMappingOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiMappingId]", false));
  }
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApiMapping", "Required field: DomainName, is not set");
    return UpdateApiMappingOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/domainnames/";
  ss << request.GetDomainName();
  ss << "/apimappings/";
  ss << request.GetApiMappingId();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateApiMappingOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateApiMappingOutcomeCallable ApiGatewayV2Client::UpdateApiMappingCallable(const UpdateApiMappingRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateApiMappingOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateApiMapping(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::UpdateApiMappingAsync(const UpdateApiMappingRequest& request, const UpdateApiMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateApiMappingAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::UpdateApiMappingAsyncHelper(const UpdateApiMappingRequest& request, const UpdateApiMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateApiMapping(request), context);
}

UpdateAuthorizerOutcome ApiGatewayV2Client::UpdateAuthorizer(const UpdateAuthorizerRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAuthorizer", "Required field: ApiId, is not set");
    return UpdateAuthorizerOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.AuthorizerIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAuthorizer", "Required field: AuthorizerId, is not set");
    return UpdateAuthorizerOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AuthorizerId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/authorizers/";
  ss << request.GetAuthorizerId();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateAuthorizerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateAuthorizerOutcomeCallable ApiGatewayV2Client::UpdateAuthorizerCallable(const UpdateAuthorizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAuthorizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAuthorizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::UpdateAuthorizerAsync(const UpdateAuthorizerRequest& request, const UpdateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAuthorizerAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::UpdateAuthorizerAsyncHelper(const UpdateAuthorizerRequest& request, const UpdateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAuthorizer(request), context);
}

UpdateDeploymentOutcome ApiGatewayV2Client::UpdateDeployment(const UpdateDeploymentRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDeployment", "Required field: ApiId, is not set");
    return UpdateDeploymentOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.DeploymentIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDeployment", "Required field: DeploymentId, is not set");
    return UpdateDeploymentOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DeploymentId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/deployments/";
  ss << request.GetDeploymentId();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateDeploymentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateDeploymentOutcomeCallable ApiGatewayV2Client::UpdateDeploymentCallable(const UpdateDeploymentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDeploymentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDeployment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::UpdateDeploymentAsync(const UpdateDeploymentRequest& request, const UpdateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDeploymentAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::UpdateDeploymentAsyncHelper(const UpdateDeploymentRequest& request, const UpdateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDeployment(request), context);
}

UpdateDomainNameOutcome ApiGatewayV2Client::UpdateDomainName(const UpdateDomainNameRequest& request) const
{
  if (!request.DomainNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDomainName", "Required field: DomainName, is not set");
    return UpdateDomainNameOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/domainnames/";
  ss << request.GetDomainName();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateDomainNameOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateDomainNameOutcomeCallable ApiGatewayV2Client::UpdateDomainNameCallable(const UpdateDomainNameRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDomainNameOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDomainName(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::UpdateDomainNameAsync(const UpdateDomainNameRequest& request, const UpdateDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateDomainNameAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::UpdateDomainNameAsyncHelper(const UpdateDomainNameRequest& request, const UpdateDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateDomainName(request), context);
}

UpdateIntegrationOutcome ApiGatewayV2Client::UpdateIntegration(const UpdateIntegrationRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIntegration", "Required field: ApiId, is not set");
    return UpdateIntegrationOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.IntegrationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIntegration", "Required field: IntegrationId, is not set");
    return UpdateIntegrationOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IntegrationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/integrations/";
  ss << request.GetIntegrationId();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateIntegrationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateIntegrationOutcomeCallable ApiGatewayV2Client::UpdateIntegrationCallable(const UpdateIntegrationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateIntegrationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateIntegration(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::UpdateIntegrationAsync(const UpdateIntegrationRequest& request, const UpdateIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateIntegrationAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::UpdateIntegrationAsyncHelper(const UpdateIntegrationRequest& request, const UpdateIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateIntegration(request), context);
}

UpdateIntegrationResponseOutcome ApiGatewayV2Client::UpdateIntegrationResponse(const UpdateIntegrationResponseRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIntegrationResponse", "Required field: ApiId, is not set");
    return UpdateIntegrationResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.IntegrationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIntegrationResponse", "Required field: IntegrationId, is not set");
    return UpdateIntegrationResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IntegrationId]", false));
  }
  if (!request.IntegrationResponseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIntegrationResponse", "Required field: IntegrationResponseId, is not set");
    return UpdateIntegrationResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IntegrationResponseId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/integrations/";
  ss << request.GetIntegrationId();
  ss << "/integrationresponses/";
  ss << request.GetIntegrationResponseId();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateIntegrationResponseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateIntegrationResponseOutcomeCallable ApiGatewayV2Client::UpdateIntegrationResponseCallable(const UpdateIntegrationResponseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateIntegrationResponseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateIntegrationResponse(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::UpdateIntegrationResponseAsync(const UpdateIntegrationResponseRequest& request, const UpdateIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateIntegrationResponseAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::UpdateIntegrationResponseAsyncHelper(const UpdateIntegrationResponseRequest& request, const UpdateIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateIntegrationResponse(request), context);
}

UpdateModelOutcome ApiGatewayV2Client::UpdateModel(const UpdateModelRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateModel", "Required field: ApiId, is not set");
    return UpdateModelOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.ModelIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateModel", "Required field: ModelId, is not set");
    return UpdateModelOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ModelId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/models/";
  ss << request.GetModelId();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateModelOutcomeCallable ApiGatewayV2Client::UpdateModelCallable(const UpdateModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::UpdateModelAsync(const UpdateModelRequest& request, const UpdateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateModelAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::UpdateModelAsyncHelper(const UpdateModelRequest& request, const UpdateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateModel(request), context);
}

UpdateRouteOutcome ApiGatewayV2Client::UpdateRoute(const UpdateRouteRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRoute", "Required field: ApiId, is not set");
    return UpdateRouteOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.RouteIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRoute", "Required field: RouteId, is not set");
    return UpdateRouteOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RouteId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/routes/";
  ss << request.GetRouteId();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateRouteOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateRouteOutcomeCallable ApiGatewayV2Client::UpdateRouteCallable(const UpdateRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::UpdateRouteAsync(const UpdateRouteRequest& request, const UpdateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRouteAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::UpdateRouteAsyncHelper(const UpdateRouteRequest& request, const UpdateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRoute(request), context);
}

UpdateRouteResponseOutcome ApiGatewayV2Client::UpdateRouteResponse(const UpdateRouteResponseRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRouteResponse", "Required field: ApiId, is not set");
    return UpdateRouteResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.RouteIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRouteResponse", "Required field: RouteId, is not set");
    return UpdateRouteResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RouteId]", false));
  }
  if (!request.RouteResponseIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRouteResponse", "Required field: RouteResponseId, is not set");
    return UpdateRouteResponseOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RouteResponseId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/routes/";
  ss << request.GetRouteId();
  ss << "/routeresponses/";
  ss << request.GetRouteResponseId();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateRouteResponseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateRouteResponseOutcomeCallable ApiGatewayV2Client::UpdateRouteResponseCallable(const UpdateRouteResponseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRouteResponseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRouteResponse(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::UpdateRouteResponseAsync(const UpdateRouteResponseRequest& request, const UpdateRouteResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRouteResponseAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::UpdateRouteResponseAsyncHelper(const UpdateRouteResponseRequest& request, const UpdateRouteResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRouteResponse(request), context);
}

UpdateStageOutcome ApiGatewayV2Client::UpdateStage(const UpdateStageRequest& request) const
{
  if (!request.ApiIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateStage", "Required field: ApiId, is not set");
    return UpdateStageOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApiId]", false));
  }
  if (!request.StageNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateStage", "Required field: StageName, is not set");
    return UpdateStageOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StageName]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/apis/";
  ss << request.GetApiId();
  ss << "/stages/";
  ss << request.GetStageName();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateStageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateStageOutcomeCallable ApiGatewayV2Client::UpdateStageCallable(const UpdateStageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateStageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateStage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::UpdateStageAsync(const UpdateStageRequest& request, const UpdateStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateStageAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::UpdateStageAsyncHelper(const UpdateStageRequest& request, const UpdateStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateStage(request), context);
}

UpdateVpcLinkOutcome ApiGatewayV2Client::UpdateVpcLink(const UpdateVpcLinkRequest& request) const
{
  if (!request.VpcLinkIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateVpcLink", "Required field: VpcLinkId, is not set");
    return UpdateVpcLinkOutcome(Aws::Client::AWSError<ApiGatewayV2Errors>(ApiGatewayV2Errors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VpcLinkId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/v2/vpclinks/";
  ss << request.GetVpcLinkId();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateVpcLinkOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateVpcLinkOutcomeCallable ApiGatewayV2Client::UpdateVpcLinkCallable(const UpdateVpcLinkRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVpcLinkOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVpcLink(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ApiGatewayV2Client::UpdateVpcLinkAsync(const UpdateVpcLinkRequest& request, const UpdateVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateVpcLinkAsyncHelper( request, handler, context ); } );
}

void ApiGatewayV2Client::UpdateVpcLinkAsyncHelper(const UpdateVpcLinkRequest& request, const UpdateVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateVpcLink(request), context);
}

