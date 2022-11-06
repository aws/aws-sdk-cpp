/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/lightsail/LightsailErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/lightsail/LightsailEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in LightsailClient header */
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
#include <aws/lightsail/model/UpdateInstanceMetadataOptionsResult.h>
#include <aws/lightsail/model/UpdateLoadBalancerAttributeResult.h>
#include <aws/lightsail/model/UpdateRelationalDatabaseResult.h>
#include <aws/lightsail/model/UpdateRelationalDatabaseParametersResult.h>
/* End of service model headers required in LightsailClient header */

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
    using LightsailClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using LightsailEndpointProviderBase = Aws::Lightsail::Endpoint::LightsailEndpointProviderBase;
    using LightsailEndpointProvider = Aws::Lightsail::Endpoint::LightsailEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in LightsailClient header */
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
      class UpdateInstanceMetadataOptionsRequest;
      class UpdateLoadBalancerAttributeRequest;
      class UpdateRelationalDatabaseRequest;
      class UpdateRelationalDatabaseParametersRequest;
      /* End of service model forward declarations required in LightsailClient header */

      /* Service model Outcome class definitions */
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
      typedef Aws::Utils::Outcome<UpdateInstanceMetadataOptionsResult, LightsailError> UpdateInstanceMetadataOptionsOutcome;
      typedef Aws::Utils::Outcome<UpdateLoadBalancerAttributeResult, LightsailError> UpdateLoadBalancerAttributeOutcome;
      typedef Aws::Utils::Outcome<UpdateRelationalDatabaseResult, LightsailError> UpdateRelationalDatabaseOutcome;
      typedef Aws::Utils::Outcome<UpdateRelationalDatabaseParametersResult, LightsailError> UpdateRelationalDatabaseParametersOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
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
      typedef std::future<UpdateInstanceMetadataOptionsOutcome> UpdateInstanceMetadataOptionsOutcomeCallable;
      typedef std::future<UpdateLoadBalancerAttributeOutcome> UpdateLoadBalancerAttributeOutcomeCallable;
      typedef std::future<UpdateRelationalDatabaseOutcome> UpdateRelationalDatabaseOutcomeCallable;
      typedef std::future<UpdateRelationalDatabaseParametersOutcome> UpdateRelationalDatabaseParametersOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class LightsailClient;

    /* Service model async handlers definitions */
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
    typedef std::function<void(const LightsailClient*, const Model::UpdateInstanceMetadataOptionsRequest&, const Model::UpdateInstanceMetadataOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInstanceMetadataOptionsResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::UpdateLoadBalancerAttributeRequest&, const Model::UpdateLoadBalancerAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLoadBalancerAttributeResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::UpdateRelationalDatabaseRequest&, const Model::UpdateRelationalDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRelationalDatabaseResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::UpdateRelationalDatabaseParametersRequest&, const Model::UpdateRelationalDatabaseParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRelationalDatabaseParametersResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Lightsail
} // namespace Aws
