/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define AllocateStaticIpAsync(...)  SubmitAsync(&LightsailClient::AllocateStaticIp, __VA_ARGS__)
#define AllocateStaticIpCallable(REQUEST)  SubmitCallable(&LightsailClient::AllocateStaticIp, REQUEST)

#define AttachCertificateToDistributionAsync(...)  SubmitAsync(&LightsailClient::AttachCertificateToDistribution, __VA_ARGS__)
#define AttachCertificateToDistributionCallable(REQUEST)  SubmitCallable(&LightsailClient::AttachCertificateToDistribution, REQUEST)

#define AttachDiskAsync(...)  SubmitAsync(&LightsailClient::AttachDisk, __VA_ARGS__)
#define AttachDiskCallable(REQUEST)  SubmitCallable(&LightsailClient::AttachDisk, REQUEST)

#define AttachInstancesToLoadBalancerAsync(...)  SubmitAsync(&LightsailClient::AttachInstancesToLoadBalancer, __VA_ARGS__)
#define AttachInstancesToLoadBalancerCallable(REQUEST)  SubmitCallable(&LightsailClient::AttachInstancesToLoadBalancer, REQUEST)

#define AttachLoadBalancerTlsCertificateAsync(...)  SubmitAsync(&LightsailClient::AttachLoadBalancerTlsCertificate, __VA_ARGS__)
#define AttachLoadBalancerTlsCertificateCallable(REQUEST)  SubmitCallable(&LightsailClient::AttachLoadBalancerTlsCertificate, REQUEST)

#define AttachStaticIpAsync(...)  SubmitAsync(&LightsailClient::AttachStaticIp, __VA_ARGS__)
#define AttachStaticIpCallable(REQUEST)  SubmitCallable(&LightsailClient::AttachStaticIp, REQUEST)

#define CloseInstancePublicPortsAsync(...)  SubmitAsync(&LightsailClient::CloseInstancePublicPorts, __VA_ARGS__)
#define CloseInstancePublicPortsCallable(REQUEST)  SubmitCallable(&LightsailClient::CloseInstancePublicPorts, REQUEST)

#define CopySnapshotAsync(...)  SubmitAsync(&LightsailClient::CopySnapshot, __VA_ARGS__)
#define CopySnapshotCallable(REQUEST)  SubmitCallable(&LightsailClient::CopySnapshot, REQUEST)

#define CreateBucketAsync(...)  SubmitAsync(&LightsailClient::CreateBucket, __VA_ARGS__)
#define CreateBucketCallable(REQUEST)  SubmitCallable(&LightsailClient::CreateBucket, REQUEST)

#define CreateBucketAccessKeyAsync(...)  SubmitAsync(&LightsailClient::CreateBucketAccessKey, __VA_ARGS__)
#define CreateBucketAccessKeyCallable(REQUEST)  SubmitCallable(&LightsailClient::CreateBucketAccessKey, REQUEST)

#define CreateCertificateAsync(...)  SubmitAsync(&LightsailClient::CreateCertificate, __VA_ARGS__)
#define CreateCertificateCallable(REQUEST)  SubmitCallable(&LightsailClient::CreateCertificate, REQUEST)

#define CreateCloudFormationStackAsync(...)  SubmitAsync(&LightsailClient::CreateCloudFormationStack, __VA_ARGS__)
#define CreateCloudFormationStackCallable(REQUEST)  SubmitCallable(&LightsailClient::CreateCloudFormationStack, REQUEST)

#define CreateContactMethodAsync(...)  SubmitAsync(&LightsailClient::CreateContactMethod, __VA_ARGS__)
#define CreateContactMethodCallable(REQUEST)  SubmitCallable(&LightsailClient::CreateContactMethod, REQUEST)

#define CreateContainerServiceAsync(...)  SubmitAsync(&LightsailClient::CreateContainerService, __VA_ARGS__)
#define CreateContainerServiceCallable(REQUEST)  SubmitCallable(&LightsailClient::CreateContainerService, REQUEST)

#define CreateContainerServiceDeploymentAsync(...)  SubmitAsync(&LightsailClient::CreateContainerServiceDeployment, __VA_ARGS__)
#define CreateContainerServiceDeploymentCallable(REQUEST)  SubmitCallable(&LightsailClient::CreateContainerServiceDeployment, REQUEST)

#define CreateContainerServiceRegistryLoginAsync(...)  SubmitAsync(&LightsailClient::CreateContainerServiceRegistryLogin, __VA_ARGS__)
#define CreateContainerServiceRegistryLoginCallable(REQUEST)  SubmitCallable(&LightsailClient::CreateContainerServiceRegistryLogin, REQUEST)

#define CreateDiskAsync(...)  SubmitAsync(&LightsailClient::CreateDisk, __VA_ARGS__)
#define CreateDiskCallable(REQUEST)  SubmitCallable(&LightsailClient::CreateDisk, REQUEST)

#define CreateDiskFromSnapshotAsync(...)  SubmitAsync(&LightsailClient::CreateDiskFromSnapshot, __VA_ARGS__)
#define CreateDiskFromSnapshotCallable(REQUEST)  SubmitCallable(&LightsailClient::CreateDiskFromSnapshot, REQUEST)

#define CreateDiskSnapshotAsync(...)  SubmitAsync(&LightsailClient::CreateDiskSnapshot, __VA_ARGS__)
#define CreateDiskSnapshotCallable(REQUEST)  SubmitCallable(&LightsailClient::CreateDiskSnapshot, REQUEST)

