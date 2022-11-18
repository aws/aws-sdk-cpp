/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateApiKeyAsync(...)  SubmitAsync(&APIGatewayClient::CreateApiKey, __VA_ARGS__)
#define CreateApiKeyCallable(REQUEST)  SubmitCallable(&APIGatewayClient::CreateApiKey, REQUEST)

#define CreateAuthorizerAsync(...)  SubmitAsync(&APIGatewayClient::CreateAuthorizer, __VA_ARGS__)
#define CreateAuthorizerCallable(REQUEST)  SubmitCallable(&APIGatewayClient::CreateAuthorizer, REQUEST)

#define CreateBasePathMappingAsync(...)  SubmitAsync(&APIGatewayClient::CreateBasePathMapping, __VA_ARGS__)
#define CreateBasePathMappingCallable(REQUEST)  SubmitCallable(&APIGatewayClient::CreateBasePathMapping, REQUEST)

#define CreateDeploymentAsync(...)  SubmitAsync(&APIGatewayClient::CreateDeployment, __VA_ARGS__)
#define CreateDeploymentCallable(REQUEST)  SubmitCallable(&APIGatewayClient::CreateDeployment, REQUEST)

#define CreateDocumentationPartAsync(...)  SubmitAsync(&APIGatewayClient::CreateDocumentationPart, __VA_ARGS__)
#define CreateDocumentationPartCallable(REQUEST)  SubmitCallable(&APIGatewayClient::CreateDocumentationPart, REQUEST)

#define CreateDocumentationVersionAsync(...)  SubmitAsync(&APIGatewayClient::CreateDocumentationVersion, __VA_ARGS__)
#define CreateDocumentationVersionCallable(REQUEST)  SubmitCallable(&APIGatewayClient::CreateDocumentationVersion, REQUEST)

#define CreateDomainNameAsync(...)  SubmitAsync(&APIGatewayClient::CreateDomainName, __VA_ARGS__)
#define CreateDomainNameCallable(REQUEST)  SubmitCallable(&APIGatewayClient::CreateDomainName, REQUEST)

#define CreateModelAsync(...)  SubmitAsync(&APIGatewayClient::CreateModel, __VA_ARGS__)
#define CreateModelCallable(REQUEST)  SubmitCallable(&APIGatewayClient::CreateModel, REQUEST)

#define CreateRequestValidatorAsync(...)  SubmitAsync(&APIGatewayClient::CreateRequestValidator, __VA_ARGS__)
#define CreateRequestValidatorCallable(REQUEST)  SubmitCallable(&APIGatewayClient::CreateRequestValidator, REQUEST)

#define CreateResourceAsync(...)  SubmitAsync(&APIGatewayClient::CreateResource, __VA_ARGS__)
#define CreateResourceCallable(REQUEST)  SubmitCallable(&APIGatewayClient::CreateResource, REQUEST)

#define CreateRestApiAsync(...)  SubmitAsync(&APIGatewayClient::CreateRestApi, __VA_ARGS__)
#define CreateRestApiCallable(REQUEST)  SubmitCallable(&APIGatewayClient::CreateRestApi, REQUEST)

#define CreateStageAsync(...)  SubmitAsync(&APIGatewayClient::CreateStage, __VA_ARGS__)
#define CreateStageCallable(REQUEST)  SubmitCallable(&APIGatewayClient::CreateStage, REQUEST)

#define CreateUsagePlanAsync(...)  SubmitAsync(&APIGatewayClient::CreateUsagePlan, __VA_ARGS__)
#define CreateUsagePlanCallable(REQUEST)  SubmitCallable(&APIGatewayClient::CreateUsagePlan, REQUEST)

#define CreateUsagePlanKeyAsync(...)  SubmitAsync(&APIGatewayClient::CreateUsagePlanKey, __VA_ARGS__)
#define CreateUsagePlanKeyCallable(REQUEST)  SubmitCallable(&APIGatewayClient::CreateUsagePlanKey, REQUEST)

#define CreateVpcLinkAsync(...)  SubmitAsync(&APIGatewayClient::CreateVpcLink, __VA_ARGS__)
#define CreateVpcLinkCallable(REQUEST)  SubmitCallable(&APIGatewayClient::CreateVpcLink, REQUEST)

