/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateApiAsync(...)  SubmitAsync(&AppSyncClient::AssociateApi, __VA_ARGS__)
#define AssociateApiCallable(REQUEST)  SubmitCallable(&AppSyncClient::AssociateApi, REQUEST)

#define CreateApiCacheAsync(...)  SubmitAsync(&AppSyncClient::CreateApiCache, __VA_ARGS__)
#define CreateApiCacheCallable(REQUEST)  SubmitCallable(&AppSyncClient::CreateApiCache, REQUEST)

#define CreateApiKeyAsync(...)  SubmitAsync(&AppSyncClient::CreateApiKey, __VA_ARGS__)
#define CreateApiKeyCallable(REQUEST)  SubmitCallable(&AppSyncClient::CreateApiKey, REQUEST)

#define CreateDataSourceAsync(...)  SubmitAsync(&AppSyncClient::CreateDataSource, __VA_ARGS__)
#define CreateDataSourceCallable(REQUEST)  SubmitCallable(&AppSyncClient::CreateDataSource, REQUEST)

#define CreateDomainNameAsync(...)  SubmitAsync(&AppSyncClient::CreateDomainName, __VA_ARGS__)
#define CreateDomainNameCallable(REQUEST)  SubmitCallable(&AppSyncClient::CreateDomainName, REQUEST)

#define CreateFunctionAsync(...)  SubmitAsync(&AppSyncClient::CreateFunction, __VA_ARGS__)
#define CreateFunctionCallable(REQUEST)  SubmitCallable(&AppSyncClient::CreateFunction, REQUEST)

#define CreateGraphqlApiAsync(...)  SubmitAsync(&AppSyncClient::CreateGraphqlApi, __VA_ARGS__)
#define CreateGraphqlApiCallable(REQUEST)  SubmitCallable(&AppSyncClient::CreateGraphqlApi, REQUEST)

#define CreateResolverAsync(...)  SubmitAsync(&AppSyncClient::CreateResolver, __VA_ARGS__)
#define CreateResolverCallable(REQUEST)  SubmitCallable(&AppSyncClient::CreateResolver, REQUEST)

#define CreateTypeAsync(...)  SubmitAsync(&AppSyncClient::CreateType, __VA_ARGS__)
#define CreateTypeCallable(REQUEST)  SubmitCallable(&AppSyncClient::CreateType, REQUEST)

#define DeleteApiCacheAsync(...)  SubmitAsync(&AppSyncClient::DeleteApiCache, __VA_ARGS__)
#define DeleteApiCacheCallable(REQUEST)  SubmitCallable(&AppSyncClient::DeleteApiCache, REQUEST)

#define DeleteApiKeyAsync(...)  SubmitAsync(&AppSyncClient::DeleteApiKey, __VA_ARGS__)
#define DeleteApiKeyCallable(REQUEST)  SubmitCallable(&AppSyncClient::DeleteApiKey, REQUEST)

#define DeleteDataSourceAsync(...)  SubmitAsync(&AppSyncClient::DeleteDataSource, __VA_ARGS__)
#define DeleteDataSourceCallable(REQUEST)  SubmitCallable(&AppSyncClient::DeleteDataSource, REQUEST)

#define DeleteDomainNameAsync(...)  SubmitAsync(&AppSyncClient::DeleteDomainName, __VA_ARGS__)
#define DeleteDomainNameCallable(REQUEST)  SubmitCallable(&AppSyncClient::DeleteDomainName, REQUEST)

#define DeleteFunctionAsync(...)  SubmitAsync(&AppSyncClient::DeleteFunction, __VA_ARGS__)
#define DeleteFunctionCallable(REQUEST)  SubmitCallable(&AppSyncClient::DeleteFunction, REQUEST)

#define DeleteGraphqlApiAsync(...)  SubmitAsync(&AppSyncClient::DeleteGraphqlApi, __VA_ARGS__)
#define DeleteGraphqlApiCallable(REQUEST)  SubmitCallable(&AppSyncClient::DeleteGraphqlApi, REQUEST)

#define DeleteResolverAsync(...)  SubmitAsync(&AppSyncClient::DeleteResolver, __VA_ARGS__)
#define DeleteResolverCallable(REQUEST)  SubmitCallable(&AppSyncClient::DeleteResolver, REQUEST)