#define CreateDistributionAsync(...)  SubmitAsync(&LightsailClient::CreateDistribution, __VA_ARGS__)
#define CreateDistributionCallable(REQUEST)  SubmitCallable(&LightsailClient::CreateDistribution, REQUEST)

#define CreateDomainAsync(...)  SubmitAsync(&LightsailClient::CreateDomain, __VA_ARGS__)
#define CreateDomainCallable(REQUEST)  SubmitCallable(&LightsailClient::CreateDomain, REQUEST)

#define CreateDomainEntryAsync(...)  SubmitAsync(&LightsailClient::CreateDomainEntry, __VA_ARGS__)
#define CreateDomainEntryCallable(REQUEST)  SubmitCallable(&LightsailClient::CreateDomainEntry, REQUEST)

#define CreateInstanceSnapshotAsync(...)  SubmitAsync(&LightsailClient::CreateInstanceSnapshot, __VA_ARGS__)
#define CreateInstanceSnapshotCallable(REQUEST)  SubmitCallable(&LightsailClient::CreateInstanceSnapshot, REQUEST)

#define CreateInstancesAsync(...)  SubmitAsync(&LightsailClient::CreateInstances, __VA_ARGS__)
#define CreateInstancesCallable(REQUEST)  SubmitCallable(&LightsailClient::CreateInstances, REQUEST)

#define CreateInstancesFromSnapshotAsync(...)  SubmitAsync(&LightsailClient::CreateInstancesFromSnapshot, __VA_ARGS__)
#define CreateInstancesFromSnapshotCallable(REQUEST)  SubmitCallable(&LightsailClient::CreateInstancesFromSnapshot, REQUEST)

#define CreateKeyPairAsync(...)  SubmitAsync(&LightsailClient::CreateKeyPair, __VA_ARGS__)
#define CreateKeyPairCallable(REQUEST)  SubmitCallable(&LightsailClient::CreateKeyPair, REQUEST)

#define CreateLoadBalancerAsync(...)  SubmitAsync(&LightsailClient::CreateLoadBalancer, __VA_ARGS__)
#define CreateLoadBalancerCallable(REQUEST)  SubmitCallable(&LightsailClient::CreateLoadBalancer, REQUEST)

#define CreateLoadBalancerTlsCertificateAsync(...)  SubmitAsync(&LightsailClient::CreateLoadBalancerTlsCertificate, __VA_ARGS__)
#define CreateLoadBalancerTlsCertificateCallable(REQUEST)  SubmitCallable(&LightsailClient::CreateLoadBalancerTlsCertificate, REQUEST)

#define CreateRelationalDatabaseAsync(...)  SubmitAsync(&LightsailClient::CreateRelationalDatabase, __VA_ARGS__)
#define CreateRelationalDatabaseCallable(REQUEST)  SubmitCallable(&LightsailClient::CreateRelationalDatabase, REQUEST)

#define CreateRelationalDatabaseFromSnapshotAsync(...)  SubmitAsync(&LightsailClient::CreateRelationalDatabaseFromSnapshot, __VA_ARGS__)
#define CreateRelationalDatabaseFromSnapshotCallable(REQUEST)  SubmitCallable(&LightsailClient::CreateRelationalDatabaseFromSnapshot, REQUEST)

#define CreateRelationalDatabaseSnapshotAsync(...)  SubmitAsync(&LightsailClient::CreateRelationalDatabaseSnapshot, __VA_ARGS__)
#define CreateRelationalDatabaseSnapshotCallable(REQUEST)  SubmitCallable(&LightsailClient::CreateRelationalDatabaseSnapshot, REQUEST)

#define DeleteAlarmAsync(...)  SubmitAsync(&LightsailClient::DeleteAlarm, __VA_ARGS__)
#define DeleteAlarmCallable(REQUEST)  SubmitCallable(&LightsailClient::DeleteAlarm, REQUEST)

#define DeleteAutoSnapshotAsync(...)  SubmitAsync(&LightsailClient::DeleteAutoSnapshot, __VA_ARGS__)
#define DeleteAutoSnapshotCallable(REQUEST)  SubmitCallable(&LightsailClient::DeleteAutoSnapshot, REQUEST)

#define DeleteBucketAsync(...)  SubmitAsync(&LightsailClient::DeleteBucket, __VA_ARGS__)
#define DeleteBucketCallable(REQUEST)  SubmitCallable(&LightsailClient::DeleteBucket, REQUEST)

#define DeleteBucketAccessKeyAsync(...)  SubmitAsync(&LightsailClient::DeleteBucketAccessKey, __VA_ARGS__)
#define DeleteBucketAccessKeyCallable(REQUEST)  SubmitCallable(&LightsailClient::DeleteBucketAccessKey, REQUEST)

#define DeleteCertificateAsync(...)  SubmitAsync(&LightsailClient::DeleteCertificate, __VA_ARGS__)
#define DeleteCertificateCallable(REQUEST)  SubmitCallable(&LightsailClient::DeleteCertificate, REQUEST)

#define DeleteContactMethodAsync(...)  SubmitAsync(&LightsailClient::DeleteContactMethod, __VA_ARGS__)
#define DeleteContactMethodCallable(REQUEST)  SubmitCallable(&LightsailClient::DeleteContactMethod, REQUEST)

#define DeleteContainerImageAsync(...)  SubmitAsync(&LightsailClient::DeleteContainerImage, __VA_ARGS__)
#define DeleteContainerImageCallable(REQUEST)  SubmitCallable(&LightsailClient::DeleteContainerImage, REQUEST)

