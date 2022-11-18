/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateAttributeGroupAsync(...)  SubmitAsync(&AppRegistryClient::AssociateAttributeGroup, __VA_ARGS__)
#define AssociateAttributeGroupCallable(REQUEST)  SubmitCallable(&AppRegistryClient::AssociateAttributeGroup, REQUEST)

#define AssociateResourceAsync(...)  SubmitAsync(&AppRegistryClient::AssociateResource, __VA_ARGS__)
#define AssociateResourceCallable(REQUEST)  SubmitCallable(&AppRegistryClient::AssociateResource, REQUEST)

#define CreateApplicationAsync(...)  SubmitAsync(&AppRegistryClient::CreateApplication, __VA_ARGS__)
#define CreateApplicationCallable(REQUEST)  SubmitCallable(&AppRegistryClient::CreateApplication, REQUEST)

#define CreateAttributeGroupAsync(...)  SubmitAsync(&AppRegistryClient::CreateAttributeGroup, __VA_ARGS__)
#define CreateAttributeGroupCallable(REQUEST)  SubmitCallable(&AppRegistryClient::CreateAttributeGroup, REQUEST)

#define DeleteApplicationAsync(...)  SubmitAsync(&AppRegistryClient::DeleteApplication, __VA_ARGS__)
#define DeleteApplicationCallable(REQUEST)  SubmitCallable(&AppRegistryClient::DeleteApplication, REQUEST)

#define DeleteAttributeGroupAsync(...)  SubmitAsync(&AppRegistryClient::DeleteAttributeGroup, __VA_ARGS__)
#define DeleteAttributeGroupCallable(REQUEST)  SubmitCallable(&AppRegistryClient::DeleteAttributeGroup, REQUEST)

#define DisassociateAttributeGroupAsync(...)  SubmitAsync(&AppRegistryClient::DisassociateAttributeGroup, __VA_ARGS__)
#define DisassociateAttributeGroupCallable(REQUEST)  SubmitCallable(&AppRegistryClient::DisassociateAttributeGroup, REQUEST)

#define DisassociateResourceAsync(...)  SubmitAsync(&AppRegistryClient::DisassociateResource, __VA_ARGS__)
#define DisassociateResourceCallable(REQUEST)  SubmitCallable(&AppRegistryClient::DisassociateResource, REQUEST)

#define GetApplicationAsync(...)  SubmitAsync(&AppRegistryClient::GetApplication, __VA_ARGS__)
#define GetApplicationCallable(REQUEST)  SubmitCallable(&AppRegistryClient::GetApplication, REQUEST)

#define GetAssociatedResourceAsync(...)  SubmitAsync(&AppRegistryClient::GetAssociatedResource, __VA_ARGS__)
#define GetAssociatedResourceCallable(REQUEST)  SubmitCallable(&AppRegistryClient::GetAssociatedResource, REQUEST)

#define GetAttributeGroupAsync(...)  SubmitAsync(&AppRegistryClient::GetAttributeGroup, __VA_ARGS__)
#define GetAttributeGroupCallable(REQUEST)  SubmitCallable(&AppRegistryClient::GetAttributeGroup, REQUEST)


#define ListApplicationsAsync(...)  SubmitAsync(&AppRegistryClient::ListApplications, __VA_ARGS__)
#define ListApplicationsCallable(REQUEST)  SubmitCallable(&AppRegistryClient::ListApplications, REQUEST)

#define ListAssociatedAttributeGroupsAsync(...)  SubmitAsync(&AppRegistryClient::ListAssociatedAttributeGroups, __VA_ARGS__)
#define ListAssociatedAttributeGroupsCallable(REQUEST)  SubmitCallable(&AppRegistryClient::ListAssociatedAttributeGroups, REQUEST)

#define ListAssociatedResourcesAsync(...)  SubmitAsync(&AppRegistryClient::ListAssociatedResources, __VA_ARGS__)
#define ListAssociatedResourcesCallable(REQUEST)  SubmitCallable(&AppRegistryClient::ListAssociatedResources, REQUEST)

#define ListAttributeGroupsAsync(...)  SubmitAsync(&AppRegistryClient::ListAttributeGroups, __VA_ARGS__)
#define ListAttributeGroupsCallable(REQUEST)  SubmitCallable(&AppRegistryClient::ListAttributeGroups, REQUEST)

#define ListAttributeGroupsForApplicationAsync(...)  SubmitAsync(&AppRegistryClient::ListAttributeGroupsForApplication, __VA_ARGS__)
#define ListAttributeGroupsForApplicationCallable(REQUEST)  SubmitCallable(&AppRegistryClient::ListAttributeGroupsForApplication, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&AppRegistryClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&AppRegistryClient::ListTagsForResource, REQUEST)

#define PutConfigurationAsync(...)  SubmitAsync(&AppRegistryClient::PutConfiguration, __VA_ARGS__)
#define PutConfigurationCallable(REQUEST)  SubmitCallable(&AppRegistryClient::PutConfiguration, REQUEST)

#define SyncResourceAsync(...)  SubmitAsync(&AppRegistryClient::SyncResource, __VA_ARGS__)
#define SyncResourceCallable(REQUEST)  SubmitCallable(&AppRegistryClient::SyncResource, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&AppRegistryClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&AppRegistryClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&AppRegistryClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&AppRegistryClient::UntagResource, REQUEST)

#define UpdateApplicationAsync(...)  SubmitAsync(&AppRegistryClient::UpdateApplication, __VA_ARGS__)
#define UpdateApplicationCallable(REQUEST)  SubmitCallable(&AppRegistryClient::UpdateApplication, REQUEST)

#define UpdateAttributeGroupAsync(...)  SubmitAsync(&AppRegistryClient::UpdateAttributeGroup, __VA_ARGS__)
#define UpdateAttributeGroupCallable(REQUEST)  SubmitCallable(&AppRegistryClient::UpdateAttributeGroup, REQUEST)

