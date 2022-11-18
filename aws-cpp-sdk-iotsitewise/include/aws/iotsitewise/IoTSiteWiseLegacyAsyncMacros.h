/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AssociateAssetsAsync(...)  SubmitAsync(&IoTSiteWiseClient::AssociateAssets, __VA_ARGS__)
#define AssociateAssetsCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::AssociateAssets, REQUEST)

#define AssociateTimeSeriesToAssetPropertyAsync(...)  SubmitAsync(&IoTSiteWiseClient::AssociateTimeSeriesToAssetProperty, __VA_ARGS__)
#define AssociateTimeSeriesToAssetPropertyCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::AssociateTimeSeriesToAssetProperty, REQUEST)

#define BatchAssociateProjectAssetsAsync(...)  SubmitAsync(&IoTSiteWiseClient::BatchAssociateProjectAssets, __VA_ARGS__)
#define BatchAssociateProjectAssetsCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::BatchAssociateProjectAssets, REQUEST)

#define BatchDisassociateProjectAssetsAsync(...)  SubmitAsync(&IoTSiteWiseClient::BatchDisassociateProjectAssets, __VA_ARGS__)
#define BatchDisassociateProjectAssetsCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::BatchDisassociateProjectAssets, REQUEST)

#define BatchGetAssetPropertyAggregatesAsync(...)  SubmitAsync(&IoTSiteWiseClient::BatchGetAssetPropertyAggregates, __VA_ARGS__)
#define BatchGetAssetPropertyAggregatesCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::BatchGetAssetPropertyAggregates, REQUEST)

#define BatchGetAssetPropertyValueAsync(...)  SubmitAsync(&IoTSiteWiseClient::BatchGetAssetPropertyValue, __VA_ARGS__)
#define BatchGetAssetPropertyValueCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::BatchGetAssetPropertyValue, REQUEST)

#define BatchGetAssetPropertyValueHistoryAsync(...)  SubmitAsync(&IoTSiteWiseClient::BatchGetAssetPropertyValueHistory, __VA_ARGS__)
#define BatchGetAssetPropertyValueHistoryCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::BatchGetAssetPropertyValueHistory, REQUEST)

#define BatchPutAssetPropertyValueAsync(...)  SubmitAsync(&IoTSiteWiseClient::BatchPutAssetPropertyValue, __VA_ARGS__)
#define BatchPutAssetPropertyValueCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::BatchPutAssetPropertyValue, REQUEST)

#define CreateAccessPolicyAsync(...)  SubmitAsync(&IoTSiteWiseClient::CreateAccessPolicy, __VA_ARGS__)
#define CreateAccessPolicyCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::CreateAccessPolicy, REQUEST)

#define CreateAssetAsync(...)  SubmitAsync(&IoTSiteWiseClient::CreateAsset, __VA_ARGS__)
#define CreateAssetCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::CreateAsset, REQUEST)

#define CreateAssetModelAsync(...)  SubmitAsync(&IoTSiteWiseClient::CreateAssetModel, __VA_ARGS__)
#define CreateAssetModelCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::CreateAssetModel, REQUEST)

#define CreateBulkImportJobAsync(...)  SubmitAsync(&IoTSiteWiseClient::CreateBulkImportJob, __VA_ARGS__)
#define CreateBulkImportJobCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::CreateBulkImportJob, REQUEST)

#define CreateDashboardAsync(...)  SubmitAsync(&IoTSiteWiseClient::CreateDashboard, __VA_ARGS__)
#define CreateDashboardCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::CreateDashboard, REQUEST)

#define CreateGatewayAsync(...)  SubmitAsync(&IoTSiteWiseClient::CreateGateway, __VA_ARGS__)
#define CreateGatewayCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::CreateGateway, REQUEST)

#define CreatePortalAsync(...)  SubmitAsync(&IoTSiteWiseClient::CreatePortal, __VA_ARGS__)
#define CreatePortalCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::CreatePortal, REQUEST)

#define CreateProjectAsync(...)  SubmitAsync(&IoTSiteWiseClient::CreateProject, __VA_ARGS__)
#define CreateProjectCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::CreateProject, REQUEST)

#define DeleteAccessPolicyAsync(...)  SubmitAsync(&IoTSiteWiseClient::DeleteAccessPolicy, __VA_ARGS__)
#define DeleteAccessPolicyCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::DeleteAccessPolicy, REQUEST)

