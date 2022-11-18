/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CancelImageCreationAsync(...)  SubmitAsync(&ImagebuilderClient::CancelImageCreation, __VA_ARGS__)
#define CancelImageCreationCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::CancelImageCreation, REQUEST)

#define CreateComponentAsync(...)  SubmitAsync(&ImagebuilderClient::CreateComponent, __VA_ARGS__)
#define CreateComponentCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::CreateComponent, REQUEST)

#define CreateContainerRecipeAsync(...)  SubmitAsync(&ImagebuilderClient::CreateContainerRecipe, __VA_ARGS__)
#define CreateContainerRecipeCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::CreateContainerRecipe, REQUEST)

#define CreateDistributionConfigurationAsync(...)  SubmitAsync(&ImagebuilderClient::CreateDistributionConfiguration, __VA_ARGS__)
#define CreateDistributionConfigurationCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::CreateDistributionConfiguration, REQUEST)

#define CreateImageAsync(...)  SubmitAsync(&ImagebuilderClient::CreateImage, __VA_ARGS__)
#define CreateImageCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::CreateImage, REQUEST)

#define CreateImagePipelineAsync(...)  SubmitAsync(&ImagebuilderClient::CreateImagePipeline, __VA_ARGS__)
#define CreateImagePipelineCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::CreateImagePipeline, REQUEST)

#define CreateImageRecipeAsync(...)  SubmitAsync(&ImagebuilderClient::CreateImageRecipe, __VA_ARGS__)
#define CreateImageRecipeCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::CreateImageRecipe, REQUEST)

#define CreateInfrastructureConfigurationAsync(...)  SubmitAsync(&ImagebuilderClient::CreateInfrastructureConfiguration, __VA_ARGS__)
#define CreateInfrastructureConfigurationCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::CreateInfrastructureConfiguration, REQUEST)

#define DeleteComponentAsync(...)  SubmitAsync(&ImagebuilderClient::DeleteComponent, __VA_ARGS__)
#define DeleteComponentCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::DeleteComponent, REQUEST)

#define DeleteContainerRecipeAsync(...)  SubmitAsync(&ImagebuilderClient::DeleteContainerRecipe, __VA_ARGS__)
#define DeleteContainerRecipeCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::DeleteContainerRecipe, REQUEST)

#define DeleteDistributionConfigurationAsync(...)  SubmitAsync(&ImagebuilderClient::DeleteDistributionConfiguration, __VA_ARGS__)
#define DeleteDistributionConfigurationCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::DeleteDistributionConfiguration, REQUEST)

#define DeleteImageAsync(...)  SubmitAsync(&ImagebuilderClient::DeleteImage, __VA_ARGS__)
#define DeleteImageCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::DeleteImage, REQUEST)

#define DeleteImagePipelineAsync(...)  SubmitAsync(&ImagebuilderClient::DeleteImagePipeline, __VA_ARGS__)
#define DeleteImagePipelineCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::DeleteImagePipeline, REQUEST)

#define DeleteImageRecipeAsync(...)  SubmitAsync(&ImagebuilderClient::DeleteImageRecipe, __VA_ARGS__)
#define DeleteImageRecipeCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::DeleteImageRecipe, REQUEST)

#define DeleteInfrastructureConfigurationAsync(...)  SubmitAsync(&ImagebuilderClient::DeleteInfrastructureConfiguration, __VA_ARGS__)
#define DeleteInfrastructureConfigurationCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::DeleteInfrastructureConfiguration, REQUEST)

#define GetComponentAsync(...)  SubmitAsync(&ImagebuilderClient::GetComponent, __VA_ARGS__)
#define GetComponentCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::GetComponent, REQUEST)

#define GetComponentPolicyAsync(...)  SubmitAsync(&ImagebuilderClient::GetComponentPolicy, __VA_ARGS__)
#define GetComponentPolicyCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::GetComponentPolicy, REQUEST)

#define GetContainerRecipeAsync(...)  SubmitAsync(&ImagebuilderClient::GetContainerRecipe, __VA_ARGS__)
#define GetContainerRecipeCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::GetContainerRecipe, REQUEST)

#define GetContainerRecipePolicyAsync(...)  SubmitAsync(&ImagebuilderClient::GetContainerRecipePolicy, __VA_ARGS__)
#define GetContainerRecipePolicyCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::GetContainerRecipePolicy, REQUEST)

#define GetDistributionConfigurationAsync(...)  SubmitAsync(&ImagebuilderClient::GetDistributionConfiguration, __VA_ARGS__)
#define GetDistributionConfigurationCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::GetDistributionConfiguration, REQUEST)

#define GetImageAsync(...)  SubmitAsync(&ImagebuilderClient::GetImage, __VA_ARGS__)
#define GetImageCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::GetImage, REQUEST)

#define GetImagePipelineAsync(...)  SubmitAsync(&ImagebuilderClient::GetImagePipeline, __VA_ARGS__)
#define GetImagePipelineCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::GetImagePipeline, REQUEST)

#define GetImagePolicyAsync(...)  SubmitAsync(&ImagebuilderClient::GetImagePolicy, __VA_ARGS__)
#define GetImagePolicyCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::GetImagePolicy, REQUEST)

#define GetImageRecipeAsync(...)  SubmitAsync(&ImagebuilderClient::GetImageRecipe, __VA_ARGS__)
#define GetImageRecipeCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::GetImageRecipe, REQUEST)

