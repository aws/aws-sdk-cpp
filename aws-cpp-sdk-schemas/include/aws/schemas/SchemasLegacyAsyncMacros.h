/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateDiscovererAsync(...)  SubmitAsync(&SchemasClient::CreateDiscoverer, __VA_ARGS__)
#define CreateDiscovererCallable(REQUEST)  SubmitCallable(&SchemasClient::CreateDiscoverer, REQUEST)

#define CreateRegistryAsync(...)  SubmitAsync(&SchemasClient::CreateRegistry, __VA_ARGS__)
#define CreateRegistryCallable(REQUEST)  SubmitCallable(&SchemasClient::CreateRegistry, REQUEST)

#define CreateSchemaAsync(...)  SubmitAsync(&SchemasClient::CreateSchema, __VA_ARGS__)
#define CreateSchemaCallable(REQUEST)  SubmitCallable(&SchemasClient::CreateSchema, REQUEST)

#define DeleteDiscovererAsync(...)  SubmitAsync(&SchemasClient::DeleteDiscoverer, __VA_ARGS__)
#define DeleteDiscovererCallable(REQUEST)  SubmitCallable(&SchemasClient::DeleteDiscoverer, REQUEST)

#define DeleteRegistryAsync(...)  SubmitAsync(&SchemasClient::DeleteRegistry, __VA_ARGS__)
#define DeleteRegistryCallable(REQUEST)  SubmitCallable(&SchemasClient::DeleteRegistry, REQUEST)

#define DeleteResourcePolicyAsync(...)  SubmitAsync(&SchemasClient::DeleteResourcePolicy, __VA_ARGS__)
#define DeleteResourcePolicyCallable(REQUEST)  SubmitCallable(&SchemasClient::DeleteResourcePolicy, REQUEST)

#define DeleteSchemaAsync(...)  SubmitAsync(&SchemasClient::DeleteSchema, __VA_ARGS__)
#define DeleteSchemaCallable(REQUEST)  SubmitCallable(&SchemasClient::DeleteSchema, REQUEST)

#define DeleteSchemaVersionAsync(...)  SubmitAsync(&SchemasClient::DeleteSchemaVersion, __VA_ARGS__)
#define DeleteSchemaVersionCallable(REQUEST)  SubmitCallable(&SchemasClient::DeleteSchemaVersion, REQUEST)

#define DescribeCodeBindingAsync(...)  SubmitAsync(&SchemasClient::DescribeCodeBinding, __VA_ARGS__)
#define DescribeCodeBindingCallable(REQUEST)  SubmitCallable(&SchemasClient::DescribeCodeBinding, REQUEST)

#define DescribeDiscovererAsync(...)  SubmitAsync(&SchemasClient::DescribeDiscoverer, __VA_ARGS__)
#define DescribeDiscovererCallable(REQUEST)  SubmitCallable(&SchemasClient::DescribeDiscoverer, REQUEST)

#define DescribeRegistryAsync(...)  SubmitAsync(&SchemasClient::DescribeRegistry, __VA_ARGS__)
#define DescribeRegistryCallable(REQUEST)  SubmitCallable(&SchemasClient::DescribeRegistry, REQUEST)

#define DescribeSchemaAsync(...)  SubmitAsync(&SchemasClient::DescribeSchema, __VA_ARGS__)
#define DescribeSchemaCallable(REQUEST)  SubmitCallable(&SchemasClient::DescribeSchema, REQUEST)

#define ExportSchemaAsync(...)  SubmitAsync(&SchemasClient::ExportSchema, __VA_ARGS__)
#define ExportSchemaCallable(REQUEST)  SubmitCallable(&SchemasClient::ExportSchema, REQUEST)

#define GetCodeBindingSourceAsync(...)  SubmitAsync(&SchemasClient::GetCodeBindingSource, __VA_ARGS__)
#define GetCodeBindingSourceCallable(REQUEST)  SubmitCallable(&SchemasClient::GetCodeBindingSource, REQUEST)

