/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define BatchDeleteAttributesAsync(...)  SubmitAsync(&SimpleDBClient::BatchDeleteAttributes, __VA_ARGS__)
#define BatchDeleteAttributesCallable(REQUEST)  SubmitCallable(&SimpleDBClient::BatchDeleteAttributes, REQUEST)

#define BatchPutAttributesAsync(...)  SubmitAsync(&SimpleDBClient::BatchPutAttributes, __VA_ARGS__)
#define BatchPutAttributesCallable(REQUEST)  SubmitCallable(&SimpleDBClient::BatchPutAttributes, REQUEST)

#define CreateDomainAsync(...)  SubmitAsync(&SimpleDBClient::CreateDomain, __VA_ARGS__)
#define CreateDomainCallable(REQUEST)  SubmitCallable(&SimpleDBClient::CreateDomain, REQUEST)

#define DeleteAttributesAsync(...)  SubmitAsync(&SimpleDBClient::DeleteAttributes, __VA_ARGS__)
#define DeleteAttributesCallable(REQUEST)  SubmitCallable(&SimpleDBClient::DeleteAttributes, REQUEST)

#define DeleteDomainAsync(...)  SubmitAsync(&SimpleDBClient::DeleteDomain, __VA_ARGS__)
#define DeleteDomainCallable(REQUEST)  SubmitCallable(&SimpleDBClient::DeleteDomain, REQUEST)

#define DomainMetadataAsync(...)  SubmitAsync(&SimpleDBClient::DomainMetadata, __VA_ARGS__)
#define DomainMetadataCallable(REQUEST)  SubmitCallable(&SimpleDBClient::DomainMetadata, REQUEST)

#define GetAttributesAsync(...)  SubmitAsync(&SimpleDBClient::GetAttributes, __VA_ARGS__)
#define GetAttributesCallable(REQUEST)  SubmitCallable(&SimpleDBClient::GetAttributes, REQUEST)

#define ListDomainsAsync(...)  SubmitAsync(&SimpleDBClient::ListDomains, __VA_ARGS__)
#define ListDomainsCallable(REQUEST)  SubmitCallable(&SimpleDBClient::ListDomains, REQUEST)

#define PutAttributesAsync(...)  SubmitAsync(&SimpleDBClient::PutAttributes, __VA_ARGS__)
#define PutAttributesCallable(REQUEST)  SubmitCallable(&SimpleDBClient::PutAttributes, REQUEST)

#define SelectAsync(...)  SubmitAsync(&SimpleDBClient::Select, __VA_ARGS__)
#define SelectCallable(REQUEST)  SubmitCallable(&SimpleDBClient::Select, REQUEST)