#define DeleteAssetAsync(...)  SubmitAsync(&IoTSiteWiseClient::DeleteAsset, __VA_ARGS__)
#define DeleteAssetCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::DeleteAsset, REQUEST)

#define DeleteAssetModelAsync(...)  SubmitAsync(&IoTSiteWiseClient::DeleteAssetModel, __VA_ARGS__)
#define DeleteAssetModelCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::DeleteAssetModel, REQUEST)

#define DeleteDashboardAsync(...)  SubmitAsync(&IoTSiteWiseClient::DeleteDashboard, __VA_ARGS__)
#define DeleteDashboardCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::DeleteDashboard, REQUEST)

#define DeleteGatewayAsync(...)  SubmitAsync(&IoTSiteWiseClient::DeleteGateway, __VA_ARGS__)
#define DeleteGatewayCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::DeleteGateway, REQUEST)

#define DeletePortalAsync(...)  SubmitAsync(&IoTSiteWiseClient::DeletePortal, __VA_ARGS__)
#define DeletePortalCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::DeletePortal, REQUEST)

#define DeleteProjectAsync(...)  SubmitAsync(&IoTSiteWiseClient::DeleteProject, __VA_ARGS__)
#define DeleteProjectCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::DeleteProject, REQUEST)

#define DeleteTimeSeriesAsync(...)  SubmitAsync(&IoTSiteWiseClient::DeleteTimeSeries, __VA_ARGS__)
#define DeleteTimeSeriesCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::DeleteTimeSeries, REQUEST)

#define DescribeAccessPolicyAsync(...)  SubmitAsync(&IoTSiteWiseClient::DescribeAccessPolicy, __VA_ARGS__)
#define DescribeAccessPolicyCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::DescribeAccessPolicy, REQUEST)

#define DescribeAssetAsync(...)  SubmitAsync(&IoTSiteWiseClient::DescribeAsset, __VA_ARGS__)
#define DescribeAssetCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::DescribeAsset, REQUEST)

#define DescribeAssetModelAsync(...)  SubmitAsync(&IoTSiteWiseClient::DescribeAssetModel, __VA_ARGS__)
#define DescribeAssetModelCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::DescribeAssetModel, REQUEST)

#define DescribeAssetPropertyAsync(...)  SubmitAsync(&IoTSiteWiseClient::DescribeAssetProperty, __VA_ARGS__)
#define DescribeAssetPropertyCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::DescribeAssetProperty, REQUEST)

#define DescribeBulkImportJobAsync(...)  SubmitAsync(&IoTSiteWiseClient::DescribeBulkImportJob, __VA_ARGS__)
#define DescribeBulkImportJobCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::DescribeBulkImportJob, REQUEST)

#define DescribeDashboardAsync(...)  SubmitAsync(&IoTSiteWiseClient::DescribeDashboard, __VA_ARGS__)
#define DescribeDashboardCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::DescribeDashboard, REQUEST)

#define DescribeDefaultEncryptionConfigurationAsync(...)  SubmitAsync(&IoTSiteWiseClient::DescribeDefaultEncryptionConfiguration, __VA_ARGS__)
#define DescribeDefaultEncryptionConfigurationCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::DescribeDefaultEncryptionConfiguration, REQUEST)

#define DescribeGatewayAsync(...)  SubmitAsync(&IoTSiteWiseClient::DescribeGateway, __VA_ARGS__)
#define DescribeGatewayCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::DescribeGateway, REQUEST)

#define DescribeGatewayCapabilityConfigurationAsync(...)  SubmitAsync(&IoTSiteWiseClient::DescribeGatewayCapabilityConfiguration, __VA_ARGS__)
#define DescribeGatewayCapabilityConfigurationCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::DescribeGatewayCapabilityConfiguration, REQUEST)

#define DescribeLoggingOptionsAsync(...)  SubmitAsync(&IoTSiteWiseClient::DescribeLoggingOptions, __VA_ARGS__)
#define DescribeLoggingOptionsCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::DescribeLoggingOptions, REQUEST)

#define DescribePortalAsync(...)  SubmitAsync(&IoTSiteWiseClient::DescribePortal, __VA_ARGS__)
#define DescribePortalCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::DescribePortal, REQUEST)

