/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AddProfileKeyAsync(...)  SubmitAsync(&CustomerProfilesClient::AddProfileKey, __VA_ARGS__)
#define AddProfileKeyCallable(REQUEST)  SubmitCallable(&CustomerProfilesClient::AddProfileKey, REQUEST)

#define CreateDomainAsync(...)  SubmitAsync(&CustomerProfilesClient::CreateDomain, __VA_ARGS__)
#define CreateDomainCallable(REQUEST)  SubmitCallable(&CustomerProfilesClient::CreateDomain, REQUEST)

#define CreateIntegrationWorkflowAsync(...)  SubmitAsync(&CustomerProfilesClient::CreateIntegrationWorkflow, __VA_ARGS__)
#define CreateIntegrationWorkflowCallable(REQUEST)  SubmitCallable(&CustomerProfilesClient::CreateIntegrationWorkflow, REQUEST)

#define CreateProfileAsync(...)  SubmitAsync(&CustomerProfilesClient::CreateProfile, __VA_ARGS__)
#define CreateProfileCallable(REQUEST)  SubmitCallable(&CustomerProfilesClient::CreateProfile, REQUEST)

#define DeleteDomainAsync(...)  SubmitAsync(&CustomerProfilesClient::DeleteDomain, __VA_ARGS__)
#define DeleteDomainCallable(REQUEST)  SubmitCallable(&CustomerProfilesClient::DeleteDomain, REQUEST)

#define DeleteIntegrationAsync(...)  SubmitAsync(&CustomerProfilesClient::DeleteIntegration, __VA_ARGS__)
#define DeleteIntegrationCallable(REQUEST)  SubmitCallable(&CustomerProfilesClient::DeleteIntegration, REQUEST)

#define DeleteProfileAsync(...)  SubmitAsync(&CustomerProfilesClient::DeleteProfile, __VA_ARGS__)
#define DeleteProfileCallable(REQUEST)  SubmitCallable(&CustomerProfilesClient::DeleteProfile, REQUEST)

#define DeleteProfileKeyAsync(...)  SubmitAsync(&CustomerProfilesClient::DeleteProfileKey, __VA_ARGS__)
#define DeleteProfileKeyCallable(REQUEST)  SubmitCallable(&CustomerProfilesClient::DeleteProfileKey, REQUEST)

#define DeleteProfileObjectAsync(...)  SubmitAsync(&CustomerProfilesClient::DeleteProfileObject, __VA_ARGS__)
#define DeleteProfileObjectCallable(REQUEST)  SubmitCallable(&CustomerProfilesClient::DeleteProfileObject, REQUEST)

#define DeleteProfileObjectTypeAsync(...)  SubmitAsync(&CustomerProfilesClient::DeleteProfileObjectType, __VA_ARGS__)
#define DeleteProfileObjectTypeCallable(REQUEST)  SubmitCallable(&CustomerProfilesClient::DeleteProfileObjectType, REQUEST)

#define DeleteWorkflowAsync(...)  SubmitAsync(&CustomerProfilesClient::DeleteWorkflow, __VA_ARGS__)
#define DeleteWorkflowCallable(REQUEST)  SubmitCallable(&CustomerProfilesClient::DeleteWorkflow, REQUEST)

#define GetAutoMergingPreviewAsync(...)  SubmitAsync(&CustomerProfilesClient::GetAutoMergingPreview, __VA_ARGS__)
#define GetAutoMergingPreviewCallable(REQUEST)  SubmitCallable(&CustomerProfilesClient::GetAutoMergingPreview, REQUEST)

#define GetDomainAsync(...)  SubmitAsync(&CustomerProfilesClient::GetDomain, __VA_ARGS__)
#define GetDomainCallable(REQUEST)  SubmitCallable(&CustomerProfilesClient::GetDomain, REQUEST)

#define GetIdentityResolutionJobAsync(...)  SubmitAsync(&CustomerProfilesClient::GetIdentityResolutionJob, __VA_ARGS__)
#define GetIdentityResolutionJobCallable(REQUEST)  SubmitCallable(&CustomerProfilesClient::GetIdentityResolutionJob, REQUEST)

#define GetIntegrationAsync(...)  SubmitAsync(&CustomerProfilesClient::GetIntegration, __VA_ARGS__)
#define GetIntegrationCallable(REQUEST)  SubmitCallable(&CustomerProfilesClient::GetIntegration, REQUEST)

#define GetMatchesAsync(...)  SubmitAsync(&CustomerProfilesClient::GetMatches, __VA_ARGS__)
#define GetMatchesCallable(REQUEST)  SubmitCallable(&CustomerProfilesClient::GetMatches, REQUEST)

#define GetProfileObjectTypeAsync(...)  SubmitAsync(&CustomerProfilesClient::GetProfileObjectType, __VA_ARGS__)
#define GetProfileObjectTypeCallable(REQUEST)  SubmitCallable(&CustomerProfilesClient::GetProfileObjectType, REQUEST)

#define GetProfileObjectTypeTemplateAsync(...)  SubmitAsync(&CustomerProfilesClient::GetProfileObjectTypeTemplate, __VA_ARGS__)
#define GetProfileObjectTypeTemplateCallable(REQUEST)  SubmitCallable(&CustomerProfilesClient::GetProfileObjectTypeTemplate, REQUEST)