#define DeleteApiKeyAsync(...)  SubmitAsync(&APIGatewayClient::DeleteApiKey, __VA_ARGS__)
#define DeleteApiKeyCallable(REQUEST)  SubmitCallable(&APIGatewayClient::DeleteApiKey, REQUEST)

#define DeleteAuthorizerAsync(...)  SubmitAsync(&APIGatewayClient::DeleteAuthorizer, __VA_ARGS__)
#define DeleteAuthorizerCallable(REQUEST)  SubmitCallable(&APIGatewayClient::DeleteAuthorizer, REQUEST)

#define DeleteBasePathMappingAsync(...)  SubmitAsync(&APIGatewayClient::DeleteBasePathMapping, __VA_ARGS__)
#define DeleteBasePathMappingCallable(REQUEST)  SubmitCallable(&APIGatewayClient::DeleteBasePathMapping, REQUEST)

#define DeleteClientCertificateAsync(...)  SubmitAsync(&APIGatewayClient::DeleteClientCertificate, __VA_ARGS__)
#define DeleteClientCertificateCallable(REQUEST)  SubmitCallable(&APIGatewayClient::DeleteClientCertificate, REQUEST)

#define DeleteDeploymentAsync(...)  SubmitAsync(&APIGatewayClient::DeleteDeployment, __VA_ARGS__)
#define DeleteDeploymentCallable(REQUEST)  SubmitCallable(&APIGatewayClient::DeleteDeployment, REQUEST)

#define DeleteDocumentationPartAsync(...)  SubmitAsync(&APIGatewayClient::DeleteDocumentationPart, __VA_ARGS__)
#define DeleteDocumentationPartCallable(REQUEST)  SubmitCallable(&APIGatewayClient::DeleteDocumentationPart, REQUEST)

#define DeleteDocumentationVersionAsync(...)  SubmitAsync(&APIGatewayClient::DeleteDocumentationVersion, __VA_ARGS__)
#define DeleteDocumentationVersionCallable(REQUEST)  SubmitCallable(&APIGatewayClient::DeleteDocumentationVersion, REQUEST)

#define DeleteDomainNameAsync(...)  SubmitAsync(&APIGatewayClient::DeleteDomainName, __VA_ARGS__)
#define DeleteDomainNameCallable(REQUEST)  SubmitCallable(&APIGatewayClient::DeleteDomainName, REQUEST)

#define DeleteGatewayResponseAsync(...)  SubmitAsync(&APIGatewayClient::DeleteGatewayResponse, __VA_ARGS__)
#define DeleteGatewayResponseCallable(REQUEST)  SubmitCallable(&APIGatewayClient::DeleteGatewayResponse, REQUEST)

#define DeleteIntegrationAsync(...)  SubmitAsync(&APIGatewayClient::DeleteIntegration, __VA_ARGS__)
#define DeleteIntegrationCallable(REQUEST)  SubmitCallable(&APIGatewayClient::DeleteIntegration, REQUEST)

#define DeleteIntegrationResponseAsync(...)  SubmitAsync(&APIGatewayClient::DeleteIntegrationResponse, __VA_ARGS__)
#define DeleteIntegrationResponseCallable(REQUEST)  SubmitCallable(&APIGatewayClient::DeleteIntegrationResponse, REQUEST)

#define DeleteMethodAsync(...)  SubmitAsync(&APIGatewayClient::DeleteMethod, __VA_ARGS__)
#define DeleteMethodCallable(REQUEST)  SubmitCallable(&APIGatewayClient::DeleteMethod, REQUEST)

#define DeleteMethodResponseAsync(...)  SubmitAsync(&APIGatewayClient::DeleteMethodResponse, __VA_ARGS__)
#define DeleteMethodResponseCallable(REQUEST)  SubmitCallable(&APIGatewayClient::DeleteMethodResponse, REQUEST)

#define DeleteModelAsync(...)  SubmitAsync(&APIGatewayClient::DeleteModel, __VA_ARGS__)
#define DeleteModelCallable(REQUEST)  SubmitCallable(&APIGatewayClient::DeleteModel, REQUEST)

#define DeleteRequestValidatorAsync(...)  SubmitAsync(&APIGatewayClient::DeleteRequestValidator, __VA_ARGS__)
#define DeleteRequestValidatorCallable(REQUEST)  SubmitCallable(&APIGatewayClient::DeleteRequestValidator, REQUEST)

