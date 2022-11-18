/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define BuildSuggestersAsync(...)  SubmitAsync(&CloudSearchClient::BuildSuggesters, __VA_ARGS__)
#define BuildSuggestersCallable(REQUEST)  SubmitCallable(&CloudSearchClient::BuildSuggesters, REQUEST)

#define CreateDomainAsync(...)  SubmitAsync(&CloudSearchClient::CreateDomain, __VA_ARGS__)
#define CreateDomainCallable(REQUEST)  SubmitCallable(&CloudSearchClient::CreateDomain, REQUEST)

#define DefineAnalysisSchemeAsync(...)  SubmitAsync(&CloudSearchClient::DefineAnalysisScheme, __VA_ARGS__)
#define DefineAnalysisSchemeCallable(REQUEST)  SubmitCallable(&CloudSearchClient::DefineAnalysisScheme, REQUEST)

#define DefineExpressionAsync(...)  SubmitAsync(&CloudSearchClient::DefineExpression, __VA_ARGS__)
#define DefineExpressionCallable(REQUEST)  SubmitCallable(&CloudSearchClient::DefineExpression, REQUEST)

#define DefineIndexFieldAsync(...)  SubmitAsync(&CloudSearchClient::DefineIndexField, __VA_ARGS__)
#define DefineIndexFieldCallable(REQUEST)  SubmitCallable(&CloudSearchClient::DefineIndexField, REQUEST)

#define DefineSuggesterAsync(...)  SubmitAsync(&CloudSearchClient::DefineSuggester, __VA_ARGS__)
#define DefineSuggesterCallable(REQUEST)  SubmitCallable(&CloudSearchClient::DefineSuggester, REQUEST)

#define DeleteAnalysisSchemeAsync(...)  SubmitAsync(&CloudSearchClient::DeleteAnalysisScheme, __VA_ARGS__)
#define DeleteAnalysisSchemeCallable(REQUEST)  SubmitCallable(&CloudSearchClient::DeleteAnalysisScheme, REQUEST)

#define DeleteDomainAsync(...)  SubmitAsync(&CloudSearchClient::DeleteDomain, __VA_ARGS__)
#define DeleteDomainCallable(REQUEST)  SubmitCallable(&CloudSearchClient::DeleteDomain, REQUEST)

#define DeleteExpressionAsync(...)  SubmitAsync(&CloudSearchClient::DeleteExpression, __VA_ARGS__)
#define DeleteExpressionCallable(REQUEST)  SubmitCallable(&CloudSearchClient::DeleteExpression, REQUEST)

#define DeleteIndexFieldAsync(...)  SubmitAsync(&CloudSearchClient::DeleteIndexField, __VA_ARGS__)
#define DeleteIndexFieldCallable(REQUEST)  SubmitCallable(&CloudSearchClient::DeleteIndexField, REQUEST)

#define DeleteSuggesterAsync(...)  SubmitAsync(&CloudSearchClient::DeleteSuggester, __VA_ARGS__)
#define DeleteSuggesterCallable(REQUEST)  SubmitCallable(&CloudSearchClient::DeleteSuggester, REQUEST)

#define DescribeAnalysisSchemesAsync(...)  SubmitAsync(&CloudSearchClient::DescribeAnalysisSchemes, __VA_ARGS__)
#define DescribeAnalysisSchemesCallable(REQUEST)  SubmitCallable(&CloudSearchClient::DescribeAnalysisSchemes, REQUEST)

#define DescribeAvailabilityOptionsAsync(...)  SubmitAsync(&CloudSearchClient::DescribeAvailabilityOptions, __VA_ARGS__)
#define DescribeAvailabilityOptionsCallable(REQUEST)  SubmitCallable(&CloudSearchClient::DescribeAvailabilityOptions, REQUEST)

