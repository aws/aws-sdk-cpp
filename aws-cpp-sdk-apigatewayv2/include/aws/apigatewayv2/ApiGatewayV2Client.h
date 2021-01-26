/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/ApiGatewayV2Errors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/apigatewayv2/model/CreateApiResult.h>
#include <aws/apigatewayv2/model/CreateApiMappingResult.h>
#include <aws/apigatewayv2/model/CreateAuthorizerResult.h>
#include <aws/apigatewayv2/model/CreateDeploymentResult.h>
#include <aws/apigatewayv2/model/CreateDomainNameResult.h>
#include <aws/apigatewayv2/model/CreateIntegrationResult.h>
#include <aws/apigatewayv2/model/CreateIntegrationResponseResult.h>
#include <aws/apigatewayv2/model/CreateModelResult.h>
#include <aws/apigatewayv2/model/CreateRouteResult.h>
#include <aws/apigatewayv2/model/CreateRouteResponseResult.h>
#include <aws/apigatewayv2/model/CreateStageResult.h>
#include <aws/apigatewayv2/model/CreateVpcLinkResult.h>
#include <aws/apigatewayv2/model/DeleteVpcLinkResult.h>
#include <aws/apigatewayv2/model/ExportApiResult.h>
#include <aws/apigatewayv2/model/GetApiResult.h>
#include <aws/apigatewayv2/model/GetApiMappingResult.h>
#include <aws/apigatewayv2/model/GetApiMappingsResult.h>
#include <aws/apigatewayv2/model/GetApisResult.h>
#include <aws/apigatewayv2/model/GetAuthorizerResult.h>
#include <aws/apigatewayv2/model/GetAuthorizersResult.h>
#include <aws/apigatewayv2/model/GetDeploymentResult.h>
#include <aws/apigatewayv2/model/GetDeploymentsResult.h>
#include <aws/apigatewayv2/model/GetDomainNameResult.h>
#include <aws/apigatewayv2/model/GetDomainNamesResult.h>
#include <aws/apigatewayv2/model/GetIntegrationResult.h>
#include <aws/apigatewayv2/model/GetIntegrationResponseResult.h>
#include <aws/apigatewayv2/model/GetIntegrationResponsesResult.h>
#include <aws/apigatewayv2/model/GetIntegrationsResult.h>
#include <aws/apigatewayv2/model/GetModelResult.h>
#include <aws/apigatewayv2/model/GetModelTemplateResult.h>
#include <aws/apigatewayv2/model/GetModelsResult.h>
#include <aws/apigatewayv2/model/GetRouteResult.h>
#include <aws/apigatewayv2/model/GetRouteResponseResult.h>
#include <aws/apigatewayv2/model/GetRouteResponsesResult.h>
#include <aws/apigatewayv2/model/GetRoutesResult.h>
#include <aws/apigatewayv2/model/GetStageResult.h>
#include <aws/apigatewayv2/model/GetStagesResult.h>
#include <aws/apigatewayv2/model/GetTagsResult.h>
#include <aws/apigatewayv2/model/GetVpcLinkResult.h>
#include <aws/apigatewayv2/model/GetVpcLinksResult.h>
#include <aws/apigatewayv2/model/ImportApiResult.h>
#include <aws/apigatewayv2/model/ReimportApiResult.h>
#include <aws/apigatewayv2/model/TagResourceResult.h>
#include <aws/apigatewayv2/model/UpdateApiResult.h>
#include <aws/apigatewayv2/model/UpdateApiMappingResult.h>
#include <aws/apigatewayv2/model/UpdateAuthorizerResult.h>
#include <aws/apigatewayv2/model/UpdateDeploymentResult.h>
#include <aws/apigatewayv2/model/UpdateDomainNameResult.h>
#include <aws/apigatewayv2/model/UpdateIntegrationResult.h>
#include <aws/apigatewayv2/model/UpdateIntegrationResponseResult.h>
#include <aws/apigatewayv2/model/UpdateModelResult.h>
#include <aws/apigatewayv2/model/UpdateRouteResult.h>
#include <aws/apigatewayv2/model/UpdateRouteResponseResult.h>
#include <aws/apigatewayv2/model/UpdateStageResult.h>
#include <aws/apigatewayv2/model/UpdateVpcLinkResult.h>
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace ApiGatewayV2
{

namespace Model
{
        class CreateApiRequest;
        class CreateApiMappingRequest;
        class CreateAuthorizerRequest;
        class CreateDeploymentRequest;
        class CreateDomainNameRequest;
        class CreateIntegrationRequest;
        class CreateIntegrationResponseRequest;
        class CreateModelRequest;
        class CreateRouteRequest;
        class CreateRouteResponseRequest;
        class CreateStageRequest;
        class CreateVpcLinkRequest;
        class DeleteAccessLogSettingsRequest;
        class DeleteApiRequest;
        class DeleteApiMappingRequest;
        class DeleteAuthorizerRequest;
        class DeleteCorsConfigurationRequest;
        class DeleteDeploymentRequest;
        class DeleteDomainNameRequest;
        class DeleteIntegrationRequest;
        class DeleteIntegrationResponseRequest;
        class DeleteModelRequest;
        class DeleteRouteRequest;
        class DeleteRouteRequestParameterRequest;
        class DeleteRouteResponseRequest;
        class DeleteRouteSettingsRequest;
        class DeleteStageRequest;
        class DeleteVpcLinkRequest;
        class ExportApiRequest;
        class ResetAuthorizersCacheRequest;
        class GetApiRequest;
        class GetApiMappingRequest;
        class GetApiMappingsRequest;
        class GetApisRequest;
        class GetAuthorizerRequest;
        class GetAuthorizersRequest;
        class GetDeploymentRequest;
        class GetDeploymentsRequest;
        class GetDomainNameRequest;
        class GetDomainNamesRequest;
        class GetIntegrationRequest;
        class GetIntegrationResponseRequest;
        class GetIntegrationResponsesRequest;
        class GetIntegrationsRequest;
        class GetModelRequest;
        class GetModelTemplateRequest;
        class GetModelsRequest;
        class GetRouteRequest;
        class GetRouteResponseRequest;
        class GetRouteResponsesRequest;
        class GetRoutesRequest;
        class GetStageRequest;
        class GetStagesRequest;
        class GetTagsRequest;
        class GetVpcLinkRequest;
        class GetVpcLinksRequest;
        class ImportApiRequest;
        class ReimportApiRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateApiRequest;
        class UpdateApiMappingRequest;
        class UpdateAuthorizerRequest;
        class UpdateDeploymentRequest;
        class UpdateDomainNameRequest;
        class UpdateIntegrationRequest;
        class UpdateIntegrationResponseRequest;
        class UpdateModelRequest;
        class UpdateRouteRequest;
        class UpdateRouteResponseRequest;
        class UpdateStageRequest;
        class UpdateVpcLinkRequest;

        typedef Aws::Utils::Outcome<CreateApiResult, ApiGatewayV2Error> CreateApiOutcome;
        typedef Aws::Utils::Outcome<CreateApiMappingResult, ApiGatewayV2Error> CreateApiMappingOutcome;
        typedef Aws::Utils::Outcome<CreateAuthorizerResult, ApiGatewayV2Error> CreateAuthorizerOutcome;
        typedef Aws::Utils::Outcome<CreateDeploymentResult, ApiGatewayV2Error> CreateDeploymentOutcome;
        typedef Aws::Utils::Outcome<CreateDomainNameResult, ApiGatewayV2Error> CreateDomainNameOutcome;
        typedef Aws::Utils::Outcome<CreateIntegrationResult, ApiGatewayV2Error> CreateIntegrationOutcome;
        typedef Aws::Utils::Outcome<CreateIntegrationResponseResult, ApiGatewayV2Error> CreateIntegrationResponseOutcome;
        typedef Aws::Utils::Outcome<CreateModelResult, ApiGatewayV2Error> CreateModelOutcome;
        typedef Aws::Utils::Outcome<CreateRouteResult, ApiGatewayV2Error> CreateRouteOutcome;
        typedef Aws::Utils::Outcome<CreateRouteResponseResult, ApiGatewayV2Error> CreateRouteResponseOutcome;
        typedef Aws::Utils::Outcome<CreateStageResult, ApiGatewayV2Error> CreateStageOutcome;
        typedef Aws::Utils::Outcome<CreateVpcLinkResult, ApiGatewayV2Error> CreateVpcLinkOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ApiGatewayV2Error> DeleteAccessLogSettingsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ApiGatewayV2Error> DeleteApiOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ApiGatewayV2Error> DeleteApiMappingOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ApiGatewayV2Error> DeleteAuthorizerOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ApiGatewayV2Error> DeleteCorsConfigurationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ApiGatewayV2Error> DeleteDeploymentOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ApiGatewayV2Error> DeleteDomainNameOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ApiGatewayV2Error> DeleteIntegrationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ApiGatewayV2Error> DeleteIntegrationResponseOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ApiGatewayV2Error> DeleteModelOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ApiGatewayV2Error> DeleteRouteOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ApiGatewayV2Error> DeleteRouteRequestParameterOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ApiGatewayV2Error> DeleteRouteResponseOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ApiGatewayV2Error> DeleteRouteSettingsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ApiGatewayV2Error> DeleteStageOutcome;
        typedef Aws::Utils::Outcome<DeleteVpcLinkResult, ApiGatewayV2Error> DeleteVpcLinkOutcome;
        typedef Aws::Utils::Outcome<ExportApiResult, ApiGatewayV2Error> ExportApiOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ApiGatewayV2Error> ResetAuthorizersCacheOutcome;
        typedef Aws::Utils::Outcome<GetApiResult, ApiGatewayV2Error> GetApiOutcome;
        typedef Aws::Utils::Outcome<GetApiMappingResult, ApiGatewayV2Error> GetApiMappingOutcome;
        typedef Aws::Utils::Outcome<GetApiMappingsResult, ApiGatewayV2Error> GetApiMappingsOutcome;
        typedef Aws::Utils::Outcome<GetApisResult, ApiGatewayV2Error> GetApisOutcome;
        typedef Aws::Utils::Outcome<GetAuthorizerResult, ApiGatewayV2Error> GetAuthorizerOutcome;
        typedef Aws::Utils::Outcome<GetAuthorizersResult, ApiGatewayV2Error> GetAuthorizersOutcome;
        typedef Aws::Utils::Outcome<GetDeploymentResult, ApiGatewayV2Error> GetDeploymentOutcome;
        typedef Aws::Utils::Outcome<GetDeploymentsResult, ApiGatewayV2Error> GetDeploymentsOutcome;
        typedef Aws::Utils::Outcome<GetDomainNameResult, ApiGatewayV2Error> GetDomainNameOutcome;
        typedef Aws::Utils::Outcome<GetDomainNamesResult, ApiGatewayV2Error> GetDomainNamesOutcome;
        typedef Aws::Utils::Outcome<GetIntegrationResult, ApiGatewayV2Error> GetIntegrationOutcome;
        typedef Aws::Utils::Outcome<GetIntegrationResponseResult, ApiGatewayV2Error> GetIntegrationResponseOutcome;
        typedef Aws::Utils::Outcome<GetIntegrationResponsesResult, ApiGatewayV2Error> GetIntegrationResponsesOutcome;
        typedef Aws::Utils::Outcome<GetIntegrationsResult, ApiGatewayV2Error> GetIntegrationsOutcome;
        typedef Aws::Utils::Outcome<GetModelResult, ApiGatewayV2Error> GetModelOutcome;
        typedef Aws::Utils::Outcome<GetModelTemplateResult, ApiGatewayV2Error> GetModelTemplateOutcome;
        typedef Aws::Utils::Outcome<GetModelsResult, ApiGatewayV2Error> GetModelsOutcome;
        typedef Aws::Utils::Outcome<GetRouteResult, ApiGatewayV2Error> GetRouteOutcome;
        typedef Aws::Utils::Outcome<GetRouteResponseResult, ApiGatewayV2Error> GetRouteResponseOutcome;
        typedef Aws::Utils::Outcome<GetRouteResponsesResult, ApiGatewayV2Error> GetRouteResponsesOutcome;
        typedef Aws::Utils::Outcome<GetRoutesResult, ApiGatewayV2Error> GetRoutesOutcome;
        typedef Aws::Utils::Outcome<GetStageResult, ApiGatewayV2Error> GetStageOutcome;
        typedef Aws::Utils::Outcome<GetStagesResult, ApiGatewayV2Error> GetStagesOutcome;
        typedef Aws::Utils::Outcome<GetTagsResult, ApiGatewayV2Error> GetTagsOutcome;
        typedef Aws::Utils::Outcome<GetVpcLinkResult, ApiGatewayV2Error> GetVpcLinkOutcome;
        typedef Aws::Utils::Outcome<GetVpcLinksResult, ApiGatewayV2Error> GetVpcLinksOutcome;
        typedef Aws::Utils::Outcome<ImportApiResult, ApiGatewayV2Error> ImportApiOutcome;
        typedef Aws::Utils::Outcome<ReimportApiResult, ApiGatewayV2Error> ReimportApiOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, ApiGatewayV2Error> TagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, ApiGatewayV2Error> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateApiResult, ApiGatewayV2Error> UpdateApiOutcome;
        typedef Aws::Utils::Outcome<UpdateApiMappingResult, ApiGatewayV2Error> UpdateApiMappingOutcome;
        typedef Aws::Utils::Outcome<UpdateAuthorizerResult, ApiGatewayV2Error> UpdateAuthorizerOutcome;
        typedef Aws::Utils::Outcome<UpdateDeploymentResult, ApiGatewayV2Error> UpdateDeploymentOutcome;
        typedef Aws::Utils::Outcome<UpdateDomainNameResult, ApiGatewayV2Error> UpdateDomainNameOutcome;
        typedef Aws::Utils::Outcome<UpdateIntegrationResult, ApiGatewayV2Error> UpdateIntegrationOutcome;
        typedef Aws::Utils::Outcome<UpdateIntegrationResponseResult, ApiGatewayV2Error> UpdateIntegrationResponseOutcome;
        typedef Aws::Utils::Outcome<UpdateModelResult, ApiGatewayV2Error> UpdateModelOutcome;
        typedef Aws::Utils::Outcome<UpdateRouteResult, ApiGatewayV2Error> UpdateRouteOutcome;
        typedef Aws::Utils::Outcome<UpdateRouteResponseResult, ApiGatewayV2Error> UpdateRouteResponseOutcome;
        typedef Aws::Utils::Outcome<UpdateStageResult, ApiGatewayV2Error> UpdateStageOutcome;
        typedef Aws::Utils::Outcome<UpdateVpcLinkResult, ApiGatewayV2Error> UpdateVpcLinkOutcome;

        typedef std::future<CreateApiOutcome> CreateApiOutcomeCallable;
        typedef std::future<CreateApiMappingOutcome> CreateApiMappingOutcomeCallable;
        typedef std::future<CreateAuthorizerOutcome> CreateAuthorizerOutcomeCallable;
        typedef std::future<CreateDeploymentOutcome> CreateDeploymentOutcomeCallable;
        typedef std::future<CreateDomainNameOutcome> CreateDomainNameOutcomeCallable;
        typedef std::future<CreateIntegrationOutcome> CreateIntegrationOutcomeCallable;
        typedef std::future<CreateIntegrationResponseOutcome> CreateIntegrationResponseOutcomeCallable;
        typedef std::future<CreateModelOutcome> CreateModelOutcomeCallable;
        typedef std::future<CreateRouteOutcome> CreateRouteOutcomeCallable;
        typedef std::future<CreateRouteResponseOutcome> CreateRouteResponseOutcomeCallable;
        typedef std::future<CreateStageOutcome> CreateStageOutcomeCallable;
        typedef std::future<CreateVpcLinkOutcome> CreateVpcLinkOutcomeCallable;
        typedef std::future<DeleteAccessLogSettingsOutcome> DeleteAccessLogSettingsOutcomeCallable;
        typedef std::future<DeleteApiOutcome> DeleteApiOutcomeCallable;
        typedef std::future<DeleteApiMappingOutcome> DeleteApiMappingOutcomeCallable;
        typedef std::future<DeleteAuthorizerOutcome> DeleteAuthorizerOutcomeCallable;
        typedef std::future<DeleteCorsConfigurationOutcome> DeleteCorsConfigurationOutcomeCallable;
        typedef std::future<DeleteDeploymentOutcome> DeleteDeploymentOutcomeCallable;
        typedef std::future<DeleteDomainNameOutcome> DeleteDomainNameOutcomeCallable;
        typedef std::future<DeleteIntegrationOutcome> DeleteIntegrationOutcomeCallable;
        typedef std::future<DeleteIntegrationResponseOutcome> DeleteIntegrationResponseOutcomeCallable;
        typedef std::future<DeleteModelOutcome> DeleteModelOutcomeCallable;
        typedef std::future<DeleteRouteOutcome> DeleteRouteOutcomeCallable;
        typedef std::future<DeleteRouteRequestParameterOutcome> DeleteRouteRequestParameterOutcomeCallable;
        typedef std::future<DeleteRouteResponseOutcome> DeleteRouteResponseOutcomeCallable;
        typedef std::future<DeleteRouteSettingsOutcome> DeleteRouteSettingsOutcomeCallable;
        typedef std::future<DeleteStageOutcome> DeleteStageOutcomeCallable;
        typedef std::future<DeleteVpcLinkOutcome> DeleteVpcLinkOutcomeCallable;
        typedef std::future<ExportApiOutcome> ExportApiOutcomeCallable;
        typedef std::future<ResetAuthorizersCacheOutcome> ResetAuthorizersCacheOutcomeCallable;
        typedef std::future<GetApiOutcome> GetApiOutcomeCallable;
        typedef std::future<GetApiMappingOutcome> GetApiMappingOutcomeCallable;
        typedef std::future<GetApiMappingsOutcome> GetApiMappingsOutcomeCallable;
        typedef std::future<GetApisOutcome> GetApisOutcomeCallable;
        typedef std::future<GetAuthorizerOutcome> GetAuthorizerOutcomeCallable;
        typedef std::future<GetAuthorizersOutcome> GetAuthorizersOutcomeCallable;
        typedef std::future<GetDeploymentOutcome> GetDeploymentOutcomeCallable;
        typedef std::future<GetDeploymentsOutcome> GetDeploymentsOutcomeCallable;
        typedef std::future<GetDomainNameOutcome> GetDomainNameOutcomeCallable;
        typedef std::future<GetDomainNamesOutcome> GetDomainNamesOutcomeCallable;
        typedef std::future<GetIntegrationOutcome> GetIntegrationOutcomeCallable;
        typedef std::future<GetIntegrationResponseOutcome> GetIntegrationResponseOutcomeCallable;
        typedef std::future<GetIntegrationResponsesOutcome> GetIntegrationResponsesOutcomeCallable;
        typedef std::future<GetIntegrationsOutcome> GetIntegrationsOutcomeCallable;
        typedef std::future<GetModelOutcome> GetModelOutcomeCallable;
        typedef std::future<GetModelTemplateOutcome> GetModelTemplateOutcomeCallable;
        typedef std::future<GetModelsOutcome> GetModelsOutcomeCallable;
        typedef std::future<GetRouteOutcome> GetRouteOutcomeCallable;
        typedef std::future<GetRouteResponseOutcome> GetRouteResponseOutcomeCallable;
        typedef std::future<GetRouteResponsesOutcome> GetRouteResponsesOutcomeCallable;
        typedef std::future<GetRoutesOutcome> GetRoutesOutcomeCallable;
        typedef std::future<GetStageOutcome> GetStageOutcomeCallable;
        typedef std::future<GetStagesOutcome> GetStagesOutcomeCallable;
        typedef std::future<GetTagsOutcome> GetTagsOutcomeCallable;
        typedef std::future<GetVpcLinkOutcome> GetVpcLinkOutcomeCallable;
        typedef std::future<GetVpcLinksOutcome> GetVpcLinksOutcomeCallable;
        typedef std::future<ImportApiOutcome> ImportApiOutcomeCallable;
        typedef std::future<ReimportApiOutcome> ReimportApiOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateApiOutcome> UpdateApiOutcomeCallable;
        typedef std::future<UpdateApiMappingOutcome> UpdateApiMappingOutcomeCallable;
        typedef std::future<UpdateAuthorizerOutcome> UpdateAuthorizerOutcomeCallable;
        typedef std::future<UpdateDeploymentOutcome> UpdateDeploymentOutcomeCallable;
        typedef std::future<UpdateDomainNameOutcome> UpdateDomainNameOutcomeCallable;
        typedef std::future<UpdateIntegrationOutcome> UpdateIntegrationOutcomeCallable;
        typedef std::future<UpdateIntegrationResponseOutcome> UpdateIntegrationResponseOutcomeCallable;
        typedef std::future<UpdateModelOutcome> UpdateModelOutcomeCallable;
        typedef std::future<UpdateRouteOutcome> UpdateRouteOutcomeCallable;
        typedef std::future<UpdateRouteResponseOutcome> UpdateRouteResponseOutcomeCallable;
        typedef std::future<UpdateStageOutcome> UpdateStageOutcomeCallable;
        typedef std::future<UpdateVpcLinkOutcome> UpdateVpcLinkOutcomeCallable;
} // namespace Model

  class ApiGatewayV2Client;

    typedef std::function<void(const ApiGatewayV2Client*, const Model::CreateApiRequest&, const Model::CreateApiOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApiResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::CreateApiMappingRequest&, const Model::CreateApiMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApiMappingResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::CreateAuthorizerRequest&, const Model::CreateAuthorizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAuthorizerResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::CreateDeploymentRequest&, const Model::CreateDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeploymentResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::CreateDomainNameRequest&, const Model::CreateDomainNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDomainNameResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::CreateIntegrationRequest&, const Model::CreateIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIntegrationResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::CreateIntegrationResponseRequest&, const Model::CreateIntegrationResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIntegrationResponseResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::CreateModelRequest&, const Model::CreateModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateModelResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::CreateRouteRequest&, const Model::CreateRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRouteResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::CreateRouteResponseRequest&, const Model::CreateRouteResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRouteResponseResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::CreateStageRequest&, const Model::CreateStageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStageResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::CreateVpcLinkRequest&, const Model::CreateVpcLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVpcLinkResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::DeleteAccessLogSettingsRequest&, const Model::DeleteAccessLogSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAccessLogSettingsResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::DeleteApiRequest&, const Model::DeleteApiOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApiResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::DeleteApiMappingRequest&, const Model::DeleteApiMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApiMappingResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::DeleteAuthorizerRequest&, const Model::DeleteAuthorizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAuthorizerResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::DeleteCorsConfigurationRequest&, const Model::DeleteCorsConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCorsConfigurationResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::DeleteDeploymentRequest&, const Model::DeleteDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDeploymentResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::DeleteDomainNameRequest&, const Model::DeleteDomainNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDomainNameResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::DeleteIntegrationRequest&, const Model::DeleteIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIntegrationResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::DeleteIntegrationResponseRequest&, const Model::DeleteIntegrationResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIntegrationResponseResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::DeleteModelRequest&, const Model::DeleteModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteModelResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::DeleteRouteRequest&, const Model::DeleteRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRouteResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::DeleteRouteRequestParameterRequest&, const Model::DeleteRouteRequestParameterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRouteRequestParameterResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::DeleteRouteResponseRequest&, const Model::DeleteRouteResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRouteResponseResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::DeleteRouteSettingsRequest&, const Model::DeleteRouteSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRouteSettingsResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::DeleteStageRequest&, const Model::DeleteStageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStageResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::DeleteVpcLinkRequest&, const Model::DeleteVpcLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVpcLinkResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::ExportApiRequest&, Model::ExportApiOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportApiResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::ResetAuthorizersCacheRequest&, const Model::ResetAuthorizersCacheOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetAuthorizersCacheResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::GetApiRequest&, const Model::GetApiOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApiResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::GetApiMappingRequest&, const Model::GetApiMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApiMappingResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::GetApiMappingsRequest&, const Model::GetApiMappingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApiMappingsResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::GetApisRequest&, const Model::GetApisOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApisResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::GetAuthorizerRequest&, const Model::GetAuthorizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAuthorizerResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::GetAuthorizersRequest&, const Model::GetAuthorizersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAuthorizersResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::GetDeploymentRequest&, const Model::GetDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeploymentResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::GetDeploymentsRequest&, const Model::GetDeploymentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeploymentsResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::GetDomainNameRequest&, const Model::GetDomainNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDomainNameResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::GetDomainNamesRequest&, const Model::GetDomainNamesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDomainNamesResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::GetIntegrationRequest&, const Model::GetIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIntegrationResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::GetIntegrationResponseRequest&, const Model::GetIntegrationResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIntegrationResponseResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::GetIntegrationResponsesRequest&, const Model::GetIntegrationResponsesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIntegrationResponsesResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::GetIntegrationsRequest&, const Model::GetIntegrationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIntegrationsResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::GetModelRequest&, const Model::GetModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetModelResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::GetModelTemplateRequest&, const Model::GetModelTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetModelTemplateResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::GetModelsRequest&, const Model::GetModelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetModelsResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::GetRouteRequest&, const Model::GetRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRouteResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::GetRouteResponseRequest&, const Model::GetRouteResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRouteResponseResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::GetRouteResponsesRequest&, const Model::GetRouteResponsesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRouteResponsesResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::GetRoutesRequest&, const Model::GetRoutesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRoutesResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::GetStageRequest&, const Model::GetStageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStageResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::GetStagesRequest&, const Model::GetStagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStagesResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::GetTagsRequest&, const Model::GetTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTagsResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::GetVpcLinkRequest&, const Model::GetVpcLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVpcLinkResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::GetVpcLinksRequest&, const Model::GetVpcLinksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetVpcLinksResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::ImportApiRequest&, const Model::ImportApiOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportApiResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::ReimportApiRequest&, const Model::ReimportApiOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReimportApiResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::UpdateApiRequest&, const Model::UpdateApiOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApiResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::UpdateApiMappingRequest&, const Model::UpdateApiMappingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApiMappingResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::UpdateAuthorizerRequest&, const Model::UpdateAuthorizerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAuthorizerResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::UpdateDeploymentRequest&, const Model::UpdateDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDeploymentResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::UpdateDomainNameRequest&, const Model::UpdateDomainNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDomainNameResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::UpdateIntegrationRequest&, const Model::UpdateIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIntegrationResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::UpdateIntegrationResponseRequest&, const Model::UpdateIntegrationResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateIntegrationResponseResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::UpdateModelRequest&, const Model::UpdateModelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateModelResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::UpdateRouteRequest&, const Model::UpdateRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRouteResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::UpdateRouteResponseRequest&, const Model::UpdateRouteResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRouteResponseResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::UpdateStageRequest&, const Model::UpdateStageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStageResponseReceivedHandler;
    typedef std::function<void(const ApiGatewayV2Client*, const Model::UpdateVpcLinkRequest&, const Model::UpdateVpcLinkOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVpcLinkResponseReceivedHandler;

  /**
   * <p>Amazon API Gateway V2</p>
   */
  class AWS_APIGATEWAYV2_API ApiGatewayV2Client : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApiGatewayV2Client(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApiGatewayV2Client(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ApiGatewayV2Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ApiGatewayV2Client();


        /**
         * <p>Creates an Api resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateApi">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApiOutcome CreateApi(const Model::CreateApiRequest& request) const;

        /**
         * <p>Creates an Api resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateApi">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateApiOutcomeCallable CreateApiCallable(const Model::CreateApiRequest& request) const;

        /**
         * <p>Creates an Api resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateApi">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateApiAsync(const Model::CreateApiRequest& request, const CreateApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an API mapping.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateApiMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApiMappingOutcome CreateApiMapping(const Model::CreateApiMappingRequest& request) const;

        /**
         * <p>Creates an API mapping.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateApiMapping">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateApiMappingOutcomeCallable CreateApiMappingCallable(const Model::CreateApiMappingRequest& request) const;

        /**
         * <p>Creates an API mapping.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateApiMapping">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateApiMappingAsync(const Model::CreateApiMappingRequest& request, const CreateApiMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Authorizer for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateAuthorizer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAuthorizerOutcome CreateAuthorizer(const Model::CreateAuthorizerRequest& request) const;

        /**
         * <p>Creates an Authorizer for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateAuthorizer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAuthorizerOutcomeCallable CreateAuthorizerCallable(const Model::CreateAuthorizerRequest& request) const;

        /**
         * <p>Creates an Authorizer for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateAuthorizer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAuthorizerAsync(const Model::CreateAuthorizerRequest& request, const CreateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Deployment for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeploymentOutcome CreateDeployment(const Model::CreateDeploymentRequest& request) const;

        /**
         * <p>Creates a Deployment for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateDeployment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDeploymentOutcomeCallable CreateDeploymentCallable(const Model::CreateDeploymentRequest& request) const;

        /**
         * <p>Creates a Deployment for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateDeployment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDeploymentAsync(const Model::CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a domain name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateDomainName">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDomainNameOutcome CreateDomainName(const Model::CreateDomainNameRequest& request) const;

        /**
         * <p>Creates a domain name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateDomainName">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDomainNameOutcomeCallable CreateDomainNameCallable(const Model::CreateDomainNameRequest& request) const;

        /**
         * <p>Creates a domain name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateDomainName">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDomainNameAsync(const Model::CreateDomainNameRequest& request, const CreateDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Integration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIntegrationOutcome CreateIntegration(const Model::CreateIntegrationRequest& request) const;

        /**
         * <p>Creates an Integration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateIntegration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateIntegrationOutcomeCallable CreateIntegrationCallable(const Model::CreateIntegrationRequest& request) const;

        /**
         * <p>Creates an Integration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateIntegration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateIntegrationAsync(const Model::CreateIntegrationRequest& request, const CreateIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an IntegrationResponses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateIntegrationResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIntegrationResponseOutcome CreateIntegrationResponse(const Model::CreateIntegrationResponseRequest& request) const;

        /**
         * <p>Creates an IntegrationResponses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateIntegrationResponse">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateIntegrationResponseOutcomeCallable CreateIntegrationResponseCallable(const Model::CreateIntegrationResponseRequest& request) const;

        /**
         * <p>Creates an IntegrationResponses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateIntegrationResponse">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateIntegrationResponseAsync(const Model::CreateIntegrationResponseRequest& request, const CreateIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Model for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateModel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateModelOutcome CreateModel(const Model::CreateModelRequest& request) const;

        /**
         * <p>Creates a Model for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateModel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateModelOutcomeCallable CreateModelCallable(const Model::CreateModelRequest& request) const;

        /**
         * <p>Creates a Model for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateModel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateModelAsync(const Model::CreateModelRequest& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Route for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRouteOutcome CreateRoute(const Model::CreateRouteRequest& request) const;

        /**
         * <p>Creates a Route for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateRoute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRouteOutcomeCallable CreateRouteCallable(const Model::CreateRouteRequest& request) const;

        /**
         * <p>Creates a Route for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateRoute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRouteAsync(const Model::CreateRouteRequest& request, const CreateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a RouteResponse for a Route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateRouteResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRouteResponseOutcome CreateRouteResponse(const Model::CreateRouteResponseRequest& request) const;

        /**
         * <p>Creates a RouteResponse for a Route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateRouteResponse">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRouteResponseOutcomeCallable CreateRouteResponseCallable(const Model::CreateRouteResponseRequest& request) const;

        /**
         * <p>Creates a RouteResponse for a Route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateRouteResponse">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRouteResponseAsync(const Model::CreateRouteResponseRequest& request, const CreateRouteResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Stage for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateStage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStageOutcome CreateStage(const Model::CreateStageRequest& request) const;

        /**
         * <p>Creates a Stage for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateStage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStageOutcomeCallable CreateStageCallable(const Model::CreateStageRequest& request) const;

        /**
         * <p>Creates a Stage for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateStage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStageAsync(const Model::CreateStageRequest& request, const CreateStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a VPC link.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateVpcLink">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVpcLinkOutcome CreateVpcLink(const Model::CreateVpcLinkRequest& request) const;

        /**
         * <p>Creates a VPC link.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateVpcLink">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVpcLinkOutcomeCallable CreateVpcLinkCallable(const Model::CreateVpcLinkRequest& request) const;

        /**
         * <p>Creates a VPC link.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/CreateVpcLink">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVpcLinkAsync(const Model::CreateVpcLinkRequest& request, const CreateVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the AccessLogSettings for a Stage. To disable access logging for a
         * Stage, delete its AccessLogSettings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteAccessLogSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccessLogSettingsOutcome DeleteAccessLogSettings(const Model::DeleteAccessLogSettingsRequest& request) const;

        /**
         * <p>Deletes the AccessLogSettings for a Stage. To disable access logging for a
         * Stage, delete its AccessLogSettings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteAccessLogSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAccessLogSettingsOutcomeCallable DeleteAccessLogSettingsCallable(const Model::DeleteAccessLogSettingsRequest& request) const;

        /**
         * <p>Deletes the AccessLogSettings for a Stage. To disable access logging for a
         * Stage, delete its AccessLogSettings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteAccessLogSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAccessLogSettingsAsync(const Model::DeleteAccessLogSettingsRequest& request, const DeleteAccessLogSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Api resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteApi">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApiOutcome DeleteApi(const Model::DeleteApiRequest& request) const;

        /**
         * <p>Deletes an Api resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteApi">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApiOutcomeCallable DeleteApiCallable(const Model::DeleteApiRequest& request) const;

        /**
         * <p>Deletes an Api resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteApi">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApiAsync(const Model::DeleteApiRequest& request, const DeleteApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an API mapping.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteApiMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApiMappingOutcome DeleteApiMapping(const Model::DeleteApiMappingRequest& request) const;

        /**
         * <p>Deletes an API mapping.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteApiMapping">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteApiMappingOutcomeCallable DeleteApiMappingCallable(const Model::DeleteApiMappingRequest& request) const;

        /**
         * <p>Deletes an API mapping.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteApiMapping">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteApiMappingAsync(const Model::DeleteApiMappingRequest& request, const DeleteApiMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Authorizer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteAuthorizer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAuthorizerOutcome DeleteAuthorizer(const Model::DeleteAuthorizerRequest& request) const;

        /**
         * <p>Deletes an Authorizer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteAuthorizer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAuthorizerOutcomeCallable DeleteAuthorizerCallable(const Model::DeleteAuthorizerRequest& request) const;

        /**
         * <p>Deletes an Authorizer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteAuthorizer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAuthorizerAsync(const Model::DeleteAuthorizerRequest& request, const DeleteAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a CORS configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteCorsConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCorsConfigurationOutcome DeleteCorsConfiguration(const Model::DeleteCorsConfigurationRequest& request) const;

        /**
         * <p>Deletes a CORS configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteCorsConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCorsConfigurationOutcomeCallable DeleteCorsConfigurationCallable(const Model::DeleteCorsConfigurationRequest& request) const;

        /**
         * <p>Deletes a CORS configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteCorsConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCorsConfigurationAsync(const Model::DeleteCorsConfigurationRequest& request, const DeleteCorsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a Deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeploymentOutcome DeleteDeployment(const Model::DeleteDeploymentRequest& request) const;

        /**
         * <p>Deletes a Deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteDeployment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDeploymentOutcomeCallable DeleteDeploymentCallable(const Model::DeleteDeploymentRequest& request) const;

        /**
         * <p>Deletes a Deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteDeployment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDeploymentAsync(const Model::DeleteDeploymentRequest& request, const DeleteDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a domain name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteDomainName">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainNameOutcome DeleteDomainName(const Model::DeleteDomainNameRequest& request) const;

        /**
         * <p>Deletes a domain name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteDomainName">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDomainNameOutcomeCallable DeleteDomainNameCallable(const Model::DeleteDomainNameRequest& request) const;

        /**
         * <p>Deletes a domain name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteDomainName">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDomainNameAsync(const Model::DeleteDomainNameRequest& request, const DeleteDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Integration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIntegrationOutcome DeleteIntegration(const Model::DeleteIntegrationRequest& request) const;

        /**
         * <p>Deletes an Integration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteIntegration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIntegrationOutcomeCallable DeleteIntegrationCallable(const Model::DeleteIntegrationRequest& request) const;

        /**
         * <p>Deletes an Integration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteIntegration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIntegrationAsync(const Model::DeleteIntegrationRequest& request, const DeleteIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an IntegrationResponses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteIntegrationResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIntegrationResponseOutcome DeleteIntegrationResponse(const Model::DeleteIntegrationResponseRequest& request) const;

        /**
         * <p>Deletes an IntegrationResponses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteIntegrationResponse">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteIntegrationResponseOutcomeCallable DeleteIntegrationResponseCallable(const Model::DeleteIntegrationResponseRequest& request) const;

        /**
         * <p>Deletes an IntegrationResponses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteIntegrationResponse">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteIntegrationResponseAsync(const Model::DeleteIntegrationResponseRequest& request, const DeleteIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a Model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteModel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteModelOutcome DeleteModel(const Model::DeleteModelRequest& request) const;

        /**
         * <p>Deletes a Model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteModel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteModelOutcomeCallable DeleteModelCallable(const Model::DeleteModelRequest& request) const;

        /**
         * <p>Deletes a Model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteModel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteModelAsync(const Model::DeleteModelRequest& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a Route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRouteOutcome DeleteRoute(const Model::DeleteRouteRequest& request) const;

        /**
         * <p>Deletes a Route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteRoute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRouteOutcomeCallable DeleteRouteCallable(const Model::DeleteRouteRequest& request) const;

        /**
         * <p>Deletes a Route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteRoute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRouteAsync(const Model::DeleteRouteRequest& request, const DeleteRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a route request parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteRouteRequestParameter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRouteRequestParameterOutcome DeleteRouteRequestParameter(const Model::DeleteRouteRequestParameterRequest& request) const;

        /**
         * <p>Deletes a route request parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteRouteRequestParameter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRouteRequestParameterOutcomeCallable DeleteRouteRequestParameterCallable(const Model::DeleteRouteRequestParameterRequest& request) const;

        /**
         * <p>Deletes a route request parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteRouteRequestParameter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRouteRequestParameterAsync(const Model::DeleteRouteRequestParameterRequest& request, const DeleteRouteRequestParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a RouteResponse.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteRouteResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRouteResponseOutcome DeleteRouteResponse(const Model::DeleteRouteResponseRequest& request) const;

        /**
         * <p>Deletes a RouteResponse.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteRouteResponse">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRouteResponseOutcomeCallable DeleteRouteResponseCallable(const Model::DeleteRouteResponseRequest& request) const;

        /**
         * <p>Deletes a RouteResponse.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteRouteResponse">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRouteResponseAsync(const Model::DeleteRouteResponseRequest& request, const DeleteRouteResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the RouteSettings for a stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteRouteSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRouteSettingsOutcome DeleteRouteSettings(const Model::DeleteRouteSettingsRequest& request) const;

        /**
         * <p>Deletes the RouteSettings for a stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteRouteSettings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRouteSettingsOutcomeCallable DeleteRouteSettingsCallable(const Model::DeleteRouteSettingsRequest& request) const;

        /**
         * <p>Deletes the RouteSettings for a stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteRouteSettings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRouteSettingsAsync(const Model::DeleteRouteSettingsRequest& request, const DeleteRouteSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a Stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteStage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStageOutcome DeleteStage(const Model::DeleteStageRequest& request) const;

        /**
         * <p>Deletes a Stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteStage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStageOutcomeCallable DeleteStageCallable(const Model::DeleteStageRequest& request) const;

        /**
         * <p>Deletes a Stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteStage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStageAsync(const Model::DeleteStageRequest& request, const DeleteStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a VPC link.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteVpcLink">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVpcLinkOutcome DeleteVpcLink(const Model::DeleteVpcLinkRequest& request) const;

        /**
         * <p>Deletes a VPC link.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteVpcLink">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVpcLinkOutcomeCallable DeleteVpcLinkCallable(const Model::DeleteVpcLinkRequest& request) const;

        /**
         * <p>Deletes a VPC link.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/DeleteVpcLink">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVpcLinkAsync(const Model::DeleteVpcLinkRequest& request, const DeleteVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * 
         */
        virtual Model::ExportApiOutcome ExportApi(const Model::ExportApiRequest& request) const;

        /**
         * 
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExportApiOutcomeCallable ExportApiCallable(const Model::ExportApiRequest& request) const;

        /**
         * 
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExportApiAsync(const Model::ExportApiRequest& request, const ExportApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Resets all authorizer cache entries on a stage. Supported only for HTTP
         * APIs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/ResetAuthorizersCache">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetAuthorizersCacheOutcome ResetAuthorizersCache(const Model::ResetAuthorizersCacheRequest& request) const;

        /**
         * <p>Resets all authorizer cache entries on a stage. Supported only for HTTP
         * APIs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/ResetAuthorizersCache">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetAuthorizersCacheOutcomeCallable ResetAuthorizersCacheCallable(const Model::ResetAuthorizersCacheRequest& request) const;

        /**
         * <p>Resets all authorizer cache entries on a stage. Supported only for HTTP
         * APIs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/ResetAuthorizersCache">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetAuthorizersCacheAsync(const Model::ResetAuthorizersCacheRequest& request, const ResetAuthorizersCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets an Api resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetApi">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApiOutcome GetApi(const Model::GetApiRequest& request) const;

        /**
         * <p>Gets an Api resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetApi">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApiOutcomeCallable GetApiCallable(const Model::GetApiRequest& request) const;

        /**
         * <p>Gets an Api resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetApi">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApiAsync(const Model::GetApiRequest& request, const GetApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets an API mapping.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetApiMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApiMappingOutcome GetApiMapping(const Model::GetApiMappingRequest& request) const;

        /**
         * <p>Gets an API mapping.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetApiMapping">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApiMappingOutcomeCallable GetApiMappingCallable(const Model::GetApiMappingRequest& request) const;

        /**
         * <p>Gets an API mapping.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetApiMapping">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApiMappingAsync(const Model::GetApiMappingRequest& request, const GetApiMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets API mappings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetApiMappings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApiMappingsOutcome GetApiMappings(const Model::GetApiMappingsRequest& request) const;

        /**
         * <p>Gets API mappings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetApiMappings">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApiMappingsOutcomeCallable GetApiMappingsCallable(const Model::GetApiMappingsRequest& request) const;

        /**
         * <p>Gets API mappings.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetApiMappings">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApiMappingsAsync(const Model::GetApiMappingsRequest& request, const GetApiMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a collection of Api resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetApis">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApisOutcome GetApis(const Model::GetApisRequest& request) const;

        /**
         * <p>Gets a collection of Api resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetApis">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetApisOutcomeCallable GetApisCallable(const Model::GetApisRequest& request) const;

        /**
         * <p>Gets a collection of Api resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetApis">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetApisAsync(const Model::GetApisRequest& request, const GetApisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets an Authorizer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetAuthorizer">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAuthorizerOutcome GetAuthorizer(const Model::GetAuthorizerRequest& request) const;

        /**
         * <p>Gets an Authorizer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetAuthorizer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAuthorizerOutcomeCallable GetAuthorizerCallable(const Model::GetAuthorizerRequest& request) const;

        /**
         * <p>Gets an Authorizer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetAuthorizer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAuthorizerAsync(const Model::GetAuthorizerRequest& request, const GetAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the Authorizers for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetAuthorizers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAuthorizersOutcome GetAuthorizers(const Model::GetAuthorizersRequest& request) const;

        /**
         * <p>Gets the Authorizers for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetAuthorizers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAuthorizersOutcomeCallable GetAuthorizersCallable(const Model::GetAuthorizersRequest& request) const;

        /**
         * <p>Gets the Authorizers for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetAuthorizers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAuthorizersAsync(const Model::GetAuthorizersRequest& request, const GetAuthorizersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a Deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeploymentOutcome GetDeployment(const Model::GetDeploymentRequest& request) const;

        /**
         * <p>Gets a Deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetDeployment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeploymentOutcomeCallable GetDeploymentCallable(const Model::GetDeploymentRequest& request) const;

        /**
         * <p>Gets a Deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetDeployment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeploymentAsync(const Model::GetDeploymentRequest& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the Deployments for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeploymentsOutcome GetDeployments(const Model::GetDeploymentsRequest& request) const;

        /**
         * <p>Gets the Deployments for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetDeployments">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeploymentsOutcomeCallable GetDeploymentsCallable(const Model::GetDeploymentsRequest& request) const;

        /**
         * <p>Gets the Deployments for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetDeployments">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeploymentsAsync(const Model::GetDeploymentsRequest& request, const GetDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a domain name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetDomainName">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainNameOutcome GetDomainName(const Model::GetDomainNameRequest& request) const;

        /**
         * <p>Gets a domain name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetDomainName">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDomainNameOutcomeCallable GetDomainNameCallable(const Model::GetDomainNameRequest& request) const;

        /**
         * <p>Gets a domain name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetDomainName">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDomainNameAsync(const Model::GetDomainNameRequest& request, const GetDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the domain names for an AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetDomainNames">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainNamesOutcome GetDomainNames(const Model::GetDomainNamesRequest& request) const;

        /**
         * <p>Gets the domain names for an AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetDomainNames">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDomainNamesOutcomeCallable GetDomainNamesCallable(const Model::GetDomainNamesRequest& request) const;

        /**
         * <p>Gets the domain names for an AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetDomainNames">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDomainNamesAsync(const Model::GetDomainNamesRequest& request, const GetDomainNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets an Integration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIntegrationOutcome GetIntegration(const Model::GetIntegrationRequest& request) const;

        /**
         * <p>Gets an Integration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetIntegration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIntegrationOutcomeCallable GetIntegrationCallable(const Model::GetIntegrationRequest& request) const;

        /**
         * <p>Gets an Integration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetIntegration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIntegrationAsync(const Model::GetIntegrationRequest& request, const GetIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets an IntegrationResponses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetIntegrationResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIntegrationResponseOutcome GetIntegrationResponse(const Model::GetIntegrationResponseRequest& request) const;

        /**
         * <p>Gets an IntegrationResponses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetIntegrationResponse">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIntegrationResponseOutcomeCallable GetIntegrationResponseCallable(const Model::GetIntegrationResponseRequest& request) const;

        /**
         * <p>Gets an IntegrationResponses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetIntegrationResponse">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIntegrationResponseAsync(const Model::GetIntegrationResponseRequest& request, const GetIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the IntegrationResponses for an Integration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetIntegrationResponses">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIntegrationResponsesOutcome GetIntegrationResponses(const Model::GetIntegrationResponsesRequest& request) const;

        /**
         * <p>Gets the IntegrationResponses for an Integration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetIntegrationResponses">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIntegrationResponsesOutcomeCallable GetIntegrationResponsesCallable(const Model::GetIntegrationResponsesRequest& request) const;

        /**
         * <p>Gets the IntegrationResponses for an Integration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetIntegrationResponses">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIntegrationResponsesAsync(const Model::GetIntegrationResponsesRequest& request, const GetIntegrationResponsesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the Integrations for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetIntegrations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIntegrationsOutcome GetIntegrations(const Model::GetIntegrationsRequest& request) const;

        /**
         * <p>Gets the Integrations for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetIntegrations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIntegrationsOutcomeCallable GetIntegrationsCallable(const Model::GetIntegrationsRequest& request) const;

        /**
         * <p>Gets the Integrations for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetIntegrations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIntegrationsAsync(const Model::GetIntegrationsRequest& request, const GetIntegrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a Model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetModel">AWS
         * API Reference</a></p>
         */
        virtual Model::GetModelOutcome GetModel(const Model::GetModelRequest& request) const;

        /**
         * <p>Gets a Model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetModel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetModelOutcomeCallable GetModelCallable(const Model::GetModelRequest& request) const;

        /**
         * <p>Gets a Model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetModel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetModelAsync(const Model::GetModelRequest& request, const GetModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a model template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetModelTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetModelTemplateOutcome GetModelTemplate(const Model::GetModelTemplateRequest& request) const;

        /**
         * <p>Gets a model template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetModelTemplate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetModelTemplateOutcomeCallable GetModelTemplateCallable(const Model::GetModelTemplateRequest& request) const;

        /**
         * <p>Gets a model template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetModelTemplate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetModelTemplateAsync(const Model::GetModelTemplateRequest& request, const GetModelTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the Models for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetModels">AWS
         * API Reference</a></p>
         */
        virtual Model::GetModelsOutcome GetModels(const Model::GetModelsRequest& request) const;

        /**
         * <p>Gets the Models for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetModels">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetModelsOutcomeCallable GetModelsCallable(const Model::GetModelsRequest& request) const;

        /**
         * <p>Gets the Models for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetModels">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetModelsAsync(const Model::GetModelsRequest& request, const GetModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a Route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRouteOutcome GetRoute(const Model::GetRouteRequest& request) const;

        /**
         * <p>Gets a Route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetRoute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRouteOutcomeCallable GetRouteCallable(const Model::GetRouteRequest& request) const;

        /**
         * <p>Gets a Route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetRoute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRouteAsync(const Model::GetRouteRequest& request, const GetRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a RouteResponse.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetRouteResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRouteResponseOutcome GetRouteResponse(const Model::GetRouteResponseRequest& request) const;

        /**
         * <p>Gets a RouteResponse.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetRouteResponse">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRouteResponseOutcomeCallable GetRouteResponseCallable(const Model::GetRouteResponseRequest& request) const;

        /**
         * <p>Gets a RouteResponse.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetRouteResponse">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRouteResponseAsync(const Model::GetRouteResponseRequest& request, const GetRouteResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the RouteResponses for a Route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetRouteResponses">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRouteResponsesOutcome GetRouteResponses(const Model::GetRouteResponsesRequest& request) const;

        /**
         * <p>Gets the RouteResponses for a Route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetRouteResponses">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRouteResponsesOutcomeCallable GetRouteResponsesCallable(const Model::GetRouteResponsesRequest& request) const;

        /**
         * <p>Gets the RouteResponses for a Route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetRouteResponses">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRouteResponsesAsync(const Model::GetRouteResponsesRequest& request, const GetRouteResponsesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the Routes for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetRoutes">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRoutesOutcome GetRoutes(const Model::GetRoutesRequest& request) const;

        /**
         * <p>Gets the Routes for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetRoutes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRoutesOutcomeCallable GetRoutesCallable(const Model::GetRoutesRequest& request) const;

        /**
         * <p>Gets the Routes for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetRoutes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRoutesAsync(const Model::GetRoutesRequest& request, const GetRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a Stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetStage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStageOutcome GetStage(const Model::GetStageRequest& request) const;

        /**
         * <p>Gets a Stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetStage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStageOutcomeCallable GetStageCallable(const Model::GetStageRequest& request) const;

        /**
         * <p>Gets a Stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetStage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStageAsync(const Model::GetStageRequest& request, const GetStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the Stages for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetStages">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStagesOutcome GetStages(const Model::GetStagesRequest& request) const;

        /**
         * <p>Gets the Stages for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetStages">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStagesOutcomeCallable GetStagesCallable(const Model::GetStagesRequest& request) const;

        /**
         * <p>Gets the Stages for an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetStages">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStagesAsync(const Model::GetStagesRequest& request, const GetStagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a collection of Tag resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetTags">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTagsOutcome GetTags(const Model::GetTagsRequest& request) const;

        /**
         * <p>Gets a collection of Tag resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTagsOutcomeCallable GetTagsCallable(const Model::GetTagsRequest& request) const;

        /**
         * <p>Gets a collection of Tag resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTagsAsync(const Model::GetTagsRequest& request, const GetTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a VPC link.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetVpcLink">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVpcLinkOutcome GetVpcLink(const Model::GetVpcLinkRequest& request) const;

        /**
         * <p>Gets a VPC link.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetVpcLink">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVpcLinkOutcomeCallable GetVpcLinkCallable(const Model::GetVpcLinkRequest& request) const;

        /**
         * <p>Gets a VPC link.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetVpcLink">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVpcLinkAsync(const Model::GetVpcLinkRequest& request, const GetVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a collection of VPC links.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetVpcLinks">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVpcLinksOutcome GetVpcLinks(const Model::GetVpcLinksRequest& request) const;

        /**
         * <p>Gets a collection of VPC links.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetVpcLinks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVpcLinksOutcomeCallable GetVpcLinksCallable(const Model::GetVpcLinksRequest& request) const;

        /**
         * <p>Gets a collection of VPC links.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/GetVpcLinks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVpcLinksAsync(const Model::GetVpcLinksRequest& request, const GetVpcLinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Imports an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/ImportApi">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportApiOutcome ImportApi(const Model::ImportApiRequest& request) const;

        /**
         * <p>Imports an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/ImportApi">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportApiOutcomeCallable ImportApiCallable(const Model::ImportApiRequest& request) const;

        /**
         * <p>Imports an API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/ImportApi">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportApiAsync(const Model::ImportApiRequest& request, const ImportApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Puts an Api resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/ReimportApi">AWS
         * API Reference</a></p>
         */
        virtual Model::ReimportApiOutcome ReimportApi(const Model::ReimportApiRequest& request) const;

        /**
         * <p>Puts an Api resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/ReimportApi">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReimportApiOutcomeCallable ReimportApiCallable(const Model::ReimportApiRequest& request) const;

        /**
         * <p>Puts an Api resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/ReimportApi">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReimportApiAsync(const Model::ReimportApiRequest& request, const ReimportApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new Tag resource to represent a tag.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Creates a new Tag resource to represent a tag.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Creates a new Tag resource to represent a tag.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a Tag.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Deletes a Tag.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Deletes a Tag.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an Api resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateApi">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApiOutcome UpdateApi(const Model::UpdateApiRequest& request) const;

        /**
         * <p>Updates an Api resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateApi">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApiOutcomeCallable UpdateApiCallable(const Model::UpdateApiRequest& request) const;

        /**
         * <p>Updates an Api resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateApi">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApiAsync(const Model::UpdateApiRequest& request, const UpdateApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The API mapping.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateApiMapping">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApiMappingOutcome UpdateApiMapping(const Model::UpdateApiMappingRequest& request) const;

        /**
         * <p>The API mapping.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateApiMapping">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateApiMappingOutcomeCallable UpdateApiMappingCallable(const Model::UpdateApiMappingRequest& request) const;

        /**
         * <p>The API mapping.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateApiMapping">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateApiMappingAsync(const Model::UpdateApiMappingRequest& request, const UpdateApiMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an Authorizer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateAuthorizer">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAuthorizerOutcome UpdateAuthorizer(const Model::UpdateAuthorizerRequest& request) const;

        /**
         * <p>Updates an Authorizer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateAuthorizer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAuthorizerOutcomeCallable UpdateAuthorizerCallable(const Model::UpdateAuthorizerRequest& request) const;

        /**
         * <p>Updates an Authorizer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateAuthorizer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAuthorizerAsync(const Model::UpdateAuthorizerRequest& request, const UpdateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a Deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDeploymentOutcome UpdateDeployment(const Model::UpdateDeploymentRequest& request) const;

        /**
         * <p>Updates a Deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateDeployment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDeploymentOutcomeCallable UpdateDeploymentCallable(const Model::UpdateDeploymentRequest& request) const;

        /**
         * <p>Updates a Deployment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateDeployment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDeploymentAsync(const Model::UpdateDeploymentRequest& request, const UpdateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a domain name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateDomainName">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDomainNameOutcome UpdateDomainName(const Model::UpdateDomainNameRequest& request) const;

        /**
         * <p>Updates a domain name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateDomainName">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDomainNameOutcomeCallable UpdateDomainNameCallable(const Model::UpdateDomainNameRequest& request) const;

        /**
         * <p>Updates a domain name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateDomainName">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDomainNameAsync(const Model::UpdateDomainNameRequest& request, const UpdateDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an Integration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIntegrationOutcome UpdateIntegration(const Model::UpdateIntegrationRequest& request) const;

        /**
         * <p>Updates an Integration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateIntegration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateIntegrationOutcomeCallable UpdateIntegrationCallable(const Model::UpdateIntegrationRequest& request) const;

        /**
         * <p>Updates an Integration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateIntegration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateIntegrationAsync(const Model::UpdateIntegrationRequest& request, const UpdateIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an IntegrationResponses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateIntegrationResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIntegrationResponseOutcome UpdateIntegrationResponse(const Model::UpdateIntegrationResponseRequest& request) const;

        /**
         * <p>Updates an IntegrationResponses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateIntegrationResponse">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateIntegrationResponseOutcomeCallable UpdateIntegrationResponseCallable(const Model::UpdateIntegrationResponseRequest& request) const;

        /**
         * <p>Updates an IntegrationResponses.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateIntegrationResponse">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateIntegrationResponseAsync(const Model::UpdateIntegrationResponseRequest& request, const UpdateIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a Model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateModel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateModelOutcome UpdateModel(const Model::UpdateModelRequest& request) const;

        /**
         * <p>Updates a Model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateModel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateModelOutcomeCallable UpdateModelCallable(const Model::UpdateModelRequest& request) const;

        /**
         * <p>Updates a Model.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateModel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateModelAsync(const Model::UpdateModelRequest& request, const UpdateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a Route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRouteOutcome UpdateRoute(const Model::UpdateRouteRequest& request) const;

        /**
         * <p>Updates a Route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateRoute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRouteOutcomeCallable UpdateRouteCallable(const Model::UpdateRouteRequest& request) const;

        /**
         * <p>Updates a Route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateRoute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRouteAsync(const Model::UpdateRouteRequest& request, const UpdateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a RouteResponse.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateRouteResponse">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRouteResponseOutcome UpdateRouteResponse(const Model::UpdateRouteResponseRequest& request) const;

        /**
         * <p>Updates a RouteResponse.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateRouteResponse">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRouteResponseOutcomeCallable UpdateRouteResponseCallable(const Model::UpdateRouteResponseRequest& request) const;

        /**
         * <p>Updates a RouteResponse.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateRouteResponse">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRouteResponseAsync(const Model::UpdateRouteResponseRequest& request, const UpdateRouteResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a Stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateStage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStageOutcome UpdateStage(const Model::UpdateStageRequest& request) const;

        /**
         * <p>Updates a Stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateStage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateStageOutcomeCallable UpdateStageCallable(const Model::UpdateStageRequest& request) const;

        /**
         * <p>Updates a Stage.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateStage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateStageAsync(const Model::UpdateStageRequest& request, const UpdateStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a VPC link.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateVpcLink">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVpcLinkOutcome UpdateVpcLink(const Model::UpdateVpcLinkRequest& request) const;

        /**
         * <p>Updates a VPC link.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateVpcLink">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVpcLinkOutcomeCallable UpdateVpcLinkCallable(const Model::UpdateVpcLinkRequest& request) const;

        /**
         * <p>Updates a VPC link.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateVpcLink">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVpcLinkAsync(const Model::UpdateVpcLinkRequest& request, const UpdateVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void CreateApiAsyncHelper(const Model::CreateApiRequest& request, const CreateApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateApiMappingAsyncHelper(const Model::CreateApiMappingRequest& request, const CreateApiMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAuthorizerAsyncHelper(const Model::CreateAuthorizerRequest& request, const CreateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDeploymentAsyncHelper(const Model::CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDomainNameAsyncHelper(const Model::CreateDomainNameRequest& request, const CreateDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateIntegrationAsyncHelper(const Model::CreateIntegrationRequest& request, const CreateIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateIntegrationResponseAsyncHelper(const Model::CreateIntegrationResponseRequest& request, const CreateIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateModelAsyncHelper(const Model::CreateModelRequest& request, const CreateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRouteAsyncHelper(const Model::CreateRouteRequest& request, const CreateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRouteResponseAsyncHelper(const Model::CreateRouteResponseRequest& request, const CreateRouteResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateStageAsyncHelper(const Model::CreateStageRequest& request, const CreateStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateVpcLinkAsyncHelper(const Model::CreateVpcLinkRequest& request, const CreateVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAccessLogSettingsAsyncHelper(const Model::DeleteAccessLogSettingsRequest& request, const DeleteAccessLogSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApiAsyncHelper(const Model::DeleteApiRequest& request, const DeleteApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteApiMappingAsyncHelper(const Model::DeleteApiMappingRequest& request, const DeleteApiMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAuthorizerAsyncHelper(const Model::DeleteAuthorizerRequest& request, const DeleteAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCorsConfigurationAsyncHelper(const Model::DeleteCorsConfigurationRequest& request, const DeleteCorsConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDeploymentAsyncHelper(const Model::DeleteDeploymentRequest& request, const DeleteDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDomainNameAsyncHelper(const Model::DeleteDomainNameRequest& request, const DeleteDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteIntegrationAsyncHelper(const Model::DeleteIntegrationRequest& request, const DeleteIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteIntegrationResponseAsyncHelper(const Model::DeleteIntegrationResponseRequest& request, const DeleteIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteModelAsyncHelper(const Model::DeleteModelRequest& request, const DeleteModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRouteAsyncHelper(const Model::DeleteRouteRequest& request, const DeleteRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRouteRequestParameterAsyncHelper(const Model::DeleteRouteRequestParameterRequest& request, const DeleteRouteRequestParameterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRouteResponseAsyncHelper(const Model::DeleteRouteResponseRequest& request, const DeleteRouteResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRouteSettingsAsyncHelper(const Model::DeleteRouteSettingsRequest& request, const DeleteRouteSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteStageAsyncHelper(const Model::DeleteStageRequest& request, const DeleteStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVpcLinkAsyncHelper(const Model::DeleteVpcLinkRequest& request, const DeleteVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ExportApiAsyncHelper(const Model::ExportApiRequest& request, const ExportApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResetAuthorizersCacheAsyncHelper(const Model::ResetAuthorizersCacheRequest& request, const ResetAuthorizersCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetApiAsyncHelper(const Model::GetApiRequest& request, const GetApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetApiMappingAsyncHelper(const Model::GetApiMappingRequest& request, const GetApiMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetApiMappingsAsyncHelper(const Model::GetApiMappingsRequest& request, const GetApiMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetApisAsyncHelper(const Model::GetApisRequest& request, const GetApisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAuthorizerAsyncHelper(const Model::GetAuthorizerRequest& request, const GetAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAuthorizersAsyncHelper(const Model::GetAuthorizersRequest& request, const GetAuthorizersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDeploymentAsyncHelper(const Model::GetDeploymentRequest& request, const GetDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDeploymentsAsyncHelper(const Model::GetDeploymentsRequest& request, const GetDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDomainNameAsyncHelper(const Model::GetDomainNameRequest& request, const GetDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDomainNamesAsyncHelper(const Model::GetDomainNamesRequest& request, const GetDomainNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetIntegrationAsyncHelper(const Model::GetIntegrationRequest& request, const GetIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetIntegrationResponseAsyncHelper(const Model::GetIntegrationResponseRequest& request, const GetIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetIntegrationResponsesAsyncHelper(const Model::GetIntegrationResponsesRequest& request, const GetIntegrationResponsesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetIntegrationsAsyncHelper(const Model::GetIntegrationsRequest& request, const GetIntegrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetModelAsyncHelper(const Model::GetModelRequest& request, const GetModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetModelTemplateAsyncHelper(const Model::GetModelTemplateRequest& request, const GetModelTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetModelsAsyncHelper(const Model::GetModelsRequest& request, const GetModelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRouteAsyncHelper(const Model::GetRouteRequest& request, const GetRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRouteResponseAsyncHelper(const Model::GetRouteResponseRequest& request, const GetRouteResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRouteResponsesAsyncHelper(const Model::GetRouteResponsesRequest& request, const GetRouteResponsesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRoutesAsyncHelper(const Model::GetRoutesRequest& request, const GetRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetStageAsyncHelper(const Model::GetStageRequest& request, const GetStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetStagesAsyncHelper(const Model::GetStagesRequest& request, const GetStagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetTagsAsyncHelper(const Model::GetTagsRequest& request, const GetTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetVpcLinkAsyncHelper(const Model::GetVpcLinkRequest& request, const GetVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetVpcLinksAsyncHelper(const Model::GetVpcLinksRequest& request, const GetVpcLinksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ImportApiAsyncHelper(const Model::ImportApiRequest& request, const ImportApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ReimportApiAsyncHelper(const Model::ReimportApiRequest& request, const ReimportApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateApiAsyncHelper(const Model::UpdateApiRequest& request, const UpdateApiResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateApiMappingAsyncHelper(const Model::UpdateApiMappingRequest& request, const UpdateApiMappingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAuthorizerAsyncHelper(const Model::UpdateAuthorizerRequest& request, const UpdateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDeploymentAsyncHelper(const Model::UpdateDeploymentRequest& request, const UpdateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDomainNameAsyncHelper(const Model::UpdateDomainNameRequest& request, const UpdateDomainNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateIntegrationAsyncHelper(const Model::UpdateIntegrationRequest& request, const UpdateIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateIntegrationResponseAsyncHelper(const Model::UpdateIntegrationResponseRequest& request, const UpdateIntegrationResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateModelAsyncHelper(const Model::UpdateModelRequest& request, const UpdateModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRouteAsyncHelper(const Model::UpdateRouteRequest& request, const UpdateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRouteResponseAsyncHelper(const Model::UpdateRouteResponseRequest& request, const UpdateRouteResponseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateStageAsyncHelper(const Model::UpdateStageRequest& request, const UpdateStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateVpcLinkAsyncHelper(const Model::UpdateVpcLinkRequest& request, const UpdateVpcLinkResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ApiGatewayV2
} // namespace Aws