#define DeleteContainerServiceAsync(...)  SubmitAsync(&LightsailClient::DeleteContainerService, __VA_ARGS__)
#define DeleteContainerServiceCallable(REQUEST)  SubmitCallable(&LightsailClient::DeleteContainerService, REQUEST)

#define DeleteDiskAsync(...)  SubmitAsync(&LightsailClient::DeleteDisk, __VA_ARGS__)
#define DeleteDiskCallable(REQUEST)  SubmitCallable(&LightsailClient::DeleteDisk, REQUEST)

#define DeleteDiskSnapshotAsync(...)  SubmitAsync(&LightsailClient::DeleteDiskSnapshot, __VA_ARGS__)
#define DeleteDiskSnapshotCallable(REQUEST)  SubmitCallable(&LightsailClient::DeleteDiskSnapshot, REQUEST)

#define DeleteDistributionAsync(...)  SubmitAsync(&LightsailClient::DeleteDistribution, __VA_ARGS__)
#define DeleteDistributionCallable(REQUEST)  SubmitCallable(&LightsailClient::DeleteDistribution, REQUEST)

#define DeleteDomainAsync(...)  SubmitAsync(&LightsailClient::DeleteDomain, __VA_ARGS__)
#define DeleteDomainCallable(REQUEST)  SubmitCallable(&LightsailClient::DeleteDomain, REQUEST)

#define DeleteDomainEntryAsync(...)  SubmitAsync(&LightsailClient::DeleteDomainEntry, __VA_ARGS__)
#define DeleteDomainEntryCallable(REQUEST)  SubmitCallable(&LightsailClient::DeleteDomainEntry, REQUEST)

#define DeleteInstanceAsync(...)  SubmitAsync(&LightsailClient::DeleteInstance, __VA_ARGS__)
#define DeleteInstanceCallable(REQUEST)  SubmitCallable(&LightsailClient::DeleteInstance, REQUEST)

#define DeleteInstanceSnapshotAsync(...)  SubmitAsync(&LightsailClient::DeleteInstanceSnapshot, __VA_ARGS__)
#define DeleteInstanceSnapshotCallable(REQUEST)  SubmitCallable(&LightsailClient::DeleteInstanceSnapshot, REQUEST)

#define DeleteKeyPairAsync(...)  SubmitAsync(&LightsailClient::DeleteKeyPair, __VA_ARGS__)
#define DeleteKeyPairCallable(REQUEST)  SubmitCallable(&LightsailClient::DeleteKeyPair, REQUEST)

#define DeleteKnownHostKeysAsync(...)  SubmitAsync(&LightsailClient::DeleteKnownHostKeys, __VA_ARGS__)
#define DeleteKnownHostKeysCallable(REQUEST)  SubmitCallable(&LightsailClient::DeleteKnownHostKeys, REQUEST)

#define DeleteLoadBalancerAsync(...)  SubmitAsync(&LightsailClient::DeleteLoadBalancer, __VA_ARGS__)
#define DeleteLoadBalancerCallable(REQUEST)  SubmitCallable(&LightsailClient::DeleteLoadBalancer, REQUEST)

#define DeleteLoadBalancerTlsCertificateAsync(...)  SubmitAsync(&LightsailClient::DeleteLoadBalancerTlsCertificate, __VA_ARGS__)
#define DeleteLoadBalancerTlsCertificateCallable(REQUEST)  SubmitCallable(&LightsailClient::DeleteLoadBalancerTlsCertificate, REQUEST)

#define DeleteRelationalDatabaseAsync(...)  SubmitAsync(&LightsailClient::DeleteRelationalDatabase, __VA_ARGS__)
#define DeleteRelationalDatabaseCallable(REQUEST)  SubmitCallable(&LightsailClient::DeleteRelationalDatabase, REQUEST)

#define DeleteRelationalDatabaseSnapshotAsync(...)  SubmitAsync(&LightsailClient::DeleteRelationalDatabaseSnapshot, __VA_ARGS__)
#define DeleteRelationalDatabaseSnapshotCallable(REQUEST)  SubmitCallable(&LightsailClient::DeleteRelationalDatabaseSnapshot, REQUEST)

#define DetachCertificateFromDistributionAsync(...)  SubmitAsync(&LightsailClient::DetachCertificateFromDistribution, __VA_ARGS__)
#define DetachCertificateFromDistributionCallable(REQUEST)  SubmitCallable(&LightsailClient::DetachCertificateFromDistribution, REQUEST)

#define DetachDiskAsync(...)  SubmitAsync(&LightsailClient::DetachDisk, __VA_ARGS__)
#define DetachDiskCallable(REQUEST)  SubmitCallable(&LightsailClient::DetachDisk, REQUEST)

#define DetachInstancesFromLoadBalancerAsync(...)  SubmitAsync(&LightsailClient::DetachInstancesFromLoadBalancer, __VA_ARGS__)
#define DetachInstancesFromLoadBalancerCallable(REQUEST)  SubmitCallable(&LightsailClient::DetachInstancesFromLoadBalancer, REQUEST)

#define DetachStaticIpAsync(...)  SubmitAsync(&LightsailClient::DetachStaticIp, __VA_ARGS__)
#define DetachStaticIpCallable(REQUEST)  SubmitCallable(&LightsailClient::DetachStaticIp, REQUEST)

#define DisableAddOnAsync(...)  SubmitAsync(&LightsailClient::DisableAddOn, __VA_ARGS__)
#define DisableAddOnCallable(REQUEST)  SubmitCallable(&LightsailClient::DisableAddOn, REQUEST)