#define DeleteResourceAsync(...)  SubmitAsync(&APIGatewayClient::DeleteResource, __VA_ARGS__)
#define DeleteResourceCallable(REQUEST)  SubmitCallable(&APIGatewayClient::DeleteResource, REQUEST)

#define DeleteRestApiAsync(...)  SubmitAsync(&APIGatewayClient::DeleteRestApi, __VA_ARGS__)
#define DeleteRestApiCallable(REQUEST)  SubmitCallable(&APIGatewayClient::DeleteRestApi, REQUEST)

#define DeleteStageAsync(...)  SubmitAsync(&APIGatewayClient::DeleteStage, __VA_ARGS__)
#define DeleteStageCallable(REQUEST)  SubmitCallable(&APIGatewayClient::DeleteStage, REQUEST)

#define DeleteUsagePlanAsync(...)  SubmitAsync(&APIGatewayClient::DeleteUsagePlan, __VA_ARGS__)
#define DeleteUsagePlanCallable(REQUEST)  SubmitCallable(&APIGatewayClient::DeleteUsagePlan, REQUEST)

#define DeleteUsagePlanKeyAsync(...)  SubmitAsync(&APIGatewayClient::DeleteUsagePlanKey, __VA_ARGS__)
#define DeleteUsagePlanKeyCallable(REQUEST)  SubmitCallable(&APIGatewayClient::DeleteUsagePlanKey, REQUEST)

#define DeleteVpcLinkAsync(...)  SubmitAsync(&APIGatewayClient::DeleteVpcLink, __VA_ARGS__)
#define DeleteVpcLinkCallable(REQUEST)  SubmitCallable(&APIGatewayClient::DeleteVpcLink, REQUEST)

#define FlushStageAuthorizersCacheAsync(...)  SubmitAsync(&APIGatewayClient::FlushStageAuthorizersCache, __VA_ARGS__)
#define FlushStageAuthorizersCacheCallable(REQUEST)  SubmitCallable(&APIGatewayClient::FlushStageAuthorizersCache, REQUEST)

#define FlushStageCacheAsync(...)  SubmitAsync(&APIGatewayClient::FlushStageCache, __VA_ARGS__)
#define FlushStageCacheCallable(REQUEST)  SubmitCallable(&APIGatewayClient::FlushStageCache, REQUEST)

#define GenerateClientCertificateAsync(...)  SubmitAsync(&APIGatewayClient::GenerateClientCertificate, __VA_ARGS__)
#define GenerateClientCertificateCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GenerateClientCertificate, REQUEST)

#define GetAccountAsync(...)  SubmitAsync(&APIGatewayClient::GetAccount, __VA_ARGS__)
#define GetAccountCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetAccount, REQUEST)

#define GetApiKeyAsync(...)  SubmitAsync(&APIGatewayClient::GetApiKey, __VA_ARGS__)
#define GetApiKeyCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetApiKey, REQUEST)

#define GetApiKeysAsync(...)  SubmitAsync(&APIGatewayClient::GetApiKeys, __VA_ARGS__)
#define GetApiKeysCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetApiKeys, REQUEST)

#define GetAuthorizerAsync(...)  SubmitAsync(&APIGatewayClient::GetAuthorizer, __VA_ARGS__)
#define GetAuthorizerCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetAuthorizer, REQUEST)

#define GetAuthorizersAsync(...)  SubmitAsync(&APIGatewayClient::GetAuthorizers, __VA_ARGS__)
#define GetAuthorizersCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetAuthorizers, REQUEST)

#define GetBasePathMappingAsync(...)  SubmitAsync(&APIGatewayClient::GetBasePathMapping, __VA_ARGS__)
#define GetBasePathMappingCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetBasePathMapping, REQUEST)

#define GetBasePathMappingsAsync(...)  SubmitAsync(&APIGatewayClient::GetBasePathMappings, __VA_ARGS__)
#define GetBasePathMappingsCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetBasePathMappings, REQUEST)

#define GetClientCertificateAsync(...)  SubmitAsync(&APIGatewayClient::GetClientCertificate, __VA_ARGS__)
#define GetClientCertificateCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetClientCertificate, REQUEST)

