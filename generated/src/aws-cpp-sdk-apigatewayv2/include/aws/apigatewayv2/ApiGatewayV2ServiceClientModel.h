/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/apigatewayv2/ApiGatewayV2EndpointProvider.h>
#include <aws/apigatewayv2/ApiGatewayV2Errors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in ApiGatewayV2Client header */
#include <aws/apigatewayv2/model/CreateApiMappingResult.h>
#include <aws/apigatewayv2/model/CreateApiResult.h>
#include <aws/apigatewayv2/model/CreateAuthorizerResult.h>
#include <aws/apigatewayv2/model/CreateDeploymentResult.h>
#include <aws/apigatewayv2/model/CreateDomainNameResult.h>
#include <aws/apigatewayv2/model/CreateIntegrationResponseResult.h>
#include <aws/apigatewayv2/model/CreateIntegrationResult.h>
#include <aws/apigatewayv2/model/CreateModelResult.h>
#include <aws/apigatewayv2/model/CreatePortalProductResult.h>
#include <aws/apigatewayv2/model/CreatePortalResult.h>
#include <aws/apigatewayv2/model/CreateProductPageResult.h>
#include <aws/apigatewayv2/model/CreateProductRestEndpointPageResult.h>
#include <aws/apigatewayv2/model/CreateRouteResponseResult.h>
#include <aws/apigatewayv2/model/CreateRouteResult.h>
#include <aws/apigatewayv2/model/CreateRoutingRuleResult.h>
#include <aws/apigatewayv2/model/CreateStageResult.h>
#include <aws/apigatewayv2/model/CreateVpcLinkResult.h>
#include <aws/apigatewayv2/model/DeleteVpcLinkResult.h>
#include <aws/apigatewayv2/model/ExportApiResult.h>
#include <aws/apigatewayv2/model/GetApiMappingResult.h>
#include <aws/apigatewayv2/model/GetApiMappingsResult.h>
#include <aws/apigatewayv2/model/GetApiResult.h>
#include <aws/apigatewayv2/model/GetApisRequest.h>
#include <aws/apigatewayv2/model/GetApisResult.h>
#include <aws/apigatewayv2/model/GetAuthorizerResult.h>
#include <aws/apigatewayv2/model/GetAuthorizersResult.h>
#include <aws/apigatewayv2/model/GetDeploymentResult.h>
#include <aws/apigatewayv2/model/GetDeploymentsResult.h>
#include <aws/apigatewayv2/model/GetDomainNameResult.h>
#include <aws/apigatewayv2/model/GetDomainNamesRequest.h>
#include <aws/apigatewayv2/model/GetDomainNamesResult.h>
#include <aws/apigatewayv2/model/GetIntegrationResponseResult.h>
#include <aws/apigatewayv2/model/GetIntegrationResponsesResult.h>
#include <aws/apigatewayv2/model/GetIntegrationResult.h>
#include <aws/apigatewayv2/model/GetIntegrationsResult.h>
#include <aws/apigatewayv2/model/GetModelResult.h>
#include <aws/apigatewayv2/model/GetModelTemplateResult.h>
#include <aws/apigatewayv2/model/GetModelsResult.h>
#include <aws/apigatewayv2/model/GetPortalProductResult.h>
#include <aws/apigatewayv2/model/GetPortalProductSharingPolicyResult.h>
#include <aws/apigatewayv2/model/GetPortalResult.h>
#include <aws/apigatewayv2/model/GetProductPageResult.h>
#include <aws/apigatewayv2/model/GetProductRestEndpointPageResult.h>
#include <aws/apigatewayv2/model/GetRouteResponseResult.h>
#include <aws/apigatewayv2/model/GetRouteResponsesResult.h>
#include <aws/apigatewayv2/model/GetRouteResult.h>
#include <aws/apigatewayv2/model/GetRoutesResult.h>
#include <aws/apigatewayv2/model/GetRoutingRuleResult.h>
#include <aws/apigatewayv2/model/GetStageResult.h>
#include <aws/apigatewayv2/model/GetStagesResult.h>
#include <aws/apigatewayv2/model/GetTagsResult.h>
#include <aws/apigatewayv2/model/GetVpcLinkResult.h>
#include <aws/apigatewayv2/model/GetVpcLinksRequest.h>
#include <aws/apigatewayv2/model/GetVpcLinksResult.h>
#include <aws/apigatewayv2/model/ImportApiResult.h>
#include <aws/apigatewayv2/model/ListPortalProductsRequest.h>
#include <aws/apigatewayv2/model/ListPortalProductsResult.h>
#include <aws/apigatewayv2/model/ListPortalsRequest.h>
#include <aws/apigatewayv2/model/ListPortalsResult.h>
#include <aws/apigatewayv2/model/ListProductPagesResult.h>
#include <aws/apigatewayv2/model/ListProductRestEndpointPagesResult.h>
#include <aws/apigatewayv2/model/ListRoutingRulesResult.h>
#include <aws/apigatewayv2/model/PreviewPortalResult.h>
#include <aws/apigatewayv2/model/PublishPortalResult.h>
#include <aws/apigatewayv2/model/PutPortalProductSharingPolicyResult.h>
#include <aws/apigatewayv2/model/PutRoutingRuleResult.h>
#include <aws/apigatewayv2/model/ReimportApiResult.h>
#include <aws/apigatewayv2/model/TagResourceResult.h>
#include <aws/apigatewayv2/model/UpdateApiMappingResult.h>
#include <aws/apigatewayv2/model/UpdateApiResult.h>
#include <aws/apigatewayv2/model/UpdateAuthorizerResult.h>
#include <aws/apigatewayv2/model/UpdateDeploymentResult.h>
#include <aws/apigatewayv2/model/UpdateDomainNameResult.h>
#include <aws/apigatewayv2/model/UpdateIntegrationResponseResult.h>
#include <aws/apigatewayv2/model/UpdateIntegrationResult.h>
#include <aws/apigatewayv2/model/UpdateModelResult.h>
#include <aws/apigatewayv2/model/UpdatePortalProductResult.h>
#include <aws/apigatewayv2/model/UpdatePortalResult.h>
#include <aws/apigatewayv2/model/UpdateProductPageResult.h>
#include <aws/apigatewayv2/model/UpdateProductRestEndpointPageResult.h>
#include <aws/apigatewayv2/model/UpdateRouteResponseResult.h>
#include <aws/apigatewayv2/model/UpdateRouteResult.h>
#include <aws/apigatewayv2/model/UpdateStageResult.h>
#include <aws/apigatewayv2/model/UpdateVpcLinkResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in ApiGatewayV2Client header */