#define DownloadDefaultKeyPairAsync(...)  SubmitAsync(&LightsailClient::DownloadDefaultKeyPair, __VA_ARGS__)
#define DownloadDefaultKeyPairCallable(REQUEST)  SubmitCallable(&LightsailClient::DownloadDefaultKeyPair, REQUEST)

#define EnableAddOnAsync(...)  SubmitAsync(&LightsailClient::EnableAddOn, __VA_ARGS__)
#define EnableAddOnCallable(REQUEST)  SubmitCallable(&LightsailClient::EnableAddOn, REQUEST)

#define ExportSnapshotAsync(...)  SubmitAsync(&LightsailClient::ExportSnapshot, __VA_ARGS__)
#define ExportSnapshotCallable(REQUEST)  SubmitCallable(&LightsailClient::ExportSnapshot, REQUEST)

#define GetActiveNamesAsync(...)  SubmitAsync(&LightsailClient::GetActiveNames, __VA_ARGS__)
#define GetActiveNamesCallable(REQUEST)  SubmitCallable(&LightsailClient::GetActiveNames, REQUEST)

#define GetAlarmsAsync(...)  SubmitAsync(&LightsailClient::GetAlarms, __VA_ARGS__)
#define GetAlarmsCallable(REQUEST)  SubmitCallable(&LightsailClient::GetAlarms, REQUEST)

#define GetAutoSnapshotsAsync(...)  SubmitAsync(&LightsailClient::GetAutoSnapshots, __VA_ARGS__)
#define GetAutoSnapshotsCallable(REQUEST)  SubmitCallable(&LightsailClient::GetAutoSnapshots, REQUEST)

#define GetBlueprintsAsync(...)  SubmitAsync(&LightsailClient::GetBlueprints, __VA_ARGS__)
#define GetBlueprintsCallable(REQUEST)  SubmitCallable(&LightsailClient::GetBlueprints, REQUEST)

#define GetBucketAccessKeysAsync(...)  SubmitAsync(&LightsailClient::GetBucketAccessKeys, __VA_ARGS__)
#define GetBucketAccessKeysCallable(REQUEST)  SubmitCallable(&LightsailClient::GetBucketAccessKeys, REQUEST)

#define GetBucketBundlesAsync(...)  SubmitAsync(&LightsailClient::GetBucketBundles, __VA_ARGS__)
#define GetBucketBundlesCallable(REQUEST)  SubmitCallable(&LightsailClient::GetBucketBundles, REQUEST)

#define GetBucketMetricDataAsync(...)  SubmitAsync(&LightsailClient::GetBucketMetricData, __VA_ARGS__)
#define GetBucketMetricDataCallable(REQUEST)  SubmitCallable(&LightsailClient::GetBucketMetricData, REQUEST)

#define GetBucketsAsync(...)  SubmitAsync(&LightsailClient::GetBuckets, __VA_ARGS__)
#define GetBucketsCallable(REQUEST)  SubmitCallable(&LightsailClient::GetBuckets, REQUEST)

#define GetBundlesAsync(...)  SubmitAsync(&LightsailClient::GetBundles, __VA_ARGS__)
#define GetBundlesCallable(REQUEST)  SubmitCallable(&LightsailClient::GetBundles, REQUEST)

#define GetCertificatesAsync(...)  SubmitAsync(&LightsailClient::GetCertificates, __VA_ARGS__)
#define GetCertificatesCallable(REQUEST)  SubmitCallable(&LightsailClient::GetCertificates, REQUEST)

#define GetCloudFormationStackRecordsAsync(...)  SubmitAsync(&LightsailClient::GetCloudFormationStackRecords, __VA_ARGS__)
#define GetCloudFormationStackRecordsCallable(REQUEST)  SubmitCallable(&LightsailClient::GetCloudFormationStackRecords, REQUEST)

#define GetContactMethodsAsync(...)  SubmitAsync(&LightsailClient::GetContactMethods, __VA_ARGS__)
#define GetContactMethodsCallable(REQUEST)  SubmitCallable(&LightsailClient::GetContactMethods, REQUEST)

#define GetContainerAPIMetadataAsync(...)  SubmitAsync(&LightsailClient::GetContainerAPIMetadata, __VA_ARGS__)
#define GetContainerAPIMetadataCallable(REQUEST)  SubmitCallable(&LightsailClient::GetContainerAPIMetadata, REQUEST)

#define GetContainerImagesAsync(...)  SubmitAsync(&LightsailClient::GetContainerImages, __VA_ARGS__)
#define GetContainerImagesCallable(REQUEST)  SubmitCallable(&LightsailClient::GetContainerImages, REQUEST)

#define GetContainerLogAsync(...)  SubmitAsync(&LightsailClient::GetContainerLog, __VA_ARGS__)
#define GetContainerLogCallable(REQUEST)  SubmitCallable(&LightsailClient::GetContainerLog, REQUEST)

#define GetContainerServiceDeploymentsAsync(...)  SubmitAsync(&LightsailClient::GetContainerServiceDeployments, __VA_ARGS__)
#define GetContainerServiceDeploymentsCallable(REQUEST)  SubmitCallable(&LightsailClient::GetContainerServiceDeployments, REQUEST)

#define GetContainerServiceMetricDataAsync(...)  SubmitAsync(&LightsailClient::GetContainerServiceMetricData, __VA_ARGS__)
#define GetContainerServiceMetricDataCallable(REQUEST)  SubmitCallable(&LightsailClient::GetContainerServiceMetricData, REQUEST)

