/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateApplicationInstanceAsync(...)  SubmitAsync(&PanoramaClient::CreateApplicationInstance, __VA_ARGS__)
#define CreateApplicationInstanceCallable(REQUEST)  SubmitCallable(&PanoramaClient::CreateApplicationInstance, REQUEST)

#define CreateJobForDevicesAsync(...)  SubmitAsync(&PanoramaClient::CreateJobForDevices, __VA_ARGS__)
#define CreateJobForDevicesCallable(REQUEST)  SubmitCallable(&PanoramaClient::CreateJobForDevices, REQUEST)

#define CreateNodeFromTemplateJobAsync(...)  SubmitAsync(&PanoramaClient::CreateNodeFromTemplateJob, __VA_ARGS__)
#define CreateNodeFromTemplateJobCallable(REQUEST)  SubmitCallable(&PanoramaClient::CreateNodeFromTemplateJob, REQUEST)

#define CreatePackageAsync(...)  SubmitAsync(&PanoramaClient::CreatePackage, __VA_ARGS__)
#define CreatePackageCallable(REQUEST)  SubmitCallable(&PanoramaClient::CreatePackage, REQUEST)

#define CreatePackageImportJobAsync(...)  SubmitAsync(&PanoramaClient::CreatePackageImportJob, __VA_ARGS__)
#define CreatePackageImportJobCallable(REQUEST)  SubmitCallable(&PanoramaClient::CreatePackageImportJob, REQUEST)

#define DeleteDeviceAsync(...)  SubmitAsync(&PanoramaClient::DeleteDevice, __VA_ARGS__)
#define DeleteDeviceCallable(REQUEST)  SubmitCallable(&PanoramaClient::DeleteDevice, REQUEST)

#define DeletePackageAsync(...)  SubmitAsync(&PanoramaClient::DeletePackage, __VA_ARGS__)
#define DeletePackageCallable(REQUEST)  SubmitCallable(&PanoramaClient::DeletePackage, REQUEST)

#define DeregisterPackageVersionAsync(...)  SubmitAsync(&PanoramaClient::DeregisterPackageVersion, __VA_ARGS__)
#define DeregisterPackageVersionCallable(REQUEST)  SubmitCallable(&PanoramaClient::DeregisterPackageVersion, REQUEST)

#define DescribeApplicationInstanceAsync(...)  SubmitAsync(&PanoramaClient::DescribeApplicationInstance, __VA_ARGS__)
#define DescribeApplicationInstanceCallable(REQUEST)  SubmitCallable(&PanoramaClient::DescribeApplicationInstance, REQUEST)

#define DescribeApplicationInstanceDetailsAsync(...)  SubmitAsync(&PanoramaClient::DescribeApplicationInstanceDetails, __VA_ARGS__)
#define DescribeApplicationInstanceDetailsCallable(REQUEST)  SubmitCallable(&PanoramaClient::DescribeApplicationInstanceDetails, REQUEST)

#define DescribeDeviceAsync(...)  SubmitAsync(&PanoramaClient::DescribeDevice, __VA_ARGS__)
#define DescribeDeviceCallable(REQUEST)  SubmitCallable(&PanoramaClient::DescribeDevice, REQUEST)

#define DescribeDeviceJobAsync(...)  SubmitAsync(&PanoramaClient::DescribeDeviceJob, __VA_ARGS__)
#define DescribeDeviceJobCallable(REQUEST)  SubmitCallable(&PanoramaClient::DescribeDeviceJob, REQUEST)

#define DescribeNodeAsync(...)  SubmitAsync(&PanoramaClient::DescribeNode, __VA_ARGS__)
#define DescribeNodeCallable(REQUEST)  SubmitCallable(&PanoramaClient::DescribeNode, REQUEST)

#define DescribeNodeFromTemplateJobAsync(...)  SubmitAsync(&PanoramaClient::DescribeNodeFromTemplateJob, __VA_ARGS__)
#define DescribeNodeFromTemplateJobCallable(REQUEST)  SubmitCallable(&PanoramaClient::DescribeNodeFromTemplateJob, REQUEST)

#define DescribePackageAsync(...)  SubmitAsync(&PanoramaClient::DescribePackage, __VA_ARGS__)
#define DescribePackageCallable(REQUEST)  SubmitCallable(&PanoramaClient::DescribePackage, REQUEST)

#define DescribePackageImportJobAsync(...)  SubmitAsync(&PanoramaClient::DescribePackageImportJob, __VA_ARGS__)
#define DescribePackageImportJobCallable(REQUEST)  SubmitCallable(&PanoramaClient::DescribePackageImportJob, REQUEST)

