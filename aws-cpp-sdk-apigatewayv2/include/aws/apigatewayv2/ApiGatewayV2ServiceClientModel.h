/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/apigatewayv2/ApiGatewayV2Errors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/apigatewayv2/ApiGatewayV2EndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ApiGatewayV2Client header */
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
/* End of service model headers required in ApiGatewayV2Client header */

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
    using ApiGatewayV2ClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ApiGatewayV2EndpointProviderBase = Aws::ApiGatewayV2::Endpoint::ApiGatewayV2EndpointProviderBase;
    using ApiGatewayV2EndpointProvider = Aws::ApiGatewayV2::Endpoint::ApiGatewayV2EndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ApiGatewayV2Client header */
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
      /* End of service model forward declarations required in ApiGatewayV2Client header */

      /* Service model Outcome class definitions */
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
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
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
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ApiGatewayV2Client;

    /* Service model async handlers definitions */
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
    /* End of service model async handlers definitions */
  } // namespace ApiGatewayV2
} // namespace Aws