#define GetContainerServicePowersAsync(...)  SubmitAsync(&LightsailClient::GetContainerServicePowers, __VA_ARGS__)
#define GetContainerServicePowersCallable(REQUEST)  SubmitCallable(&LightsailClient::GetContainerServicePowers, REQUEST)

#define GetContainerServicesAsync(...)  SubmitAsync(&LightsailClient::GetContainerServices, __VA_ARGS__)
#define GetContainerServicesCallable(REQUEST)  SubmitCallable(&LightsailClient::GetContainerServices, REQUEST)

#define GetDiskAsync(...)  SubmitAsync(&LightsailClient::GetDisk, __VA_ARGS__)
#define GetDiskCallable(REQUEST)  SubmitCallable(&LightsailClient::GetDisk, REQUEST)

#define GetDiskSnapshotAsync(...)  SubmitAsync(&LightsailClient::GetDiskSnapshot, __VA_ARGS__)
#define GetDiskSnapshotCallable(REQUEST)  SubmitCallable(&LightsailClient::GetDiskSnapshot, REQUEST)

#define GetDiskSnapshotsAsync(...)  SubmitAsync(&LightsailClient::GetDiskSnapshots, __VA_ARGS__)
#define GetDiskSnapshotsCallable(REQUEST)  SubmitCallable(&LightsailClient::GetDiskSnapshots, REQUEST)

#define GetDisksAsync(...)  SubmitAsync(&LightsailClient::GetDisks, __VA_ARGS__)
#define GetDisksCallable(REQUEST)  SubmitCallable(&LightsailClient::GetDisks, REQUEST)

#define GetDistributionBundlesAsync(...)  SubmitAsync(&LightsailClient::GetDistributionBundles, __VA_ARGS__)
#define GetDistributionBundlesCallable(REQUEST)  SubmitCallable(&LightsailClient::GetDistributionBundles, REQUEST)

#define GetDistributionLatestCacheResetAsync(...)  SubmitAsync(&LightsailClient::GetDistributionLatestCacheReset, __VA_ARGS__)
#define GetDistributionLatestCacheResetCallable(REQUEST)  SubmitCallable(&LightsailClient::GetDistributionLatestCacheReset, REQUEST)

#define GetDistributionMetricDataAsync(...)  SubmitAsync(&LightsailClient::GetDistributionMetricData, __VA_ARGS__)
#define GetDistributionMetricDataCallable(REQUEST)  SubmitCallable(&LightsailClient::GetDistributionMetricData, REQUEST)

#define GetDistributionsAsync(...)  SubmitAsync(&LightsailClient::GetDistributions, __VA_ARGS__)
#define GetDistributionsCallable(REQUEST)  SubmitCallable(&LightsailClient::GetDistributions, REQUEST)

#define GetDomainAsync(...)  SubmitAsync(&LightsailClient::GetDomain, __VA_ARGS__)
#define GetDomainCallable(REQUEST)  SubmitCallable(&LightsailClient::GetDomain, REQUEST)

#define GetDomainsAsync(...)  SubmitAsync(&LightsailClient::GetDomains, __VA_ARGS__)
#define GetDomainsCallable(REQUEST)  SubmitCallable(&LightsailClient::GetDomains, REQUEST)

#define GetExportSnapshotRecordsAsync(...)  SubmitAsync(&LightsailClient::GetExportSnapshotRecords, __VA_ARGS__)
#define GetExportSnapshotRecordsCallable(REQUEST)  SubmitCallable(&LightsailClient::GetExportSnapshotRecords, REQUEST)

#define GetInstanceAsync(...)  SubmitAsync(&LightsailClient::GetInstance, __VA_ARGS__)
#define GetInstanceCallable(REQUEST)  SubmitCallable(&LightsailClient::GetInstance, REQUEST)

#define GetInstanceAccessDetailsAsync(...)  SubmitAsync(&LightsailClient::GetInstanceAccessDetails, __VA_ARGS__)
#define GetInstanceAccessDetailsCallable(REQUEST)  SubmitCallable(&LightsailClient::GetInstanceAccessDetails, REQUEST)

#define GetInstanceMetricDataAsync(...)  SubmitAsync(&LightsailClient::GetInstanceMetricData, __VA_ARGS__)
#define GetInstanceMetricDataCallable(REQUEST)  SubmitCallable(&LightsailClient::GetInstanceMetricData, REQUEST)

#define GetInstancePortStatesAsync(...)  SubmitAsync(&LightsailClient::GetInstancePortStates, __VA_ARGS__)
#define GetInstancePortStatesCallable(REQUEST)  SubmitCallable(&LightsailClient::GetInstancePortStates, REQUEST)

#define GetInstanceSnapshotAsync(...)  SubmitAsync(&LightsailClient::GetInstanceSnapshot, __VA_ARGS__)
#define GetInstanceSnapshotCallable(REQUEST)  SubmitCallable(&LightsailClient::GetInstanceSnapshot, REQUEST)

#define GetInstanceSnapshotsAsync(...)  SubmitAsync(&LightsailClient::GetInstanceSnapshots, __VA_ARGS__)
#define GetInstanceSnapshotsCallable(REQUEST)  SubmitCallable(&LightsailClient::GetInstanceSnapshots, REQUEST)

#define GetInstanceStateAsync(...)  SubmitAsync(&LightsailClient::GetInstanceState, __VA_ARGS__)
#define GetInstanceStateCallable(REQUEST)  SubmitCallable(&LightsailClient::GetInstanceState, REQUEST)