#define DescribeProjectAsync(...)  SubmitAsync(&IoTSiteWiseClient::DescribeProject, __VA_ARGS__)
#define DescribeProjectCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::DescribeProject, REQUEST)

#define DescribeStorageConfigurationAsync(...)  SubmitAsync(&IoTSiteWiseClient::DescribeStorageConfiguration, __VA_ARGS__)
#define DescribeStorageConfigurationCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::DescribeStorageConfiguration, REQUEST)

#define DescribeTimeSeriesAsync(...)  SubmitAsync(&IoTSiteWiseClient::DescribeTimeSeries, __VA_ARGS__)
#define DescribeTimeSeriesCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::DescribeTimeSeries, REQUEST)

#define DisassociateAssetsAsync(...)  SubmitAsync(&IoTSiteWiseClient::DisassociateAssets, __VA_ARGS__)
#define DisassociateAssetsCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::DisassociateAssets, REQUEST)

#define DisassociateTimeSeriesFromAssetPropertyAsync(...)  SubmitAsync(&IoTSiteWiseClient::DisassociateTimeSeriesFromAssetProperty, __VA_ARGS__)
#define DisassociateTimeSeriesFromAssetPropertyCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::DisassociateTimeSeriesFromAssetProperty, REQUEST)

#define GetAssetPropertyAggregatesAsync(...)  SubmitAsync(&IoTSiteWiseClient::GetAssetPropertyAggregates, __VA_ARGS__)
#define GetAssetPropertyAggregatesCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::GetAssetPropertyAggregates, REQUEST)

#define GetAssetPropertyValueAsync(...)  SubmitAsync(&IoTSiteWiseClient::GetAssetPropertyValue, __VA_ARGS__)
#define GetAssetPropertyValueCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::GetAssetPropertyValue, REQUEST)

#define GetAssetPropertyValueHistoryAsync(...)  SubmitAsync(&IoTSiteWiseClient::GetAssetPropertyValueHistory, __VA_ARGS__)
#define GetAssetPropertyValueHistoryCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::GetAssetPropertyValueHistory, REQUEST)

#define GetInterpolatedAssetPropertyValuesAsync(...)  SubmitAsync(&IoTSiteWiseClient::GetInterpolatedAssetPropertyValues, __VA_ARGS__)
#define GetInterpolatedAssetPropertyValuesCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::GetInterpolatedAssetPropertyValues, REQUEST)

#define ListAccessPoliciesAsync(...)  SubmitAsync(&IoTSiteWiseClient::ListAccessPolicies, __VA_ARGS__)
#define ListAccessPoliciesCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::ListAccessPolicies, REQUEST)

#define ListAssetModelPropertiesAsync(...)  SubmitAsync(&IoTSiteWiseClient::ListAssetModelProperties, __VA_ARGS__)
#define ListAssetModelPropertiesCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::ListAssetModelProperties, REQUEST)

#define ListAssetModelsAsync(...)  SubmitAsync(&IoTSiteWiseClient::ListAssetModels, __VA_ARGS__)
#define ListAssetModelsCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::ListAssetModels, REQUEST)

#define ListAssetPropertiesAsync(...)  SubmitAsync(&IoTSiteWiseClient::ListAssetProperties, __VA_ARGS__)
#define ListAssetPropertiesCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::ListAssetProperties, REQUEST)

#define ListAssetRelationshipsAsync(...)  SubmitAsync(&IoTSiteWiseClient::ListAssetRelationships, __VA_ARGS__)
#define ListAssetRelationshipsCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::ListAssetRelationships, REQUEST)

#define ListAssetsAsync(...)  SubmitAsync(&IoTSiteWiseClient::ListAssets, __VA_ARGS__)
#define ListAssetsCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::ListAssets, REQUEST)

#define ListAssociatedAssetsAsync(...)  SubmitAsync(&IoTSiteWiseClient::ListAssociatedAssets, __VA_ARGS__)
#define ListAssociatedAssetsCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::ListAssociatedAssets, REQUEST)

#define ListBulkImportJobsAsync(...)  SubmitAsync(&IoTSiteWiseClient::ListBulkImportJobs, __VA_ARGS__)
#define ListBulkImportJobsCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::ListBulkImportJobs, REQUEST)