#define DeleteTypeAsync(...)  SubmitAsync(&AppSyncClient::DeleteType, __VA_ARGS__)
#define DeleteTypeCallable(REQUEST)  SubmitCallable(&AppSyncClient::DeleteType, REQUEST)

#define DisassociateApiAsync(...)  SubmitAsync(&AppSyncClient::DisassociateApi, __VA_ARGS__)
#define DisassociateApiCallable(REQUEST)  SubmitCallable(&AppSyncClient::DisassociateApi, REQUEST)

#define EvaluateCodeAsync(...)  SubmitAsync(&AppSyncClient::EvaluateCode, __VA_ARGS__)
#define EvaluateCodeCallable(REQUEST)  SubmitCallable(&AppSyncClient::EvaluateCode, REQUEST)

#define EvaluateMappingTemplateAsync(...)  SubmitAsync(&AppSyncClient::EvaluateMappingTemplate, __VA_ARGS__)
#define EvaluateMappingTemplateCallable(REQUEST)  SubmitCallable(&AppSyncClient::EvaluateMappingTemplate, REQUEST)

#define FlushApiCacheAsync(...)  SubmitAsync(&AppSyncClient::FlushApiCache, __VA_ARGS__)
#define FlushApiCacheCallable(REQUEST)  SubmitCallable(&AppSyncClient::FlushApiCache, REQUEST)

#define GetApiAssociationAsync(...)  SubmitAsync(&AppSyncClient::GetApiAssociation, __VA_ARGS__)
#define GetApiAssociationCallable(REQUEST)  SubmitCallable(&AppSyncClient::GetApiAssociation, REQUEST)

#define GetApiCacheAsync(...)  SubmitAsync(&AppSyncClient::GetApiCache, __VA_ARGS__)
#define GetApiCacheCallable(REQUEST)  SubmitCallable(&AppSyncClient::GetApiCache, REQUEST)

#define GetDataSourceAsync(...)  SubmitAsync(&AppSyncClient::GetDataSource, __VA_ARGS__)
#define GetDataSourceCallable(REQUEST)  SubmitCallable(&AppSyncClient::GetDataSource, REQUEST)

#define GetDomainNameAsync(...)  SubmitAsync(&AppSyncClient::GetDomainName, __VA_ARGS__)
#define GetDomainNameCallable(REQUEST)  SubmitCallable(&AppSyncClient::GetDomainName, REQUEST)

#define GetFunctionAsync(...)  SubmitAsync(&AppSyncClient::GetFunction, __VA_ARGS__)
#define GetFunctionCallable(REQUEST)  SubmitCallable(&AppSyncClient::GetFunction, REQUEST)

#define GetGraphqlApiAsync(...)  SubmitAsync(&AppSyncClient::GetGraphqlApi, __VA_ARGS__)
#define GetGraphqlApiCallable(REQUEST)  SubmitCallable(&AppSyncClient::GetGraphqlApi, REQUEST)

#define GetIntrospectionSchemaAsync(...)  SubmitAsync(&AppSyncClient::GetIntrospectionSchema, __VA_ARGS__)
#define GetIntrospectionSchemaCallable(REQUEST)  SubmitCallable(&AppSyncClient::GetIntrospectionSchema, REQUEST)

#define GetResolverAsync(...)  SubmitAsync(&AppSyncClient::GetResolver, __VA_ARGS__)
#define GetResolverCallable(REQUEST)  SubmitCallable(&AppSyncClient::GetResolver, REQUEST)

#define GetSchemaCreationStatusAsync(...)  SubmitAsync(&AppSyncClient::GetSchemaCreationStatus, __VA_ARGS__)
#define GetSchemaCreationStatusCallable(REQUEST)  SubmitCallable(&AppSyncClient::GetSchemaCreationStatus, REQUEST)

#define GetTypeAsync(...)  SubmitAsync(&AppSyncClient::GetType, __VA_ARGS__)
#define GetTypeCallable(REQUEST)  SubmitCallable(&AppSyncClient::GetType, REQUEST)

#define ListApiKeysAsync(...)  SubmitAsync(&AppSyncClient::ListApiKeys, __VA_ARGS__)
#define ListApiKeysCallable(REQUEST)  SubmitCallable(&AppSyncClient::ListApiKeys, REQUEST)

#define ListDataSourcesAsync(...)  SubmitAsync(&AppSyncClient::ListDataSources, __VA_ARGS__)
#define ListDataSourcesCallable(REQUEST)  SubmitCallable(&AppSyncClient::ListDataSources, REQUEST)