#define GetInstancesAsync(...)  SubmitAsync(&LightsailClient::GetInstances, __VA_ARGS__)
#define GetInstancesCallable(REQUEST)  SubmitCallable(&LightsailClient::GetInstances, REQUEST)

#define GetKeyPairAsync(...)  SubmitAsync(&LightsailClient::GetKeyPair, __VA_ARGS__)
#define GetKeyPairCallable(REQUEST)  SubmitCallable(&LightsailClient::GetKeyPair, REQUEST)

#define GetKeyPairsAsync(...)  SubmitAsync(&LightsailClient::GetKeyPairs, __VA_ARGS__)
#define GetKeyPairsCallable(REQUEST)  SubmitCallable(&LightsailClient::GetKeyPairs, REQUEST)

#define GetLoadBalancerAsync(...)  SubmitAsync(&LightsailClient::GetLoadBalancer, __VA_ARGS__)
#define GetLoadBalancerCallable(REQUEST)  SubmitCallable(&LightsailClient::GetLoadBalancer, REQUEST)

#define GetLoadBalancerMetricDataAsync(...)  SubmitAsync(&LightsailClient::GetLoadBalancerMetricData, __VA_ARGS__)
#define GetLoadBalancerMetricDataCallable(REQUEST)  SubmitCallable(&LightsailClient::GetLoadBalancerMetricData, REQUEST)

#define GetLoadBalancerTlsCertificatesAsync(...)  SubmitAsync(&LightsailClient::GetLoadBalancerTlsCertificates, __VA_ARGS__)
#define GetLoadBalancerTlsCertificatesCallable(REQUEST)  SubmitCallable(&LightsailClient::GetLoadBalancerTlsCertificates, REQUEST)

#define GetLoadBalancerTlsPoliciesAsync(...)  SubmitAsync(&LightsailClient::GetLoadBalancerTlsPolicies, __VA_ARGS__)
#define GetLoadBalancerTlsPoliciesCallable(REQUEST)  SubmitCallable(&LightsailClient::GetLoadBalancerTlsPolicies, REQUEST)

#define GetLoadBalancersAsync(...)  SubmitAsync(&LightsailClient::GetLoadBalancers, __VA_ARGS__)
#define GetLoadBalancersCallable(REQUEST)  SubmitCallable(&LightsailClient::GetLoadBalancers, REQUEST)

#define GetOperationAsync(...)  SubmitAsync(&LightsailClient::GetOperation, __VA_ARGS__)
#define GetOperationCallable(REQUEST)  SubmitCallable(&LightsailClient::GetOperation, REQUEST)

#define GetOperationsAsync(...)  SubmitAsync(&LightsailClient::GetOperations, __VA_ARGS__)
#define GetOperationsCallable(REQUEST)  SubmitCallable(&LightsailClient::GetOperations, REQUEST)

#define GetOperationsForResourceAsync(...)  SubmitAsync(&LightsailClient::GetOperationsForResource, __VA_ARGS__)
#define GetOperationsForResourceCallable(REQUEST)  SubmitCallable(&LightsailClient::GetOperationsForResource, REQUEST)

#define GetRegionsAsync(...)  SubmitAsync(&LightsailClient::GetRegions, __VA_ARGS__)
#define GetRegionsCallable(REQUEST)  SubmitCallable(&LightsailClient::GetRegions, REQUEST)

#define GetRelationalDatabaseAsync(...)  SubmitAsync(&LightsailClient::GetRelationalDatabase, __VA_ARGS__)
#define GetRelationalDatabaseCallable(REQUEST)  SubmitCallable(&LightsailClient::GetRelationalDatabase, REQUEST)

#define GetRelationalDatabaseBlueprintsAsync(...)  SubmitAsync(&LightsailClient::GetRelationalDatabaseBlueprints, __VA_ARGS__)
#define GetRelationalDatabaseBlueprintsCallable(REQUEST)  SubmitCallable(&LightsailClient::GetRelationalDatabaseBlueprints, REQUEST)

#define GetRelationalDatabaseBundlesAsync(...)  SubmitAsync(&LightsailClient::GetRelationalDatabaseBundles, __VA_ARGS__)
#define GetRelationalDatabaseBundlesCallable(REQUEST)  SubmitCallable(&LightsailClient::GetRelationalDatabaseBundles, REQUEST)

#define GetRelationalDatabaseEventsAsync(...)  SubmitAsync(&LightsailClient::GetRelationalDatabaseEvents, __VA_ARGS__)
#define GetRelationalDatabaseEventsCallable(REQUEST)  SubmitCallable(&LightsailClient::GetRelationalDatabaseEvents, REQUEST)

#define GetRelationalDatabaseLogEventsAsync(...)  SubmitAsync(&LightsailClient::GetRelationalDatabaseLogEvents, __VA_ARGS__)
#define GetRelationalDatabaseLogEventsCallable(REQUEST)  SubmitCallable(&LightsailClient::GetRelationalDatabaseLogEvents, REQUEST)

#define GetRelationalDatabaseLogStreamsAsync(...)  SubmitAsync(&LightsailClient::GetRelationalDatabaseLogStreams, __VA_ARGS__)
#define GetRelationalDatabaseLogStreamsCallable(REQUEST)  SubmitCallable(&LightsailClient::GetRelationalDatabaseLogStreams, REQUEST)

