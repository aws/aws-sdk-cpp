/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateApiAsync(...)  SubmitAsync(&ApiGatewayV2Client::CreateApi, __VA_ARGS__)
#define CreateApiCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::CreateApi, REQUEST)

#define CreateApiMappingAsync(...)  SubmitAsync(&ApiGatewayV2Client::CreateApiMapping, __VA_ARGS__)
#define CreateApiMappingCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::CreateApiMapping, REQUEST)

#define CreateAuthorizerAsync(...)  SubmitAsync(&ApiGatewayV2Client::CreateAuthorizer, __VA_ARGS__)
#define CreateAuthorizerCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::CreateAuthorizer, REQUEST)

#define CreateDeploymentAsync(...)  SubmitAsync(&ApiGatewayV2Client::CreateDeployment, __VA_ARGS__)
#define CreateDeploymentCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::CreateDeployment, REQUEST)

#define CreateDomainNameAsync(...)  SubmitAsync(&ApiGatewayV2Client::CreateDomainName, __VA_ARGS__)
#define CreateDomainNameCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::CreateDomainName, REQUEST)

#define CreateIntegrationAsync(...)  SubmitAsync(&ApiGatewayV2Client::CreateIntegration, __VA_ARGS__)
#define CreateIntegrationCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::CreateIntegration, REQUEST)

#define CreateIntegrationResponseAsync(...)  SubmitAsync(&ApiGatewayV2Client::CreateIntegrationResponse, __VA_ARGS__)
#define CreateIntegrationResponseCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::CreateIntegrationResponse, REQUEST)

#define CreateModelAsync(...)  SubmitAsync(&ApiGatewayV2Client::CreateModel, __VA_ARGS__)
#define CreateModelCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::CreateModel, REQUEST)

#define CreateRouteAsync(...)  SubmitAsync(&ApiGatewayV2Client::CreateRoute, __VA_ARGS__)
#define CreateRouteCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::CreateRoute, REQUEST)

#define CreateRouteResponseAsync(...)  SubmitAsync(&ApiGatewayV2Client::CreateRouteResponse, __VA_ARGS__)
#define CreateRouteResponseCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::CreateRouteResponse, REQUEST)

#define CreateStageAsync(...)  SubmitAsync(&ApiGatewayV2Client::CreateStage, __VA_ARGS__)
#define CreateStageCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::CreateStage, REQUEST)

#define CreateVpcLinkAsync(...)  SubmitAsync(&ApiGatewayV2Client::CreateVpcLink, __VA_ARGS__)
#define CreateVpcLinkCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::CreateVpcLink, REQUEST)

#define DeleteAccessLogSettingsAsync(...)  SubmitAsync(&ApiGatewayV2Client::DeleteAccessLogSettings, __VA_ARGS__)
#define DeleteAccessLogSettingsCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::DeleteAccessLogSettings, REQUEST)

#define DeleteApiAsync(...)  SubmitAsync(&ApiGatewayV2Client::DeleteApi, __VA_ARGS__)
#define DeleteApiCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::DeleteApi, REQUEST)

#define DeleteApiMappingAsync(...)  SubmitAsync(&ApiGatewayV2Client::DeleteApiMapping, __VA_ARGS__)
#define DeleteApiMappingCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::DeleteApiMapping, REQUEST)

#define DeleteAuthorizerAsync(...)  SubmitAsync(&ApiGatewayV2Client::DeleteAuthorizer, __VA_ARGS__)
#define DeleteAuthorizerCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::DeleteAuthorizer, REQUEST)

#define DeleteCorsConfigurationAsync(...)  SubmitAsync(&ApiGatewayV2Client::DeleteCorsConfiguration, __VA_ARGS__)
#define DeleteCorsConfigurationCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::DeleteCorsConfiguration, REQUEST)

#define DeleteDeploymentAsync(...)  SubmitAsync(&ApiGatewayV2Client::DeleteDeployment, __VA_ARGS__)
#define DeleteDeploymentCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::DeleteDeployment, REQUEST)

#define DeleteDomainNameAsync(...)  SubmitAsync(&ApiGatewayV2Client::DeleteDomainName, __VA_ARGS__)
#define DeleteDomainNameCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::DeleteDomainName, REQUEST)

#define DeleteIntegrationAsync(...)  SubmitAsync(&ApiGatewayV2Client::DeleteIntegration, __VA_ARGS__)
#define DeleteIntegrationCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::DeleteIntegration, REQUEST)

#define DeleteIntegrationResponseAsync(...)  SubmitAsync(&ApiGatewayV2Client::DeleteIntegrationResponse, __VA_ARGS__)
#define DeleteIntegrationResponseCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::DeleteIntegrationResponse, REQUEST)

#define DeleteModelAsync(...)  SubmitAsync(&ApiGatewayV2Client::DeleteModel, __VA_ARGS__)
#define DeleteModelCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::DeleteModel, REQUEST)

#define DeleteRouteAsync(...)  SubmitAsync(&ApiGatewayV2Client::DeleteRoute, __VA_ARGS__)
#define DeleteRouteCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::DeleteRoute, REQUEST)