#define GetClientCertificatesAsync(...)  SubmitAsync(&APIGatewayClient::GetClientCertificates, __VA_ARGS__)
#define GetClientCertificatesCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetClientCertificates, REQUEST)

#define GetDeploymentAsync(...)  SubmitAsync(&APIGatewayClient::GetDeployment, __VA_ARGS__)
#define GetDeploymentCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetDeployment, REQUEST)

#define GetDeploymentsAsync(...)  SubmitAsync(&APIGatewayClient::GetDeployments, __VA_ARGS__)
#define GetDeploymentsCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetDeployments, REQUEST)

#define GetDocumentationPartAsync(...)  SubmitAsync(&APIGatewayClient::GetDocumentationPart, __VA_ARGS__)
#define GetDocumentationPartCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetDocumentationPart, REQUEST)

#define GetDocumentationPartsAsync(...)  SubmitAsync(&APIGatewayClient::GetDocumentationParts, __VA_ARGS__)
#define GetDocumentationPartsCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetDocumentationParts, REQUEST)

#define GetDocumentationVersionAsync(...)  SubmitAsync(&APIGatewayClient::GetDocumentationVersion, __VA_ARGS__)
#define GetDocumentationVersionCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetDocumentationVersion, REQUEST)

#define GetDocumentationVersionsAsync(...)  SubmitAsync(&APIGatewayClient::GetDocumentationVersions, __VA_ARGS__)
#define GetDocumentationVersionsCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetDocumentationVersions, REQUEST)

#define GetDomainNameAsync(...)  SubmitAsync(&APIGatewayClient::GetDomainName, __VA_ARGS__)
#define GetDomainNameCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetDomainName, REQUEST)

#define GetDomainNamesAsync(...)  SubmitAsync(&APIGatewayClient::GetDomainNames, __VA_ARGS__)
#define GetDomainNamesCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetDomainNames, REQUEST)

#define GetExportAsync(...)  SubmitAsync(&APIGatewayClient::GetExport, __VA_ARGS__)
#define GetExportCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetExport, REQUEST)

#define GetGatewayResponseAsync(...)  SubmitAsync(&APIGatewayClient::GetGatewayResponse, __VA_ARGS__)
#define GetGatewayResponseCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetGatewayResponse, REQUEST)

#define GetGatewayResponsesAsync(...)  SubmitAsync(&APIGatewayClient::GetGatewayResponses, __VA_ARGS__)
#define GetGatewayResponsesCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetGatewayResponses, REQUEST)

#define GetIntegrationAsync(...)  SubmitAsync(&APIGatewayClient::GetIntegration, __VA_ARGS__)
#define GetIntegrationCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetIntegration, REQUEST)

#define GetIntegrationResponseAsync(...)  SubmitAsync(&APIGatewayClient::GetIntegrationResponse, __VA_ARGS__)
#define GetIntegrationResponseCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetIntegrationResponse, REQUEST)

#define GetMethodAsync(...)  SubmitAsync(&APIGatewayClient::GetMethod, __VA_ARGS__)
#define GetMethodCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetMethod, REQUEST)

#define GetMethodResponseAsync(...)  SubmitAsync(&APIGatewayClient::GetMethodResponse, __VA_ARGS__)
#define GetMethodResponseCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetMethodResponse, REQUEST)

#define GetModelAsync(...)  SubmitAsync(&APIGatewayClient::GetModel, __VA_ARGS__)
#define GetModelCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetModel, REQUEST)

#define GetModelTemplateAsync(...)  SubmitAsync(&APIGatewayClient::GetModelTemplate, __VA_ARGS__)
#define GetModelTemplateCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetModelTemplate, REQUEST)

#define GetModelsAsync(...)  SubmitAsync(&APIGatewayClient::GetModels, __VA_ARGS__)
#define GetModelsCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetModels, REQUEST)

#define GetRequestValidatorAsync(...)  SubmitAsync(&APIGatewayClient::GetRequestValidator, __VA_ARGS__)
#define GetRequestValidatorCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetRequestValidator, REQUEST)

#define GetRequestValidatorsAsync(...)  SubmitAsync(&APIGatewayClient::GetRequestValidators, __VA_ARGS__)
#define GetRequestValidatorsCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetRequestValidators, REQUEST)