#define ListDomainNamesAsync(...)  SubmitAsync(&AppSyncClient::ListDomainNames, __VA_ARGS__)
#define ListDomainNamesCallable(REQUEST)  SubmitCallable(&AppSyncClient::ListDomainNames, REQUEST)

#define ListFunctionsAsync(...)  SubmitAsync(&AppSyncClient::ListFunctions, __VA_ARGS__)
#define ListFunctionsCallable(REQUEST)  SubmitCallable(&AppSyncClient::ListFunctions, REQUEST)

#define ListGraphqlApisAsync(...)  SubmitAsync(&AppSyncClient::ListGraphqlApis, __VA_ARGS__)
#define ListGraphqlApisCallable(REQUEST)  SubmitCallable(&AppSyncClient::ListGraphqlApis, REQUEST)

#define ListResolversAsync(...)  SubmitAsync(&AppSyncClient::ListResolvers, __VA_ARGS__)
#define ListResolversCallable(REQUEST)  SubmitCallable(&AppSyncClient::ListResolvers, REQUEST)

#define ListResolversByFunctionAsync(...)  SubmitAsync(&AppSyncClient::ListResolversByFunction, __VA_ARGS__)
#define ListResolversByFunctionCallable(REQUEST)  SubmitCallable(&AppSyncClient::ListResolversByFunction, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&AppSyncClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&AppSyncClient::ListTagsForResource, REQUEST)

#define ListTypesAsync(...)  SubmitAsync(&AppSyncClient::ListTypes, __VA_ARGS__)
#define ListTypesCallable(REQUEST)  SubmitCallable(&AppSyncClient::ListTypes, REQUEST)

#define StartSchemaCreationAsync(...)  SubmitAsync(&AppSyncClient::StartSchemaCreation, __VA_ARGS__)
#define StartSchemaCreationCallable(REQUEST)  SubmitCallable(&AppSyncClient::StartSchemaCreation, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&AppSyncClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&AppSyncClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&AppSyncClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&AppSyncClient::UntagResource, REQUEST)

#define UpdateApiCacheAsync(...)  SubmitAsync(&AppSyncClient::UpdateApiCache, __VA_ARGS__)
#define UpdateApiCacheCallable(REQUEST)  SubmitCallable(&AppSyncClient::UpdateApiCache, REQUEST)

#define UpdateApiKeyAsync(...)  SubmitAsync(&AppSyncClient::UpdateApiKey, __VA_ARGS__)
#define UpdateApiKeyCallable(REQUEST)  SubmitCallable(&AppSyncClient::UpdateApiKey, REQUEST)

#define UpdateDataSourceAsync(...)  SubmitAsync(&AppSyncClient::UpdateDataSource, __VA_ARGS__)
#define UpdateDataSourceCallable(REQUEST)  SubmitCallable(&AppSyncClient::UpdateDataSource, REQUEST)

#define UpdateDomainNameAsync(...)  SubmitAsync(&AppSyncClient::UpdateDomainName, __VA_ARGS__)
#define UpdateDomainNameCallable(REQUEST)  SubmitCallable(&AppSyncClient::UpdateDomainName, REQUEST)

#define UpdateFunctionAsync(...)  SubmitAsync(&AppSyncClient::UpdateFunction, __VA_ARGS__)
#define UpdateFunctionCallable(REQUEST)  SubmitCallable(&AppSyncClient::UpdateFunction, REQUEST)

#define UpdateGraphqlApiAsync(...)  SubmitAsync(&AppSyncClient::UpdateGraphqlApi, __VA_ARGS__)
#define UpdateGraphqlApiCallable(REQUEST)  SubmitCallable(&AppSyncClient::UpdateGraphqlApi, REQUEST)

#define UpdateResolverAsync(...)  SubmitAsync(&AppSyncClient::UpdateResolver, __VA_ARGS__)
#define UpdateResolverCallable(REQUEST)  SubmitCallable(&AppSyncClient::UpdateResolver, REQUEST)

#define UpdateTypeAsync(...)  SubmitAsync(&AppSyncClient::UpdateType, __VA_ARGS__)
#define UpdateTypeCallable(REQUEST)  SubmitCallable(&AppSyncClient::UpdateType, REQUEST)