namespace Aws {
namespace Http {
class HttpClient;
class HttpClientFactory;
}  // namespace Http

namespace Utils {
template <typename R, typename E>
class Outcome;

namespace Threading {
class Executor;
}  // namespace Threading
}  // namespace Utils

namespace Auth {
class AWSCredentials;
class AWSCredentialsProvider;
}  // namespace Auth

namespace Client {
class RetryStrategy;
}  // namespace Client

namespace ApiGatewayV2 {
using ApiGatewayV2ClientConfiguration = Aws::Client::GenericClientConfiguration;
using ApiGatewayV2EndpointProviderBase = Aws::ApiGatewayV2::Endpoint::ApiGatewayV2EndpointProviderBase;
using ApiGatewayV2EndpointProvider = Aws::ApiGatewayV2::Endpoint::ApiGatewayV2EndpointProvider;

namespace Model {
/* Service model forward declarations required in ApiGatewayV2Client header */
class CreateApiRequest;
class CreateApiMappingRequest;
class CreateAuthorizerRequest;
class CreateDeploymentRequest;
class CreateDomainNameRequest;
class CreateIntegrationRequest;
class CreateIntegrationResponseRequest;
class CreateModelRequest;
class CreatePortalRequest;
class CreatePortalProductRequest;
class CreateProductPageRequest;
class CreateProductRestEndpointPageRequest;
class CreateRouteRequest;
class CreateRouteResponseRequest;
class CreateRoutingRuleRequest;
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
class DeletePortalRequest;
class DeletePortalProductRequest;
class DeletePortalProductSharingPolicyRequest;
class DeleteProductPageRequest;
class DeleteProductRestEndpointPageRequest;
class DeleteRouteRequest;
class DeleteRouteRequestParameterRequest;
class DeleteRouteResponseRequest;
class DeleteRouteSettingsRequest;
class DeleteRoutingRuleRequest;
class DeleteStageRequest;
class DeleteVpcLinkRequest;
class DisablePortalRequest;
class ExportApiRequest;
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
class GetPortalRequest;
class GetPortalProductRequest;
class GetPortalProductSharingPolicyRequest;
class GetProductPageRequest;
class GetProductRestEndpointPageRequest;
class GetRouteRequest;
class GetRouteResponseRequest;
class GetRouteResponsesRequest;
class GetRoutesRequest;
class GetRoutingRuleRequest;
class GetStageRequest;
class GetStagesRequest;
class GetTagsRequest;
class GetVpcLinkRequest;
class GetVpcLinksRequest;
class ImportApiRequest;
class ListPortalProductsRequest;
class ListPortalsRequest;
class ListProductPagesRequest;
class ListProductRestEndpointPagesRequest;
class ListRoutingRulesRequest;
class PreviewPortalRequest;
class PublishPortalRequest;
class PutPortalProductSharingPolicyRequest;
class PutRoutingRuleRequest;
class ReimportApiRequest;
class ResetAuthorizersCacheRequest;
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
class UpdatePortalRequest;
class UpdatePortalProductRequest;
class UpdateProductPageRequest;
class UpdateProductRestEndpointPageRequest;
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
typedef Aws::Utils::Outcome<CreatePortalResult, ApiGatewayV2Error> CreatePortalOutcome;
typedef Aws::Utils::Outcome<CreatePortalProductResult, ApiGatewayV2Error> CreatePortalProductOutcome;
typedef Aws::Utils::Outcome<CreateProductPageResult, ApiGatewayV2Error> CreateProductPageOutcome;
typedef Aws::Utils::Outcome<CreateProductRestEndpointPageResult, ApiGatewayV2Error> CreateProductRestEndpointPageOutcome;
typedef Aws::Utils::Outcome<CreateRouteResult, ApiGatewayV2Error> CreateRouteOutcome;
typedef Aws::Utils::Outcome<CreateRouteResponseResult, ApiGatewayV2Error> CreateRouteResponseOutcome;
typedef Aws::Utils::Outcome<CreateRoutingRuleResult, ApiGatewayV2Error> CreateRoutingRuleOutcome;
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
typedef Aws::Utils::Outcome<Aws::NoResult, ApiGatewayV2Error> DeletePortalOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ApiGatewayV2Error> DeletePortalProductOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ApiGatewayV2Error> DeletePortalProductSharingPolicyOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ApiGatewayV2Error> DeleteProductPageOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ApiGatewayV2Error> DeleteProductRestEndpointPageOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ApiGatewayV2Error> DeleteRouteOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ApiGatewayV2Error> DeleteRouteRequestParameterOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ApiGatewayV2Error> DeleteRouteResponseOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ApiGatewayV2Error> DeleteRouteSettingsOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ApiGatewayV2Error> DeleteRoutingRuleOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ApiGatewayV2Error> DeleteStageOutcome;
typedef Aws::Utils::Outcome<DeleteVpcLinkResult, ApiGatewayV2Error> DeleteVpcLinkOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ApiGatewayV2Error> DisablePortalOutcome;
typedef Aws::Utils::Outcome<ExportApiResult, ApiGatewayV2Error> ExportApiOutcome;
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
typedef Aws::Utils::Outcome<GetPortalResult, ApiGatewayV2Error> GetPortalOutcome;
typedef Aws::Utils::Outcome<GetPortalProductResult, ApiGatewayV2Error> GetPortalProductOutcome;
typedef Aws::Utils::Outcome<GetPortalProductSharingPolicyResult, ApiGatewayV2Error> GetPortalProductSharingPolicyOutcome;
typedef Aws::Utils::Outcome<GetProductPageResult, ApiGatewayV2Error> GetProductPageOutcome;
typedef Aws::Utils::Outcome<GetProductRestEndpointPageResult, ApiGatewayV2Error> GetProductRestEndpointPageOutcome;
typedef Aws::Utils::Outcome<GetRouteResult, ApiGatewayV2Error> GetRouteOutcome;
typedef Aws::Utils::Outcome<GetRouteResponseResult, ApiGatewayV2Error> GetRouteResponseOutcome;
typedef Aws::Utils::Outcome<GetRouteResponsesResult, ApiGatewayV2Error> GetRouteResponsesOutcome;
typedef Aws::Utils::Outcome<GetRoutesResult, ApiGatewayV2Error> GetRoutesOutcome;
typedef Aws::Utils::Outcome<GetRoutingRuleResult, ApiGatewayV2Error> GetRoutingRuleOutcome;
typedef Aws::Utils::Outcome<GetStageResult, ApiGatewayV2Error> GetStageOutcome;
typedef Aws::Utils::Outcome<GetStagesResult, ApiGatewayV2Error> GetStagesOutcome;
typedef Aws::Utils::Outcome<GetTagsResult, ApiGatewayV2Error> GetTagsOutcome;
typedef Aws::Utils::Outcome<GetVpcLinkResult, ApiGatewayV2Error> GetVpcLinkOutcome;
typedef Aws::Utils::Outcome<GetVpcLinksResult, ApiGatewayV2Error> GetVpcLinksOutcome;
typedef Aws::Utils::Outcome<ImportApiResult, ApiGatewayV2Error> ImportApiOutcome;
typedef Aws::Utils::Outcome<ListPortalProductsResult, ApiGatewayV2Error> ListPortalProductsOutcome;
typedef Aws::Utils::Outcome<ListPortalsResult, ApiGatewayV2Error> ListPortalsOutcome;
typedef Aws::Utils::Outcome<ListProductPagesResult, ApiGatewayV2Error> ListProductPagesOutcome;
typedef Aws::Utils::Outcome<ListProductRestEndpointPagesResult, ApiGatewayV2Error> ListProductRestEndpointPagesOutcome;
typedef Aws::Utils::Outcome<ListRoutingRulesResult, ApiGatewayV2Error> ListRoutingRulesOutcome;
typedef Aws::Utils::Outcome<PreviewPortalResult, ApiGatewayV2Error> PreviewPortalOutcome;
typedef Aws::Utils::Outcome<PublishPortalResult, ApiGatewayV2Error> PublishPortalOutcome;
typedef Aws::Utils::Outcome<PutPortalProductSharingPolicyResult, ApiGatewayV2Error> PutPortalProductSharingPolicyOutcome;
typedef Aws::Utils::Outcome<PutRoutingRuleResult, ApiGatewayV2Error> PutRoutingRuleOutcome;
typedef Aws::Utils::Outcome<ReimportApiResult, ApiGatewayV2Error> ReimportApiOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, ApiGatewayV2Error> ResetAuthorizersCacheOutcome;
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
typedef Aws::Utils::Outcome<UpdatePortalResult, ApiGatewayV2Error> UpdatePortalOutcome;
typedef Aws::Utils::Outcome<UpdatePortalProductResult, ApiGatewayV2Error> UpdatePortalProductOutcome;
typedef Aws::Utils::Outcome<UpdateProductPageResult, ApiGatewayV2Error> UpdateProductPageOutcome;
typedef Aws::Utils::Outcome<UpdateProductRestEndpointPageResult, ApiGatewayV2Error> UpdateProductRestEndpointPageOutcome;
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
typedef std::future<CreatePortalOutcome> CreatePortalOutcomeCallable;
typedef std::future<CreatePortalProductOutcome> CreatePortalProductOutcomeCallable;
typedef std::future<CreateProductPageOutcome> CreateProductPageOutcomeCallable;
typedef std::future<CreateProductRestEndpointPageOutcome> CreateProductRestEndpointPageOutcomeCallable;
typedef std::future<CreateRouteOutcome> CreateRouteOutcomeCallable;
typedef std::future<CreateRouteResponseOutcome> CreateRouteResponseOutcomeCallable;
typedef std::future<CreateRoutingRuleOutcome> CreateRoutingRuleOutcomeCallable;
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
typedef std::future<DeletePortalOutcome> DeletePortalOutcomeCallable;
typedef std::future<DeletePortalProductOutcome> DeletePortalProductOutcomeCallable;
typedef std::future<DeletePortalProductSharingPolicyOutcome> DeletePortalProductSharingPolicyOutcomeCallable;
typedef std::future<DeleteProductPageOutcome> DeleteProductPageOutcomeCallable;
typedef std::future<DeleteProductRestEndpointPageOutcome> DeleteProductRestEndpointPageOutcomeCallable;
typedef std::future<DeleteRouteOutcome> DeleteRouteOutcomeCallable;
typedef std::future<DeleteRouteRequestParameterOutcome> DeleteRouteRequestParameterOutcomeCallable;
typedef std::future<DeleteRouteResponseOutcome> DeleteRouteResponseOutcomeCallable;
typedef std::future<DeleteRouteSettingsOutcome> DeleteRouteSettingsOutcomeCallable;
typedef std::future<DeleteRoutingRuleOutcome> DeleteRoutingRuleOutcomeCallable;
typedef std::future<DeleteStageOutcome> DeleteStageOutcomeCallable;
typedef std::future<DeleteVpcLinkOutcome> DeleteVpcLinkOutcomeCallable;
typedef std::future<DisablePortalOutcome> DisablePortalOutcomeCallable;
typedef std::future<ExportApiOutcome> ExportApiOutcomeCallable;
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
typedef std::future<GetPortalOutcome> GetPortalOutcomeCallable;
typedef std::future<GetPortalProductOutcome> GetPortalProductOutcomeCallable;
typedef std::future<GetPortalProductSharingPolicyOutcome> GetPortalProductSharingPolicyOutcomeCallable;
typedef std::future<GetProductPageOutcome> GetProductPageOutcomeCallable;
typedef std::future<GetProductRestEndpointPageOutcome> GetProductRestEndpointPageOutcomeCallable;
typedef std::future<GetRouteOutcome> GetRouteOutcomeCallable;
typedef std::future<GetRouteResponseOutcome> GetRouteResponseOutcomeCallable;
typedef std::future<GetRouteResponsesOutcome> GetRouteResponsesOutcomeCallable;
typedef std::future<GetRoutesOutcome> GetRoutesOutcomeCallable;
typedef std::future<GetRoutingRuleOutcome> GetRoutingRuleOutcomeCallable;
typedef std::future<GetStageOutcome> GetStageOutcomeCallable;
typedef std::future<GetStagesOutcome> GetStagesOutcomeCallable;
typedef std::future<GetTagsOutcome> GetTagsOutcomeCallable;
typedef std::future<GetVpcLinkOutcome> GetVpcLinkOutcomeCallable;
typedef std::future<GetVpcLinksOutcome> GetVpcLinksOutcomeCallable;
typedef std::future<ImportApiOutcome> ImportApiOutcomeCallable;
typedef std::future<ListPortalProductsOutcome> ListPortalProductsOutcomeCallable;
typedef std::future<ListPortalsOutcome> ListPortalsOutcomeCallable;
typedef std::future<ListProductPagesOutcome> ListProductPagesOutcomeCallable;
typedef std::future<ListProductRestEndpointPagesOutcome> ListProductRestEndpointPagesOutcomeCallable;
typedef std::future<ListRoutingRulesOutcome> ListRoutingRulesOutcomeCallable;
typedef std::future<PreviewPortalOutcome> PreviewPortalOutcomeCallable;
typedef std::future<PublishPortalOutcome> PublishPortalOutcomeCallable;
typedef std::future<PutPortalProductSharingPolicyOutcome> PutPortalProductSharingPolicyOutcomeCallable;
typedef std::future<PutRoutingRuleOutcome> PutRoutingRuleOutcomeCallable;
typedef std::future<ReimportApiOutcome> ReimportApiOutcomeCallable;
typedef std::future<ResetAuthorizersCacheOutcome> ResetAuthorizersCacheOutcomeCallable;
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
typedef std::future<UpdatePortalOutcome> UpdatePortalOutcomeCallable;
typedef std::future<UpdatePortalProductOutcome> UpdatePortalProductOutcomeCallable;
typedef std::future<UpdateProductPageOutcome> UpdateProductPageOutcomeCallable;
typedef std::future<UpdateProductRestEndpointPageOutcome> UpdateProductRestEndpointPageOutcomeCallable;
typedef std::future<UpdateRouteOutcome> UpdateRouteOutcomeCallable;
typedef std::future<UpdateRouteResponseOutcome> UpdateRouteResponseOutcomeCallable;
typedef std::future<UpdateStageOutcome> UpdateStageOutcomeCallable;
typedef std::future<UpdateVpcLinkOutcome> UpdateVpcLinkOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class ApiGatewayV2Client;

/* Service model async handlers definitions */
typedef std::function<void(const ApiGatewayV2Client*, const Model::CreateApiRequest&, const Model::CreateApiOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateApiResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::CreateApiMappingRequest&, const Model::CreateApiMappingOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateApiMappingResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::CreateAuthorizerRequest&, const Model::CreateAuthorizerOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateAuthorizerResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::CreateDeploymentRequest&, const Model::CreateDeploymentOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateDeploymentResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::CreateDomainNameRequest&, const Model::CreateDomainNameOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateDomainNameResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::CreateIntegrationRequest&, const Model::CreateIntegrationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateIntegrationResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::CreateIntegrationResponseRequest&,
                           const Model::CreateIntegrationResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateIntegrationResponseResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::CreateModelRequest&, const Model::CreateModelOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateModelResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::CreatePortalRequest&, const Model::CreatePortalOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreatePortalResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::CreatePortalProductRequest&, const Model::CreatePortalProductOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreatePortalProductResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::CreateProductPageRequest&, const Model::CreateProductPageOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateProductPageResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::CreateProductRestEndpointPageRequest&,
                           const Model::CreateProductRestEndpointPageOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateProductRestEndpointPageResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::CreateRouteRequest&, const Model::CreateRouteOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateRouteResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::CreateRouteResponseRequest&, const Model::CreateRouteResponseOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateRouteResponseResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::CreateRoutingRuleRequest&, const Model::CreateRoutingRuleOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateRoutingRuleResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::CreateStageRequest&, const Model::CreateStageOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateStageResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::CreateVpcLinkRequest&, const Model::CreateVpcLinkOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateVpcLinkResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::DeleteAccessLogSettingsRequest&,
                           const Model::DeleteAccessLogSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteAccessLogSettingsResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::DeleteApiRequest&, const Model::DeleteApiOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteApiResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::DeleteApiMappingRequest&, const Model::DeleteApiMappingOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteApiMappingResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::DeleteAuthorizerRequest&, const Model::DeleteAuthorizerOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteAuthorizerResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::DeleteCorsConfigurationRequest&,
                           const Model::DeleteCorsConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteCorsConfigurationResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::DeleteDeploymentRequest&, const Model::DeleteDeploymentOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteDeploymentResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::DeleteDomainNameRequest&, const Model::DeleteDomainNameOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteDomainNameResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::DeleteIntegrationRequest&, const Model::DeleteIntegrationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteIntegrationResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::DeleteIntegrationResponseRequest&,
                           const Model::DeleteIntegrationResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteIntegrationResponseResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::DeleteModelRequest&, const Model::DeleteModelOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteModelResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::DeletePortalRequest&, const Model::DeletePortalOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeletePortalResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::DeletePortalProductRequest&, const Model::DeletePortalProductOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeletePortalProductResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::DeletePortalProductSharingPolicyRequest&,
                           const Model::DeletePortalProductSharingPolicyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeletePortalProductSharingPolicyResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::DeleteProductPageRequest&, const Model::DeleteProductPageOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteProductPageResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::DeleteProductRestEndpointPageRequest&,
                           const Model::DeleteProductRestEndpointPageOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteProductRestEndpointPageResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::DeleteRouteRequest&, const Model::DeleteRouteOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteRouteResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::DeleteRouteRequestParameterRequest&,
                           const Model::DeleteRouteRequestParameterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteRouteRequestParameterResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::DeleteRouteResponseRequest&, const Model::DeleteRouteResponseOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteRouteResponseResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::DeleteRouteSettingsRequest&, const Model::DeleteRouteSettingsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteRouteSettingsResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::DeleteRoutingRuleRequest&, const Model::DeleteRoutingRuleOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteRoutingRuleResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::DeleteStageRequest&, const Model::DeleteStageOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteStageResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::DeleteVpcLinkRequest&, const Model::DeleteVpcLinkOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteVpcLinkResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::DisablePortalRequest&, const Model::DisablePortalOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DisablePortalResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::ExportApiRequest&, Model::ExportApiOutcome,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ExportApiResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::GetApiRequest&, const Model::GetApiOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetApiResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::GetApiMappingRequest&, const Model::GetApiMappingOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetApiMappingResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::GetApiMappingsRequest&, const Model::GetApiMappingsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetApiMappingsResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::GetApisRequest&, const Model::GetApisOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetApisResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::GetAuthorizerRequest&, const Model::GetAuthorizerOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAuthorizerResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::GetAuthorizersRequest&, const Model::GetAuthorizersOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAuthorizersResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::GetDeploymentRequest&, const Model::GetDeploymentOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetDeploymentResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::GetDeploymentsRequest&, const Model::GetDeploymentsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetDeploymentsResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::GetDomainNameRequest&, const Model::GetDomainNameOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetDomainNameResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::GetDomainNamesRequest&, const Model::GetDomainNamesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetDomainNamesResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::GetIntegrationRequest&, const Model::GetIntegrationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetIntegrationResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::GetIntegrationResponseRequest&,
                           const Model::GetIntegrationResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetIntegrationResponseResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::GetIntegrationResponsesRequest&,
                           const Model::GetIntegrationResponsesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetIntegrationResponsesResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::GetIntegrationsRequest&, const Model::GetIntegrationsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetIntegrationsResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::GetModelRequest&, const Model::GetModelOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetModelResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::GetModelTemplateRequest&, const Model::GetModelTemplateOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetModelTemplateResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::GetModelsRequest&, const Model::GetModelsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetModelsResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::GetPortalRequest&, const Model::GetPortalOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetPortalResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::GetPortalProductRequest&, const Model::GetPortalProductOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetPortalProductResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::GetPortalProductSharingPolicyRequest&,
                           const Model::GetPortalProductSharingPolicyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetPortalProductSharingPolicyResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::GetProductPageRequest&, const Model::GetProductPageOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetProductPageResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::GetProductRestEndpointPageRequest&,
                           const Model::GetProductRestEndpointPageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetProductRestEndpointPageResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::GetRouteRequest&, const Model::GetRouteOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetRouteResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::GetRouteResponseRequest&, const Model::GetRouteResponseOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetRouteResponseResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::GetRouteResponsesRequest&, const Model::GetRouteResponsesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetRouteResponsesResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::GetRoutesRequest&, const Model::GetRoutesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetRoutesResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::GetRoutingRuleRequest&, const Model::GetRoutingRuleOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetRoutingRuleResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::GetStageRequest&, const Model::GetStageOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetStageResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::GetStagesRequest&, const Model::GetStagesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetStagesResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::GetTagsRequest&, const Model::GetTagsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetTagsResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::GetVpcLinkRequest&, const Model::GetVpcLinkOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetVpcLinkResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::GetVpcLinksRequest&, const Model::GetVpcLinksOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetVpcLinksResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::ImportApiRequest&, const Model::ImportApiOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ImportApiResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::ListPortalProductsRequest&, const Model::ListPortalProductsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListPortalProductsResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::ListPortalsRequest&, const Model::ListPortalsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListPortalsResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::ListProductPagesRequest&, const Model::ListProductPagesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListProductPagesResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::ListProductRestEndpointPagesRequest&,
                           const Model::ListProductRestEndpointPagesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListProductRestEndpointPagesResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::ListRoutingRulesRequest&, const Model::ListRoutingRulesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListRoutingRulesResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::PreviewPortalRequest&, const Model::PreviewPortalOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PreviewPortalResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::PublishPortalRequest&, const Model::PublishPortalOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PublishPortalResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::PutPortalProductSharingPolicyRequest&,
                           const Model::PutPortalProductSharingPolicyOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutPortalProductSharingPolicyResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::PutRoutingRuleRequest&, const Model::PutRoutingRuleOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PutRoutingRuleResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::ReimportApiRequest&, const Model::ReimportApiOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ReimportApiResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::ResetAuthorizersCacheRequest&,
                           const Model::ResetAuthorizersCacheOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ResetAuthorizersCacheResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::UpdateApiRequest&, const Model::UpdateApiOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateApiResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::UpdateApiMappingRequest&, const Model::UpdateApiMappingOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateApiMappingResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::UpdateAuthorizerRequest&, const Model::UpdateAuthorizerOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateAuthorizerResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::UpdateDeploymentRequest&, const Model::UpdateDeploymentOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateDeploymentResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::UpdateDomainNameRequest&, const Model::UpdateDomainNameOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateDomainNameResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::UpdateIntegrationRequest&, const Model::UpdateIntegrationOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateIntegrationResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::UpdateIntegrationResponseRequest&,
                           const Model::UpdateIntegrationResponseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateIntegrationResponseResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::UpdateModelRequest&, const Model::UpdateModelOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateModelResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::UpdatePortalRequest&, const Model::UpdatePortalOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdatePortalResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::UpdatePortalProductRequest&, const Model::UpdatePortalProductOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdatePortalProductResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::UpdateProductPageRequest&, const Model::UpdateProductPageOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateProductPageResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::UpdateProductRestEndpointPageRequest&,
                           const Model::UpdateProductRestEndpointPageOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateProductRestEndpointPageResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::UpdateRouteRequest&, const Model::UpdateRouteOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateRouteResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::UpdateRouteResponseRequest&, const Model::UpdateRouteResponseOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateRouteResponseResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::UpdateStageRequest&, const Model::UpdateStageOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateStageResponseReceivedHandler;
typedef std::function<void(const ApiGatewayV2Client*, const Model::UpdateVpcLinkRequest&, const Model::UpdateVpcLinkOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateVpcLinkResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace ApiGatewayV2
}  // namespace Aws
