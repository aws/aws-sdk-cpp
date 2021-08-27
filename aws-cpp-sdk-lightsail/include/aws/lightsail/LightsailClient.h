/**
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
#include <aws/lightsail/model/StartInstanceResult.h>
#include <aws/lightsail/model/StartRelationalDatabaseResult.h>
#include <aws/lightsail/model/StopInstanceResult.h>
#include <aws/lightsail/model/StopRelationalDatabaseResult.h>
#include <aws/lightsail/model/TagResourceResult.h>
#include <aws/lightsail/model/TestAlarmResult.h>
#include <aws/lightsail/model/UnpeerVpcResult.h>
#include <aws/lightsail/model/UntagResourceResult.h>
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
        class StartInstanceRequest;
        class StartRelationalDatabaseRequest;
        class StopInstanceRequest;
        class StopRelationalDatabaseRequest;
        class TagResourceRequest;
        class TestAlarmRequest;
        class UnpeerVpcRequest;
        class UntagResourceRequest;
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
        typedef Aws::Utils::Outcome<StartInstanceResult, LightsailError> StartInstanceOutcome;
        typedef Aws::Utils::Outcome<StartRelationalDatabaseResult, LightsailError> StartRelationalDatabaseOutcome;
        typedef Aws::Utils::Outcome<StopInstanceResult, LightsailError> StopInstanceOutcome;
        typedef Aws::Utils::Outcome<StopRelationalDatabaseResult, LightsailError> StopRelationalDatabaseOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, LightsailError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<TestAlarmResult, LightsailError> TestAlarmOutcome;
        typedef Aws::Utils::Outcome<UnpeerVpcResult, LightsailError> UnpeerVpcOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, LightsailError> UntagResourceOutcome;
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
        typedef std::future<StartInstanceOutcome> StartInstanceOutcomeCallable;
        typedef std::future<StartRelationalDatabaseOutcome> StartRelationalDatabaseOutcomeCallable;
        typedef std::future<StopInstanceOutcome> StopInstanceOutcomeCallable;
        typedef std::future<StopRelationalDatabaseOutcome> StopRelationalDatabaseOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<TestAlarmOutcome> TestAlarmOutcomeCallable;
        typedef std::future<UnpeerVpcOutcome> UnpeerVpcOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
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
    typedef std::function<void(const LightsailClient*, const Model::StartInstanceRequest&, const Model::StartInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartInstanceResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::StartRelationalDatabaseRequest&, const Model::StartRelationalDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartRelationalDatabaseResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::StopInstanceRequest&, const Model::StopInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopInstanceResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::StopRelationalDatabaseRequest&, const Model::StopRelationalDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopRelationalDatabaseResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::TestAlarmRequest&, const Model::TestAlarmOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TestAlarmResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::UnpeerVpcRequest&, const Model::UnpeerVpcOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UnpeerVpcResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::UpdateContainerServiceRequest&, const Model::UpdateContainerServiceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateContainerServiceResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::UpdateDistributionRequest&, const Model::UpdateDistributionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDistributionResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::UpdateDistributionBundleRequest&, const Model::UpdateDistributionBundleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDistributionBundleResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::UpdateDomainEntryRequest&, const Model::UpdateDomainEntryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDomainEntryResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::UpdateLoadBalancerAttributeRequest&, const Model::UpdateLoadBalancerAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLoadBalancerAttributeResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::UpdateRelationalDatabaseRequest&, const Model::UpdateRelationalDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRelationalDatabaseResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::UpdateRelationalDatabaseParametersRequest&, const Model::UpdateRelationalDatabaseParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRelationalDatabaseParametersResponseReceivedHandler;

  /**
   * <p>Amazon Lightsail is the easiest way to get started with Amazon Web Services
   * (AWS) for developers who need to build websites or web applications. It includes
   * everything you need to launch your project quickly - instances (virtual private
   * servers), container services, managed databases, SSD-based block storage, static
   * IP addresses, load balancers, content delivery network (CDN) distributions, DNS
   * management of registered domains, and resource snapshots (backups) - for a low,
   * predictable monthly price.</p> <p>You can manage your Lightsail resources using
   * the Lightsail console, Lightsail API, AWS Command Line Interface (AWS CLI), or
   * SDKs. For more information about Lightsail concepts and tasks, see the <a
   * href="http://lightsail.aws.amazon.com/ls/docs/how-to/article/lightsail-how-to-set-up-access-keys-to-use-sdk-api-cli">Lightsail
   * Dev Guide</a>.</p> <p>This API Reference provides detailed information about the
   * actions, data types, parameters, and errors of the Lightsail service. For more
   * information about the supported AWS Regions, endpoints, and service quotas of
   * the Lightsail service, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/lightsail.html">Amazon
   * Lightsail Endpoints and Quotas</a> in the <i>AWS General Reference</i>.</p>
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
         * <p>Allocates a static IP address.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AllocateStaticIp">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AllocateStaticIpOutcomeCallable AllocateStaticIpCallable(const Model::AllocateStaticIpRequest& request) const;

        /**
         * <p>Allocates a static IP address.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AllocateStaticIp">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AllocateStaticIpAsync(const Model::AllocateStaticIpRequest& request, const AllocateStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches an SSL/TLS certificate to your Amazon Lightsail content delivery
         * network (CDN) distribution.</p> <p>After the certificate is attached, your
         * distribution accepts HTTPS traffic for all of the domains that are associated
         * with the certificate.</p> <p>Use the <code>CreateCertificate</code> action to
         * create a certificate that you can attach to your distribution.</p> 
         * <p>Only certificates created in the <code>us-east-1</code> AWS Region can be
         * attached to Lightsail distributions. Lightsail distributions are global
         * resources that can reference an origin in any AWS Region, and distribute its
         * content globally. However, all distributions are located in the
         * <code>us-east-1</code> Region.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AttachCertificateToDistribution">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachCertificateToDistributionOutcome AttachCertificateToDistribution(const Model::AttachCertificateToDistributionRequest& request) const;

        /**
         * <p>Attaches an SSL/TLS certificate to your Amazon Lightsail content delivery
         * network (CDN) distribution.</p> <p>After the certificate is attached, your
         * distribution accepts HTTPS traffic for all of the domains that are associated
         * with the certificate.</p> <p>Use the <code>CreateCertificate</code> action to
         * create a certificate that you can attach to your distribution.</p> 
         * <p>Only certificates created in the <code>us-east-1</code> AWS Region can be
         * attached to Lightsail distributions. Lightsail distributions are global
         * resources that can reference an origin in any AWS Region, and distribute its
         * content globally. However, all distributions are located in the
         * <code>us-east-1</code> Region.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AttachCertificateToDistribution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachCertificateToDistributionOutcomeCallable AttachCertificateToDistributionCallable(const Model::AttachCertificateToDistributionRequest& request) const;

        /**
         * <p>Attaches an SSL/TLS certificate to your Amazon Lightsail content delivery
         * network (CDN) distribution.</p> <p>After the certificate is attached, your
         * distribution accepts HTTPS traffic for all of the domains that are associated
         * with the certificate.</p> <p>Use the <code>CreateCertificate</code> action to
         * create a certificate that you can attach to your distribution.</p> 
         * <p>Only certificates created in the <code>us-east-1</code> AWS Region can be
         * attached to Lightsail distributions. Lightsail distributions are global
         * resources that can reference an origin in any AWS Region, and distribute its
         * content globally. However, all distributions are located in the
         * <code>us-east-1</code> Region.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AttachCertificateToDistribution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachCertificateToDistributionAsync(const Model::AttachCertificateToDistributionRequest& request, const AttachCertificateToDistributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches a block storage disk to a running or stopped Lightsail instance and
         * exposes it to the instance with the specified disk name.</p> <p>The <code>attach
         * disk</code> operation supports tag-based access control via resource tags
         * applied to the resource identified by <code>disk name</code>. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AttachDisk">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachDiskOutcome AttachDisk(const Model::AttachDiskRequest& request) const;

        /**
         * <p>Attaches a block storage disk to a running or stopped Lightsail instance and
         * exposes it to the instance with the specified disk name.</p> <p>The <code>attach
         * disk</code> operation supports tag-based access control via resource tags
         * applied to the resource identified by <code>disk name</code>. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AttachDisk">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachDiskOutcomeCallable AttachDiskCallable(const Model::AttachDiskRequest& request) const;

        /**
         * <p>Attaches a block storage disk to a running or stopped Lightsail instance and
         * exposes it to the instance with the specified disk name.</p> <p>The <code>attach
         * disk</code> operation supports tag-based access control via resource tags
         * applied to the resource identified by <code>disk name</code>. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AttachDisk">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachDiskAsync(const Model::AttachDiskRequest& request, const AttachDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches one or more Lightsail instances to a load balancer.</p> <p>After
         * some time, the instances are attached to the load balancer and the health check
         * status is available.</p> <p>The <code>attach instances to load balancer</code>
         * operation supports tag-based access control via resource tags applied to the
         * resource identified by <code>load balancer name</code>. For more information,
         * see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AttachInstancesToLoadBalancer">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachInstancesToLoadBalancerOutcome AttachInstancesToLoadBalancer(const Model::AttachInstancesToLoadBalancerRequest& request) const;

        /**
         * <p>Attaches one or more Lightsail instances to a load balancer.</p> <p>After
         * some time, the instances are attached to the load balancer and the health check
         * status is available.</p> <p>The <code>attach instances to load balancer</code>
         * operation supports tag-based access control via resource tags applied to the
         * resource identified by <code>load balancer name</code>. For more information,
         * see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AttachInstancesToLoadBalancer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachInstancesToLoadBalancerOutcomeCallable AttachInstancesToLoadBalancerCallable(const Model::AttachInstancesToLoadBalancerRequest& request) const;

        /**
         * <p>Attaches one or more Lightsail instances to a load balancer.</p> <p>After
         * some time, the instances are attached to the load balancer and the health check
         * status is available.</p> <p>The <code>attach instances to load balancer</code>
         * operation supports tag-based access control via resource tags applied to the
         * resource identified by <code>load balancer name</code>. For more information,
         * see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AttachInstancesToLoadBalancer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AttachLoadBalancerTlsCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachLoadBalancerTlsCertificateOutcome AttachLoadBalancerTlsCertificate(const Model::AttachLoadBalancerTlsCertificateRequest& request) const;

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
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AttachLoadBalancerTlsCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachLoadBalancerTlsCertificateOutcomeCallable AttachLoadBalancerTlsCertificateCallable(const Model::AttachLoadBalancerTlsCertificateRequest& request) const;

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
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AttachLoadBalancerTlsCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Attaches a static IP address to a specific Amazon Lightsail
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AttachStaticIp">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachStaticIpOutcomeCallable AttachStaticIpCallable(const Model::AttachStaticIpRequest& request) const;

        /**
         * <p>Attaches a static IP address to a specific Amazon Lightsail
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AttachStaticIp">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachStaticIpAsync(const Model::AttachStaticIpRequest& request, const AttachStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Closes ports for a specific Amazon Lightsail instance.</p> <p>The
         * <code>CloseInstancePublicPorts</code> action supports tag-based access control
         * via resource tags applied to the resource identified by
         * <code>instanceName</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CloseInstancePublicPorts">AWS
         * API Reference</a></p>
         */
        virtual Model::CloseInstancePublicPortsOutcome CloseInstancePublicPorts(const Model::CloseInstancePublicPortsRequest& request) const;

        /**
         * <p>Closes ports for a specific Amazon Lightsail instance.</p> <p>The
         * <code>CloseInstancePublicPorts</code> action supports tag-based access control
         * via resource tags applied to the resource identified by
         * <code>instanceName</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CloseInstancePublicPorts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CloseInstancePublicPortsOutcomeCallable CloseInstancePublicPortsCallable(const Model::CloseInstancePublicPortsRequest& request) const;

        /**
         * <p>Closes ports for a specific Amazon Lightsail instance.</p> <p>The
         * <code>CloseInstancePublicPorts</code> action supports tag-based access control
         * via resource tags applied to the resource identified by
         * <code>instanceName</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CloseInstancePublicPorts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CloseInstancePublicPortsAsync(const Model::CloseInstancePublicPortsRequest& request, const CloseInstancePublicPortsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Copies a manual snapshot of an instance or disk as another manual snapshot,
         * or copies an automatic snapshot of an instance or disk as a manual snapshot.
         * This operation can also be used to copy a manual or automatic snapshot of an
         * instance or a disk from one AWS Region to another in Amazon Lightsail.</p>
         * <p>When copying a <i>manual snapshot</i>, be sure to define the <code>source
         * region</code>, <code>source snapshot name</code>, and <code>target snapshot
         * name</code> parameters.</p> <p>When copying an <i>automatic snapshot</i>, be
         * sure to define the <code>source region</code>, <code>source resource
         * name</code>, <code>target snapshot name</code>, and either the <code>restore
         * date</code> or the <code>use latest restorable auto snapshot</code>
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CopySnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CopySnapshotOutcome CopySnapshot(const Model::CopySnapshotRequest& request) const;

        /**
         * <p>Copies a manual snapshot of an instance or disk as another manual snapshot,
         * or copies an automatic snapshot of an instance or disk as a manual snapshot.
         * This operation can also be used to copy a manual or automatic snapshot of an
         * instance or a disk from one AWS Region to another in Amazon Lightsail.</p>
         * <p>When copying a <i>manual snapshot</i>, be sure to define the <code>source
         * region</code>, <code>source snapshot name</code>, and <code>target snapshot
         * name</code> parameters.</p> <p>When copying an <i>automatic snapshot</i>, be
         * sure to define the <code>source region</code>, <code>source resource
         * name</code>, <code>target snapshot name</code>, and either the <code>restore
         * date</code> or the <code>use latest restorable auto snapshot</code>
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CopySnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopySnapshotOutcomeCallable CopySnapshotCallable(const Model::CopySnapshotRequest& request) const;

        /**
         * <p>Copies a manual snapshot of an instance or disk as another manual snapshot,
         * or copies an automatic snapshot of an instance or disk as a manual snapshot.
         * This operation can also be used to copy a manual or automatic snapshot of an
         * instance or a disk from one AWS Region to another in Amazon Lightsail.</p>
         * <p>When copying a <i>manual snapshot</i>, be sure to define the <code>source
         * region</code>, <code>source snapshot name</code>, and <code>target snapshot
         * name</code> parameters.</p> <p>When copying an <i>automatic snapshot</i>, be
         * sure to define the <code>source region</code>, <code>source resource
         * name</code>, <code>target snapshot name</code>, and either the <code>restore
         * date</code> or the <code>use latest restorable auto snapshot</code>
         * parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CopySnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopySnapshotAsync(const Model::CopySnapshotRequest& request, const CopySnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an SSL/TLS certificate for a Amazon Lightsail content delivery
         * network (CDN) distribution.</p> <p>After the certificate is created, use the
         * <code>AttachCertificateToDistribution</code> action to attach the certificate to
         * your distribution.</p>  <p>Only certificates created in the
         * <code>us-east-1</code> AWS Region can be attached to Lightsail distributions.
         * Lightsail distributions are global resources that can reference an origin in any
         * AWS Region, and distribute its content globally. However, all distributions are
         * located in the <code>us-east-1</code> Region.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCertificateOutcome CreateCertificate(const Model::CreateCertificateRequest& request) const;

        /**
         * <p>Creates an SSL/TLS certificate for a Amazon Lightsail content delivery
         * network (CDN) distribution.</p> <p>After the certificate is created, use the
         * <code>AttachCertificateToDistribution</code> action to attach the certificate to
         * your distribution.</p>  <p>Only certificates created in the
         * <code>us-east-1</code> AWS Region can be attached to Lightsail distributions.
         * Lightsail distributions are global resources that can reference an origin in any
         * AWS Region, and distribute its content globally. However, all distributions are
         * located in the <code>us-east-1</code> Region.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCertificateOutcomeCallable CreateCertificateCallable(const Model::CreateCertificateRequest& request) const;

        /**
         * <p>Creates an SSL/TLS certificate for a Amazon Lightsail content delivery
         * network (CDN) distribution.</p> <p>After the certificate is created, use the
         * <code>AttachCertificateToDistribution</code> action to attach the certificate to
         * your distribution.</p>  <p>Only certificates created in the
         * <code>us-east-1</code> AWS Region can be attached to Lightsail distributions.
         * Lightsail distributions are global resources that can reference an origin in any
         * AWS Region, and distribute its content globally. However, all distributions are
         * located in the <code>us-east-1</code> Region.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCloudFormationStackOutcomeCallable CreateCloudFormationStackCallable(const Model::CreateCloudFormationStackRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCloudFormationStackAsync(const Model::CreateCloudFormationStackRequest& request, const CreateCloudFormationStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an email or SMS text message contact method.</p> <p>A contact method
         * is used to send you notifications about your Amazon Lightsail resources. You can
         * add one email address and one mobile phone number contact method in each AWS
         * Region. However, SMS text messaging is not supported in some AWS Regions, and
         * SMS text messages cannot be sent to some countries/regions. For more
         * information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-notifications">Notifications
         * in Amazon Lightsail</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateContactMethod">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContactMethodOutcome CreateContactMethod(const Model::CreateContactMethodRequest& request) const;

        /**
         * <p>Creates an email or SMS text message contact method.</p> <p>A contact method
         * is used to send you notifications about your Amazon Lightsail resources. You can
         * add one email address and one mobile phone number contact method in each AWS
         * Region. However, SMS text messaging is not supported in some AWS Regions, and
         * SMS text messages cannot be sent to some countries/regions. For more
         * information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-notifications">Notifications
         * in Amazon Lightsail</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateContactMethod">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateContactMethodOutcomeCallable CreateContactMethodCallable(const Model::CreateContactMethodRequest& request) const;

        /**
         * <p>Creates an email or SMS text message contact method.</p> <p>A contact method
         * is used to send you notifications about your Amazon Lightsail resources. You can
         * add one email address and one mobile phone number contact method in each AWS
         * Region. However, SMS text messaging is not supported in some AWS Regions, and
         * SMS text messages cannot be sent to some countries/regions. For more
         * information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-notifications">Notifications
         * in Amazon Lightsail</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateContactMethod">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateContactMethodAsync(const Model::CreateContactMethodRequest& request, const CreateContactMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon Lightsail container service.</p> <p>A Lightsail container
         * service is a compute resource to which you can deploy containers. For more
         * information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-containers">Container
         * services in Amazon Lightsail</a> in the <i>Lightsail Dev
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateContainerService">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContainerServiceOutcome CreateContainerService(const Model::CreateContainerServiceRequest& request) const;

        /**
         * <p>Creates an Amazon Lightsail container service.</p> <p>A Lightsail container
         * service is a compute resource to which you can deploy containers. For more
         * information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-containers">Container
         * services in Amazon Lightsail</a> in the <i>Lightsail Dev
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateContainerService">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateContainerServiceOutcomeCallable CreateContainerServiceCallable(const Model::CreateContainerServiceRequest& request) const;

        /**
         * <p>Creates an Amazon Lightsail container service.</p> <p>A Lightsail container
         * service is a compute resource to which you can deploy containers. For more
         * information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-containers">Container
         * services in Amazon Lightsail</a> in the <i>Lightsail Dev
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateContainerService">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * public registry like Docker Hub, or from your local machine. For more
         * information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-creating-container-images">Creating
         * container images for your Amazon Lightsail container services</a> in the
         * <i>Lightsail Dev Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateContainerServiceDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContainerServiceDeploymentOutcome CreateContainerServiceDeployment(const Model::CreateContainerServiceDeploymentRequest& request) const;

        /**
         * <p>Creates a deployment for your Amazon Lightsail container service.</p> <p>A
         * deployment specifies the containers that will be launched on the container
         * service and their settings, such as the ports to open, the environment variables
         * to apply, and the launch command to run. It also specifies the container that
         * will serve as the public endpoint of the deployment and its settings, such as
         * the HTTP or HTTPS port to use, and the health check configuration.</p> <p>You
         * can deploy containers to your container service using container images from a
         * public registry like Docker Hub, or from your local machine. For more
         * information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-creating-container-images">Creating
         * container images for your Amazon Lightsail container services</a> in the
         * <i>Lightsail Dev Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateContainerServiceDeployment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateContainerServiceDeploymentOutcomeCallable CreateContainerServiceDeploymentCallable(const Model::CreateContainerServiceDeploymentRequest& request) const;

        /**
         * <p>Creates a deployment for your Amazon Lightsail container service.</p> <p>A
         * deployment specifies the containers that will be launched on the container
         * service and their settings, such as the ports to open, the environment variables
         * to apply, and the launch command to run. It also specifies the container that
         * will serve as the public endpoint of the deployment and its settings, such as
         * the HTTP or HTTPS port to use, and the health check configuration.</p> <p>You
         * can deploy containers to your container service using container images from a
         * public registry like Docker Hub, or from your local machine. For more
         * information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-creating-container-images">Creating
         * container images for your Amazon Lightsail container services</a> in the
         * <i>Lightsail Dev Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateContainerServiceDeployment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * service registry of your Lightsail account. You cannot pull container images
         * perform any other container image management actions on the container service
         * registry of your Lightsail account.</p>  <p>After you push your container
         * images to the container image registry of your Lightsail account, use the
         * <code>RegisterContainerImage</code> action to register the pushed images to a
         * specific Lightsail container service.</p>  <p>This action is not required
         * if you install and use the Lightsail Control (lightsailctl) plugin to push
         * container images to your Lightsail container service. For more information, see
         * <a href="amazon-lightsail-pushing-container-images">Pushing and managing
         * container images on your Amazon Lightsail container services</a> in the
         * <i>Lightsail Dev Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateContainerServiceRegistryLogin">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContainerServiceRegistryLoginOutcome CreateContainerServiceRegistryLogin(const Model::CreateContainerServiceRegistryLoginRequest& request) const;

        /**
         * <p>Creates a temporary set of log in credentials that you can use to log in to
         * the Docker process on your local machine. After you're logged in, you can use
         * the native Docker commands to push your local container images to the container
         * image registry of your Amazon Lightsail account so that you can use them with
         * your Lightsail container service. The log in credentials expire 12 hours after
         * they are created, at which point you will need to create a new set of log in
         * credentials.</p>  <p>You can only push container images to the container
         * service registry of your Lightsail account. You cannot pull container images
         * perform any other container image management actions on the container service
         * registry of your Lightsail account.</p>  <p>After you push your container
         * images to the container image registry of your Lightsail account, use the
         * <code>RegisterContainerImage</code> action to register the pushed images to a
         * specific Lightsail container service.</p>  <p>This action is not required
         * if you install and use the Lightsail Control (lightsailctl) plugin to push
         * container images to your Lightsail container service. For more information, see
         * <a href="amazon-lightsail-pushing-container-images">Pushing and managing
         * container images on your Amazon Lightsail container services</a> in the
         * <i>Lightsail Dev Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateContainerServiceRegistryLogin">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateContainerServiceRegistryLoginOutcomeCallable CreateContainerServiceRegistryLoginCallable(const Model::CreateContainerServiceRegistryLoginRequest& request) const;

        /**
         * <p>Creates a temporary set of log in credentials that you can use to log in to
         * the Docker process on your local machine. After you're logged in, you can use
         * the native Docker commands to push your local container images to the container
         * image registry of your Amazon Lightsail account so that you can use them with
         * your Lightsail container service. The log in credentials expire 12 hours after
         * they are created, at which point you will need to create a new set of log in
         * credentials.</p>  <p>You can only push container images to the container
         * service registry of your Lightsail account. You cannot pull container images
         * perform any other container image management actions on the container service
         * registry of your Lightsail account.</p>  <p>After you push your container
         * images to the container image registry of your Lightsail account, use the
         * <code>RegisterContainerImage</code> action to register the pushed images to a
         * specific Lightsail container service.</p>  <p>This action is not required
         * if you install and use the Lightsail Control (lightsailctl) plugin to push
         * container images to your Lightsail container service. For more information, see
         * <a href="amazon-lightsail-pushing-container-images">Pushing and managing
         * container images on your Amazon Lightsail container services</a> in the
         * <i>Lightsail Dev Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateContainerServiceRegistryLogin">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateContainerServiceRegistryLoginAsync(const Model::CreateContainerServiceRegistryLoginRequest& request, const CreateContainerServiceRegistryLoginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a block storage disk that can be attached to an Amazon Lightsail
         * instance in the same Availability Zone (e.g., <code>us-east-2a</code>).</p>
         * <p>The <code>create disk</code> operation supports tag-based access control via
         * request tags. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateDisk">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDiskOutcome CreateDisk(const Model::CreateDiskRequest& request) const;

        /**
         * <p>Creates a block storage disk that can be attached to an Amazon Lightsail
         * instance in the same Availability Zone (e.g., <code>us-east-2a</code>).</p>
         * <p>The <code>create disk</code> operation supports tag-based access control via
         * request tags. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateDisk">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDiskOutcomeCallable CreateDiskCallable(const Model::CreateDiskRequest& request) const;

        /**
         * <p>Creates a block storage disk that can be attached to an Amazon Lightsail
         * instance in the same Availability Zone (e.g., <code>us-east-2a</code>).</p>
         * <p>The <code>create disk</code> operation supports tag-based access control via
         * request tags. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateDisk">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDiskAsync(const Model::CreateDiskRequest& request, const CreateDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a block storage disk from a manual or automatic snapshot of a disk.
         * The resulting disk can be attached to an Amazon Lightsail instance in the same
         * Availability Zone (e.g., <code>us-east-2a</code>).</p> <p>The <code>create disk
         * from snapshot</code> operation supports tag-based access control via request
         * tags and resource tags applied to the resource identified by <code>disk snapshot
         * name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateDiskFromSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDiskFromSnapshotOutcome CreateDiskFromSnapshot(const Model::CreateDiskFromSnapshotRequest& request) const;

        /**
         * <p>Creates a block storage disk from a manual or automatic snapshot of a disk.
         * The resulting disk can be attached to an Amazon Lightsail instance in the same
         * Availability Zone (e.g., <code>us-east-2a</code>).</p> <p>The <code>create disk
         * from snapshot</code> operation supports tag-based access control via request
         * tags and resource tags applied to the resource identified by <code>disk snapshot
         * name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateDiskFromSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDiskFromSnapshotOutcomeCallable CreateDiskFromSnapshotCallable(const Model::CreateDiskFromSnapshotRequest& request) const;

        /**
         * <p>Creates a block storage disk from a manual or automatic snapshot of a disk.
         * The resulting disk can be attached to an Amazon Lightsail instance in the same
         * Availability Zone (e.g., <code>us-east-2a</code>).</p> <p>The <code>create disk
         * from snapshot</code> operation supports tag-based access control via request
         * tags and resource tags applied to the resource identified by <code>disk snapshot
         * name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateDiskFromSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateDiskSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDiskSnapshotOutcome CreateDiskSnapshot(const Model::CreateDiskSnapshotRequest& request) const;

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
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateDiskSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDiskSnapshotOutcomeCallable CreateDiskSnapshotCallable(const Model::CreateDiskSnapshotRequest& request) const;

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
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateDiskSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Creates an Amazon Lightsail content delivery network (CDN) distribution.</p>
         * <p>A distribution is a globally distributed network of caching servers that
         * improve the performance of your website or web application hosted on a Lightsail
         * instance. For more information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-content-delivery-network-distributions">Content
         * delivery networks in Amazon Lightsail</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateDistribution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDistributionOutcomeCallable CreateDistributionCallable(const Model::CreateDistributionRequest& request) const;

        /**
         * <p>Creates an Amazon Lightsail content delivery network (CDN) distribution.</p>
         * <p>A distribution is a globally distributed network of caching servers that
         * improve the performance of your website or web application hosted on a Lightsail
         * instance. For more information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-content-delivery-network-distributions">Content
         * delivery networks in Amazon Lightsail</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateDistribution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDistributionAsync(const Model::CreateDistributionRequest& request, const CreateDistributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a domain resource for the specified domain (e.g., example.com).</p>
         * <p>The <code>create domain</code> operation supports tag-based access control
         * via request tags. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDomainOutcome CreateDomain(const Model::CreateDomainRequest& request) const;

        /**
         * <p>Creates a domain resource for the specified domain (e.g., example.com).</p>
         * <p>The <code>create domain</code> operation supports tag-based access control
         * via request tags. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateDomain">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDomainOutcomeCallable CreateDomainCallable(const Model::CreateDomainRequest& request) const;

        /**
         * <p>Creates a domain resource for the specified domain (e.g., example.com).</p>
         * <p>The <code>create domain</code> operation supports tag-based access control
         * via request tags. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateDomain">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDomainAsync(const Model::CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates one of the following domain name system (DNS) records in a domain DNS
         * zone: Address (A), canonical name (CNAME), mail exchanger (MX), name server
         * (NS), start of authority (SOA), service locator (SRV), or text (TXT).</p> <p>The
         * <code>create domain entry</code> operation supports tag-based access control via
         * resource tags applied to the resource identified by <code>domain name</code>.
         * For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateDomainEntry">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDomainEntryOutcome CreateDomainEntry(const Model::CreateDomainEntryRequest& request) const;

        /**
         * <p>Creates one of the following domain name system (DNS) records in a domain DNS
         * zone: Address (A), canonical name (CNAME), mail exchanger (MX), name server
         * (NS), start of authority (SOA), service locator (SRV), or text (TXT).</p> <p>The
         * <code>create domain entry</code> operation supports tag-based access control via
         * resource tags applied to the resource identified by <code>domain name</code>.
         * For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateDomainEntry">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDomainEntryOutcomeCallable CreateDomainEntryCallable(const Model::CreateDomainEntryRequest& request) const;

        /**
         * <p>Creates one of the following domain name system (DNS) records in a domain DNS
         * zone: Address (A), canonical name (CNAME), mail exchanger (MX), name server
         * (NS), start of authority (SOA), service locator (SRV), or text (TXT).</p> <p>The
         * <code>create domain entry</code> operation supports tag-based access control via
         * resource tags applied to the resource identified by <code>domain name</code>.
         * For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateDomainEntry">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDomainEntryAsync(const Model::CreateDomainEntryRequest& request, const CreateDomainEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a snapshot of a specific virtual private server, or <i>instance</i>.
         * You can use a snapshot to create a new instance that is based on that
         * snapshot.</p> <p>The <code>create instance snapshot</code> operation supports
         * tag-based access control via request tags. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateInstanceSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInstanceSnapshotOutcome CreateInstanceSnapshot(const Model::CreateInstanceSnapshotRequest& request) const;

        /**
         * <p>Creates a snapshot of a specific virtual private server, or <i>instance</i>.
         * You can use a snapshot to create a new instance that is based on that
         * snapshot.</p> <p>The <code>create instance snapshot</code> operation supports
         * tag-based access control via request tags. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateInstanceSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInstanceSnapshotOutcomeCallable CreateInstanceSnapshotCallable(const Model::CreateInstanceSnapshotRequest& request) const;

        /**
         * <p>Creates a snapshot of a specific virtual private server, or <i>instance</i>.
         * You can use a snapshot to create a new instance that is based on that
         * snapshot.</p> <p>The <code>create instance snapshot</code> operation supports
         * tag-based access control via request tags. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateInstanceSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInstanceSnapshotAsync(const Model::CreateInstanceSnapshotRequest& request, const CreateInstanceSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates one or more Amazon Lightsail instances.</p> <p>The <code>create
         * instances</code> operation supports tag-based access control via request tags.
         * For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInstancesOutcome CreateInstances(const Model::CreateInstancesRequest& request) const;

        /**
         * <p>Creates one or more Amazon Lightsail instances.</p> <p>The <code>create
         * instances</code> operation supports tag-based access control via request tags.
         * For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInstancesOutcomeCallable CreateInstancesCallable(const Model::CreateInstancesRequest& request) const;

        /**
         * <p>Creates one or more Amazon Lightsail instances.</p> <p>The <code>create
         * instances</code> operation supports tag-based access control via request tags.
         * For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInstancesAsync(const Model::CreateInstancesRequest& request, const CreateInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates one or more new instances from a manual or automatic snapshot of an
         * instance.</p> <p>The <code>create instances from snapshot</code> operation
         * supports tag-based access control via request tags and resource tags applied to
         * the resource identified by <code>instance snapshot name</code>. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateInstancesFromSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInstancesFromSnapshotOutcome CreateInstancesFromSnapshot(const Model::CreateInstancesFromSnapshotRequest& request) const;

        /**
         * <p>Creates one or more new instances from a manual or automatic snapshot of an
         * instance.</p> <p>The <code>create instances from snapshot</code> operation
         * supports tag-based access control via request tags and resource tags applied to
         * the resource identified by <code>instance snapshot name</code>. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateInstancesFromSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInstancesFromSnapshotOutcomeCallable CreateInstancesFromSnapshotCallable(const Model::CreateInstancesFromSnapshotRequest& request) const;

        /**
         * <p>Creates one or more new instances from a manual or automatic snapshot of an
         * instance.</p> <p>The <code>create instances from snapshot</code> operation
         * supports tag-based access control via request tags and resource tags applied to
         * the resource identified by <code>instance snapshot name</code>. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateInstancesFromSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInstancesFromSnapshotAsync(const Model::CreateInstancesFromSnapshotRequest& request, const CreateInstancesFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an SSH key pair.</p> <p>The <code>create key pair</code> operation
         * supports tag-based access control via request tags. For more information, see
         * the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateKeyPair">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateKeyPairOutcome CreateKeyPair(const Model::CreateKeyPairRequest& request) const;

        /**
         * <p>Creates an SSH key pair.</p> <p>The <code>create key pair</code> operation
         * supports tag-based access control via request tags. For more information, see
         * the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateKeyPair">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateKeyPairOutcomeCallable CreateKeyPairCallable(const Model::CreateKeyPairRequest& request) const;

        /**
         * <p>Creates an SSH key pair.</p> <p>The <code>create key pair</code> operation
         * supports tag-based access control via request tags. For more information, see
         * the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateKeyPair">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateKeyPairAsync(const Model::CreateKeyPairRequest& request, const CreateKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Lightsail load balancer. To learn more about deciding whether to
         * load balance your application, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/how-to/article/configure-lightsail-instances-for-load-balancing">Configure
         * your Lightsail instances for load balancing</a>. You can create up to 5 load
         * balancers per AWS Region in your account.</p> <p>When you create a load
         * balancer, you can specify a unique name and port settings. To change additional
         * load balancer settings, use the <code>UpdateLoadBalancerAttribute</code>
         * operation.</p> <p>The <code>create load balancer</code> operation supports
         * tag-based access control via request tags. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateLoadBalancer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLoadBalancerOutcome CreateLoadBalancer(const Model::CreateLoadBalancerRequest& request) const;

        /**
         * <p>Creates a Lightsail load balancer. To learn more about deciding whether to
         * load balance your application, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/how-to/article/configure-lightsail-instances-for-load-balancing">Configure
         * your Lightsail instances for load balancing</a>. You can create up to 5 load
         * balancers per AWS Region in your account.</p> <p>When you create a load
         * balancer, you can specify a unique name and port settings. To change additional
         * load balancer settings, use the <code>UpdateLoadBalancerAttribute</code>
         * operation.</p> <p>The <code>create load balancer</code> operation supports
         * tag-based access control via request tags. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateLoadBalancer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLoadBalancerOutcomeCallable CreateLoadBalancerCallable(const Model::CreateLoadBalancerRequest& request) const;

        /**
         * <p>Creates a Lightsail load balancer. To learn more about deciding whether to
         * load balance your application, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/how-to/article/configure-lightsail-instances-for-load-balancing">Configure
         * your Lightsail instances for load balancing</a>. You can create up to 5 load
         * balancers per AWS Region in your account.</p> <p>When you create a load
         * balancer, you can specify a unique name and port settings. To change additional
         * load balancer settings, use the <code>UpdateLoadBalancerAttribute</code>
         * operation.</p> <p>The <code>create load balancer</code> operation supports
         * tag-based access control via request tags. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateLoadBalancer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLoadBalancerAsync(const Model::CreateLoadBalancerRequest& request, const CreateLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Lightsail load balancer TLS certificate.</p> <p>TLS is just an
         * updated, more secure version of Secure Socket Layer (SSL).</p> <p>The
         * <code>CreateLoadBalancerTlsCertificate</code> operation supports tag-based
         * access control via resource tags applied to the resource identified by
         * <code>load balancer name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateLoadBalancerTlsCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLoadBalancerTlsCertificateOutcome CreateLoadBalancerTlsCertificate(const Model::CreateLoadBalancerTlsCertificateRequest& request) const;

        /**
         * <p>Creates a Lightsail load balancer TLS certificate.</p> <p>TLS is just an
         * updated, more secure version of Secure Socket Layer (SSL).</p> <p>The
         * <code>CreateLoadBalancerTlsCertificate</code> operation supports tag-based
         * access control via resource tags applied to the resource identified by
         * <code>load balancer name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateLoadBalancerTlsCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLoadBalancerTlsCertificateOutcomeCallable CreateLoadBalancerTlsCertificateCallable(const Model::CreateLoadBalancerTlsCertificateRequest& request) const;

        /**
         * <p>Creates a Lightsail load balancer TLS certificate.</p> <p>TLS is just an
         * updated, more secure version of Secure Socket Layer (SSL).</p> <p>The
         * <code>CreateLoadBalancerTlsCertificate</code> operation supports tag-based
         * access control via resource tags applied to the resource identified by
         * <code>load balancer name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateLoadBalancerTlsCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLoadBalancerTlsCertificateAsync(const Model::CreateLoadBalancerTlsCertificateRequest& request, const CreateLoadBalancerTlsCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new database in Amazon Lightsail.</p> <p>The <code>create
         * relational database</code> operation supports tag-based access control via
         * request tags. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateRelationalDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRelationalDatabaseOutcome CreateRelationalDatabase(const Model::CreateRelationalDatabaseRequest& request) const;

        /**
         * <p>Creates a new database in Amazon Lightsail.</p> <p>The <code>create
         * relational database</code> operation supports tag-based access control via
         * request tags. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateRelationalDatabase">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRelationalDatabaseOutcomeCallable CreateRelationalDatabaseCallable(const Model::CreateRelationalDatabaseRequest& request) const;

        /**
         * <p>Creates a new database in Amazon Lightsail.</p> <p>The <code>create
         * relational database</code> operation supports tag-based access control via
         * request tags. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateRelationalDatabase">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateRelationalDatabaseFromSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRelationalDatabaseFromSnapshotOutcome CreateRelationalDatabaseFromSnapshot(const Model::CreateRelationalDatabaseFromSnapshotRequest& request) const;

        /**
         * <p>Creates a new database from an existing database snapshot in Amazon
         * Lightsail.</p> <p>You can create a new database from a snapshot in if something
         * goes wrong with your original database, or to change it to a different plan,
         * such as a high availability or standard plan.</p> <p>The <code>create relational
         * database from snapshot</code> operation supports tag-based access control via
         * request tags and resource tags applied to the resource identified by
         * relationalDatabaseSnapshotName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateRelationalDatabaseFromSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRelationalDatabaseFromSnapshotOutcomeCallable CreateRelationalDatabaseFromSnapshotCallable(const Model::CreateRelationalDatabaseFromSnapshotRequest& request) const;

        /**
         * <p>Creates a new database from an existing database snapshot in Amazon
         * Lightsail.</p> <p>You can create a new database from a snapshot in if something
         * goes wrong with your original database, or to change it to a different plan,
         * such as a high availability or standard plan.</p> <p>The <code>create relational
         * database from snapshot</code> operation supports tag-based access control via
         * request tags and resource tags applied to the resource identified by
         * relationalDatabaseSnapshotName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateRelationalDatabaseFromSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRelationalDatabaseFromSnapshotAsync(const Model::CreateRelationalDatabaseFromSnapshotRequest& request, const CreateRelationalDatabaseFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a snapshot of your database in Amazon Lightsail. You can use
         * snapshots for backups, to make copies of a database, and to save data before
         * deleting a database.</p> <p>The <code>create relational database snapshot</code>
         * operation supports tag-based access control via request tags. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateRelationalDatabaseSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRelationalDatabaseSnapshotOutcome CreateRelationalDatabaseSnapshot(const Model::CreateRelationalDatabaseSnapshotRequest& request) const;

        /**
         * <p>Creates a snapshot of your database in Amazon Lightsail. You can use
         * snapshots for backups, to make copies of a database, and to save data before
         * deleting a database.</p> <p>The <code>create relational database snapshot</code>
         * operation supports tag-based access control via request tags. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateRelationalDatabaseSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRelationalDatabaseSnapshotOutcomeCallable CreateRelationalDatabaseSnapshotCallable(const Model::CreateRelationalDatabaseSnapshotRequest& request) const;

        /**
         * <p>Creates a snapshot of your database in Amazon Lightsail. You can use
         * snapshots for backups, to make copies of a database, and to save data before
         * deleting a database.</p> <p>The <code>create relational database snapshot</code>
         * operation supports tag-based access control via request tags. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateRelationalDatabaseSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes an alarm.</p> <p>An alarm is used to monitor a single metric for one
         * of your resources. When a metric condition is met, the alarm can notify you by
         * email, SMS text message, and a banner displayed on the Amazon Lightsail console.
         * For more information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-alarms">Alarms
         * in Amazon Lightsail</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteAlarm">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAlarmOutcomeCallable DeleteAlarmCallable(const Model::DeleteAlarmRequest& request) const;

        /**
         * <p>Deletes an alarm.</p> <p>An alarm is used to monitor a single metric for one
         * of your resources. When a metric condition is met, the alarm can notify you by
         * email, SMS text message, and a banner displayed on the Amazon Lightsail console.
         * For more information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-alarms">Alarms
         * in Amazon Lightsail</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteAlarm">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAlarmAsync(const Model::DeleteAlarmRequest& request, const DeleteAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an automatic snapshot of an instance or disk. For more information,
         * see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteAutoSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAutoSnapshotOutcome DeleteAutoSnapshot(const Model::DeleteAutoSnapshotRequest& request) const;

        /**
         * <p>Deletes an automatic snapshot of an instance or disk. For more information,
         * see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteAutoSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAutoSnapshotOutcomeCallable DeleteAutoSnapshotCallable(const Model::DeleteAutoSnapshotRequest& request) const;

        /**
         * <p>Deletes an automatic snapshot of an instance or disk. For more information,
         * see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteAutoSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAutoSnapshotAsync(const Model::DeleteAutoSnapshotRequest& request, const DeleteAutoSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>Deletes an SSL/TLS certificate for your Amazon Lightsail content delivery
         * network (CDN) distribution.</p> <p>Certificates that are currently attached to a
         * distribution cannot be deleted. Use the
         * <code>DetachCertificateFromDistribution</code> action to detach a certificate
         * from a distribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCertificateOutcomeCallable DeleteCertificateCallable(const Model::DeleteCertificateRequest& request) const;

        /**
         * <p>Deletes an SSL/TLS certificate for your Amazon Lightsail content delivery
         * network (CDN) distribution.</p> <p>Certificates that are currently attached to a
         * distribution cannot be deleted. Use the
         * <code>DetachCertificateFromDistribution</code> action to detach a certificate
         * from a distribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCertificateAsync(const Model::DeleteCertificateRequest& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a contact method.</p> <p>A contact method is used to send you
         * notifications about your Amazon Lightsail resources. You can add one email
         * address and one mobile phone number contact method in each AWS Region. However,
         * SMS text messaging is not supported in some AWS Regions, and SMS text messages
         * cannot be sent to some countries/regions. For more information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-notifications">Notifications
         * in Amazon Lightsail</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteContactMethod">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContactMethodOutcome DeleteContactMethod(const Model::DeleteContactMethodRequest& request) const;

        /**
         * <p>Deletes a contact method.</p> <p>A contact method is used to send you
         * notifications about your Amazon Lightsail resources. You can add one email
         * address and one mobile phone number contact method in each AWS Region. However,
         * SMS text messaging is not supported in some AWS Regions, and SMS text messages
         * cannot be sent to some countries/regions. For more information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-notifications">Notifications
         * in Amazon Lightsail</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteContactMethod">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteContactMethodOutcomeCallable DeleteContactMethodCallable(const Model::DeleteContactMethodRequest& request) const;

        /**
         * <p>Deletes a contact method.</p> <p>A contact method is used to send you
         * notifications about your Amazon Lightsail resources. You can add one email
         * address and one mobile phone number contact method in each AWS Region. However,
         * SMS text messaging is not supported in some AWS Regions, and SMS text messages
         * cannot be sent to some countries/regions. For more information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-notifications">Notifications
         * in Amazon Lightsail</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteContactMethod">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes a container image that is registered to your Amazon Lightsail
         * container service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteContainerImage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteContainerImageOutcomeCallable DeleteContainerImageCallable(const Model::DeleteContainerImageRequest& request) const;

        /**
         * <p>Deletes a container image that is registered to your Amazon Lightsail
         * container service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteContainerImage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes your Amazon Lightsail container service.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteContainerService">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteContainerServiceOutcomeCallable DeleteContainerServiceCallable(const Model::DeleteContainerServiceRequest& request) const;

        /**
         * <p>Deletes your Amazon Lightsail container service.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteContainerService">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteContainerServiceAsync(const Model::DeleteContainerServiceRequest& request, const DeleteContainerServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified block storage disk. The disk must be in the
         * <code>available</code> state (not attached to a Lightsail instance).</p> 
         * <p>The disk may remain in the <code>deleting</code> state for several
         * minutes.</p>  <p>The <code>delete disk</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * <code>disk name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteDisk">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDiskOutcome DeleteDisk(const Model::DeleteDiskRequest& request) const;

        /**
         * <p>Deletes the specified block storage disk. The disk must be in the
         * <code>available</code> state (not attached to a Lightsail instance).</p> 
         * <p>The disk may remain in the <code>deleting</code> state for several
         * minutes.</p>  <p>The <code>delete disk</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * <code>disk name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteDisk">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDiskOutcomeCallable DeleteDiskCallable(const Model::DeleteDiskRequest& request) const;

        /**
         * <p>Deletes the specified block storage disk. The disk must be in the
         * <code>available</code> state (not attached to a Lightsail instance).</p> 
         * <p>The disk may remain in the <code>deleting</code> state for several
         * minutes.</p>  <p>The <code>delete disk</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * <code>disk name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteDisk">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteDiskSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDiskSnapshotOutcome DeleteDiskSnapshot(const Model::DeleteDiskSnapshotRequest& request) const;

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
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteDiskSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDiskSnapshotOutcomeCallable DeleteDiskSnapshotCallable(const Model::DeleteDiskSnapshotRequest& request) const;

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
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteDiskSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes your Amazon Lightsail content delivery network (CDN)
         * distribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteDistribution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDistributionOutcomeCallable DeleteDistributionCallable(const Model::DeleteDistributionRequest& request) const;

        /**
         * <p>Deletes your Amazon Lightsail content delivery network (CDN)
         * distribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteDistribution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDistributionAsync(const Model::DeleteDistributionRequest& request, const DeleteDistributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified domain recordset and all of its domain records.</p>
         * <p>The <code>delete domain</code> operation supports tag-based access control
         * via resource tags applied to the resource identified by <code>domain
         * name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainOutcome DeleteDomain(const Model::DeleteDomainRequest& request) const;

        /**
         * <p>Deletes the specified domain recordset and all of its domain records.</p>
         * <p>The <code>delete domain</code> operation supports tag-based access control
         * via resource tags applied to the resource identified by <code>domain
         * name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteDomain">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDomainOutcomeCallable DeleteDomainCallable(const Model::DeleteDomainRequest& request) const;

        /**
         * <p>Deletes the specified domain recordset and all of its domain records.</p>
         * <p>The <code>delete domain</code> operation supports tag-based access control
         * via resource tags applied to the resource identified by <code>domain
         * name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteDomain">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDomainAsync(const Model::DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specific domain entry.</p> <p>The <code>delete domain entry</code>
         * operation supports tag-based access control via resource tags applied to the
         * resource identified by <code>domain name</code>. For more information, see the
         * <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteDomainEntry">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainEntryOutcome DeleteDomainEntry(const Model::DeleteDomainEntryRequest& request) const;

        /**
         * <p>Deletes a specific domain entry.</p> <p>The <code>delete domain entry</code>
         * operation supports tag-based access control via resource tags applied to the
         * resource identified by <code>domain name</code>. For more information, see the
         * <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteDomainEntry">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDomainEntryOutcomeCallable DeleteDomainEntryCallable(const Model::DeleteDomainEntryRequest& request) const;

        /**
         * <p>Deletes a specific domain entry.</p> <p>The <code>delete domain entry</code>
         * operation supports tag-based access control via resource tags applied to the
         * resource identified by <code>domain name</code>. For more information, see the
         * <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteDomainEntry">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDomainEntryAsync(const Model::DeleteDomainEntryRequest& request, const DeleteDomainEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Amazon Lightsail instance.</p> <p>The <code>delete instance</code>
         * operation supports tag-based access control via resource tags applied to the
         * resource identified by <code>instance name</code>. For more information, see the
         * <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInstanceOutcome DeleteInstance(const Model::DeleteInstanceRequest& request) const;

        /**
         * <p>Deletes an Amazon Lightsail instance.</p> <p>The <code>delete instance</code>
         * operation supports tag-based access control via resource tags applied to the
         * resource identified by <code>instance name</code>. For more information, see the
         * <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInstanceOutcomeCallable DeleteInstanceCallable(const Model::DeleteInstanceRequest& request) const;

        /**
         * <p>Deletes an Amazon Lightsail instance.</p> <p>The <code>delete instance</code>
         * operation supports tag-based access control via resource tags applied to the
         * resource identified by <code>instance name</code>. For more information, see the
         * <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specific snapshot of a virtual private server (or
         * <i>instance</i>).</p> <p>The <code>delete instance snapshot</code> operation
         * supports tag-based access control via resource tags applied to the resource
         * identified by <code>instance snapshot name</code>. For more information, see the
         * <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteInstanceSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInstanceSnapshotOutcome DeleteInstanceSnapshot(const Model::DeleteInstanceSnapshotRequest& request) const;

        /**
         * <p>Deletes a specific snapshot of a virtual private server (or
         * <i>instance</i>).</p> <p>The <code>delete instance snapshot</code> operation
         * supports tag-based access control via resource tags applied to the resource
         * identified by <code>instance snapshot name</code>. For more information, see the
         * <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteInstanceSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInstanceSnapshotOutcomeCallable DeleteInstanceSnapshotCallable(const Model::DeleteInstanceSnapshotRequest& request) const;

        /**
         * <p>Deletes a specific snapshot of a virtual private server (or
         * <i>instance</i>).</p> <p>The <code>delete instance snapshot</code> operation
         * supports tag-based access control via resource tags applied to the resource
         * identified by <code>instance snapshot name</code>. For more information, see the
         * <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteInstanceSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInstanceSnapshotAsync(const Model::DeleteInstanceSnapshotRequest& request, const DeleteInstanceSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specific SSH key pair.</p> <p>The <code>delete key pair</code>
         * operation supports tag-based access control via resource tags applied to the
         * resource identified by <code>key pair name</code>. For more information, see the
         * <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteKeyPair">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteKeyPairOutcome DeleteKeyPair(const Model::DeleteKeyPairRequest& request) const;

        /**
         * <p>Deletes a specific SSH key pair.</p> <p>The <code>delete key pair</code>
         * operation supports tag-based access control via resource tags applied to the
         * resource identified by <code>key pair name</code>. For more information, see the
         * <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteKeyPair">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteKeyPairOutcomeCallable DeleteKeyPairCallable(const Model::DeleteKeyPairRequest& request) const;

        /**
         * <p>Deletes a specific SSH key pair.</p> <p>The <code>delete key pair</code>
         * operation supports tag-based access control via resource tags applied to the
         * resource identified by <code>key pair name</code>. For more information, see the
         * <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteKeyPair">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-troubleshooting-browser-based-ssh-rdp-client-connection">Troubleshooting
         * connection issues when using the Amazon Lightsail browser-based SSH or RDP
         * client</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteKnownHostKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteKnownHostKeysOutcome DeleteKnownHostKeys(const Model::DeleteKnownHostKeysRequest& request) const;

        /**
         * <p>Deletes the known host key or certificate used by the Amazon Lightsail
         * browser-based SSH or RDP clients to authenticate an instance. This operation
         * enables the Lightsail browser-based SSH or RDP clients to connect to the
         * instance after a host key mismatch.</p>  <p>Perform this operation
         * only if you were expecting the host key or certificate mismatch or if you are
         * familiar with the new host key or certificate on the instance. For more
         * information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-troubleshooting-browser-based-ssh-rdp-client-connection">Troubleshooting
         * connection issues when using the Amazon Lightsail browser-based SSH or RDP
         * client</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteKnownHostKeys">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteKnownHostKeysOutcomeCallable DeleteKnownHostKeysCallable(const Model::DeleteKnownHostKeysRequest& request) const;

        /**
         * <p>Deletes the known host key or certificate used by the Amazon Lightsail
         * browser-based SSH or RDP clients to authenticate an instance. This operation
         * enables the Lightsail browser-based SSH or RDP clients to connect to the
         * instance after a host key mismatch.</p>  <p>Perform this operation
         * only if you were expecting the host key or certificate mismatch or if you are
         * familiar with the new host key or certificate on the instance. For more
         * information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-troubleshooting-browser-based-ssh-rdp-client-connection">Troubleshooting
         * connection issues when using the Amazon Lightsail browser-based SSH or RDP
         * client</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteKnownHostKeys">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteKnownHostKeysAsync(const Model::DeleteKnownHostKeysRequest& request, const DeleteKnownHostKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a Lightsail load balancer and all its associated SSL/TLS
         * certificates. Once the load balancer is deleted, you will need to create a new
         * load balancer, create a new certificate, and verify domain ownership again.</p>
         * <p>The <code>delete load balancer</code> operation supports tag-based access
         * control via resource tags applied to the resource identified by <code>load
         * balancer name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteLoadBalancer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLoadBalancerOutcome DeleteLoadBalancer(const Model::DeleteLoadBalancerRequest& request) const;

        /**
         * <p>Deletes a Lightsail load balancer and all its associated SSL/TLS
         * certificates. Once the load balancer is deleted, you will need to create a new
         * load balancer, create a new certificate, and verify domain ownership again.</p>
         * <p>The <code>delete load balancer</code> operation supports tag-based access
         * control via resource tags applied to the resource identified by <code>load
         * balancer name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteLoadBalancer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLoadBalancerOutcomeCallable DeleteLoadBalancerCallable(const Model::DeleteLoadBalancerRequest& request) const;

        /**
         * <p>Deletes a Lightsail load balancer and all its associated SSL/TLS
         * certificates. Once the load balancer is deleted, you will need to create a new
         * load balancer, create a new certificate, and verify domain ownership again.</p>
         * <p>The <code>delete load balancer</code> operation supports tag-based access
         * control via resource tags applied to the resource identified by <code>load
         * balancer name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteLoadBalancer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLoadBalancerAsync(const Model::DeleteLoadBalancerRequest& request, const DeleteLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an SSL/TLS certificate associated with a Lightsail load balancer.</p>
         * <p>The <code>DeleteLoadBalancerTlsCertificate</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * <code>load balancer name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteLoadBalancerTlsCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLoadBalancerTlsCertificateOutcome DeleteLoadBalancerTlsCertificate(const Model::DeleteLoadBalancerTlsCertificateRequest& request) const;

        /**
         * <p>Deletes an SSL/TLS certificate associated with a Lightsail load balancer.</p>
         * <p>The <code>DeleteLoadBalancerTlsCertificate</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * <code>load balancer name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteLoadBalancerTlsCertificate">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLoadBalancerTlsCertificateOutcomeCallable DeleteLoadBalancerTlsCertificateCallable(const Model::DeleteLoadBalancerTlsCertificateRequest& request) const;

        /**
         * <p>Deletes an SSL/TLS certificate associated with a Lightsail load balancer.</p>
         * <p>The <code>DeleteLoadBalancerTlsCertificate</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * <code>load balancer name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteLoadBalancerTlsCertificate">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLoadBalancerTlsCertificateAsync(const Model::DeleteLoadBalancerTlsCertificateRequest& request, const DeleteLoadBalancerTlsCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a database in Amazon Lightsail.</p> <p>The <code>delete relational
         * database</code> operation supports tag-based access control via resource tags
         * applied to the resource identified by relationalDatabaseName. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteRelationalDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRelationalDatabaseOutcome DeleteRelationalDatabase(const Model::DeleteRelationalDatabaseRequest& request) const;

        /**
         * <p>Deletes a database in Amazon Lightsail.</p> <p>The <code>delete relational
         * database</code> operation supports tag-based access control via resource tags
         * applied to the resource identified by relationalDatabaseName. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteRelationalDatabase">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRelationalDatabaseOutcomeCallable DeleteRelationalDatabaseCallable(const Model::DeleteRelationalDatabaseRequest& request) const;

        /**
         * <p>Deletes a database in Amazon Lightsail.</p> <p>The <code>delete relational
         * database</code> operation supports tag-based access control via resource tags
         * applied to the resource identified by relationalDatabaseName. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteRelationalDatabase">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRelationalDatabaseAsync(const Model::DeleteRelationalDatabaseRequest& request, const DeleteRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a database snapshot in Amazon Lightsail.</p> <p>The <code>delete
         * relational database snapshot</code> operation supports tag-based access control
         * via resource tags applied to the resource identified by relationalDatabaseName.
         * For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteRelationalDatabaseSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRelationalDatabaseSnapshotOutcome DeleteRelationalDatabaseSnapshot(const Model::DeleteRelationalDatabaseSnapshotRequest& request) const;

        /**
         * <p>Deletes a database snapshot in Amazon Lightsail.</p> <p>The <code>delete
         * relational database snapshot</code> operation supports tag-based access control
         * via resource tags applied to the resource identified by relationalDatabaseName.
         * For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteRelationalDatabaseSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRelationalDatabaseSnapshotOutcomeCallable DeleteRelationalDatabaseSnapshotCallable(const Model::DeleteRelationalDatabaseSnapshotRequest& request) const;

        /**
         * <p>Deletes a database snapshot in Amazon Lightsail.</p> <p>The <code>delete
         * relational database snapshot</code> operation supports tag-based access control
         * via resource tags applied to the resource identified by relationalDatabaseName.
         * For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteRelationalDatabaseSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Detaches an SSL/TLS certificate from your Amazon Lightsail content delivery
         * network (CDN) distribution.</p> <p>After the certificate is detached, your
         * distribution stops accepting traffic for all of the domains that are associated
         * with the certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DetachCertificateFromDistribution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachCertificateFromDistributionOutcomeCallable DetachCertificateFromDistributionCallable(const Model::DetachCertificateFromDistributionRequest& request) const;

        /**
         * <p>Detaches an SSL/TLS certificate from your Amazon Lightsail content delivery
         * network (CDN) distribution.</p> <p>After the certificate is detached, your
         * distribution stops accepting traffic for all of the domains that are associated
         * with the certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DetachCertificateFromDistribution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachCertificateFromDistributionAsync(const Model::DetachCertificateFromDistributionRequest& request, const DetachCertificateFromDistributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detaches a stopped block storage disk from a Lightsail instance. Make sure to
         * unmount any file systems on the device within your operating system before
         * stopping the instance and detaching the disk.</p> <p>The <code>detach
         * disk</code> operation supports tag-based access control via resource tags
         * applied to the resource identified by <code>disk name</code>. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DetachDisk">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachDiskOutcome DetachDisk(const Model::DetachDiskRequest& request) const;

        /**
         * <p>Detaches a stopped block storage disk from a Lightsail instance. Make sure to
         * unmount any file systems on the device within your operating system before
         * stopping the instance and detaching the disk.</p> <p>The <code>detach
         * disk</code> operation supports tag-based access control via resource tags
         * applied to the resource identified by <code>disk name</code>. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DetachDisk">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachDiskOutcomeCallable DetachDiskCallable(const Model::DetachDiskRequest& request) const;

        /**
         * <p>Detaches a stopped block storage disk from a Lightsail instance. Make sure to
         * unmount any file systems on the device within your operating system before
         * stopping the instance and detaching the disk.</p> <p>The <code>detach
         * disk</code> operation supports tag-based access control via resource tags
         * applied to the resource identified by <code>disk name</code>. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DetachDisk">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachDiskAsync(const Model::DetachDiskRequest& request, const DetachDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detaches the specified instances from a Lightsail load balancer.</p> <p>This
         * operation waits until the instances are no longer needed before they are
         * detached from the load balancer.</p> <p>The <code>detach instances from load
         * balancer</code> operation supports tag-based access control via resource tags
         * applied to the resource identified by <code>load balancer name</code>. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DetachInstancesFromLoadBalancer">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachInstancesFromLoadBalancerOutcome DetachInstancesFromLoadBalancer(const Model::DetachInstancesFromLoadBalancerRequest& request) const;

        /**
         * <p>Detaches the specified instances from a Lightsail load balancer.</p> <p>This
         * operation waits until the instances are no longer needed before they are
         * detached from the load balancer.</p> <p>The <code>detach instances from load
         * balancer</code> operation supports tag-based access control via resource tags
         * applied to the resource identified by <code>load balancer name</code>. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DetachInstancesFromLoadBalancer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachInstancesFromLoadBalancerOutcomeCallable DetachInstancesFromLoadBalancerCallable(const Model::DetachInstancesFromLoadBalancerRequest& request) const;

        /**
         * <p>Detaches the specified instances from a Lightsail load balancer.</p> <p>This
         * operation waits until the instances are no longer needed before they are
         * detached from the load balancer.</p> <p>The <code>detach instances from load
         * balancer</code> operation supports tag-based access control via resource tags
         * applied to the resource identified by <code>load balancer name</code>. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DetachInstancesFromLoadBalancer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Detaches a static IP from the Amazon Lightsail instance to which it is
         * attached.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DetachStaticIp">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachStaticIpOutcomeCallable DetachStaticIpCallable(const Model::DetachStaticIpRequest& request) const;

        /**
         * <p>Detaches a static IP from the Amazon Lightsail instance to which it is
         * attached.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DetachStaticIp">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachStaticIpAsync(const Model::DetachStaticIpRequest& request, const DetachStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables an add-on for an Amazon Lightsail resource. For more information,
         * see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DisableAddOn">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableAddOnOutcome DisableAddOn(const Model::DisableAddOnRequest& request) const;

        /**
         * <p>Disables an add-on for an Amazon Lightsail resource. For more information,
         * see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DisableAddOn">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableAddOnOutcomeCallable DisableAddOnCallable(const Model::DisableAddOnRequest& request) const;

        /**
         * <p>Disables an add-on for an Amazon Lightsail resource. For more information,
         * see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DisableAddOn">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableAddOnAsync(const Model::DisableAddOnRequest& request, const DisableAddOnResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Downloads the default SSH key pair from the user's account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DownloadDefaultKeyPair">AWS
         * API Reference</a></p>
         */
        virtual Model::DownloadDefaultKeyPairOutcome DownloadDefaultKeyPair(const Model::DownloadDefaultKeyPairRequest& request) const;

        /**
         * <p>Downloads the default SSH key pair from the user's account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DownloadDefaultKeyPair">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DownloadDefaultKeyPairOutcomeCallable DownloadDefaultKeyPairCallable(const Model::DownloadDefaultKeyPairRequest& request) const;

        /**
         * <p>Downloads the default SSH key pair from the user's account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DownloadDefaultKeyPair">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DownloadDefaultKeyPairAsync(const Model::DownloadDefaultKeyPairRequest& request, const DownloadDefaultKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables or modifies an add-on for an Amazon Lightsail resource. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/EnableAddOn">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableAddOnOutcome EnableAddOn(const Model::EnableAddOnRequest& request) const;

        /**
         * <p>Enables or modifies an add-on for an Amazon Lightsail resource. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/EnableAddOn">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableAddOnOutcomeCallable EnableAddOnCallable(const Model::EnableAddOnRequest& request) const;

        /**
         * <p>Enables or modifies an add-on for an Amazon Lightsail resource. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/EnableAddOn">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p>  <p>Use the <code>get instance snapshots</code> or
         * <code>get disk snapshots</code> operations to get a list of snapshots that you
         * can export to Amazon EC2.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/ExportSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportSnapshotOutcome ExportSnapshot(const Model::ExportSnapshotRequest& request) const;

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
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p>  <p>Use the <code>get instance snapshots</code> or
         * <code>get disk snapshots</code> operations to get a list of snapshots that you
         * can export to Amazon EC2.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/ExportSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ExportSnapshotOutcomeCallable ExportSnapshotCallable(const Model::ExportSnapshotRequest& request) const;

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
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p>  <p>Use the <code>get instance snapshots</code> or
         * <code>get disk snapshots</code> operations to get a list of snapshots that you
         * can export to Amazon EC2.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/ExportSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns the names of all active (not deleted) resources.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetActiveNames">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetActiveNamesOutcomeCallable GetActiveNamesCallable(const Model::GetActiveNamesRequest& request) const;

        /**
         * <p>Returns the names of all active (not deleted) resources.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetActiveNames">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAlarmsOutcomeCallable GetAlarmsCallable(const Model::GetAlarmsRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAlarmsAsync(const Model::GetAlarmsRequest& request, const GetAlarmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the available automatic snapshots for an instance or disk. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetAutoSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAutoSnapshotsOutcome GetAutoSnapshots(const Model::GetAutoSnapshotsRequest& request) const;

        /**
         * <p>Returns the available automatic snapshots for an instance or disk. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetAutoSnapshots">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAutoSnapshotsOutcomeCallable GetAutoSnapshotsCallable(const Model::GetAutoSnapshotsRequest& request) const;

        /**
         * <p>Returns the available automatic snapshots for an instance or disk. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetAutoSnapshots">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBlueprintsOutcomeCallable GetBlueprintsCallable(const Model::GetBlueprintsRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBlueprintsAsync(const Model::GetBlueprintsRequest& request, const GetBlueprintsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the list of bundles that are available for purchase. A bundle
         * describes the specs for your virtual private server (or
         * <i>instance</i>).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetBundles">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBundlesOutcome GetBundles(const Model::GetBundlesRequest& request) const;

        /**
         * <p>Returns the list of bundles that are available for purchase. A bundle
         * describes the specs for your virtual private server (or
         * <i>instance</i>).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetBundles">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBundlesOutcomeCallable GetBundlesCallable(const Model::GetBundlesRequest& request) const;

        /**
         * <p>Returns the list of bundles that are available for purchase. A bundle
         * describes the specs for your virtual private server (or
         * <i>instance</i>).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetBundles">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns information about one or more Amazon Lightsail SSL/TLS
         * certificates.</p>  <p>To get a summary of a certificate, ommit
         * <code>includeCertificateDetails</code> from your request. The response will
         * include only the certificate Amazon Resource Name (ARN), certificate name,
         * domain name, and tags.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetCertificates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCertificatesOutcomeCallable GetCertificatesCallable(const Model::GetCertificatesRequest& request) const;

        /**
         * <p>Returns information about one or more Amazon Lightsail SSL/TLS
         * certificates.</p>  <p>To get a summary of a certificate, ommit
         * <code>includeCertificateDetails</code> from your request. The response will
         * include only the certificate Amazon Resource Name (ARN), certificate name,
         * domain name, and tags.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetCertificates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns the CloudFormation stack record created as a result of the
         * <code>create cloud formation stack</code> operation.</p> <p>An AWS
         * CloudFormation stack is used to create a new Amazon EC2 instance from an
         * exported Lightsail snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetCloudFormationStackRecords">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCloudFormationStackRecordsOutcomeCallable GetCloudFormationStackRecordsCallable(const Model::GetCloudFormationStackRecordsRequest& request) const;

        /**
         * <p>Returns the CloudFormation stack record created as a result of the
         * <code>create cloud formation stack</code> operation.</p> <p>An AWS
         * CloudFormation stack is used to create a new Amazon EC2 instance from an
         * exported Lightsail snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetCloudFormationStackRecords">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCloudFormationStackRecordsAsync(const Model::GetCloudFormationStackRecordsRequest& request, const GetCloudFormationStackRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about the configured contact methods. Specify a protocol
         * in your request to return information about a specific contact method.</p> <p>A
         * contact method is used to send you notifications about your Amazon Lightsail
         * resources. You can add one email address and one mobile phone number contact
         * method in each AWS Region. However, SMS text messaging is not supported in some
         * AWS Regions, and SMS text messages cannot be sent to some countries/regions. For
         * more information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-notifications">Notifications
         * in Amazon Lightsail</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetContactMethods">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContactMethodsOutcome GetContactMethods(const Model::GetContactMethodsRequest& request) const;

        /**
         * <p>Returns information about the configured contact methods. Specify a protocol
         * in your request to return information about a specific contact method.</p> <p>A
         * contact method is used to send you notifications about your Amazon Lightsail
         * resources. You can add one email address and one mobile phone number contact
         * method in each AWS Region. However, SMS text messaging is not supported in some
         * AWS Regions, and SMS text messages cannot be sent to some countries/regions. For
         * more information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-notifications">Notifications
         * in Amazon Lightsail</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetContactMethods">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContactMethodsOutcomeCallable GetContactMethodsCallable(const Model::GetContactMethodsRequest& request) const;

        /**
         * <p>Returns information about the configured contact methods. Specify a protocol
         * in your request to return information about a specific contact method.</p> <p>A
         * contact method is used to send you notifications about your Amazon Lightsail
         * resources. You can add one email address and one mobile phone number contact
         * method in each AWS Region. However, SMS text messaging is not supported in some
         * AWS Regions, and SMS text messages cannot be sent to some countries/regions. For
         * more information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-notifications">Notifications
         * in Amazon Lightsail</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetContactMethods">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns information about Amazon Lightsail containers, such as the current
         * version of the Lightsail Control (lightsailctl) plugin.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetContainerAPIMetadata">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContainerAPIMetadataOutcomeCallable GetContainerAPIMetadataCallable(const Model::GetContainerAPIMetadataRequest& request) const;

        /**
         * <p>Returns information about Amazon Lightsail containers, such as the current
         * version of the Lightsail Control (lightsailctl) plugin.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetContainerAPIMetadata">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns the container images that are registered to your Amazon Lightsail
         * container service.</p>  <p>If you created a deployment on your Lightsail
         * container service that uses container images from a public registry like Docker
         * Hub, those images are not returned as part of this action. Those images are not
         * registered to your Lightsail container service.</p> <p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetContainerImages">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContainerImagesOutcomeCallable GetContainerImagesCallable(const Model::GetContainerImagesRequest& request) const;

        /**
         * <p>Returns the container images that are registered to your Amazon Lightsail
         * container service.</p>  <p>If you created a deployment on your Lightsail
         * container service that uses container images from a public registry like Docker
         * Hub, those images are not returned as part of this action. Those images are not
         * registered to your Lightsail container service.</p> <p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetContainerImages">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContainerLogOutcomeCallable GetContainerLogCallable(const Model::GetContainerLogRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContainerServiceDeploymentsOutcomeCallable GetContainerServiceDeploymentsCallable(const Model::GetContainerServiceDeploymentsRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns the data points of a specific metric of your Amazon Lightsail
         * container service.</p> <p>Metrics report the utilization of your resources.
         * Monitor and collect metric data regularly to maintain the reliability,
         * availability, and performance of your resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetContainerServiceMetricData">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContainerServiceMetricDataOutcomeCallable GetContainerServiceMetricDataCallable(const Model::GetContainerServiceMetricDataRequest& request) const;

        /**
         * <p>Returns the data points of a specific metric of your Amazon Lightsail
         * container service.</p> <p>Metrics report the utilization of your resources.
         * Monitor and collect metric data regularly to maintain the reliability,
         * availability, and performance of your resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetContainerServiceMetricData">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns the list of powers that can be specified for your Amazon Lightsail
         * container services.</p> <p>The power specifies the amount of memory, the number
         * of vCPUs, and the base price of the container service.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetContainerServicePowers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContainerServicePowersOutcomeCallable GetContainerServicePowersCallable(const Model::GetContainerServicePowersRequest& request) const;

        /**
         * <p>Returns the list of powers that can be specified for your Amazon Lightsail
         * container services.</p> <p>The power specifies the amount of memory, the number
         * of vCPUs, and the base price of the container service.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetContainerServicePowers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns information about one or more of your Amazon Lightsail container
         * services.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetContainerServices">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetContainerServicesOutcomeCallable GetContainerServicesCallable(const Model::GetContainerServicesRequest& request) const;

        /**
         * <p>Returns information about one or more of your Amazon Lightsail container
         * services.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetContainerServices">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns information about a specific block storage disk.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDisk">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDiskOutcomeCallable GetDiskCallable(const Model::GetDiskRequest& request) const;

        /**
         * <p>Returns information about a specific block storage disk.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDisk">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns information about a specific block storage disk
         * snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDiskSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDiskSnapshotOutcomeCallable GetDiskSnapshotCallable(const Model::GetDiskSnapshotRequest& request) const;

        /**
         * <p>Returns information about a specific block storage disk
         * snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDiskSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns information about all block storage disk snapshots in your AWS
         * account and region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDiskSnapshots">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDiskSnapshotsOutcomeCallable GetDiskSnapshotsCallable(const Model::GetDiskSnapshotsRequest& request) const;

        /**
         * <p>Returns information about all block storage disk snapshots in your AWS
         * account and region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDiskSnapshots">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns information about all block storage disks in your AWS account and
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDisks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDisksOutcomeCallable GetDisksCallable(const Model::GetDisksRequest& request) const;

        /**
         * <p>Returns information about all block storage disks in your AWS account and
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDisks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDisksAsync(const Model::GetDisksRequest& request, const GetDisksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the list bundles that can be applied to you Amazon Lightsail content
         * delivery network (CDN) distributions.</p> <p>A distribution bundle specifies the
         * monthly network transfer quota and monthly cost of your
         * dsitribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDistributionBundles">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDistributionBundlesOutcome GetDistributionBundles(const Model::GetDistributionBundlesRequest& request) const;

        /**
         * <p>Returns the list bundles that can be applied to you Amazon Lightsail content
         * delivery network (CDN) distributions.</p> <p>A distribution bundle specifies the
         * monthly network transfer quota and monthly cost of your
         * dsitribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDistributionBundles">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDistributionBundlesOutcomeCallable GetDistributionBundlesCallable(const Model::GetDistributionBundlesRequest& request) const;

        /**
         * <p>Returns the list bundles that can be applied to you Amazon Lightsail content
         * delivery network (CDN) distributions.</p> <p>A distribution bundle specifies the
         * monthly network transfer quota and monthly cost of your
         * dsitribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDistributionBundles">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns the timestamp and status of the last cache reset of a specific Amazon
         * Lightsail content delivery network (CDN) distribution.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDistributionLatestCacheReset">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDistributionLatestCacheResetOutcomeCallable GetDistributionLatestCacheResetCallable(const Model::GetDistributionLatestCacheResetRequest& request) const;

        /**
         * <p>Returns the timestamp and status of the last cache reset of a specific Amazon
         * Lightsail content delivery network (CDN) distribution.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDistributionLatestCacheReset">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns the data points of a specific metric for an Amazon Lightsail content
         * delivery network (CDN) distribution.</p> <p>Metrics report the utilization of
         * your resources, and the error counts generated by them. Monitor and collect
         * metric data regularly to maintain the reliability, availability, and performance
         * of your resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDistributionMetricData">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDistributionMetricDataOutcomeCallable GetDistributionMetricDataCallable(const Model::GetDistributionMetricDataRequest& request) const;

        /**
         * <p>Returns the data points of a specific metric for an Amazon Lightsail content
         * delivery network (CDN) distribution.</p> <p>Metrics report the utilization of
         * your resources, and the error counts generated by them. Monitor and collect
         * metric data regularly to maintain the reliability, availability, and performance
         * of your resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDistributionMetricData">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns information about one or more of your Amazon Lightsail content
         * delivery network (CDN) distributions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDistributions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDistributionsOutcomeCallable GetDistributionsCallable(const Model::GetDistributionsRequest& request) const;

        /**
         * <p>Returns information about one or more of your Amazon Lightsail content
         * delivery network (CDN) distributions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDistributions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns information about a specific domain recordset.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDomain">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDomainOutcomeCallable GetDomainCallable(const Model::GetDomainRequest& request) const;

        /**
         * <p>Returns information about a specific domain recordset.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDomain">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns a list of all domains in the user's account.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDomains">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDomainsOutcomeCallable GetDomainsCallable(const Model::GetDomainsRequest& request) const;

        /**
         * <p>Returns a list of all domains in the user's account.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDomains">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDomainsAsync(const Model::GetDomainsRequest& request, const GetDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the export snapshot record created as a result of the <code>export
         * snapshot</code> operation.</p> <p>An export snapshot record can be used to
         * create a new Amazon EC2 instance and its related resources with the <code>create
         * cloud formation stack</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetExportSnapshotRecords">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExportSnapshotRecordsOutcome GetExportSnapshotRecords(const Model::GetExportSnapshotRecordsRequest& request) const;

        /**
         * <p>Returns the export snapshot record created as a result of the <code>export
         * snapshot</code> operation.</p> <p>An export snapshot record can be used to
         * create a new Amazon EC2 instance and its related resources with the <code>create
         * cloud formation stack</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetExportSnapshotRecords">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetExportSnapshotRecordsOutcomeCallable GetExportSnapshotRecordsCallable(const Model::GetExportSnapshotRecordsRequest& request) const;

        /**
         * <p>Returns the export snapshot record created as a result of the <code>export
         * snapshot</code> operation.</p> <p>An export snapshot record can be used to
         * create a new Amazon EC2 instance and its related resources with the <code>create
         * cloud formation stack</code> operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetExportSnapshotRecords">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns information about a specific Amazon Lightsail instance, which is a
         * virtual private server.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInstanceOutcomeCallable GetInstanceCallable(const Model::GetInstanceRequest& request) const;

        /**
         * <p>Returns information about a specific Amazon Lightsail instance, which is a
         * virtual private server.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInstanceAsync(const Model::GetInstanceRequest& request, const GetInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns temporary SSH keys you can use to connect to a specific virtual
         * private server, or <i>instance</i>.</p> <p>The <code>get instance access
         * details</code> operation supports tag-based access control via resource tags
         * applied to the resource identified by <code>instance name</code>. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetInstanceAccessDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInstanceAccessDetailsOutcome GetInstanceAccessDetails(const Model::GetInstanceAccessDetailsRequest& request) const;

        /**
         * <p>Returns temporary SSH keys you can use to connect to a specific virtual
         * private server, or <i>instance</i>.</p> <p>The <code>get instance access
         * details</code> operation supports tag-based access control via resource tags
         * applied to the resource identified by <code>instance name</code>. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetInstanceAccessDetails">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInstanceAccessDetailsOutcomeCallable GetInstanceAccessDetailsCallable(const Model::GetInstanceAccessDetailsRequest& request) const;

        /**
         * <p>Returns temporary SSH keys you can use to connect to a specific virtual
         * private server, or <i>instance</i>.</p> <p>The <code>get instance access
         * details</code> operation supports tag-based access control via resource tags
         * applied to the resource identified by <code>instance name</code>. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetInstanceAccessDetails">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns the data points for the specified Amazon Lightsail instance metric,
         * given an instance name.</p> <p>Metrics report the utilization of your resources,
         * and the error counts generated by them. Monitor and collect metric data
         * regularly to maintain the reliability, availability, and performance of your
         * resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetInstanceMetricData">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInstanceMetricDataOutcomeCallable GetInstanceMetricDataCallable(const Model::GetInstanceMetricDataRequest& request) const;

        /**
         * <p>Returns the data points for the specified Amazon Lightsail instance metric,
         * given an instance name.</p> <p>Metrics report the utilization of your resources,
         * and the error counts generated by them. Monitor and collect metric data
         * regularly to maintain the reliability, availability, and performance of your
         * resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetInstanceMetricData">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns the firewall port states for a specific Amazon Lightsail instance,
         * the IP addresses allowed to connect to the instance through the ports, and the
         * protocol.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetInstancePortStates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInstancePortStatesOutcomeCallable GetInstancePortStatesCallable(const Model::GetInstancePortStatesRequest& request) const;

        /**
         * <p>Returns the firewall port states for a specific Amazon Lightsail instance,
         * the IP addresses allowed to connect to the instance through the ports, and the
         * protocol.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetInstancePortStates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns information about a specific instance snapshot.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetInstanceSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInstanceSnapshotOutcomeCallable GetInstanceSnapshotCallable(const Model::GetInstanceSnapshotRequest& request) const;

        /**
         * <p>Returns information about a specific instance snapshot.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetInstanceSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns all instance snapshots for the user's account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetInstanceSnapshots">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInstanceSnapshotsOutcomeCallable GetInstanceSnapshotsCallable(const Model::GetInstanceSnapshotsRequest& request) const;

        /**
         * <p>Returns all instance snapshots for the user's account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetInstanceSnapshots">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns the state of a specific instance. Works on one instance at a
         * time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetInstanceState">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInstanceStateOutcomeCallable GetInstanceStateCallable(const Model::GetInstanceStateRequest& request) const;

        /**
         * <p>Returns the state of a specific instance. Works on one instance at a
         * time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetInstanceState">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns information about all Amazon Lightsail virtual private servers, or
         * <i>instances</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInstancesOutcomeCallable GetInstancesCallable(const Model::GetInstancesRequest& request) const;

        /**
         * <p>Returns information about all Amazon Lightsail virtual private servers, or
         * <i>instances</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInstancesAsync(const Model::GetInstancesRequest& request, const GetInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a specific key pair.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetKeyPair">AWS
         * API Reference</a></p>
         */
        virtual Model::GetKeyPairOutcome GetKeyPair(const Model::GetKeyPairRequest& request) const;

        /**
         * <p>Returns information about a specific key pair.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetKeyPair">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetKeyPairOutcomeCallable GetKeyPairCallable(const Model::GetKeyPairRequest& request) const;

        /**
         * <p>Returns information about a specific key pair.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetKeyPair">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns information about all key pairs in the user's account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetKeyPairs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetKeyPairsOutcomeCallable GetKeyPairsCallable(const Model::GetKeyPairsRequest& request) const;

        /**
         * <p>Returns information about all key pairs in the user's account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetKeyPairs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns information about the specified Lightsail load
         * balancer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetLoadBalancer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLoadBalancerOutcomeCallable GetLoadBalancerCallable(const Model::GetLoadBalancerRequest& request) const;

        /**
         * <p>Returns information about the specified Lightsail load
         * balancer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetLoadBalancer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns information about health metrics for your Lightsail load
         * balancer.</p> <p>Metrics report the utilization of your resources, and the error
         * counts generated by them. Monitor and collect metric data regularly to maintain
         * the reliability, availability, and performance of your resources.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetLoadBalancerMetricData">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLoadBalancerMetricDataOutcomeCallable GetLoadBalancerMetricDataCallable(const Model::GetLoadBalancerMetricDataRequest& request) const;

        /**
         * <p>Returns information about health metrics for your Lightsail load
         * balancer.</p> <p>Metrics report the utilization of your resources, and the error
         * counts generated by them. Monitor and collect metric data regularly to maintain
         * the reliability, availability, and performance of your resources.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetLoadBalancerMetricData">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns information about the TLS certificates that are associated with the
         * specified Lightsail load balancer.</p> <p>TLS is just an updated, more secure
         * version of Secure Socket Layer (SSL).</p> <p>You can have a maximum of 2
         * certificates associated with a Lightsail load balancer. One is active and the
         * other is inactive.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetLoadBalancerTlsCertificates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLoadBalancerTlsCertificatesOutcomeCallable GetLoadBalancerTlsCertificatesCallable(const Model::GetLoadBalancerTlsCertificatesRequest& request) const;

        /**
         * <p>Returns information about the TLS certificates that are associated with the
         * specified Lightsail load balancer.</p> <p>TLS is just an updated, more secure
         * version of Secure Socket Layer (SSL).</p> <p>You can have a maximum of 2
         * certificates associated with a Lightsail load balancer. One is active and the
         * other is inactive.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetLoadBalancerTlsCertificates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLoadBalancerTlsCertificatesAsync(const Model::GetLoadBalancerTlsCertificatesRequest& request, const GetLoadBalancerTlsCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about all load balancers in an account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetLoadBalancers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLoadBalancersOutcome GetLoadBalancers(const Model::GetLoadBalancersRequest& request) const;

        /**
         * <p>Returns information about all load balancers in an account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetLoadBalancers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLoadBalancersOutcomeCallable GetLoadBalancersCallable(const Model::GetLoadBalancersRequest& request) const;

        /**
         * <p>Returns information about all load balancers in an account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetLoadBalancers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns information about a specific operation. Operations include events
         * such as when you create an instance, allocate a static IP, attach a static IP,
         * and so on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetOperation">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOperationOutcomeCallable GetOperationCallable(const Model::GetOperationRequest& request) const;

        /**
         * <p>Returns information about a specific operation. Operations include events
         * such as when you create an instance, allocate a static IP, attach a static IP,
         * and so on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetOperation">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns information about all operations.</p> <p>Results are returned from
         * oldest to newest, up to a maximum of 200. Results can be paged by making each
         * subsequent call to <code>GetOperations</code> use the maximum (last)
         * <code>statusChangedAt</code> value from the previous request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetOperations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOperationsOutcomeCallable GetOperationsCallable(const Model::GetOperationsRequest& request) const;

        /**
         * <p>Returns information about all operations.</p> <p>Results are returned from
         * oldest to newest, up to a maximum of 200. Results can be paged by making each
         * subsequent call to <code>GetOperations</code> use the maximum (last)
         * <code>statusChangedAt</code> value from the previous request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetOperations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Gets operations for a specific resource (e.g., an instance or a static
         * IP).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetOperationsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOperationsForResourceOutcomeCallable GetOperationsForResourceCallable(const Model::GetOperationsForResourceRequest& request) const;

        /**
         * <p>Gets operations for a specific resource (e.g., an instance or a static
         * IP).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetOperationsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns a list of all valid regions for Amazon Lightsail. Use the
         * <code>include availability zones</code> parameter to also return the
         * Availability Zones in a region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRegions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRegionsOutcomeCallable GetRegionsCallable(const Model::GetRegionsRequest& request) const;

        /**
         * <p>Returns a list of all valid regions for Amazon Lightsail. Use the
         * <code>include availability zones</code> parameter to also return the
         * Availability Zones in a region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRegions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns information about a specific database in Amazon
         * Lightsail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabase">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRelationalDatabaseOutcomeCallable GetRelationalDatabaseCallable(const Model::GetRelationalDatabaseRequest& request) const;

        /**
         * <p>Returns information about a specific database in Amazon
         * Lightsail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabase">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns a list of available database blueprints in Amazon Lightsail. A
         * blueprint describes the major engine version of a database.</p> <p>You can use a
         * blueprint ID to create a new database that runs a specific database
         * engine.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseBlueprints">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRelationalDatabaseBlueprintsOutcomeCallable GetRelationalDatabaseBlueprintsCallable(const Model::GetRelationalDatabaseBlueprintsRequest& request) const;

        /**
         * <p>Returns a list of available database blueprints in Amazon Lightsail. A
         * blueprint describes the major engine version of a database.</p> <p>You can use a
         * blueprint ID to create a new database that runs a specific database
         * engine.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseBlueprints">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns the list of bundles that are available in Amazon Lightsail. A bundle
         * describes the performance specifications for a database.</p> <p>You can use a
         * bundle ID to create a new database with explicit performance
         * specifications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseBundles">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRelationalDatabaseBundlesOutcomeCallable GetRelationalDatabaseBundlesCallable(const Model::GetRelationalDatabaseBundlesRequest& request) const;

        /**
         * <p>Returns the list of bundles that are available in Amazon Lightsail. A bundle
         * describes the performance specifications for a database.</p> <p>You can use a
         * bundle ID to create a new database with explicit performance
         * specifications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseBundles">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns a list of events for a specific database in Amazon
         * Lightsail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseEvents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRelationalDatabaseEventsOutcomeCallable GetRelationalDatabaseEventsCallable(const Model::GetRelationalDatabaseEventsRequest& request) const;

        /**
         * <p>Returns a list of events for a specific database in Amazon
         * Lightsail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseEvents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns a list of log events for a database in Amazon
         * Lightsail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseLogEvents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRelationalDatabaseLogEventsOutcomeCallable GetRelationalDatabaseLogEventsCallable(const Model::GetRelationalDatabaseLogEventsRequest& request) const;

        /**
         * <p>Returns a list of log events for a database in Amazon
         * Lightsail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseLogEvents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns a list of available log streams for a specific database in Amazon
         * Lightsail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseLogStreams">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRelationalDatabaseLogStreamsOutcomeCallable GetRelationalDatabaseLogStreamsCallable(const Model::GetRelationalDatabaseLogStreamsRequest& request) const;

        /**
         * <p>Returns a list of available log streams for a specific database in Amazon
         * Lightsail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseLogStreams">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns the current, previous, or pending versions of the master user
         * password for a Lightsail database.</p> <p>The
         * <code>GetRelationalDatabaseMasterUserPassword</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * relationalDatabaseName.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseMasterUserPassword">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRelationalDatabaseMasterUserPasswordOutcomeCallable GetRelationalDatabaseMasterUserPasswordCallable(const Model::GetRelationalDatabaseMasterUserPasswordRequest& request) const;

        /**
         * <p>Returns the current, previous, or pending versions of the master user
         * password for a Lightsail database.</p> <p>The
         * <code>GetRelationalDatabaseMasterUserPassword</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * relationalDatabaseName.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseMasterUserPassword">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns the data points of the specified metric for a database in Amazon
         * Lightsail.</p> <p>Metrics report the utilization of your resources, and the
         * error counts generated by them. Monitor and collect metric data regularly to
         * maintain the reliability, availability, and performance of your
         * resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseMetricData">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRelationalDatabaseMetricDataOutcomeCallable GetRelationalDatabaseMetricDataCallable(const Model::GetRelationalDatabaseMetricDataRequest& request) const;

        /**
         * <p>Returns the data points of the specified metric for a database in Amazon
         * Lightsail.</p> <p>Metrics report the utilization of your resources, and the
         * error counts generated by them. Monitor and collect metric data regularly to
         * maintain the reliability, availability, and performance of your
         * resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseMetricData">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns all of the runtime parameters offered by the underlying database
         * software, or engine, for a specific database in Amazon Lightsail.</p> <p>In
         * addition to the parameter names and values, this operation returns other
         * information about each parameter. This information includes whether changes
         * require a reboot, whether the parameter is modifiable, the allowed values, and
         * the data types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseParameters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRelationalDatabaseParametersOutcomeCallable GetRelationalDatabaseParametersCallable(const Model::GetRelationalDatabaseParametersRequest& request) const;

        /**
         * <p>Returns all of the runtime parameters offered by the underlying database
         * software, or engine, for a specific database in Amazon Lightsail.</p> <p>In
         * addition to the parameter names and values, this operation returns other
         * information about each parameter. This information includes whether changes
         * require a reboot, whether the parameter is modifiable, the allowed values, and
         * the data types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseParameters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns information about a specific database snapshot in Amazon
         * Lightsail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRelationalDatabaseSnapshotOutcomeCallable GetRelationalDatabaseSnapshotCallable(const Model::GetRelationalDatabaseSnapshotRequest& request) const;

        /**
         * <p>Returns information about a specific database snapshot in Amazon
         * Lightsail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns information about all of your database snapshots in Amazon
         * Lightsail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseSnapshots">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRelationalDatabaseSnapshotsOutcomeCallable GetRelationalDatabaseSnapshotsCallable(const Model::GetRelationalDatabaseSnapshotsRequest& request) const;

        /**
         * <p>Returns information about all of your database snapshots in Amazon
         * Lightsail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseSnapshots">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns information about all of your databases in Amazon
         * Lightsail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabases">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRelationalDatabasesOutcomeCallable GetRelationalDatabasesCallable(const Model::GetRelationalDatabasesRequest& request) const;

        /**
         * <p>Returns information about all of your databases in Amazon
         * Lightsail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabases">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRelationalDatabasesAsync(const Model::GetRelationalDatabasesRequest& request, const GetRelationalDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a specific static IP.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetStaticIp">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStaticIpOutcome GetStaticIp(const Model::GetStaticIpRequest& request) const;

        /**
         * <p>Returns information about a specific static IP.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetStaticIp">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStaticIpOutcomeCallable GetStaticIpCallable(const Model::GetStaticIpRequest& request) const;

        /**
         * <p>Returns information about a specific static IP.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetStaticIp">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns information about all static IPs in the user's account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetStaticIps">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStaticIpsOutcomeCallable GetStaticIpsCallable(const Model::GetStaticIpsRequest& request) const;

        /**
         * <p>Returns information about all static IPs in the user's account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetStaticIps">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Imports a public SSH key from a specific key pair.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/ImportKeyPair">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportKeyPairOutcomeCallable ImportKeyPairCallable(const Model::ImportKeyPairRequest& request) const;

        /**
         * <p>Imports a public SSH key from a specific key pair.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/ImportKeyPair">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Returns a Boolean value indicating whether your Lightsail VPC is
         * peered.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/IsVpcPeered">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::IsVpcPeeredOutcomeCallable IsVpcPeeredCallable(const Model::IsVpcPeeredRequest& request) const;

        /**
         * <p>Returns a Boolean value indicating whether your Lightsail VPC is
         * peered.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/IsVpcPeered">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void IsVpcPeeredAsync(const Model::IsVpcPeeredRequest& request, const IsVpcPeeredResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Opens ports for a specific Amazon Lightsail instance, and specifies the IP
         * addresses allowed to connect to the instance through the ports, and the
         * protocol.</p> <p>The <code>OpenInstancePublicPorts</code> action supports
         * tag-based access control via resource tags applied to the resource identified by
         * <code>instanceName</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/OpenInstancePublicPorts">AWS
         * API Reference</a></p>
         */
        virtual Model::OpenInstancePublicPortsOutcome OpenInstancePublicPorts(const Model::OpenInstancePublicPortsRequest& request) const;

        /**
         * <p>Opens ports for a specific Amazon Lightsail instance, and specifies the IP
         * addresses allowed to connect to the instance through the ports, and the
         * protocol.</p> <p>The <code>OpenInstancePublicPorts</code> action supports
         * tag-based access control via resource tags applied to the resource identified by
         * <code>instanceName</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/OpenInstancePublicPorts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::OpenInstancePublicPortsOutcomeCallable OpenInstancePublicPortsCallable(const Model::OpenInstancePublicPortsRequest& request) const;

        /**
         * <p>Opens ports for a specific Amazon Lightsail instance, and specifies the IP
         * addresses allowed to connect to the instance through the ports, and the
         * protocol.</p> <p>The <code>OpenInstancePublicPorts</code> action supports
         * tag-based access control via resource tags applied to the resource identified by
         * <code>instanceName</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/OpenInstancePublicPorts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void OpenInstancePublicPortsAsync(const Model::OpenInstancePublicPortsRequest& request, const OpenInstancePublicPortsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Tries to peer the Lightsail VPC with the user's default VPC.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/PeerVpc">AWS
         * API Reference</a></p>
         */
        virtual Model::PeerVpcOutcome PeerVpc(const Model::PeerVpcRequest& request) const;

        /**
         * <p>Tries to peer the Lightsail VPC with the user's default VPC.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/PeerVpc">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PeerVpcOutcomeCallable PeerVpcCallable(const Model::PeerVpcRequest& request) const;

        /**
         * <p>Tries to peer the Lightsail VPC with the user's default VPC.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/PeerVpc">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutAlarmOutcomeCallable PutAlarmCallable(const Model::PutAlarmRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/PutInstancePublicPorts">AWS
         * API Reference</a></p>
         */
        virtual Model::PutInstancePublicPortsOutcome PutInstancePublicPorts(const Model::PutInstancePublicPortsRequest& request) const;

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
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/PutInstancePublicPorts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutInstancePublicPortsOutcomeCallable PutInstancePublicPortsCallable(const Model::PutInstancePublicPortsRequest& request) const;

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
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/PutInstancePublicPorts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutInstancePublicPortsAsync(const Model::PutInstancePublicPortsRequest& request, const PutInstancePublicPortsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Restarts a specific instance.</p> <p>The <code>reboot instance</code>
         * operation supports tag-based access control via resource tags applied to the
         * resource identified by <code>instance name</code>. For more information, see the
         * <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/RebootInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::RebootInstanceOutcome RebootInstance(const Model::RebootInstanceRequest& request) const;

        /**
         * <p>Restarts a specific instance.</p> <p>The <code>reboot instance</code>
         * operation supports tag-based access control via resource tags applied to the
         * resource identified by <code>instance name</code>. For more information, see the
         * <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/RebootInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RebootInstanceOutcomeCallable RebootInstanceCallable(const Model::RebootInstanceRequest& request) const;

        /**
         * <p>Restarts a specific instance.</p> <p>The <code>reboot instance</code>
         * operation supports tag-based access control via resource tags applied to the
         * resource identified by <code>instance name</code>. For more information, see the
         * <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/RebootInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RebootInstanceAsync(const Model::RebootInstanceRequest& request, const RebootInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Restarts a specific database in Amazon Lightsail.</p> <p>The <code>reboot
         * relational database</code> operation supports tag-based access control via
         * resource tags applied to the resource identified by relationalDatabaseName. For
         * more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/RebootRelationalDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::RebootRelationalDatabaseOutcome RebootRelationalDatabase(const Model::RebootRelationalDatabaseRequest& request) const;

        /**
         * <p>Restarts a specific database in Amazon Lightsail.</p> <p>The <code>reboot
         * relational database</code> operation supports tag-based access control via
         * resource tags applied to the resource identified by relationalDatabaseName. For
         * more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/RebootRelationalDatabase">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RebootRelationalDatabaseOutcomeCallable RebootRelationalDatabaseCallable(const Model::RebootRelationalDatabaseRequest& request) const;

        /**
         * <p>Restarts a specific database in Amazon Lightsail.</p> <p>The <code>reboot
         * relational database</code> operation supports tag-based access control via
         * resource tags applied to the resource identified by relationalDatabaseName. For
         * more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/RebootRelationalDatabase">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RebootRelationalDatabaseAsync(const Model::RebootRelationalDatabaseRequest& request, const RebootRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers a container image to your Amazon Lightsail container service.</p>
         *  <p>This action is not required if you install and use the Lightsail
         * Control (lightsailctl) plugin to push container images to your Lightsail
         * container service. For more information, see <a
         * href="amazon-lightsail-pushing-container-images">Pushing and managing container
         * images on your Amazon Lightsail container services</a> in the <i>Lightsail Dev
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/RegisterContainerImage">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterContainerImageOutcome RegisterContainerImage(const Model::RegisterContainerImageRequest& request) const;

        /**
         * <p>Registers a container image to your Amazon Lightsail container service.</p>
         *  <p>This action is not required if you install and use the Lightsail
         * Control (lightsailctl) plugin to push container images to your Lightsail
         * container service. For more information, see <a
         * href="amazon-lightsail-pushing-container-images">Pushing and managing container
         * images on your Amazon Lightsail container services</a> in the <i>Lightsail Dev
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/RegisterContainerImage">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterContainerImageOutcomeCallable RegisterContainerImageCallable(const Model::RegisterContainerImageRequest& request) const;

        /**
         * <p>Registers a container image to your Amazon Lightsail container service.</p>
         *  <p>This action is not required if you install and use the Lightsail
         * Control (lightsailctl) plugin to push container images to your Lightsail
         * container service. For more information, see <a
         * href="amazon-lightsail-pushing-container-images">Pushing and managing container
         * images on your Amazon Lightsail container services</a> in the <i>Lightsail Dev
         * Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/RegisterContainerImage">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterContainerImageAsync(const Model::RegisterContainerImageRequest& request, const RegisterContainerImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specific static IP from your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/ReleaseStaticIp">AWS
         * API Reference</a></p>
         */
        virtual Model::ReleaseStaticIpOutcome ReleaseStaticIp(const Model::ReleaseStaticIpRequest& request) const;

        /**
         * <p>Deletes a specific static IP from your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/ReleaseStaticIp">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReleaseStaticIpOutcomeCallable ReleaseStaticIpCallable(const Model::ReleaseStaticIpRequest& request) const;

        /**
         * <p>Deletes a specific static IP from your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/ReleaseStaticIp">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * <p>Deletes currently cached content from your Amazon Lightsail content delivery
         * network (CDN) distribution.</p> <p>After resetting the cache, the next time a
         * content request is made, your distribution pulls, serves, and caches it from the
         * origin.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/ResetDistributionCache">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetDistributionCacheOutcomeCallable ResetDistributionCacheCallable(const Model::ResetDistributionCacheRequest& request) const;

        /**
         * <p>Deletes currently cached content from your Amazon Lightsail content delivery
         * network (CDN) distribution.</p> <p>After resetting the cache, the next time a
         * content request is made, your distribution pulls, serves, and caches it from the
         * origin.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/ResetDistributionCache">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetDistributionCacheAsync(const Model::ResetDistributionCacheRequest& request, const ResetDistributionCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sends a verification request to an email contact method to ensure it's owned
         * by the requester. SMS contact methods don't need to be verified.</p> <p>A
         * contact method is used to send you notifications about your Amazon Lightsail
         * resources. You can add one email address and one mobile phone number contact
         * method in each AWS Region. However, SMS text messaging is not supported in some
         * AWS Regions, and SMS text messages cannot be sent to some countries/regions. For
         * more information, see <a
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
         * <p>Sends a verification request to an email contact method to ensure it's owned
         * by the requester. SMS contact methods don't need to be verified.</p> <p>A
         * contact method is used to send you notifications about your Amazon Lightsail
         * resources. You can add one email address and one mobile phone number contact
         * method in each AWS Region. However, SMS text messaging is not supported in some
         * AWS Regions, and SMS text messages cannot be sent to some countries/regions. For
         * more information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-notifications">Notifications
         * in Amazon Lightsail</a>.</p> <p>A verification request is sent to the contact
         * method when you initially create it. Use this action to send another
         * verification request if a previous verification request was deleted, or has
         * expired.</p>  <p>Notifications are not sent to an email contact
         * method until after it is verified, and confirmed as valid.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/SendContactMethodVerification">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SendContactMethodVerificationOutcomeCallable SendContactMethodVerificationCallable(const Model::SendContactMethodVerificationRequest& request) const;

        /**
         * <p>Sends a verification request to an email contact method to ensure it's owned
         * by the requester. SMS contact methods don't need to be verified.</p> <p>A
         * contact method is used to send you notifications about your Amazon Lightsail
         * resources. You can add one email address and one mobile phone number contact
         * method in each AWS Region. However, SMS text messaging is not supported in some
         * AWS Regions, and SMS text messages cannot be sent to some countries/regions. For
         * more information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-notifications">Notifications
         * in Amazon Lightsail</a>.</p> <p>A verification request is sent to the contact
         * method when you initially create it. Use this action to send another
         * verification request if a previous verification request was deleted, or has
         * expired.</p>  <p>Notifications are not sent to an email contact
         * method until after it is verified, and confirmed as valid.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/SendContactMethodVerification">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SendContactMethodVerificationAsync(const Model::SendContactMethodVerificationRequest& request, const SendContactMethodVerificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a specific Amazon Lightsail instance from a stopped state. To restart
         * an instance, use the <code>reboot instance</code> operation.</p>  <p>When
         * you start a stopped instance, Lightsail assigns a new public IP address to the
         * instance. To use the same IP address after stopping and starting an instance,
         * create a static IP address and attach it to the instance. For more information,
         * see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/lightsail-create-static-ip">Lightsail
         * Dev Guide</a>.</p>  <p>The <code>start instance</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * <code>instance name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/StartInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::StartInstanceOutcome StartInstance(const Model::StartInstanceRequest& request) const;

        /**
         * <p>Starts a specific Amazon Lightsail instance from a stopped state. To restart
         * an instance, use the <code>reboot instance</code> operation.</p>  <p>When
         * you start a stopped instance, Lightsail assigns a new public IP address to the
         * instance. To use the same IP address after stopping and starting an instance,
         * create a static IP address and attach it to the instance. For more information,
         * see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/lightsail-create-static-ip">Lightsail
         * Dev Guide</a>.</p>  <p>The <code>start instance</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * <code>instance name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/StartInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartInstanceOutcomeCallable StartInstanceCallable(const Model::StartInstanceRequest& request) const;

        /**
         * <p>Starts a specific Amazon Lightsail instance from a stopped state. To restart
         * an instance, use the <code>reboot instance</code> operation.</p>  <p>When
         * you start a stopped instance, Lightsail assigns a new public IP address to the
         * instance. To use the same IP address after stopping and starting an instance,
         * create a static IP address and attach it to the instance. For more information,
         * see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/lightsail-create-static-ip">Lightsail
         * Dev Guide</a>.</p>  <p>The <code>start instance</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * <code>instance name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/StartInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartInstanceAsync(const Model::StartInstanceRequest& request, const StartInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a specific database from a stopped state in Amazon Lightsail. To
         * restart a database, use the <code>reboot relational database</code>
         * operation.</p> <p>The <code>start relational database</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * relationalDatabaseName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/StartRelationalDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::StartRelationalDatabaseOutcome StartRelationalDatabase(const Model::StartRelationalDatabaseRequest& request) const;

        /**
         * <p>Starts a specific database from a stopped state in Amazon Lightsail. To
         * restart a database, use the <code>reboot relational database</code>
         * operation.</p> <p>The <code>start relational database</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * relationalDatabaseName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/StartRelationalDatabase">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartRelationalDatabaseOutcomeCallable StartRelationalDatabaseCallable(const Model::StartRelationalDatabaseRequest& request) const;

        /**
         * <p>Starts a specific database from a stopped state in Amazon Lightsail. To
         * restart a database, use the <code>reboot relational database</code>
         * operation.</p> <p>The <code>start relational database</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * relationalDatabaseName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/StartRelationalDatabase">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartRelationalDatabaseAsync(const Model::StartRelationalDatabaseRequest& request, const StartRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a specific Amazon Lightsail instance that is currently running.</p>
         *  <p>When you start a stopped instance, Lightsail assigns a new public IP
         * address to the instance. To use the same IP address after stopping and starting
         * an instance, create a static IP address and attach it to the instance. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/lightsail-create-static-ip">Lightsail
         * Dev Guide</a>.</p>  <p>The <code>stop instance</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * <code>instance name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/StopInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::StopInstanceOutcome StopInstance(const Model::StopInstanceRequest& request) const;

        /**
         * <p>Stops a specific Amazon Lightsail instance that is currently running.</p>
         *  <p>When you start a stopped instance, Lightsail assigns a new public IP
         * address to the instance. To use the same IP address after stopping and starting
         * an instance, create a static IP address and attach it to the instance. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/lightsail-create-static-ip">Lightsail
         * Dev Guide</a>.</p>  <p>The <code>stop instance</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * <code>instance name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/StopInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopInstanceOutcomeCallable StopInstanceCallable(const Model::StopInstanceRequest& request) const;

        /**
         * <p>Stops a specific Amazon Lightsail instance that is currently running.</p>
         *  <p>When you start a stopped instance, Lightsail assigns a new public IP
         * address to the instance. To use the same IP address after stopping and starting
         * an instance, create a static IP address and attach it to the instance. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/lightsail-create-static-ip">Lightsail
         * Dev Guide</a>.</p>  <p>The <code>stop instance</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * <code>instance name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/StopInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopInstanceAsync(const Model::StopInstanceRequest& request, const StopInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a specific database that is currently running in Amazon Lightsail.</p>
         * <p>The <code>stop relational database</code> operation supports tag-based access
         * control via resource tags applied to the resource identified by
         * relationalDatabaseName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/StopRelationalDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::StopRelationalDatabaseOutcome StopRelationalDatabase(const Model::StopRelationalDatabaseRequest& request) const;

        /**
         * <p>Stops a specific database that is currently running in Amazon Lightsail.</p>
         * <p>The <code>stop relational database</code> operation supports tag-based access
         * control via resource tags applied to the resource identified by
         * relationalDatabaseName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/StopRelationalDatabase">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopRelationalDatabaseOutcomeCallable StopRelationalDatabaseCallable(const Model::StopRelationalDatabaseRequest& request) const;

        /**
         * <p>Stops a specific database that is currently running in Amazon Lightsail.</p>
         * <p>The <code>stop relational database</code> operation supports tag-based access
         * control via resource tags applied to the resource identified by
         * relationalDatabaseName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/StopRelationalDatabase">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopRelationalDatabaseAsync(const Model::StopRelationalDatabaseRequest& request, const StopRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds one or more tags to the specified Amazon Lightsail resource. Each
         * resource can have a maximum of 50 tags. Each tag consists of a key and an
         * optional value. Tag keys must be unique per resource. For more information about
         * tags, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Lightsail
         * Dev Guide</a>.</p> <p>The <code>tag resource</code> operation supports tag-based
         * access control via request tags and resource tags applied to the resource
         * identified by <code>resource name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds one or more tags to the specified Amazon Lightsail resource. Each
         * resource can have a maximum of 50 tags. Each tag consists of a key and an
         * optional value. Tag keys must be unique per resource. For more information about
         * tags, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Lightsail
         * Dev Guide</a>.</p> <p>The <code>tag resource</code> operation supports tag-based
         * access control via request tags and resource tags applied to the resource
         * identified by <code>resource name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds one or more tags to the specified Amazon Lightsail resource. Each
         * resource can have a maximum of 50 tags. Each tag consists of a key and an
         * optional value. Tag keys must be unique per resource. For more information about
         * tags, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-tags">Lightsail
         * Dev Guide</a>.</p> <p>The <code>tag resource</code> operation supports tag-based
         * access control via request tags and resource tags applied to the resource
         * identified by <code>resource name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TestAlarmOutcomeCallable TestAlarmCallable(const Model::TestAlarmRequest& request) const;

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
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TestAlarmAsync(const Model::TestAlarmRequest& request, const TestAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attempts to unpeer the Lightsail VPC from the user's default
         * VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UnpeerVpc">AWS
         * API Reference</a></p>
         */
        virtual Model::UnpeerVpcOutcome UnpeerVpc(const Model::UnpeerVpcRequest& request) const;

        /**
         * <p>Attempts to unpeer the Lightsail VPC from the user's default
         * VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UnpeerVpc">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UnpeerVpcOutcomeCallable UnpeerVpcCallable(const Model::UnpeerVpcRequest& request) const;

        /**
         * <p>Attempts to unpeer the Lightsail VPC from the user's default
         * VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UnpeerVpc">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UnpeerVpcAsync(const Model::UnpeerVpcRequest& request, const UnpeerVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified set of tag keys and their values from the specified
         * Amazon Lightsail resource.</p> <p>The <code>untag resource</code> operation
         * supports tag-based access control via request tags and resource tags applied to
         * the resource identified by <code>resource name</code>. For more information, see
         * the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Deletes the specified set of tag keys and their values from the specified
         * Amazon Lightsail resource.</p> <p>The <code>untag resource</code> operation
         * supports tag-based access control via request tags and resource tags applied to
         * the resource identified by <code>resource name</code>. For more information, see
         * the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Deletes the specified set of tag keys and their values from the specified
         * Amazon Lightsail resource.</p> <p>The <code>untag resource</code> operation
         * supports tag-based access control via request tags and resource tags applied to
         * the resource identified by <code>resource name</code>. For more information, see
         * the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the configuration of your Amazon Lightsail container service, such as
         * its power, scale, and public domain names.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateContainerService">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContainerServiceOutcome UpdateContainerService(const Model::UpdateContainerServiceRequest& request) const;

        /**
         * <p>Updates the configuration of your Amazon Lightsail container service, such as
         * its power, scale, and public domain names.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateContainerService">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateContainerServiceOutcomeCallable UpdateContainerServiceCallable(const Model::UpdateContainerServiceRequest& request) const;

        /**
         * <p>Updates the configuration of your Amazon Lightsail container service, such as
         * its power, scale, and public domain names.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateContainerService">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateContainerServiceAsync(const Model::UpdateContainerServiceRequest& request, const UpdateContainerServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing Amazon Lightsail content delivery network (CDN)
         * distribution.</p> <p>Use this action to update the configuration of your
         * existing distribution</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateDistribution">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDistributionOutcome UpdateDistribution(const Model::UpdateDistributionRequest& request) const;

        /**
         * <p>Updates an existing Amazon Lightsail content delivery network (CDN)
         * distribution.</p> <p>Use this action to update the configuration of your
         * existing distribution</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateDistribution">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDistributionOutcomeCallable UpdateDistributionCallable(const Model::UpdateDistributionRequest& request) const;

        /**
         * <p>Updates an existing Amazon Lightsail content delivery network (CDN)
         * distribution.</p> <p>Use this action to update the configuration of your
         * existing distribution</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateDistribution">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDistributionAsync(const Model::UpdateDistributionRequest& request, const UpdateDistributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the bundle of your Amazon Lightsail content delivery network (CDN)
         * distribution.</p> <p>A distribution bundle specifies the monthly network
         * transfer quota and monthly cost of your dsitribution.</p> <p>Update your
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
         * <p>Updates the bundle of your Amazon Lightsail content delivery network (CDN)
         * distribution.</p> <p>A distribution bundle specifies the monthly network
         * transfer quota and monthly cost of your dsitribution.</p> <p>Update your
         * distribution's bundle if your distribution is going over its monthly network
         * transfer quota and is incurring an overage fee.</p> <p>You can update your
         * distribution's bundle only one time within your monthly AWS billing cycle. To
         * determine if you can update your distribution's bundle, use the
         * <code>GetDistributions</code> action. The <code>ableToUpdateBundle</code>
         * parameter in the result will indicate whether you can currently update your
         * distribution's bundle.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateDistributionBundle">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDistributionBundleOutcomeCallable UpdateDistributionBundleCallable(const Model::UpdateDistributionBundleRequest& request) const;

        /**
         * <p>Updates the bundle of your Amazon Lightsail content delivery network (CDN)
         * distribution.</p> <p>A distribution bundle specifies the monthly network
         * transfer quota and monthly cost of your dsitribution.</p> <p>Update your
         * distribution's bundle if your distribution is going over its monthly network
         * transfer quota and is incurring an overage fee.</p> <p>You can update your
         * distribution's bundle only one time within your monthly AWS billing cycle. To
         * determine if you can update your distribution's bundle, use the
         * <code>GetDistributions</code> action. The <code>ableToUpdateBundle</code>
         * parameter in the result will indicate whether you can currently update your
         * distribution's bundle.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateDistributionBundle">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDistributionBundleAsync(const Model::UpdateDistributionBundleRequest& request, const UpdateDistributionBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a domain recordset after it is created.</p> <p>The <code>update
         * domain entry</code> operation supports tag-based access control via resource
         * tags applied to the resource identified by <code>domain name</code>. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateDomainEntry">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDomainEntryOutcome UpdateDomainEntry(const Model::UpdateDomainEntryRequest& request) const;

        /**
         * <p>Updates a domain recordset after it is created.</p> <p>The <code>update
         * domain entry</code> operation supports tag-based access control via resource
         * tags applied to the resource identified by <code>domain name</code>. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateDomainEntry">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDomainEntryOutcomeCallable UpdateDomainEntryCallable(const Model::UpdateDomainEntryRequest& request) const;

        /**
         * <p>Updates a domain recordset after it is created.</p> <p>The <code>update
         * domain entry</code> operation supports tag-based access control via resource
         * tags applied to the resource identified by <code>domain name</code>. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateDomainEntry">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDomainEntryAsync(const Model::UpdateDomainEntryRequest& request, const UpdateDomainEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the specified attribute for a load balancer. You can only update one
         * attribute at a time.</p> <p>The <code>update load balancer attribute</code>
         * operation supports tag-based access control via resource tags applied to the
         * resource identified by <code>load balancer name</code>. For more information,
         * see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateLoadBalancerAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLoadBalancerAttributeOutcome UpdateLoadBalancerAttribute(const Model::UpdateLoadBalancerAttributeRequest& request) const;

        /**
         * <p>Updates the specified attribute for a load balancer. You can only update one
         * attribute at a time.</p> <p>The <code>update load balancer attribute</code>
         * operation supports tag-based access control via resource tags applied to the
         * resource identified by <code>load balancer name</code>. For more information,
         * see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateLoadBalancerAttribute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLoadBalancerAttributeOutcomeCallable UpdateLoadBalancerAttributeCallable(const Model::UpdateLoadBalancerAttributeRequest& request) const;

        /**
         * <p>Updates the specified attribute for a load balancer. You can only update one
         * attribute at a time.</p> <p>The <code>update load balancer attribute</code>
         * operation supports tag-based access control via resource tags applied to the
         * resource identified by <code>load balancer name</code>. For more information,
         * see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateLoadBalancerAttribute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLoadBalancerAttributeAsync(const Model::UpdateLoadBalancerAttributeRequest& request, const UpdateLoadBalancerAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Allows the update of one or more attributes of a database in Amazon
         * Lightsail.</p> <p>Updates are applied immediately, or in cases where the updates
         * could result in an outage, are applied during the database's predefined
         * maintenance window.</p> <p>The <code>update relational database</code> operation
         * supports tag-based access control via resource tags applied to the resource
         * identified by relationalDatabaseName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateRelationalDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRelationalDatabaseOutcome UpdateRelationalDatabase(const Model::UpdateRelationalDatabaseRequest& request) const;

        /**
         * <p>Allows the update of one or more attributes of a database in Amazon
         * Lightsail.</p> <p>Updates are applied immediately, or in cases where the updates
         * could result in an outage, are applied during the database's predefined
         * maintenance window.</p> <p>The <code>update relational database</code> operation
         * supports tag-based access control via resource tags applied to the resource
         * identified by relationalDatabaseName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateRelationalDatabase">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRelationalDatabaseOutcomeCallable UpdateRelationalDatabaseCallable(const Model::UpdateRelationalDatabaseRequest& request) const;

        /**
         * <p>Allows the update of one or more attributes of a database in Amazon
         * Lightsail.</p> <p>Updates are applied immediately, or in cases where the updates
         * could result in an outage, are applied during the database's predefined
         * maintenance window.</p> <p>The <code>update relational database</code> operation
         * supports tag-based access control via resource tags applied to the resource
         * identified by relationalDatabaseName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateRelationalDatabase">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateRelationalDatabaseParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRelationalDatabaseParametersOutcome UpdateRelationalDatabaseParameters(const Model::UpdateRelationalDatabaseParametersRequest& request) const;

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
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateRelationalDatabaseParameters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRelationalDatabaseParametersOutcomeCallable UpdateRelationalDatabaseParametersCallable(const Model::UpdateRelationalDatabaseParametersRequest& request) const;

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
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateRelationalDatabaseParameters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
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
        void StartInstanceAsyncHelper(const Model::StartInstanceRequest& request, const StartInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartRelationalDatabaseAsyncHelper(const Model::StartRelationalDatabaseRequest& request, const StartRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopInstanceAsyncHelper(const Model::StopInstanceRequest& request, const StopInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopRelationalDatabaseAsyncHelper(const Model::StopRelationalDatabaseRequest& request, const StopRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TestAlarmAsyncHelper(const Model::TestAlarmRequest& request, const TestAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UnpeerVpcAsyncHelper(const Model::UnpeerVpcRequest& request, const UnpeerVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
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
