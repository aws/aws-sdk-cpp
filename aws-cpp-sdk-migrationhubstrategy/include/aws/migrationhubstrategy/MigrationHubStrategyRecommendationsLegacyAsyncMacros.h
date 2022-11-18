/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define GetApplicationComponentDetailsAsync(...)  SubmitAsync(&MigrationHubStrategyRecommendationsClient::GetApplicationComponentDetails, __VA_ARGS__)
#define GetApplicationComponentDetailsCallable(REQUEST)  SubmitCallable(&MigrationHubStrategyRecommendationsClient::GetApplicationComponentDetails, REQUEST)

#define GetApplicationComponentStrategiesAsync(...)  SubmitAsync(&MigrationHubStrategyRecommendationsClient::GetApplicationComponentStrategies, __VA_ARGS__)
#define GetApplicationComponentStrategiesCallable(REQUEST)  SubmitCallable(&MigrationHubStrategyRecommendationsClient::GetApplicationComponentStrategies, REQUEST)

#define GetAssessmentAsync(...)  SubmitAsync(&MigrationHubStrategyRecommendationsClient::GetAssessment, __VA_ARGS__)
#define GetAssessmentCallable(REQUEST)  SubmitCallable(&MigrationHubStrategyRecommendationsClient::GetAssessment, REQUEST)

#define GetImportFileTaskAsync(...)  SubmitAsync(&MigrationHubStrategyRecommendationsClient::GetImportFileTask, __VA_ARGS__)
#define GetImportFileTaskCallable(REQUEST)  SubmitCallable(&MigrationHubStrategyRecommendationsClient::GetImportFileTask, REQUEST)

#define GetPortfolioPreferencesAsync(...)  SubmitAsync(&MigrationHubStrategyRecommendationsClient::GetPortfolioPreferences, __VA_ARGS__)
#define GetPortfolioPreferencesCallable(REQUEST)  SubmitCallable(&MigrationHubStrategyRecommendationsClient::GetPortfolioPreferences, REQUEST)

#define GetPortfolioSummaryAsync(...)  SubmitAsync(&MigrationHubStrategyRecommendationsClient::GetPortfolioSummary, __VA_ARGS__)
#define GetPortfolioSummaryCallable(REQUEST)  SubmitCallable(&MigrationHubStrategyRecommendationsClient::GetPortfolioSummary, REQUEST)

#define GetRecommendationReportDetailsAsync(...)  SubmitAsync(&MigrationHubStrategyRecommendationsClient::GetRecommendationReportDetails, __VA_ARGS__)
#define GetRecommendationReportDetailsCallable(REQUEST)  SubmitCallable(&MigrationHubStrategyRecommendationsClient::GetRecommendationReportDetails, REQUEST)

#define GetServerDetailsAsync(...)  SubmitAsync(&MigrationHubStrategyRecommendationsClient::GetServerDetails, __VA_ARGS__)
#define GetServerDetailsCallable(REQUEST)  SubmitCallable(&MigrationHubStrategyRecommendationsClient::GetServerDetails, REQUEST)

#define GetServerStrategiesAsync(...)  SubmitAsync(&MigrationHubStrategyRecommendationsClient::GetServerStrategies, __VA_ARGS__)
#define GetServerStrategiesCallable(REQUEST)  SubmitCallable(&MigrationHubStrategyRecommendationsClient::GetServerStrategies, REQUEST)

#define ListApplicationComponentsAsync(...)  SubmitAsync(&MigrationHubStrategyRecommendationsClient::ListApplicationComponents, __VA_ARGS__)
#define ListApplicationComponentsCallable(REQUEST)  SubmitCallable(&MigrationHubStrategyRecommendationsClient::ListApplicationComponents, REQUEST)

#define ListCollectorsAsync(...)  SubmitAsync(&MigrationHubStrategyRecommendationsClient::ListCollectors, __VA_ARGS__)
#define ListCollectorsCallable(REQUEST)  SubmitCallable(&MigrationHubStrategyRecommendationsClient::ListCollectors, REQUEST)

#define ListImportFileTaskAsync(...)  SubmitAsync(&MigrationHubStrategyRecommendationsClient::ListImportFileTask, __VA_ARGS__)
#define ListImportFileTaskCallable(REQUEST)  SubmitCallable(&MigrationHubStrategyRecommendationsClient::ListImportFileTask, REQUEST)

#define ListServersAsync(...)  SubmitAsync(&MigrationHubStrategyRecommendationsClient::ListServers, __VA_ARGS__)
#define ListServersCallable(REQUEST)  SubmitCallable(&MigrationHubStrategyRecommendationsClient::ListServers, REQUEST)

#define PutPortfolioPreferencesAsync(...)  SubmitAsync(&MigrationHubStrategyRecommendationsClient::PutPortfolioPreferences, __VA_ARGS__)
#define PutPortfolioPreferencesCallable(REQUEST)  SubmitCallable(&MigrationHubStrategyRecommendationsClient::PutPortfolioPreferences, REQUEST)

#define StartAssessmentAsync(...)  SubmitAsync(&MigrationHubStrategyRecommendationsClient::StartAssessment, __VA_ARGS__)
#define StartAssessmentCallable(REQUEST)  SubmitCallable(&MigrationHubStrategyRecommendationsClient::StartAssessment, REQUEST)

#define StartImportFileTaskAsync(...)  SubmitAsync(&MigrationHubStrategyRecommendationsClient::StartImportFileTask, __VA_ARGS__)
#define StartImportFileTaskCallable(REQUEST)  SubmitCallable(&MigrationHubStrategyRecommendationsClient::StartImportFileTask, REQUEST)

#define StartRecommendationReportGenerationAsync(...)  SubmitAsync(&MigrationHubStrategyRecommendationsClient::StartRecommendationReportGeneration, __VA_ARGS__)
#define StartRecommendationReportGenerationCallable(REQUEST)  SubmitCallable(&MigrationHubStrategyRecommendationsClient::StartRecommendationReportGeneration, REQUEST)

#define StopAssessmentAsync(...)  SubmitAsync(&MigrationHubStrategyRecommendationsClient::StopAssessment, __VA_ARGS__)
#define StopAssessmentCallable(REQUEST)  SubmitCallable(&MigrationHubStrategyRecommendationsClient::StopAssessment, REQUEST)

#define UpdateApplicationComponentConfigAsync(...)  SubmitAsync(&MigrationHubStrategyRecommendationsClient::UpdateApplicationComponentConfig, __VA_ARGS__)
#define UpdateApplicationComponentConfigCallable(REQUEST)  SubmitCallable(&MigrationHubStrategyRecommendationsClient::UpdateApplicationComponentConfig, REQUEST)

#define UpdateServerConfigAsync(...)  SubmitAsync(&MigrationHubStrategyRecommendationsClient::UpdateServerConfig, __VA_ARGS__)
#define UpdateServerConfigCallable(REQUEST)  SubmitCallable(&MigrationHubStrategyRecommendationsClient::UpdateServerConfig, REQUEST)