#define GetRelationalDatabaseMasterUserPasswordAsync(...)  SubmitAsync(&LightsailClient::GetRelationalDatabaseMasterUserPassword, __VA_ARGS__)
#define GetRelationalDatabaseMasterUserPasswordCallable(REQUEST)  SubmitCallable(&LightsailClient::GetRelationalDatabaseMasterUserPassword, REQUEST)

#define GetRelationalDatabaseMetricDataAsync(...)  SubmitAsync(&LightsailClient::GetRelationalDatabaseMetricData, __VA_ARGS__)
#define GetRelationalDatabaseMetricDataCallable(REQUEST)  SubmitCallable(&LightsailClient::GetRelationalDatabaseMetricData, REQUEST)

#define GetRelationalDatabaseParametersAsync(...)  SubmitAsync(&LightsailClient::GetRelationalDatabaseParameters, __VA_ARGS__)
#define GetRelationalDatabaseParametersCallable(REQUEST)  SubmitCallable(&LightsailClient::GetRelationalDatabaseParameters, REQUEST)

#define GetRelationalDatabaseSnapshotAsync(...)  SubmitAsync(&LightsailClient::GetRelationalDatabaseSnapshot, __VA_ARGS__)
#define GetRelationalDatabaseSnapshotCallable(REQUEST)  SubmitCallable(&LightsailClient::GetRelationalDatabaseSnapshot, REQUEST)

#define GetRelationalDatabaseSnapshotsAsync(...)  SubmitAsync(&LightsailClient::GetRelationalDatabaseSnapshots, __VA_ARGS__)
#define GetRelationalDatabaseSnapshotsCallable(REQUEST)  SubmitCallable(&LightsailClient::GetRelationalDatabaseSnapshots, REQUEST)

#define GetRelationalDatabasesAsync(...)  SubmitAsync(&LightsailClient::GetRelationalDatabases, __VA_ARGS__)
#define GetRelationalDatabasesCallable(REQUEST)  SubmitCallable(&LightsailClient::GetRelationalDatabases, REQUEST)

#define GetStaticIpAsync(...)  SubmitAsync(&LightsailClient::GetStaticIp, __VA_ARGS__)
#define GetStaticIpCallable(REQUEST)  SubmitCallable(&LightsailClient::GetStaticIp, REQUEST)

#define GetStaticIpsAsync(...)  SubmitAsync(&LightsailClient::GetStaticIps, __VA_ARGS__)
#define GetStaticIpsCallable(REQUEST)  SubmitCallable(&LightsailClient::GetStaticIps, REQUEST)

#define ImportKeyPairAsync(...)  SubmitAsync(&LightsailClient::ImportKeyPair, __VA_ARGS__)
#define ImportKeyPairCallable(REQUEST)  SubmitCallable(&LightsailClient::ImportKeyPair, REQUEST)

#define IsVpcPeeredAsync(...)  SubmitAsync(&LightsailClient::IsVpcPeered, __VA_ARGS__)
#define IsVpcPeeredCallable(REQUEST)  SubmitCallable(&LightsailClient::IsVpcPeered, REQUEST)

#define OpenInstancePublicPortsAsync(...)  SubmitAsync(&LightsailClient::OpenInstancePublicPorts, __VA_ARGS__)
#define OpenInstancePublicPortsCallable(REQUEST)  SubmitCallable(&LightsailClient::OpenInstancePublicPorts, REQUEST)

#define PeerVpcAsync(...)  SubmitAsync(&LightsailClient::PeerVpc, __VA_ARGS__)
#define PeerVpcCallable(REQUEST)  SubmitCallable(&LightsailClient::PeerVpc, REQUEST)

#define PutAlarmAsync(...)  SubmitAsync(&LightsailClient::PutAlarm, __VA_ARGS__)
#define PutAlarmCallable(REQUEST)  SubmitCallable(&LightsailClient::PutAlarm, REQUEST)

#define PutInstancePublicPortsAsync(...)  SubmitAsync(&LightsailClient::PutInstancePublicPorts, __VA_ARGS__)
#define PutInstancePublicPortsCallable(REQUEST)  SubmitCallable(&LightsailClient::PutInstancePublicPorts, REQUEST)

#define RebootInstanceAsync(...)  SubmitAsync(&LightsailClient::RebootInstance, __VA_ARGS__)
#define RebootInstanceCallable(REQUEST)  SubmitCallable(&LightsailClient::RebootInstance, REQUEST)

#define RebootRelationalDatabaseAsync(...)  SubmitAsync(&LightsailClient::RebootRelationalDatabase, __VA_ARGS__)
#define RebootRelationalDatabaseCallable(REQUEST)  SubmitCallable(&LightsailClient::RebootRelationalDatabase, REQUEST)

#define RegisterContainerImageAsync(...)  SubmitAsync(&LightsailClient::RegisterContainerImage, __VA_ARGS__)
#define RegisterContainerImageCallable(REQUEST)  SubmitCallable(&LightsailClient::RegisterContainerImage, REQUEST)

#define ReleaseStaticIpAsync(...)  SubmitAsync(&LightsailClient::ReleaseStaticIp, __VA_ARGS__)
#define ReleaseStaticIpCallable(REQUEST)  SubmitCallable(&LightsailClient::ReleaseStaticIp, REQUEST)

#define ResetDistributionCacheAsync(...)  SubmitAsync(&LightsailClient::ResetDistributionCache, __VA_ARGS__)
#define ResetDistributionCacheCallable(REQUEST)  SubmitCallable(&LightsailClient::ResetDistributionCache, REQUEST)

