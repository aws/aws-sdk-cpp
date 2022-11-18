/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AddLayerVersionPermissionAsync(...)  SubmitAsync(&LambdaClient::AddLayerVersionPermission, __VA_ARGS__)
#define AddLayerVersionPermissionCallable(REQUEST)  SubmitCallable(&LambdaClient::AddLayerVersionPermission, REQUEST)

#define AddPermissionAsync(...)  SubmitAsync(&LambdaClient::AddPermission, __VA_ARGS__)
#define AddPermissionCallable(REQUEST)  SubmitCallable(&LambdaClient::AddPermission, REQUEST)

#define CreateAliasAsync(...)  SubmitAsync(&LambdaClient::CreateAlias, __VA_ARGS__)
#define CreateAliasCallable(REQUEST)  SubmitCallable(&LambdaClient::CreateAlias, REQUEST)

#define CreateCodeSigningConfigAsync(...)  SubmitAsync(&LambdaClient::CreateCodeSigningConfig, __VA_ARGS__)
#define CreateCodeSigningConfigCallable(REQUEST)  SubmitCallable(&LambdaClient::CreateCodeSigningConfig, REQUEST)

#define CreateEventSourceMappingAsync(...)  SubmitAsync(&LambdaClient::CreateEventSourceMapping, __VA_ARGS__)
#define CreateEventSourceMappingCallable(REQUEST)  SubmitCallable(&LambdaClient::CreateEventSourceMapping, REQUEST)

#define CreateFunctionAsync(...)  SubmitAsync(&LambdaClient::CreateFunction, __VA_ARGS__)
#define CreateFunctionCallable(REQUEST)  SubmitCallable(&LambdaClient::CreateFunction, REQUEST)

#define CreateFunctionUrlConfigAsync(...)  SubmitAsync(&LambdaClient::CreateFunctionUrlConfig, __VA_ARGS__)
#define CreateFunctionUrlConfigCallable(REQUEST)  SubmitCallable(&LambdaClient::CreateFunctionUrlConfig, REQUEST)

#define DeleteAliasAsync(...)  SubmitAsync(&LambdaClient::DeleteAlias, __VA_ARGS__)
#define DeleteAliasCallable(REQUEST)  SubmitCallable(&LambdaClient::DeleteAlias, REQUEST)

#define DeleteCodeSigningConfigAsync(...)  SubmitAsync(&LambdaClient::DeleteCodeSigningConfig, __VA_ARGS__)
#define DeleteCodeSigningConfigCallable(REQUEST)  SubmitCallable(&LambdaClient::DeleteCodeSigningConfig, REQUEST)

#define DeleteEventSourceMappingAsync(...)  SubmitAsync(&LambdaClient::DeleteEventSourceMapping, __VA_ARGS__)
#define DeleteEventSourceMappingCallable(REQUEST)  SubmitCallable(&LambdaClient::DeleteEventSourceMapping, REQUEST)

#define DeleteFunctionAsync(...)  SubmitAsync(&LambdaClient::DeleteFunction, __VA_ARGS__)
#define DeleteFunctionCallable(REQUEST)  SubmitCallable(&LambdaClient::DeleteFunction, REQUEST)

#define DeleteFunctionCodeSigningConfigAsync(...)  SubmitAsync(&LambdaClient::DeleteFunctionCodeSigningConfig, __VA_ARGS__)
#define DeleteFunctionCodeSigningConfigCallable(REQUEST)  SubmitCallable(&LambdaClient::DeleteFunctionCodeSigningConfig, REQUEST)

#define DeleteFunctionConcurrencyAsync(...)  SubmitAsync(&LambdaClient::DeleteFunctionConcurrency, __VA_ARGS__)
#define DeleteFunctionConcurrencyCallable(REQUEST)  SubmitCallable(&LambdaClient::DeleteFunctionConcurrency, REQUEST)

#define DeleteFunctionEventInvokeConfigAsync(...)  SubmitAsync(&LambdaClient::DeleteFunctionEventInvokeConfig, __VA_ARGS__)
#define DeleteFunctionEventInvokeConfigCallable(REQUEST)  SubmitCallable(&LambdaClient::DeleteFunctionEventInvokeConfig, REQUEST)

#define DeleteFunctionUrlConfigAsync(...)  SubmitAsync(&LambdaClient::DeleteFunctionUrlConfig, __VA_ARGS__)
#define DeleteFunctionUrlConfigCallable(REQUEST)  SubmitCallable(&LambdaClient::DeleteFunctionUrlConfig, REQUEST)