#define GetResourceAsync(...)  SubmitAsync(&APIGatewayClient::GetResource, __VA_ARGS__)
#define GetResourceCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetResource, REQUEST)

#define GetResourcesAsync(...)  SubmitAsync(&APIGatewayClient::GetResources, __VA_ARGS__)
#define GetResourcesCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetResources, REQUEST)

#define GetRestApiAsync(...)  SubmitAsync(&APIGatewayClient::GetRestApi, __VA_ARGS__)
#define GetRestApiCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetRestApi, REQUEST)

#define GetRestApisAsync(...)  SubmitAsync(&APIGatewayClient::GetRestApis, __VA_ARGS__)
#define GetRestApisCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetRestApis, REQUEST)

#define GetSdkAsync(...)  SubmitAsync(&APIGatewayClient::GetSdk, __VA_ARGS__)
#define GetSdkCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetSdk, REQUEST)

#define GetSdkTypeAsync(...)  SubmitAsync(&APIGatewayClient::GetSdkType, __VA_ARGS__)
#define GetSdkTypeCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetSdkType, REQUEST)

#define GetSdkTypesAsync(...)  SubmitAsync(&APIGatewayClient::GetSdkTypes, __VA_ARGS__)
#define GetSdkTypesCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetSdkTypes, REQUEST)

#define GetStageAsync(...)  SubmitAsync(&APIGatewayClient::GetStage, __VA_ARGS__)
#define GetStageCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetStage, REQUEST)

#define GetStagesAsync(...)  SubmitAsync(&APIGatewayClient::GetStages, __VA_ARGS__)
#define GetStagesCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetStages, REQUEST)

#define GetTagsAsync(...)  SubmitAsync(&APIGatewayClient::GetTags, __VA_ARGS__)
#define GetTagsCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetTags, REQUEST)

#define GetUsageAsync(...)  SubmitAsync(&APIGatewayClient::GetUsage, __VA_ARGS__)
#define GetUsageCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetUsage, REQUEST)

#define GetUsagePlanAsync(...)  SubmitAsync(&APIGatewayClient::GetUsagePlan, __VA_ARGS__)
#define GetUsagePlanCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetUsagePlan, REQUEST)

#define GetUsagePlanKeyAsync(...)  SubmitAsync(&APIGatewayClient::GetUsagePlanKey, __VA_ARGS__)
#define GetUsagePlanKeyCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetUsagePlanKey, REQUEST)

#define GetUsagePlanKeysAsync(...)  SubmitAsync(&APIGatewayClient::GetUsagePlanKeys, __VA_ARGS__)
#define GetUsagePlanKeysCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetUsagePlanKeys, REQUEST)

#define GetUsagePlansAsync(...)  SubmitAsync(&APIGatewayClient::GetUsagePlans, __VA_ARGS__)
#define GetUsagePlansCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetUsagePlans, REQUEST)

#define GetVpcLinkAsync(...)  SubmitAsync(&APIGatewayClient::GetVpcLink, __VA_ARGS__)
#define GetVpcLinkCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetVpcLink, REQUEST)

#define GetVpcLinksAsync(...)  SubmitAsync(&APIGatewayClient::GetVpcLinks, __VA_ARGS__)
#define GetVpcLinksCallable(REQUEST)  SubmitCallable(&APIGatewayClient::GetVpcLinks, REQUEST)

#define ImportApiKeysAsync(...)  SubmitAsync(&APIGatewayClient::ImportApiKeys, __VA_ARGS__)
#define ImportApiKeysCallable(REQUEST)  SubmitCallable(&APIGatewayClient::ImportApiKeys, REQUEST)

#define ImportDocumentationPartsAsync(...)  SubmitAsync(&APIGatewayClient::ImportDocumentationParts, __VA_ARGS__)
#define ImportDocumentationPartsCallable(REQUEST)  SubmitCallable(&APIGatewayClient::ImportDocumentationParts, REQUEST)

#define ImportRestApiAsync(...)  SubmitAsync(&APIGatewayClient::ImportRestApi, __VA_ARGS__)
#define ImportRestApiCallable(REQUEST)  SubmitCallable(&APIGatewayClient::ImportRestApi, REQUEST)

