/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AddTagsAsync(...)  SubmitAsync(&CloudTrailClient::AddTags, __VA_ARGS__)
#define AddTagsCallable(REQUEST)  SubmitCallable(&CloudTrailClient::AddTags, REQUEST)

#define CancelQueryAsync(...)  SubmitAsync(&CloudTrailClient::CancelQuery, __VA_ARGS__)
#define CancelQueryCallable(REQUEST)  SubmitCallable(&CloudTrailClient::CancelQuery, REQUEST)

#define CreateEventDataStoreAsync(...)  SubmitAsync(&CloudTrailClient::CreateEventDataStore, __VA_ARGS__)
#define CreateEventDataStoreCallable(REQUEST)  SubmitCallable(&CloudTrailClient::CreateEventDataStore, REQUEST)

#define CreateTrailAsync(...)  SubmitAsync(&CloudTrailClient::CreateTrail, __VA_ARGS__)
#define CreateTrailCallable(REQUEST)  SubmitCallable(&CloudTrailClient::CreateTrail, REQUEST)

#define DeleteEventDataStoreAsync(...)  SubmitAsync(&CloudTrailClient::DeleteEventDataStore, __VA_ARGS__)
#define DeleteEventDataStoreCallable(REQUEST)  SubmitCallable(&CloudTrailClient::DeleteEventDataStore, REQUEST)

#define DeleteTrailAsync(...)  SubmitAsync(&CloudTrailClient::DeleteTrail, __VA_ARGS__)
#define DeleteTrailCallable(REQUEST)  SubmitCallable(&CloudTrailClient::DeleteTrail, REQUEST)

#define DeregisterOrganizationDelegatedAdminAsync(...)  SubmitAsync(&CloudTrailClient::DeregisterOrganizationDelegatedAdmin, __VA_ARGS__)
#define DeregisterOrganizationDelegatedAdminCallable(REQUEST)  SubmitCallable(&CloudTrailClient::DeregisterOrganizationDelegatedAdmin, REQUEST)

#define DescribeQueryAsync(...)  SubmitAsync(&CloudTrailClient::DescribeQuery, __VA_ARGS__)
#define DescribeQueryCallable(REQUEST)  SubmitCallable(&CloudTrailClient::DescribeQuery, REQUEST)

#define DescribeTrailsAsync(...)  SubmitAsync(&CloudTrailClient::DescribeTrails, __VA_ARGS__)
#define DescribeTrailsCallable(REQUEST)  SubmitCallable(&CloudTrailClient::DescribeTrails, REQUEST)

#define GetChannelAsync(...)  SubmitAsync(&CloudTrailClient::GetChannel, __VA_ARGS__)
#define GetChannelCallable(REQUEST)  SubmitCallable(&CloudTrailClient::GetChannel, REQUEST)

#define GetEventDataStoreAsync(...)  SubmitAsync(&CloudTrailClient::GetEventDataStore, __VA_ARGS__)
#define GetEventDataStoreCallable(REQUEST)  SubmitCallable(&CloudTrailClient::GetEventDataStore, REQUEST)

#define GetEventSelectorsAsync(...)  SubmitAsync(&CloudTrailClient::GetEventSelectors, __VA_ARGS__)
#define GetEventSelectorsCallable(REQUEST)  SubmitCallable(&CloudTrailClient::GetEventSelectors, REQUEST)

#define GetImportAsync(...)  SubmitAsync(&CloudTrailClient::GetImport, __VA_ARGS__)
#define GetImportCallable(REQUEST)  SubmitCallable(&CloudTrailClient::GetImport, REQUEST)

#define GetInsightSelectorsAsync(...)  SubmitAsync(&CloudTrailClient::GetInsightSelectors, __VA_ARGS__)
#define GetInsightSelectorsCallable(REQUEST)  SubmitCallable(&CloudTrailClient::GetInsightSelectors, REQUEST)

#define GetQueryResultsAsync(...)  SubmitAsync(&CloudTrailClient::GetQueryResults, __VA_ARGS__)
#define GetQueryResultsCallable(REQUEST)  SubmitCallable(&CloudTrailClient::GetQueryResults, REQUEST)

#define GetTrailAsync(...)  SubmitAsync(&CloudTrailClient::GetTrail, __VA_ARGS__)
#define GetTrailCallable(REQUEST)  SubmitCallable(&CloudTrailClient::GetTrail, REQUEST)

#define GetTrailStatusAsync(...)  SubmitAsync(&CloudTrailClient::GetTrailStatus, __VA_ARGS__)
#define GetTrailStatusCallable(REQUEST)  SubmitCallable(&CloudTrailClient::GetTrailStatus, REQUEST)

#define ListChannelsAsync(...)  SubmitAsync(&CloudTrailClient::ListChannels, __VA_ARGS__)
#define ListChannelsCallable(REQUEST)  SubmitCallable(&CloudTrailClient::ListChannels, REQUEST)

#define ListEventDataStoresAsync(...)  SubmitAsync(&CloudTrailClient::ListEventDataStores, __VA_ARGS__)
#define ListEventDataStoresCallable(REQUEST)  SubmitCallable(&CloudTrailClient::ListEventDataStores, REQUEST)