#define DescribePackageVersionAsync(...)  SubmitAsync(&PanoramaClient::DescribePackageVersion, __VA_ARGS__)
#define DescribePackageVersionCallable(REQUEST)  SubmitCallable(&PanoramaClient::DescribePackageVersion, REQUEST)

#define ListApplicationInstanceDependenciesAsync(...)  SubmitAsync(&PanoramaClient::ListApplicationInstanceDependencies, __VA_ARGS__)
#define ListApplicationInstanceDependenciesCallable(REQUEST)  SubmitCallable(&PanoramaClient::ListApplicationInstanceDependencies, REQUEST)

#define ListApplicationInstanceNodeInstancesAsync(...)  SubmitAsync(&PanoramaClient::ListApplicationInstanceNodeInstances, __VA_ARGS__)
#define ListApplicationInstanceNodeInstancesCallable(REQUEST)  SubmitCallable(&PanoramaClient::ListApplicationInstanceNodeInstances, REQUEST)

#define ListApplicationInstancesAsync(...)  SubmitAsync(&PanoramaClient::ListApplicationInstances, __VA_ARGS__)
#define ListApplicationInstancesCallable(REQUEST)  SubmitCallable(&PanoramaClient::ListApplicationInstances, REQUEST)

#define ListDevicesAsync(...)  SubmitAsync(&PanoramaClient::ListDevices, __VA_ARGS__)
#define ListDevicesCallable(REQUEST)  SubmitCallable(&PanoramaClient::ListDevices, REQUEST)

#define ListDevicesJobsAsync(...)  SubmitAsync(&PanoramaClient::ListDevicesJobs, __VA_ARGS__)
#define ListDevicesJobsCallable(REQUEST)  SubmitCallable(&PanoramaClient::ListDevicesJobs, REQUEST)

#define ListNodeFromTemplateJobsAsync(...)  SubmitAsync(&PanoramaClient::ListNodeFromTemplateJobs, __VA_ARGS__)
#define ListNodeFromTemplateJobsCallable(REQUEST)  SubmitCallable(&PanoramaClient::ListNodeFromTemplateJobs, REQUEST)

#define ListNodesAsync(...)  SubmitAsync(&PanoramaClient::ListNodes, __VA_ARGS__)
#define ListNodesCallable(REQUEST)  SubmitCallable(&PanoramaClient::ListNodes, REQUEST)

#define ListPackageImportJobsAsync(...)  SubmitAsync(&PanoramaClient::ListPackageImportJobs, __VA_ARGS__)
#define ListPackageImportJobsCallable(REQUEST)  SubmitCallable(&PanoramaClient::ListPackageImportJobs, REQUEST)

#define ListPackagesAsync(...)  SubmitAsync(&PanoramaClient::ListPackages, __VA_ARGS__)
#define ListPackagesCallable(REQUEST)  SubmitCallable(&PanoramaClient::ListPackages, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&PanoramaClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&PanoramaClient::ListTagsForResource, REQUEST)

#define ProvisionDeviceAsync(...)  SubmitAsync(&PanoramaClient::ProvisionDevice, __VA_ARGS__)
#define ProvisionDeviceCallable(REQUEST)  SubmitCallable(&PanoramaClient::ProvisionDevice, REQUEST)

#define RegisterPackageVersionAsync(...)  SubmitAsync(&PanoramaClient::RegisterPackageVersion, __VA_ARGS__)
#define RegisterPackageVersionCallable(REQUEST)  SubmitCallable(&PanoramaClient::RegisterPackageVersion, REQUEST)

#define RemoveApplicationInstanceAsync(...)  SubmitAsync(&PanoramaClient::RemoveApplicationInstance, __VA_ARGS__)
#define RemoveApplicationInstanceCallable(REQUEST)  SubmitCallable(&PanoramaClient::RemoveApplicationInstance, REQUEST)

#define SignalApplicationInstanceNodeInstancesAsync(...)  SubmitAsync(&PanoramaClient::SignalApplicationInstanceNodeInstances, __VA_ARGS__)
#define SignalApplicationInstanceNodeInstancesCallable(REQUEST)  SubmitCallable(&PanoramaClient::SignalApplicationInstanceNodeInstances, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&PanoramaClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&PanoramaClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&PanoramaClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&PanoramaClient::UntagResource, REQUEST)

#define UpdateDeviceMetadataAsync(...)  SubmitAsync(&PanoramaClient::UpdateDeviceMetadata, __VA_ARGS__)
#define UpdateDeviceMetadataCallable(REQUEST)  SubmitCallable(&PanoramaClient::UpdateDeviceMetadata, REQUEST)