#define DeleteLayerVersionAsync(...)  SubmitAsync(&LambdaClient::DeleteLayerVersion, __VA_ARGS__)
#define DeleteLayerVersionCallable(REQUEST)  SubmitCallable(&LambdaClient::DeleteLayerVersion, REQUEST)

#define DeleteProvisionedConcurrencyConfigAsync(...)  SubmitAsync(&LambdaClient::DeleteProvisionedConcurrencyConfig, __VA_ARGS__)
#define DeleteProvisionedConcurrencyConfigCallable(REQUEST)  SubmitCallable(&LambdaClient::DeleteProvisionedConcurrencyConfig, REQUEST)

#define GetAccountSettingsAsync(...)  SubmitAsync(&LambdaClient::GetAccountSettings, __VA_ARGS__)
#define GetAccountSettingsCallable(REQUEST)  SubmitCallable(&LambdaClient::GetAccountSettings, REQUEST)

#define GetAliasAsync(...)  SubmitAsync(&LambdaClient::GetAlias, __VA_ARGS__)
#define GetAliasCallable(REQUEST)  SubmitCallable(&LambdaClient::GetAlias, REQUEST)

#define GetCodeSigningConfigAsync(...)  SubmitAsync(&LambdaClient::GetCodeSigningConfig, __VA_ARGS__)
#define GetCodeSigningConfigCallable(REQUEST)  SubmitCallable(&LambdaClient::GetCodeSigningConfig, REQUEST)

#define GetEventSourceMappingAsync(...)  SubmitAsync(&LambdaClient::GetEventSourceMapping, __VA_ARGS__)
#define GetEventSourceMappingCallable(REQUEST)  SubmitCallable(&LambdaClient::GetEventSourceMapping, REQUEST)

#define GetFunctionAsync(...)  SubmitAsync(&LambdaClient::GetFunction, __VA_ARGS__)
#define GetFunctionCallable(REQUEST)  SubmitCallable(&LambdaClient::GetFunction, REQUEST)

#define GetFunctionCodeSigningConfigAsync(...)  SubmitAsync(&LambdaClient::GetFunctionCodeSigningConfig, __VA_ARGS__)
#define GetFunctionCodeSigningConfigCallable(REQUEST)  SubmitCallable(&LambdaClient::GetFunctionCodeSigningConfig, REQUEST)

#define GetFunctionConcurrencyAsync(...)  SubmitAsync(&LambdaClient::GetFunctionConcurrency, __VA_ARGS__)
#define GetFunctionConcurrencyCallable(REQUEST)  SubmitCallable(&LambdaClient::GetFunctionConcurrency, REQUEST)

#define GetFunctionConfigurationAsync(...)  SubmitAsync(&LambdaClient::GetFunctionConfiguration, __VA_ARGS__)
#define GetFunctionConfigurationCallable(REQUEST)  SubmitCallable(&LambdaClient::GetFunctionConfiguration, REQUEST)

#define GetFunctionEventInvokeConfigAsync(...)  SubmitAsync(&LambdaClient::GetFunctionEventInvokeConfig, __VA_ARGS__)
#define GetFunctionEventInvokeConfigCallable(REQUEST)  SubmitCallable(&LambdaClient::GetFunctionEventInvokeConfig, REQUEST)

#define GetFunctionUrlConfigAsync(...)  SubmitAsync(&LambdaClient::GetFunctionUrlConfig, __VA_ARGS__)
#define GetFunctionUrlConfigCallable(REQUEST)  SubmitCallable(&LambdaClient::GetFunctionUrlConfig, REQUEST)

#define GetLayerVersionAsync(...)  SubmitAsync(&LambdaClient::GetLayerVersion, __VA_ARGS__)
#define GetLayerVersionCallable(REQUEST)  SubmitCallable(&LambdaClient::GetLayerVersion, REQUEST)

#define GetLayerVersionByArnAsync(...)  SubmitAsync(&LambdaClient::GetLayerVersionByArn, __VA_ARGS__)
#define GetLayerVersionByArnCallable(REQUEST)  SubmitCallable(&LambdaClient::GetLayerVersionByArn, REQUEST)

#define GetLayerVersionPolicyAsync(...)  SubmitAsync(&LambdaClient::GetLayerVersionPolicy, __VA_ARGS__)
#define GetLayerVersionPolicyCallable(REQUEST)  SubmitCallable(&LambdaClient::GetLayerVersionPolicy, REQUEST)

