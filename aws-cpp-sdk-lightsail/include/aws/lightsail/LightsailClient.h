/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
#include <aws/lightsail/model/AttachDiskResult.h>
#include <aws/lightsail/model/AttachInstancesToLoadBalancerResult.h>
#include <aws/lightsail/model/AttachLoadBalancerTlsCertificateResult.h>
#include <aws/lightsail/model/AttachStaticIpResult.h>
#include <aws/lightsail/model/CloseInstancePublicPortsResult.h>
#include <aws/lightsail/model/CopySnapshotResult.h>
#include <aws/lightsail/model/CreateCloudFormationStackResult.h>
#include <aws/lightsail/model/CreateDiskResult.h>
#include <aws/lightsail/model/CreateDiskFromSnapshotResult.h>
#include <aws/lightsail/model/CreateDiskSnapshotResult.h>
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
#include <aws/lightsail/model/DeleteDiskResult.h>
#include <aws/lightsail/model/DeleteDiskSnapshotResult.h>
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
#include <aws/lightsail/model/DetachDiskResult.h>
#include <aws/lightsail/model/DetachInstancesFromLoadBalancerResult.h>
#include <aws/lightsail/model/DetachStaticIpResult.h>
#include <aws/lightsail/model/DownloadDefaultKeyPairResult.h>
#include <aws/lightsail/model/ExportSnapshotResult.h>
#include <aws/lightsail/model/GetActiveNamesResult.h>
#include <aws/lightsail/model/GetBlueprintsResult.h>
#include <aws/lightsail/model/GetBundlesResult.h>
#include <aws/lightsail/model/GetCloudFormationStackRecordsResult.h>
#include <aws/lightsail/model/GetDiskResult.h>
#include <aws/lightsail/model/GetDiskSnapshotResult.h>
#include <aws/lightsail/model/GetDiskSnapshotsResult.h>
#include <aws/lightsail/model/GetDisksResult.h>
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
#include <aws/lightsail/model/PutInstancePublicPortsResult.h>
#include <aws/lightsail/model/RebootInstanceResult.h>
#include <aws/lightsail/model/RebootRelationalDatabaseResult.h>
#include <aws/lightsail/model/ReleaseStaticIpResult.h>
#include <aws/lightsail/model/StartInstanceResult.h>
#include <aws/lightsail/model/StartRelationalDatabaseResult.h>
#include <aws/lightsail/model/StopInstanceResult.h>
#include <aws/lightsail/model/StopRelationalDatabaseResult.h>
#include <aws/lightsail/model/TagResourceResult.h>
#include <aws/lightsail/model/UnpeerVpcResult.h>
#include <aws/lightsail/model/UntagResourceResult.h>
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
        class AttachDiskRequest;
        class AttachInstancesToLoadBalancerRequest;
        class AttachLoadBalancerTlsCertificateRequest;
        class AttachStaticIpRequest;
        class CloseInstancePublicPortsRequest;
        class CopySnapshotRequest;
        class CreateCloudFormationStackRequest;
        class CreateDiskRequest;
        class CreateDiskFromSnapshotRequest;
        class CreateDiskSnapshotRequest;
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
        class DeleteDiskRequest;
        class DeleteDiskSnapshotRequest;
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
        class DetachDiskRequest;
        class DetachInstancesFromLoadBalancerRequest;
        class DetachStaticIpRequest;
        class DownloadDefaultKeyPairRequest;
        class ExportSnapshotRequest;
        class GetActiveNamesRequest;
        class GetBlueprintsRequest;
        class GetBundlesRequest;
        class GetCloudFormationStackRecordsRequest;
        class GetDiskRequest;
        class GetDiskSnapshotRequest;
        class GetDiskSnapshotsRequest;
        class GetDisksRequest;
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
        class PutInstancePublicPortsRequest;
        class RebootInstanceRequest;
        class RebootRelationalDatabaseRequest;
        class ReleaseStaticIpRequest;
        class StartInstanceRequest;
        class StartRelationalDatabaseRequest;
        class StopInstanceRequest;
        class StopRelationalDatabaseRequest;
        class TagResourceRequest;
        class UnpeerVpcRequest;
        class UntagResourceRequest;
        class UpdateDomainEntryRequest;
        class UpdateLoadBalancerAttributeRequest;
        class UpdateRelationalDatabaseRequest;
        class UpdateRelationalDatabaseParametersRequest;

        typedef Aws::Utils::Outcome<AllocateStaticIpResult, Aws::Client::AWSError<LightsailErrors>> AllocateStaticIpOutcome;
        typedef Aws::Utils::Outcome<AttachDiskResult, Aws::Client::AWSError<LightsailErrors>> AttachDiskOutcome;
        typedef Aws::Utils::Outcome<AttachInstancesToLoadBalancerResult, Aws::Client::AWSError<LightsailErrors>> AttachInstancesToLoadBalancerOutcome;
        typedef Aws::Utils::Outcome<AttachLoadBalancerTlsCertificateResult, Aws::Client::AWSError<LightsailErrors>> AttachLoadBalancerTlsCertificateOutcome;
        typedef Aws::Utils::Outcome<AttachStaticIpResult, Aws::Client::AWSError<LightsailErrors>> AttachStaticIpOutcome;
        typedef Aws::Utils::Outcome<CloseInstancePublicPortsResult, Aws::Client::AWSError<LightsailErrors>> CloseInstancePublicPortsOutcome;
        typedef Aws::Utils::Outcome<CopySnapshotResult, Aws::Client::AWSError<LightsailErrors>> CopySnapshotOutcome;
        typedef Aws::Utils::Outcome<CreateCloudFormationStackResult, Aws::Client::AWSError<LightsailErrors>> CreateCloudFormationStackOutcome;
        typedef Aws::Utils::Outcome<CreateDiskResult, Aws::Client::AWSError<LightsailErrors>> CreateDiskOutcome;
        typedef Aws::Utils::Outcome<CreateDiskFromSnapshotResult, Aws::Client::AWSError<LightsailErrors>> CreateDiskFromSnapshotOutcome;
        typedef Aws::Utils::Outcome<CreateDiskSnapshotResult, Aws::Client::AWSError<LightsailErrors>> CreateDiskSnapshotOutcome;
        typedef Aws::Utils::Outcome<CreateDomainResult, Aws::Client::AWSError<LightsailErrors>> CreateDomainOutcome;
        typedef Aws::Utils::Outcome<CreateDomainEntryResult, Aws::Client::AWSError<LightsailErrors>> CreateDomainEntryOutcome;
        typedef Aws::Utils::Outcome<CreateInstanceSnapshotResult, Aws::Client::AWSError<LightsailErrors>> CreateInstanceSnapshotOutcome;
        typedef Aws::Utils::Outcome<CreateInstancesResult, Aws::Client::AWSError<LightsailErrors>> CreateInstancesOutcome;
        typedef Aws::Utils::Outcome<CreateInstancesFromSnapshotResult, Aws::Client::AWSError<LightsailErrors>> CreateInstancesFromSnapshotOutcome;
        typedef Aws::Utils::Outcome<CreateKeyPairResult, Aws::Client::AWSError<LightsailErrors>> CreateKeyPairOutcome;
        typedef Aws::Utils::Outcome<CreateLoadBalancerResult, Aws::Client::AWSError<LightsailErrors>> CreateLoadBalancerOutcome;
        typedef Aws::Utils::Outcome<CreateLoadBalancerTlsCertificateResult, Aws::Client::AWSError<LightsailErrors>> CreateLoadBalancerTlsCertificateOutcome;
        typedef Aws::Utils::Outcome<CreateRelationalDatabaseResult, Aws::Client::AWSError<LightsailErrors>> CreateRelationalDatabaseOutcome;
        typedef Aws::Utils::Outcome<CreateRelationalDatabaseFromSnapshotResult, Aws::Client::AWSError<LightsailErrors>> CreateRelationalDatabaseFromSnapshotOutcome;
        typedef Aws::Utils::Outcome<CreateRelationalDatabaseSnapshotResult, Aws::Client::AWSError<LightsailErrors>> CreateRelationalDatabaseSnapshotOutcome;
        typedef Aws::Utils::Outcome<DeleteDiskResult, Aws::Client::AWSError<LightsailErrors>> DeleteDiskOutcome;
        typedef Aws::Utils::Outcome<DeleteDiskSnapshotResult, Aws::Client::AWSError<LightsailErrors>> DeleteDiskSnapshotOutcome;
        typedef Aws::Utils::Outcome<DeleteDomainResult, Aws::Client::AWSError<LightsailErrors>> DeleteDomainOutcome;
        typedef Aws::Utils::Outcome<DeleteDomainEntryResult, Aws::Client::AWSError<LightsailErrors>> DeleteDomainEntryOutcome;
        typedef Aws::Utils::Outcome<DeleteInstanceResult, Aws::Client::AWSError<LightsailErrors>> DeleteInstanceOutcome;
        typedef Aws::Utils::Outcome<DeleteInstanceSnapshotResult, Aws::Client::AWSError<LightsailErrors>> DeleteInstanceSnapshotOutcome;
        typedef Aws::Utils::Outcome<DeleteKeyPairResult, Aws::Client::AWSError<LightsailErrors>> DeleteKeyPairOutcome;
        typedef Aws::Utils::Outcome<DeleteKnownHostKeysResult, Aws::Client::AWSError<LightsailErrors>> DeleteKnownHostKeysOutcome;
        typedef Aws::Utils::Outcome<DeleteLoadBalancerResult, Aws::Client::AWSError<LightsailErrors>> DeleteLoadBalancerOutcome;
        typedef Aws::Utils::Outcome<DeleteLoadBalancerTlsCertificateResult, Aws::Client::AWSError<LightsailErrors>> DeleteLoadBalancerTlsCertificateOutcome;
        typedef Aws::Utils::Outcome<DeleteRelationalDatabaseResult, Aws::Client::AWSError<LightsailErrors>> DeleteRelationalDatabaseOutcome;
        typedef Aws::Utils::Outcome<DeleteRelationalDatabaseSnapshotResult, Aws::Client::AWSError<LightsailErrors>> DeleteRelationalDatabaseSnapshotOutcome;
        typedef Aws::Utils::Outcome<DetachDiskResult, Aws::Client::AWSError<LightsailErrors>> DetachDiskOutcome;
        typedef Aws::Utils::Outcome<DetachInstancesFromLoadBalancerResult, Aws::Client::AWSError<LightsailErrors>> DetachInstancesFromLoadBalancerOutcome;
        typedef Aws::Utils::Outcome<DetachStaticIpResult, Aws::Client::AWSError<LightsailErrors>> DetachStaticIpOutcome;
        typedef Aws::Utils::Outcome<DownloadDefaultKeyPairResult, Aws::Client::AWSError<LightsailErrors>> DownloadDefaultKeyPairOutcome;
        typedef Aws::Utils::Outcome<ExportSnapshotResult, Aws::Client::AWSError<LightsailErrors>> ExportSnapshotOutcome;
        typedef Aws::Utils::Outcome<GetActiveNamesResult, Aws::Client::AWSError<LightsailErrors>> GetActiveNamesOutcome;
        typedef Aws::Utils::Outcome<GetBlueprintsResult, Aws::Client::AWSError<LightsailErrors>> GetBlueprintsOutcome;
        typedef Aws::Utils::Outcome<GetBundlesResult, Aws::Client::AWSError<LightsailErrors>> GetBundlesOutcome;
        typedef Aws::Utils::Outcome<GetCloudFormationStackRecordsResult, Aws::Client::AWSError<LightsailErrors>> GetCloudFormationStackRecordsOutcome;
        typedef Aws::Utils::Outcome<GetDiskResult, Aws::Client::AWSError<LightsailErrors>> GetDiskOutcome;
        typedef Aws::Utils::Outcome<GetDiskSnapshotResult, Aws::Client::AWSError<LightsailErrors>> GetDiskSnapshotOutcome;
        typedef Aws::Utils::Outcome<GetDiskSnapshotsResult, Aws::Client::AWSError<LightsailErrors>> GetDiskSnapshotsOutcome;
        typedef Aws::Utils::Outcome<GetDisksResult, Aws::Client::AWSError<LightsailErrors>> GetDisksOutcome;
        typedef Aws::Utils::Outcome<GetDomainResult, Aws::Client::AWSError<LightsailErrors>> GetDomainOutcome;
        typedef Aws::Utils::Outcome<GetDomainsResult, Aws::Client::AWSError<LightsailErrors>> GetDomainsOutcome;
        typedef Aws::Utils::Outcome<GetExportSnapshotRecordsResult, Aws::Client::AWSError<LightsailErrors>> GetExportSnapshotRecordsOutcome;
        typedef Aws::Utils::Outcome<GetInstanceResult, Aws::Client::AWSError<LightsailErrors>> GetInstanceOutcome;
        typedef Aws::Utils::Outcome<GetInstanceAccessDetailsResult, Aws::Client::AWSError<LightsailErrors>> GetInstanceAccessDetailsOutcome;
        typedef Aws::Utils::Outcome<GetInstanceMetricDataResult, Aws::Client::AWSError<LightsailErrors>> GetInstanceMetricDataOutcome;
        typedef Aws::Utils::Outcome<GetInstancePortStatesResult, Aws::Client::AWSError<LightsailErrors>> GetInstancePortStatesOutcome;
        typedef Aws::Utils::Outcome<GetInstanceSnapshotResult, Aws::Client::AWSError<LightsailErrors>> GetInstanceSnapshotOutcome;
        typedef Aws::Utils::Outcome<GetInstanceSnapshotsResult, Aws::Client::AWSError<LightsailErrors>> GetInstanceSnapshotsOutcome;
        typedef Aws::Utils::Outcome<GetInstanceStateResult, Aws::Client::AWSError<LightsailErrors>> GetInstanceStateOutcome;
        typedef Aws::Utils::Outcome<GetInstancesResult, Aws::Client::AWSError<LightsailErrors>> GetInstancesOutcome;
        typedef Aws::Utils::Outcome<GetKeyPairResult, Aws::Client::AWSError<LightsailErrors>> GetKeyPairOutcome;
        typedef Aws::Utils::Outcome<GetKeyPairsResult, Aws::Client::AWSError<LightsailErrors>> GetKeyPairsOutcome;
        typedef Aws::Utils::Outcome<GetLoadBalancerResult, Aws::Client::AWSError<LightsailErrors>> GetLoadBalancerOutcome;
        typedef Aws::Utils::Outcome<GetLoadBalancerMetricDataResult, Aws::Client::AWSError<LightsailErrors>> GetLoadBalancerMetricDataOutcome;
        typedef Aws::Utils::Outcome<GetLoadBalancerTlsCertificatesResult, Aws::Client::AWSError<LightsailErrors>> GetLoadBalancerTlsCertificatesOutcome;
        typedef Aws::Utils::Outcome<GetLoadBalancersResult, Aws::Client::AWSError<LightsailErrors>> GetLoadBalancersOutcome;
        typedef Aws::Utils::Outcome<GetOperationResult, Aws::Client::AWSError<LightsailErrors>> GetOperationOutcome;
        typedef Aws::Utils::Outcome<GetOperationsResult, Aws::Client::AWSError<LightsailErrors>> GetOperationsOutcome;
        typedef Aws::Utils::Outcome<GetOperationsForResourceResult, Aws::Client::AWSError<LightsailErrors>> GetOperationsForResourceOutcome;
        typedef Aws::Utils::Outcome<GetRegionsResult, Aws::Client::AWSError<LightsailErrors>> GetRegionsOutcome;
        typedef Aws::Utils::Outcome<GetRelationalDatabaseResult, Aws::Client::AWSError<LightsailErrors>> GetRelationalDatabaseOutcome;
        typedef Aws::Utils::Outcome<GetRelationalDatabaseBlueprintsResult, Aws::Client::AWSError<LightsailErrors>> GetRelationalDatabaseBlueprintsOutcome;
        typedef Aws::Utils::Outcome<GetRelationalDatabaseBundlesResult, Aws::Client::AWSError<LightsailErrors>> GetRelationalDatabaseBundlesOutcome;
        typedef Aws::Utils::Outcome<GetRelationalDatabaseEventsResult, Aws::Client::AWSError<LightsailErrors>> GetRelationalDatabaseEventsOutcome;
        typedef Aws::Utils::Outcome<GetRelationalDatabaseLogEventsResult, Aws::Client::AWSError<LightsailErrors>> GetRelationalDatabaseLogEventsOutcome;
        typedef Aws::Utils::Outcome<GetRelationalDatabaseLogStreamsResult, Aws::Client::AWSError<LightsailErrors>> GetRelationalDatabaseLogStreamsOutcome;
        typedef Aws::Utils::Outcome<GetRelationalDatabaseMasterUserPasswordResult, Aws::Client::AWSError<LightsailErrors>> GetRelationalDatabaseMasterUserPasswordOutcome;
        typedef Aws::Utils::Outcome<GetRelationalDatabaseMetricDataResult, Aws::Client::AWSError<LightsailErrors>> GetRelationalDatabaseMetricDataOutcome;
        typedef Aws::Utils::Outcome<GetRelationalDatabaseParametersResult, Aws::Client::AWSError<LightsailErrors>> GetRelationalDatabaseParametersOutcome;
        typedef Aws::Utils::Outcome<GetRelationalDatabaseSnapshotResult, Aws::Client::AWSError<LightsailErrors>> GetRelationalDatabaseSnapshotOutcome;
        typedef Aws::Utils::Outcome<GetRelationalDatabaseSnapshotsResult, Aws::Client::AWSError<LightsailErrors>> GetRelationalDatabaseSnapshotsOutcome;
        typedef Aws::Utils::Outcome<GetRelationalDatabasesResult, Aws::Client::AWSError<LightsailErrors>> GetRelationalDatabasesOutcome;
        typedef Aws::Utils::Outcome<GetStaticIpResult, Aws::Client::AWSError<LightsailErrors>> GetStaticIpOutcome;
        typedef Aws::Utils::Outcome<GetStaticIpsResult, Aws::Client::AWSError<LightsailErrors>> GetStaticIpsOutcome;
        typedef Aws::Utils::Outcome<ImportKeyPairResult, Aws::Client::AWSError<LightsailErrors>> ImportKeyPairOutcome;
        typedef Aws::Utils::Outcome<IsVpcPeeredResult, Aws::Client::AWSError<LightsailErrors>> IsVpcPeeredOutcome;
        typedef Aws::Utils::Outcome<OpenInstancePublicPortsResult, Aws::Client::AWSError<LightsailErrors>> OpenInstancePublicPortsOutcome;
        typedef Aws::Utils::Outcome<PeerVpcResult, Aws::Client::AWSError<LightsailErrors>> PeerVpcOutcome;
        typedef Aws::Utils::Outcome<PutInstancePublicPortsResult, Aws::Client::AWSError<LightsailErrors>> PutInstancePublicPortsOutcome;
        typedef Aws::Utils::Outcome<RebootInstanceResult, Aws::Client::AWSError<LightsailErrors>> RebootInstanceOutcome;
        typedef Aws::Utils::Outcome<RebootRelationalDatabaseResult, Aws::Client::AWSError<LightsailErrors>> RebootRelationalDatabaseOutcome;
        typedef Aws::Utils::Outcome<ReleaseStaticIpResult, Aws::Client::AWSError<LightsailErrors>> ReleaseStaticIpOutcome;
        typedef Aws::Utils::Outcome<StartInstanceResult, Aws::Client::AWSError<LightsailErrors>> StartInstanceOutcome;
        typedef Aws::Utils::Outcome<StartRelationalDatabaseResult, Aws::Client::AWSError<LightsailErrors>> StartRelationalDatabaseOutcome;
        typedef Aws::Utils::Outcome<StopInstanceResult, Aws::Client::AWSError<LightsailErrors>> StopInstanceOutcome;
        typedef Aws::Utils::Outcome<StopRelationalDatabaseResult, Aws::Client::AWSError<LightsailErrors>> StopRelationalDatabaseOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, Aws::Client::AWSError<LightsailErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UnpeerVpcResult, Aws::Client::AWSError<LightsailErrors>> UnpeerVpcOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, Aws::Client::AWSError<LightsailErrors>> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateDomainEntryResult, Aws::Client::AWSError<LightsailErrors>> UpdateDomainEntryOutcome;
        typedef Aws::Utils::Outcome<UpdateLoadBalancerAttributeResult, Aws::Client::AWSError<LightsailErrors>> UpdateLoadBalancerAttributeOutcome;
        typedef Aws::Utils::Outcome<UpdateRelationalDatabaseResult, Aws::Client::AWSError<LightsailErrors>> UpdateRelationalDatabaseOutcome;
        typedef Aws::Utils::Outcome<UpdateRelationalDatabaseParametersResult, Aws::Client::AWSError<LightsailErrors>> UpdateRelationalDatabaseParametersOutcome;

        typedef std::future<AllocateStaticIpOutcome> AllocateStaticIpOutcomeCallable;
        typedef std::future<AttachDiskOutcome> AttachDiskOutcomeCallable;
        typedef std::future<AttachInstancesToLoadBalancerOutcome> AttachInstancesToLoadBalancerOutcomeCallable;
        typedef std::future<AttachLoadBalancerTlsCertificateOutcome> AttachLoadBalancerTlsCertificateOutcomeCallable;
        typedef std::future<AttachStaticIpOutcome> AttachStaticIpOutcomeCallable;
        typedef std::future<CloseInstancePublicPortsOutcome> CloseInstancePublicPortsOutcomeCallable;
        typedef std::future<CopySnapshotOutcome> CopySnapshotOutcomeCallable;
        typedef std::future<CreateCloudFormationStackOutcome> CreateCloudFormationStackOutcomeCallable;
        typedef std::future<CreateDiskOutcome> CreateDiskOutcomeCallable;
        typedef std::future<CreateDiskFromSnapshotOutcome> CreateDiskFromSnapshotOutcomeCallable;
        typedef std::future<CreateDiskSnapshotOutcome> CreateDiskSnapshotOutcomeCallable;
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
        typedef std::future<DeleteDiskOutcome> DeleteDiskOutcomeCallable;
        typedef std::future<DeleteDiskSnapshotOutcome> DeleteDiskSnapshotOutcomeCallable;
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
        typedef std::future<DetachDiskOutcome> DetachDiskOutcomeCallable;
        typedef std::future<DetachInstancesFromLoadBalancerOutcome> DetachInstancesFromLoadBalancerOutcomeCallable;
        typedef std::future<DetachStaticIpOutcome> DetachStaticIpOutcomeCallable;
        typedef std::future<DownloadDefaultKeyPairOutcome> DownloadDefaultKeyPairOutcomeCallable;
        typedef std::future<ExportSnapshotOutcome> ExportSnapshotOutcomeCallable;
        typedef std::future<GetActiveNamesOutcome> GetActiveNamesOutcomeCallable;
        typedef std::future<GetBlueprintsOutcome> GetBlueprintsOutcomeCallable;
        typedef std::future<GetBundlesOutcome> GetBundlesOutcomeCallable;
        typedef std::future<GetCloudFormationStackRecordsOutcome> GetCloudFormationStackRecordsOutcomeCallable;
        typedef std::future<GetDiskOutcome> GetDiskOutcomeCallable;
        typedef std::future<GetDiskSnapshotOutcome> GetDiskSnapshotOutcomeCallable;
        typedef std::future<GetDiskSnapshotsOutcome> GetDiskSnapshotsOutcomeCallable;
        typedef std::future<GetDisksOutcome> GetDisksOutcomeCallable;
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
        typedef std::future<PutInstancePublicPortsOutcome> PutInstancePublicPortsOutcomeCallable;
        typedef std::future<RebootInstanceOutcome> RebootInstanceOutcomeCallable;
        typedef std::future<RebootRelationalDatabaseOutcome> RebootRelationalDatabaseOutcomeCallable;
        typedef std::future<ReleaseStaticIpOutcome> ReleaseStaticIpOutcomeCallable;
        typedef std::future<StartInstanceOutcome> StartInstanceOutcomeCallable;
        typedef std::future<StartRelationalDatabaseOutcome> StartRelationalDatabaseOutcomeCallable;
        typedef std::future<StopInstanceOutcome> StopInstanceOutcomeCallable;
        typedef std::future<StopRelationalDatabaseOutcome> StopRelationalDatabaseOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UnpeerVpcOutcome> UnpeerVpcOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateDomainEntryOutcome> UpdateDomainEntryOutcomeCallable;
        typedef std::future<UpdateLoadBalancerAttributeOutcome> UpdateLoadBalancerAttributeOutcomeCallable;
        typedef std::future<UpdateRelationalDatabaseOutcome> UpdateRelationalDatabaseOutcomeCallable;
        typedef std::future<UpdateRelationalDatabaseParametersOutcome> UpdateRelationalDatabaseParametersOutcomeCallable;
} // namespace Model

  class LightsailClient;

    typedef std::function<void(const LightsailClient*, const Model::AllocateStaticIpRequest&, const Model::AllocateStaticIpOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AllocateStaticIpResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::AttachDiskRequest&, const Model::AttachDiskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachDiskResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::AttachInstancesToLoadBalancerRequest&, const Model::AttachInstancesToLoadBalancerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachInstancesToLoadBalancerResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::AttachLoadBalancerTlsCertificateRequest&, const Model::AttachLoadBalancerTlsCertificateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachLoadBalancerTlsCertificateResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::AttachStaticIpRequest&, const Model::AttachStaticIpOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachStaticIpResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::CloseInstancePublicPortsRequest&, const Model::CloseInstancePublicPortsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CloseInstancePublicPortsResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::CopySnapshotRequest&, const Model::CopySnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopySnapshotResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::CreateCloudFormationStackRequest&, const Model::CreateCloudFormationStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCloudFormationStackResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::CreateDiskRequest&, const Model::CreateDiskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDiskResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::CreateDiskFromSnapshotRequest&, const Model::CreateDiskFromSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDiskFromSnapshotResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::CreateDiskSnapshotRequest&, const Model::CreateDiskSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDiskSnapshotResponseReceivedHandler;
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
    typedef std::function<void(const LightsailClient*, const Model::DeleteDiskRequest&, const Model::DeleteDiskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDiskResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::DeleteDiskSnapshotRequest&, const Model::DeleteDiskSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDiskSnapshotResponseReceivedHandler;
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
    typedef std::function<void(const LightsailClient*, const Model::DetachDiskRequest&, const Model::DetachDiskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachDiskResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::DetachInstancesFromLoadBalancerRequest&, const Model::DetachInstancesFromLoadBalancerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachInstancesFromLoadBalancerResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::DetachStaticIpRequest&, const Model::DetachStaticIpOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachStaticIpResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::DownloadDefaultKeyPairRequest&, const Model::DownloadDefaultKeyPairOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DownloadDefaultKeyPairResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::ExportSnapshotRequest&, const Model::ExportSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportSnapshotResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetActiveNamesRequest&, const Model::GetActiveNamesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetActiveNamesResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetBlueprintsRequest&, const Model::GetBlueprintsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBlueprintsResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetBundlesRequest&, const Model::GetBundlesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBundlesResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetCloudFormationStackRecordsRequest&, const Model::GetCloudFormationStackRecordsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCloudFormationStackRecordsResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetDiskRequest&, const Model::GetDiskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDiskResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetDiskSnapshotRequest&, const Model::GetDiskSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDiskSnapshotResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetDiskSnapshotsRequest&, const Model::GetDiskSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDiskSnapshotsResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::GetDisksRequest&, const Model::GetDisksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDisksResponseReceivedHandler;
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
    typedef std::function<void(const LightsailClient*, const Model::PutInstancePublicPortsRequest&, const Model::PutInstancePublicPortsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutInstancePublicPortsResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::RebootInstanceRequest&, const Model::RebootInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebootInstanceResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::RebootRelationalDatabaseRequest&, const Model::RebootRelationalDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebootRelationalDatabaseResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::ReleaseStaticIpRequest&, const Model::ReleaseStaticIpOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ReleaseStaticIpResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::StartInstanceRequest&, const Model::StartInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartInstanceResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::StartRelationalDatabaseRequest&, const Model::StartRelationalDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartRelationalDatabaseResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::StopInstanceRequest&, const Model::StopInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopInstanceResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::StopRelationalDatabaseRequest&, const Model::StopRelationalDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopRelationalDatabaseResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::UnpeerVpcRequest&, const Model::UnpeerVpcOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UnpeerVpcResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::UpdateDomainEntryRequest&, const Model::UpdateDomainEntryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDomainEntryResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::UpdateLoadBalancerAttributeRequest&, const Model::UpdateLoadBalancerAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLoadBalancerAttributeResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::UpdateRelationalDatabaseRequest&, const Model::UpdateRelationalDatabaseOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRelationalDatabaseResponseReceivedHandler;
    typedef std::function<void(const LightsailClient*, const Model::UpdateRelationalDatabaseParametersRequest&, const Model::UpdateRelationalDatabaseParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRelationalDatabaseParametersResponseReceivedHandler;

  /**
   * <p>Amazon Lightsail is the easiest way to get started with AWS for developers
   * who just need virtual private servers. Lightsail includes everything you need to
   * launch your project quickly - a virtual machine, a managed database, SSD-based
   * storage, data transfer, DNS management, and a static IP - for a low, predictable
   * price. You manage those Lightsail servers through the Lightsail console or by
   * using the API or command-line interface (CLI).</p> <p>For more information about
   * Lightsail concepts and tasks, see the <a
   * href="https://lightsail.aws.amazon.com/ls/docs/all">Lightsail Dev Guide</a>.</p>
   * <p>To use the Lightsail API or the CLI, you will need to use AWS Identity and
   * Access Management (IAM) to generate access keys. For details about how to set
   * this up, see the <a
   * href="http://lightsail.aws.amazon.com/ls/docs/how-to/article/lightsail-how-to-set-up-access-keys-to-use-sdk-api-cli">Lightsail
   * Dev Guide</a>.</p>
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

        inline virtual const char* GetServiceClientName() const override { return "Lightsail"; }


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
         * <p>Attaches a block storage disk to a running or stopped Lightsail instance and
         * exposes it to the instance with the specified disk name.</p> <p>The <code>attach
         * disk</code> operation supports tag-based access control via resource tags
         * applied to the resource identified by diskName. For more information, see the <a
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
         * applied to the resource identified by diskName. For more information, see the <a
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
         * applied to the resource identified by diskName. For more information, see the <a
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
         * resource identified by loadBalancerName. For more information, see the <a
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
         * resource identified by loadBalancerName. For more information, see the <a
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
         * resource identified by loadBalancerName. For more information, see the <a
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
         * Use the <code>AttachLoadBalancerTlsCertificate</code> operation with the
         * non-attached certificate, and it will replace the existing one and become the
         * attached certificate.</p> <p>The <code>attach load balancer tls
         * certificate</code> operation supports tag-based access control via resource tags
         * applied to the resource identified by loadBalancerName. For more information,
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
         * Use the <code>AttachLoadBalancerTlsCertificate</code> operation with the
         * non-attached certificate, and it will replace the existing one and become the
         * attached certificate.</p> <p>The <code>attach load balancer tls
         * certificate</code> operation supports tag-based access control via resource tags
         * applied to the resource identified by loadBalancerName. For more information,
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
         * Use the <code>AttachLoadBalancerTlsCertificate</code> operation with the
         * non-attached certificate, and it will replace the existing one and become the
         * attached certificate.</p> <p>The <code>attach load balancer tls
         * certificate</code> operation supports tag-based access control via resource tags
         * applied to the resource identified by loadBalancerName. For more information,
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
         * <p>Closes the public ports on a specific Amazon Lightsail instance.</p> <p>The
         * <code>close instance public ports</code> operation supports tag-based access
         * control via resource tags applied to the resource identified by instanceName.
         * For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CloseInstancePublicPorts">AWS
         * API Reference</a></p>
         */
        virtual Model::CloseInstancePublicPortsOutcome CloseInstancePublicPorts(const Model::CloseInstancePublicPortsRequest& request) const;

        /**
         * <p>Closes the public ports on a specific Amazon Lightsail instance.</p> <p>The
         * <code>close instance public ports</code> operation supports tag-based access
         * control via resource tags applied to the resource identified by instanceName.
         * For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CloseInstancePublicPorts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CloseInstancePublicPortsOutcomeCallable CloseInstancePublicPortsCallable(const Model::CloseInstancePublicPortsRequest& request) const;

        /**
         * <p>Closes the public ports on a specific Amazon Lightsail instance.</p> <p>The
         * <code>close instance public ports</code> operation supports tag-based access
         * control via resource tags applied to the resource identified by instanceName.
         * For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CloseInstancePublicPorts">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CloseInstancePublicPortsAsync(const Model::CloseInstancePublicPortsRequest& request, const CloseInstancePublicPortsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Copies an instance or disk snapshot from one AWS Region to another in Amazon
         * Lightsail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CopySnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CopySnapshotOutcome CopySnapshot(const Model::CopySnapshotRequest& request) const;

        /**
         * <p>Copies an instance or disk snapshot from one AWS Region to another in Amazon
         * Lightsail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CopySnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CopySnapshotOutcomeCallable CopySnapshotCallable(const Model::CopySnapshotRequest& request) const;

        /**
         * <p>Copies an instance or disk snapshot from one AWS Region to another in Amazon
         * Lightsail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CopySnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CopySnapshotAsync(const Model::CopySnapshotRequest& request, const CopySnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an AWS CloudFormation stack, which creates a new Amazon EC2 instance
         * from an exported Amazon Lightsail snapshot. This operation results in a
         * CloudFormation stack record that can be used to track the AWS CloudFormation
         * stack created. Use the <code>get cloud formation stack records</code> operation
         * to get a list of the CloudFormation stacks created.</p> <important> <p>Wait
         * until after your new Amazon EC2 instance is created before running the
         * <code>create cloud formation stack</code> operation again with the same export
         * snapshot record.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateCloudFormationStack">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCloudFormationStackOutcome CreateCloudFormationStack(const Model::CreateCloudFormationStackRequest& request) const;

        /**
         * <p>Creates an AWS CloudFormation stack, which creates a new Amazon EC2 instance
         * from an exported Amazon Lightsail snapshot. This operation results in a
         * CloudFormation stack record that can be used to track the AWS CloudFormation
         * stack created. Use the <code>get cloud formation stack records</code> operation
         * to get a list of the CloudFormation stacks created.</p> <important> <p>Wait
         * until after your new Amazon EC2 instance is created before running the
         * <code>create cloud formation stack</code> operation again with the same export
         * snapshot record.</p> </important><p><h3>See Also:</h3>   <a
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
         * to get a list of the CloudFormation stacks created.</p> <important> <p>Wait
         * until after your new Amazon EC2 instance is created before running the
         * <code>create cloud formation stack</code> operation again with the same export
         * snapshot record.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateCloudFormationStack">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCloudFormationStackAsync(const Model::CreateCloudFormationStackRequest& request, const CreateCloudFormationStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a block storage disk that can be attached to a Lightsail instance in
         * the same Availability Zone (e.g., <code>us-east-2a</code>). The disk is created
         * in the regional endpoint that you send the HTTP request to. For more
         * information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/overview/article/understanding-regions-and-availability-zones-in-amazon-lightsail">Regions
         * and Availability Zones in Lightsail</a>.</p> <p>The <code>create disk</code>
         * operation supports tag-based access control via request tags. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateDisk">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDiskOutcome CreateDisk(const Model::CreateDiskRequest& request) const;

        /**
         * <p>Creates a block storage disk that can be attached to a Lightsail instance in
         * the same Availability Zone (e.g., <code>us-east-2a</code>). The disk is created
         * in the regional endpoint that you send the HTTP request to. For more
         * information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/overview/article/understanding-regions-and-availability-zones-in-amazon-lightsail">Regions
         * and Availability Zones in Lightsail</a>.</p> <p>The <code>create disk</code>
         * operation supports tag-based access control via request tags. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateDisk">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDiskOutcomeCallable CreateDiskCallable(const Model::CreateDiskRequest& request) const;

        /**
         * <p>Creates a block storage disk that can be attached to a Lightsail instance in
         * the same Availability Zone (e.g., <code>us-east-2a</code>). The disk is created
         * in the regional endpoint that you send the HTTP request to. For more
         * information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/overview/article/understanding-regions-and-availability-zones-in-amazon-lightsail">Regions
         * and Availability Zones in Lightsail</a>.</p> <p>The <code>create disk</code>
         * operation supports tag-based access control via request tags. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateDisk">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDiskAsync(const Model::CreateDiskRequest& request, const CreateDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a block storage disk from a disk snapshot that can be attached to a
         * Lightsail instance in the same Availability Zone (e.g.,
         * <code>us-east-2a</code>). The disk is created in the regional endpoint that you
         * send the HTTP request to. For more information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/overview/article/understanding-regions-and-availability-zones-in-amazon-lightsail">Regions
         * and Availability Zones in Lightsail</a>.</p> <p>The <code>create disk from
         * snapshot</code> operation supports tag-based access control via request tags and
         * resource tags applied to the resource identified by diskSnapshotName. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateDiskFromSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDiskFromSnapshotOutcome CreateDiskFromSnapshot(const Model::CreateDiskFromSnapshotRequest& request) const;

        /**
         * <p>Creates a block storage disk from a disk snapshot that can be attached to a
         * Lightsail instance in the same Availability Zone (e.g.,
         * <code>us-east-2a</code>). The disk is created in the regional endpoint that you
         * send the HTTP request to. For more information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/overview/article/understanding-regions-and-availability-zones-in-amazon-lightsail">Regions
         * and Availability Zones in Lightsail</a>.</p> <p>The <code>create disk from
         * snapshot</code> operation supports tag-based access control via request tags and
         * resource tags applied to the resource identified by diskSnapshotName. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateDiskFromSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDiskFromSnapshotOutcomeCallable CreateDiskFromSnapshotCallable(const Model::CreateDiskFromSnapshotRequest& request) const;

        /**
         * <p>Creates a block storage disk from a disk snapshot that can be attached to a
         * Lightsail instance in the same Availability Zone (e.g.,
         * <code>us-east-2a</code>). The disk is created in the regional endpoint that you
         * send the HTTP request to. For more information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/overview/article/understanding-regions-and-availability-zones-in-amazon-lightsail">Regions
         * and Availability Zones in Lightsail</a>.</p> <p>The <code>create disk from
         * snapshot</code> operation supports tag-based access control via request tags and
         * resource tags applied to the resource identified by diskSnapshotName. For more
         * information, see the <a
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
         * <p>Creates one of the following entry records associated with the domain:
         * Address (A), canonical name (CNAME), mail exchanger (MX), name server (NS),
         * start of authority (SOA), service locator (SRV), or text (TXT).</p> <p>The
         * <code>create domain entry</code> operation supports tag-based access control via
         * resource tags applied to the resource identified by domainName. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateDomainEntry">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDomainEntryOutcome CreateDomainEntry(const Model::CreateDomainEntryRequest& request) const;

        /**
         * <p>Creates one of the following entry records associated with the domain:
         * Address (A), canonical name (CNAME), mail exchanger (MX), name server (NS),
         * start of authority (SOA), service locator (SRV), or text (TXT).</p> <p>The
         * <code>create domain entry</code> operation supports tag-based access control via
         * resource tags applied to the resource identified by domainName. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateDomainEntry">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDomainEntryOutcomeCallable CreateDomainEntryCallable(const Model::CreateDomainEntryRequest& request) const;

        /**
         * <p>Creates one of the following entry records associated with the domain:
         * Address (A), canonical name (CNAME), mail exchanger (MX), name server (NS),
         * start of authority (SOA), service locator (SRV), or text (TXT).</p> <p>The
         * <code>create domain entry</code> operation supports tag-based access control via
         * resource tags applied to the resource identified by domainName. For more
         * information, see the <a
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
         * <p>Creates one or more Amazon Lightsail virtual private servers, or
         * <i>instances</i>. Create instances using active blueprints. Inactive blueprints
         * are listed to support customers with existing instances but are not necessarily
         * available for launch of new instances. Blueprints are marked inactive when they
         * become outdated due to operating system updates or new application releases. Use
         * the get blueprints operation to return a list of available blueprints.</p>
         * <p>The <code>create instances</code> operation supports tag-based access control
         * via request tags. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInstancesOutcome CreateInstances(const Model::CreateInstancesRequest& request) const;

        /**
         * <p>Creates one or more Amazon Lightsail virtual private servers, or
         * <i>instances</i>. Create instances using active blueprints. Inactive blueprints
         * are listed to support customers with existing instances but are not necessarily
         * available for launch of new instances. Blueprints are marked inactive when they
         * become outdated due to operating system updates or new application releases. Use
         * the get blueprints operation to return a list of available blueprints.</p>
         * <p>The <code>create instances</code> operation supports tag-based access control
         * via request tags. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInstancesOutcomeCallable CreateInstancesCallable(const Model::CreateInstancesRequest& request) const;

        /**
         * <p>Creates one or more Amazon Lightsail virtual private servers, or
         * <i>instances</i>. Create instances using active blueprints. Inactive blueprints
         * are listed to support customers with existing instances but are not necessarily
         * available for launch of new instances. Blueprints are marked inactive when they
         * become outdated due to operating system updates or new application releases. Use
         * the get blueprints operation to return a list of available blueprints.</p>
         * <p>The <code>create instances</code> operation supports tag-based access control
         * via request tags. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInstancesAsync(const Model::CreateInstancesRequest& request, const CreateInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Uses a specific snapshot as a blueprint for creating one or more new
         * instances that are based on that identical configuration.</p> <p>The
         * <code>create instances from snapshot</code> operation supports tag-based access
         * control via request tags and resource tags applied to the resource identified by
         * instanceSnapshotName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateInstancesFromSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInstancesFromSnapshotOutcome CreateInstancesFromSnapshot(const Model::CreateInstancesFromSnapshotRequest& request) const;

        /**
         * <p>Uses a specific snapshot as a blueprint for creating one or more new
         * instances that are based on that identical configuration.</p> <p>The
         * <code>create instances from snapshot</code> operation supports tag-based access
         * control via request tags and resource tags applied to the resource identified by
         * instanceSnapshotName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateInstancesFromSnapshot">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInstancesFromSnapshotOutcomeCallable CreateInstancesFromSnapshotCallable(const Model::CreateInstancesFromSnapshotRequest& request) const;

        /**
         * <p>Uses a specific snapshot as a blueprint for creating one or more new
         * instances that are based on that identical configuration.</p> <p>The
         * <code>create instances from snapshot</code> operation supports tag-based access
         * control via request tags and resource tags applied to the resource identified by
         * instanceSnapshotName. For more information, see the <a
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
         * <code>create load balancer tls certificate</code> operation supports tag-based
         * access control via resource tags applied to the resource identified by
         * loadBalancerName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateLoadBalancerTlsCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLoadBalancerTlsCertificateOutcome CreateLoadBalancerTlsCertificate(const Model::CreateLoadBalancerTlsCertificateRequest& request) const;

        /**
         * <p>Creates a Lightsail load balancer TLS certificate.</p> <p>TLS is just an
         * updated, more secure version of Secure Socket Layer (SSL).</p> <p>The
         * <code>create load balancer tls certificate</code> operation supports tag-based
         * access control via resource tags applied to the resource identified by
         * loadBalancerName. For more information, see the <a
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
         * <code>create load balancer tls certificate</code> operation supports tag-based
         * access control via resource tags applied to the resource identified by
         * loadBalancerName. For more information, see the <a
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
         * <p>Deletes the specified block storage disk. The disk must be in the
         * <code>available</code> state (not attached to a Lightsail instance).</p> <note>
         * <p>The disk may remain in the <code>deleting</code> state for several
         * minutes.</p> </note> <p>The <code>delete disk</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * diskName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteDisk">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDiskOutcome DeleteDisk(const Model::DeleteDiskRequest& request) const;

        /**
         * <p>Deletes the specified block storage disk. The disk must be in the
         * <code>available</code> state (not attached to a Lightsail instance).</p> <note>
         * <p>The disk may remain in the <code>deleting</code> state for several
         * minutes.</p> </note> <p>The <code>delete disk</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * diskName. For more information, see the <a
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
         * <code>available</code> state (not attached to a Lightsail instance).</p> <note>
         * <p>The disk may remain in the <code>deleting</code> state for several
         * minutes.</p> </note> <p>The <code>delete disk</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * diskName. For more information, see the <a
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
         * via resource tags applied to the resource identified by diskSnapshotName. For
         * more information, see the <a
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
         * via resource tags applied to the resource identified by diskSnapshotName. For
         * more information, see the <a
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
         * via resource tags applied to the resource identified by diskSnapshotName. For
         * more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteDiskSnapshot">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDiskSnapshotAsync(const Model::DeleteDiskSnapshotRequest& request, const DeleteDiskSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified domain recordset and all of its domain records.</p>
         * <p>The <code>delete domain</code> operation supports tag-based access control
         * via resource tags applied to the resource identified by domainName. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainOutcome DeleteDomain(const Model::DeleteDomainRequest& request) const;

        /**
         * <p>Deletes the specified domain recordset and all of its domain records.</p>
         * <p>The <code>delete domain</code> operation supports tag-based access control
         * via resource tags applied to the resource identified by domainName. For more
         * information, see the <a
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
         * via resource tags applied to the resource identified by domainName. For more
         * information, see the <a
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
         * resource identified by domainName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteDomainEntry">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainEntryOutcome DeleteDomainEntry(const Model::DeleteDomainEntryRequest& request) const;

        /**
         * <p>Deletes a specific domain entry.</p> <p>The <code>delete domain entry</code>
         * operation supports tag-based access control via resource tags applied to the
         * resource identified by domainName. For more information, see the <a
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
         * resource identified by domainName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteDomainEntry">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDomainEntryAsync(const Model::DeleteDomainEntryRequest& request, const DeleteDomainEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specific Amazon Lightsail virtual private server, or
         * <i>instance</i>.</p> <p>The <code>delete instance</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * instanceName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInstanceOutcome DeleteInstance(const Model::DeleteInstanceRequest& request) const;

        /**
         * <p>Deletes a specific Amazon Lightsail virtual private server, or
         * <i>instance</i>.</p> <p>The <code>delete instance</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * instanceName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInstanceOutcomeCallable DeleteInstanceCallable(const Model::DeleteInstanceRequest& request) const;

        /**
         * <p>Deletes a specific Amazon Lightsail virtual private server, or
         * <i>instance</i>.</p> <p>The <code>delete instance</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * instanceName. For more information, see the <a
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
         * identified by instanceSnapshotName. For more information, see the <a
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
         * identified by instanceSnapshotName. For more information, see the <a
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
         * identified by instanceSnapshotName. For more information, see the <a
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
         * resource identified by keyPairName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteKeyPair">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteKeyPairOutcome DeleteKeyPair(const Model::DeleteKeyPairRequest& request) const;

        /**
         * <p>Deletes a specific SSH key pair.</p> <p>The <code>delete key pair</code>
         * operation supports tag-based access control via resource tags applied to the
         * resource identified by keyPairName. For more information, see the <a
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
         * resource identified by keyPairName. For more information, see the <a
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
         * instance after a host key mismatch.</p> <important> <p>Perform this operation
         * only if you were expecting the host key or certificate mismatch or if you are
         * familiar with the new host key or certificate on the instance. For more
         * information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-troubleshooting-browser-based-ssh-rdp-client-connection">Troubleshooting
         * connection issues when using the Amazon Lightsail browser-based SSH or RDP
         * client</a>.</p> </important><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteKnownHostKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteKnownHostKeysOutcome DeleteKnownHostKeys(const Model::DeleteKnownHostKeysRequest& request) const;

        /**
         * <p>Deletes the known host key or certificate used by the Amazon Lightsail
         * browser-based SSH or RDP clients to authenticate an instance. This operation
         * enables the Lightsail browser-based SSH or RDP clients to connect to the
         * instance after a host key mismatch.</p> <important> <p>Perform this operation
         * only if you were expecting the host key or certificate mismatch or if you are
         * familiar with the new host key or certificate on the instance. For more
         * information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-troubleshooting-browser-based-ssh-rdp-client-connection">Troubleshooting
         * connection issues when using the Amazon Lightsail browser-based SSH or RDP
         * client</a>.</p> </important><p><h3>See Also:</h3>   <a
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
         * instance after a host key mismatch.</p> <important> <p>Perform this operation
         * only if you were expecting the host key or certificate mismatch or if you are
         * familiar with the new host key or certificate on the instance. For more
         * information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-troubleshooting-browser-based-ssh-rdp-client-connection">Troubleshooting
         * connection issues when using the Amazon Lightsail browser-based SSH or RDP
         * client</a>.</p> </important><p><h3>See Also:</h3>   <a
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
         * control via resource tags applied to the resource identified by
         * loadBalancerName. For more information, see the <a
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
         * control via resource tags applied to the resource identified by
         * loadBalancerName. For more information, see the <a
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
         * control via resource tags applied to the resource identified by
         * loadBalancerName. For more information, see the <a
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
         * <p>The <code>delete load balancer tls certificate</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * loadBalancerName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteLoadBalancerTlsCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLoadBalancerTlsCertificateOutcome DeleteLoadBalancerTlsCertificate(const Model::DeleteLoadBalancerTlsCertificateRequest& request) const;

        /**
         * <p>Deletes an SSL/TLS certificate associated with a Lightsail load balancer.</p>
         * <p>The <code>delete load balancer tls certificate</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * loadBalancerName. For more information, see the <a
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
         * <p>The <code>delete load balancer tls certificate</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * loadBalancerName. For more information, see the <a
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
         * <p>Detaches a stopped block storage disk from a Lightsail instance. Make sure to
         * unmount any file systems on the device within your operating system before
         * stopping the instance and detaching the disk.</p> <p>The <code>detach
         * disk</code> operation supports tag-based access control via resource tags
         * applied to the resource identified by diskName. For more information, see the <a
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
         * applied to the resource identified by diskName. For more information, see the <a
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
         * applied to the resource identified by diskName. For more information, see the <a
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
         * applied to the resource identified by loadBalancerName. For more information,
         * see the <a
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
         * applied to the resource identified by loadBalancerName. For more information,
         * see the <a
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
         * applied to the resource identified by loadBalancerName. For more information,
         * see the <a
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
         * sourceSnapshotName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p> <note> <p>Use the <code>get instance snapshots</code> or
         * <code>get disk snapshots</code> operations to get a list of snapshots that you
         * can export to Amazon EC2.</p> </note><p><h3>See Also:</h3>   <a
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
         * sourceSnapshotName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p> <note> <p>Use the <code>get instance snapshots</code> or
         * <code>get disk snapshots</code> operations to get a list of snapshots that you
         * can export to Amazon EC2.</p> </note><p><h3>See Also:</h3>   <a
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
         * sourceSnapshotName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p> <note> <p>Use the <code>get instance snapshots</code> or
         * <code>get disk snapshots</code> operations to get a list of snapshots that you
         * can export to Amazon EC2.</p> </note><p><h3>See Also:</h3>   <a
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
         * <p>Returns the list of available instance images, or <i>blueprints</i>. You can
         * use a blueprint to create a new virtual private server already running a
         * specific operating system, as well as a preinstalled app or development stack.
         * The software each instance is running depends on the blueprint image you
         * choose.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetBlueprints">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBlueprintsOutcome GetBlueprints(const Model::GetBlueprintsRequest& request) const;

        /**
         * <p>Returns the list of available instance images, or <i>blueprints</i>. You can
         * use a blueprint to create a new virtual private server already running a
         * specific operating system, as well as a preinstalled app or development stack.
         * The software each instance is running depends on the blueprint image you
         * choose.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetBlueprints">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBlueprintsOutcomeCallable GetBlueprintsCallable(const Model::GetBlueprintsRequest& request) const;

        /**
         * <p>Returns the list of available instance images, or <i>blueprints</i>. You can
         * use a blueprint to create a new virtual private server already running a
         * specific operating system, as well as a preinstalled app or development stack.
         * The software each instance is running depends on the blueprint image you
         * choose.</p><p><h3>See Also:</h3>   <a
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
         * account and region.</p> <p>If you are describing a long list of disk snapshots,
         * you can paginate the output to make the list more manageable. You can use the
         * pageToken and nextPageToken values to retrieve the next items in the
         * list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDiskSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDiskSnapshotsOutcome GetDiskSnapshots(const Model::GetDiskSnapshotsRequest& request) const;

        /**
         * <p>Returns information about all block storage disk snapshots in your AWS
         * account and region.</p> <p>If you are describing a long list of disk snapshots,
         * you can paginate the output to make the list more manageable. You can use the
         * pageToken and nextPageToken values to retrieve the next items in the
         * list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDiskSnapshots">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDiskSnapshotsOutcomeCallable GetDiskSnapshotsCallable(const Model::GetDiskSnapshotsRequest& request) const;

        /**
         * <p>Returns information about all block storage disk snapshots in your AWS
         * account and region.</p> <p>If you are describing a long list of disk snapshots,
         * you can paginate the output to make the list more manageable. You can use the
         * pageToken and nextPageToken values to retrieve the next items in the
         * list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDiskSnapshots">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDiskSnapshotsAsync(const Model::GetDiskSnapshotsRequest& request, const GetDiskSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about all block storage disks in your AWS account and
         * region.</p> <p>If you are describing a long list of disks, you can paginate the
         * output to make the list more manageable. You can use the pageToken and
         * nextPageToken values to retrieve the next items in the list.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDisks">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDisksOutcome GetDisks(const Model::GetDisksRequest& request) const;

        /**
         * <p>Returns information about all block storage disks in your AWS account and
         * region.</p> <p>If you are describing a long list of disks, you can paginate the
         * output to make the list more manageable. You can use the pageToken and
         * nextPageToken values to retrieve the next items in the list.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDisks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDisksOutcomeCallable GetDisksCallable(const Model::GetDisksRequest& request) const;

        /**
         * <p>Returns information about all block storage disks in your AWS account and
         * region.</p> <p>If you are describing a long list of disks, you can paginate the
         * output to make the list more manageable. You can use the pageToken and
         * nextPageToken values to retrieve the next items in the list.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDisks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDisksAsync(const Model::GetDisksRequest& request, const GetDisksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * applied to the resource identified by instanceName. For more information, see
         * the <a
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
         * applied to the resource identified by instanceName. For more information, see
         * the <a
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
         * applied to the resource identified by instanceName. For more information, see
         * the <a
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
         * given an instance name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetInstanceMetricData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInstanceMetricDataOutcome GetInstanceMetricData(const Model::GetInstanceMetricDataRequest& request) const;

        /**
         * <p>Returns the data points for the specified Amazon Lightsail instance metric,
         * given an instance name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetInstanceMetricData">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInstanceMetricDataOutcomeCallable GetInstanceMetricDataCallable(const Model::GetInstanceMetricDataRequest& request) const;

        /**
         * <p>Returns the data points for the specified Amazon Lightsail instance metric,
         * given an instance name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetInstanceMetricData">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetInstanceMetricDataAsync(const Model::GetInstanceMetricDataRequest& request, const GetInstanceMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the port states for a specific virtual private server, or
         * <i>instance</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetInstancePortStates">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInstancePortStatesOutcome GetInstancePortStates(const Model::GetInstancePortStatesRequest& request) const;

        /**
         * <p>Returns the port states for a specific virtual private server, or
         * <i>instance</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetInstancePortStates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetInstancePortStatesOutcomeCallable GetInstancePortStatesCallable(const Model::GetInstancePortStatesRequest& request) const;

        /**
         * <p>Returns the port states for a specific virtual private server, or
         * <i>instance</i>.</p><p><h3>See Also:</h3>   <a
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
         * balancer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetLoadBalancerMetricData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLoadBalancerMetricDataOutcome GetLoadBalancerMetricData(const Model::GetLoadBalancerMetricDataRequest& request) const;

        /**
         * <p>Returns information about health metrics for your Lightsail load
         * balancer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetLoadBalancerMetricData">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLoadBalancerMetricDataOutcomeCallable GetLoadBalancerMetricDataCallable(const Model::GetLoadBalancerMetricDataRequest& request) const;

        /**
         * <p>Returns information about health metrics for your Lightsail load
         * balancer.</p><p><h3>See Also:</h3>   <a
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
         * <p>Returns information about all load balancers in an account.</p> <p>If you are
         * describing a long list of load balancers, you can paginate the output to make
         * the list more manageable. You can use the pageToken and nextPageToken values to
         * retrieve the next items in the list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetLoadBalancers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLoadBalancersOutcome GetLoadBalancers(const Model::GetLoadBalancersRequest& request) const;

        /**
         * <p>Returns information about all load balancers in an account.</p> <p>If you are
         * describing a long list of load balancers, you can paginate the output to make
         * the list more manageable. You can use the pageToken and nextPageToken values to
         * retrieve the next items in the list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetLoadBalancers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLoadBalancersOutcomeCallable GetLoadBalancersCallable(const Model::GetLoadBalancersRequest& request) const;

        /**
         * <p>Returns information about all load balancers in an account.</p> <p>If you are
         * describing a long list of load balancers, you can paginate the output to make
         * the list more manageable. You can use the pageToken and nextPageToken values to
         * retrieve the next items in the list.</p><p><h3>See Also:</h3>   <a
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
         * password for a Lightsail database.</p> <p>The <code>asdf</code> operation
         * GetRelationalDatabaseMasterUserPassword supports tag-based access control via
         * resource tags applied to the resource identified by
         * relationalDatabaseName.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseMasterUserPassword">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRelationalDatabaseMasterUserPasswordOutcome GetRelationalDatabaseMasterUserPassword(const Model::GetRelationalDatabaseMasterUserPasswordRequest& request) const;

        /**
         * <p>Returns the current, previous, or pending versions of the master user
         * password for a Lightsail database.</p> <p>The <code>asdf</code> operation
         * GetRelationalDatabaseMasterUserPassword supports tag-based access control via
         * resource tags applied to the resource identified by
         * relationalDatabaseName.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseMasterUserPassword">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRelationalDatabaseMasterUserPasswordOutcomeCallable GetRelationalDatabaseMasterUserPasswordCallable(const Model::GetRelationalDatabaseMasterUserPasswordRequest& request) const;

        /**
         * <p>Returns the current, previous, or pending versions of the master user
         * password for a Lightsail database.</p> <p>The <code>asdf</code> operation
         * GetRelationalDatabaseMasterUserPassword supports tag-based access control via
         * resource tags applied to the resource identified by
         * relationalDatabaseName.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseMasterUserPassword">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRelationalDatabaseMasterUserPasswordAsync(const Model::GetRelationalDatabaseMasterUserPasswordRequest& request, const GetRelationalDatabaseMasterUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the data points of the specified metric for a database in Amazon
         * Lightsail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseMetricData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRelationalDatabaseMetricDataOutcome GetRelationalDatabaseMetricData(const Model::GetRelationalDatabaseMetricDataRequest& request) const;

        /**
         * <p>Returns the data points of the specified metric for a database in Amazon
         * Lightsail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseMetricData">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRelationalDatabaseMetricDataOutcomeCallable GetRelationalDatabaseMetricDataCallable(const Model::GetRelationalDatabaseMetricDataRequest& request) const;

        /**
         * <p>Returns the data points of the specified metric for a database in Amazon
         * Lightsail.</p><p><h3>See Also:</h3>   <a
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
         * <p>Adds public ports to an Amazon Lightsail instance.</p> <p>The <code>open
         * instance public ports</code> operation supports tag-based access control via
         * resource tags applied to the resource identified by instanceName. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/OpenInstancePublicPorts">AWS
         * API Reference</a></p>
         */
        virtual Model::OpenInstancePublicPortsOutcome OpenInstancePublicPorts(const Model::OpenInstancePublicPortsRequest& request) const;

        /**
         * <p>Adds public ports to an Amazon Lightsail instance.</p> <p>The <code>open
         * instance public ports</code> operation supports tag-based access control via
         * resource tags applied to the resource identified by instanceName. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/OpenInstancePublicPorts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::OpenInstancePublicPortsOutcomeCallable OpenInstancePublicPortsCallable(const Model::OpenInstancePublicPortsRequest& request) const;

        /**
         * <p>Adds public ports to an Amazon Lightsail instance.</p> <p>The <code>open
         * instance public ports</code> operation supports tag-based access control via
         * resource tags applied to the resource identified by instanceName. For more
         * information, see the <a
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
         * <p>Sets the specified open ports for an Amazon Lightsail instance, and closes
         * all ports for every protocol not included in the current request.</p> <p>The
         * <code>put instance public ports</code> operation supports tag-based access
         * control via resource tags applied to the resource identified by instanceName.
         * For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/PutInstancePublicPorts">AWS
         * API Reference</a></p>
         */
        virtual Model::PutInstancePublicPortsOutcome PutInstancePublicPorts(const Model::PutInstancePublicPortsRequest& request) const;

        /**
         * <p>Sets the specified open ports for an Amazon Lightsail instance, and closes
         * all ports for every protocol not included in the current request.</p> <p>The
         * <code>put instance public ports</code> operation supports tag-based access
         * control via resource tags applied to the resource identified by instanceName.
         * For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/PutInstancePublicPorts">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutInstancePublicPortsOutcomeCallable PutInstancePublicPortsCallable(const Model::PutInstancePublicPortsRequest& request) const;

        /**
         * <p>Sets the specified open ports for an Amazon Lightsail instance, and closes
         * all ports for every protocol not included in the current request.</p> <p>The
         * <code>put instance public ports</code> operation supports tag-based access
         * control via resource tags applied to the resource identified by instanceName.
         * For more information, see the <a
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
         * resource identified by instanceName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/RebootInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::RebootInstanceOutcome RebootInstance(const Model::RebootInstanceRequest& request) const;

        /**
         * <p>Restarts a specific instance.</p> <p>The <code>reboot instance</code>
         * operation supports tag-based access control via resource tags applied to the
         * resource identified by instanceName. For more information, see the <a
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
         * resource identified by instanceName. For more information, see the <a
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
         * <p>Starts a specific Amazon Lightsail instance from a stopped state. To restart
         * an instance, use the <code>reboot instance</code> operation.</p> <note> <p>When
         * you start a stopped instance, Lightsail assigns a new public IP address to the
         * instance. To use the same IP address after stopping and starting an instance,
         * create a static IP address and attach it to the instance. For more information,
         * see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/lightsail-create-static-ip">Lightsail
         * Dev Guide</a>.</p> </note> <p>The <code>start instance</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * instanceName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/StartInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::StartInstanceOutcome StartInstance(const Model::StartInstanceRequest& request) const;

        /**
         * <p>Starts a specific Amazon Lightsail instance from a stopped state. To restart
         * an instance, use the <code>reboot instance</code> operation.</p> <note> <p>When
         * you start a stopped instance, Lightsail assigns a new public IP address to the
         * instance. To use the same IP address after stopping and starting an instance,
         * create a static IP address and attach it to the instance. For more information,
         * see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/lightsail-create-static-ip">Lightsail
         * Dev Guide</a>.</p> </note> <p>The <code>start instance</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * instanceName. For more information, see the <a
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
         * an instance, use the <code>reboot instance</code> operation.</p> <note> <p>When
         * you start a stopped instance, Lightsail assigns a new public IP address to the
         * instance. To use the same IP address after stopping and starting an instance,
         * create a static IP address and attach it to the instance. For more information,
         * see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/lightsail-create-static-ip">Lightsail
         * Dev Guide</a>.</p> </note> <p>The <code>start instance</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * instanceName. For more information, see the <a
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
         * <note> <p>When you start a stopped instance, Lightsail assigns a new public IP
         * address to the instance. To use the same IP address after stopping and starting
         * an instance, create a static IP address and attach it to the instance. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/lightsail-create-static-ip">Lightsail
         * Dev Guide</a>.</p> </note> <p>The <code>stop instance</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * instanceName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/StopInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::StopInstanceOutcome StopInstance(const Model::StopInstanceRequest& request) const;

        /**
         * <p>Stops a specific Amazon Lightsail instance that is currently running.</p>
         * <note> <p>When you start a stopped instance, Lightsail assigns a new public IP
         * address to the instance. To use the same IP address after stopping and starting
         * an instance, create a static IP address and attach it to the instance. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/lightsail-create-static-ip">Lightsail
         * Dev Guide</a>.</p> </note> <p>The <code>stop instance</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * instanceName. For more information, see the <a
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
         * <note> <p>When you start a stopped instance, Lightsail assigns a new public IP
         * address to the instance. To use the same IP address after stopping and starting
         * an instance, create a static IP address and attach it to the instance. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/lightsail-create-static-ip">Lightsail
         * Dev Guide</a>.</p> </note> <p>The <code>stop instance</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * instanceName. For more information, see the <a
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
         * identified by resourceName. For more information, see the <a
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
         * identified by resourceName. For more information, see the <a
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
         * identified by resourceName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * the resource identified by resourceName. For more information, see the <a
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
         * the resource identified by resourceName. For more information, see the <a
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
         * the resource identified by resourceName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a domain recordset after it is created.</p> <p>The <code>update
         * domain entry</code> operation supports tag-based access control via resource
         * tags applied to the resource identified by domainName. For more information, see
         * the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Dev Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateDomainEntry">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDomainEntryOutcome UpdateDomainEntry(const Model::UpdateDomainEntryRequest& request) const;

        /**
         * <p>Updates a domain recordset after it is created.</p> <p>The <code>update
         * domain entry</code> operation supports tag-based access control via resource
         * tags applied to the resource identified by domainName. For more information, see
         * the <a
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
         * tags applied to the resource identified by domainName. For more information, see
         * the <a
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
         * resource identified by loadBalancerName. For more information, see the <a
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
         * resource identified by loadBalancerName. For more information, see the <a
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
         * resource identified by loadBalancerName. For more information, see the <a
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
         * are two ways in which paramater updates are applied: <code>dynamic</code> or
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
         * are two ways in which paramater updates are applied: <code>dynamic</code> or
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
         * are two ways in which paramater updates are applied: <code>dynamic</code> or
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
        void AttachDiskAsyncHelper(const Model::AttachDiskRequest& request, const AttachDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AttachInstancesToLoadBalancerAsyncHelper(const Model::AttachInstancesToLoadBalancerRequest& request, const AttachInstancesToLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AttachLoadBalancerTlsCertificateAsyncHelper(const Model::AttachLoadBalancerTlsCertificateRequest& request, const AttachLoadBalancerTlsCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AttachStaticIpAsyncHelper(const Model::AttachStaticIpRequest& request, const AttachStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CloseInstancePublicPortsAsyncHelper(const Model::CloseInstancePublicPortsRequest& request, const CloseInstancePublicPortsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CopySnapshotAsyncHelper(const Model::CopySnapshotRequest& request, const CopySnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCloudFormationStackAsyncHelper(const Model::CreateCloudFormationStackRequest& request, const CreateCloudFormationStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDiskAsyncHelper(const Model::CreateDiskRequest& request, const CreateDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDiskFromSnapshotAsyncHelper(const Model::CreateDiskFromSnapshotRequest& request, const CreateDiskFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDiskSnapshotAsyncHelper(const Model::CreateDiskSnapshotRequest& request, const CreateDiskSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
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
        void DeleteDiskAsyncHelper(const Model::DeleteDiskRequest& request, const DeleteDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDiskSnapshotAsyncHelper(const Model::DeleteDiskSnapshotRequest& request, const DeleteDiskSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
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
        void DetachDiskAsyncHelper(const Model::DetachDiskRequest& request, const DetachDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachInstancesFromLoadBalancerAsyncHelper(const Model::DetachInstancesFromLoadBalancerRequest& request, const DetachInstancesFromLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachStaticIpAsyncHelper(const Model::DetachStaticIpRequest& request, const DetachStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DownloadDefaultKeyPairAsyncHelper(const Model::DownloadDefaultKeyPairRequest& request, const DownloadDefaultKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ExportSnapshotAsyncHelper(const Model::ExportSnapshotRequest& request, const ExportSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetActiveNamesAsyncHelper(const Model::GetActiveNamesRequest& request, const GetActiveNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBlueprintsAsyncHelper(const Model::GetBlueprintsRequest& request, const GetBlueprintsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBundlesAsyncHelper(const Model::GetBundlesRequest& request, const GetBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCloudFormationStackRecordsAsyncHelper(const Model::GetCloudFormationStackRecordsRequest& request, const GetCloudFormationStackRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDiskAsyncHelper(const Model::GetDiskRequest& request, const GetDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDiskSnapshotAsyncHelper(const Model::GetDiskSnapshotRequest& request, const GetDiskSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDiskSnapshotsAsyncHelper(const Model::GetDiskSnapshotsRequest& request, const GetDiskSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDisksAsyncHelper(const Model::GetDisksRequest& request, const GetDisksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
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
        void PutInstancePublicPortsAsyncHelper(const Model::PutInstancePublicPortsRequest& request, const PutInstancePublicPortsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RebootInstanceAsyncHelper(const Model::RebootInstanceRequest& request, const RebootInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RebootRelationalDatabaseAsyncHelper(const Model::RebootRelationalDatabaseRequest& request, const RebootRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ReleaseStaticIpAsyncHelper(const Model::ReleaseStaticIpRequest& request, const ReleaseStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartInstanceAsyncHelper(const Model::StartInstanceRequest& request, const StartInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartRelationalDatabaseAsyncHelper(const Model::StartRelationalDatabaseRequest& request, const StartRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopInstanceAsyncHelper(const Model::StopInstanceRequest& request, const StopInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopRelationalDatabaseAsyncHelper(const Model::StopRelationalDatabaseRequest& request, const StopRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UnpeerVpcAsyncHelper(const Model::UnpeerVpcRequest& request, const UnpeerVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
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