#define SendContactMethodVerificationAsync(...)  SubmitAsync(&LightsailClient::SendContactMethodVerification, __VA_ARGS__)
#define SendContactMethodVerificationCallable(REQUEST)  SubmitCallable(&LightsailClient::SendContactMethodVerification, REQUEST)

#define SetIpAddressTypeAsync(...)  SubmitAsync(&LightsailClient::SetIpAddressType, __VA_ARGS__)
#define SetIpAddressTypeCallable(REQUEST)  SubmitCallable(&LightsailClient::SetIpAddressType, REQUEST)

#define SetResourceAccessForBucketAsync(...)  SubmitAsync(&LightsailClient::SetResourceAccessForBucket, __VA_ARGS__)
#define SetResourceAccessForBucketCallable(REQUEST)  SubmitCallable(&LightsailClient::SetResourceAccessForBucket, REQUEST)

#define StartInstanceAsync(...)  SubmitAsync(&LightsailClient::StartInstance, __VA_ARGS__)
#define StartInstanceCallable(REQUEST)  SubmitCallable(&LightsailClient::StartInstance, REQUEST)

#define StartRelationalDatabaseAsync(...)  SubmitAsync(&LightsailClient::StartRelationalDatabase, __VA_ARGS__)
#define StartRelationalDatabaseCallable(REQUEST)  SubmitCallable(&LightsailClient::StartRelationalDatabase, REQUEST)

#define StopInstanceAsync(...)  SubmitAsync(&LightsailClient::StopInstance, __VA_ARGS__)
#define StopInstanceCallable(REQUEST)  SubmitCallable(&LightsailClient::StopInstance, REQUEST)

#define StopRelationalDatabaseAsync(...)  SubmitAsync(&LightsailClient::StopRelationalDatabase, __VA_ARGS__)
#define StopRelationalDatabaseCallable(REQUEST)  SubmitCallable(&LightsailClient::StopRelationalDatabase, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&LightsailClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&LightsailClient::TagResource, REQUEST)

#define TestAlarmAsync(...)  SubmitAsync(&LightsailClient::TestAlarm, __VA_ARGS__)
#define TestAlarmCallable(REQUEST)  SubmitCallable(&LightsailClient::TestAlarm, REQUEST)

#define UnpeerVpcAsync(...)  SubmitAsync(&LightsailClient::UnpeerVpc, __VA_ARGS__)
#define UnpeerVpcCallable(REQUEST)  SubmitCallable(&LightsailClient::UnpeerVpc, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&LightsailClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&LightsailClient::UntagResource, REQUEST)

#define UpdateBucketAsync(...)  SubmitAsync(&LightsailClient::UpdateBucket, __VA_ARGS__)
#define UpdateBucketCallable(REQUEST)  SubmitCallable(&LightsailClient::UpdateBucket, REQUEST)

#define UpdateBucketBundleAsync(...)  SubmitAsync(&LightsailClient::UpdateBucketBundle, __VA_ARGS__)
#define UpdateBucketBundleCallable(REQUEST)  SubmitCallable(&LightsailClient::UpdateBucketBundle, REQUEST)

#define UpdateContainerServiceAsync(...)  SubmitAsync(&LightsailClient::UpdateContainerService, __VA_ARGS__)
#define UpdateContainerServiceCallable(REQUEST)  SubmitCallable(&LightsailClient::UpdateContainerService, REQUEST)

#define UpdateDistributionAsync(...)  SubmitAsync(&LightsailClient::UpdateDistribution, __VA_ARGS__)
#define UpdateDistributionCallable(REQUEST)  SubmitCallable(&LightsailClient::UpdateDistribution, REQUEST)

#define UpdateDistributionBundleAsync(...)  SubmitAsync(&LightsailClient::UpdateDistributionBundle, __VA_ARGS__)
#define UpdateDistributionBundleCallable(REQUEST)  SubmitCallable(&LightsailClient::UpdateDistributionBundle, REQUEST)

#define UpdateDomainEntryAsync(...)  SubmitAsync(&LightsailClient::UpdateDomainEntry, __VA_ARGS__)
#define UpdateDomainEntryCallable(REQUEST)  SubmitCallable(&LightsailClient::UpdateDomainEntry, REQUEST)

#define UpdateInstanceMetadataOptionsAsync(...)  SubmitAsync(&LightsailClient::UpdateInstanceMetadataOptions, __VA_ARGS__)
#define UpdateInstanceMetadataOptionsCallable(REQUEST)  SubmitCallable(&LightsailClient::UpdateInstanceMetadataOptions, REQUEST)

#define UpdateLoadBalancerAttributeAsync(...)  SubmitAsync(&LightsailClient::UpdateLoadBalancerAttribute, __VA_ARGS__)
#define UpdateLoadBalancerAttributeCallable(REQUEST)  SubmitCallable(&LightsailClient::UpdateLoadBalancerAttribute, REQUEST)

#define UpdateRelationalDatabaseAsync(...)  SubmitAsync(&LightsailClient::UpdateRelationalDatabase, __VA_ARGS__)
#define UpdateRelationalDatabaseCallable(REQUEST)  SubmitCallable(&LightsailClient::UpdateRelationalDatabase, REQUEST)

#define UpdateRelationalDatabaseParametersAsync(...)  SubmitAsync(&LightsailClient::UpdateRelationalDatabaseParameters, __VA_ARGS__)
#define UpdateRelationalDatabaseParametersCallable(REQUEST)  SubmitCallable(&LightsailClient::UpdateRelationalDatabaseParameters, REQUEST)

