/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateDataIntegrationAsync(...)  SubmitAsync(&AppIntegrationsServiceClient::CreateDataIntegration, __VA_ARGS__)
#define CreateDataIntegrationCallable(REQUEST)  SubmitCallable(&AppIntegrationsServiceClient::CreateDataIntegration, REQUEST)

#define CreateEventIntegrationAsync(...)  SubmitAsync(&AppIntegrationsServiceClient::CreateEventIntegration, __VA_ARGS__)
#define CreateEventIntegrationCallable(REQUEST)  SubmitCallable(&AppIntegrationsServiceClient::CreateEventIntegration, REQUEST)

#define DeleteDataIntegrationAsync(...)  SubmitAsync(&AppIntegrationsServiceClient::DeleteDataIntegration, __VA_ARGS__)
#define DeleteDataIntegrationCallable(REQUEST)  SubmitCallable(&AppIntegrationsServiceClient::DeleteDataIntegration, REQUEST)

#define DeleteEventIntegrationAsync(...)  SubmitAsync(&AppIntegrationsServiceClient::DeleteEventIntegration, __VA_ARGS__)
#define DeleteEventIntegrationCallable(REQUEST)  SubmitCallable(&AppIntegrationsServiceClient::DeleteEventIntegration, REQUEST)

#define GetDataIntegrationAsync(...)  SubmitAsync(&AppIntegrationsServiceClient::GetDataIntegration, __VA_ARGS__)
#define GetDataIntegrationCallable(REQUEST)  SubmitCallable(&AppIntegrationsServiceClient::GetDataIntegration, REQUEST)

#define GetEventIntegrationAsync(...)  SubmitAsync(&AppIntegrationsServiceClient::GetEventIntegration, __VA_ARGS__)
#define GetEventIntegrationCallable(REQUEST)  SubmitCallable(&AppIntegrationsServiceClient::GetEventIntegration, REQUEST)

#define ListDataIntegrationAssociationsAsync(...)  SubmitAsync(&AppIntegrationsServiceClient::ListDataIntegrationAssociations, __VA_ARGS__)
#define ListDataIntegrationAssociationsCallable(REQUEST)  SubmitCallable(&AppIntegrationsServiceClient::ListDataIntegrationAssociations, REQUEST)

#define ListDataIntegrationsAsync(...)  SubmitAsync(&AppIntegrationsServiceClient::ListDataIntegrations, __VA_ARGS__)
#define ListDataIntegrationsCallable(REQUEST)  SubmitCallable(&AppIntegrationsServiceClient::ListDataIntegrations, REQUEST)

#define ListEventIntegrationAssociationsAsync(...)  SubmitAsync(&AppIntegrationsServiceClient::ListEventIntegrationAssociations, __VA_ARGS__)
#define ListEventIntegrationAssociationsCallable(REQUEST)  SubmitCallable(&AppIntegrationsServiceClient::ListEventIntegrationAssociations, REQUEST)

#define ListEventIntegrationsAsync(...)  SubmitAsync(&AppIntegrationsServiceClient::ListEventIntegrations, __VA_ARGS__)
#define ListEventIntegrationsCallable(REQUEST)  SubmitCallable(&AppIntegrationsServiceClient::ListEventIntegrations, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&AppIntegrationsServiceClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&AppIntegrationsServiceClient::ListTagsForResource, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&AppIntegrationsServiceClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&AppIntegrationsServiceClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&AppIntegrationsServiceClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&AppIntegrationsServiceClient::UntagResource, REQUEST)

#define UpdateDataIntegrationAsync(...)  SubmitAsync(&AppIntegrationsServiceClient::UpdateDataIntegration, __VA_ARGS__)
#define UpdateDataIntegrationCallable(REQUEST)  SubmitCallable(&AppIntegrationsServiceClient::UpdateDataIntegration, REQUEST)

#define UpdateEventIntegrationAsync(...)  SubmitAsync(&AppIntegrationsServiceClient::UpdateEventIntegration, __VA_ARGS__)
#define UpdateEventIntegrationCallable(REQUEST)  SubmitCallable(&AppIntegrationsServiceClient::UpdateEventIntegration, REQUEST)