#define PutGatewayResponseAsync(...)  SubmitAsync(&APIGatewayClient::PutGatewayResponse, __VA_ARGS__)
#define PutGatewayResponseCallable(REQUEST)  SubmitCallable(&APIGatewayClient::PutGatewayResponse, REQUEST)

#define PutIntegrationAsync(...)  SubmitAsync(&APIGatewayClient::PutIntegration, __VA_ARGS__)
#define PutIntegrationCallable(REQUEST)  SubmitCallable(&APIGatewayClient::PutIntegration, REQUEST)

#define PutIntegrationResponseAsync(...)  SubmitAsync(&APIGatewayClient::PutIntegrationResponse, __VA_ARGS__)
#define PutIntegrationResponseCallable(REQUEST)  SubmitCallable(&APIGatewayClient::PutIntegrationResponse, REQUEST)

#define PutMethodAsync(...)  SubmitAsync(&APIGatewayClient::PutMethod, __VA_ARGS__)
#define PutMethodCallable(REQUEST)  SubmitCallable(&APIGatewayClient::PutMethod, REQUEST)

#define PutMethodResponseAsync(...)  SubmitAsync(&APIGatewayClient::PutMethodResponse, __VA_ARGS__)
#define PutMethodResponseCallable(REQUEST)  SubmitCallable(&APIGatewayClient::PutMethodResponse, REQUEST)

#define PutRestApiAsync(...)  SubmitAsync(&APIGatewayClient::PutRestApi, __VA_ARGS__)
#define PutRestApiCallable(REQUEST)  SubmitCallable(&APIGatewayClient::PutRestApi, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&APIGatewayClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&APIGatewayClient::TagResource, REQUEST)

#define TestInvokeAuthorizerAsync(...)  SubmitAsync(&APIGatewayClient::TestInvokeAuthorizer, __VA_ARGS__)
#define TestInvokeAuthorizerCallable(REQUEST)  SubmitCallable(&APIGatewayClient::TestInvokeAuthorizer, REQUEST)

#define TestInvokeMethodAsync(...)  SubmitAsync(&APIGatewayClient::TestInvokeMethod, __VA_ARGS__)
#define TestInvokeMethodCallable(REQUEST)  SubmitCallable(&APIGatewayClient::TestInvokeMethod, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&APIGatewayClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&APIGatewayClient::UntagResource, REQUEST)

#define UpdateAccountAsync(...)  SubmitAsync(&APIGatewayClient::UpdateAccount, __VA_ARGS__)
#define UpdateAccountCallable(REQUEST)  SubmitCallable(&APIGatewayClient::UpdateAccount, REQUEST)

#define UpdateApiKeyAsync(...)  SubmitAsync(&APIGatewayClient::UpdateApiKey, __VA_ARGS__)
#define UpdateApiKeyCallable(REQUEST)  SubmitCallable(&APIGatewayClient::UpdateApiKey, REQUEST)

#define UpdateAuthorizerAsync(...)  SubmitAsync(&APIGatewayClient::UpdateAuthorizer, __VA_ARGS__)
#define UpdateAuthorizerCallable(REQUEST)  SubmitCallable(&APIGatewayClient::UpdateAuthorizer, REQUEST)

#define UpdateBasePathMappingAsync(...)  SubmitAsync(&APIGatewayClient::UpdateBasePathMapping, __VA_ARGS__)
#define UpdateBasePathMappingCallable(REQUEST)  SubmitCallable(&APIGatewayClient::UpdateBasePathMapping, REQUEST)

#define UpdateClientCertificateAsync(...)  SubmitAsync(&APIGatewayClient::UpdateClientCertificate, __VA_ARGS__)
#define UpdateClientCertificateCallable(REQUEST)  SubmitCallable(&APIGatewayClient::UpdateClientCertificate, REQUEST)

#define UpdateDeploymentAsync(...)  SubmitAsync(&APIGatewayClient::UpdateDeployment, __VA_ARGS__)
#define UpdateDeploymentCallable(REQUEST)  SubmitCallable(&APIGatewayClient::UpdateDeployment, REQUEST)

#define UpdateDocumentationPartAsync(...)  SubmitAsync(&APIGatewayClient::UpdateDocumentationPart, __VA_ARGS__)
#define UpdateDocumentationPartCallable(REQUEST)  SubmitCallable(&APIGatewayClient::UpdateDocumentationPart, REQUEST)