#define GetDiscoveredSchemaAsync(...)  SubmitAsync(&SchemasClient::GetDiscoveredSchema, __VA_ARGS__)
#define GetDiscoveredSchemaCallable(REQUEST)  SubmitCallable(&SchemasClient::GetDiscoveredSchema, REQUEST)

#define GetResourcePolicyAsync(...)  SubmitAsync(&SchemasClient::GetResourcePolicy, __VA_ARGS__)
#define GetResourcePolicyCallable(REQUEST)  SubmitCallable(&SchemasClient::GetResourcePolicy, REQUEST)

#define ListDiscoverersAsync(...)  SubmitAsync(&SchemasClient::ListDiscoverers, __VA_ARGS__)
#define ListDiscoverersCallable(REQUEST)  SubmitCallable(&SchemasClient::ListDiscoverers, REQUEST)

#define ListRegistriesAsync(...)  SubmitAsync(&SchemasClient::ListRegistries, __VA_ARGS__)
#define ListRegistriesCallable(REQUEST)  SubmitCallable(&SchemasClient::ListRegistries, REQUEST)

#define ListSchemaVersionsAsync(...)  SubmitAsync(&SchemasClient::ListSchemaVersions, __VA_ARGS__)
#define ListSchemaVersionsCallable(REQUEST)  SubmitCallable(&SchemasClient::ListSchemaVersions, REQUEST)

#define ListSchemasAsync(...)  SubmitAsync(&SchemasClient::ListSchemas, __VA_ARGS__)
#define ListSchemasCallable(REQUEST)  SubmitCallable(&SchemasClient::ListSchemas, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&SchemasClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&SchemasClient::ListTagsForResource, REQUEST)

#define PutCodeBindingAsync(...)  SubmitAsync(&SchemasClient::PutCodeBinding, __VA_ARGS__)
#define PutCodeBindingCallable(REQUEST)  SubmitCallable(&SchemasClient::PutCodeBinding, REQUEST)

#define PutResourcePolicyAsync(...)  SubmitAsync(&SchemasClient::PutResourcePolicy, __VA_ARGS__)
#define PutResourcePolicyCallable(REQUEST)  SubmitCallable(&SchemasClient::PutResourcePolicy, REQUEST)

#define SearchSchemasAsync(...)  SubmitAsync(&SchemasClient::SearchSchemas, __VA_ARGS__)
#define SearchSchemasCallable(REQUEST)  SubmitCallable(&SchemasClient::SearchSchemas, REQUEST)

#define StartDiscovererAsync(...)  SubmitAsync(&SchemasClient::StartDiscoverer, __VA_ARGS__)
#define StartDiscovererCallable(REQUEST)  SubmitCallable(&SchemasClient::StartDiscoverer, REQUEST)

#define StopDiscovererAsync(...)  SubmitAsync(&SchemasClient::StopDiscoverer, __VA_ARGS__)
#define StopDiscovererCallable(REQUEST)  SubmitCallable(&SchemasClient::StopDiscoverer, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&SchemasClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&SchemasClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&SchemasClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&SchemasClient::UntagResource, REQUEST)

#define UpdateDiscovererAsync(...)  SubmitAsync(&SchemasClient::UpdateDiscoverer, __VA_ARGS__)
#define UpdateDiscovererCallable(REQUEST)  SubmitCallable(&SchemasClient::UpdateDiscoverer, REQUEST)

#define UpdateRegistryAsync(...)  SubmitAsync(&SchemasClient::UpdateRegistry, __VA_ARGS__)
#define UpdateRegistryCallable(REQUEST)  SubmitCallable(&SchemasClient::UpdateRegistry, REQUEST)

#define UpdateSchemaAsync(...)  SubmitAsync(&SchemasClient::UpdateSchema, __VA_ARGS__)
#define UpdateSchemaCallable(REQUEST)  SubmitCallable(&SchemasClient::UpdateSchema, REQUEST)

