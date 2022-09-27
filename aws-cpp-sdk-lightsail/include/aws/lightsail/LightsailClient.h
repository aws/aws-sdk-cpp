﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lightsail/model/AllocateStaticIpResult.h>
#include <aws/lightsail/model/AttachCertificateToDistributionResult.h>
#include <aws/lightsail/model/AttachDiskResult.h>
#include <aws/lightsail/model/AttachInstancesToLoadBalancerResult.h>
#include <aws/lightsail/model/AttachLoadBalancerTlsCertificateResult.h>
#include <aws/lightsail/model/AttachStaticIpResult.h>
#include <aws/lightsail/model/CloseInstancePublicPortsResult.h>
#include <aws/lightsail/model/CopySnapshotResult.h>
#include <aws/lightsail/model/CreateBucketResult.h>
#include <aws/lightsail/model/CreateBucketAccessKeyResult.h>
#include <aws/lightsail/model/CreateCertificateResult.h>
#include <aws/lightsail/model/CreateCloudFormationStackResult.h>
#include <aws/lightsail/model/CreateContactMethodResult.h>
#include <aws/lightsail/model/CreateContainerServiceResult.h>
#include <aws/lightsail/model/CreateContainerServiceDeploymentResult.h>
#include <aws/lightsail/model/CreateContainerServiceRegistryLoginResult.h>
#include <aws/lightsail/model/CreateDiskResult.h>
#include <aws/lightsail/model/CreateDiskFromSnapshotResult.h>
#include <aws/lightsail/model/CreateDiskSnapshotResult.h>
#include <aws/lightsail/model/CreateDistributionResult.h>
#include <aws/lightsail/model/CreateDomainResult.h>
#include <aws/lightsail/model/CreateDomainEntryResult.h>
#include <aws/lightsail/model/CreateInstanceSnapshotResult.h>
#include <aws/lightsail/model/CreateInstancesResult.h>
#include <aws/lightsail/model/CreateInstancesFromSnapshotResult.h>
#include <aws/lightsail/model/CreateKeyPairResult.h>
#include <aws/lightsail/model/CreateLoadBalancerResult.h>
#include <aws/lightsail/model/CreateLoadBalancerTlsCertificateResult.h>
#include <aws/lightsail/model/CreateRelationalDatabaseResult.h>
#include <aws/lightsail/model/CreateRelationalDatabaseFromSnapshotResult.h>
#include <aws/lightsail/model/CreateRelationalDatabaseSnapshotResult.h>
#include <aws/lightsail/model/DeleteAlarmResult.h>
#include <aws/lightsail/model/DeleteAutoSnapshotResult.h>
#include <aws/lightsail/model/DeleteBucketResult.h>
#include <aws/lightsail/model/DeleteBucketAccessKeyResult.h>
#include <aws/lightsail/model/DeleteCertificateResult.h>
#include <aws/lightsail/model/DeleteContactMethodResult.h>
#include <aws/lightsail/model/DeleteContainerImageResult.h>
#include <aws/lightsail/model/DeleteContainerServiceResult.h>
#include <aws/lightsail/model/DeleteDiskResult.h>
#include <aws/lightsail/model/DeleteDiskSnapshotResult.h>
#include <aws/lightsail/model/DeleteDistributionResult.h>
#include <aws/lightsail/model/DeleteDomainResult.h>
#include <aws/lightsail/model/DeleteDomainEntryResult.h>
#include <aws/lightsail/model/DeleteInstanceResult.h>
#include <aws/lightsail/model/DeleteInstanceSnapshotResult.h>
#include <aws/lightsail/model/DeleteKeyPairResult.h>
#include <aws/lightsail/model/DeleteKnownHostKeysResult.h>
#include <aws/lightsail/model/DeleteLoadBalancerResult.h>
#include <aws/lightsail/model/DeleteLoadBalancerTlsCertificateResult.h>
#include <aws/lightsail/model/DeleteRelationalDatabaseResult.h>
#include <aws/lightsail/model/DeleteRelationalDatabaseSnapshotResult.h>
#include <aws/lightsail/model/DetachCertificateFromDistributionResult.h>
#include <aws/lightsail/model/DetachDiskResult.h>
#include <aws/lightsail/model/DetachInstancesFromLoadBalancerResult.h>
#include <aws/lightsail/model/DetachStaticIpResult.h>
#include <aws/lightsail/model/DisableAddOnResult.h>
#include <aws/lightsail/model/DownloadDefaultKeyPairResult.h>
#include <aws/lightsail/model/EnableAddOnResult.h>
#include <aws/lightsail/model/ExportSnapshotResult.h>
#include <aws/lightsail/model/GetActiveNamesResult.h>
#include <aws/lightsail/model/GetAlarmsResult.h>
#include <aws/lightsail/model/GetAutoSnapshotsResult.h>
#include <aws/lightsail/model/GetBlueprintsResult.h>
#include <aws/lightsail/model/GetBucketAccessKeysResult.h>
#include <aws/lightsail/model/GetBucketBundlesResult.h>
#include <aws/lightsail/model/GetBucketMetricDataResult.h>
#include <aws/lightsail/model/GetBucketsResult.h>
#include <aws/lightsail/model/GetBundlesResult.h>
#include <aws/lightsail/model/GetCertificatesResult.h>
#include <aws/lightsail/model/GetCloudFormationStackRecordsResult.h>
#include <aws/lightsail/model/GetContactMethodsResult.h>
#include <aws/lightsail/model/GetContainerAPIMetadataResult.h>
#include <aws/lightsail/model/GetContainerImagesResult.h>
#include <aws/lightsail/model/GetContainerLogResult.h>
#include <aws/lightsail/model/GetContainerServiceDeploymentsResult.h>
#include <aws/lightsail/model/GetContainerServiceMetricDataResult.h>
#include <aws/lightsail/model/GetContainerServicePowersResult.h>
#include <aws/lightsail/model/GetContainerServicesResult.h>
#include <aws/lightsail/model/GetDiskResult.h>
#include <aws/lightsail/model/GetDiskSnapshotResult.h>
#include <aws/lightsail/model/GetDiskSnapshotsResult.h>
#include <aws/lightsail/model/GetDisksResult.h>
#include <aws/lightsail/model/GetDistributionBundlesResult.h>
#include <aws/lightsail/model/GetDistributionLatestCacheResetResult.h>
#include <aws/lightsail/model/GetDistributionMetricDataResult.h>
#include <aws/lightsail/model/GetDistributionsResult.h>
#include <aws/lightsail/model/GetDomainResult.h>
#include <aws/lightsail/model/GetDomainsResult.h>
#include <aws/lightsail/model/GetExportSnapshotRecordsResult.h>
#include <aws/lightsail/model/GetInstanceResult.h>
#include <aws/lightsail/model/GetInstanceAccessDetailsResult.h>
#include <aws/lightsail/model/GetInstanceMetricDataResult.h>
#include <aws/lightsail/model/GetInstancePortStatesResult.h>
#include <aws/lightsail/model/GetInstanceSnapshotResult.h>
#include <aws/lightsail/model/GetInstanceSnapshotsResult.h>
#include <aws/lightsail/model/GetInstanceStateResult.h>
#include <aws/lightsail/model/GetInstancesResult.h>
#include <aws/lightsail/model/GetKeyPairResult.h>
#include <aws/lightsail/model/GetKeyPairsResult.h>
#include <aws/lightsail/model/GetLoadBalancerResult.h>
#include <aws/lightsail/model/GetLoadBalancerMetricDataResult.h>
#include <aws/lightsail/model/GetLoadBalancerTlsCertificatesResult.h>
#include <aws/lightsail/model/GetLoadBalancerTlsPoliciesResult.h>
#include <aws/lightsail/model/GetLoadBalancersResult.h>
#include <aws/lightsail/model/GetOperationResult.h>
#include <aws/lightsail/model/GetOperationsResult.h>
#include <aws/lightsail/model/GetOperationsForResourceResult.h>
#include <aws/lightsail/model/GetRegionsResult.h>
#include <aws/lightsail/model/GetRelationalDatabaseResult.h>
#include <aws/lightsail/model/GetRelationalDatabaseBlueprintsResult.h>
#include <aws/lightsail/model/GetRelationalDatabaseBundlesResult.h>
#include <aws/lightsail/model/GetRelationalDatabaseEventsResult.h>
#include <aws/lightsail/model/GetRelationalDatabaseLogEventsResult.h>
#include <aws/lightsail/model/GetRelationalDatabaseLogStreamsResult.h>
#include <aws/lightsail/model/GetRelationalDatabaseMasterUserPasswordResult.h>
#include <aws/lightsail/model/GetRelationalDatabaseMetricDataResult.h>
#include <aws/lightsail/model/GetRelationalDatabaseParametersResult.h>
#include <aws/lightsail/model/GetRelationalDatabaseSnapshotResult.h>
#include <aws/lightsail/model/GetRelationalDatabaseSnapshotsResult.h>
#include <aws/lightsail/model/GetRelationalDatabasesResult.h>
#include <aws/lightsail/model/GetStaticIpResult.h>
#include <aws/lightsail/model/GetStaticIpsResult.h>
#include <aws/lightsail/model/ImportKeyPairResult.h>
#include <aws/lightsail/model/IsVpcPeeredResult.h>
#include <aws/lightsail/model/OpenInstancePublicPortsResult.h>
#include <aws/lightsail/model/PeerVpcResult.h>
#include <aws/lightsail/model/PutAlarmResult.h>
#include <aws/lightsail/model/PutInstancePublicPortsResult.h>
#include <aws/lightsail/model/RebootInstanceResult.h>
#include <aws/lightsail/model/RebootRelationalDatabaseResult.h>
#include <aws/lightsail/model/RegisterContainerImageResult.h>
#include <aws/lightsail/model/ReleaseStaticIpResult.h>
#include <aws/lightsail/model/ResetDistributionCacheResult.h>
#include <aws/lightsail/model/SendContactMethodVerificationResult.h>
#include <aws/lightsail/model/SetIpAddressTypeResult.h>
#include <aws/lightsail/model/SetResourceAccessForBucketResult.h>
#include <aws/lightsail/model/StartInstanceResult.h>
#include <aws/lightsail/model/StartRelationalDatabaseResult.h>
#include <aws/lightsail/model/StopInstanceResult.h>
#include <aws/lightsail/model/StopRelationalDatabaseResult.h>
#include <aws/lightsail/model/TagResourceResult.h>
#include <aws/lightsail/model/TestAlarmResult.h>
#include <aws/lightsail/model/UnpeerVpcResult.h>
#include <aws/lightsail/model/UntagResourceResult.h>
#include <aws/lightsail/model/UpdateBucketResult.h>
#include <aws/lightsail/model/UpdateBucketBundleResult.h>
#include <aws/lightsail/model/UpdateContainerServiceResult.h>
#include <aws/lightsail/model/UpdateDistributionResult.h>
#include <aws/lightsail/model/UpdateDistributionBundleResult.h>
#include <aws/lightsail/model/UpdateDomainEntryResult.h>
#include <aws/lightsail/model/UpdateLoadBalancerAttributeResult.h>
#include <aws/lightsail/model/UpdateRelationalDatabaseResult.h>
#include <aws/lightsail/model/UpdateRelationalDatabaseParametersResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;
namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace Lightsail
{

namespace Model
{
        class AllocateStaticIpRequest;
        class AttachCertificateToDistributionRequest;
        class AttachDiskRequest;
        class AttachInstancesToLoadBalancerRequest;
        class AttachLoadBalancerTlsCertificateRequest;
        class AttachStaticIpRequest;
        class CloseInstancePublicPortsRequest;
        class CopySnapshotRequest;
        class CreateBucketRequest;
        class CreateBucketAccessKeyRequest;
        class CreateCertificateRequest;
        class CreateCloudFormationStackRequest;
        class CreateContactMethodRequest;
        class CreateContainerServiceRequest;
        class CreateContainerServiceDeploymentRequest;
        class CreateContainerServiceRegistryLoginRequest;
        class CreateDiskRequest;
        class CreateDiskFromSnapshotRequest;
        class CreateDiskSnapshotRequest;
        class CreateDistributionRequest;
        class CreateDomainRequest;
        class CreateDomainEntryRequest;
        class CreateInstanceSnapshotRequest;
        class CreateInstancesRequest;
        class CreateInstancesFromSnapshotRequest;
        class CreateKeyPairRequest;
        class CreateLoadBalancerRequest;
        class CreateLoadBalancerTlsCertificateRequest;
        class CreateRelationalDatabaseRequest;
        class CreateRelationalDatabaseFromSnapshotRequest;
        class CreateRelationalDatabaseSnapshotRequest;
        class DeleteAlarmRequest;
        class DeleteAutoSnapshotRequest;
        class DeleteBucketRequest;
        class DeleteBucketAccessKeyRequest;
        class DeleteCertificateRequest;
        class DeleteContactMethodRequest;
        class DeleteContainerImageRequest;
        class DeleteContainerServiceRequest;
        class DeleteDiskRequest;
        class DeleteDiskSnapshotRequest;
        class DeleteDistributionRequest;
        class DeleteDomainRequest;
        class DeleteDomainEntryRequest;
        class DeleteInstanceRequest;
        class DeleteInstanceSnapshotRequest;
        class DeleteKeyPairRequest;
        class DeleteKnownHostKeysRequest;
        class DeleteLoadBalancerRequest;
        class DeleteLoadBalancerTlsCertificateRequest;
        class DeleteRelationalDatabaseRequest;
        class DeleteRelationalDatabaseSnapshotRequest;
        class DetachCertificateFromDistributionRequest;
        class DetachDiskRequest;
        class DetachInstancesFromLoadBalancerRequest;
        class DetachStaticIpRequest;
        class DisableAddOnRequest;
        class DownloadDefaultKeyPairRequest;
        class EnableAddOnRequest;
        class ExportSnapshotRequest;
        class GetActiveNamesRequest;
        class GetAlarmsRequest;
        class GetAutoSnapshotsRequest;
        class GetBlueprintsRequest;
        class GetBucketAccessKeysRequest;
        class GetBucketBundlesRequest;
        class GetBucketMetricDataRequest;
        class GetBucketsRequest;
        class GetBundlesRequest;
        class GetCertificatesRequest;
        class GetCloudFormationStackRecordsRequest;
        class GetContactMethodsRequest;
        class GetContainerAPIMetadataRequest;
        class GetContainerImagesRequest;
        class GetContainerLogRequest;
        class GetContainerServiceDeploymentsRequest;
        class GetContainerServiceMetricDataRequest;
        class GetContainerServicePowersRequest;
        class GetContainerServicesRequest;
        class GetDiskRequest;
        class GetDiskSnapshotRequest;
        class GetDiskSnapshotsRequest;
        class GetDisksRequest;
        class GetDistributionBundlesRequest;
        class GetDistributionLatestCacheResetRequest;
        class GetDistributionMetricDataRequest;
        class GetDistributionsRequest;
        class GetDomainRequest;
        class GetDomainsRequest;
        class GetExportSnapshotRecordsRequest;
        class GetInstanceRequest;
        class GetInstanceAccessDetailsRequest;
        class GetInstanceMetricDataRequest;
        class GetInstancePortStatesRequest;
        class GetInstanceSnapshotRequest;
        class GetInstanceSnapshotsRequest;
        class GetInstanceStateRequest;
        class GetInstancesRequest;
        class GetKeyPairRequest;
        class GetKeyPairsRequest;
        class GetLoadBalancerRequest;
        class GetLoadBalancerMetricDataRequest;
        class GetLoadBalancerTlsCertificatesRequest;
        class GetLoadBalancerTlsPoliciesRequest;
        class GetLoadBalancersRequest;
        class GetOperationRequest;
        class GetOperationsRequest;
        class GetOperationsForResourceRequest;
        class GetRegionsRequest;
        class GetRelationalDatabaseRequest;
        class GetRelationalDatabaseBlueprintsRequest;
        class GetRelationalDatabaseBundlesRequest;
        class GetRelationalDatabaseEventsRequest;
        class GetRelationalDatabaseLogEventsRequest;
        class GetRelationalDatabaseLogStreamsRequest;
        class GetRelationalDatabaseMasterUserPasswordRequest;
        class GetRelationalDatabaseMetricDataRequest;
        class GetRelationalDatabaseParametersRequest;
        class GetRelationalDatabaseSnapshotRequest;
        class GetRelationalDatabaseSnapshotsRequest;
        class GetRelationalDatabasesRequest;
        class GetStaticIpRequest;
        class GetStaticIpsRequest;
        class ImportKeyPairRequest;
        class IsVpcPeeredRequest;
        class OpenInstancePublicPortsRequest;
        class PeerVpcRequest;
        class PutAlarmRequest;
        class PutInstancePublicPortsRequest;
        class RebootInstanceRequest;
        class RebootRelationalDatabaseRequest;
        class RegisterContainerImageRequest;
        class ReleaseStaticIpRequest;
        class ResetDistributionCacheRequest;
        class SendContactMethodVerificationRequest;
        class SetIpAddressTypeRequest;
        class SetResourceAccessForBucketRequest;
        class StartInstanceRequest;
        class StartRelationalDatabaseRequest;
        class StopInstanceRequest;
        class StopRelationalDatabaseRequest;
        class TagResourceRequest;
        class TestAlarmRequest;
        class UnpeerVpcRequest;
        class UntagResourceRequest;
        class UpdateBucketRequest;
        class UpdateBucketBundleRequest;
        class UpdateContainerServiceRequest;
        class UpdateDistributionRequest;
        class UpdateDistributionBundleRequest;
        class UpdateDomainEntryRequest;
        class UpdateLoadBalancerAttributeRequest;
        class UpdateRelationalDatabaseRequest;
        class UpdateRelationalDatabaseParametersRequest;

        typedef Aws::Utils::Outcome<AllocateStaticIpResult, LightsailError> AllocateStaticIpOutcome;
        typedef Aws::Utils::Outcome<AttachCertificateToDistributionResult, LightsailError> AttachCertificateToDistributionOutcome;
        typedef Aws::Utils::Outcome<AttachDiskResult, LightsailError> AttachDiskOutcome;
        typedef Aws::Utils::Outcome<AttachInstancesToLoadBalancerResult, LightsailError> AttachInstancesToLoadBalancerOutcome;
        typedef Aws::Utils::Outcome<AttachLoadBalancerTlsCertificateResult, LightsailError> AttachLoadBalancerTlsCertificateOutcome;
        typedef Aws::Utils::Outcome<AttachStaticIpResult, LightsailError> AttachStaticIpOutcome;
        typedef Aws::Utils::Outcome<CloseInstancePublicPortsResult, LightsailError> CloseInstancePublicPortsOutcome;
        typedef Aws::Utils::Outcome<CopySnapshotResult, LightsailError> CopySnapshotOutcome;
        typedef Aws::Utils::Outcome<CreateBucketResult, LightsailError> CreateBucketOutcome;
        typedef Aws::Utils::Outcome<CreateBucketAccessKeyResult, LightsailError> CreateBucketAccessKeyOutcome;
        typedef Aws::Utils::Outcome<CreateCertificateResult, LightsailError> CreateCertificateOutcome;
        typedef Aws::Utils::Outcome<CreateCloudFormationStackResult, LightsailError> CreateCloudFormationStackOutcome;
        typedef Aws::Utils::Outcome<CreateContactMethodResult, LightsailError> CreateContactMethodOutcome;
        typedef Aws::Utils::Outcome<CreateContainerServiceResult, LightsailError> CreateContainerServiceOutcome;
        typedef Aws::Utils::Outcome<CreateContainerServiceDeploymentResult, LightsailError> CreateContainerServiceDeploymentOutcome;
        typedef Aws::Utils::Outcome<CreateContainerServiceRegistryLoginResult, LightsailError> CreateContainerServiceRegistryLoginOutcome;
        typedef Aws::Utils::Outcome<CreateDiskResult, LightsailError> CreateDiskOutcome;
        typedef Aws::Utils::Outcome<CreateDiskFromSnapshotResult, LightsailError> CreateDiskFromSnapshotOutcome;
        typedef Aws::Utils::Outcome<CreateDiskSnapshotResult, LightsailError> CreateDiskSnapshotOutcome;
        typedef Aws::Utils::Outcome<CreateDistributionResult, LightsailError> CreateDistributionOutcome;
        typedef Aws::Utils::Outcome<CreateDomainResult, LightsailError> CreateDomainOutcome;
        typedef Aws::Utils::Outcome<CreateDomainEntryResult, LightsailError> CreateDomainEntryOutcome;
        typedef Aws::Utils::Outcome<CreateInstanceSnapshotResult, LightsailError> CreateInstanceSnapshotOutcome;
        typedef Aws::Utils::Outcome<CreateInstancesResult, LightsailError> CreateInstancesOutcome;
        typedef Aws::Utils::Outcome<CreateInstancesFromSnapshotResult, LightsailError> CreateInstancesFromSnapshotOutcome;
        typedef Aws::Utils::Outcome<CreateKeyPairResult, LightsailError> CreateKeyPairOutcome;
        typedef Aws::Utils::Outcome<CreateLoadBalancerResult, LightsailError> CreateLoadBalancerOutcome;
        typedef Aws::Utils::Outcome<CreateLoadBalancerTlsCertificateResult, LightsailError> CreateLoadBalancerTlsCertificateOutcome;
        typedef Aws::Utils::Outcome<CreateRelationalDatabaseResult, LightsailError> CreateRelationalDatabaseOutcome;
        typedef Aws::Utils::Outcome<CreateRelationalDatabaseFromSnapshotResult, LightsailError> CreateRelationalDatabaseFromSnapshotOutcome;
        typedef Aws::Utils::Outcome<CreateRelationalDatabaseSnapshotResult, LightsailError> CreateRelationalDatabaseSnapshotOutcome;
        typedef Aws::Utils::Outcome<DeleteAlarmResult, LightsailError> DeleteAlarmOutcome;
        typedef Aws::Utils::Outcome<DeleteAutoSnapshotResult, LightsailError> DeleteAutoSnapshotOutcome;
        typedef Aws::Utils::Outcome<DeleteBucketResult, LightsailError> DeleteBucketOutcome;
        typedef Aws::Utils::Outcome<DeleteBucketAccessKeyResult, LightsailError> DeleteBucketAccessKeyOutcome;
        typedef Aws::Utils::Outcome<DeleteCertificateResult, LightsailError> DeleteCertificateOutcome;
        typedef Aws::Utils::Outcome<DeleteContactMethodResult, LightsailError> DeleteContactMethodOutcome;
        typedef Aws::Utils::Outcome<DeleteContainerImageResult, LightsailError> DeleteContainerImageOutcome;
        typedef Aws::Utils::Outcome<DeleteContainerServiceResult, LightsailError> DeleteContainerServiceOutcome;
        typedef Aws::Utils::Outcome<DeleteDiskResult, LightsailError> DeleteDiskOutcome;
        typedef Aws::Utils::Outcome<DeleteDiskSnapshotResult, LightsailError> DeleteDiskSnapshotOutcome;
        typedef Aws::Utils::Outcome<DeleteDistributionResult, LightsailError> DeleteDistributionOutcome;
        typedef Aws::Utils::Outcome<DeleteDomainResult, LightsailError> DeleteDomainOutcome;
        typedef Aws::Utils::Outcome<DeleteDomainEntryResult, LightsailError> DeleteDomainEntryOutcome;
        typedef Aws::Utils::Outcome<DeleteInstanceResult, LightsailError> DeleteInstanceOutcome;
        typedef Aws::Utils::Outcome<DeleteInstanceSnapshotResult, LightsailError> DeleteInstanceSnapshotOutcome;
        typedef Aws::Utils::Outcome<DeleteKeyPairResult, LightsailError> DeleteKeyPairOutcome;
        typedef Aws::Utils::Outcome<DeleteKnownHostKeysResult, LightsailError> DeleteKnownHostKeysOutcome;
        typedef Aws::Utils::Outcome<DeleteLoadBalancerResult, LightsailError> DeleteLoadBalancerOutcome;
        typedef Aws::Utils::Outcome<DeleteLoadBalancerTlsCertificateResult, LightsailError> DeleteLoadBalancerTlsCertificateOutcome;
        typedef Aws::Utils::Outcome<DeleteRelationalDatabaseResult, LightsailError> DeleteRelationalDatabaseOutcome;
        typedef Aws::Utils::Outcome<DeleteRelationalDatabaseSnapshotResult, LightsailError> DeleteRelationalDatabaseSnapshotOutcome;
        typedef Aws::Utils::Outcome<DetachCertificateFromDistributionResult, LightsailError> DetachCertificateFromDistributionOutcome;
        typedef Aws::Utils::Outcome<DetachDiskResult, LightsailError> DetachDiskOutcome;
        typedef Aws::Utils::Outcome<DetachInstancesFromLoadBalancerResult, LightsailError> DetachInstancesFromLoadBalancerOutcome;
        typedef Aws::Utils::Outcome<DetachStaticIpResult, LightsailError> DetachStaticIpOutcome;
        typedef Aws::Utils::Outcome<DisableAddOnResult, LightsailError> DisableAddOnOutcome;
        typedef Aws::Utils::Outcome<DownloadDefaultKeyPairResult, LightsailError> DownloadDefaultKeyPairOutcome;
        typedef Aws::Utils::Outcome<EnableAddOnResult, LightsailError> EnableAddOnOutcome;
        typedef Aws::Utils::Outcome<ExportSnapshotResult, LightsailError> ExportSnapshotOutcome;
        typedef Aws::Utils::Outcome<GetActiveNamesResult, LightsailError> GetActiveNamesOutcome;
        typedef Aws::Utils::Outcome<GetAlarmsResult, LightsailError> GetAlarmsOutcome;
        typedef Aws::Utils::Outcome<GetAutoSnapshotsResult, LightsailError> GetAutoSnapshotsOutcome;
        typedef Aws::Utils::Outcome<GetBlueprintsResult, LightsailError> GetBlueprintsOutcome;
        typedef Aws::Utils::Outcome<GetBucketAccessKeysResult, LightsailError> GetBucketAccessKeysOutcome;
        typedef Aws::Utils::Outcome<GetBucketBundlesResult, LightsailError> GetBucketBundlesOutcome;
        typedef Aws::Utils::Outcome<GetBucketMetricDataResult, LightsailError> GetBucketMetricDataOutcome;
        typedef Aws::Utils::Outcome<GetBucketsResult, LightsailError> GetBucketsOutcome;
        typedef Aws::Utils::Outcome<GetBundlesResult, LightsailError> GetBundlesOutcome;
        typedef Aws::Utils::Outcome<GetCertificatesResult, LightsailError> GetCertificatesOutcome;
        typedef Aws::Utils::Outcome<GetCloudFormationStackRecordsResult, LightsailError> GetCloudFormationStackRecordsOutcome;
        typedef Aws::Utils::Outcome<GetContactMethodsResult, LightsailError> GetContactMethodsOutcome;
        typedef Aws::Utils::Outcome<GetContainerAPIMetadataResult, LightsailError> GetContainerAPIMetadataOutcome;
        typedef Aws::Utils::Outcome<GetContainerImagesResult, LightsailError> GetContainerImagesOutcome;
        typedef Aws::Utils::Outcome<GetContainerLogResult, LightsailError> GetContainerLogOutcome;
        typedef Aws::Utils::Outcome<GetContainerServiceDeploymentsResult, LightsailError> GetContainerServiceDeploymentsOutcome;
        typedef Aws::Utils::Outcome<GetContainerServiceMetricDataResult, LightsailError> GetContainerServiceMetricDataOutcome;
        typedef Aws::Utils::Outcome<GetContainerServicePowersResult, LightsailError> GetContainerServicePowersOutcome;
        typedef Aws::Utils::Outcome<GetContainerServicesResult, LightsailError> GetContainerServicesOutcome;
        typedef Aws::Utils::Outcome<GetDiskResult, LightsailError> GetDiskOutcome;
        typedef Aws::Utils::Outcome<GetDiskSnapshotResult, LightsailError> GetDiskSnapshotOutcome;
        typedef Aws::Utils::Outcome<GetDiskSnapshotsResult, LightsailError> GetDiskSnapshotsOutcome;
        typedef Aws::Utils::Outcome<GetDisksResult, LightsailError> GetDisksOutcome;
        typedef Aws::Utils::Outcome<GetDistributionBundlesResult, LightsailError> GetDistributionBundlesOutcome;
        typedef Aws::Utils::Outcome<GetDistributionLatestCacheResetResult, LightsailError> GetDistributionLatestCacheResetOutcome;
        typedef Aws::Utils::Outcome<GetDistributionMetricDataResult, LightsailError> GetDistributionMetricDataOutcome;
        typedef Aws::Utils::Outcome<GetDistributionsResult, LightsailError> GetDistributionsOutcome;
        typedef Aws::Utils::Outcome<GetDomainResult, LightsailError> GetDomainOutcome;
        typedef Aws::Utils::Outcome<GetDomainsResult, LightsailError> GetDomainsOutcome;
        typedef Aws::Utils::Outcome<GetExportSnapshotRecordsResult, LightsailError> GetExportSnapshotRecordsOutcome;
        typedef Aws::Utils::Outcome<GetInstanceResult, LightsailError> GetInstanceOutcome;
        typedef Aws::Utils::Outcome<GetInstanceAccessDetailsResult, LightsailError> GetInstanceAccessDetailsOutcome;
        typedef Aws::Utils::Outcome<GetInstanceMetricDataResult, LightsailError> GetInstanceMetricDataOutcome;
        typedef Aws::Utils::Outcome<GetInstancePortStatesResult, LightsailError> GetInstancePortStatesOutcome;
        typedef Aws::Utils::Outcome<GetInstanceSnapshotResult, LightsailError> GetInstanceSnapshotOutcome;
        typedef Aws::Utils::Outcome<GetInstanceSnapshotsResult, LightsailError> GetInstanceSnapshotsOutcome;
        typedef Aws::Utils::Outcome<GetInstanceStateResult, LightsailError> GetInstanceStateOutcome;
        typedef Aws::Utils::Outcome<GetInstancesResult, LightsailError> GetInstancesOutcome;
        typedef Aws::Utils::Outcome<GetKeyPairResult, LightsailError> GetKeyPairOutcome;
        typedef Aws::Utils::Outcome<GetKeyPairsResult, LightsailError> GetKeyPairsOutcome;
        typedef Aws::Utils::Outcome<GetLoadBalancerResult, LightsailError> GetLoadBalancerOutcome;
        typedef Aws::Utils::Outcome<GetLoadBalancerMetricDataResult, LightsailError> GetLoadBalancerMetricDataOutcome;
        typedef Aws::Utils::Outcome<GetLoadBalancerTlsCertificatesResult, LightsailError> GetLoadBalancerTlsCertificatesOutcome;
        typedef Aws::Utils::Outcome<GetLoadBalancerTlsPoliciesResult, LightsailError> GetLoadBalancerTlsPoliciesOutcome;
        typedef Aws::Utils::Outcome<GetLoadBalancersResult, LightsailError> GetLoadBalancersOutcome;
        typedef Aws::Utils::Outcome<GetOperationResult, LightsailError> GetOperationOutcome;
        typedef Aws::Utils::Outcome<GetOperationsResult, LightsailError> GetOperationsOutcome;
        typedef Aws::Utils::Outcome<GetOperationsForResourceResult, LightsailError> GetOperationsForResourceOutcome;
        typedef Aws::Utils::Outcome<GetRegionsResult, LightsailError> GetRegionsOutcome;
        typedef Aws::Utils::Outcome<GetRelationalDatabaseResult, LightsailError> GetRelationalDatabaseOutcome;
        typedef Aws::Utils::Outcome<GetRelationalDatabaseBlueprintsResult, LightsailError> GetRelationalDatabaseBlueprintsOutcome;
        typedef Aws::Utils::Outcome<GetRelationalDatabaseBundlesResult, LightsailError> GetRelationalDatabaseBundlesOutcome;
        typedef Aws::Utils::Outcome<GetRelationalDatabaseEventsResult, LightsailError> GetRelationalDatabaseEventsOutcome;
        typedef Aws::Utils::Outcome<GetRelationalDatabaseLogEventsResult, LightsailError> GetRelationalDatabaseLogEventsOutcome;
        typedef Aws::Utils::Outcome<GetRelationalDatabaseLogStreamsResult, LightsailError> GetRelationalDatabaseLogStreamsOutcome;
        typedef Aws::Utils::Outcome<GetRelationalDatabaseMasterUserPasswordResult, LightsailError> GetRelationalDatabaseMasterUserPasswordOutcome;
        typedef Aws::Utils::Outcome<GetRelationalDatabaseMetricDataResult, LightsailError> GetRelationalDatabaseMetricDataOutcome;
        typedef Aws::Utils::Outcome<GetRelationalDatabaseParametersResult, LightsailError> GetRelationalDatabaseParametersOutcome;
        typedef Aws::Utils::Outcome<GetRelationalDatabaseSnapshotResult, LightsailError> GetRelationalDatabaseSnapshotOutcome;
        typedef Aws::Utils::Outcome<GetRelationalDatabaseSnapshotsResult, LightsailError> GetRelationalDatabaseSnapshotsOutcome;
        typedef Aws::Utils::Outcome<GetRelationalDatabasesResult, LightsailError> GetRelationalDatabasesOutcome;
        typedef Aws::Utils::Outcome<GetStaticIpResult, LightsailError> GetStaticIpOutcome;
        typedef Aws::Utils::Outcome<GetStaticIpsResult, LightsailError> GetStaticIpsOutcome;
        typedef Aws::Utils::Outcome<ImportKeyPairResult, LightsailError> ImportKeyPairOutcome;
        typedef Aws::Utils::Outcome<IsVpcPeeredResult, LightsailError> IsVpcPeeredOutcome;
        typedef Aws::Utils::Outcome<OpenInstancePublicPortsResult, LightsailError> OpenInstancePublicPortsOutcome;
        typedef Aws::Utils::Outcome<PeerVpcResult, LightsailError> PeerVpcOutcome;
        typedef Aws::Utils::Outcome<PutAlarmResult, LightsailError> PutAlarmOutcome;
        typedef Aws::Utils::Outcome<PutInstancePublicPortsResult, LightsailError> PutInstancePublicPortsOutcome;
        typedef Aws::Utils::Outcome<RebootInstanceResult, LightsailError> RebootInstanceOutcome;
        typedef Aws::Utils::Outcome<RebootRelationalDatabaseResult, LightsailError> RebootRelationalDatabaseOutcome;
        typedef Aws::Utils::Outcome<RegisterContainerImageResult, LightsailError> RegisterContainerImageOutcome;
        typedef Aws::Utils::Outcome<ReleaseStaticIpResult, LightsailError> ReleaseStaticIpOutcome;
        typedef Aws::Utils::Outcome<ResetDistributionCacheResult, LightsailError> ResetDistributionCacheOutcome;
        typedef Aws::Utils::Outcome<SendContactMethodVerificationResult, LightsailError> SendContactMethodVerificationOutcome;
        typedef Aws::Utils::Outcome<SetIpAddressTypeResult, LightsailError> SetIpAddressTypeOutcome;
        typedef Aws::Utils::Outcome<SetResourceAccessForBucketResult, LightsailError> SetResourceAccessForBucketOutcome;
        typedef Aws::Utils::Outcome<StartInstanceResult, LightsailError> StartInstanceOutcome;
        typedef Aws::Utils::Outcome<StartRelationalDatabaseResult, LightsailError> StartRelationalDatabaseOutcome;
        typedef Aws::Utils::Outcome<StopInstanceResult, LightsailError> StopInstanceOutcome;
        typedef Aws::Utils::Outcome<StopRelationalDatabaseResult, LightsailError> StopRelationalDatabaseOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, LightsailError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<TestAlarmResult, LightsailError> TestAlarmOutcome;
        typedef Aws::Utils::Outcome<UnpeerVpcResult, LightsailError> UnpeerVpcOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, LightsailError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateBucketResult, LightsailError> UpdateBucketOutcome;
        typedef Aws::Utils::Outcome<UpdateBucketBundleResult, LightsailError> UpdateBucketBundleOutcome;
        typedef Aws::Utils::Outcome<UpdateContainerServiceResult, LightsailError> UpdateContainerServiceOutcome;
        typedef Aws::Utils::Outcome<UpdateDistributionResult, LightsailError> UpdateDistributionOutcome;
        typedef Aws::Utils::Outcome<UpdateDistributionBundleResult, LightsailError> UpdateDistributionBundleOutcome;
        typedef Aws::Utils::Outcome<UpdateDomainEntryResult, LightsailError> UpdateDomainEntryOutcome;
        typedef Aws::Utils::Outcome<UpdateLoadBalancerAttributeResult, LightsailError> UpdateLoadBalancerAttributeOutcome;
        typedef Aws::Utils::Outcome<UpdateRelationalDatabaseResult, LightsailError> UpdateRelationalDatabaseOutcome;
        typedef Aws::Utils::Outcome<UpdateRelationalDatabaseParametersResult, LightsailError> UpdateRelationalDatabaseParametersOutcome;

        typedef std::future<AllocateStaticIpOutcome> AllocateStaticIpOutcomeCallable;
        typedef std::future<AttachCertificateToDistributionOutcome> AttachCertificateToDistributionOutcomeCallable;
        typedef std::future<AttachDiskOutcome> AttachDiskOutcomeCallable;
        typedef std::future<AttachInstancesToLoadBalancerOutcome> AttachInstancesToLoadBalancerOutcomeCallable;
        typedef std::future<AttachLoadBalancerTlsCertificateOutcome> AttachLoadBalancerTlsCertificateOutcomeCallable;
        typedef std::future<AttachStaticIpOutcome> AttachStaticIpOutcomeCallable;
        typedef std::future<CloseInstancePublicPortsOutcome> CloseInstancePublicPortsOutcomeCallable;
        typedef std::future<CopySnapshotOutcome> CopySnapshotOutcomeCallable;
        typedef std::future<CreateBucketOutcome> CreateBucketOutcomeCallable;
        typedef std::future<CreateBucketAccessKeyOutcome> CreateBucketAccessKeyOutcomeCallable;
        typedef std::future<CreateCertificateOutcome> CreateCertificateOutcomeCallable;
        typedef std::future<CreateCloudFormationStackOutcome> CreateCloudFormationStackOutcomeCallable;
        typedef std::future<CreateContactMethodOutcome> CreateContactMethodOutcomeCallable;
        typedef std::future<CreateContainerServiceOutcome> CreateContainerServiceOutcomeCallable;
        typedef std::future<CreateContainerServiceDeploymentOutcome> CreateContainerServiceDeploymentOutcomeCallable;
        typedef std::future<CreateContainerServiceRegistryLoginOutcome> CreateContainerServiceRegistryLoginOutcomeCallable;
        typedef std::future<CreateDiskOutcome> CreateDiskOutcomeCallable;
        typedef std::future<CreateDiskFromSnapshotOutcome> CreateDiskFromSnapshotOutcomeCallable;
        typedef std::future<CreateDiskSnapshotOutcome> CreateDiskSnapshotOutcomeCallable;
        typedef std::future<CreateDistributionOutcome> CreateDistributionOutcomeCallable;
        typedef std::future<CreateDomainOutcome> CreateDomainOutcomeCallable;
        typedef std::future<CreateDomainEntryOutcome> CreateDomainEntryOutcomeCallable;
        typedef std::future<CreateInstanceSnapshotOutcome> CreateInstanceSnapshotOutcomeCallable;
        typedef std::future<CreateInstancesOutcome> CreateInstancesOutcomeCallable;
        typedef std::future<CreateInstancesFromSnapshotOutcome> CreateInstancesFromSnapshotOutcomeCallable;
        typedef std::future<CreateKeyPairOutcome> CreateKeyPairOutcomeCallable;
        typedef std::future<CreateLoadBalancerOutcome> CreateLoadBalancerOutcomeCallable;
        typedef std::future<CreateLoadBalancerTlsCertificateOutcome> CreateLoadBalancerTlsCertificateOutcomeCallable;
        typedef std::future<CreateRelationalDatabaseOutcome> CreateRelationalDatabaseOutcomeCallable;
        typedef std::future<CreateRelationalDatabaseFromSnapshotOutcome> CreateRelationalDatabaseFromSnapshotOutcomeCallable;
        typedef std::future<CreateRelationalDatabaseSnapshotOutcome> CreateRelationalDatabaseSnapshotOutcomeCallable;
        typedef std::future<DeleteAlarmOutcome> DeleteAlarmOutcomeCallable;
        typedef std::future<DeleteAutoSnapshotOutcome> DeleteAutoSnapshotOutcomeCallable;
        typedef std::future<DeleteBucketOutcome> DeleteBucketOutcomeCallable;
        typedef std::future<DeleteBucketAccessKeyOutcome> DeleteBucketAccessKeyOutcomeCallable;
        typedef std::future<DeleteCertificateOutcome> DeleteCertificateOutcomeCallable;
        typedef std::future<DeleteContactMethodOutcome> DeleteContactMethodOutcomeCallable;
        typedef std::future<DeleteContainerImageOutcome> DeleteContainerImageOutcomeCallable;
        typedef std::future<DeleteContainerServiceOutcome> DeleteContainerServiceOutcomeCallable;
        typedef std::future<DeleteDiskOutcome> DeleteDiskOutcomeCallable;
        typedef std::future<DeleteDiskSnapshotOutcome> DeleteDiskSnapshotOutcomeCallable;
        typedef std::future<DeleteDistributionOutcome> DeleteDistributionOutcomeCallable;
        typedef std::future<DeleteDomainOutcome> DeleteDomainOutcomeCallable;
        typedef std::future<DeleteDomainEntryOutcome> DeleteDomainEntryOutcomeCallable;
        typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
        typedef std::future<DeleteInstanceSnapshotOutcome> DeleteInstanceSnapshotOutcomeCallable;
        typedef std::future<DeleteKeyPairOutcome> DeleteKeyPairOutcomeCallable;
        typedef std::future<DeleteKnownHostKeysOutcome> DeleteKnownHostKeysOutcomeCallable;
        typedef std::future<DeleteLoadBalancerOutcome> DeleteLoadBalancerOutcomeCallable;
        typedef std::future<DeleteLoadBalancerTlsCertificateOutcome> DeleteLoadBalancerTlsCertificateOutcomeCallable;
        typedef std::future<DeleteRelationalDatabaseOutcome> DeleteRelationalDatabaseOutcomeCallable;
        typedef std::future<DeleteRelationalDatabaseSnapshotOutcome> DeleteRelationalDatabaseSnapshotOutcomeCallable;
        typedef std::future<DetachCertificateFromDistributionOutcome> DetachCertificateFromDistributionOutcomeCallable;
        typedef std::future<DetachDiskOutcome> DetachDiskOutcomeCallable;
        typedef std::future<DetachInstancesFromLoadBalancerOutcome> DetachInstancesFromLoadBalancerOutcomeCallable;
        typedef std::future<DetachStaticIpOutcome> DetachStaticIpOutcomeCallable;
        typedef std::future<DisableAddOnOutcome> DisableAddOnOutcomeCallable;
        typedef std::future<DownloadDefaultKeyPairOutcome> DownloadDefaultKeyPairOutcomeCallable;
        typedef std::future<EnableAddOnOutcome> EnableAddOnOutcomeCallable;
        typedef std::future<ExportSnapshotOutcome> ExportSnapshotOutcomeCallable;
        typedef std::future<GetActiveNamesOutcome> GetActiveNamesOutcomeCallable;
        typedef std::future<GetAlarmsOutcome> GetAlarmsOutcomeCallable;
        typedef std::future<GetAutoSnapshotsOutcome> GetAutoSnapshotsOutcomeCallable;
        typedef std::future<GetBlueprintsOutcome> GetBlueprintsOutcomeCallable;
        typedef std::future<GetBucketAccessKeysOutcome> GetBucketAccessKeysOutcomeCallable;
        typedef std::future<GetBucketBundlesOutcome> GetBucketBundlesOutcomeCallable;
        typedef std::future<GetBucketMetricDataOutcome> GetBucketMetricDataOutcomeCallable;
        typedef std::future<GetBucketsOutcome> GetBucketsOutcomeCallable;
        typedef std::future<GetBundlesOutcome> GetBundlesOutcomeCallable;
        typedef std::future<GetCertificatesOutcome> GetCertificatesOutcomeCallable;
        typedef std::future<GetCloudFormationStackRecordsOutcome> GetCloudFormationStackRecordsOutcomeCallable;
        typedef std::future<GetContactMethodsOutcome> GetContactMethodsOutcomeCallable;
        typedef std::future<GetContainerAPIMetadataOutcome> GetContainerAPIMetadataOutcomeCallable;
        typedef std::future<GetContainerImagesOutcome> GetContainerImagesOutcomeCallable;
        typedef std::future<GetContainerLogOutcome> GetContainerLogOutcomeCallable;
        typedef std::future<GetContainerServiceDeploymentsOutcome> GetContainerServiceDeploymentsOutcomeCallable;
        typedef std::future<GetContainerServiceMetricDataOutcome> GetContainerServiceMetricDataOutcomeCallable;
        typedef std::future<GetContainerServicePowersOutcome> GetContainerServicePowersOutcomeCallable;
        typedef std::future<GetContainerServicesOutcome> GetContainerServicesOutcomeCallable;
        typedef std::future<GetDiskOutcome> GetDiskOutcomeCallable;
        typedef std::future<GetDiskSnapshotOutcome> GetDiskSnapshotOutcomeCallable;
        typedef std::future<GetDiskSnapshotsOutcome> GetDiskSnapshotsOutcomeCallable;
        typedef std::future<GetDisksOutcome> GetDisksOutcomeCallable;
        typedef std::future<GetDistributionBundlesOutcome> GetDistributionBundlesOutcomeCallable;
        typedef std::future<GetDistributionLatestCacheResetOutcome> GetDistributionLatestCacheResetOutcomeCallable;
        typedef std::future<GetDistributionMetricDataOutcome> GetDistributionMetricDataOutcomeCallable;
        typedef std::future<GetDistributionsOutcome> GetDistributionsOutcomeCallable;
        typedef std::future<GetDomainOutcome> GetDomainOutcomeCallable;
        typedef std::future<GetDomainsOutcome> GetDomainsOutcomeCallable;
        typedef std::future<GetExportSnapshotRecordsOutcome> GetExportSnapshotRecordsOutcomeCallable;
        typedef std::future<GetInstanceOutcome> GetInstanceOutcomeCallable;
        typedef std::future<GetInstanceAccessDetailsOutcome> GetInstanceAccessDetailsOutcomeCallable;
        typedef std::future<GetInstanceMetricDataOutcome> GetInstanceMetricDataOutcomeCallable;
        typedef std::future<GetInstancePortStatesOutcome> GetInstancePortStatesOutcomeCallable;
        typedef std::future<GetInstanceSnapshotOutcome> GetInstanceSnapshotOutcomeCallable;
        typedef std::future<GetInstanceSnapshotsOutcome> GetInstanceSnapshotsOutcomeCallable;
        typedef std::future<GetInstanceStateOutcome> GetInstanceStateOutcomeCallable;
        typedef std::future<GetInstancesOutcome> GetInstancesOutcomeCallable;
        typedef std::future<GetKeyPairOutcome> GetKeyPairOutcomeCallable;
        typedef std::future<GetKeyPairsOutcome> GetKeyPairsOutcomeCallable;
        typedef std::future<GetLoadBalancerOutcome> GetLoadBalancerOutcomeCallable;
        typedef std::future<GetLoadBalancerMetricDataOutcome> GetLoadBalancerMetricDataOutcomeCallable;
        typedef std::future<GetLoadBalancerTlsCertificatesOutcome> GetLoadBalancerTlsCertificatesOutcomeCallable;
        typedef std::future<GetLoadBalancerTlsPoliciesOutcome> GetLoadBalancerTlsPoliciesOutcomeCallable;
        typedef std::future<GetLoadBalancersOutcome> GetLoadBalancersOutcomeCallable;
        typedef std::future<GetOperationOutcome> GetOperationOutcomeCallable;
        typedef std::future<GetOperationsOutcome> GetOperationsOutcomeCallable;
        typedef std::future<GetOperationsForResourceOutcome> GetOperationsForResourceOutcomeCallable;
        typedef std::future<GetRegionsOutcome> GetRegionsOutcomeCallable;
        typedef std::future<GetRelationalDatabaseOutcome> GetRelationalDatabaseOutcomeCallable;
        typedef std::future<GetRelationalDatabaseBlueprintsOutcome> GetRelationalDatabaseBlueprintsOutcomeCallable;
        typedef std::future<GetRelationalDatabaseBundlesOutcome> GetRelationalDatabaseBundlesOutcomeCallable;
        typedef std::future<GetRelationalDatabaseEventsOutcome> GetRelationalDatabaseEventsOutcomeCallable;
        typedef std::future<GetRelationalDatabaseLogEventsOutcome> GetRelationalDatabaseLogEventsOutcomeCallable;
        typedef std::future<GetRelationalDatabaseLogStreamsOutcome> GetRelationalDatabaseLogStreamsOutcomeCallable;
        typedef std::future<GetRelationalDatabaseMasterUserPasswordOutcome> GetRelationalDatabaseMasterUserPasswordOutcomeCallable;
        typedef std::future<GetRelationalDatabaseMetricDataOutcome> GetRelationalDatabaseMetricDataOutcomeCallable;
        typedef std::future<GetRelationalDatabaseParametersOutcome> GetRelationalDatabaseParametersOutcomeCallable;
        typedef std::future<GetRelationalDatabaseSnapshotOutcome> GetRelationalDatabaseSnapshotOutcomeCallable;
        typedef std::future<GetRelationalDatabaseSnapshotsOutcome> GetRelationalDatabaseSnapshotsOutcomeCallable;
        typedef std::future<GetRelationalDatabasesOutcome> GetRelationalDatabasesOutcomeCallable;
        typedef std::future<GetStaticIpOutcome> GetStaticIpOutcomeCallable;
        typedef std::future<GetStaticIpsOutcome> GetStaticIpsOutcomeCallable;
        typedef std::future<ImportKeyPairOutcome> ImportKeyPairOutcomeCallable;
        typedef std::future<IsVpcPeeredOutcome> IsVpcPeeredOutcomeCallable;
        typedef std::future<OpenInstancePublicPortsOutcome> OpenInstancePublicPortsOutcomeCallable;
        typedef std::future<PeerVpcOutcome> PeerVpcOutcomeCallable;
        typedef std::future<PutAlarmOutcome> PutAlarmOutcomeCallable;
        typedef std::future<PutInstancePublicPortsOutcome> PutInstancePublicPortsOutcomeCallable;
        typedef std::future<RebootInstanceOutcome> RebootInstanceOutcomeCallable;
        typedef std::future<RebootRelationalDatabaseOutcome> RebootRelationalDatabaseOutcomeCallable;
        typedef std::future<RegisterContainerImageOutcome> RegisterContainerImageOutcomeCallable;
        typedef std::future<ReleaseStaticIpOutcome> ReleaseStaticIpOutcomeCallable;
        typedef std::future<ResetDistributionCacheOutcome> ResetDistributionCacheOutcomeCallable;
        typedef std::future<SendContactMethodVerificationOutcome> SendContactMethodVerificationOutcomeCallable;
        typedef std::future<SetIpAddressTypeOutcome> SetIpAddressTypeOutcomeCallable;
        typedef std::future<SetResourceAccessForBucketOutcome> SetResourceAccessForBucketOutcomeCallable;
        typedef std::future<StartInstanceOutcome> StartInstanceOutcomeCallable;
        typedef std::future<StartRelationalDatabaseOutcome> StartRelationalDatabaseOutcomeCallable;
        typedef std::future<StopInstanceOutcome> StopInstanceOutcomeCallable;
        typedef std::future<StopRelationalDatabaseOutcome> StopRelationalDatabaseOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<TestAlarmOutcome> TestAlarmOutcomeCallable;
        typedef std::future<UnpeerVpcOutcome> UnpeerVpcOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateBucketOutcome> UpdateBucketOutcomeCallable;
        typedef std::future<UpdateBucketBundleOutcome> UpdateBucketBundleOutcomeCallable;
        typedef std::future<UpdateContainerServiceOutcome> UpdateContainerServiceOutcomeCallable;
        typedef std::future<UpdateDistributionOutcome> UpdateDistributionOutcomeCallable;
        typedef std::future<UpdateDistributionBundleOutcome> UpdateDistributionBundleOutcomeCallable;
        typedef std::future<UpdateDomainEntryOutcome> UpdateDomainEntryOutcomeCallable;
        typedef std::future<UpdateLoadBalancerAttributeOutcome> UpdateLoadBalancerAttributeOutcomeCallable;
        typedef std::future<UpdateRelationalDatabaseOutcome> UpdateRelationalDatabaseOutcomeCallable;
        typedef std::future<UpdateRelationalDatabaseParametersOutcome> UpdateRelationalDatabaseParametersOutcomeCallable;
} // namespace Model

  class LightsailClient;

    typedef std::function<void(const LightsailClient*, const Model::AllocateStaticIpRequest&, const Model::AllocateStaticIpOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AllocateStaticIpResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::AttachCertificateToDistributionRequest&, const Model::AttachCertificateToDistributionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachCertificateToDistributionResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::AttachDiskRequest&, const Model::AttachDiskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachDiskResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::AttachInstancesToLoadBalancerRequest&, const Model::AttachInstancesToLoadBalancerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachInstancesToLoadBalancerResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::AttachLoadBalancerTlsCertificateRequest&, const Model::AttachLoadBalancerTlsCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachLoadBalancerTlsCertificateResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::AttachStaticIpRequest&, const Model::AttachStaticIpOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachStaticIpResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::CloseInstancePublicPortsRequest&, const Model::CloseInstancePublicPortsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CloseInstancePublicPortsResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::CopySnapshotRequest&, const Model::CopySnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopySnapshotResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::CreateBucketRequest&, const Model::CreateBucketOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBucketResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::CreateBucketAccessKeyRequest&, const Model::CreateBucketAccessKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBucketAccessKeyResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::CreateCertificateRequest&, const Model::CreateCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCertificateResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::CreateCloudFormationStackRequest&, const Model::CreateCloudFormationStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCloudFormationStackResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::CreateContactMethodRequest&, const Model::CreateContactMethodOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateContactMethodResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::CreateContainerServiceRequest&, const Model::CreateContainerServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateContainerServiceResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::CreateContainerServiceDeploymentRequest&, const Model::CreateContainerServiceDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateContainerServiceDeploymentResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::CreateContainerServiceRegistryLoginRequest&, const Model::CreateContainerServiceRegistryLoginOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateContainerServiceRegistryLoginResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::CreateDiskRequest&, const Model::CreateDiskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDiskResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::CreateDiskFromSnapshotRequest&, const Model::CreateDiskFromSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDiskFromSnapshotResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::CreateDiskSnapshotRequest&, const Model::CreateDiskSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDiskSnapshotResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::CreateDistributionRequest&, const Model::CreateDistributionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDistributionResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::CreateDomainRequest&, const Model::CreateDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDomainResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::CreateDomainEntryRequest&, const Model::CreateDomainEntryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDomainEntryResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::CreateInstanceSnapshotRequest&, const Model::CreateInstanceSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInstanceSnapshotResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::CreateInstancesRequest&, const Model::CreateInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInstancesResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::CreateInstancesFromSnapshotRequest&, const Model::CreateInstancesFromSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInstancesFromSnapshotResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::CreateKeyPairRequest&, const Model::CreateKeyPairOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateKeyPairResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::CreateLoadBalancerRequest&, const Model::CreateLoadBalancerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLoadBalancerResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::CreateLoadBalancerTlsCertificateRequest&, const Model::CreateLoadBalancerTlsCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLoadBalancerTlsCertificateResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::CreateRelationalDatabaseRequest&, const Model::CreateRelationalDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRelationalDatabaseResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::CreateRelationalDatabaseFromSnapshotRequest&, const Model::CreateRelationalDatabaseFromSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRelationalDatabaseFromSnapshotResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::CreateRelationalDatabaseSnapshotRequest&, const Model::CreateRelationalDatabaseSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRelationalDatabaseSnapshotResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::DeleteAlarmRequest&, const Model::DeleteAlarmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAlarmResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::DeleteAutoSnapshotRequest&, const Model::DeleteAutoSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAutoSnapshotResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::DeleteBucketRequest&, const Model::DeleteBucketOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBucketResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::DeleteBucketAccessKeyRequest&, const Model::DeleteBucketAccessKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBucketAccessKeyResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::DeleteCertificateRequest&, const Model::DeleteCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCertificateResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::DeleteContactMethodRequest&, const Model::DeleteContactMethodOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteContactMethodResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::DeleteContainerImageRequest&, const Model::DeleteContainerImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteContainerImageResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::DeleteContainerServiceRequest&, const Model::DeleteContainerServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteContainerServiceResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::DeleteDiskRequest&, const Model::DeleteDiskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDiskResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::DeleteDiskSnapshotRequest&, const Model::DeleteDiskSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDiskSnapshotResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::DeleteDistributionRequest&, const Model::DeleteDistributionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDistributionResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::DeleteDomainRequest&, const Model::DeleteDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDomainResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::DeleteDomainEntryRequest&, const Model::DeleteDomainEntryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDomainEntryResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::DeleteInstanceRequest&, const Model::DeleteInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInstanceResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::DeleteInstanceSnapshotRequest&, const Model::DeleteInstanceSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInstanceSnapshotResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::DeleteKeyPairRequest&, const Model::DeleteKeyPairOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteKeyPairResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::DeleteKnownHostKeysRequest&, const Model::DeleteKnownHostKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteKnownHostKeysResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::DeleteLoadBalancerRequest&, const Model::DeleteLoadBalancerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLoadBalancerResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::DeleteLoadBalancerTlsCertificateRequest&, const Model::DeleteLoadBalancerTlsCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLoadBalancerTlsCertificateResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::DeleteRelationalDatabaseRequest&, const Model::DeleteRelationalDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRelationalDatabaseResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::DeleteRelationalDatabaseSnapshotRequest&, const Model::DeleteRelationalDatabaseSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRelationalDatabaseSnapshotResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::DetachCertificateFromDistributionRequest&, const Model::DetachCertificateFromDistributionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachCertificateFromDistributionResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::DetachDiskRequest&, const Model::DetachDiskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachDiskResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::DetachInstancesFromLoadBalancerRequest&, const Model::DetachInstancesFromLoadBalancerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachInstancesFromLoadBalancerResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::DetachStaticIpRequest&, const Model::DetachStaticIpOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachStaticIpResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::DisableAddOnRequest&, const Model::DisableAddOnOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableAddOnResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::DownloadDefaultKeyPairRequest&, const Model::DownloadDefaultKeyPairOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DownloadDefaultKeyPairResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::EnableAddOnRequest&, const Model::EnableAddOnOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableAddOnResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::ExportSnapshotRequest&, const Model::ExportSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportSnapshotResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetActiveNamesRequest&, const Model::GetActiveNamesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetActiveNamesResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetAlarmsRequest&, const Model::GetAlarmsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAlarmsResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetAutoSnapshotsRequest&, const Model::GetAutoSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAutoSnapshotsResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetBlueprintsRequest&, const Model::GetBlueprintsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBlueprintsResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetBucketAccessKeysRequest&, const Model::GetBucketAccessKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketAccessKeysResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetBucketBundlesRequest&, const Model::GetBucketBundlesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketBundlesResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetBucketMetricDataRequest&, const Model::GetBucketMetricDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketMetricDataResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetBucketsRequest&, const Model::GetBucketsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBucketsResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetBundlesRequest&, const Model::GetBundlesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBundlesResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetCertificatesRequest&, const Model::GetCertificatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCertificatesResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetCloudFormationStackRecordsRequest&, const Model::GetCloudFormationStackRecordsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCloudFormationStackRecordsResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetContactMethodsRequest&, const Model::GetContactMethodsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContactMethodsResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetContainerAPIMetadataRequest&, const Model::GetContainerAPIMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContainerAPIMetadataResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetContainerImagesRequest&, const Model::GetContainerImagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContainerImagesResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetContainerLogRequest&, const Model::GetContainerLogOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContainerLogResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetContainerServiceDeploymentsRequest&, const Model::GetContainerServiceDeploymentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContainerServiceDeploymentsResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetContainerServiceMetricDataRequest&, const Model::GetContainerServiceMetricDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContainerServiceMetricDataResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetContainerServicePowersRequest&, const Model::GetContainerServicePowersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContainerServicePowersResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetContainerServicesRequest&, const Model::GetContainerServicesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetContainerServicesResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetDiskRequest&, const Model::GetDiskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDiskResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetDiskSnapshotRequest&, const Model::GetDiskSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDiskSnapshotResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetDiskSnapshotsRequest&, const Model::GetDiskSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDiskSnapshotsResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetDisksRequest&, const Model::GetDisksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDisksResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetDistributionBundlesRequest&, const Model::GetDistributionBundlesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDistributionBundlesResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetDistributionLatestCacheResetRequest&, const Model::GetDistributionLatestCacheResetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDistributionLatestCacheResetResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetDistributionMetricDataRequest&, const Model::GetDistributionMetricDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDistributionMetricDataResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetDistributionsRequest&, const Model::GetDistributionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDistributionsResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetDomainRequest&, const Model::GetDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDomainResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetDomainsRequest&, const Model::GetDomainsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDomainsResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetExportSnapshotRecordsRequest&, const Model::GetExportSnapshotRecordsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetExportSnapshotRecordsResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetInstanceRequest&, const Model::GetInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInstanceResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetInstanceAccessDetailsRequest&, const Model::GetInstanceAccessDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInstanceAccessDetailsResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetInstanceMetricDataRequest&, const Model::GetInstanceMetricDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInstanceMetricDataResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetInstancePortStatesRequest&, const Model::GetInstancePortStatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInstancePortStatesResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetInstanceSnapshotRequest&, const Model::GetInstanceSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInstanceSnapshotResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetInstanceSnapshotsRequest&, const Model::GetInstanceSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInstanceSnapshotsResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetInstanceStateRequest&, const Model::GetInstanceStateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInstanceStateResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetInstancesRequest&, const Model::GetInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInstancesResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetKeyPairRequest&, const Model::GetKeyPairOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetKeyPairResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetKeyPairsRequest&, const Model::GetKeyPairsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetKeyPairsResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetLoadBalancerRequest&, const Model::GetLoadBalancerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLoadBalancerResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetLoadBalancerMetricDataRequest&, const Model::GetLoadBalancerMetricDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLoadBalancerMetricDataResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetLoadBalancerTlsCertificatesRequest&, const Model::GetLoadBalancerTlsCertificatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLoadBalancerTlsCertificatesResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetLoadBalancerTlsPoliciesRequest&, const Model::GetLoadBalancerTlsPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLoadBalancerTlsPoliciesResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetLoadBalancersRequest&, const Model::GetLoadBalancersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLoadBalancersResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetOperationRequest&, const Model::GetOperationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOperationResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetOperationsRequest&, const Model::GetOperationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOperationsResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetOperationsForResourceRequest&, const Model::GetOperationsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetOperationsForResourceResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetRegionsRequest&, const Model::GetRegionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRegionsResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetRelationalDatabaseRequest&, const Model::GetRelationalDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRelationalDatabaseResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetRelationalDatabaseBlueprintsRequest&, const Model::GetRelationalDatabaseBlueprintsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRelationalDatabaseBlueprintsResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetRelationalDatabaseBundlesRequest&, const Model::GetRelationalDatabaseBundlesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRelationalDatabaseBundlesResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetRelationalDatabaseEventsRequest&, const Model::GetRelationalDatabaseEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRelationalDatabaseEventsResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetRelationalDatabaseLogEventsRequest&, const Model::GetRelationalDatabaseLogEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRelationalDatabaseLogEventsResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetRelationalDatabaseLogStreamsRequest&, const Model::GetRelationalDatabaseLogStreamsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRelationalDatabaseLogStreamsResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetRelationalDatabaseMasterUserPasswordRequest&, const Model::GetRelationalDatabaseMasterUserPasswordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRelationalDatabaseMasterUserPasswordResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetRelationalDatabaseMetricDataRequest&, const Model::GetRelationalDatabaseMetricDataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRelationalDatabaseMetricDataResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetRelationalDatabaseParametersRequest&, const Model::GetRelationalDatabaseParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRelationalDatabaseParametersResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetRelationalDatabaseSnapshotRequest&, const Model::GetRelationalDatabaseSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRelationalDatabaseSnapshotResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetRelationalDatabaseSnapshotsRequest&, const Model::GetRelationalDatabaseSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRelationalDatabaseSnapshotsResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetRelationalDatabasesRequest&, const Model::GetRelationalDatabasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRelationalDatabasesResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetStaticIpRequest&, const Model::GetStaticIpOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStaticIpResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetStaticIpsRequest&, const Model::GetStaticIpsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStaticIpsResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::ImportKeyPairRequest&, const Model::ImportKeyPairOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportKeyPairResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::IsVpcPeeredRequest&, const Model::IsVpcPeeredOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > IsVpcPeeredResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::OpenInstancePublicPortsRequest&, const Model::OpenInstancePublicPortsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > OpenInstancePublicPortsResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::PeerVpcRequest&, const Model::PeerVpcOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PeerVpcResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::PutAlarmRequest&, const Model::PutAlarmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAlarmResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::PutInstancePublicPortsRequest&, const Model::PutInstancePublicPortsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutInstancePublicPortsResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::RebootInstanceRequest&, const Model::RebootInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebootInstanceResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::RebootRelationalDatabaseRequest&, const Model::RebootRelationalDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebootRelationalDatabaseResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::RegisterContainerImageRequest&, const Model::RegisterContainerImageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterContainerImageResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::ReleaseStaticIpRequest&, const Model::ReleaseStaticIpOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReleaseStaticIpResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::ResetDistributionCacheRequest&, const Model::ResetDistributionCacheOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetDistributionCacheResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::SendContactMethodVerificationRequest&, const Model::SendContactMethodVerificationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendContactMethodVerificationResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::SetIpAddressTypeRequest&, const Model::SetIpAddressTypeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetIpAddressTypeResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::SetResourceAccessForBucketRequest&, const Model::SetResourceAccessForBucketOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetResourceAccessForBucketResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::StartInstanceRequest&, const Model::StartInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartInstanceResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::StartRelationalDatabaseRequest&, const Model::StartRelationalDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartRelationalDatabaseResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::StopInstanceRequest&, const Model::StopInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopInstanceResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::StopRelationalDatabaseRequest&, const Model::StopRelationalDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopRelationalDatabaseResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::TestAlarmRequest&, const Model::TestAlarmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestAlarmResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::UnpeerVpcRequest&, const Model::UnpeerVpcOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UnpeerVpcResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::UpdateBucketRequest&, const Model::UpdateBucketOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBucketResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::UpdateBucketBundleRequest&, const Model::UpdateBucketBundleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateBucketBundleResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::UpdateContainerServiceRequest&, const Model::UpdateContainerServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContainerServiceResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::UpdateDistributionRequest&, const Model::UpdateDistributionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDistributionResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::UpdateDistributionBundleRequest&, const Model::UpdateDistributionBundleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDistributionBundleResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::UpdateDomainEntryRequest&, const Model::UpdateDomainEntryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDomainEntryResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::UpdateLoadBalancerAttributeRequest&, const Model::UpdateLoadBalancerAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLoadBalancerAttributeResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::UpdateRelationalDatabaseRequest&, const Model::UpdateRelationalDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRelationalDatabaseResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::UpdateRelationalDatabaseParametersRequest&, const Model::UpdateRelationalDatabaseParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRelationalDatabaseParametersResponseReceivedHandler;

  /**
   * <p>Amazon Lightsail is the easiest way to get started with Amazon Web Services
   * (Amazon Web Services) for developers who need to build websites or web
   * applications. It includes everything you need to launch your project quickly -
   * instances (virtual private servers), container services, storage buckets,
   * managed databases, SSD-based block storage, static IP addresses, load balancers,
   * content delivery network (CDN) distributions, DNS management of registered
   * domains, and resource snapshots (backups) - for a low, predictable monthly
   * price.</p> <p>You can manage your Lightsail resources using the Lightsail
   * console, Lightsail API, AWS Command Line Interface (AWS CLI), or SDKs. For more
   * information about Lightsail concepts and tasks, see the <a
   * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/lightsail-how-to-set-up-access-keys-to-use-sdk-api-cli">Amazon
   * Lightsail Developer Guide</a>.</p> <p>This API Reference provides detailed
   * information about the actions, data types, parameters, and errors of the
   * Lightsail service. For more information about the supported Amazon Web Services
   * Regions, endpoints, and service quotas of the Lightsail service, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/lightsail.html">Amazon
   * Lightsail Endpoints and Quotas</a> in the <i>Amazon Web Services General
   * Reference</i>.</p>
   */
  class AWS_LIGHTSAIL_API LightsailClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LightsailClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LightsailClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LightsailClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~LightsailClient();


        /**
         * <p>Allocates a static IP address.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AllocateStaticIp">AWS
         * API Reference</a></p>
         */
        virtual Model::AllocateStaticIpOutcome AllocateStaticIp(const Model::AllocateStaticIpRequest& request) const;

        /**
         * A Callable wrapper for AllocateStaticIp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AllocateStaticIpOutcomeCallable AllocateStaticIpCallable(const Model::AllocateStaticIpRequest& request) const;

        /**
         * An Async wrapper for AllocateStaticIp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AllocateStaticIpAsync(const Model::AllocateStaticIpRequest& request, const AllocateStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches an SSL/TLS certificate to your Amazon Lightsail content delivery
         * network (CDN) distribution.</p> <p>After the certificate is attached, your
         * distribution accepts HTTPS traffic for all of the domains that are associated
         * with the certificate.</p> <p>Use the <code>CreateCertificate</code> action to
         * create a certificate that you can attach to your distribution.</p> 
         * <p>Only certificates created in the <code>us-east-1</code> Amazon Web Services
         * Region can be attached to Lightsail distributions. Lightsail distributions are
         * global resources that can reference an origin in any Amazon Web Services Region,
         * and distribute its content globally. However, all distributions are located in
         * the <code>us-east-1</code> Region.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AttachCertificateToDistribution">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachCertificateToDistributionOutcome AttachCertificateToDistribution(const Model::AttachCertificateToDistributionRequest& request) const;

        /**
         * A Callable wrapper for AttachCertificateToDistribution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachCertificateToDistributionOutcomeCallable AttachCertificateToDistributionCallable(const Model::AttachCertificateToDistributionRequest& request) const;

        /**
         * An Async wrapper for AttachCertificateToDistribution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachCertificateToDistributionAsync(const Model::AttachCertificateToDistributionRequest& request, const AttachCertificateToDistributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches a block storage disk to a running or stopped Lightsail instance and
         * exposes it to the instance with the specified disk name.</p> <p>The <code>attach
         * disk</code> operation supports tag-based access control via resource tags
         * applied to the resource identified by <code>disk name</code>. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AttachDisk">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachDiskOutcome AttachDisk(const Model::AttachDiskRequest& request) const;

        /**
         * A Callable wrapper for AttachDisk that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachDiskOutcomeCallable AttachDiskCallable(const Model::AttachDiskRequest& request) const;

        /**
         * An Async wrapper for AttachDisk that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachDiskAsync(const Model::AttachDiskRequest& request, const AttachDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches one or more Lightsail instances to a load balancer.</p> <p>After
         * some time, the instances are attached to the load balancer and the health check
         * status is available.</p> <p>The <code>attach instances to load balancer</code>
         * operation supports tag-based access control via resource tags applied to the
         * resource identified by <code>load balancer name</code>. For more information,
         * see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AttachInstancesToLoadBalancer">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachInstancesToLoadBalancerOutcome AttachInstancesToLoadBalancer(const Model::AttachInstancesToLoadBalancerRequest& request) const;

        /**
         * A Callable wrapper for AttachInstancesToLoadBalancer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachInstancesToLoadBalancerOutcomeCallable AttachInstancesToLoadBalancerCallable(const Model::AttachInstancesToLoadBalancerRequest& request) const;

        /**
         * An Async wrapper for AttachInstancesToLoadBalancer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachInstancesToLoadBalancerAsync(const Model::AttachInstancesToLoadBalancerRequest& request, const AttachInstancesToLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches a Transport Layer Security (TLS) certificate to your load balancer.
         * TLS is just an updated, more secure version of Secure Socket Layer (SSL).</p>
         * <p>Once you create and validate your certificate, you can attach it to your load
         * balancer. You can also use this API to rotate the certificates on your account.
         * Use the <code>AttachLoadBalancerTlsCertificate</code> action with the
         * non-attached certificate, and it will replace the existing one and become the
         * attached certificate.</p> <p>The <code>AttachLoadBalancerTlsCertificate</code>
         * operation supports tag-based access control via resource tags applied to the
         * resource identified by <code>load balancer name</code>. For more information,
         * see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AttachLoadBalancerTlsCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachLoadBalancerTlsCertificateOutcome AttachLoadBalancerTlsCertificate(const Model::AttachLoadBalancerTlsCertificateRequest& request) const;

        /**
         * A Callable wrapper for AttachLoadBalancerTlsCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachLoadBalancerTlsCertificateOutcomeCallable AttachLoadBalancerTlsCertificateCallable(const Model::AttachLoadBalancerTlsCertificateRequest& request) const;

        /**
         * An Async wrapper for AttachLoadBalancerTlsCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachLoadBalancerTlsCertificateAsync(const Model::AttachLoadBalancerTlsCertificateRequest& request, const AttachLoadBalancerTlsCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches a static IP address to a specific Amazon Lightsail
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AttachStaticIp">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachStaticIpOutcome AttachStaticIp(const Model::AttachStaticIpRequest& request) const;

        /**
         * A Callable wrapper for AttachStaticIp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachStaticIpOutcomeCallable AttachStaticIpCallable(const Model::AttachStaticIpRequest& request) const;

        /**
         * An Async wrapper for AttachStaticIp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachStaticIpAsync(const Model::AttachStaticIpRequest& request, const AttachStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Closes ports for a specific Amazon Lightsail instance.</p> <p>The
         * <code>CloseInstancePublicPorts</code> action supports tag-based access control
         * via resource tags applied to the resource identified by
         * <code>instanceName</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CloseInstancePublicPorts">AWS
         * API Reference</a></p>
         */
        virtual Model::CloseInstancePublicPortsOutcome CloseInstancePublicPorts(const Model::CloseInstancePublicPortsRequest& request) const;

        /**
         * A Callable wrapper for CloseInstancePublicPorts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CloseInstancePublicPortsOutcomeCallable CloseInstancePublicPortsCallable(const Model::CloseInstancePublicPortsRequest& request) const;

        /**
         * An Async wrapper for CloseInstancePublicPorts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CloseInstancePublicPortsAsync(const Model::CloseInstancePublicPortsRequest& request, const CloseInstancePublicPortsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Copies a manual snapshot of an instance or disk as another manual snapshot,
         * or copies an automatic snapshot of an instance or disk as a manual snapshot.
         * This operation can also be used to copy a manual or automatic snapshot of an
         * instance or a disk from one Amazon Web Services Region to another in Amazon
         * Lightsail.</p> <p>When copying a <i>manual snapshot</i>, be sure to define the
         * <code>source region</code>, <code>source snapshot name</code>, and <code>target
         * snapshot name</code> parameters.</p> <p>When copying an <i>automatic
         * snapshot</i>, be sure to define the <code>source region</code>, <code>source
         * resource name</code>, <code>target snapshot name</code>, and either the
         * <code>restore date</code> or the <code>use latest restorable auto
         * snapshot</code> parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CopySnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CopySnapshotOutcome CopySnapshot(const Model::CopySnapshotRequest& request) const;

        /**
         * A Callable wrapper for CopySnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopySnapshotOutcomeCallable CopySnapshotCallable(const Model::CopySnapshotRequest& request) const;

        /**
         * An Async wrapper for CopySnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopySnapshotAsync(const Model::CopySnapshotRequest& request, const CopySnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon Lightsail bucket.</p> <p>A bucket is a cloud storage
         * resource available in the Lightsail object storage service. Use buckets to store
         * objects such as data and its descriptive metadata. For more information about
         * buckets, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/buckets-in-amazon-lightsail">Buckets
         * in Amazon Lightsail</a> in the <i>Amazon Lightsail Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateBucket">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBucketOutcome CreateBucket(const Model::CreateBucketRequest& request) const;

        /**
         * A Callable wrapper for CreateBucket that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBucketOutcomeCallable CreateBucketCallable(const Model::CreateBucketRequest& request) const;

        /**
         * An Async wrapper for CreateBucket that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBucketAsync(const Model::CreateBucketRequest& request, const CreateBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new access key for the specified Amazon Lightsail bucket. Access
         * keys consist of an access key ID and corresponding secret access key.</p>
         * <p>Access keys grant full programmatic access to the specified bucket and its
         * objects. You can have a maximum of two access keys per bucket. Use the <a
         * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetBucketAccessKeys.html">GetBucketAccessKeys</a>
         * action to get a list of current access keys for a specific bucket. For more
         * information about access keys, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-creating-bucket-access-keys">Creating
         * access keys for a bucket in Amazon Lightsail</a> in the <i>Amazon Lightsail
         * Developer Guide</i>.</p>  <p>The <code>secretAccessKey</code> value
         * is returned only in response to the <code>CreateBucketAccessKey</code> action.
         * You can get a secret access key only when you first create an access key; you
         * cannot get the secret access key later. If you lose the secret access key, you
         * must create a new access key.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateBucketAccessKey">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBucketAccessKeyOutcome CreateBucketAccessKey(const Model::CreateBucketAccessKeyRequest& request) const;

        /**
         * A Callable wrapper for CreateBucketAccessKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBucketAccessKeyOutcomeCallable CreateBucketAccessKeyCallable(const Model::CreateBucketAccessKeyRequest& request) const;

        /**
         * An Async wrapper for CreateBucketAccessKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBucketAccessKeyAsync(const Model::CreateBucketAccessKeyRequest& request, const CreateBucketAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an SSL/TLS certificate for an Amazon Lightsail content delivery
         * network (CDN) distribution and a container service.</p> <p>After the certificate
         * is valid, use the <code>AttachCertificateToDistribution</code> action to use the
         * certificate and its domains with your distribution. Or use the
         * <code>UpdateContainerService</code> action to use the certificate and its
         * domains with your container service.</p>  <p>Only certificates
         * created in the <code>us-east-1</code> Amazon Web Services Region can be attached
         * to Lightsail distributions. Lightsail distributions are global resources that
         * can reference an origin in any Amazon Web Services Region, and distribute its
         * content globally. However, all distributions are located in the
         * <code>us-east-1</code> Region.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCertificateOutcome CreateCertificate(const Model::CreateCertificateRequest& request) const;

        /**
         * A Callable wrapper for CreateCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCertificateOutcomeCallable CreateCertificateCallable(const Model::CreateCertificateRequest& request) const;

        /**
         * An Async wrapper for CreateCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCertificateAsync(const Model::CreateCertificateRequest& request, const CreateCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an AWS CloudFormation stack, which creates a new Amazon EC2 instance
         * from an exported Amazon Lightsail snapshot. This operation results in a
         * CloudFormation stack record that can be used to track the AWS CloudFormation
         * stack created. Use the <code>get cloud formation stack records</code> operation
         * to get a list of the CloudFormation stacks created.</p>  <p>Wait
         * until after your new Amazon EC2 instance is created before running the
         * <code>create cloud formation stack</code> operation again with the same export
         * snapshot record.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateCloudFormationStack">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCloudFormationStackOutcome CreateCloudFormationStack(const Model::CreateCloudFormationStackRequest& request) const;

        /**
         * A Callable wrapper for CreateCloudFormationStack that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCloudFormationStackOutcomeCallable CreateCloudFormationStackCallable(const Model::CreateCloudFormationStackRequest& request) const;

        /**
         * An Async wrapper for CreateCloudFormationStack that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCloudFormationStackAsync(const Model::CreateCloudFormationStackRequest& request, const CreateCloudFormationStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an email or SMS text message contact method.</p> <p>A contact method
         * is used to send you notifications about your Amazon Lightsail resources. You can
         * add one email address and one mobile phone number contact method in each Amazon
         * Web Services Region. However, SMS text messaging is not supported in some Amazon
         * Web Services Regions, and SMS text messages cannot be sent to some
         * countries/regions. For more information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-notifications">Notifications
         * in Amazon Lightsail</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateContactMethod">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContactMethodOutcome CreateContactMethod(const Model::CreateContactMethodRequest& request) const;

        /**
         * A Callable wrapper for CreateContactMethod that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateContactMethodOutcomeCallable CreateContactMethodCallable(const Model::CreateContactMethodRequest& request) const;

        /**
         * An Async wrapper for CreateContactMethod that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateContactMethodAsync(const Model::CreateContactMethodRequest& request, const CreateContactMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon Lightsail container service.</p> <p>A Lightsail container
         * service is a compute resource to which you can deploy containers. For more
         * information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-container-services">Container
         * services in Amazon Lightsail</a> in the <i>Lightsail Dev
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateContainerService">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContainerServiceOutcome CreateContainerService(const Model::CreateContainerServiceRequest& request) const;

        /**
         * A Callable wrapper for CreateContainerService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateContainerServiceOutcomeCallable CreateContainerServiceCallable(const Model::CreateContainerServiceRequest& request) const;

        /**
         * An Async wrapper for CreateContainerService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateContainerServiceAsync(const Model::CreateContainerServiceRequest& request, const CreateContainerServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a deployment for your Amazon Lightsail container service.</p> <p>A
         * deployment specifies the containers that will be launched on the container
         * service and their settings, such as the ports to open, the environment variables
         * to apply, and the launch command to run. It also specifies the container that
         * will serve as the public endpoint of the deployment and its settings, such as
         * the HTTP or HTTPS port to use, and the health check configuration.</p> <p>You
         * can deploy containers to your container service using container images from a
         * public registry such as Amazon ECR Public, or from your local machine. For more
         * information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-creating-container-images">Creating
         * container images for your Amazon Lightsail container services</a> in the
         * <i>Amazon Lightsail Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateContainerServiceDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContainerServiceDeploymentOutcome CreateContainerServiceDeployment(const Model::CreateContainerServiceDeploymentRequest& request) const;

        /**
         * A Callable wrapper for CreateContainerServiceDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateContainerServiceDeploymentOutcomeCallable CreateContainerServiceDeploymentCallable(const Model::CreateContainerServiceDeploymentRequest& request) const;

        /**
         * An Async wrapper for CreateContainerServiceDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateContainerServiceDeploymentAsync(const Model::CreateContainerServiceDeploymentRequest& request, const CreateContainerServiceDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a temporary set of log in credentials that you can use to log in to
         * the Docker process on your local machine. After you're logged in, you can use
         * the native Docker commands to push your local container images to the container
         * image registry of your Amazon Lightsail account so that you can use them with
         * your Lightsail container service. The log in credentials expire 12 hours after
         * they are created, at which point you will need to create a new set of log in
         * credentials.</p>  <p>You can only push container images to the container
         * service registry of your Lightsail account. You cannot pull container images or
         * perform any other container image management actions on the container service
         * registry.</p>  <p>After you push your container images to the container
         * image registry of your Lightsail account, use the
         * <code>RegisterContainerImage</code> action to register the pushed images to a
         * specific Lightsail container service.</p>  <p>This action is not required
         * if you install and use the Lightsail Control (lightsailctl) plugin to push
         * container images to your Lightsail container service. For more information, see
         * <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-pushing-container-images">Pushing
         * and managing container images on your Amazon Lightsail container services</a> in
         * the <i>Amazon Lightsail Developer Guide</i>.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateContainerServiceRegistryLogin">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContainerServiceRegistryLoginOutcome CreateContainerServiceRegistryLogin(const Model::CreateContainerServiceRegistryLoginRequest& request) const;

        /**
         * A Callable wrapper for CreateContainerServiceRegistryLogin that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateContainerServiceRegistryLoginOutcomeCallable CreateContainerServiceRegistryLoginCallable(const Model::CreateContainerServiceRegistryLoginRequest& request) const;

        /**
         * An Async wrapper for CreateContainerServiceRegistryLogin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateContainerServiceRegistryLoginAsync(const Model::CreateContainerServiceRegistryLoginRequest& request, const CreateContainerServiceRegistryLoginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a block storage disk that can be attached to an Amazon Lightsail
         * instance in the same Availability Zone (e.g., <code>us-east-2a</code>).</p>
         * <p>The <code>create disk</code> operation supports tag-based access control via
         * request tags. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateDisk">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDiskOutcome CreateDisk(const Model::CreateDiskRequest& request) const;

        /**
         * A Callable wrapper for CreateDisk that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDiskOutcomeCallable CreateDiskCallable(const Model::CreateDiskRequest& request) const;

        /**
         * An Async wrapper for CreateDisk that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDiskAsync(const Model::CreateDiskRequest& request, const CreateDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a block storage disk from a manual or automatic snapshot of a disk.
         * The resulting disk can be attached to an Amazon Lightsail instance in the same
         * Availability Zone (e.g., <code>us-east-2a</code>).</p> <p>The <code>create disk
         * from snapshot</code> operation supports tag-based access control via request
         * tags and resource tags applied to the resource identified by <code>disk snapshot
         * name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateDiskFromSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDiskFromSnapshotOutcome CreateDiskFromSnapshot(const Model::CreateDiskFromSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CreateDiskFromSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDiskFromSnapshotOutcomeCallable CreateDiskFromSnapshotCallable(const Model::CreateDiskFromSnapshotRequest& request) const;

        /**
         * An Async wrapper for CreateDiskFromSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDiskFromSnapshotAsync(const Model::CreateDiskFromSnapshotRequest& request, const CreateDiskFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a snapshot of a block storage disk. You can use snapshots for
         * backups, to make copies of disks, and to save data before shutting down a
         * Lightsail instance.</p> <p>You can take a snapshot of an attached disk that is
         * in use; however, snapshots only capture data that has been written to your disk
         * at the time the snapshot command is issued. This may exclude any data that has
         * been cached by any applications or the operating system. If you can pause any
         * file systems on the disk long enough to take a snapshot, your snapshot should be
         * complete. Nevertheless, if you cannot pause all file writes to the disk, you
         * should unmount the disk from within the Lightsail instance, issue the create
         * disk snapshot command, and then remount the disk to ensure a consistent and
         * complete snapshot. You may remount and use your disk while the snapshot status
         * is pending.</p> <p>You can also use this operation to create a snapshot of an
         * instance's system volume. You might want to do this, for example, to recover
         * data from the system volume of a botched instance or to create a backup of the
         * system volume like you would for a block storage disk. To create a snapshot of a
         * system volume, just define the <code>instance name</code> parameter when issuing
         * the snapshot command, and a snapshot of the defined instance's system volume
         * will be created. After the snapshot is available, you can create a block storage
         * disk from the snapshot and attach it to a running instance to access the data on
         * the disk.</p> <p>The <code>create disk snapshot</code> operation supports
         * tag-based access control via request tags. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateDiskSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDiskSnapshotOutcome CreateDiskSnapshot(const Model::CreateDiskSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CreateDiskSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDiskSnapshotOutcomeCallable CreateDiskSnapshotCallable(const Model::CreateDiskSnapshotRequest& request) const;

        /**
         * An Async wrapper for CreateDiskSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDiskSnapshotAsync(const Model::CreateDiskSnapshotRequest& request, const CreateDiskSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon Lightsail content delivery network (CDN) distribution.</p>
         * <p>A distribution is a globally distributed network of caching servers that
         * improve the performance of your website or web application hosted on a Lightsail
         * instance. For more information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-content-delivery-network-distributions">Content
         * delivery networks in Amazon Lightsail</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateDistribution">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDistributionOutcome CreateDistribution(const Model::CreateDistributionRequest& request) const;

        /**
         * A Callable wrapper for CreateDistribution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDistributionOutcomeCallable CreateDistributionCallable(const Model::CreateDistributionRequest& request) const;

        /**
         * An Async wrapper for CreateDistribution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDistributionAsync(const Model::CreateDistributionRequest& request, const CreateDistributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a domain resource for the specified domain (e.g., example.com).</p>
         * <p>The <code>create domain</code> operation supports tag-based access control
         * via request tags. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDomainOutcome CreateDomain(const Model::CreateDomainRequest& request) const;

        /**
         * A Callable wrapper for CreateDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDomainOutcomeCallable CreateDomainCallable(const Model::CreateDomainRequest& request) const;

        /**
         * An Async wrapper for CreateDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDomainAsync(const Model::CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates one of the following domain name system (DNS) records in a domain DNS
         * zone: Address (A), canonical name (CNAME), mail exchanger (MX), name server
         * (NS), start of authority (SOA), service locator (SRV), or text (TXT).</p> <p>The
         * <code>create domain entry</code> operation supports tag-based access control via
         * resource tags applied to the resource identified by <code>domain name</code>.
         * For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateDomainEntry">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDomainEntryOutcome CreateDomainEntry(const Model::CreateDomainEntryRequest& request) const;

        /**
         * A Callable wrapper for CreateDomainEntry that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDomainEntryOutcomeCallable CreateDomainEntryCallable(const Model::CreateDomainEntryRequest& request) const;

        /**
         * An Async wrapper for CreateDomainEntry that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDomainEntryAsync(const Model::CreateDomainEntryRequest& request, const CreateDomainEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a snapshot of a specific virtual private server, or <i>instance</i>.
         * You can use a snapshot to create a new instance that is based on that
         * snapshot.</p> <p>The <code>create instance snapshot</code> operation supports
         * tag-based access control via request tags. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateInstanceSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInstanceSnapshotOutcome CreateInstanceSnapshot(const Model::CreateInstanceSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CreateInstanceSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInstanceSnapshotOutcomeCallable CreateInstanceSnapshotCallable(const Model::CreateInstanceSnapshotRequest& request) const;

        /**
         * An Async wrapper for CreateInstanceSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInstanceSnapshotAsync(const Model::CreateInstanceSnapshotRequest& request, const CreateInstanceSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates one or more Amazon Lightsail instances.</p> <p>The <code>create
         * instances</code> operation supports tag-based access control via request tags.
         * For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInstancesOutcome CreateInstances(const Model::CreateInstancesRequest& request) const;

        /**
         * A Callable wrapper for CreateInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInstancesOutcomeCallable CreateInstancesCallable(const Model::CreateInstancesRequest& request) const;

        /**
         * An Async wrapper for CreateInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInstancesAsync(const Model::CreateInstancesRequest& request, const CreateInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates one or more new instances from a manual or automatic snapshot of an
         * instance.</p> <p>The <code>create instances from snapshot</code> operation
         * supports tag-based access control via request tags and resource tags applied to
         * the resource identified by <code>instance snapshot name</code>. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateInstancesFromSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInstancesFromSnapshotOutcome CreateInstancesFromSnapshot(const Model::CreateInstancesFromSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CreateInstancesFromSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInstancesFromSnapshotOutcomeCallable CreateInstancesFromSnapshotCallable(const Model::CreateInstancesFromSnapshotRequest& request) const;

        /**
         * An Async wrapper for CreateInstancesFromSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInstancesFromSnapshotAsync(const Model::CreateInstancesFromSnapshotRequest& request, const CreateInstancesFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a custom SSH key pair that you can use with an Amazon Lightsail
         * instance.</p>  <p>Use the <a
         * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_DownloadDefaultKeyPair.html">DownloadDefaultKeyPair</a>
         * action to create a Lightsail default key pair in an Amazon Web Services Region
         * where a default key pair does not currently exist.</p>  <p>The
         * <code>create key pair</code> operation supports tag-based access control via
         * request tags. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateKeyPair">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateKeyPairOutcome CreateKeyPair(const Model::CreateKeyPairRequest& request) const;

        /**
         * A Callable wrapper for CreateKeyPair that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateKeyPairOutcomeCallable CreateKeyPairCallable(const Model::CreateKeyPairRequest& request) const;

        /**
         * An Async wrapper for CreateKeyPair that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateKeyPairAsync(const Model::CreateKeyPairRequest& request, const CreateKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Lightsail load balancer. To learn more about deciding whether to
         * load balance your application, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/configure-lightsail-instances-for-load-balancing">Configure
         * your Lightsail instances for load balancing</a>. You can create up to 5 load
         * balancers per AWS Region in your account.</p> <p>When you create a load
         * balancer, you can specify a unique name and port settings. To change additional
         * load balancer settings, use the <code>UpdateLoadBalancerAttribute</code>
         * operation.</p> <p>The <code>create load balancer</code> operation supports
         * tag-based access control via request tags. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateLoadBalancer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLoadBalancerOutcome CreateLoadBalancer(const Model::CreateLoadBalancerRequest& request) const;

        /**
         * A Callable wrapper for CreateLoadBalancer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLoadBalancerOutcomeCallable CreateLoadBalancerCallable(const Model::CreateLoadBalancerRequest& request) const;

        /**
         * An Async wrapper for CreateLoadBalancer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLoadBalancerAsync(const Model::CreateLoadBalancerRequest& request, const CreateLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an SSL/TLS certificate for an Amazon Lightsail load balancer.</p>
         * <p>TLS is just an updated, more secure version of Secure Socket Layer (SSL).</p>
         * <p>The <code>CreateLoadBalancerTlsCertificate</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * <code>load balancer name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateLoadBalancerTlsCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLoadBalancerTlsCertificateOutcome CreateLoadBalancerTlsCertificate(const Model::CreateLoadBalancerTlsCertificateRequest& request) const;

        /**
         * A Callable wrapper for CreateLoadBalancerTlsCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLoadBalancerTlsCertificateOutcomeCallable CreateLoadBalancerTlsCertificateCallable(const Model::CreateLoadBalancerTlsCertificateRequest& request) const;

        /**
         * An Async wrapper for CreateLoadBalancerTlsCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLoadBalancerTlsCertificateAsync(const Model::CreateLoadBalancerTlsCertificateRequest& request, const CreateLoadBalancerTlsCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new database in Amazon Lightsail.</p> <p>The <code>create
         * relational database</code> operation supports tag-based access control via
         * request tags. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateRelationalDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRelationalDatabaseOutcome CreateRelationalDatabase(const Model::CreateRelationalDatabaseRequest& request) const;

        /**
         * A Callable wrapper for CreateRelationalDatabase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRelationalDatabaseOutcomeCallable CreateRelationalDatabaseCallable(const Model::CreateRelationalDatabaseRequest& request) const;

        /**
         * An Async wrapper for CreateRelationalDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRelationalDatabaseAsync(const Model::CreateRelationalDatabaseRequest& request, const CreateRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new database from an existing database snapshot in Amazon
         * Lightsail.</p> <p>You can create a new database from a snapshot in if something
         * goes wrong with your original database, or to change it to a different plan,
         * such as a high availability or standard plan.</p> <p>The <code>create relational
         * database from snapshot</code> operation supports tag-based access control via
         * request tags and resource tags applied to the resource identified by
         * relationalDatabaseSnapshotName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateRelationalDatabaseFromSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRelationalDatabaseFromSnapshotOutcome CreateRelationalDatabaseFromSnapshot(const Model::CreateRelationalDatabaseFromSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CreateRelationalDatabaseFromSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRelationalDatabaseFromSnapshotOutcomeCallable CreateRelationalDatabaseFromSnapshotCallable(const Model::CreateRelationalDatabaseFromSnapshotRequest& request) const;

        /**
         * An Async wrapper for CreateRelationalDatabaseFromSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRelationalDatabaseFromSnapshotAsync(const Model::CreateRelationalDatabaseFromSnapshotRequest& request, const CreateRelationalDatabaseFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a snapshot of your database in Amazon Lightsail. You can use
         * snapshots for backups, to make copies of a database, and to save data before
         * deleting a database.</p> <p>The <code>create relational database snapshot</code>
         * operation supports tag-based access control via request tags. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateRelationalDatabaseSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRelationalDatabaseSnapshotOutcome CreateRelationalDatabaseSnapshot(const Model::CreateRelationalDatabaseSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CreateRelationalDatabaseSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRelationalDatabaseSnapshotOutcomeCallable CreateRelationalDatabaseSnapshotCallable(const Model::CreateRelationalDatabaseSnapshotRequest& request) const;

        /**
         * An Async wrapper for CreateRelationalDatabaseSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRelationalDatabaseSnapshotAsync(const Model::CreateRelationalDatabaseSnapshotRequest& request, const CreateRelationalDatabaseSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an alarm.</p> <p>An alarm is used to monitor a single metric for one
         * of your resources. When a metric condition is met, the alarm can notify you by
         * email, SMS text message, and a banner displayed on the Amazon Lightsail console.
         * For more information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-alarms">Alarms
         * in Amazon Lightsail</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteAlarm">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAlarmOutcome DeleteAlarm(const Model::DeleteAlarmRequest& request) const;

        /**
         * A Callable wrapper for DeleteAlarm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAlarmOutcomeCallable DeleteAlarmCallable(const Model::DeleteAlarmRequest& request) const;

        /**
         * An Async wrapper for DeleteAlarm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAlarmAsync(const Model::DeleteAlarmRequest& request, const DeleteAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an automatic snapshot of an instance or disk. For more information,
         * see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteAutoSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAutoSnapshotOutcome DeleteAutoSnapshot(const Model::DeleteAutoSnapshotRequest& request) const;

        /**
         * A Callable wrapper for DeleteAutoSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAutoSnapshotOutcomeCallable DeleteAutoSnapshotCallable(const Model::DeleteAutoSnapshotRequest& request) const;

        /**
         * An Async wrapper for DeleteAutoSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAutoSnapshotAsync(const Model::DeleteAutoSnapshotRequest& request, const DeleteAutoSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a Amazon Lightsail bucket.</p>  <p>When you delete your bucket,
         * the bucket name is released and can be reused for a new bucket in your account
         * or another Amazon Web Services account.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteBucket">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBucketOutcome DeleteBucket(const Model::DeleteBucketRequest& request) const;

        /**
         * A Callable wrapper for DeleteBucket that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBucketOutcomeCallable DeleteBucketCallable(const Model::DeleteBucketRequest& request) const;

        /**
         * An Async wrapper for DeleteBucket that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBucketAsync(const Model::DeleteBucketRequest& request, const DeleteBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an access key for the specified Amazon Lightsail bucket.</p> <p>We
         * recommend that you delete an access key if the secret access key is
         * compromised.</p> <p>For more information about access keys, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-creating-bucket-access-keys">Creating
         * access keys for a bucket in Amazon Lightsail</a> in the <i>Amazon Lightsail
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteBucketAccessKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBucketAccessKeyOutcome DeleteBucketAccessKey(const Model::DeleteBucketAccessKeyRequest& request) const;

        /**
         * A Callable wrapper for DeleteBucketAccessKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBucketAccessKeyOutcomeCallable DeleteBucketAccessKeyCallable(const Model::DeleteBucketAccessKeyRequest& request) const;

        /**
         * An Async wrapper for DeleteBucketAccessKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBucketAccessKeyAsync(const Model::DeleteBucketAccessKeyRequest& request, const DeleteBucketAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an SSL/TLS certificate for your Amazon Lightsail content delivery
         * network (CDN) distribution.</p> <p>Certificates that are currently attached to a
         * distribution cannot be deleted. Use the
         * <code>DetachCertificateFromDistribution</code> action to detach a certificate
         * from a distribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCertificateOutcome DeleteCertificate(const Model::DeleteCertificateRequest& request) const;

        /**
         * A Callable wrapper for DeleteCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCertificateOutcomeCallable DeleteCertificateCallable(const Model::DeleteCertificateRequest& request) const;

        /**
         * An Async wrapper for DeleteCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCertificateAsync(const Model::DeleteCertificateRequest& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a contact method.</p> <p>A contact method is used to send you
         * notifications about your Amazon Lightsail resources. You can add one email
         * address and one mobile phone number contact method in each Amazon Web Services
         * Region. However, SMS text messaging is not supported in some Amazon Web Services
         * Regions, and SMS text messages cannot be sent to some countries/regions. For
         * more information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-notifications">Notifications
         * in Amazon Lightsail</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteContactMethod">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContactMethodOutcome DeleteContactMethod(const Model::DeleteContactMethodRequest& request) const;

        /**
         * A Callable wrapper for DeleteContactMethod that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteContactMethodOutcomeCallable DeleteContactMethodCallable(const Model::DeleteContactMethodRequest& request) const;

        /**
         * An Async wrapper for DeleteContactMethod that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteContactMethodAsync(const Model::DeleteContactMethodRequest& request, const DeleteContactMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a container image that is registered to your Amazon Lightsail
         * container service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteContainerImage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContainerImageOutcome DeleteContainerImage(const Model::DeleteContainerImageRequest& request) const;

        /**
         * A Callable wrapper for DeleteContainerImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteContainerImageOutcomeCallable DeleteContainerImageCallable(const Model::DeleteContainerImageRequest& request) const;

        /**
         * An Async wrapper for DeleteContainerImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteContainerImageAsync(const Model::DeleteContainerImageRequest& request, const DeleteContainerImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes your Amazon Lightsail container service.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteContainerService">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContainerServiceOutcome DeleteContainerService(const Model::DeleteContainerServiceRequest& request) const;

        /**
         * A Callable wrapper for DeleteContainerService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteContainerServiceOutcomeCallable DeleteContainerServiceCallable(const Model::DeleteContainerServiceRequest& request) const;

        /**
         * An Async wrapper for DeleteContainerService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteContainerServiceAsync(const Model::DeleteContainerServiceRequest& request, const DeleteContainerServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified block storage disk. The disk must be in the
         * <code>available</code> state (not attached to a Lightsail instance).</p> 
         * <p>The disk may remain in the <code>deleting</code> state for several
         * minutes.</p>  <p>The <code>delete disk</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * <code>disk name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteDisk">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDiskOutcome DeleteDisk(const Model::DeleteDiskRequest& request) const;

        /**
         * A Callable wrapper for DeleteDisk that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDiskOutcomeCallable DeleteDiskCallable(const Model::DeleteDiskRequest& request) const;

        /**
         * An Async wrapper for DeleteDisk that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDiskAsync(const Model::DeleteDiskRequest& request, const DeleteDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified disk snapshot.</p> <p>When you make periodic snapshots
         * of a disk, the snapshots are incremental, and only the blocks on the device that
         * have changed since your last snapshot are saved in the new snapshot. When you
         * delete a snapshot, only the data not needed for any other snapshot is removed.
         * So regardless of which prior snapshots have been deleted, all active snapshots
         * will have access to all the information needed to restore the disk.</p> <p>The
         * <code>delete disk snapshot</code> operation supports tag-based access control
         * via resource tags applied to the resource identified by <code>disk snapshot
         * name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteDiskSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDiskSnapshotOutcome DeleteDiskSnapshot(const Model::DeleteDiskSnapshotRequest& request) const;

        /**
         * A Callable wrapper for DeleteDiskSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDiskSnapshotOutcomeCallable DeleteDiskSnapshotCallable(const Model::DeleteDiskSnapshotRequest& request) const;

        /**
         * An Async wrapper for DeleteDiskSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDiskSnapshotAsync(const Model::DeleteDiskSnapshotRequest& request, const DeleteDiskSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes your Amazon Lightsail content delivery network (CDN)
         * distribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteDistribution">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDistributionOutcome DeleteDistribution(const Model::DeleteDistributionRequest& request) const;

        /**
         * A Callable wrapper for DeleteDistribution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDistributionOutcomeCallable DeleteDistributionCallable(const Model::DeleteDistributionRequest& request) const;

        /**
         * An Async wrapper for DeleteDistribution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDistributionAsync(const Model::DeleteDistributionRequest& request, const DeleteDistributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified domain recordset and all of its domain records.</p>
         * <p>The <code>delete domain</code> operation supports tag-based access control
         * via resource tags applied to the resource identified by <code>domain
         * name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainOutcome DeleteDomain(const Model::DeleteDomainRequest& request) const;

        /**
         * A Callable wrapper for DeleteDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDomainOutcomeCallable DeleteDomainCallable(const Model::DeleteDomainRequest& request) const;

        /**
         * An Async wrapper for DeleteDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDomainAsync(const Model::DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specific domain entry.</p> <p>The <code>delete domain entry</code>
         * operation supports tag-based access control via resource tags applied to the
         * resource identified by <code>domain name</code>. For more information, see the
         * <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteDomainEntry">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainEntryOutcome DeleteDomainEntry(const Model::DeleteDomainEntryRequest& request) const;

        /**
         * A Callable wrapper for DeleteDomainEntry that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDomainEntryOutcomeCallable DeleteDomainEntryCallable(const Model::DeleteDomainEntryRequest& request) const;

        /**
         * An Async wrapper for DeleteDomainEntry that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDomainEntryAsync(const Model::DeleteDomainEntryRequest& request, const DeleteDomainEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Amazon Lightsail instance.</p> <p>The <code>delete instance</code>
         * operation supports tag-based access control via resource tags applied to the
         * resource identified by <code>instance name</code>. For more information, see the
         * <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInstanceOutcome DeleteInstance(const Model::DeleteInstanceRequest& request) const;

        /**
         * A Callable wrapper for DeleteInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInstanceOutcomeCallable DeleteInstanceCallable(const Model::DeleteInstanceRequest& request) const;

        /**
         * An Async wrapper for DeleteInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specific snapshot of a virtual private server (or
         * <i>instance</i>).</p> <p>The <code>delete instance snapshot</code> operation
         * supports tag-based access control via resource tags applied to the resource
         * identified by <code>instance snapshot name</code>. For more information, see the
         * <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteInstanceSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInstanceSnapshotOutcome DeleteInstanceSnapshot(const Model::DeleteInstanceSnapshotRequest& request) const;

        /**
         * A Callable wrapper for DeleteInstanceSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInstanceSnapshotOutcomeCallable DeleteInstanceSnapshotCallable(const Model::DeleteInstanceSnapshotRequest& request) const;

        /**
         * An Async wrapper for DeleteInstanceSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInstanceSnapshotAsync(const Model::DeleteInstanceSnapshotRequest& request, const DeleteInstanceSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified key pair by removing the public key from Amazon
         * Lightsail.</p> <p>You can delete key pairs that were created using the <a
         * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_ImportKeyPair.html">ImportKeyPair</a>
         * and <a
         * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_CreateKeyPair.html">CreateKeyPair</a>
         * actions, as well as the Lightsail default key pair. A new default key pair will
         * not be created unless you launch an instance without specifying a custom key
         * pair, or you call the <a
         * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_DownloadDefaultKeyPair.html">DownloadDefaultKeyPair</a>
         * API. </p> <p>The <code>delete key pair</code> operation supports tag-based
         * access control via resource tags applied to the resource identified by <code>key
         * pair name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteKeyPair">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteKeyPairOutcome DeleteKeyPair(const Model::DeleteKeyPairRequest& request) const;

        /**
         * A Callable wrapper for DeleteKeyPair that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteKeyPairOutcomeCallable DeleteKeyPairCallable(const Model::DeleteKeyPairRequest& request) const;

        /**
         * An Async wrapper for DeleteKeyPair that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteKeyPairAsync(const Model::DeleteKeyPairRequest& request, const DeleteKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the known host key or certificate used by the Amazon Lightsail
         * browser-based SSH or RDP clients to authenticate an instance. This operation
         * enables the Lightsail browser-based SSH or RDP clients to connect to the
         * instance after a host key mismatch.</p>  <p>Perform this operation
         * only if you were expecting the host key or certificate mismatch or if you are
         * familiar with the new host key or certificate on the instance. For more
         * information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-troubleshooting-browser-based-ssh-rdp-client-connection">Troubleshooting
         * connection issues when using the Amazon Lightsail browser-based SSH or RDP
         * client</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteKnownHostKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteKnownHostKeysOutcome DeleteKnownHostKeys(const Model::DeleteKnownHostKeysRequest& request) const;

        /**
         * A Callable wrapper for DeleteKnownHostKeys that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteKnownHostKeysOutcomeCallable DeleteKnownHostKeysCallable(const Model::DeleteKnownHostKeysRequest& request) const;

        /**
         * An Async wrapper for DeleteKnownHostKeys that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteKnownHostKeysAsync(const Model::DeleteKnownHostKeysRequest& request, const DeleteKnownHostKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a Lightsail load balancer and all its associated SSL/TLS
         * certificates. Once the load balancer is deleted, you will need to create a new
         * load balancer, create a new certificate, and verify domain ownership again.</p>
         * <p>The <code>delete load balancer</code> operation supports tag-based access
         * control via resource tags applied to the resource identified by <code>load
         * balancer name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteLoadBalancer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLoadBalancerOutcome DeleteLoadBalancer(const Model::DeleteLoadBalancerRequest& request) const;

        /**
         * A Callable wrapper for DeleteLoadBalancer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLoadBalancerOutcomeCallable DeleteLoadBalancerCallable(const Model::DeleteLoadBalancerRequest& request) const;

        /**
         * An Async wrapper for DeleteLoadBalancer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLoadBalancerAsync(const Model::DeleteLoadBalancerRequest& request, const DeleteLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an SSL/TLS certificate associated with a Lightsail load balancer.</p>
         * <p>The <code>DeleteLoadBalancerTlsCertificate</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * <code>load balancer name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteLoadBalancerTlsCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLoadBalancerTlsCertificateOutcome DeleteLoadBalancerTlsCertificate(const Model::DeleteLoadBalancerTlsCertificateRequest& request) const;

        /**
         * A Callable wrapper for DeleteLoadBalancerTlsCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLoadBalancerTlsCertificateOutcomeCallable DeleteLoadBalancerTlsCertificateCallable(const Model::DeleteLoadBalancerTlsCertificateRequest& request) const;

        /**
         * An Async wrapper for DeleteLoadBalancerTlsCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLoadBalancerTlsCertificateAsync(const Model::DeleteLoadBalancerTlsCertificateRequest& request, const DeleteLoadBalancerTlsCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a database in Amazon Lightsail.</p> <p>The <code>delete relational
         * database</code> operation supports tag-based access control via resource tags
         * applied to the resource identified by relationalDatabaseName. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteRelationalDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRelationalDatabaseOutcome DeleteRelationalDatabase(const Model::DeleteRelationalDatabaseRequest& request) const;

        /**
         * A Callable wrapper for DeleteRelationalDatabase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRelationalDatabaseOutcomeCallable DeleteRelationalDatabaseCallable(const Model::DeleteRelationalDatabaseRequest& request) const;

        /**
         * An Async wrapper for DeleteRelationalDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRelationalDatabaseAsync(const Model::DeleteRelationalDatabaseRequest& request, const DeleteRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a database snapshot in Amazon Lightsail.</p> <p>The <code>delete
         * relational database snapshot</code> operation supports tag-based access control
         * via resource tags applied to the resource identified by relationalDatabaseName.
         * For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteRelationalDatabaseSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRelationalDatabaseSnapshotOutcome DeleteRelationalDatabaseSnapshot(const Model::DeleteRelationalDatabaseSnapshotRequest& request) const;

        /**
         * A Callable wrapper for DeleteRelationalDatabaseSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRelationalDatabaseSnapshotOutcomeCallable DeleteRelationalDatabaseSnapshotCallable(const Model::DeleteRelationalDatabaseSnapshotRequest& request) const;

        /**
         * An Async wrapper for DeleteRelationalDatabaseSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRelationalDatabaseSnapshotAsync(const Model::DeleteRelationalDatabaseSnapshotRequest& request, const DeleteRelationalDatabaseSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detaches an SSL/TLS certificate from your Amazon Lightsail content delivery
         * network (CDN) distribution.</p> <p>After the certificate is detached, your
         * distribution stops accepting traffic for all of the domains that are associated
         * with the certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DetachCertificateFromDistribution">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachCertificateFromDistributionOutcome DetachCertificateFromDistribution(const Model::DetachCertificateFromDistributionRequest& request) const;

        /**
         * A Callable wrapper for DetachCertificateFromDistribution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachCertificateFromDistributionOutcomeCallable DetachCertificateFromDistributionCallable(const Model::DetachCertificateFromDistributionRequest& request) const;

        /**
         * An Async wrapper for DetachCertificateFromDistribution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachCertificateFromDistributionAsync(const Model::DetachCertificateFromDistributionRequest& request, const DetachCertificateFromDistributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detaches a stopped block storage disk from a Lightsail instance. Make sure to
         * unmount any file systems on the device within your operating system before
         * stopping the instance and detaching the disk.</p> <p>The <code>detach
         * disk</code> operation supports tag-based access control via resource tags
         * applied to the resource identified by <code>disk name</code>. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DetachDisk">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachDiskOutcome DetachDisk(const Model::DetachDiskRequest& request) const;

        /**
         * A Callable wrapper for DetachDisk that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachDiskOutcomeCallable DetachDiskCallable(const Model::DetachDiskRequest& request) const;

        /**
         * An Async wrapper for DetachDisk that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachDiskAsync(const Model::DetachDiskRequest& request, const DetachDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detaches the specified instances from a Lightsail load balancer.</p> <p>This
         * operation waits until the instances are no longer needed before they are
         * detached from the load balancer.</p> <p>The <code>detach instances from load
         * balancer</code> operation supports tag-based access control via resource tags
         * applied to the resource identified by <code>load balancer name</code>. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DetachInstancesFromLoadBalancer">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachInstancesFromLoadBalancerOutcome DetachInstancesFromLoadBalancer(const Model::DetachInstancesFromLoadBalancerRequest& request) const;

        /**
         * A Callable wrapper for DetachInstancesFromLoadBalancer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachInstancesFromLoadBalancerOutcomeCallable DetachInstancesFromLoadBalancerCallable(const Model::DetachInstancesFromLoadBalancerRequest& request) const;

        /**
         * An Async wrapper for DetachInstancesFromLoadBalancer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachInstancesFromLoadBalancerAsync(const Model::DetachInstancesFromLoadBalancerRequest& request, const DetachInstancesFromLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detaches a static IP from the Amazon Lightsail instance to which it is
         * attached.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DetachStaticIp">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachStaticIpOutcome DetachStaticIp(const Model::DetachStaticIpRequest& request) const;

        /**
         * A Callable wrapper for DetachStaticIp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachStaticIpOutcomeCallable DetachStaticIpCallable(const Model::DetachStaticIpRequest& request) const;

        /**
         * An Async wrapper for DetachStaticIp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachStaticIpAsync(const Model::DetachStaticIpRequest& request, const DetachStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables an add-on for an Amazon Lightsail resource. For more information,
         * see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DisableAddOn">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableAddOnOutcome DisableAddOn(const Model::DisableAddOnRequest& request) const;

        /**
         * A Callable wrapper for DisableAddOn that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableAddOnOutcomeCallable DisableAddOnCallable(const Model::DisableAddOnRequest& request) const;

        /**
         * An Async wrapper for DisableAddOn that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableAddOnAsync(const Model::DisableAddOnRequest& request, const DisableAddOnResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Downloads the regional Amazon Lightsail default key pair.</p> <p>This action
         * also creates a Lightsail default key pair if a default key pair does not
         * currently exist in the Amazon Web Services Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DownloadDefaultKeyPair">AWS
         * API Reference</a></p>
         */
        virtual Model::DownloadDefaultKeyPairOutcome DownloadDefaultKeyPair(const Model::DownloadDefaultKeyPairRequest& request) const;

        /**
         * A Callable wrapper for DownloadDefaultKeyPair that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DownloadDefaultKeyPairOutcomeCallable DownloadDefaultKeyPairCallable(const Model::DownloadDefaultKeyPairRequest& request) const;

        /**
         * An Async wrapper for DownloadDefaultKeyPair that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DownloadDefaultKeyPairAsync(const Model::DownloadDefaultKeyPairRequest& request, const DownloadDefaultKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables or modifies an add-on for an Amazon Lightsail resource. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/EnableAddOn">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableAddOnOutcome EnableAddOn(const Model::EnableAddOnRequest& request) const;

        /**
         * A Callable wrapper for EnableAddOn that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableAddOnOutcomeCallable EnableAddOnCallable(const Model::EnableAddOnRequest& request) const;

        /**
         * An Async wrapper for EnableAddOn that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableAddOnAsync(const Model::EnableAddOnRequest& request, const EnableAddOnResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Exports an Amazon Lightsail instance or block storage disk snapshot to Amazon
         * Elastic Compute Cloud (Amazon EC2). This operation results in an export snapshot
         * record that can be used with the <code>create cloud formation stack</code>
         * operation to create new Amazon EC2 instances.</p> <p>Exported instance snapshots
         * appear in Amazon EC2 as Amazon Machine Images (AMIs), and the instance system
         * disk appears as an Amazon Elastic Block Store (Amazon EBS) volume. Exported disk
         * snapshots appear in Amazon EC2 as Amazon EBS volumes. Snapshots are exported to
         * the same Amazon Web Services Region in Amazon EC2 as the source Lightsail
         * snapshot.</p> <p/> <p>The <code>export snapshot</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * <code>source snapshot name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p>  <p>Use the <code>get instance
         * snapshots</code> or <code>get disk snapshots</code> operations to get a list of
         * snapshots that you can export to Amazon EC2.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/ExportSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportSnapshotOutcome ExportSnapshot(const Model::ExportSnapshotRequest& request) const;

        /**
         * A Callable wrapper for ExportSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExportSnapshotOutcomeCallable ExportSnapshotCallable(const Model::ExportSnapshotRequest& request) const;

        /**
         * An Async wrapper for ExportSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ExportSnapshotAsync(const Model::ExportSnapshotRequest& request, const ExportSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the names of all active (not deleted) resources.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetActiveNames">AWS
         * API Reference</a></p>
         */
        virtual Model::GetActiveNamesOutcome GetActiveNames(const Model::GetActiveNamesRequest& request) const;

        /**
         * A Callable wrapper for GetActiveNames that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetActiveNamesOutcomeCallable GetActiveNamesCallable(const Model::GetActiveNamesRequest& request) const;

        /**
         * An Async wrapper for GetActiveNames that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetActiveNamesAsync(const Model::GetActiveNamesRequest& request, const GetActiveNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the configured alarms. Specify an alarm name in
         * your request to return information about a specific alarm, or specify a
         * monitored resource name to return information about all alarms for a specific
         * resource.</p> <p>An alarm is used to monitor a single metric for one of your
         * resources. When a metric condition is met, the alarm can notify you by email,
         * SMS text message, and a banner displayed on the Amazon Lightsail console. For
         * more information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-alarms">Alarms
         * in Amazon Lightsail</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetAlarms">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAlarmsOutcome GetAlarms(const Model::GetAlarmsRequest& request) const;

        /**
         * A Callable wrapper for GetAlarms that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAlarmsOutcomeCallable GetAlarmsCallable(const Model::GetAlarmsRequest& request) const;

        /**
         * An Async wrapper for GetAlarms that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAlarmsAsync(const Model::GetAlarmsRequest& request, const GetAlarmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the available automatic snapshots for an instance or disk. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetAutoSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAutoSnapshotsOutcome GetAutoSnapshots(const Model::GetAutoSnapshotsRequest& request) const;

        /**
         * A Callable wrapper for GetAutoSnapshots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAutoSnapshotsOutcomeCallable GetAutoSnapshotsCallable(const Model::GetAutoSnapshotsRequest& request) const;

        /**
         * An Async wrapper for GetAutoSnapshots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAutoSnapshotsAsync(const Model::GetAutoSnapshotsRequest& request, const GetAutoSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the list of available instance images, or <i>blueprints</i>. You can
         * use a blueprint to create a new instance already running a specific operating
         * system, as well as a preinstalled app or development stack. The software each
         * instance is running depends on the blueprint image you choose.</p>  <p>Use
         * active blueprints when creating new instances. Inactive blueprints are listed to
         * support customers with existing instances and are not necessarily available to
         * create new instances. Blueprints are marked inactive when they become outdated
         * due to operating system updates or new application releases.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetBlueprints">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBlueprintsOutcome GetBlueprints(const Model::GetBlueprintsRequest& request) const;

        /**
         * A Callable wrapper for GetBlueprints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBlueprintsOutcomeCallable GetBlueprintsCallable(const Model::GetBlueprintsRequest& request) const;

        /**
         * An Async wrapper for GetBlueprints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBlueprintsAsync(const Model::GetBlueprintsRequest& request, const GetBlueprintsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the existing access key IDs for the specified Amazon Lightsail
         * bucket.</p>  <p>This action does not return the secret access key
         * value of an access key. You can get a secret access key only when you create it
         * from the response of the <a
         * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_CreateBucketAccessKey.html">CreateBucketAccessKey</a>
         * action. If you lose the secret access key, you must create a new access key.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetBucketAccessKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketAccessKeysOutcome GetBucketAccessKeys(const Model::GetBucketAccessKeysRequest& request) const;

        /**
         * A Callable wrapper for GetBucketAccessKeys that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketAccessKeysOutcomeCallable GetBucketAccessKeysCallable(const Model::GetBucketAccessKeysRequest& request) const;

        /**
         * An Async wrapper for GetBucketAccessKeys that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketAccessKeysAsync(const Model::GetBucketAccessKeysRequest& request, const GetBucketAccessKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the bundles that you can apply to a Amazon Lightsail bucket.</p>
         * <p>The bucket bundle specifies the monthly cost, storage quota, and data
         * transfer quota for a bucket.</p> <p>Use the <a
         * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_UpdateBucketBundle.html">UpdateBucketBundle</a>
         * action to update the bundle for a bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetBucketBundles">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketBundlesOutcome GetBucketBundles(const Model::GetBucketBundlesRequest& request) const;

        /**
         * A Callable wrapper for GetBucketBundles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketBundlesOutcomeCallable GetBucketBundlesCallable(const Model::GetBucketBundlesRequest& request) const;

        /**
         * An Async wrapper for GetBucketBundles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketBundlesAsync(const Model::GetBucketBundlesRequest& request, const GetBucketBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the data points of a specific metric for an Amazon Lightsail
         * bucket.</p> <p>Metrics report the utilization of a bucket. View and collect
         * metric data regularly to monitor the number of objects stored in a bucket
         * (including object versions) and the storage space used by those
         * objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetBucketMetricData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketMetricDataOutcome GetBucketMetricData(const Model::GetBucketMetricDataRequest& request) const;

        /**
         * A Callable wrapper for GetBucketMetricData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketMetricDataOutcomeCallable GetBucketMetricDataCallable(const Model::GetBucketMetricDataRequest& request) const;

        /**
         * An Async wrapper for GetBucketMetricData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketMetricDataAsync(const Model::GetBucketMetricDataRequest& request, const GetBucketMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about one or more Amazon Lightsail buckets. The
         * information returned includes the synchronization status of the Amazon Simple
         * Storage Service (Amazon S3) account-level block public access feature for your
         * Lightsail buckets.</p> <p>For more information about buckets, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/buckets-in-amazon-lightsail">Buckets
         * in Amazon Lightsail</a> in the <i>Amazon Lightsail Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetBuckets">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketsOutcome GetBuckets(const Model::GetBucketsRequest& request) const;

        /**
         * A Callable wrapper for GetBuckets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketsOutcomeCallable GetBucketsCallable(const Model::GetBucketsRequest& request) const;

        /**
         * An Async wrapper for GetBuckets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketsAsync(const Model::GetBucketsRequest& request, const GetBucketsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the bundles that you can apply to an Amazon Lightsail instance when
         * you create it.</p> <p>A bundle describes the specifications of an instance, such
         * as the monthly cost, amount of memory, the number of vCPUs, amount of storage
         * space, and monthly network data transfer quota.</p>  <p>Bundles are
         * referred to as <i>instance plans</i> in the Lightsail console.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetBundles">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBundlesOutcome GetBundles(const Model::GetBundlesRequest& request) const;

        /**
         * A Callable wrapper for GetBundles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBundlesOutcomeCallable GetBundlesCallable(const Model::GetBundlesRequest& request) const;

        /**
         * An Async wrapper for GetBundles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBundlesAsync(const Model::GetBundlesRequest& request, const GetBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about one or more Amazon Lightsail SSL/TLS
         * certificates.</p>  <p>To get a summary of a certificate, ommit
         * <code>includeCertificateDetails</code> from your request. The response will
         * include only the certificate Amazon Resource Name (ARN), certificate name,
         * domain name, and tags.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetCertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCertificatesOutcome GetCertificates(const Model::GetCertificatesRequest& request) const;

        /**
         * A Callable wrapper for GetCertificates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCertificatesOutcomeCallable GetCertificatesCallable(const Model::GetCertificatesRequest& request) const;

        /**
         * An Async wrapper for GetCertificates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCertificatesAsync(const Model::GetCertificatesRequest& request, const GetCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the CloudFormation stack record created as a result of the
         * <code>create cloud formation stack</code> operation.</p> <p>An AWS
         * CloudFormation stack is used to create a new Amazon EC2 instance from an
         * exported Lightsail snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetCloudFormationStackRecords">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCloudFormationStackRecordsOutcome GetCloudFormationStackRecords(const Model::GetCloudFormationStackRecordsRequest& request) const;

        /**
         * A Callable wrapper for GetCloudFormationStackRecords that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCloudFormationStackRecordsOutcomeCallable GetCloudFormationStackRecordsCallable(const Model::GetCloudFormationStackRecordsRequest& request) const;

        /**
         * An Async wrapper for GetCloudFormationStackRecords that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCloudFormationStackRecordsAsync(const Model::GetCloudFormationStackRecordsRequest& request, const GetCloudFormationStackRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the configured contact methods. Specify a protocol
         * in your request to return information about a specific contact method.</p> <p>A
         * contact method is used to send you notifications about your Amazon Lightsail
         * resources. You can add one email address and one mobile phone number contact
         * method in each Amazon Web Services Region. However, SMS text messaging is not
         * supported in some Amazon Web Services Regions, and SMS text messages cannot be
         * sent to some countries/regions. For more information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-notifications">Notifications
         * in Amazon Lightsail</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetContactMethods">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContactMethodsOutcome GetContactMethods(const Model::GetContactMethodsRequest& request) const;

        /**
         * A Callable wrapper for GetContactMethods that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContactMethodsOutcomeCallable GetContactMethodsCallable(const Model::GetContactMethodsRequest& request) const;

        /**
         * An Async wrapper for GetContactMethods that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetContactMethodsAsync(const Model::GetContactMethodsRequest& request, const GetContactMethodsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about Amazon Lightsail containers, such as the current
         * version of the Lightsail Control (lightsailctl) plugin.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetContainerAPIMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContainerAPIMetadataOutcome GetContainerAPIMetadata(const Model::GetContainerAPIMetadataRequest& request) const;

        /**
         * A Callable wrapper for GetContainerAPIMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContainerAPIMetadataOutcomeCallable GetContainerAPIMetadataCallable(const Model::GetContainerAPIMetadataRequest& request) const;

        /**
         * An Async wrapper for GetContainerAPIMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetContainerAPIMetadataAsync(const Model::GetContainerAPIMetadataRequest& request, const GetContainerAPIMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the container images that are registered to your Amazon Lightsail
         * container service.</p>  <p>If you created a deployment on your Lightsail
         * container service that uses container images from a public registry like Docker
         * Hub, those images are not returned as part of this action. Those images are not
         * registered to your Lightsail container service.</p> <p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetContainerImages">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContainerImagesOutcome GetContainerImages(const Model::GetContainerImagesRequest& request) const;

        /**
         * A Callable wrapper for GetContainerImages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContainerImagesOutcomeCallable GetContainerImagesCallable(const Model::GetContainerImagesRequest& request) const;

        /**
         * An Async wrapper for GetContainerImages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetContainerImagesAsync(const Model::GetContainerImagesRequest& request, const GetContainerImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the log events of a container of your Amazon Lightsail container
         * service.</p> <p>If your container service has more than one node (i.e., a scale
         * greater than 1), then the log events that are returned for the specified
         * container are merged from all nodes on your container service.</p> 
         * <p>Container logs are retained for a certain amount of time. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/lightsail.html">Amazon
         * Lightsail endpoints and quotas</a> in the <i>AWS General Reference</i>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetContainerLog">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContainerLogOutcome GetContainerLog(const Model::GetContainerLogRequest& request) const;

        /**
         * A Callable wrapper for GetContainerLog that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContainerLogOutcomeCallable GetContainerLogCallable(const Model::GetContainerLogRequest& request) const;

        /**
         * An Async wrapper for GetContainerLog that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetContainerLogAsync(const Model::GetContainerLogRequest& request, const GetContainerLogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the deployments for your Amazon Lightsail container service</p> <p>A
         * deployment specifies the settings, such as the ports and launch command, of
         * containers that are deployed to your container service.</p> <p>The deployments
         * are ordered by version in ascending order. The newest version is listed at the
         * top of the response.</p>  <p>A set number of deployments are kept before
         * the oldest one is replaced with the newest one. For more information, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/lightsail.html">Amazon
         * Lightsail endpoints and quotas</a> in the <i>AWS General Reference</i>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetContainerServiceDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContainerServiceDeploymentsOutcome GetContainerServiceDeployments(const Model::GetContainerServiceDeploymentsRequest& request) const;

        /**
         * A Callable wrapper for GetContainerServiceDeployments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContainerServiceDeploymentsOutcomeCallable GetContainerServiceDeploymentsCallable(const Model::GetContainerServiceDeploymentsRequest& request) const;

        /**
         * An Async wrapper for GetContainerServiceDeployments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetContainerServiceDeploymentsAsync(const Model::GetContainerServiceDeploymentsRequest& request, const GetContainerServiceDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the data points of a specific metric of your Amazon Lightsail
         * container service.</p> <p>Metrics report the utilization of your resources.
         * Monitor and collect metric data regularly to maintain the reliability,
         * availability, and performance of your resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetContainerServiceMetricData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContainerServiceMetricDataOutcome GetContainerServiceMetricData(const Model::GetContainerServiceMetricDataRequest& request) const;

        /**
         * A Callable wrapper for GetContainerServiceMetricData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContainerServiceMetricDataOutcomeCallable GetContainerServiceMetricDataCallable(const Model::GetContainerServiceMetricDataRequest& request) const;

        /**
         * An Async wrapper for GetContainerServiceMetricData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetContainerServiceMetricDataAsync(const Model::GetContainerServiceMetricDataRequest& request, const GetContainerServiceMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the list of powers that can be specified for your Amazon Lightsail
         * container services.</p> <p>The power specifies the amount of memory, the number
         * of vCPUs, and the base price of the container service.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetContainerServicePowers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContainerServicePowersOutcome GetContainerServicePowers(const Model::GetContainerServicePowersRequest& request) const;

        /**
         * A Callable wrapper for GetContainerServicePowers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContainerServicePowersOutcomeCallable GetContainerServicePowersCallable(const Model::GetContainerServicePowersRequest& request) const;

        /**
         * An Async wrapper for GetContainerServicePowers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetContainerServicePowersAsync(const Model::GetContainerServicePowersRequest& request, const GetContainerServicePowersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about one or more of your Amazon Lightsail container
         * services.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetContainerServices">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContainerServicesOutcome GetContainerServices(const Model::GetContainerServicesRequest& request) const;

        /**
         * A Callable wrapper for GetContainerServices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContainerServicesOutcomeCallable GetContainerServicesCallable(const Model::GetContainerServicesRequest& request) const;

        /**
         * An Async wrapper for GetContainerServices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetContainerServicesAsync(const Model::GetContainerServicesRequest& request, const GetContainerServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a specific block storage disk.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDisk">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDiskOutcome GetDisk(const Model::GetDiskRequest& request) const;

        /**
         * A Callable wrapper for GetDisk that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDiskOutcomeCallable GetDiskCallable(const Model::GetDiskRequest& request) const;

        /**
         * An Async wrapper for GetDisk that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDiskAsync(const Model::GetDiskRequest& request, const GetDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a specific block storage disk
         * snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDiskSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDiskSnapshotOutcome GetDiskSnapshot(const Model::GetDiskSnapshotRequest& request) const;

        /**
         * A Callable wrapper for GetDiskSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDiskSnapshotOutcomeCallable GetDiskSnapshotCallable(const Model::GetDiskSnapshotRequest& request) const;

        /**
         * An Async wrapper for GetDiskSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDiskSnapshotAsync(const Model::GetDiskSnapshotRequest& request, const GetDiskSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about all block storage disk snapshots in your AWS
         * account and region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDiskSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDiskSnapshotsOutcome GetDiskSnapshots(const Model::GetDiskSnapshotsRequest& request) const;

        /**
         * A Callable wrapper for GetDiskSnapshots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDiskSnapshotsOutcomeCallable GetDiskSnapshotsCallable(const Model::GetDiskSnapshotsRequest& request) const;

        /**
         * An Async wrapper for GetDiskSnapshots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDiskSnapshotsAsync(const Model::GetDiskSnapshotsRequest& request, const GetDiskSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about all block storage disks in your AWS account and
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDisks">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDisksOutcome GetDisks(const Model::GetDisksRequest& request) const;

        /**
         * A Callable wrapper for GetDisks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDisksOutcomeCallable GetDisksCallable(const Model::GetDisksRequest& request) const;

        /**
         * An Async wrapper for GetDisks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDisksAsync(const Model::GetDisksRequest& request, const GetDisksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the bundles that can be applied to your Amazon Lightsail content
         * delivery network (CDN) distributions.</p> <p>A distribution bundle specifies the
         * monthly network transfer quota and monthly cost of your
         * distribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDistributionBundles">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDistributionBundlesOutcome GetDistributionBundles(const Model::GetDistributionBundlesRequest& request) const;

        /**
         * A Callable wrapper for GetDistributionBundles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDistributionBundlesOutcomeCallable GetDistributionBundlesCallable(const Model::GetDistributionBundlesRequest& request) const;

        /**
         * An Async wrapper for GetDistributionBundles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDistributionBundlesAsync(const Model::GetDistributionBundlesRequest& request, const GetDistributionBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the timestamp and status of the last cache reset of a specific Amazon
         * Lightsail content delivery network (CDN) distribution.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDistributionLatestCacheReset">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDistributionLatestCacheResetOutcome GetDistributionLatestCacheReset(const Model::GetDistributionLatestCacheResetRequest& request) const;

        /**
         * A Callable wrapper for GetDistributionLatestCacheReset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDistributionLatestCacheResetOutcomeCallable GetDistributionLatestCacheResetCallable(const Model::GetDistributionLatestCacheResetRequest& request) const;

        /**
         * An Async wrapper for GetDistributionLatestCacheReset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDistributionLatestCacheResetAsync(const Model::GetDistributionLatestCacheResetRequest& request, const GetDistributionLatestCacheResetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the data points of a specific metric for an Amazon Lightsail content
         * delivery network (CDN) distribution.</p> <p>Metrics report the utilization of
         * your resources, and the error counts generated by them. Monitor and collect
         * metric data regularly to maintain the reliability, availability, and performance
         * of your resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDistributionMetricData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDistributionMetricDataOutcome GetDistributionMetricData(const Model::GetDistributionMetricDataRequest& request) const;

        /**
         * A Callable wrapper for GetDistributionMetricData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDistributionMetricDataOutcomeCallable GetDistributionMetricDataCallable(const Model::GetDistributionMetricDataRequest& request) const;

        /**
         * An Async wrapper for GetDistributionMetricData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDistributionMetricDataAsync(const Model::GetDistributionMetricDataRequest& request, const GetDistributionMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about one or more of your Amazon Lightsail content
         * delivery network (CDN) distributions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDistributions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDistributionsOutcome GetDistributions(const Model::GetDistributionsRequest& request) const;

        /**
         * A Callable wrapper for GetDistributions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDistributionsOutcomeCallable GetDistributionsCallable(const Model::GetDistributionsRequest& request) const;

        /**
         * An Async wrapper for GetDistributions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDistributionsAsync(const Model::GetDistributionsRequest& request, const GetDistributionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a specific domain recordset.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainOutcome GetDomain(const Model::GetDomainRequest& request) const;

        /**
         * A Callable wrapper for GetDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDomainOutcomeCallable GetDomainCallable(const Model::GetDomainRequest& request) const;

        /**
         * An Async wrapper for GetDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDomainAsync(const Model::GetDomainRequest& request, const GetDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of all domains in the user's account.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainsOutcome GetDomains(const Model::GetDomainsRequest& request) const;

        /**
         * A Callable wrapper for GetDomains that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDomainsOutcomeCallable GetDomainsCallable(const Model::GetDomainsRequest& request) const;

        /**
         * An Async wrapper for GetDomains that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDomainsAsync(const Model::GetDomainsRequest& request, const GetDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns all export snapshot records created as a result of the <code>export
         * snapshot</code> operation.</p> <p>An export snapshot record can be used to
         * create a new Amazon EC2 instance and its related resources with the <a
         * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_CreateCloudFormationStack.html">CreateCloudFormationStack</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetExportSnapshotRecords">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExportSnapshotRecordsOutcome GetExportSnapshotRecords(const Model::GetExportSnapshotRecordsRequest& request) const;

        /**
         * A Callable wrapper for GetExportSnapshotRecords that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetExportSnapshotRecordsOutcomeCallable GetExportSnapshotRecordsCallable(const Model::GetExportSnapshotRecordsRequest& request) const;

        /**
         * An Async wrapper for GetExportSnapshotRecords that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetExportSnapshotRecordsAsync(const Model::GetExportSnapshotRecordsRequest& request, const GetExportSnapshotRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a specific Amazon Lightsail instance, which is a
         * virtual private server.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInstanceOutcome GetInstance(const Model::GetInstanceRequest& request) const;

        /**
         * A Callable wrapper for GetInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInstanceOutcomeCallable GetInstanceCallable(const Model::GetInstanceRequest& request) const;

        /**
         * An Async wrapper for GetInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInstanceAsync(const Model::GetInstanceRequest& request, const GetInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns temporary SSH keys you can use to connect to a specific virtual
         * private server, or <i>instance</i>.</p> <p>The <code>get instance access
         * details</code> operation supports tag-based access control via resource tags
         * applied to the resource identified by <code>instance name</code>. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetInstanceAccessDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInstanceAccessDetailsOutcome GetInstanceAccessDetails(const Model::GetInstanceAccessDetailsRequest& request) const;

        /**
         * A Callable wrapper for GetInstanceAccessDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInstanceAccessDetailsOutcomeCallable GetInstanceAccessDetailsCallable(const Model::GetInstanceAccessDetailsRequest& request) const;

        /**
         * An Async wrapper for GetInstanceAccessDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInstanceAccessDetailsAsync(const Model::GetInstanceAccessDetailsRequest& request, const GetInstanceAccessDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the data points for the specified Amazon Lightsail instance metric,
         * given an instance name.</p> <p>Metrics report the utilization of your resources,
         * and the error counts generated by them. Monitor and collect metric data
         * regularly to maintain the reliability, availability, and performance of your
         * resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetInstanceMetricData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInstanceMetricDataOutcome GetInstanceMetricData(const Model::GetInstanceMetricDataRequest& request) const;

        /**
         * A Callable wrapper for GetInstanceMetricData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInstanceMetricDataOutcomeCallable GetInstanceMetricDataCallable(const Model::GetInstanceMetricDataRequest& request) const;

        /**
         * An Async wrapper for GetInstanceMetricData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInstanceMetricDataAsync(const Model::GetInstanceMetricDataRequest& request, const GetInstanceMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the firewall port states for a specific Amazon Lightsail instance,
         * the IP addresses allowed to connect to the instance through the ports, and the
         * protocol.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetInstancePortStates">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInstancePortStatesOutcome GetInstancePortStates(const Model::GetInstancePortStatesRequest& request) const;

        /**
         * A Callable wrapper for GetInstancePortStates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInstancePortStatesOutcomeCallable GetInstancePortStatesCallable(const Model::GetInstancePortStatesRequest& request) const;

        /**
         * An Async wrapper for GetInstancePortStates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInstancePortStatesAsync(const Model::GetInstancePortStatesRequest& request, const GetInstancePortStatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a specific instance snapshot.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetInstanceSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInstanceSnapshotOutcome GetInstanceSnapshot(const Model::GetInstanceSnapshotRequest& request) const;

        /**
         * A Callable wrapper for GetInstanceSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInstanceSnapshotOutcomeCallable GetInstanceSnapshotCallable(const Model::GetInstanceSnapshotRequest& request) const;

        /**
         * An Async wrapper for GetInstanceSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInstanceSnapshotAsync(const Model::GetInstanceSnapshotRequest& request, const GetInstanceSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns all instance snapshots for the user's account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetInstanceSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInstanceSnapshotsOutcome GetInstanceSnapshots(const Model::GetInstanceSnapshotsRequest& request) const;

        /**
         * A Callable wrapper for GetInstanceSnapshots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInstanceSnapshotsOutcomeCallable GetInstanceSnapshotsCallable(const Model::GetInstanceSnapshotsRequest& request) const;

        /**
         * An Async wrapper for GetInstanceSnapshots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInstanceSnapshotsAsync(const Model::GetInstanceSnapshotsRequest& request, const GetInstanceSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the state of a specific instance. Works on one instance at a
         * time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetInstanceState">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInstanceStateOutcome GetInstanceState(const Model::GetInstanceStateRequest& request) const;

        /**
         * A Callable wrapper for GetInstanceState that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInstanceStateOutcomeCallable GetInstanceStateCallable(const Model::GetInstanceStateRequest& request) const;

        /**
         * An Async wrapper for GetInstanceState that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInstanceStateAsync(const Model::GetInstanceStateRequest& request, const GetInstanceStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about all Amazon Lightsail virtual private servers, or
         * <i>instances</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInstancesOutcome GetInstances(const Model::GetInstancesRequest& request) const;

        /**
         * A Callable wrapper for GetInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInstancesOutcomeCallable GetInstancesCallable(const Model::GetInstancesRequest& request) const;

        /**
         * An Async wrapper for GetInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInstancesAsync(const Model::GetInstancesRequest& request, const GetInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a specific key pair.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetKeyPair">AWS
         * API Reference</a></p>
         */
        virtual Model::GetKeyPairOutcome GetKeyPair(const Model::GetKeyPairRequest& request) const;

        /**
         * A Callable wrapper for GetKeyPair that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetKeyPairOutcomeCallable GetKeyPairCallable(const Model::GetKeyPairRequest& request) const;

        /**
         * An Async wrapper for GetKeyPair that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetKeyPairAsync(const Model::GetKeyPairRequest& request, const GetKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about all key pairs in the user's account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetKeyPairs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetKeyPairsOutcome GetKeyPairs(const Model::GetKeyPairsRequest& request) const;

        /**
         * A Callable wrapper for GetKeyPairs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetKeyPairsOutcomeCallable GetKeyPairsCallable(const Model::GetKeyPairsRequest& request) const;

        /**
         * An Async wrapper for GetKeyPairs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetKeyPairsAsync(const Model::GetKeyPairsRequest& request, const GetKeyPairsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the specified Lightsail load
         * balancer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetLoadBalancer">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLoadBalancerOutcome GetLoadBalancer(const Model::GetLoadBalancerRequest& request) const;

        /**
         * A Callable wrapper for GetLoadBalancer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLoadBalancerOutcomeCallable GetLoadBalancerCallable(const Model::GetLoadBalancerRequest& request) const;

        /**
         * An Async wrapper for GetLoadBalancer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLoadBalancerAsync(const Model::GetLoadBalancerRequest& request, const GetLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about health metrics for your Lightsail load
         * balancer.</p> <p>Metrics report the utilization of your resources, and the error
         * counts generated by them. Monitor and collect metric data regularly to maintain
         * the reliability, availability, and performance of your resources.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetLoadBalancerMetricData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLoadBalancerMetricDataOutcome GetLoadBalancerMetricData(const Model::GetLoadBalancerMetricDataRequest& request) const;

        /**
         * A Callable wrapper for GetLoadBalancerMetricData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLoadBalancerMetricDataOutcomeCallable GetLoadBalancerMetricDataCallable(const Model::GetLoadBalancerMetricDataRequest& request) const;

        /**
         * An Async wrapper for GetLoadBalancerMetricData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLoadBalancerMetricDataAsync(const Model::GetLoadBalancerMetricDataRequest& request, const GetLoadBalancerMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the TLS certificates that are associated with the
         * specified Lightsail load balancer.</p> <p>TLS is just an updated, more secure
         * version of Secure Socket Layer (SSL).</p> <p>You can have a maximum of 2
         * certificates associated with a Lightsail load balancer. One is active and the
         * other is inactive.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetLoadBalancerTlsCertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLoadBalancerTlsCertificatesOutcome GetLoadBalancerTlsCertificates(const Model::GetLoadBalancerTlsCertificatesRequest& request) const;

        /**
         * A Callable wrapper for GetLoadBalancerTlsCertificates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLoadBalancerTlsCertificatesOutcomeCallable GetLoadBalancerTlsCertificatesCallable(const Model::GetLoadBalancerTlsCertificatesRequest& request) const;

        /**
         * An Async wrapper for GetLoadBalancerTlsCertificates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLoadBalancerTlsCertificatesAsync(const Model::GetLoadBalancerTlsCertificatesRequest& request, const GetLoadBalancerTlsCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of TLS security policies that you can apply to Lightsail load
         * balancers.</p> <p>For more information about load balancer TLS security
         * policies, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configure-load-balancer-tls-security-policy">Configuring
         * TLS security policies on your Amazon Lightsail load balancers</a> in the
         * <i>Amazon Lightsail Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetLoadBalancerTlsPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLoadBalancerTlsPoliciesOutcome GetLoadBalancerTlsPolicies(const Model::GetLoadBalancerTlsPoliciesRequest& request) const;

        /**
         * A Callable wrapper for GetLoadBalancerTlsPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLoadBalancerTlsPoliciesOutcomeCallable GetLoadBalancerTlsPoliciesCallable(const Model::GetLoadBalancerTlsPoliciesRequest& request) const;

        /**
         * An Async wrapper for GetLoadBalancerTlsPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLoadBalancerTlsPoliciesAsync(const Model::GetLoadBalancerTlsPoliciesRequest& request, const GetLoadBalancerTlsPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about all load balancers in an account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetLoadBalancers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLoadBalancersOutcome GetLoadBalancers(const Model::GetLoadBalancersRequest& request) const;

        /**
         * A Callable wrapper for GetLoadBalancers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLoadBalancersOutcomeCallable GetLoadBalancersCallable(const Model::GetLoadBalancersRequest& request) const;

        /**
         * An Async wrapper for GetLoadBalancers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLoadBalancersAsync(const Model::GetLoadBalancersRequest& request, const GetLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a specific operation. Operations include events
         * such as when you create an instance, allocate a static IP, attach a static IP,
         * and so on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetOperation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOperationOutcome GetOperation(const Model::GetOperationRequest& request) const;

        /**
         * A Callable wrapper for GetOperation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOperationOutcomeCallable GetOperationCallable(const Model::GetOperationRequest& request) const;

        /**
         * An Async wrapper for GetOperation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOperationAsync(const Model::GetOperationRequest& request, const GetOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about all operations.</p> <p>Results are returned from
         * oldest to newest, up to a maximum of 200. Results can be paged by making each
         * subsequent call to <code>GetOperations</code> use the maximum (last)
         * <code>statusChangedAt</code> value from the previous request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetOperations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOperationsOutcome GetOperations(const Model::GetOperationsRequest& request) const;

        /**
         * A Callable wrapper for GetOperations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOperationsOutcomeCallable GetOperationsCallable(const Model::GetOperationsRequest& request) const;

        /**
         * An Async wrapper for GetOperations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOperationsAsync(const Model::GetOperationsRequest& request, const GetOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets operations for a specific resource (e.g., an instance or a static
         * IP).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetOperationsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOperationsForResourceOutcome GetOperationsForResource(const Model::GetOperationsForResourceRequest& request) const;

        /**
         * A Callable wrapper for GetOperationsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOperationsForResourceOutcomeCallable GetOperationsForResourceCallable(const Model::GetOperationsForResourceRequest& request) const;

        /**
         * An Async wrapper for GetOperationsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOperationsForResourceAsync(const Model::GetOperationsForResourceRequest& request, const GetOperationsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of all valid regions for Amazon Lightsail. Use the
         * <code>include availability zones</code> parameter to also return the
         * Availability Zones in a region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRegions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRegionsOutcome GetRegions(const Model::GetRegionsRequest& request) const;

        /**
         * A Callable wrapper for GetRegions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRegionsOutcomeCallable GetRegionsCallable(const Model::GetRegionsRequest& request) const;

        /**
         * An Async wrapper for GetRegions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRegionsAsync(const Model::GetRegionsRequest& request, const GetRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a specific database in Amazon
         * Lightsail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRelationalDatabaseOutcome GetRelationalDatabase(const Model::GetRelationalDatabaseRequest& request) const;

        /**
         * A Callable wrapper for GetRelationalDatabase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRelationalDatabaseOutcomeCallable GetRelationalDatabaseCallable(const Model::GetRelationalDatabaseRequest& request) const;

        /**
         * An Async wrapper for GetRelationalDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRelationalDatabaseAsync(const Model::GetRelationalDatabaseRequest& request, const GetRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of available database blueprints in Amazon Lightsail. A
         * blueprint describes the major engine version of a database.</p> <p>You can use a
         * blueprint ID to create a new database that runs a specific database
         * engine.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseBlueprints">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRelationalDatabaseBlueprintsOutcome GetRelationalDatabaseBlueprints(const Model::GetRelationalDatabaseBlueprintsRequest& request) const;

        /**
         * A Callable wrapper for GetRelationalDatabaseBlueprints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRelationalDatabaseBlueprintsOutcomeCallable GetRelationalDatabaseBlueprintsCallable(const Model::GetRelationalDatabaseBlueprintsRequest& request) const;

        /**
         * An Async wrapper for GetRelationalDatabaseBlueprints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRelationalDatabaseBlueprintsAsync(const Model::GetRelationalDatabaseBlueprintsRequest& request, const GetRelationalDatabaseBlueprintsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the list of bundles that are available in Amazon Lightsail. A bundle
         * describes the performance specifications for a database.</p> <p>You can use a
         * bundle ID to create a new database with explicit performance
         * specifications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseBundles">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRelationalDatabaseBundlesOutcome GetRelationalDatabaseBundles(const Model::GetRelationalDatabaseBundlesRequest& request) const;

        /**
         * A Callable wrapper for GetRelationalDatabaseBundles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRelationalDatabaseBundlesOutcomeCallable GetRelationalDatabaseBundlesCallable(const Model::GetRelationalDatabaseBundlesRequest& request) const;

        /**
         * An Async wrapper for GetRelationalDatabaseBundles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRelationalDatabaseBundlesAsync(const Model::GetRelationalDatabaseBundlesRequest& request, const GetRelationalDatabaseBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of events for a specific database in Amazon
         * Lightsail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRelationalDatabaseEventsOutcome GetRelationalDatabaseEvents(const Model::GetRelationalDatabaseEventsRequest& request) const;

        /**
         * A Callable wrapper for GetRelationalDatabaseEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRelationalDatabaseEventsOutcomeCallable GetRelationalDatabaseEventsCallable(const Model::GetRelationalDatabaseEventsRequest& request) const;

        /**
         * An Async wrapper for GetRelationalDatabaseEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRelationalDatabaseEventsAsync(const Model::GetRelationalDatabaseEventsRequest& request, const GetRelationalDatabaseEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of log events for a database in Amazon
         * Lightsail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseLogEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRelationalDatabaseLogEventsOutcome GetRelationalDatabaseLogEvents(const Model::GetRelationalDatabaseLogEventsRequest& request) const;

        /**
         * A Callable wrapper for GetRelationalDatabaseLogEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRelationalDatabaseLogEventsOutcomeCallable GetRelationalDatabaseLogEventsCallable(const Model::GetRelationalDatabaseLogEventsRequest& request) const;

        /**
         * An Async wrapper for GetRelationalDatabaseLogEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRelationalDatabaseLogEventsAsync(const Model::GetRelationalDatabaseLogEventsRequest& request, const GetRelationalDatabaseLogEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of available log streams for a specific database in Amazon
         * Lightsail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseLogStreams">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRelationalDatabaseLogStreamsOutcome GetRelationalDatabaseLogStreams(const Model::GetRelationalDatabaseLogStreamsRequest& request) const;

        /**
         * A Callable wrapper for GetRelationalDatabaseLogStreams that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRelationalDatabaseLogStreamsOutcomeCallable GetRelationalDatabaseLogStreamsCallable(const Model::GetRelationalDatabaseLogStreamsRequest& request) const;

        /**
         * An Async wrapper for GetRelationalDatabaseLogStreams that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRelationalDatabaseLogStreamsAsync(const Model::GetRelationalDatabaseLogStreamsRequest& request, const GetRelationalDatabaseLogStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the current, previous, or pending versions of the master user
         * password for a Lightsail database.</p> <p>The
         * <code>GetRelationalDatabaseMasterUserPassword</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * relationalDatabaseName.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseMasterUserPassword">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRelationalDatabaseMasterUserPasswordOutcome GetRelationalDatabaseMasterUserPassword(const Model::GetRelationalDatabaseMasterUserPasswordRequest& request) const;

        /**
         * A Callable wrapper for GetRelationalDatabaseMasterUserPassword that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRelationalDatabaseMasterUserPasswordOutcomeCallable GetRelationalDatabaseMasterUserPasswordCallable(const Model::GetRelationalDatabaseMasterUserPasswordRequest& request) const;

        /**
         * An Async wrapper for GetRelationalDatabaseMasterUserPassword that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRelationalDatabaseMasterUserPasswordAsync(const Model::GetRelationalDatabaseMasterUserPasswordRequest& request, const GetRelationalDatabaseMasterUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the data points of the specified metric for a database in Amazon
         * Lightsail.</p> <p>Metrics report the utilization of your resources, and the
         * error counts generated by them. Monitor and collect metric data regularly to
         * maintain the reliability, availability, and performance of your
         * resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseMetricData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRelationalDatabaseMetricDataOutcome GetRelationalDatabaseMetricData(const Model::GetRelationalDatabaseMetricDataRequest& request) const;

        /**
         * A Callable wrapper for GetRelationalDatabaseMetricData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRelationalDatabaseMetricDataOutcomeCallable GetRelationalDatabaseMetricDataCallable(const Model::GetRelationalDatabaseMetricDataRequest& request) const;

        /**
         * An Async wrapper for GetRelationalDatabaseMetricData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRelationalDatabaseMetricDataAsync(const Model::GetRelationalDatabaseMetricDataRequest& request, const GetRelationalDatabaseMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns all of the runtime parameters offered by the underlying database
         * software, or engine, for a specific database in Amazon Lightsail.</p> <p>In
         * addition to the parameter names and values, this operation returns other
         * information about each parameter. This information includes whether changes
         * require a reboot, whether the parameter is modifiable, the allowed values, and
         * the data types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRelationalDatabaseParametersOutcome GetRelationalDatabaseParameters(const Model::GetRelationalDatabaseParametersRequest& request) const;

        /**
         * A Callable wrapper for GetRelationalDatabaseParameters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRelationalDatabaseParametersOutcomeCallable GetRelationalDatabaseParametersCallable(const Model::GetRelationalDatabaseParametersRequest& request) const;

        /**
         * An Async wrapper for GetRelationalDatabaseParameters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRelationalDatabaseParametersAsync(const Model::GetRelationalDatabaseParametersRequest& request, const GetRelationalDatabaseParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a specific database snapshot in Amazon
         * Lightsail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRelationalDatabaseSnapshotOutcome GetRelationalDatabaseSnapshot(const Model::GetRelationalDatabaseSnapshotRequest& request) const;

        /**
         * A Callable wrapper for GetRelationalDatabaseSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRelationalDatabaseSnapshotOutcomeCallable GetRelationalDatabaseSnapshotCallable(const Model::GetRelationalDatabaseSnapshotRequest& request) const;

        /**
         * An Async wrapper for GetRelationalDatabaseSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRelationalDatabaseSnapshotAsync(const Model::GetRelationalDatabaseSnapshotRequest& request, const GetRelationalDatabaseSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about all of your database snapshots in Amazon
         * Lightsail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRelationalDatabaseSnapshotsOutcome GetRelationalDatabaseSnapshots(const Model::GetRelationalDatabaseSnapshotsRequest& request) const;

        /**
         * A Callable wrapper for GetRelationalDatabaseSnapshots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRelationalDatabaseSnapshotsOutcomeCallable GetRelationalDatabaseSnapshotsCallable(const Model::GetRelationalDatabaseSnapshotsRequest& request) const;

        /**
         * An Async wrapper for GetRelationalDatabaseSnapshots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRelationalDatabaseSnapshotsAsync(const Model::GetRelationalDatabaseSnapshotsRequest& request, const GetRelationalDatabaseSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about all of your databases in Amazon
         * Lightsail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabases">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRelationalDatabasesOutcome GetRelationalDatabases(const Model::GetRelationalDatabasesRequest& request) const;

        /**
         * A Callable wrapper for GetRelationalDatabases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRelationalDatabasesOutcomeCallable GetRelationalDatabasesCallable(const Model::GetRelationalDatabasesRequest& request) const;

        /**
         * An Async wrapper for GetRelationalDatabases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRelationalDatabasesAsync(const Model::GetRelationalDatabasesRequest& request, const GetRelationalDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about an Amazon Lightsail static IP.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetStaticIp">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStaticIpOutcome GetStaticIp(const Model::GetStaticIpRequest& request) const;

        /**
         * A Callable wrapper for GetStaticIp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStaticIpOutcomeCallable GetStaticIpCallable(const Model::GetStaticIpRequest& request) const;

        /**
         * An Async wrapper for GetStaticIp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStaticIpAsync(const Model::GetStaticIpRequest& request, const GetStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about all static IPs in the user's account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetStaticIps">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStaticIpsOutcome GetStaticIps(const Model::GetStaticIpsRequest& request) const;

        /**
         * A Callable wrapper for GetStaticIps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStaticIpsOutcomeCallable GetStaticIpsCallable(const Model::GetStaticIpsRequest& request) const;

        /**
         * An Async wrapper for GetStaticIps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStaticIpsAsync(const Model::GetStaticIpsRequest& request, const GetStaticIpsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Imports a public SSH key from a specific key pair.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/ImportKeyPair">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportKeyPairOutcome ImportKeyPair(const Model::ImportKeyPairRequest& request) const;

        /**
         * A Callable wrapper for ImportKeyPair that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportKeyPairOutcomeCallable ImportKeyPairCallable(const Model::ImportKeyPairRequest& request) const;

        /**
         * An Async wrapper for ImportKeyPair that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportKeyPairAsync(const Model::ImportKeyPairRequest& request, const ImportKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a Boolean value indicating whether your Lightsail VPC is
         * peered.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/IsVpcPeered">AWS
         * API Reference</a></p>
         */
        virtual Model::IsVpcPeeredOutcome IsVpcPeered(const Model::IsVpcPeeredRequest& request) const;

        /**
         * A Callable wrapper for IsVpcPeered that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::IsVpcPeeredOutcomeCallable IsVpcPeeredCallable(const Model::IsVpcPeeredRequest& request) const;

        /**
         * An Async wrapper for IsVpcPeered that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void IsVpcPeeredAsync(const Model::IsVpcPeeredRequest& request, const IsVpcPeeredResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Opens ports for a specific Amazon Lightsail instance, and specifies the IP
         * addresses allowed to connect to the instance through the ports, and the
         * protocol.</p> <p>The <code>OpenInstancePublicPorts</code> action supports
         * tag-based access control via resource tags applied to the resource identified by
         * <code>instanceName</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/OpenInstancePublicPorts">AWS
         * API Reference</a></p>
         */
        virtual Model::OpenInstancePublicPortsOutcome OpenInstancePublicPorts(const Model::OpenInstancePublicPortsRequest& request) const;

        /**
         * A Callable wrapper for OpenInstancePublicPorts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::OpenInstancePublicPortsOutcomeCallable OpenInstancePublicPortsCallable(const Model::OpenInstancePublicPortsRequest& request) const;

        /**
         * An Async wrapper for OpenInstancePublicPorts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void OpenInstancePublicPortsAsync(const Model::OpenInstancePublicPortsRequest& request, const OpenInstancePublicPortsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Peers the Lightsail VPC with the user's default VPC.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/PeerVpc">AWS
         * API Reference</a></p>
         */
        virtual Model::PeerVpcOutcome PeerVpc(const Model::PeerVpcRequest& request) const;

        /**
         * A Callable wrapper for PeerVpc that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PeerVpcOutcomeCallable PeerVpcCallable(const Model::PeerVpcRequest& request) const;

        /**
         * An Async wrapper for PeerVpc that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PeerVpcAsync(const Model::PeerVpcRequest& request, const PeerVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates or updates an alarm, and associates it with the specified metric.</p>
         * <p>An alarm is used to monitor a single metric for one of your resources. When a
         * metric condition is met, the alarm can notify you by email, SMS text message,
         * and a banner displayed on the Amazon Lightsail console. For more information,
         * see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-alarms">Alarms
         * in Amazon Lightsail</a>.</p> <p>When this action creates an alarm, the alarm
         * state is immediately set to <code>INSUFFICIENT_DATA</code>. The alarm is then
         * evaluated and its state is set appropriately. Any actions associated with the
         * new state are then executed.</p> <p>When you update an existing alarm, its state
         * is left unchanged, but the update completely overwrites the previous
         * configuration of the alarm. The alarm is then evaluated with the updated
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/PutAlarm">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAlarmOutcome PutAlarm(const Model::PutAlarmRequest& request) const;

        /**
         * A Callable wrapper for PutAlarm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutAlarmOutcomeCallable PutAlarmCallable(const Model::PutAlarmRequest& request) const;

        /**
         * An Async wrapper for PutAlarm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutAlarmAsync(const Model::PutAlarmRequest& request, const PutAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Opens ports for a specific Amazon Lightsail instance, and specifies the IP
         * addresses allowed to connect to the instance through the ports, and the
         * protocol. This action also closes all currently open ports that are not included
         * in the request. Include all of the ports and the protocols you want to open in
         * your <code>PutInstancePublicPorts</code>request. Or use the
         * <code>OpenInstancePublicPorts</code> action to open ports without closing
         * currently open ports.</p> <p>The <code>PutInstancePublicPorts</code> action
         * supports tag-based access control via resource tags applied to the resource
         * identified by <code>instanceName</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/PutInstancePublicPorts">AWS
         * API Reference</a></p>
         */
        virtual Model::PutInstancePublicPortsOutcome PutInstancePublicPorts(const Model::PutInstancePublicPortsRequest& request) const;

        /**
         * A Callable wrapper for PutInstancePublicPorts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutInstancePublicPortsOutcomeCallable PutInstancePublicPortsCallable(const Model::PutInstancePublicPortsRequest& request) const;

        /**
         * An Async wrapper for PutInstancePublicPorts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutInstancePublicPortsAsync(const Model::PutInstancePublicPortsRequest& request, const PutInstancePublicPortsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Restarts a specific instance.</p> <p>The <code>reboot instance</code>
         * operation supports tag-based access control via resource tags applied to the
         * resource identified by <code>instance name</code>. For more information, see the
         * <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/RebootInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::RebootInstanceOutcome RebootInstance(const Model::RebootInstanceRequest& request) const;

        /**
         * A Callable wrapper for RebootInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RebootInstanceOutcomeCallable RebootInstanceCallable(const Model::RebootInstanceRequest& request) const;

        /**
         * An Async wrapper for RebootInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RebootInstanceAsync(const Model::RebootInstanceRequest& request, const RebootInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Restarts a specific database in Amazon Lightsail.</p> <p>The <code>reboot
         * relational database</code> operation supports tag-based access control via
         * resource tags applied to the resource identified by relationalDatabaseName. For
         * more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/RebootRelationalDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::RebootRelationalDatabaseOutcome RebootRelationalDatabase(const Model::RebootRelationalDatabaseRequest& request) const;

        /**
         * A Callable wrapper for RebootRelationalDatabase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RebootRelationalDatabaseOutcomeCallable RebootRelationalDatabaseCallable(const Model::RebootRelationalDatabaseRequest& request) const;

        /**
         * An Async wrapper for RebootRelationalDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RebootRelationalDatabaseAsync(const Model::RebootRelationalDatabaseRequest& request, const RebootRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers a container image to your Amazon Lightsail container service.</p>
         *  <p>This action is not required if you install and use the Lightsail
         * Control (lightsailctl) plugin to push container images to your Lightsail
         * container service. For more information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-pushing-container-images">Pushing
         * and managing container images on your Amazon Lightsail container services</a> in
         * the <i>Amazon Lightsail Developer Guide</i>.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/RegisterContainerImage">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterContainerImageOutcome RegisterContainerImage(const Model::RegisterContainerImageRequest& request) const;

        /**
         * A Callable wrapper for RegisterContainerImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterContainerImageOutcomeCallable RegisterContainerImageCallable(const Model::RegisterContainerImageRequest& request) const;

        /**
         * An Async wrapper for RegisterContainerImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterContainerImageAsync(const Model::RegisterContainerImageRequest& request, const RegisterContainerImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specific static IP from your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/ReleaseStaticIp">AWS
         * API Reference</a></p>
         */
        virtual Model::ReleaseStaticIpOutcome ReleaseStaticIp(const Model::ReleaseStaticIpRequest& request) const;

        /**
         * A Callable wrapper for ReleaseStaticIp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReleaseStaticIpOutcomeCallable ReleaseStaticIpCallable(const Model::ReleaseStaticIpRequest& request) const;

        /**
         * An Async wrapper for ReleaseStaticIp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReleaseStaticIpAsync(const Model::ReleaseStaticIpRequest& request, const ReleaseStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes currently cached content from your Amazon Lightsail content delivery
         * network (CDN) distribution.</p> <p>After resetting the cache, the next time a
         * content request is made, your distribution pulls, serves, and caches it from the
         * origin.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/ResetDistributionCache">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetDistributionCacheOutcome ResetDistributionCache(const Model::ResetDistributionCacheRequest& request) const;

        /**
         * A Callable wrapper for ResetDistributionCache that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetDistributionCacheOutcomeCallable ResetDistributionCacheCallable(const Model::ResetDistributionCacheRequest& request) const;

        /**
         * An Async wrapper for ResetDistributionCache that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetDistributionCacheAsync(const Model::ResetDistributionCacheRequest& request, const ResetDistributionCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends a verification request to an email contact method to ensure it's owned
         * by the requester. SMS contact methods don't need to be verified.</p> <p>A
         * contact method is used to send you notifications about your Amazon Lightsail
         * resources. You can add one email address and one mobile phone number contact
         * method in each Amazon Web Services Region. However, SMS text messaging is not
         * supported in some Amazon Web Services Regions, and SMS text messages cannot be
         * sent to some countries/regions. For more information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-notifications">Notifications
         * in Amazon Lightsail</a>.</p> <p>A verification request is sent to the contact
         * method when you initially create it. Use this action to send another
         * verification request if a previous verification request was deleted, or has
         * expired.</p>  <p>Notifications are not sent to an email contact
         * method until after it is verified, and confirmed as valid.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/SendContactMethodVerification">AWS
         * API Reference</a></p>
         */
        virtual Model::SendContactMethodVerificationOutcome SendContactMethodVerification(const Model::SendContactMethodVerificationRequest& request) const;

        /**
         * A Callable wrapper for SendContactMethodVerification that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendContactMethodVerificationOutcomeCallable SendContactMethodVerificationCallable(const Model::SendContactMethodVerificationRequest& request) const;

        /**
         * An Async wrapper for SendContactMethodVerification that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendContactMethodVerificationAsync(const Model::SendContactMethodVerificationRequest& request, const SendContactMethodVerificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the IP address type for an Amazon Lightsail resource.</p> <p>Use this
         * action to enable dual-stack for a resource, which enables IPv4 and IPv6 for the
         * specified resource. Alternately, you can use this action to disable dual-stack,
         * and enable IPv4 only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/SetIpAddressType">AWS
         * API Reference</a></p>
         */
        virtual Model::SetIpAddressTypeOutcome SetIpAddressType(const Model::SetIpAddressTypeRequest& request) const;

        /**
         * A Callable wrapper for SetIpAddressType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetIpAddressTypeOutcomeCallable SetIpAddressTypeCallable(const Model::SetIpAddressTypeRequest& request) const;

        /**
         * An Async wrapper for SetIpAddressType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetIpAddressTypeAsync(const Model::SetIpAddressTypeRequest& request, const SetIpAddressTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the Amazon Lightsail resources that can access the specified Lightsail
         * bucket.</p> <p>Lightsail buckets currently support setting access for Lightsail
         * instances in the same Amazon Web Services Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/SetResourceAccessForBucket">AWS
         * API Reference</a></p>
         */
        virtual Model::SetResourceAccessForBucketOutcome SetResourceAccessForBucket(const Model::SetResourceAccessForBucketRequest& request) const;

        /**
         * A Callable wrapper for SetResourceAccessForBucket that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetResourceAccessForBucketOutcomeCallable SetResourceAccessForBucketCallable(const Model::SetResourceAccessForBucketRequest& request) const;

        /**
         * An Async wrapper for SetResourceAccessForBucket that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetResourceAccessForBucketAsync(const Model::SetResourceAccessForBucketRequest& request, const SetResourceAccessForBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a specific Amazon Lightsail instance from a stopped state. To restart
         * an instance, use the <code>reboot instance</code> operation.</p>  <p>When
         * you start a stopped instance, Lightsail assigns a new public IP address to the
         * instance. To use the same IP address after stopping and starting an instance,
         * create a static IP address and attach it to the instance. For more information,
         * see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/lightsail-create-static-ip">Amazon
         * Lightsail Developer Guide</a>.</p>  <p>The <code>start instance</code>
         * operation supports tag-based access control via resource tags applied to the
         * resource identified by <code>instance name</code>. For more information, see the
         * <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/StartInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::StartInstanceOutcome StartInstance(const Model::StartInstanceRequest& request) const;

        /**
         * A Callable wrapper for StartInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartInstanceOutcomeCallable StartInstanceCallable(const Model::StartInstanceRequest& request) const;

        /**
         * An Async wrapper for StartInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartInstanceAsync(const Model::StartInstanceRequest& request, const StartInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a specific database from a stopped state in Amazon Lightsail. To
         * restart a database, use the <code>reboot relational database</code>
         * operation.</p> <p>The <code>start relational database</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * relationalDatabaseName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/StartRelationalDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::StartRelationalDatabaseOutcome StartRelationalDatabase(const Model::StartRelationalDatabaseRequest& request) const;

        /**
         * A Callable wrapper for StartRelationalDatabase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartRelationalDatabaseOutcomeCallable StartRelationalDatabaseCallable(const Model::StartRelationalDatabaseRequest& request) const;

        /**
         * An Async wrapper for StartRelationalDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartRelationalDatabaseAsync(const Model::StartRelationalDatabaseRequest& request, const StartRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a specific Amazon Lightsail instance that is currently running.</p>
         *  <p>When you start a stopped instance, Lightsail assigns a new public IP
         * address to the instance. To use the same IP address after stopping and starting
         * an instance, create a static IP address and attach it to the instance. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/lightsail-create-static-ip">Amazon
         * Lightsail Developer Guide</a>.</p>  <p>The <code>stop instance</code>
         * operation supports tag-based access control via resource tags applied to the
         * resource identified by <code>instance name</code>. For more information, see the
         * <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/StopInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::StopInstanceOutcome StopInstance(const Model::StopInstanceRequest& request) const;

        /**
         * A Callable wrapper for StopInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopInstanceOutcomeCallable StopInstanceCallable(const Model::StopInstanceRequest& request) const;

        /**
         * An Async wrapper for StopInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopInstanceAsync(const Model::StopInstanceRequest& request, const StopInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a specific database that is currently running in Amazon Lightsail.</p>
         * <p>The <code>stop relational database</code> operation supports tag-based access
         * control via resource tags applied to the resource identified by
         * relationalDatabaseName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/StopRelationalDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::StopRelationalDatabaseOutcome StopRelationalDatabase(const Model::StopRelationalDatabaseRequest& request) const;

        /**
         * A Callable wrapper for StopRelationalDatabase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopRelationalDatabaseOutcomeCallable StopRelationalDatabaseCallable(const Model::StopRelationalDatabaseRequest& request) const;

        /**
         * An Async wrapper for StopRelationalDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopRelationalDatabaseAsync(const Model::StopRelationalDatabaseRequest& request, const StopRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more tags to the specified Amazon Lightsail resource. Each
         * resource can have a maximum of 50 tags. Each tag consists of a key and an
         * optional value. Tag keys must be unique per resource. For more information about
         * tags, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
         * Lightsail Developer Guide</a>.</p> <p>The <code>tag resource</code> operation
         * supports tag-based access control via request tags and resource tags applied to
         * the resource identified by <code>resource name</code>. For more information, see
         * the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Tests an alarm by displaying a banner on the Amazon Lightsail console. If a
         * notification trigger is configured for the specified alarm, the test also sends
         * a notification to the notification protocol (<code>Email</code> and/or
         * <code>SMS</code>) configured for the alarm.</p> <p>An alarm is used to monitor a
         * single metric for one of your resources. When a metric condition is met, the
         * alarm can notify you by email, SMS text message, and a banner displayed on the
         * Amazon Lightsail console. For more information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-alarms">Alarms
         * in Amazon Lightsail</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/TestAlarm">AWS
         * API Reference</a></p>
         */
        virtual Model::TestAlarmOutcome TestAlarm(const Model::TestAlarmRequest& request) const;

        /**
         * A Callable wrapper for TestAlarm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TestAlarmOutcomeCallable TestAlarmCallable(const Model::TestAlarmRequest& request) const;

        /**
         * An Async wrapper for TestAlarm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TestAlarmAsync(const Model::TestAlarmRequest& request, const TestAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Unpeers the Lightsail VPC from the user's default VPC.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UnpeerVpc">AWS
         * API Reference</a></p>
         */
        virtual Model::UnpeerVpcOutcome UnpeerVpc(const Model::UnpeerVpcRequest& request) const;

        /**
         * A Callable wrapper for UnpeerVpc that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UnpeerVpcOutcomeCallable UnpeerVpcCallable(const Model::UnpeerVpcRequest& request) const;

        /**
         * An Async wrapper for UnpeerVpc that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UnpeerVpcAsync(const Model::UnpeerVpcRequest& request, const UnpeerVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified set of tag keys and their values from the specified
         * Amazon Lightsail resource.</p> <p>The <code>untag resource</code> operation
         * supports tag-based access control via request tags and resource tags applied to
         * the resource identified by <code>resource name</code>. For more information, see
         * the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing Amazon Lightsail bucket.</p> <p>Use this action to update
         * the configuration of an existing bucket, such as versioning, public
         * accessibility, and the Amazon Web Services accounts that can access the
         * bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateBucket">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBucketOutcome UpdateBucket(const Model::UpdateBucketRequest& request) const;

        /**
         * A Callable wrapper for UpdateBucket that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBucketOutcomeCallable UpdateBucketCallable(const Model::UpdateBucketRequest& request) const;

        /**
         * An Async wrapper for UpdateBucket that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBucketAsync(const Model::UpdateBucketRequest& request, const UpdateBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the bundle, or storage plan, of an existing Amazon Lightsail
         * bucket.</p> <p>A bucket bundle specifies the monthly cost, storage space, and
         * data transfer quota for a bucket. You can update a bucket's bundle only one time
         * within a monthly AWS billing cycle. To determine if you can update a bucket's
         * bundle, use the <a
         * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetBuckets.html">GetBuckets</a>
         * action. The <code>ableToUpdateBundle</code> parameter in the response will
         * indicate whether you can currently update a bucket's bundle.</p> <p>Update a
         * bucket's bundle if it's consistently going over its storage space or data
         * transfer quota, or if a bucket's usage is consistently in the lower range of its
         * storage space or data transfer quota. Due to the unpredictable usage
         * fluctuations that a bucket might experience, we strongly recommend that you
         * update a bucket's bundle only as a long-term strategy, instead of as a
         * short-term, monthly cost-cutting measure. Choose a bucket bundle that will
         * provide the bucket with ample storage space and data transfer for a long time to
         * come.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateBucketBundle">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBucketBundleOutcome UpdateBucketBundle(const Model::UpdateBucketBundleRequest& request) const;

        /**
         * A Callable wrapper for UpdateBucketBundle that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBucketBundleOutcomeCallable UpdateBucketBundleCallable(const Model::UpdateBucketBundleRequest& request) const;

        /**
         * An Async wrapper for UpdateBucketBundle that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBucketBundleAsync(const Model::UpdateBucketBundleRequest& request, const UpdateBucketBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the configuration of your Amazon Lightsail container service, such as
         * its power, scale, and public domain names.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateContainerService">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContainerServiceOutcome UpdateContainerService(const Model::UpdateContainerServiceRequest& request) const;

        /**
         * A Callable wrapper for UpdateContainerService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateContainerServiceOutcomeCallable UpdateContainerServiceCallable(const Model::UpdateContainerServiceRequest& request) const;

        /**
         * An Async wrapper for UpdateContainerService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateContainerServiceAsync(const Model::UpdateContainerServiceRequest& request, const UpdateContainerServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing Amazon Lightsail content delivery network (CDN)
         * distribution.</p> <p>Use this action to update the configuration of your
         * existing distribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateDistribution">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDistributionOutcome UpdateDistribution(const Model::UpdateDistributionRequest& request) const;

        /**
         * A Callable wrapper for UpdateDistribution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDistributionOutcomeCallable UpdateDistributionCallable(const Model::UpdateDistributionRequest& request) const;

        /**
         * An Async wrapper for UpdateDistribution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDistributionAsync(const Model::UpdateDistributionRequest& request, const UpdateDistributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the bundle of your Amazon Lightsail content delivery network (CDN)
         * distribution.</p> <p>A distribution bundle specifies the monthly network
         * transfer quota and monthly cost of your distribution.</p> <p>Update your
         * distribution's bundle if your distribution is going over its monthly network
         * transfer quota and is incurring an overage fee.</p> <p>You can update your
         * distribution's bundle only one time within your monthly AWS billing cycle. To
         * determine if you can update your distribution's bundle, use the
         * <code>GetDistributions</code> action. The <code>ableToUpdateBundle</code>
         * parameter in the result will indicate whether you can currently update your
         * distribution's bundle.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateDistributionBundle">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDistributionBundleOutcome UpdateDistributionBundle(const Model::UpdateDistributionBundleRequest& request) const;

        /**
         * A Callable wrapper for UpdateDistributionBundle that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDistributionBundleOutcomeCallable UpdateDistributionBundleCallable(const Model::UpdateDistributionBundleRequest& request) const;

        /**
         * An Async wrapper for UpdateDistributionBundle that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDistributionBundleAsync(const Model::UpdateDistributionBundleRequest& request, const UpdateDistributionBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a domain recordset after it is created.</p> <p>The <code>update
         * domain entry</code> operation supports tag-based access control via resource
         * tags applied to the resource identified by <code>domain name</code>. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateDomainEntry">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDomainEntryOutcome UpdateDomainEntry(const Model::UpdateDomainEntryRequest& request) const;

        /**
         * A Callable wrapper for UpdateDomainEntry that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDomainEntryOutcomeCallable UpdateDomainEntryCallable(const Model::UpdateDomainEntryRequest& request) const;

        /**
         * An Async wrapper for UpdateDomainEntry that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDomainEntryAsync(const Model::UpdateDomainEntryRequest& request, const UpdateDomainEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified attribute for a load balancer. You can only update one
         * attribute at a time.</p> <p>The <code>update load balancer attribute</code>
         * operation supports tag-based access control via resource tags applied to the
         * resource identified by <code>load balancer name</code>. For more information,
         * see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateLoadBalancerAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLoadBalancerAttributeOutcome UpdateLoadBalancerAttribute(const Model::UpdateLoadBalancerAttributeRequest& request) const;

        /**
         * A Callable wrapper for UpdateLoadBalancerAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLoadBalancerAttributeOutcomeCallable UpdateLoadBalancerAttributeCallable(const Model::UpdateLoadBalancerAttributeRequest& request) const;

        /**
         * An Async wrapper for UpdateLoadBalancerAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLoadBalancerAttributeAsync(const Model::UpdateLoadBalancerAttributeRequest& request, const UpdateLoadBalancerAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows the update of one or more attributes of a database in Amazon
         * Lightsail.</p> <p>Updates are applied immediately, or in cases where the updates
         * could result in an outage, are applied during the database's predefined
         * maintenance window.</p> <p>The <code>update relational database</code> operation
         * supports tag-based access control via resource tags applied to the resource
         * identified by relationalDatabaseName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateRelationalDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRelationalDatabaseOutcome UpdateRelationalDatabase(const Model::UpdateRelationalDatabaseRequest& request) const;

        /**
         * A Callable wrapper for UpdateRelationalDatabase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRelationalDatabaseOutcomeCallable UpdateRelationalDatabaseCallable(const Model::UpdateRelationalDatabaseRequest& request) const;

        /**
         * An Async wrapper for UpdateRelationalDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRelationalDatabaseAsync(const Model::UpdateRelationalDatabaseRequest& request, const UpdateRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows the update of one or more parameters of a database in Amazon
         * Lightsail.</p> <p>Parameter updates don't cause outages; therefore, their
         * application is not subject to the preferred maintenance window. However, there
         * are two ways in which parameter updates are applied: <code>dynamic</code> or
         * <code>pending-reboot</code>. Parameters marked with a <code>dynamic</code> apply
         * type are applied immediately. Parameters marked with a
         * <code>pending-reboot</code> apply type are applied only after the database is
         * rebooted using the <code>reboot relational database</code> operation.</p> <p>The
         * <code>update relational database parameters</code> operation supports tag-based
         * access control via resource tags applied to the resource identified by
         * relationalDatabaseName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateRelationalDatabaseParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRelationalDatabaseParametersOutcome UpdateRelationalDatabaseParameters(const Model::UpdateRelationalDatabaseParametersRequest& request) const;

        /**
         * A Callable wrapper for UpdateRelationalDatabaseParameters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRelationalDatabaseParametersOutcomeCallable UpdateRelationalDatabaseParametersCallable(const Model::UpdateRelationalDatabaseParametersRequest& request) const;

        /**
         * An Async wrapper for UpdateRelationalDatabaseParameters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRelationalDatabaseParametersAsync(const Model::UpdateRelationalDatabaseParametersRequest& request, const UpdateRelationalDatabaseParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AllocateStaticIpAsyncHelper(const Model::AllocateStaticIpRequest& request, const AllocateStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AttachCertificateToDistributionAsyncHelper(const Model::AttachCertificateToDistributionRequest& request, const AttachCertificateToDistributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AttachDiskAsyncHelper(const Model::AttachDiskRequest& request, const AttachDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AttachInstancesToLoadBalancerAsyncHelper(const Model::AttachInstancesToLoadBalancerRequest& request, const AttachInstancesToLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AttachLoadBalancerTlsCertificateAsyncHelper(const Model::AttachLoadBalancerTlsCertificateRequest& request, const AttachLoadBalancerTlsCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AttachStaticIpAsyncHelper(const Model::AttachStaticIpRequest& request, const AttachStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CloseInstancePublicPortsAsyncHelper(const Model::CloseInstancePublicPortsRequest& request, const CloseInstancePublicPortsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CopySnapshotAsyncHelper(const Model::CopySnapshotRequest& request, const CopySnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateBucketAsyncHelper(const Model::CreateBucketRequest& request, const CreateBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateBucketAccessKeyAsyncHelper(const Model::CreateBucketAccessKeyRequest& request, const CreateBucketAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCertificateAsyncHelper(const Model::CreateCertificateRequest& request, const CreateCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCloudFormationStackAsyncHelper(const Model::CreateCloudFormationStackRequest& request, const CreateCloudFormationStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateContactMethodAsyncHelper(const Model::CreateContactMethodRequest& request, const CreateContactMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateContainerServiceAsyncHelper(const Model::CreateContainerServiceRequest& request, const CreateContainerServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateContainerServiceDeploymentAsyncHelper(const Model::CreateContainerServiceDeploymentRequest& request, const CreateContainerServiceDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateContainerServiceRegistryLoginAsyncHelper(const Model::CreateContainerServiceRegistryLoginRequest& request, const CreateContainerServiceRegistryLoginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDiskAsyncHelper(const Model::CreateDiskRequest& request, const CreateDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDiskFromSnapshotAsyncHelper(const Model::CreateDiskFromSnapshotRequest& request, const CreateDiskFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDiskSnapshotAsyncHelper(const Model::CreateDiskSnapshotRequest& request, const CreateDiskSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDistributionAsyncHelper(const Model::CreateDistributionRequest& request, const CreateDistributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDomainAsyncHelper(const Model::CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDomainEntryAsyncHelper(const Model::CreateDomainEntryRequest& request, const CreateDomainEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateInstanceSnapshotAsyncHelper(const Model::CreateInstanceSnapshotRequest& request, const CreateInstanceSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateInstancesAsyncHelper(const Model::CreateInstancesRequest& request, const CreateInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateInstancesFromSnapshotAsyncHelper(const Model::CreateInstancesFromSnapshotRequest& request, const CreateInstancesFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateKeyPairAsyncHelper(const Model::CreateKeyPairRequest& request, const CreateKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLoadBalancerAsyncHelper(const Model::CreateLoadBalancerRequest& request, const CreateLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLoadBalancerTlsCertificateAsyncHelper(const Model::CreateLoadBalancerTlsCertificateRequest& request, const CreateLoadBalancerTlsCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRelationalDatabaseAsyncHelper(const Model::CreateRelationalDatabaseRequest& request, const CreateRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRelationalDatabaseFromSnapshotAsyncHelper(const Model::CreateRelationalDatabaseFromSnapshotRequest& request, const CreateRelationalDatabaseFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRelationalDatabaseSnapshotAsyncHelper(const Model::CreateRelationalDatabaseSnapshotRequest& request, const CreateRelationalDatabaseSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAlarmAsyncHelper(const Model::DeleteAlarmRequest& request, const DeleteAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAutoSnapshotAsyncHelper(const Model::DeleteAutoSnapshotRequest& request, const DeleteAutoSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBucketAsyncHelper(const Model::DeleteBucketRequest& request, const DeleteBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBucketAccessKeyAsyncHelper(const Model::DeleteBucketAccessKeyRequest& request, const DeleteBucketAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCertificateAsyncHelper(const Model::DeleteCertificateRequest& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteContactMethodAsyncHelper(const Model::DeleteContactMethodRequest& request, const DeleteContactMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteContainerImageAsyncHelper(const Model::DeleteContainerImageRequest& request, const DeleteContainerImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteContainerServiceAsyncHelper(const Model::DeleteContainerServiceRequest& request, const DeleteContainerServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDiskAsyncHelper(const Model::DeleteDiskRequest& request, const DeleteDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDiskSnapshotAsyncHelper(const Model::DeleteDiskSnapshotRequest& request, const DeleteDiskSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDistributionAsyncHelper(const Model::DeleteDistributionRequest& request, const DeleteDistributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDomainAsyncHelper(const Model::DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDomainEntryAsyncHelper(const Model::DeleteDomainEntryRequest& request, const DeleteDomainEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteInstanceAsyncHelper(const Model::DeleteInstanceRequest& request, const DeleteInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteInstanceSnapshotAsyncHelper(const Model::DeleteInstanceSnapshotRequest& request, const DeleteInstanceSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteKeyPairAsyncHelper(const Model::DeleteKeyPairRequest& request, const DeleteKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteKnownHostKeysAsyncHelper(const Model::DeleteKnownHostKeysRequest& request, const DeleteKnownHostKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLoadBalancerAsyncHelper(const Model::DeleteLoadBalancerRequest& request, const DeleteLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLoadBalancerTlsCertificateAsyncHelper(const Model::DeleteLoadBalancerTlsCertificateRequest& request, const DeleteLoadBalancerTlsCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRelationalDatabaseAsyncHelper(const Model::DeleteRelationalDatabaseRequest& request, const DeleteRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRelationalDatabaseSnapshotAsyncHelper(const Model::DeleteRelationalDatabaseSnapshotRequest& request, const DeleteRelationalDatabaseSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachCertificateFromDistributionAsyncHelper(const Model::DetachCertificateFromDistributionRequest& request, const DetachCertificateFromDistributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachDiskAsyncHelper(const Model::DetachDiskRequest& request, const DetachDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachInstancesFromLoadBalancerAsyncHelper(const Model::DetachInstancesFromLoadBalancerRequest& request, const DetachInstancesFromLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachStaticIpAsyncHelper(const Model::DetachStaticIpRequest& request, const DetachStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableAddOnAsyncHelper(const Model::DisableAddOnRequest& request, const DisableAddOnResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DownloadDefaultKeyPairAsyncHelper(const Model::DownloadDefaultKeyPairRequest& request, const DownloadDefaultKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableAddOnAsyncHelper(const Model::EnableAddOnRequest& request, const EnableAddOnResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ExportSnapshotAsyncHelper(const Model::ExportSnapshotRequest& request, const ExportSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetActiveNamesAsyncHelper(const Model::GetActiveNamesRequest& request, const GetActiveNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAlarmsAsyncHelper(const Model::GetAlarmsRequest& request, const GetAlarmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAutoSnapshotsAsyncHelper(const Model::GetAutoSnapshotsRequest& request, const GetAutoSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBlueprintsAsyncHelper(const Model::GetBlueprintsRequest& request, const GetBlueprintsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketAccessKeysAsyncHelper(const Model::GetBucketAccessKeysRequest& request, const GetBucketAccessKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketBundlesAsyncHelper(const Model::GetBucketBundlesRequest& request, const GetBucketBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketMetricDataAsyncHelper(const Model::GetBucketMetricDataRequest& request, const GetBucketMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBucketsAsyncHelper(const Model::GetBucketsRequest& request, const GetBucketsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBundlesAsyncHelper(const Model::GetBundlesRequest& request, const GetBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCertificatesAsyncHelper(const Model::GetCertificatesRequest& request, const GetCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCloudFormationStackRecordsAsyncHelper(const Model::GetCloudFormationStackRecordsRequest& request, const GetCloudFormationStackRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetContactMethodsAsyncHelper(const Model::GetContactMethodsRequest& request, const GetContactMethodsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetContainerAPIMetadataAsyncHelper(const Model::GetContainerAPIMetadataRequest& request, const GetContainerAPIMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetContainerImagesAsyncHelper(const Model::GetContainerImagesRequest& request, const GetContainerImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetContainerLogAsyncHelper(const Model::GetContainerLogRequest& request, const GetContainerLogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetContainerServiceDeploymentsAsyncHelper(const Model::GetContainerServiceDeploymentsRequest& request, const GetContainerServiceDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetContainerServiceMetricDataAsyncHelper(const Model::GetContainerServiceMetricDataRequest& request, const GetContainerServiceMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetContainerServicePowersAsyncHelper(const Model::GetContainerServicePowersRequest& request, const GetContainerServicePowersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetContainerServicesAsyncHelper(const Model::GetContainerServicesRequest& request, const GetContainerServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDiskAsyncHelper(const Model::GetDiskRequest& request, const GetDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDiskSnapshotAsyncHelper(const Model::GetDiskSnapshotRequest& request, const GetDiskSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDiskSnapshotsAsyncHelper(const Model::GetDiskSnapshotsRequest& request, const GetDiskSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDisksAsyncHelper(const Model::GetDisksRequest& request, const GetDisksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDistributionBundlesAsyncHelper(const Model::GetDistributionBundlesRequest& request, const GetDistributionBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDistributionLatestCacheResetAsyncHelper(const Model::GetDistributionLatestCacheResetRequest& request, const GetDistributionLatestCacheResetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDistributionMetricDataAsyncHelper(const Model::GetDistributionMetricDataRequest& request, const GetDistributionMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDistributionsAsyncHelper(const Model::GetDistributionsRequest& request, const GetDistributionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDomainAsyncHelper(const Model::GetDomainRequest& request, const GetDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDomainsAsyncHelper(const Model::GetDomainsRequest& request, const GetDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetExportSnapshotRecordsAsyncHelper(const Model::GetExportSnapshotRecordsRequest& request, const GetExportSnapshotRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetInstanceAsyncHelper(const Model::GetInstanceRequest& request, const GetInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetInstanceAccessDetailsAsyncHelper(const Model::GetInstanceAccessDetailsRequest& request, const GetInstanceAccessDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetInstanceMetricDataAsyncHelper(const Model::GetInstanceMetricDataRequest& request, const GetInstanceMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetInstancePortStatesAsyncHelper(const Model::GetInstancePortStatesRequest& request, const GetInstancePortStatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetInstanceSnapshotAsyncHelper(const Model::GetInstanceSnapshotRequest& request, const GetInstanceSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetInstanceSnapshotsAsyncHelper(const Model::GetInstanceSnapshotsRequest& request, const GetInstanceSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetInstanceStateAsyncHelper(const Model::GetInstanceStateRequest& request, const GetInstanceStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetInstancesAsyncHelper(const Model::GetInstancesRequest& request, const GetInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetKeyPairAsyncHelper(const Model::GetKeyPairRequest& request, const GetKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetKeyPairsAsyncHelper(const Model::GetKeyPairsRequest& request, const GetKeyPairsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLoadBalancerAsyncHelper(const Model::GetLoadBalancerRequest& request, const GetLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLoadBalancerMetricDataAsyncHelper(const Model::GetLoadBalancerMetricDataRequest& request, const GetLoadBalancerMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLoadBalancerTlsCertificatesAsyncHelper(const Model::GetLoadBalancerTlsCertificatesRequest& request, const GetLoadBalancerTlsCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLoadBalancerTlsPoliciesAsyncHelper(const Model::GetLoadBalancerTlsPoliciesRequest& request, const GetLoadBalancerTlsPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLoadBalancersAsyncHelper(const Model::GetLoadBalancersRequest& request, const GetLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetOperationAsyncHelper(const Model::GetOperationRequest& request, const GetOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetOperationsAsyncHelper(const Model::GetOperationsRequest& request, const GetOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetOperationsForResourceAsyncHelper(const Model::GetOperationsForResourceRequest& request, const GetOperationsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRegionsAsyncHelper(const Model::GetRegionsRequest& request, const GetRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRelationalDatabaseAsyncHelper(const Model::GetRelationalDatabaseRequest& request, const GetRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRelationalDatabaseBlueprintsAsyncHelper(const Model::GetRelationalDatabaseBlueprintsRequest& request, const GetRelationalDatabaseBlueprintsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRelationalDatabaseBundlesAsyncHelper(const Model::GetRelationalDatabaseBundlesRequest& request, const GetRelationalDatabaseBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRelationalDatabaseEventsAsyncHelper(const Model::GetRelationalDatabaseEventsRequest& request, const GetRelationalDatabaseEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRelationalDatabaseLogEventsAsyncHelper(const Model::GetRelationalDatabaseLogEventsRequest& request, const GetRelationalDatabaseLogEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRelationalDatabaseLogStreamsAsyncHelper(const Model::GetRelationalDatabaseLogStreamsRequest& request, const GetRelationalDatabaseLogStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRelationalDatabaseMasterUserPasswordAsyncHelper(const Model::GetRelationalDatabaseMasterUserPasswordRequest& request, const GetRelationalDatabaseMasterUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRelationalDatabaseMetricDataAsyncHelper(const Model::GetRelationalDatabaseMetricDataRequest& request, const GetRelationalDatabaseMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRelationalDatabaseParametersAsyncHelper(const Model::GetRelationalDatabaseParametersRequest& request, const GetRelationalDatabaseParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRelationalDatabaseSnapshotAsyncHelper(const Model::GetRelationalDatabaseSnapshotRequest& request, const GetRelationalDatabaseSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRelationalDatabaseSnapshotsAsyncHelper(const Model::GetRelationalDatabaseSnapshotsRequest& request, const GetRelationalDatabaseSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRelationalDatabasesAsyncHelper(const Model::GetRelationalDatabasesRequest& request, const GetRelationalDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetStaticIpAsyncHelper(const Model::GetStaticIpRequest& request, const GetStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetStaticIpsAsyncHelper(const Model::GetStaticIpsRequest& request, const GetStaticIpsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ImportKeyPairAsyncHelper(const Model::ImportKeyPairRequest& request, const ImportKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void IsVpcPeeredAsyncHelper(const Model::IsVpcPeeredRequest& request, const IsVpcPeeredResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void OpenInstancePublicPortsAsyncHelper(const Model::OpenInstancePublicPortsRequest& request, const OpenInstancePublicPortsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PeerVpcAsyncHelper(const Model::PeerVpcRequest& request, const PeerVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutAlarmAsyncHelper(const Model::PutAlarmRequest& request, const PutAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutInstancePublicPortsAsyncHelper(const Model::PutInstancePublicPortsRequest& request, const PutInstancePublicPortsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RebootInstanceAsyncHelper(const Model::RebootInstanceRequest& request, const RebootInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RebootRelationalDatabaseAsyncHelper(const Model::RebootRelationalDatabaseRequest& request, const RebootRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterContainerImageAsyncHelper(const Model::RegisterContainerImageRequest& request, const RegisterContainerImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ReleaseStaticIpAsyncHelper(const Model::ReleaseStaticIpRequest& request, const ReleaseStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResetDistributionCacheAsyncHelper(const Model::ResetDistributionCacheRequest& request, const ResetDistributionCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SendContactMethodVerificationAsyncHelper(const Model::SendContactMethodVerificationRequest& request, const SendContactMethodVerificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetIpAddressTypeAsyncHelper(const Model::SetIpAddressTypeRequest& request, const SetIpAddressTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetResourceAccessForBucketAsyncHelper(const Model::SetResourceAccessForBucketRequest& request, const SetResourceAccessForBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartInstanceAsyncHelper(const Model::StartInstanceRequest& request, const StartInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartRelationalDatabaseAsyncHelper(const Model::StartRelationalDatabaseRequest& request, const StartRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopInstanceAsyncHelper(const Model::StopInstanceRequest& request, const StopInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopRelationalDatabaseAsyncHelper(const Model::StopRelationalDatabaseRequest& request, const StopRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TestAlarmAsyncHelper(const Model::TestAlarmRequest& request, const TestAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UnpeerVpcAsyncHelper(const Model::UnpeerVpcRequest& request, const UnpeerVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateBucketAsyncHelper(const Model::UpdateBucketRequest& request, const UpdateBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateBucketBundleAsyncHelper(const Model::UpdateBucketBundleRequest& request, const UpdateBucketBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateContainerServiceAsyncHelper(const Model::UpdateContainerServiceRequest& request, const UpdateContainerServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDistributionAsyncHelper(const Model::UpdateDistributionRequest& request, const UpdateDistributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDistributionBundleAsyncHelper(const Model::UpdateDistributionBundleRequest& request, const UpdateDistributionBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDomainEntryAsyncHelper(const Model::UpdateDomainEntryRequest& request, const UpdateDomainEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateLoadBalancerAttributeAsyncHelper(const Model::UpdateLoadBalancerAttributeRequest& request, const UpdateLoadBalancerAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRelationalDatabaseAsyncHelper(const Model::UpdateRelationalDatabaseRequest& request, const UpdateRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRelationalDatabaseParametersAsyncHelper(const Model::UpdateRelationalDatabaseParametersRequest& request, const UpdateRelationalDatabaseParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Lightsail
} // namespace Aws