#define UpdateDocumentationVersionAsync(...)  SubmitAsync(&APIGatewayClient::UpdateDocumentationVersion, __VA_ARGS__)
#define UpdateDocumentationVersionCallable(REQUEST)  SubmitCallable(&APIGatewayClient::UpdateDocumentationVersion, REQUEST)

#define UpdateDomainNameAsync(...)  SubmitAsync(&APIGatewayClient::UpdateDomainName, __VA_ARGS__)
#define UpdateDomainNameCallable(REQUEST)  SubmitCallable(&APIGatewayClient::UpdateDomainName, REQUEST)

#define UpdateGatewayResponseAsync(...)  SubmitAsync(&APIGatewayClient::UpdateGatewayResponse, __VA_ARGS__)
#define UpdateGatewayResponseCallable(REQUEST)  SubmitCallable(&APIGatewayClient::UpdateGatewayResponse, REQUEST)

#define UpdateIntegrationAsync(...)  SubmitAsync(&APIGatewayClient::UpdateIntegration, __VA_ARGS__)
#define UpdateIntegrationCallable(REQUEST)  SubmitCallable(&APIGatewayClient::UpdateIntegration, REQUEST)

#define UpdateIntegrationResponseAsync(...)  SubmitAsync(&APIGatewayClient::UpdateIntegrationResponse, __VA_ARGS__)
#define UpdateIntegrationResponseCallable(REQUEST)  SubmitCallable(&APIGatewayClient::UpdateIntegrationResponse, REQUEST)

#define UpdateMethodAsync(...)  SubmitAsync(&APIGatewayClient::UpdateMethod, __VA_ARGS__)
#define UpdateMethodCallable(REQUEST)  SubmitCallable(&APIGatewayClient::UpdateMethod, REQUEST)

#define UpdateMethodResponseAsync(...)  SubmitAsync(&APIGatewayClient::UpdateMethodResponse, __VA_ARGS__)
#define UpdateMethodResponseCallable(REQUEST)  SubmitCallable(&APIGatewayClient::UpdateMethodResponse, REQUEST)

#define UpdateModelAsync(...)  SubmitAsync(&APIGatewayClient::UpdateModel, __VA_ARGS__)
#define UpdateModelCallable(REQUEST)  SubmitCallable(&APIGatewayClient::UpdateModel, REQUEST)

#define UpdateRequestValidatorAsync(...)  SubmitAsync(&APIGatewayClient::UpdateRequestValidator, __VA_ARGS__)
#define UpdateRequestValidatorCallable(REQUEST)  SubmitCallable(&APIGatewayClient::UpdateRequestValidator, REQUEST)

#define UpdateResourceAsync(...)  SubmitAsync(&APIGatewayClient::UpdateResource, __VA_ARGS__)
#define UpdateResourceCallable(REQUEST)  SubmitCallable(&APIGatewayClient::UpdateResource, REQUEST)

#define UpdateRestApiAsync(...)  SubmitAsync(&APIGatewayClient::UpdateRestApi, __VA_ARGS__)
#define UpdateRestApiCallable(REQUEST)  SubmitCallable(&APIGatewayClient::UpdateRestApi, REQUEST)

#define UpdateStageAsync(...)  SubmitAsync(&APIGatewayClient::UpdateStage, __VA_ARGS__)
#define UpdateStageCallable(REQUEST)  SubmitCallable(&APIGatewayClient::UpdateStage, REQUEST)

#define UpdateUsageAsync(...)  SubmitAsync(&APIGatewayClient::UpdateUsage, __VA_ARGS__)
#define UpdateUsageCallable(REQUEST)  SubmitCallable(&APIGatewayClient::UpdateUsage, REQUEST)

#define UpdateUsagePlanAsync(...)  SubmitAsync(&APIGatewayClient::UpdateUsagePlan, __VA_ARGS__)
#define UpdateUsagePlanCallable(REQUEST)  SubmitCallable(&APIGatewayClient::UpdateUsagePlan, REQUEST)

#define UpdateVpcLinkAsync(...)  SubmitAsync(&APIGatewayClient::UpdateVpcLink, __VA_ARGS__)
#define UpdateVpcLinkCallable(REQUEST)  SubmitCallable(&APIGatewayClient::UpdateVpcLink, REQUEST)

