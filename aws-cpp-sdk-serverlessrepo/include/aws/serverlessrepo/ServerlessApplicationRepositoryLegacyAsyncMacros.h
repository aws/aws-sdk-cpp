/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateApplicationAsync(...)  SubmitAsync(&ServerlessApplicationRepositoryClient::CreateApplication, __VA_ARGS__)
#define CreateApplicationCallable(REQUEST)  SubmitCallable(&ServerlessApplicationRepositoryClient::CreateApplication, REQUEST)

#define CreateApplicationVersionAsync(...)  SubmitAsync(&ServerlessApplicationRepositoryClient::CreateApplicationVersion, __VA_ARGS__)
#define CreateApplicationVersionCallable(REQUEST)  SubmitCallable(&ServerlessApplicationRepositoryClient::CreateApplicationVersion, REQUEST)

#define CreateCloudFormationChangeSetAsync(...)  SubmitAsync(&ServerlessApplicationRepositoryClient::CreateCloudFormationChangeSet, __VA_ARGS__)
#define CreateCloudFormationChangeSetCallable(REQUEST)  SubmitCallable(&ServerlessApplicationRepositoryClient::CreateCloudFormationChangeSet, REQUEST)

#define CreateCloudFormationTemplateAsync(...)  SubmitAsync(&ServerlessApplicationRepositoryClient::CreateCloudFormationTemplate, __VA_ARGS__)
#define CreateCloudFormationTemplateCallable(REQUEST)  SubmitCallable(&ServerlessApplicationRepositoryClient::CreateCloudFormationTemplate, REQUEST)

#define DeleteApplicationAsync(...)  SubmitAsync(&ServerlessApplicationRepositoryClient::DeleteApplication, __VA_ARGS__)
#define DeleteApplicationCallable(REQUEST)  SubmitCallable(&ServerlessApplicationRepositoryClient::DeleteApplication, REQUEST)

#define GetApplicationAsync(...)  SubmitAsync(&ServerlessApplicationRepositoryClient::GetApplication, __VA_ARGS__)
#define GetApplicationCallable(REQUEST)  SubmitCallable(&ServerlessApplicationRepositoryClient::GetApplication, REQUEST)

#define GetApplicationPolicyAsync(...)  SubmitAsync(&ServerlessApplicationRepositoryClient::GetApplicationPolicy, __VA_ARGS__)
#define GetApplicationPolicyCallable(REQUEST)  SubmitCallable(&ServerlessApplicationRepositoryClient::GetApplicationPolicy, REQUEST)

#define GetCloudFormationTemplateAsync(...)  SubmitAsync(&ServerlessApplicationRepositoryClient::GetCloudFormationTemplate, __VA_ARGS__)
#define GetCloudFormationTemplateCallable(REQUEST)  SubmitCallable(&ServerlessApplicationRepositoryClient::GetCloudFormationTemplate, REQUEST)

#define ListApplicationDependenciesAsync(...)  SubmitAsync(&ServerlessApplicationRepositoryClient::ListApplicationDependencies, __VA_ARGS__)
#define ListApplicationDependenciesCallable(REQUEST)  SubmitCallable(&ServerlessApplicationRepositoryClient::ListApplicationDependencies, REQUEST)

#define ListApplicationVersionsAsync(...)  SubmitAsync(&ServerlessApplicationRepositoryClient::ListApplicationVersions, __VA_ARGS__)
#define ListApplicationVersionsCallable(REQUEST)  SubmitCallable(&ServerlessApplicationRepositoryClient::ListApplicationVersions, REQUEST)

#define ListApplicationsAsync(...)  SubmitAsync(&ServerlessApplicationRepositoryClient::ListApplications, __VA_ARGS__)
#define ListApplicationsCallable(REQUEST)  SubmitCallable(&ServerlessApplicationRepositoryClient::ListApplications, REQUEST)

#define PutApplicationPolicyAsync(...)  SubmitAsync(&ServerlessApplicationRepositoryClient::PutApplicationPolicy, __VA_ARGS__)
#define PutApplicationPolicyCallable(REQUEST)  SubmitCallable(&ServerlessApplicationRepositoryClient::PutApplicationPolicy, REQUEST)

#define UnshareApplicationAsync(...)  SubmitAsync(&ServerlessApplicationRepositoryClient::UnshareApplication, __VA_ARGS__)
#define UnshareApplicationCallable(REQUEST)  SubmitCallable(&ServerlessApplicationRepositoryClient::UnshareApplication, REQUEST)

#define UpdateApplicationAsync(...)  SubmitAsync(&ServerlessApplicationRepositoryClient::UpdateApplication, __VA_ARGS__)
#define UpdateApplicationCallable(REQUEST)  SubmitCallable(&ServerlessApplicationRepositoryClient::UpdateApplication, REQUEST)

