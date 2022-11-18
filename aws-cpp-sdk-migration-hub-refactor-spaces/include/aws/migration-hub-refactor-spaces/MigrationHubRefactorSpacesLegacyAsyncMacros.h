/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateApplicationAsync(...)  SubmitAsync(&MigrationHubRefactorSpacesClient::CreateApplication, __VA_ARGS__)
#define CreateApplicationCallable(REQUEST)  SubmitCallable(&MigrationHubRefactorSpacesClient::CreateApplication, REQUEST)

#define CreateEnvironmentAsync(...)  SubmitAsync(&MigrationHubRefactorSpacesClient::CreateEnvironment, __VA_ARGS__)
#define CreateEnvironmentCallable(REQUEST)  SubmitCallable(&MigrationHubRefactorSpacesClient::CreateEnvironment, REQUEST)

#define CreateRouteAsync(...)  SubmitAsync(&MigrationHubRefactorSpacesClient::CreateRoute, __VA_ARGS__)
#define CreateRouteCallable(REQUEST)  SubmitCallable(&MigrationHubRefactorSpacesClient::CreateRoute, REQUEST)

#define CreateServiceAsync(...)  SubmitAsync(&MigrationHubRefactorSpacesClient::CreateService, __VA_ARGS__)
#define CreateServiceCallable(REQUEST)  SubmitCallable(&MigrationHubRefactorSpacesClient::CreateService, REQUEST)

#define DeleteApplicationAsync(...)  SubmitAsync(&MigrationHubRefactorSpacesClient::DeleteApplication, __VA_ARGS__)
#define DeleteApplicationCallable(REQUEST)  SubmitCallable(&MigrationHubRefactorSpacesClient::DeleteApplication, REQUEST)

#define DeleteEnvironmentAsync(...)  SubmitAsync(&MigrationHubRefactorSpacesClient::DeleteEnvironment, __VA_ARGS__)
#define DeleteEnvironmentCallable(REQUEST)  SubmitCallable(&MigrationHubRefactorSpacesClient::DeleteEnvironment, REQUEST)

#define DeleteResourcePolicyAsync(...)  SubmitAsync(&MigrationHubRefactorSpacesClient::DeleteResourcePolicy, __VA_ARGS__)
#define DeleteResourcePolicyCallable(REQUEST)  SubmitCallable(&MigrationHubRefactorSpacesClient::DeleteResourcePolicy, REQUEST)

#define DeleteRouteAsync(...)  SubmitAsync(&MigrationHubRefactorSpacesClient::DeleteRoute, __VA_ARGS__)
#define DeleteRouteCallable(REQUEST)  SubmitCallable(&MigrationHubRefactorSpacesClient::DeleteRoute, REQUEST)

#define DeleteServiceAsync(...)  SubmitAsync(&MigrationHubRefactorSpacesClient::DeleteService, __VA_ARGS__)
#define DeleteServiceCallable(REQUEST)  SubmitCallable(&MigrationHubRefactorSpacesClient::DeleteService, REQUEST)

#define GetApplicationAsync(...)  SubmitAsync(&MigrationHubRefactorSpacesClient::GetApplication, __VA_ARGS__)
#define GetApplicationCallable(REQUEST)  SubmitCallable(&MigrationHubRefactorSpacesClient::GetApplication, REQUEST)

#define GetEnvironmentAsync(...)  SubmitAsync(&MigrationHubRefactorSpacesClient::GetEnvironment, __VA_ARGS__)
#define GetEnvironmentCallable(REQUEST)  SubmitCallable(&MigrationHubRefactorSpacesClient::GetEnvironment, REQUEST)

#define GetResourcePolicyAsync(...)  SubmitAsync(&MigrationHubRefactorSpacesClient::GetResourcePolicy, __VA_ARGS__)
#define GetResourcePolicyCallable(REQUEST)  SubmitCallable(&MigrationHubRefactorSpacesClient::GetResourcePolicy, REQUEST)

#define GetRouteAsync(...)  SubmitAsync(&MigrationHubRefactorSpacesClient::GetRoute, __VA_ARGS__)
#define GetRouteCallable(REQUEST)  SubmitCallable(&MigrationHubRefactorSpacesClient::GetRoute, REQUEST)

#define GetServiceAsync(...)  SubmitAsync(&MigrationHubRefactorSpacesClient::GetService, __VA_ARGS__)
#define GetServiceCallable(REQUEST)  SubmitCallable(&MigrationHubRefactorSpacesClient::GetService, REQUEST)

#define ListApplicationsAsync(...)  SubmitAsync(&MigrationHubRefactorSpacesClient::ListApplications, __VA_ARGS__)
#define ListApplicationsCallable(REQUEST)  SubmitCallable(&MigrationHubRefactorSpacesClient::ListApplications, REQUEST)

#define ListEnvironmentVpcsAsync(...)  SubmitAsync(&MigrationHubRefactorSpacesClient::ListEnvironmentVpcs, __VA_ARGS__)
#define ListEnvironmentVpcsCallable(REQUEST)  SubmitCallable(&MigrationHubRefactorSpacesClient::ListEnvironmentVpcs, REQUEST)

#define ListEnvironmentsAsync(...)  SubmitAsync(&MigrationHubRefactorSpacesClient::ListEnvironments, __VA_ARGS__)
#define ListEnvironmentsCallable(REQUEST)  SubmitCallable(&MigrationHubRefactorSpacesClient::ListEnvironments, REQUEST)

#define ListRoutesAsync(...)  SubmitAsync(&MigrationHubRefactorSpacesClient::ListRoutes, __VA_ARGS__)
#define ListRoutesCallable(REQUEST)  SubmitCallable(&MigrationHubRefactorSpacesClient::ListRoutes, REQUEST)

#define ListServicesAsync(...)  SubmitAsync(&MigrationHubRefactorSpacesClient::ListServices, __VA_ARGS__)
#define ListServicesCallable(REQUEST)  SubmitCallable(&MigrationHubRefactorSpacesClient::ListServices, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&MigrationHubRefactorSpacesClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&MigrationHubRefactorSpacesClient::ListTagsForResource, REQUEST)

#define PutResourcePolicyAsync(...)  SubmitAsync(&MigrationHubRefactorSpacesClient::PutResourcePolicy, __VA_ARGS__)
#define PutResourcePolicyCallable(REQUEST)  SubmitCallable(&MigrationHubRefactorSpacesClient::PutResourcePolicy, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&MigrationHubRefactorSpacesClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&MigrationHubRefactorSpacesClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&MigrationHubRefactorSpacesClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&MigrationHubRefactorSpacesClient::UntagResource, REQUEST)

#define UpdateRouteAsync(...)  SubmitAsync(&MigrationHubRefactorSpacesClient::UpdateRoute, __VA_ARGS__)
#define UpdateRouteCallable(REQUEST)  SubmitCallable(&MigrationHubRefactorSpacesClient::UpdateRoute, REQUEST)

