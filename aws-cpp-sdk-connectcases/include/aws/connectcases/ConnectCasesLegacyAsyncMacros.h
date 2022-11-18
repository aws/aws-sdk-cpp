/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define BatchGetFieldAsync(...)  SubmitAsync(&ConnectCasesClient::BatchGetField, __VA_ARGS__)
#define BatchGetFieldCallable(REQUEST)  SubmitCallable(&ConnectCasesClient::BatchGetField, REQUEST)

#define BatchPutFieldOptionsAsync(...)  SubmitAsync(&ConnectCasesClient::BatchPutFieldOptions, __VA_ARGS__)
#define BatchPutFieldOptionsCallable(REQUEST)  SubmitCallable(&ConnectCasesClient::BatchPutFieldOptions, REQUEST)

#define CreateCaseAsync(...)  SubmitAsync(&ConnectCasesClient::CreateCase, __VA_ARGS__)
#define CreateCaseCallable(REQUEST)  SubmitCallable(&ConnectCasesClient::CreateCase, REQUEST)

#define CreateDomainAsync(...)  SubmitAsync(&ConnectCasesClient::CreateDomain, __VA_ARGS__)
#define CreateDomainCallable(REQUEST)  SubmitCallable(&ConnectCasesClient::CreateDomain, REQUEST)

#define CreateFieldAsync(...)  SubmitAsync(&ConnectCasesClient::CreateField, __VA_ARGS__)
#define CreateFieldCallable(REQUEST)  SubmitCallable(&ConnectCasesClient::CreateField, REQUEST)

#define CreateLayoutAsync(...)  SubmitAsync(&ConnectCasesClient::CreateLayout, __VA_ARGS__)
#define CreateLayoutCallable(REQUEST)  SubmitCallable(&ConnectCasesClient::CreateLayout, REQUEST)

#define CreateRelatedItemAsync(...)  SubmitAsync(&ConnectCasesClient::CreateRelatedItem, __VA_ARGS__)
#define CreateRelatedItemCallable(REQUEST)  SubmitCallable(&ConnectCasesClient::CreateRelatedItem, REQUEST)

#define CreateTemplateAsync(...)  SubmitAsync(&ConnectCasesClient::CreateTemplate, __VA_ARGS__)
#define CreateTemplateCallable(REQUEST)  SubmitCallable(&ConnectCasesClient::CreateTemplate, REQUEST)

#define GetCaseAsync(...)  SubmitAsync(&ConnectCasesClient::GetCase, __VA_ARGS__)
#define GetCaseCallable(REQUEST)  SubmitCallable(&ConnectCasesClient::GetCase, REQUEST)

#define GetCaseEventConfigurationAsync(...)  SubmitAsync(&ConnectCasesClient::GetCaseEventConfiguration, __VA_ARGS__)
#define GetCaseEventConfigurationCallable(REQUEST)  SubmitCallable(&ConnectCasesClient::GetCaseEventConfiguration, REQUEST)

#define GetDomainAsync(...)  SubmitAsync(&ConnectCasesClient::GetDomain, __VA_ARGS__)
#define GetDomainCallable(REQUEST)  SubmitCallable(&ConnectCasesClient::GetDomain, REQUEST)

#define GetLayoutAsync(...)  SubmitAsync(&ConnectCasesClient::GetLayout, __VA_ARGS__)
#define GetLayoutCallable(REQUEST)  SubmitCallable(&ConnectCasesClient::GetLayout, REQUEST)

#define GetTemplateAsync(...)  SubmitAsync(&ConnectCasesClient::GetTemplate, __VA_ARGS__)
#define GetTemplateCallable(REQUEST)  SubmitCallable(&ConnectCasesClient::GetTemplate, REQUEST)

#define ListCasesForContactAsync(...)  SubmitAsync(&ConnectCasesClient::ListCasesForContact, __VA_ARGS__)
#define ListCasesForContactCallable(REQUEST)  SubmitCallable(&ConnectCasesClient::ListCasesForContact, REQUEST)

#define ListDomainsAsync(...)  SubmitAsync(&ConnectCasesClient::ListDomains, __VA_ARGS__)
#define ListDomainsCallable(REQUEST)  SubmitCallable(&ConnectCasesClient::ListDomains, REQUEST)

#define ListFieldOptionsAsync(...)  SubmitAsync(&ConnectCasesClient::ListFieldOptions, __VA_ARGS__)
#define ListFieldOptionsCallable(REQUEST)  SubmitCallable(&ConnectCasesClient::ListFieldOptions, REQUEST)

#define ListFieldsAsync(...)  SubmitAsync(&ConnectCasesClient::ListFields, __VA_ARGS__)
#define ListFieldsCallable(REQUEST)  SubmitCallable(&ConnectCasesClient::ListFields, REQUEST)

#define ListLayoutsAsync(...)  SubmitAsync(&ConnectCasesClient::ListLayouts, __VA_ARGS__)
#define ListLayoutsCallable(REQUEST)  SubmitCallable(&ConnectCasesClient::ListLayouts, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&ConnectCasesClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&ConnectCasesClient::ListTagsForResource, REQUEST)

#define ListTemplatesAsync(...)  SubmitAsync(&ConnectCasesClient::ListTemplates, __VA_ARGS__)
#define ListTemplatesCallable(REQUEST)  SubmitCallable(&ConnectCasesClient::ListTemplates, REQUEST)

#define PutCaseEventConfigurationAsync(...)  SubmitAsync(&ConnectCasesClient::PutCaseEventConfiguration, __VA_ARGS__)
#define PutCaseEventConfigurationCallable(REQUEST)  SubmitCallable(&ConnectCasesClient::PutCaseEventConfiguration, REQUEST)

#define SearchCasesAsync(...)  SubmitAsync(&ConnectCasesClient::SearchCases, __VA_ARGS__)
#define SearchCasesCallable(REQUEST)  SubmitCallable(&ConnectCasesClient::SearchCases, REQUEST)

#define SearchRelatedItemsAsync(...)  SubmitAsync(&ConnectCasesClient::SearchRelatedItems, __VA_ARGS__)
#define SearchRelatedItemsCallable(REQUEST)  SubmitCallable(&ConnectCasesClient::SearchRelatedItems, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&ConnectCasesClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&ConnectCasesClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&ConnectCasesClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&ConnectCasesClient::UntagResource, REQUEST)

#define UpdateCaseAsync(...)  SubmitAsync(&ConnectCasesClient::UpdateCase, __VA_ARGS__)
#define UpdateCaseCallable(REQUEST)  SubmitCallable(&ConnectCasesClient::UpdateCase, REQUEST)

#define UpdateFieldAsync(...)  SubmitAsync(&ConnectCasesClient::UpdateField, __VA_ARGS__)
#define UpdateFieldCallable(REQUEST)  SubmitCallable(&ConnectCasesClient::UpdateField, REQUEST)

#define UpdateLayoutAsync(...)  SubmitAsync(&ConnectCasesClient::UpdateLayout, __VA_ARGS__)
#define UpdateLayoutCallable(REQUEST)  SubmitCallable(&ConnectCasesClient::UpdateLayout, REQUEST)

#define UpdateTemplateAsync(...)  SubmitAsync(&ConnectCasesClient::UpdateTemplate, __VA_ARGS__)
#define UpdateTemplateCallable(REQUEST)  SubmitCallable(&ConnectCasesClient::UpdateTemplate, REQUEST)