#define ListImportFailuresAsync(...)  SubmitAsync(&CloudTrailClient::ListImportFailures, __VA_ARGS__)
#define ListImportFailuresCallable(REQUEST)  SubmitCallable(&CloudTrailClient::ListImportFailures, REQUEST)

#define ListImportsAsync(...)  SubmitAsync(&CloudTrailClient::ListImports, __VA_ARGS__)
#define ListImportsCallable(REQUEST)  SubmitCallable(&CloudTrailClient::ListImports, REQUEST)

#define ListPublicKeysAsync(...)  SubmitAsync(&CloudTrailClient::ListPublicKeys, __VA_ARGS__)
#define ListPublicKeysCallable(REQUEST)  SubmitCallable(&CloudTrailClient::ListPublicKeys, REQUEST)

#define ListQueriesAsync(...)  SubmitAsync(&CloudTrailClient::ListQueries, __VA_ARGS__)
#define ListQueriesCallable(REQUEST)  SubmitCallable(&CloudTrailClient::ListQueries, REQUEST)

#define ListTagsAsync(...)  SubmitAsync(&CloudTrailClient::ListTags, __VA_ARGS__)
#define ListTagsCallable(REQUEST)  SubmitCallable(&CloudTrailClient::ListTags, REQUEST)

#define ListTrailsAsync(...)  SubmitAsync(&CloudTrailClient::ListTrails, __VA_ARGS__)
#define ListTrailsCallable(REQUEST)  SubmitCallable(&CloudTrailClient::ListTrails, REQUEST)

#define LookupEventsAsync(...)  SubmitAsync(&CloudTrailClient::LookupEvents, __VA_ARGS__)
#define LookupEventsCallable(REQUEST)  SubmitCallable(&CloudTrailClient::LookupEvents, REQUEST)

#define PutEventSelectorsAsync(...)  SubmitAsync(&CloudTrailClient::PutEventSelectors, __VA_ARGS__)
#define PutEventSelectorsCallable(REQUEST)  SubmitCallable(&CloudTrailClient::PutEventSelectors, REQUEST)

#define PutInsightSelectorsAsync(...)  SubmitAsync(&CloudTrailClient::PutInsightSelectors, __VA_ARGS__)
#define PutInsightSelectorsCallable(REQUEST)  SubmitCallable(&CloudTrailClient::PutInsightSelectors, REQUEST)

#define RegisterOrganizationDelegatedAdminAsync(...)  SubmitAsync(&CloudTrailClient::RegisterOrganizationDelegatedAdmin, __VA_ARGS__)
#define RegisterOrganizationDelegatedAdminCallable(REQUEST)  SubmitCallable(&CloudTrailClient::RegisterOrganizationDelegatedAdmin, REQUEST)

#define RemoveTagsAsync(...)  SubmitAsync(&CloudTrailClient::RemoveTags, __VA_ARGS__)
#define RemoveTagsCallable(REQUEST)  SubmitCallable(&CloudTrailClient::RemoveTags, REQUEST)

#define RestoreEventDataStoreAsync(...)  SubmitAsync(&CloudTrailClient::RestoreEventDataStore, __VA_ARGS__)
#define RestoreEventDataStoreCallable(REQUEST)  SubmitCallable(&CloudTrailClient::RestoreEventDataStore, REQUEST)

#define StartImportAsync(...)  SubmitAsync(&CloudTrailClient::StartImport, __VA_ARGS__)
#define StartImportCallable(REQUEST)  SubmitCallable(&CloudTrailClient::StartImport, REQUEST)

#define StartLoggingAsync(...)  SubmitAsync(&CloudTrailClient::StartLogging, __VA_ARGS__)
#define StartLoggingCallable(REQUEST)  SubmitCallable(&CloudTrailClient::StartLogging, REQUEST)

#define StartQueryAsync(...)  SubmitAsync(&CloudTrailClient::StartQuery, __VA_ARGS__)
#define StartQueryCallable(REQUEST)  SubmitCallable(&CloudTrailClient::StartQuery, REQUEST)

#define StopImportAsync(...)  SubmitAsync(&CloudTrailClient::StopImport, __VA_ARGS__)
#define StopImportCallable(REQUEST)  SubmitCallable(&CloudTrailClient::StopImport, REQUEST)

#define StopLoggingAsync(...)  SubmitAsync(&CloudTrailClient::StopLogging, __VA_ARGS__)
#define StopLoggingCallable(REQUEST)  SubmitCallable(&CloudTrailClient::StopLogging, REQUEST)

#define UpdateEventDataStoreAsync(...)  SubmitAsync(&CloudTrailClient::UpdateEventDataStore, __VA_ARGS__)
#define UpdateEventDataStoreCallable(REQUEST)  SubmitCallable(&CloudTrailClient::UpdateEventDataStore, REQUEST)

#define UpdateTrailAsync(...)  SubmitAsync(&CloudTrailClient::UpdateTrail, __VA_ARGS__)
#define UpdateTrailCallable(REQUEST)  SubmitCallable(&CloudTrailClient::UpdateTrail, REQUEST)