#define GetPolicyAsync(...)  SubmitAsync(&LambdaClient::GetPolicy, __VA_ARGS__)
#define GetPolicyCallable(REQUEST)  SubmitCallable(&LambdaClient::GetPolicy, REQUEST)

#define GetProvisionedConcurrencyConfigAsync(...)  SubmitAsync(&LambdaClient::GetProvisionedConcurrencyConfig, __VA_ARGS__)
#define GetProvisionedConcurrencyConfigCallable(REQUEST)  SubmitCallable(&LambdaClient::GetProvisionedConcurrencyConfig, REQUEST)

#define InvokeAsync(...)  SubmitAsync(&LambdaClient::Invoke, __VA_ARGS__)
#define InvokeCallable(REQUEST)  SubmitCallable(&LambdaClient::Invoke, REQUEST)

#define ListAliasesAsync(...)  SubmitAsync(&LambdaClient::ListAliases, __VA_ARGS__)
#define ListAliasesCallable(REQUEST)  SubmitCallable(&LambdaClient::ListAliases, REQUEST)

#define ListCodeSigningConfigsAsync(...)  SubmitAsync(&LambdaClient::ListCodeSigningConfigs, __VA_ARGS__)
#define ListCodeSigningConfigsCallable(REQUEST)  SubmitCallable(&LambdaClient::ListCodeSigningConfigs, REQUEST)

#define ListEventSourceMappingsAsync(...)  SubmitAsync(&LambdaClient::ListEventSourceMappings, __VA_ARGS__)
#define ListEventSourceMappingsCallable(REQUEST)  SubmitCallable(&LambdaClient::ListEventSourceMappings, REQUEST)

#define ListFunctionEventInvokeConfigsAsync(...)  SubmitAsync(&LambdaClient::ListFunctionEventInvokeConfigs, __VA_ARGS__)
#define ListFunctionEventInvokeConfigsCallable(REQUEST)  SubmitCallable(&LambdaClient::ListFunctionEventInvokeConfigs, REQUEST)

#define ListFunctionUrlConfigsAsync(...)  SubmitAsync(&LambdaClient::ListFunctionUrlConfigs, __VA_ARGS__)
#define ListFunctionUrlConfigsCallable(REQUEST)  SubmitCallable(&LambdaClient::ListFunctionUrlConfigs, REQUEST)

#define ListFunctionsAsync(...)  SubmitAsync(&LambdaClient::ListFunctions, __VA_ARGS__)
#define ListFunctionsCallable(REQUEST)  SubmitCallable(&LambdaClient::ListFunctions, REQUEST)

#define ListFunctionsByCodeSigningConfigAsync(...)  SubmitAsync(&LambdaClient::ListFunctionsByCodeSigningConfig, __VA_ARGS__)
#define ListFunctionsByCodeSigningConfigCallable(REQUEST)  SubmitCallable(&LambdaClient::ListFunctionsByCodeSigningConfig, REQUEST)

#define ListLayerVersionsAsync(...)  SubmitAsync(&LambdaClient::ListLayerVersions, __VA_ARGS__)
#define ListLayerVersionsCallable(REQUEST)  SubmitCallable(&LambdaClient::ListLayerVersions, REQUEST)

#define ListLayersAsync(...)  SubmitAsync(&LambdaClient::ListLayers, __VA_ARGS__)
#define ListLayersCallable(REQUEST)  SubmitCallable(&LambdaClient::ListLayers, REQUEST)

#define ListProvisionedConcurrencyConfigsAsync(...)  SubmitAsync(&LambdaClient::ListProvisionedConcurrencyConfigs, __VA_ARGS__)
#define ListProvisionedConcurrencyConfigsCallable(REQUEST)  SubmitCallable(&LambdaClient::ListProvisionedConcurrencyConfigs, REQUEST)

#define ListTagsAsync(...)  SubmitAsync(&LambdaClient::ListTags, __VA_ARGS__)
#define ListTagsCallable(REQUEST)  SubmitCallable(&LambdaClient::ListTags, REQUEST)

#define ListVersionsByFunctionAsync(...)  SubmitAsync(&LambdaClient::ListVersionsByFunction, __VA_ARGS__)
#define ListVersionsByFunctionCallable(REQUEST)  SubmitCallable(&LambdaClient::ListVersionsByFunction, REQUEST)

#define PublishLayerVersionAsync(...)  SubmitAsync(&LambdaClient::PublishLayerVersion, __VA_ARGS__)
#define PublishLayerVersionCallable(REQUEST)  SubmitCallable(&LambdaClient::PublishLayerVersion, REQUEST)