#define GetImageRecipePolicyAsync(...)  SubmitAsync(&ImagebuilderClient::GetImageRecipePolicy, __VA_ARGS__)
#define GetImageRecipePolicyCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::GetImageRecipePolicy, REQUEST)

#define GetInfrastructureConfigurationAsync(...)  SubmitAsync(&ImagebuilderClient::GetInfrastructureConfiguration, __VA_ARGS__)
#define GetInfrastructureConfigurationCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::GetInfrastructureConfiguration, REQUEST)

#define ImportComponentAsync(...)  SubmitAsync(&ImagebuilderClient::ImportComponent, __VA_ARGS__)
#define ImportComponentCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::ImportComponent, REQUEST)

#define ImportVmImageAsync(...)  SubmitAsync(&ImagebuilderClient::ImportVmImage, __VA_ARGS__)
#define ImportVmImageCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::ImportVmImage, REQUEST)

#define ListComponentBuildVersionsAsync(...)  SubmitAsync(&ImagebuilderClient::ListComponentBuildVersions, __VA_ARGS__)
#define ListComponentBuildVersionsCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::ListComponentBuildVersions, REQUEST)

#define ListComponentsAsync(...)  SubmitAsync(&ImagebuilderClient::ListComponents, __VA_ARGS__)
#define ListComponentsCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::ListComponents, REQUEST)

#define ListContainerRecipesAsync(...)  SubmitAsync(&ImagebuilderClient::ListContainerRecipes, __VA_ARGS__)
#define ListContainerRecipesCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::ListContainerRecipes, REQUEST)

#define ListDistributionConfigurationsAsync(...)  SubmitAsync(&ImagebuilderClient::ListDistributionConfigurations, __VA_ARGS__)
#define ListDistributionConfigurationsCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::ListDistributionConfigurations, REQUEST)

#define ListImageBuildVersionsAsync(...)  SubmitAsync(&ImagebuilderClient::ListImageBuildVersions, __VA_ARGS__)
#define ListImageBuildVersionsCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::ListImageBuildVersions, REQUEST)

#define ListImagePackagesAsync(...)  SubmitAsync(&ImagebuilderClient::ListImagePackages, __VA_ARGS__)
#define ListImagePackagesCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::ListImagePackages, REQUEST)

#define ListImagePipelineImagesAsync(...)  SubmitAsync(&ImagebuilderClient::ListImagePipelineImages, __VA_ARGS__)
#define ListImagePipelineImagesCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::ListImagePipelineImages, REQUEST)

#define ListImagePipelinesAsync(...)  SubmitAsync(&ImagebuilderClient::ListImagePipelines, __VA_ARGS__)
#define ListImagePipelinesCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::ListImagePipelines, REQUEST)

#define ListImageRecipesAsync(...)  SubmitAsync(&ImagebuilderClient::ListImageRecipes, __VA_ARGS__)
#define ListImageRecipesCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::ListImageRecipes, REQUEST)

#define ListImagesAsync(...)  SubmitAsync(&ImagebuilderClient::ListImages, __VA_ARGS__)
#define ListImagesCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::ListImages, REQUEST)

#define ListInfrastructureConfigurationsAsync(...)  SubmitAsync(&ImagebuilderClient::ListInfrastructureConfigurations, __VA_ARGS__)
#define ListInfrastructureConfigurationsCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::ListInfrastructureConfigurations, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&ImagebuilderClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::ListTagsForResource, REQUEST)

#define PutComponentPolicyAsync(...)  SubmitAsync(&ImagebuilderClient::PutComponentPolicy, __VA_ARGS__)
#define PutComponentPolicyCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::PutComponentPolicy, REQUEST)

#define PutContainerRecipePolicyAsync(...)  SubmitAsync(&ImagebuilderClient::PutContainerRecipePolicy, __VA_ARGS__)
#define PutContainerRecipePolicyCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::PutContainerRecipePolicy, REQUEST)

#define PutImagePolicyAsync(...)  SubmitAsync(&ImagebuilderClient::PutImagePolicy, __VA_ARGS__)
#define PutImagePolicyCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::PutImagePolicy, REQUEST)

#define PutImageRecipePolicyAsync(...)  SubmitAsync(&ImagebuilderClient::PutImageRecipePolicy, __VA_ARGS__)
#define PutImageRecipePolicyCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::PutImageRecipePolicy, REQUEST)

#define StartImagePipelineExecutionAsync(...)  SubmitAsync(&ImagebuilderClient::StartImagePipelineExecution, __VA_ARGS__)
#define StartImagePipelineExecutionCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::StartImagePipelineExecution, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&ImagebuilderClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&ImagebuilderClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::UntagResource, REQUEST)

#define UpdateDistributionConfigurationAsync(...)  SubmitAsync(&ImagebuilderClient::UpdateDistributionConfiguration, __VA_ARGS__)
#define UpdateDistributionConfigurationCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::UpdateDistributionConfiguration, REQUEST)

#define UpdateImagePipelineAsync(...)  SubmitAsync(&ImagebuilderClient::UpdateImagePipeline, __VA_ARGS__)
#define UpdateImagePipelineCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::UpdateImagePipeline, REQUEST)

#define UpdateInfrastructureConfigurationAsync(...)  SubmitAsync(&ImagebuilderClient::UpdateInfrastructureConfiguration, __VA_ARGS__)
#define UpdateInfrastructureConfigurationCallable(REQUEST)  SubmitCallable(&ImagebuilderClient::UpdateInfrastructureConfiguration, REQUEST)