#define GetWorkflowAsync(...)  SubmitAsync(&CustomerProfilesClient::GetWorkflow, __VA_ARGS__)
#define GetWorkflowCallable(REQUEST)  SubmitCallable(&CustomerProfilesClient::GetWorkflow, REQUEST)

#define GetWorkflowStepsAsync(...)  SubmitAsync(&CustomerProfilesClient::GetWorkflowSteps, __VA_ARGS__)
#define GetWorkflowStepsCallable(REQUEST)  SubmitCallable(&CustomerProfilesClient::GetWorkflowSteps, REQUEST)

#define ListAccountIntegrationsAsync(...)  SubmitAsync(&CustomerProfilesClient::ListAccountIntegrations, __VA_ARGS__)
#define ListAccountIntegrationsCallable(REQUEST)  SubmitCallable(&CustomerProfilesClient::ListAccountIntegrations, REQUEST)

#define ListDomainsAsync(...)  SubmitAsync(&CustomerProfilesClient::ListDomains, __VA_ARGS__)
#define ListDomainsCallable(REQUEST)  SubmitCallable(&CustomerProfilesClient::ListDomains, REQUEST)

#define ListIdentityResolutionJobsAsync(...)  SubmitAsync(&CustomerProfilesClient::ListIdentityResolutionJobs, __VA_ARGS__)
#define ListIdentityResolutionJobsCallable(REQUEST)  SubmitCallable(&CustomerProfilesClient::ListIdentityResolutionJobs, REQUEST)

#define ListIntegrationsAsync(...)  SubmitAsync(&CustomerProfilesClient::ListIntegrations, __VA_ARGS__)
#define ListIntegrationsCallable(REQUEST)  SubmitCallable(&CustomerProfilesClient::ListIntegrations, REQUEST)

#define ListProfileObjectTypeTemplatesAsync(...)  SubmitAsync(&CustomerProfilesClient::ListProfileObjectTypeTemplates, __VA_ARGS__)
#define ListProfileObjectTypeTemplatesCallable(REQUEST)  SubmitCallable(&CustomerProfilesClient::ListProfileObjectTypeTemplates, REQUEST)

#define ListProfileObjectTypesAsync(...)  SubmitAsync(&CustomerProfilesClient::ListProfileObjectTypes, __VA_ARGS__)
#define ListProfileObjectTypesCallable(REQUEST)  SubmitCallable(&CustomerProfilesClient::ListProfileObjectTypes, REQUEST)

#define ListProfileObjectsAsync(...)  SubmitAsync(&CustomerProfilesClient::ListProfileObjects, __VA_ARGS__)
#define ListProfileObjectsCallable(REQUEST)  SubmitCallable(&CustomerProfilesClient::ListProfileObjects, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&CustomerProfilesClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&CustomerProfilesClient::ListTagsForResource, REQUEST)

#define ListWorkflowsAsync(...)  SubmitAsync(&CustomerProfilesClient::ListWorkflows, __VA_ARGS__)
#define ListWorkflowsCallable(REQUEST)  SubmitCallable(&CustomerProfilesClient::ListWorkflows, REQUEST)

#define MergeProfilesAsync(...)  SubmitAsync(&CustomerProfilesClient::MergeProfiles, __VA_ARGS__)
#define MergeProfilesCallable(REQUEST)  SubmitCallable(&CustomerProfilesClient::MergeProfiles, REQUEST)

#define PutIntegrationAsync(...)  SubmitAsync(&CustomerProfilesClient::PutIntegration, __VA_ARGS__)
#define PutIntegrationCallable(REQUEST)  SubmitCallable(&CustomerProfilesClient::PutIntegration, REQUEST)

#define PutProfileObjectAsync(...)  SubmitAsync(&CustomerProfilesClient::PutProfileObject, __VA_ARGS__)
#define PutProfileObjectCallable(REQUEST)  SubmitCallable(&CustomerProfilesClient::PutProfileObject, REQUEST)

#define PutProfileObjectTypeAsync(...)  SubmitAsync(&CustomerProfilesClient::PutProfileObjectType, __VA_ARGS__)
#define PutProfileObjectTypeCallable(REQUEST)  SubmitCallable(&CustomerProfilesClient::PutProfileObjectType, REQUEST)

#define SearchProfilesAsync(...)  SubmitAsync(&CustomerProfilesClient::SearchProfiles, __VA_ARGS__)
#define SearchProfilesCallable(REQUEST)  SubmitCallable(&CustomerProfilesClient::SearchProfiles, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&CustomerProfilesClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&CustomerProfilesClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&CustomerProfilesClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&CustomerProfilesClient::UntagResource, REQUEST)

#define UpdateDomainAsync(...)  SubmitAsync(&CustomerProfilesClient::UpdateDomain, __VA_ARGS__)
#define UpdateDomainCallable(REQUEST)  SubmitCallable(&CustomerProfilesClient::UpdateDomain, REQUEST)

#define UpdateProfileAsync(...)  SubmitAsync(&CustomerProfilesClient::UpdateProfile, __VA_ARGS__)
#define UpdateProfileCallable(REQUEST)  SubmitCallable(&CustomerProfilesClient::UpdateProfile, REQUEST)