#define PublishVersionAsync(...)  SubmitAsync(&LambdaClient::PublishVersion, __VA_ARGS__)
#define PublishVersionCallable(REQUEST)  SubmitCallable(&LambdaClient::PublishVersion, REQUEST)

#define PutFunctionCodeSigningConfigAsync(...)  SubmitAsync(&LambdaClient::PutFunctionCodeSigningConfig, __VA_ARGS__)
#define PutFunctionCodeSigningConfigCallable(REQUEST)  SubmitCallable(&LambdaClient::PutFunctionCodeSigningConfig, REQUEST)

#define PutFunctionConcurrencyAsync(...)  SubmitAsync(&LambdaClient::PutFunctionConcurrency, __VA_ARGS__)
#define PutFunctionConcurrencyCallable(REQUEST)  SubmitCallable(&LambdaClient::PutFunctionConcurrency, REQUEST)

#define PutFunctionEventInvokeConfigAsync(...)  SubmitAsync(&LambdaClient::PutFunctionEventInvokeConfig, __VA_ARGS__)
#define PutFunctionEventInvokeConfigCallable(REQUEST)  SubmitCallable(&LambdaClient::PutFunctionEventInvokeConfig, REQUEST)

#define PutProvisionedConcurrencyConfigAsync(...)  SubmitAsync(&LambdaClient::PutProvisionedConcurrencyConfig, __VA_ARGS__)
#define PutProvisionedConcurrencyConfigCallable(REQUEST)  SubmitCallable(&LambdaClient::PutProvisionedConcurrencyConfig, REQUEST)

#define RemoveLayerVersionPermissionAsync(...)  SubmitAsync(&LambdaClient::RemoveLayerVersionPermission, __VA_ARGS__)
#define RemoveLayerVersionPermissionCallable(REQUEST)  SubmitCallable(&LambdaClient::RemoveLayerVersionPermission, REQUEST)

#define RemovePermissionAsync(...)  SubmitAsync(&LambdaClient::RemovePermission, __VA_ARGS__)
#define RemovePermissionCallable(REQUEST)  SubmitCallable(&LambdaClient::RemovePermission, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&LambdaClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&LambdaClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&LambdaClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&LambdaClient::UntagResource, REQUEST)

#define UpdateAliasAsync(...)  SubmitAsync(&LambdaClient::UpdateAlias, __VA_ARGS__)
#define UpdateAliasCallable(REQUEST)  SubmitCallable(&LambdaClient::UpdateAlias, REQUEST)

#define UpdateCodeSigningConfigAsync(...)  SubmitAsync(&LambdaClient::UpdateCodeSigningConfig, __VA_ARGS__)
#define UpdateCodeSigningConfigCallable(REQUEST)  SubmitCallable(&LambdaClient::UpdateCodeSigningConfig, REQUEST)

#define UpdateEventSourceMappingAsync(...)  SubmitAsync(&LambdaClient::UpdateEventSourceMapping, __VA_ARGS__)
#define UpdateEventSourceMappingCallable(REQUEST)  SubmitCallable(&LambdaClient::UpdateEventSourceMapping, REQUEST)

#define UpdateFunctionCodeAsync(...)  SubmitAsync(&LambdaClient::UpdateFunctionCode, __VA_ARGS__)
#define UpdateFunctionCodeCallable(REQUEST)  SubmitCallable(&LambdaClient::UpdateFunctionCode, REQUEST)

#define UpdateFunctionConfigurationAsync(...)  SubmitAsync(&LambdaClient::UpdateFunctionConfiguration, __VA_ARGS__)
#define UpdateFunctionConfigurationCallable(REQUEST)  SubmitCallable(&LambdaClient::UpdateFunctionConfiguration, REQUEST)

#define UpdateFunctionEventInvokeConfigAsync(...)  SubmitAsync(&LambdaClient::UpdateFunctionEventInvokeConfig, __VA_ARGS__)
#define UpdateFunctionEventInvokeConfigCallable(REQUEST)  SubmitCallable(&LambdaClient::UpdateFunctionEventInvokeConfig, REQUEST)

#define UpdateFunctionUrlConfigAsync(...)  SubmitAsync(&LambdaClient::UpdateFunctionUrlConfig, __VA_ARGS__)
#define UpdateFunctionUrlConfigCallable(REQUEST)  SubmitCallable(&LambdaClient::UpdateFunctionUrlConfig, REQUEST)