#define DeleteRouteRequestParameterAsync(...)  SubmitAsync(&ApiGatewayV2Client::DeleteRouteRequestParameter, __VA_ARGS__)
#define DeleteRouteRequestParameterCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::DeleteRouteRequestParameter, REQUEST)

#define DeleteRouteResponseAsync(...)  SubmitAsync(&ApiGatewayV2Client::DeleteRouteResponse, __VA_ARGS__)
#define DeleteRouteResponseCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::DeleteRouteResponse, REQUEST)

#define DeleteRouteSettingsAsync(...)  SubmitAsync(&ApiGatewayV2Client::DeleteRouteSettings, __VA_ARGS__)
#define DeleteRouteSettingsCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::DeleteRouteSettings, REQUEST)

#define DeleteStageAsync(...)  SubmitAsync(&ApiGatewayV2Client::DeleteStage, __VA_ARGS__)
#define DeleteStageCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::DeleteStage, REQUEST)

#define DeleteVpcLinkAsync(...)  SubmitAsync(&ApiGatewayV2Client::DeleteVpcLink, __VA_ARGS__)
#define DeleteVpcLinkCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::DeleteVpcLink, REQUEST)

#define ExportApiAsync(...)  SubmitAsync(&ApiGatewayV2Client::ExportApi, __VA_ARGS__)
#define ExportApiCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::ExportApi, REQUEST)

#define ResetAuthorizersCacheAsync(...)  SubmitAsync(&ApiGatewayV2Client::ResetAuthorizersCache, __VA_ARGS__)
#define ResetAuthorizersCacheCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::ResetAuthorizersCache, REQUEST)

#define GetApiAsync(...)  SubmitAsync(&ApiGatewayV2Client::GetApi, __VA_ARGS__)
#define GetApiCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::GetApi, REQUEST)

#define GetApiMappingAsync(...)  SubmitAsync(&ApiGatewayV2Client::GetApiMapping, __VA_ARGS__)
#define GetApiMappingCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::GetApiMapping, REQUEST)

#define GetApiMappingsAsync(...)  SubmitAsync(&ApiGatewayV2Client::GetApiMappings, __VA_ARGS__)
#define GetApiMappingsCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::GetApiMappings, REQUEST)

#define GetApisAsync(...)  SubmitAsync(&ApiGatewayV2Client::GetApis, __VA_ARGS__)
#define GetApisCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::GetApis, REQUEST)

#define GetAuthorizerAsync(...)  SubmitAsync(&ApiGatewayV2Client::GetAuthorizer, __VA_ARGS__)
#define GetAuthorizerCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::GetAuthorizer, REQUEST)

#define GetAuthorizersAsync(...)  SubmitAsync(&ApiGatewayV2Client::GetAuthorizers, __VA_ARGS__)
#define GetAuthorizersCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::GetAuthorizers, REQUEST)

#define GetDeploymentAsync(...)  SubmitAsync(&ApiGatewayV2Client::GetDeployment, __VA_ARGS__)
#define GetDeploymentCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::GetDeployment, REQUEST)

#define GetDeploymentsAsync(...)  SubmitAsync(&ApiGatewayV2Client::GetDeployments, __VA_ARGS__)
#define GetDeploymentsCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::GetDeployments, REQUEST)

#define GetDomainNameAsync(...)  SubmitAsync(&ApiGatewayV2Client::GetDomainName, __VA_ARGS__)
#define GetDomainNameCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::GetDomainName, REQUEST)

#define GetDomainNamesAsync(...)  SubmitAsync(&ApiGatewayV2Client::GetDomainNames, __VA_ARGS__)
#define GetDomainNamesCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::GetDomainNames, REQUEST)

#define GetIntegrationAsync(...)  SubmitAsync(&ApiGatewayV2Client::GetIntegration, __VA_ARGS__)
#define GetIntegrationCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::GetIntegration, REQUEST)

#define GetIntegrationResponseAsync(...)  SubmitAsync(&ApiGatewayV2Client::GetIntegrationResponse, __VA_ARGS__)
#define GetIntegrationResponseCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::GetIntegrationResponse, REQUEST)

#define GetIntegrationResponsesAsync(...)  SubmitAsync(&ApiGatewayV2Client::GetIntegrationResponses, __VA_ARGS__)
#define GetIntegrationResponsesCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::GetIntegrationResponses, REQUEST)

#define GetIntegrationsAsync(...)  SubmitAsync(&ApiGatewayV2Client::GetIntegrations, __VA_ARGS__)
#define GetIntegrationsCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::GetIntegrations, REQUEST)

#define GetModelAsync(...)  SubmitAsync(&ApiGatewayV2Client::GetModel, __VA_ARGS__)
#define GetModelCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::GetModel, REQUEST)

#define GetModelTemplateAsync(...)  SubmitAsync(&ApiGatewayV2Client::GetModelTemplate, __VA_ARGS__)
#define GetModelTemplateCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::GetModelTemplate, REQUEST)

#define GetModelsAsync(...)  SubmitAsync(&ApiGatewayV2Client::GetModels, __VA_ARGS__)
#define GetModelsCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::GetModels, REQUEST)