#define DescribeDomainEndpointOptionsAsync(...)  SubmitAsync(&CloudSearchClient::DescribeDomainEndpointOptions, __VA_ARGS__)
#define DescribeDomainEndpointOptionsCallable(REQUEST)  SubmitCallable(&CloudSearchClient::DescribeDomainEndpointOptions, REQUEST)

#define DescribeDomainsAsync(...)  SubmitAsync(&CloudSearchClient::DescribeDomains, __VA_ARGS__)
#define DescribeDomainsCallable(REQUEST)  SubmitCallable(&CloudSearchClient::DescribeDomains, REQUEST)

#define DescribeExpressionsAsync(...)  SubmitAsync(&CloudSearchClient::DescribeExpressions, __VA_ARGS__)
#define DescribeExpressionsCallable(REQUEST)  SubmitCallable(&CloudSearchClient::DescribeExpressions, REQUEST)

#define DescribeIndexFieldsAsync(...)  SubmitAsync(&CloudSearchClient::DescribeIndexFields, __VA_ARGS__)
#define DescribeIndexFieldsCallable(REQUEST)  SubmitCallable(&CloudSearchClient::DescribeIndexFields, REQUEST)

#define DescribeScalingParametersAsync(...)  SubmitAsync(&CloudSearchClient::DescribeScalingParameters, __VA_ARGS__)
#define DescribeScalingParametersCallable(REQUEST)  SubmitCallable(&CloudSearchClient::DescribeScalingParameters, REQUEST)

#define DescribeServiceAccessPoliciesAsync(...)  SubmitAsync(&CloudSearchClient::DescribeServiceAccessPolicies, __VA_ARGS__)
#define DescribeServiceAccessPoliciesCallable(REQUEST)  SubmitCallable(&CloudSearchClient::DescribeServiceAccessPolicies, REQUEST)

#define DescribeSuggestersAsync(...)  SubmitAsync(&CloudSearchClient::DescribeSuggesters, __VA_ARGS__)
#define DescribeSuggestersCallable(REQUEST)  SubmitCallable(&CloudSearchClient::DescribeSuggesters, REQUEST)

#define IndexDocumentsAsync(...)  SubmitAsync(&CloudSearchClient::IndexDocuments, __VA_ARGS__)
#define IndexDocumentsCallable(REQUEST)  SubmitCallable(&CloudSearchClient::IndexDocuments, REQUEST)

#define ListDomainNamesAsync(...)  SubmitAsync(&CloudSearchClient::ListDomainNames, __VA_ARGS__)
#define ListDomainNamesCallable(REQUEST)  SubmitCallable(&CloudSearchClient::ListDomainNames, REQUEST)

#define UpdateAvailabilityOptionsAsync(...)  SubmitAsync(&CloudSearchClient::UpdateAvailabilityOptions, __VA_ARGS__)
#define UpdateAvailabilityOptionsCallable(REQUEST)  SubmitCallable(&CloudSearchClient::UpdateAvailabilityOptions, REQUEST)

#define UpdateDomainEndpointOptionsAsync(...)  SubmitAsync(&CloudSearchClient::UpdateDomainEndpointOptions, __VA_ARGS__)
#define UpdateDomainEndpointOptionsCallable(REQUEST)  SubmitCallable(&CloudSearchClient::UpdateDomainEndpointOptions, REQUEST)

#define UpdateScalingParametersAsync(...)  SubmitAsync(&CloudSearchClient::UpdateScalingParameters, __VA_ARGS__)
#define UpdateScalingParametersCallable(REQUEST)  SubmitCallable(&CloudSearchClient::UpdateScalingParameters, REQUEST)

#define UpdateServiceAccessPoliciesAsync(...)  SubmitAsync(&CloudSearchClient::UpdateServiceAccessPolicies, __VA_ARGS__)
#define UpdateServiceAccessPoliciesCallable(REQUEST)  SubmitCallable(&CloudSearchClient::UpdateServiceAccessPolicies, REQUEST)