#define ListDashboardsAsync(...)  SubmitAsync(&IoTSiteWiseClient::ListDashboards, __VA_ARGS__)
#define ListDashboardsCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::ListDashboards, REQUEST)

#define ListGatewaysAsync(...)  SubmitAsync(&IoTSiteWiseClient::ListGateways, __VA_ARGS__)
#define ListGatewaysCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::ListGateways, REQUEST)

#define ListPortalsAsync(...)  SubmitAsync(&IoTSiteWiseClient::ListPortals, __VA_ARGS__)
#define ListPortalsCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::ListPortals, REQUEST)

#define ListProjectAssetsAsync(...)  SubmitAsync(&IoTSiteWiseClient::ListProjectAssets, __VA_ARGS__)
#define ListProjectAssetsCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::ListProjectAssets, REQUEST)

#define ListProjectsAsync(...)  SubmitAsync(&IoTSiteWiseClient::ListProjects, __VA_ARGS__)
#define ListProjectsCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::ListProjects, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&IoTSiteWiseClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::ListTagsForResource, REQUEST)

#define ListTimeSeriesAsync(...)  SubmitAsync(&IoTSiteWiseClient::ListTimeSeries, __VA_ARGS__)
#define ListTimeSeriesCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::ListTimeSeries, REQUEST)

#define PutDefaultEncryptionConfigurationAsync(...)  SubmitAsync(&IoTSiteWiseClient::PutDefaultEncryptionConfiguration, __VA_ARGS__)
#define PutDefaultEncryptionConfigurationCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::PutDefaultEncryptionConfiguration, REQUEST)

#define PutLoggingOptionsAsync(...)  SubmitAsync(&IoTSiteWiseClient::PutLoggingOptions, __VA_ARGS__)
#define PutLoggingOptionsCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::PutLoggingOptions, REQUEST)

#define PutStorageConfigurationAsync(...)  SubmitAsync(&IoTSiteWiseClient::PutStorageConfiguration, __VA_ARGS__)
#define PutStorageConfigurationCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::PutStorageConfiguration, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&IoTSiteWiseClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&IoTSiteWiseClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::UntagResource, REQUEST)

#define UpdateAccessPolicyAsync(...)  SubmitAsync(&IoTSiteWiseClient::UpdateAccessPolicy, __VA_ARGS__)
#define UpdateAccessPolicyCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::UpdateAccessPolicy, REQUEST)

#define UpdateAssetAsync(...)  SubmitAsync(&IoTSiteWiseClient::UpdateAsset, __VA_ARGS__)
#define UpdateAssetCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::UpdateAsset, REQUEST)

#define UpdateAssetModelAsync(...)  SubmitAsync(&IoTSiteWiseClient::UpdateAssetModel, __VA_ARGS__)
#define UpdateAssetModelCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::UpdateAssetModel, REQUEST)

#define UpdateAssetPropertyAsync(...)  SubmitAsync(&IoTSiteWiseClient::UpdateAssetProperty, __VA_ARGS__)
#define UpdateAssetPropertyCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::UpdateAssetProperty, REQUEST)

#define UpdateDashboardAsync(...)  SubmitAsync(&IoTSiteWiseClient::UpdateDashboard, __VA_ARGS__)
#define UpdateDashboardCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::UpdateDashboard, REQUEST)

#define UpdateGatewayAsync(...)  SubmitAsync(&IoTSiteWiseClient::UpdateGateway, __VA_ARGS__)
#define UpdateGatewayCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::UpdateGateway, REQUEST)

#define UpdateGatewayCapabilityConfigurationAsync(...)  SubmitAsync(&IoTSiteWiseClient::UpdateGatewayCapabilityConfiguration, __VA_ARGS__)
#define UpdateGatewayCapabilityConfigurationCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::UpdateGatewayCapabilityConfiguration, REQUEST)

#define UpdatePortalAsync(...)  SubmitAsync(&IoTSiteWiseClient::UpdatePortal, __VA_ARGS__)
#define UpdatePortalCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::UpdatePortal, REQUEST)

#define UpdateProjectAsync(...)  SubmitAsync(&IoTSiteWiseClient::UpdateProject, __VA_ARGS__)
#define UpdateProjectCallable(REQUEST)  SubmitCallable(&IoTSiteWiseClient::UpdateProject, REQUEST)