#define GetRouteAsync(...)  SubmitAsync(&ApiGatewayV2Client::GetRoute, __VA_ARGS__)
#define GetRouteCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::GetRoute, REQUEST)

#define GetRouteResponseAsync(...)  SubmitAsync(&ApiGatewayV2Client::GetRouteResponse, __VA_ARGS__)
#define GetRouteResponseCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::GetRouteResponse, REQUEST)

#define GetRouteResponsesAsync(...)  SubmitAsync(&ApiGatewayV2Client::GetRouteResponses, __VA_ARGS__)
#define GetRouteResponsesCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::GetRouteResponses, REQUEST)

#define GetRoutesAsync(...)  SubmitAsync(&ApiGatewayV2Client::GetRoutes, __VA_ARGS__)
#define GetRoutesCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::GetRoutes, REQUEST)

#define GetStageAsync(...)  SubmitAsync(&ApiGatewayV2Client::GetStage, __VA_ARGS__)
#define GetStageCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::GetStage, REQUEST)

#define GetStagesAsync(...)  SubmitAsync(&ApiGatewayV2Client::GetStages, __VA_ARGS__)
#define GetStagesCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::GetStages, REQUEST)

#define GetTagsAsync(...)  SubmitAsync(&ApiGatewayV2Client::GetTags, __VA_ARGS__)
#define GetTagsCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::GetTags, REQUEST)

#define GetVpcLinkAsync(...)  SubmitAsync(&ApiGatewayV2Client::GetVpcLink, __VA_ARGS__)
#define GetVpcLinkCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::GetVpcLink, REQUEST)

#define GetVpcLinksAsync(...)  SubmitAsync(&ApiGatewayV2Client::GetVpcLinks, __VA_ARGS__)
#define GetVpcLinksCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::GetVpcLinks, REQUEST)

#define ImportApiAsync(...)  SubmitAsync(&ApiGatewayV2Client::ImportApi, __VA_ARGS__)
#define ImportApiCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::ImportApi, REQUEST)

#define ReimportApiAsync(...)  SubmitAsync(&ApiGatewayV2Client::ReimportApi, __VA_ARGS__)
#define ReimportApiCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::ReimportApi, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&ApiGatewayV2Client::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&ApiGatewayV2Client::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::UntagResource, REQUEST)

#define UpdateApiAsync(...)  SubmitAsync(&ApiGatewayV2Client::UpdateApi, __VA_ARGS__)
#define UpdateApiCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::UpdateApi, REQUEST)

#define UpdateApiMappingAsync(...)  SubmitAsync(&ApiGatewayV2Client::UpdateApiMapping, __VA_ARGS__)
#define UpdateApiMappingCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::UpdateApiMapping, REQUEST)

#define UpdateAuthorizerAsync(...)  SubmitAsync(&ApiGatewayV2Client::UpdateAuthorizer, __VA_ARGS__)
#define UpdateAuthorizerCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::UpdateAuthorizer, REQUEST)

#define UpdateDeploymentAsync(...)  SubmitAsync(&ApiGatewayV2Client::UpdateDeployment, __VA_ARGS__)
#define UpdateDeploymentCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::UpdateDeployment, REQUEST)

#define UpdateDomainNameAsync(...)  SubmitAsync(&ApiGatewayV2Client::UpdateDomainName, __VA_ARGS__)
#define UpdateDomainNameCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::UpdateDomainName, REQUEST)

#define UpdateIntegrationAsync(...)  SubmitAsync(&ApiGatewayV2Client::UpdateIntegration, __VA_ARGS__)
#define UpdateIntegrationCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::UpdateIntegration, REQUEST)

#define UpdateIntegrationResponseAsync(...)  SubmitAsync(&ApiGatewayV2Client::UpdateIntegrationResponse, __VA_ARGS__)
#define UpdateIntegrationResponseCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::UpdateIntegrationResponse, REQUEST)

#define UpdateModelAsync(...)  SubmitAsync(&ApiGatewayV2Client::UpdateModel, __VA_ARGS__)
#define UpdateModelCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::UpdateModel, REQUEST)

#define UpdateRouteAsync(...)  SubmitAsync(&ApiGatewayV2Client::UpdateRoute, __VA_ARGS__)
#define UpdateRouteCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::UpdateRoute, REQUEST)

#define UpdateRouteResponseAsync(...)  SubmitAsync(&ApiGatewayV2Client::UpdateRouteResponse, __VA_ARGS__)
#define UpdateRouteResponseCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::UpdateRouteResponse, REQUEST)

#define UpdateStageAsync(...)  SubmitAsync(&ApiGatewayV2Client::UpdateStage, __VA_ARGS__)
#define UpdateStageCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::UpdateStage, REQUEST)

#define UpdateVpcLinkAsync(...)  SubmitAsync(&ApiGatewayV2Client::UpdateVpcLink, __VA_ARGS__)
#define UpdateVpcLinkCallable(REQUEST)  SubmitCallable(&ApiGatewayV2Client::UpdateVpcLink, REQUEST)

