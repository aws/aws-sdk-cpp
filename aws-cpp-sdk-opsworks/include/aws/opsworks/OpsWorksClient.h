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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opsworks/model/CloneStackResult.h>
#include <aws/opsworks/model/CreateAppResult.h>
#include <aws/opsworks/model/CreateDeploymentResult.h>
#include <aws/opsworks/model/CreateInstanceResult.h>
#include <aws/opsworks/model/CreateLayerResult.h>
#include <aws/opsworks/model/CreateStackResult.h>
#include <aws/opsworks/model/CreateUserProfileResult.h>
#include <aws/opsworks/model/DescribeAgentVersionsResult.h>
#include <aws/opsworks/model/DescribeAppsResult.h>
#include <aws/opsworks/model/DescribeCommandsResult.h>
#include <aws/opsworks/model/DescribeDeploymentsResult.h>
#include <aws/opsworks/model/DescribeEcsClustersResult.h>
#include <aws/opsworks/model/DescribeElasticIpsResult.h>
#include <aws/opsworks/model/DescribeElasticLoadBalancersResult.h>
#include <aws/opsworks/model/DescribeInstancesResult.h>
#include <aws/opsworks/model/DescribeLayersResult.h>
#include <aws/opsworks/model/DescribeLoadBasedAutoScalingResult.h>
#include <aws/opsworks/model/DescribeMyUserProfileResult.h>
#include <aws/opsworks/model/DescribeOperatingSystemsResult.h>
#include <aws/opsworks/model/DescribePermissionsResult.h>
#include <aws/opsworks/model/DescribeRaidArraysResult.h>
#include <aws/opsworks/model/DescribeRdsDbInstancesResult.h>
#include <aws/opsworks/model/DescribeServiceErrorsResult.h>
#include <aws/opsworks/model/DescribeStackProvisioningParametersResult.h>
#include <aws/opsworks/model/DescribeStackSummaryResult.h>
#include <aws/opsworks/model/DescribeStacksResult.h>
#include <aws/opsworks/model/DescribeTimeBasedAutoScalingResult.h>
#include <aws/opsworks/model/DescribeUserProfilesResult.h>
#include <aws/opsworks/model/DescribeVolumesResult.h>
#include <aws/opsworks/model/GetHostnameSuggestionResult.h>
#include <aws/opsworks/model/GrantAccessResult.h>
#include <aws/opsworks/model/ListTagsResult.h>
#include <aws/opsworks/model/RegisterEcsClusterResult.h>
#include <aws/opsworks/model/RegisterElasticIpResult.h>
#include <aws/opsworks/model/RegisterInstanceResult.h>
#include <aws/opsworks/model/RegisterVolumeResult.h>
#include <aws/core/NoResult.h>
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

namespace OpsWorks
{

namespace Model
{
        class AssignInstanceRequest;
        class AssignVolumeRequest;
        class AssociateElasticIpRequest;
        class AttachElasticLoadBalancerRequest;
        class CloneStackRequest;
        class CreateAppRequest;
        class CreateDeploymentRequest;
        class CreateInstanceRequest;
        class CreateLayerRequest;
        class CreateStackRequest;
        class CreateUserProfileRequest;
        class DeleteAppRequest;
        class DeleteInstanceRequest;
        class DeleteLayerRequest;
        class DeleteStackRequest;
        class DeleteUserProfileRequest;
        class DeregisterEcsClusterRequest;
        class DeregisterElasticIpRequest;
        class DeregisterInstanceRequest;
        class DeregisterRdsDbInstanceRequest;
        class DeregisterVolumeRequest;
        class DescribeAgentVersionsRequest;
        class DescribeAppsRequest;
        class DescribeCommandsRequest;
        class DescribeDeploymentsRequest;
        class DescribeEcsClustersRequest;
        class DescribeElasticIpsRequest;
        class DescribeElasticLoadBalancersRequest;
        class DescribeInstancesRequest;
        class DescribeLayersRequest;
        class DescribeLoadBasedAutoScalingRequest;
        class DescribePermissionsRequest;
        class DescribeRaidArraysRequest;
        class DescribeRdsDbInstancesRequest;
        class DescribeServiceErrorsRequest;
        class DescribeStackProvisioningParametersRequest;
        class DescribeStackSummaryRequest;
        class DescribeStacksRequest;
        class DescribeTimeBasedAutoScalingRequest;
        class DescribeUserProfilesRequest;
        class DescribeVolumesRequest;
        class DetachElasticLoadBalancerRequest;
        class DisassociateElasticIpRequest;
        class GetHostnameSuggestionRequest;
        class GrantAccessRequest;
        class ListTagsRequest;
        class RebootInstanceRequest;
        class RegisterEcsClusterRequest;
        class RegisterElasticIpRequest;
        class RegisterInstanceRequest;
        class RegisterRdsDbInstanceRequest;
        class RegisterVolumeRequest;
        class SetLoadBasedAutoScalingRequest;
        class SetPermissionRequest;
        class SetTimeBasedAutoScalingRequest;
        class StartInstanceRequest;
        class StartStackRequest;
        class StopInstanceRequest;
        class StopStackRequest;
        class TagResourceRequest;
        class UnassignInstanceRequest;
        class UnassignVolumeRequest;
        class UntagResourceRequest;
        class UpdateAppRequest;
        class UpdateElasticIpRequest;
        class UpdateInstanceRequest;
        class UpdateLayerRequest;
        class UpdateMyUserProfileRequest;
        class UpdateRdsDbInstanceRequest;
        class UpdateStackRequest;
        class UpdateUserProfileRequest;
        class UpdateVolumeRequest;

        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OpsWorksErrors>> AssignInstanceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OpsWorksErrors>> AssignVolumeOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OpsWorksErrors>> AssociateElasticIpOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OpsWorksErrors>> AttachElasticLoadBalancerOutcome;
        typedef Aws::Utils::Outcome<CloneStackResult, Aws::Client::AWSError<OpsWorksErrors>> CloneStackOutcome;
        typedef Aws::Utils::Outcome<CreateAppResult, Aws::Client::AWSError<OpsWorksErrors>> CreateAppOutcome;
        typedef Aws::Utils::Outcome<CreateDeploymentResult, Aws::Client::AWSError<OpsWorksErrors>> CreateDeploymentOutcome;
        typedef Aws::Utils::Outcome<CreateInstanceResult, Aws::Client::AWSError<OpsWorksErrors>> CreateInstanceOutcome;
        typedef Aws::Utils::Outcome<CreateLayerResult, Aws::Client::AWSError<OpsWorksErrors>> CreateLayerOutcome;
        typedef Aws::Utils::Outcome<CreateStackResult, Aws::Client::AWSError<OpsWorksErrors>> CreateStackOutcome;
        typedef Aws::Utils::Outcome<CreateUserProfileResult, Aws::Client::AWSError<OpsWorksErrors>> CreateUserProfileOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OpsWorksErrors>> DeleteAppOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OpsWorksErrors>> DeleteInstanceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OpsWorksErrors>> DeleteLayerOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OpsWorksErrors>> DeleteStackOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OpsWorksErrors>> DeleteUserProfileOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OpsWorksErrors>> DeregisterEcsClusterOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OpsWorksErrors>> DeregisterElasticIpOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OpsWorksErrors>> DeregisterInstanceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OpsWorksErrors>> DeregisterRdsDbInstanceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OpsWorksErrors>> DeregisterVolumeOutcome;
        typedef Aws::Utils::Outcome<DescribeAgentVersionsResult, Aws::Client::AWSError<OpsWorksErrors>> DescribeAgentVersionsOutcome;
        typedef Aws::Utils::Outcome<DescribeAppsResult, Aws::Client::AWSError<OpsWorksErrors>> DescribeAppsOutcome;
        typedef Aws::Utils::Outcome<DescribeCommandsResult, Aws::Client::AWSError<OpsWorksErrors>> DescribeCommandsOutcome;
        typedef Aws::Utils::Outcome<DescribeDeploymentsResult, Aws::Client::AWSError<OpsWorksErrors>> DescribeDeploymentsOutcome;
        typedef Aws::Utils::Outcome<DescribeEcsClustersResult, Aws::Client::AWSError<OpsWorksErrors>> DescribeEcsClustersOutcome;
        typedef Aws::Utils::Outcome<DescribeElasticIpsResult, Aws::Client::AWSError<OpsWorksErrors>> DescribeElasticIpsOutcome;
        typedef Aws::Utils::Outcome<DescribeElasticLoadBalancersResult, Aws::Client::AWSError<OpsWorksErrors>> DescribeElasticLoadBalancersOutcome;
        typedef Aws::Utils::Outcome<DescribeInstancesResult, Aws::Client::AWSError<OpsWorksErrors>> DescribeInstancesOutcome;
        typedef Aws::Utils::Outcome<DescribeLayersResult, Aws::Client::AWSError<OpsWorksErrors>> DescribeLayersOutcome;
        typedef Aws::Utils::Outcome<DescribeLoadBasedAutoScalingResult, Aws::Client::AWSError<OpsWorksErrors>> DescribeLoadBasedAutoScalingOutcome;
        typedef Aws::Utils::Outcome<DescribeMyUserProfileResult, Aws::Client::AWSError<OpsWorksErrors>> DescribeMyUserProfileOutcome;
        typedef Aws::Utils::Outcome<DescribeOperatingSystemsResult, Aws::Client::AWSError<OpsWorksErrors>> DescribeOperatingSystemsOutcome;
        typedef Aws::Utils::Outcome<DescribePermissionsResult, Aws::Client::AWSError<OpsWorksErrors>> DescribePermissionsOutcome;
        typedef Aws::Utils::Outcome<DescribeRaidArraysResult, Aws::Client::AWSError<OpsWorksErrors>> DescribeRaidArraysOutcome;
        typedef Aws::Utils::Outcome<DescribeRdsDbInstancesResult, Aws::Client::AWSError<OpsWorksErrors>> DescribeRdsDbInstancesOutcome;
        typedef Aws::Utils::Outcome<DescribeServiceErrorsResult, Aws::Client::AWSError<OpsWorksErrors>> DescribeServiceErrorsOutcome;
        typedef Aws::Utils::Outcome<DescribeStackProvisioningParametersResult, Aws::Client::AWSError<OpsWorksErrors>> DescribeStackProvisioningParametersOutcome;
        typedef Aws::Utils::Outcome<DescribeStackSummaryResult, Aws::Client::AWSError<OpsWorksErrors>> DescribeStackSummaryOutcome;
        typedef Aws::Utils::Outcome<DescribeStacksResult, Aws::Client::AWSError<OpsWorksErrors>> DescribeStacksOutcome;
        typedef Aws::Utils::Outcome<DescribeTimeBasedAutoScalingResult, Aws::Client::AWSError<OpsWorksErrors>> DescribeTimeBasedAutoScalingOutcome;
        typedef Aws::Utils::Outcome<DescribeUserProfilesResult, Aws::Client::AWSError<OpsWorksErrors>> DescribeUserProfilesOutcome;
        typedef Aws::Utils::Outcome<DescribeVolumesResult, Aws::Client::AWSError<OpsWorksErrors>> DescribeVolumesOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OpsWorksErrors>> DetachElasticLoadBalancerOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OpsWorksErrors>> DisassociateElasticIpOutcome;
        typedef Aws::Utils::Outcome<GetHostnameSuggestionResult, Aws::Client::AWSError<OpsWorksErrors>> GetHostnameSuggestionOutcome;
        typedef Aws::Utils::Outcome<GrantAccessResult, Aws::Client::AWSError<OpsWorksErrors>> GrantAccessOutcome;
        typedef Aws::Utils::Outcome<ListTagsResult, Aws::Client::AWSError<OpsWorksErrors>> ListTagsOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OpsWorksErrors>> RebootInstanceOutcome;
        typedef Aws::Utils::Outcome<RegisterEcsClusterResult, Aws::Client::AWSError<OpsWorksErrors>> RegisterEcsClusterOutcome;
        typedef Aws::Utils::Outcome<RegisterElasticIpResult, Aws::Client::AWSError<OpsWorksErrors>> RegisterElasticIpOutcome;
        typedef Aws::Utils::Outcome<RegisterInstanceResult, Aws::Client::AWSError<OpsWorksErrors>> RegisterInstanceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OpsWorksErrors>> RegisterRdsDbInstanceOutcome;
        typedef Aws::Utils::Outcome<RegisterVolumeResult, Aws::Client::AWSError<OpsWorksErrors>> RegisterVolumeOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OpsWorksErrors>> SetLoadBasedAutoScalingOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OpsWorksErrors>> SetPermissionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OpsWorksErrors>> SetTimeBasedAutoScalingOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OpsWorksErrors>> StartInstanceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OpsWorksErrors>> StartStackOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OpsWorksErrors>> StopInstanceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OpsWorksErrors>> StopStackOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OpsWorksErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OpsWorksErrors>> UnassignInstanceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OpsWorksErrors>> UnassignVolumeOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OpsWorksErrors>> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OpsWorksErrors>> UpdateAppOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OpsWorksErrors>> UpdateElasticIpOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OpsWorksErrors>> UpdateInstanceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OpsWorksErrors>> UpdateLayerOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OpsWorksErrors>> UpdateMyUserProfileOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OpsWorksErrors>> UpdateRdsDbInstanceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OpsWorksErrors>> UpdateStackOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OpsWorksErrors>> UpdateUserProfileOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<OpsWorksErrors>> UpdateVolumeOutcome;

        typedef std::future<AssignInstanceOutcome> AssignInstanceOutcomeCallable;
        typedef std::future<AssignVolumeOutcome> AssignVolumeOutcomeCallable;
        typedef std::future<AssociateElasticIpOutcome> AssociateElasticIpOutcomeCallable;
        typedef std::future<AttachElasticLoadBalancerOutcome> AttachElasticLoadBalancerOutcomeCallable;
        typedef std::future<CloneStackOutcome> CloneStackOutcomeCallable;
        typedef std::future<CreateAppOutcome> CreateAppOutcomeCallable;
        typedef std::future<CreateDeploymentOutcome> CreateDeploymentOutcomeCallable;
        typedef std::future<CreateInstanceOutcome> CreateInstanceOutcomeCallable;
        typedef std::future<CreateLayerOutcome> CreateLayerOutcomeCallable;
        typedef std::future<CreateStackOutcome> CreateStackOutcomeCallable;
        typedef std::future<CreateUserProfileOutcome> CreateUserProfileOutcomeCallable;
        typedef std::future<DeleteAppOutcome> DeleteAppOutcomeCallable;
        typedef std::future<DeleteInstanceOutcome> DeleteInstanceOutcomeCallable;
        typedef std::future<DeleteLayerOutcome> DeleteLayerOutcomeCallable;
        typedef std::future<DeleteStackOutcome> DeleteStackOutcomeCallable;
        typedef std::future<DeleteUserProfileOutcome> DeleteUserProfileOutcomeCallable;
        typedef std::future<DeregisterEcsClusterOutcome> DeregisterEcsClusterOutcomeCallable;
        typedef std::future<DeregisterElasticIpOutcome> DeregisterElasticIpOutcomeCallable;
        typedef std::future<DeregisterInstanceOutcome> DeregisterInstanceOutcomeCallable;
        typedef std::future<DeregisterRdsDbInstanceOutcome> DeregisterRdsDbInstanceOutcomeCallable;
        typedef std::future<DeregisterVolumeOutcome> DeregisterVolumeOutcomeCallable;
        typedef std::future<DescribeAgentVersionsOutcome> DescribeAgentVersionsOutcomeCallable;
        typedef std::future<DescribeAppsOutcome> DescribeAppsOutcomeCallable;
        typedef std::future<DescribeCommandsOutcome> DescribeCommandsOutcomeCallable;
        typedef std::future<DescribeDeploymentsOutcome> DescribeDeploymentsOutcomeCallable;
        typedef std::future<DescribeEcsClustersOutcome> DescribeEcsClustersOutcomeCallable;
        typedef std::future<DescribeElasticIpsOutcome> DescribeElasticIpsOutcomeCallable;
        typedef std::future<DescribeElasticLoadBalancersOutcome> DescribeElasticLoadBalancersOutcomeCallable;
        typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
        typedef std::future<DescribeLayersOutcome> DescribeLayersOutcomeCallable;
        typedef std::future<DescribeLoadBasedAutoScalingOutcome> DescribeLoadBasedAutoScalingOutcomeCallable;
        typedef std::future<DescribeMyUserProfileOutcome> DescribeMyUserProfileOutcomeCallable;
        typedef std::future<DescribeOperatingSystemsOutcome> DescribeOperatingSystemsOutcomeCallable;
        typedef std::future<DescribePermissionsOutcome> DescribePermissionsOutcomeCallable;
        typedef std::future<DescribeRaidArraysOutcome> DescribeRaidArraysOutcomeCallable;
        typedef std::future<DescribeRdsDbInstancesOutcome> DescribeRdsDbInstancesOutcomeCallable;
        typedef std::future<DescribeServiceErrorsOutcome> DescribeServiceErrorsOutcomeCallable;
        typedef std::future<DescribeStackProvisioningParametersOutcome> DescribeStackProvisioningParametersOutcomeCallable;
        typedef std::future<DescribeStackSummaryOutcome> DescribeStackSummaryOutcomeCallable;
        typedef std::future<DescribeStacksOutcome> DescribeStacksOutcomeCallable;
        typedef std::future<DescribeTimeBasedAutoScalingOutcome> DescribeTimeBasedAutoScalingOutcomeCallable;
        typedef std::future<DescribeUserProfilesOutcome> DescribeUserProfilesOutcomeCallable;
        typedef std::future<DescribeVolumesOutcome> DescribeVolumesOutcomeCallable;
        typedef std::future<DetachElasticLoadBalancerOutcome> DetachElasticLoadBalancerOutcomeCallable;
        typedef std::future<DisassociateElasticIpOutcome> DisassociateElasticIpOutcomeCallable;
        typedef std::future<GetHostnameSuggestionOutcome> GetHostnameSuggestionOutcomeCallable;
        typedef std::future<GrantAccessOutcome> GrantAccessOutcomeCallable;
        typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
        typedef std::future<RebootInstanceOutcome> RebootInstanceOutcomeCallable;
        typedef std::future<RegisterEcsClusterOutcome> RegisterEcsClusterOutcomeCallable;
        typedef std::future<RegisterElasticIpOutcome> RegisterElasticIpOutcomeCallable;
        typedef std::future<RegisterInstanceOutcome> RegisterInstanceOutcomeCallable;
        typedef std::future<RegisterRdsDbInstanceOutcome> RegisterRdsDbInstanceOutcomeCallable;
        typedef std::future<RegisterVolumeOutcome> RegisterVolumeOutcomeCallable;
        typedef std::future<SetLoadBasedAutoScalingOutcome> SetLoadBasedAutoScalingOutcomeCallable;
        typedef std::future<SetPermissionOutcome> SetPermissionOutcomeCallable;
        typedef std::future<SetTimeBasedAutoScalingOutcome> SetTimeBasedAutoScalingOutcomeCallable;
        typedef std::future<StartInstanceOutcome> StartInstanceOutcomeCallable;
        typedef std::future<StartStackOutcome> StartStackOutcomeCallable;
        typedef std::future<StopInstanceOutcome> StopInstanceOutcomeCallable;
        typedef std::future<StopStackOutcome> StopStackOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UnassignInstanceOutcome> UnassignInstanceOutcomeCallable;
        typedef std::future<UnassignVolumeOutcome> UnassignVolumeOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateAppOutcome> UpdateAppOutcomeCallable;
        typedef std::future<UpdateElasticIpOutcome> UpdateElasticIpOutcomeCallable;
        typedef std::future<UpdateInstanceOutcome> UpdateInstanceOutcomeCallable;
        typedef std::future<UpdateLayerOutcome> UpdateLayerOutcomeCallable;
        typedef std::future<UpdateMyUserProfileOutcome> UpdateMyUserProfileOutcomeCallable;
        typedef std::future<UpdateRdsDbInstanceOutcome> UpdateRdsDbInstanceOutcomeCallable;
        typedef std::future<UpdateStackOutcome> UpdateStackOutcomeCallable;
        typedef std::future<UpdateUserProfileOutcome> UpdateUserProfileOutcomeCallable;
        typedef std::future<UpdateVolumeOutcome> UpdateVolumeOutcomeCallable;
} // namespace Model

  class OpsWorksClient;

    typedef std::function<void(const OpsWorksClient*, const Model::AssignInstanceRequest&, const Model::AssignInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssignInstanceResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::AssignVolumeRequest&, const Model::AssignVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssignVolumeResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::AssociateElasticIpRequest&, const Model::AssociateElasticIpOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateElasticIpResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::AttachElasticLoadBalancerRequest&, const Model::AttachElasticLoadBalancerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AttachElasticLoadBalancerResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::CloneStackRequest&, const Model::CloneStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CloneStackResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::CreateAppRequest&, const Model::CreateAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAppResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::CreateDeploymentRequest&, const Model::CreateDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeploymentResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::CreateInstanceRequest&, const Model::CreateInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInstanceResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::CreateLayerRequest&, const Model::CreateLayerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLayerResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::CreateStackRequest&, const Model::CreateStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStackResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::CreateUserProfileRequest&, const Model::CreateUserProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserProfileResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DeleteAppRequest&, const Model::DeleteAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAppResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DeleteInstanceRequest&, const Model::DeleteInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInstanceResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DeleteLayerRequest&, const Model::DeleteLayerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLayerResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DeleteStackRequest&, const Model::DeleteStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStackResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DeleteUserProfileRequest&, const Model::DeleteUserProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserProfileResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DeregisterEcsClusterRequest&, const Model::DeregisterEcsClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterEcsClusterResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DeregisterElasticIpRequest&, const Model::DeregisterElasticIpOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterElasticIpResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DeregisterInstanceRequest&, const Model::DeregisterInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterInstanceResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DeregisterRdsDbInstanceRequest&, const Model::DeregisterRdsDbInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterRdsDbInstanceResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DeregisterVolumeRequest&, const Model::DeregisterVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeregisterVolumeResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeAgentVersionsRequest&, const Model::DescribeAgentVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAgentVersionsResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeAppsRequest&, const Model::DescribeAppsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAppsResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeCommandsRequest&, const Model::DescribeCommandsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCommandsResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeDeploymentsRequest&, const Model::DescribeDeploymentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDeploymentsResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeEcsClustersRequest&, const Model::DescribeEcsClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEcsClustersResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeElasticIpsRequest&, const Model::DescribeElasticIpsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeElasticIpsResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeElasticLoadBalancersRequest&, const Model::DescribeElasticLoadBalancersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeElasticLoadBalancersResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeInstancesRequest&, const Model::DescribeInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstancesResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeLayersRequest&, const Model::DescribeLayersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLayersResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeLoadBasedAutoScalingRequest&, const Model::DescribeLoadBasedAutoScalingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLoadBasedAutoScalingResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeMyUserProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMyUserProfileResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeOperatingSystemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOperatingSystemsResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribePermissionsRequest&, const Model::DescribePermissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePermissionsResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeRaidArraysRequest&, const Model::DescribeRaidArraysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRaidArraysResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeRdsDbInstancesRequest&, const Model::DescribeRdsDbInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRdsDbInstancesResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeServiceErrorsRequest&, const Model::DescribeServiceErrorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeServiceErrorsResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeStackProvisioningParametersRequest&, const Model::DescribeStackProvisioningParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStackProvisioningParametersResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeStackSummaryRequest&, const Model::DescribeStackSummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStackSummaryResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeStacksRequest&, const Model::DescribeStacksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeStacksResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeTimeBasedAutoScalingRequest&, const Model::DescribeTimeBasedAutoScalingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTimeBasedAutoScalingResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeUserProfilesRequest&, const Model::DescribeUserProfilesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUserProfilesResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DescribeVolumesRequest&, const Model::DescribeVolumesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVolumesResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DetachElasticLoadBalancerRequest&, const Model::DetachElasticLoadBalancerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetachElasticLoadBalancerResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::DisassociateElasticIpRequest&, const Model::DisassociateElasticIpOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateElasticIpResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::GetHostnameSuggestionRequest&, const Model::GetHostnameSuggestionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetHostnameSuggestionResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::GrantAccessRequest&, const Model::GrantAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GrantAccessResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::ListTagsRequest&, const Model::ListTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::RebootInstanceRequest&, const Model::RebootInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebootInstanceResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::RegisterEcsClusterRequest&, const Model::RegisterEcsClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterEcsClusterResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::RegisterElasticIpRequest&, const Model::RegisterElasticIpOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterElasticIpResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::RegisterInstanceRequest&, const Model::RegisterInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterInstanceResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::RegisterRdsDbInstanceRequest&, const Model::RegisterRdsDbInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterRdsDbInstanceResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::RegisterVolumeRequest&, const Model::RegisterVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RegisterVolumeResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::SetLoadBasedAutoScalingRequest&, const Model::SetLoadBasedAutoScalingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetLoadBasedAutoScalingResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::SetPermissionRequest&, const Model::SetPermissionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetPermissionResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::SetTimeBasedAutoScalingRequest&, const Model::SetTimeBasedAutoScalingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SetTimeBasedAutoScalingResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::StartInstanceRequest&, const Model::StartInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartInstanceResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::StartStackRequest&, const Model::StartStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartStackResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::StopInstanceRequest&, const Model::StopInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopInstanceResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::StopStackRequest&, const Model::StopStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopStackResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::UnassignInstanceRequest&, const Model::UnassignInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UnassignInstanceResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::UnassignVolumeRequest&, const Model::UnassignVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UnassignVolumeResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::UpdateAppRequest&, const Model::UpdateAppOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAppResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::UpdateElasticIpRequest&, const Model::UpdateElasticIpOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateElasticIpResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::UpdateInstanceRequest&, const Model::UpdateInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInstanceResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::UpdateLayerRequest&, const Model::UpdateLayerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLayerResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::UpdateMyUserProfileRequest&, const Model::UpdateMyUserProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMyUserProfileResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::UpdateRdsDbInstanceRequest&, const Model::UpdateRdsDbInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRdsDbInstanceResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::UpdateStackRequest&, const Model::UpdateStackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateStackResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::UpdateUserProfileRequest&, const Model::UpdateUserProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserProfileResponseReceivedHandler;
    typedef std::function<void(const OpsWorksClient*, const Model::UpdateVolumeRequest&, const Model::UpdateVolumeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVolumeResponseReceivedHandler;

  /**
   * <fullname>AWS OpsWorks</fullname> <p>Welcome to the <i>AWS OpsWorks Stacks API
   * Reference</i>. This guide provides descriptions, syntax, and usage examples for
   * AWS OpsWorks Stacks actions and data types, including common parameters and
   * error codes. </p> <p>AWS OpsWorks Stacks is an application management service
   * that provides an integrated experience for overseeing the complete application
   * lifecycle. For information about this product, go to the <a
   * href="http://aws.amazon.com/opsworks/">AWS OpsWorks</a> details page. </p> <p>
   * <b>SDKs and CLI</b> </p> <p>The most common way to use the AWS OpsWorks Stacks
   * API is by using the AWS Command Line Interface (CLI) or by using one of the AWS
   * SDKs to implement applications in your preferred language. For more information,
   * see:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-chap-welcome.html">AWS
   * CLI</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/AWSJavaSDK/latest/javadoc/com/amazonaws/services/opsworks/AWSOpsWorksClient.html">AWS
   * SDK for Java</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/sdkfornet/latest/apidocs/html/N_Amazon_OpsWorks.htm">AWS
   * SDK for .NET</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/aws-sdk-php-2/latest/class-Aws.OpsWorks.OpsWorksClient.html">AWS
   * SDK for PHP 2</a> </p> </li> <li> <p> <a
   * href="http://docs.aws.amazon.com/sdkforruby/api/">AWS SDK for Ruby</a> </p>
   * </li> <li> <p> <a
   * href="http://aws.amazon.com/documentation/sdkforjavascript/">AWS SDK for
   * Node.js</a> </p> </li> <li> <p> <a
   * href="http://docs.pythonboto.org/en/latest/ref/opsworks.html">AWS SDK for
   * Python(Boto)</a> </p> </li> </ul> <p> <b>Endpoints</b> </p> <p>AWS OpsWorks
   * Stacks supports the following endpoints, all HTTPS. You must connect to one of
   * the following endpoints. Stacks can only be accessed or managed within the
   * endpoint in which they are created.</p> <ul> <li>
   * <p>opsworks.us-east-1.amazonaws.com</p> </li> <li>
   * <p>opsworks.us-east-2.amazonaws.com</p> </li> <li>
   * <p>opsworks.us-west-1.amazonaws.com</p> </li> <li>
   * <p>opsworks.us-west-2.amazonaws.com</p> </li> <li>
   * <p>opsworks.ca-central-1.amazonaws.com (API only; not available in the AWS
   * console)</p> </li> <li> <p>opsworks.eu-west-1.amazonaws.com</p> </li> <li>
   * <p>opsworks.eu-west-2.amazonaws.com</p> </li> <li>
   * <p>opsworks.eu-west-3.amazonaws.com</p> </li> <li>
   * <p>opsworks.eu-central-1.amazonaws.com</p> </li> <li>
   * <p>opsworks.ap-northeast-1.amazonaws.com</p> </li> <li>
   * <p>opsworks.ap-northeast-2.amazonaws.com</p> </li> <li>
   * <p>opsworks.ap-south-1.amazonaws.com</p> </li> <li>
   * <p>opsworks.ap-southeast-1.amazonaws.com</p> </li> <li>
   * <p>opsworks.ap-southeast-2.amazonaws.com</p> </li> <li>
   * <p>opsworks.sa-east-1.amazonaws.com</p> </li> </ul> <p> <b>Chef Versions</b>
   * </p> <p>When you call <a>CreateStack</a>, <a>CloneStack</a>, or
   * <a>UpdateStack</a> we recommend you use the <code>ConfigurationManager</code>
   * parameter to specify the Chef version. The recommended and default value for
   * Linux stacks is currently 12. Windows stacks use Chef 12.2. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingcookbook-chef11.html">Chef
   * Versions</a>.</p> <note> <p>You can specify Chef 12, 11.10, or 11.4 for your
   * Linux stack. We recommend migrating your existing Linux stacks to Chef 12 as
   * soon as possible.</p> </note>
   */
  class AWS_OPSWORKS_API OpsWorksClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OpsWorksClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        OpsWorksClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        OpsWorksClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~OpsWorksClient();

        inline virtual const char* GetServiceClientName() const override { return "OpsWorks"; }


        /**
         * <p>Assign a registered instance to a layer.</p> <ul> <li> <p>You can assign
         * registered on-premises instances to any layer type.</p> </li> <li> <p>You can
         * assign registered Amazon EC2 instances only to custom layers.</p> </li> <li>
         * <p>You cannot use this action with instances that were created with AWS OpsWorks
         * Stacks.</p> </li> </ul> <p> <b>Required Permissions</b>: To use this action, an
         * AWS Identity and Access Management (IAM) user must have a Manage permissions
         * level for the stack or an attached policy that explicitly grants permissions.
         * For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/AssignInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::AssignInstanceOutcome AssignInstance(const Model::AssignInstanceRequest& request) const;

        /**
         * <p>Assign a registered instance to a layer.</p> <ul> <li> <p>You can assign
         * registered on-premises instances to any layer type.</p> </li> <li> <p>You can
         * assign registered Amazon EC2 instances only to custom layers.</p> </li> <li>
         * <p>You cannot use this action with instances that were created with AWS OpsWorks
         * Stacks.</p> </li> </ul> <p> <b>Required Permissions</b>: To use this action, an
         * AWS Identity and Access Management (IAM) user must have a Manage permissions
         * level for the stack or an attached policy that explicitly grants permissions.
         * For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/AssignInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssignInstanceOutcomeCallable AssignInstanceCallable(const Model::AssignInstanceRequest& request) const;

        /**
         * <p>Assign a registered instance to a layer.</p> <ul> <li> <p>You can assign
         * registered on-premises instances to any layer type.</p> </li> <li> <p>You can
         * assign registered Amazon EC2 instances only to custom layers.</p> </li> <li>
         * <p>You cannot use this action with instances that were created with AWS OpsWorks
         * Stacks.</p> </li> </ul> <p> <b>Required Permissions</b>: To use this action, an
         * AWS Identity and Access Management (IAM) user must have a Manage permissions
         * level for the stack or an attached policy that explicitly grants permissions.
         * For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/AssignInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssignInstanceAsync(const Model::AssignInstanceRequest& request, const AssignInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Assigns one of the stack's registered Amazon EBS volumes to a specified
         * instance. The volume must first be registered with the stack by calling
         * <a>RegisterVolume</a>. After you register the volume, you must call
         * <a>UpdateVolume</a> to specify a mount point before calling
         * <code>AssignVolume</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/AssignVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::AssignVolumeOutcome AssignVolume(const Model::AssignVolumeRequest& request) const;

        /**
         * <p>Assigns one of the stack's registered Amazon EBS volumes to a specified
         * instance. The volume must first be registered with the stack by calling
         * <a>RegisterVolume</a>. After you register the volume, you must call
         * <a>UpdateVolume</a> to specify a mount point before calling
         * <code>AssignVolume</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/AssignVolume">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssignVolumeOutcomeCallable AssignVolumeCallable(const Model::AssignVolumeRequest& request) const;

        /**
         * <p>Assigns one of the stack's registered Amazon EBS volumes to a specified
         * instance. The volume must first be registered with the stack by calling
         * <a>RegisterVolume</a>. After you register the volume, you must call
         * <a>UpdateVolume</a> to specify a mount point before calling
         * <code>AssignVolume</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/AssignVolume">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssignVolumeAsync(const Model::AssignVolumeRequest& request, const AssignVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates one of the stack's registered Elastic IP addresses with a
         * specified instance. The address must first be registered with the stack by
         * calling <a>RegisterElasticIp</a>. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/AssociateElasticIp">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateElasticIpOutcome AssociateElasticIp(const Model::AssociateElasticIpRequest& request) const;

        /**
         * <p>Associates one of the stack's registered Elastic IP addresses with a
         * specified instance. The address must first be registered with the stack by
         * calling <a>RegisterElasticIp</a>. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/AssociateElasticIp">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateElasticIpOutcomeCallable AssociateElasticIpCallable(const Model::AssociateElasticIpRequest& request) const;

        /**
         * <p>Associates one of the stack's registered Elastic IP addresses with a
         * specified instance. The address must first be registered with the stack by
         * calling <a>RegisterElasticIp</a>. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/AssociateElasticIp">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateElasticIpAsync(const Model::AssociateElasticIpRequest& request, const AssociateElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches an Elastic Load Balancing load balancer to a specified layer. AWS
         * OpsWorks Stacks does not support Application Load Balancer. You can only use
         * Classic Load Balancer with AWS OpsWorks Stacks. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/layers-elb.html">Elastic
         * Load Balancing</a>.</p> <note> <p>You must create the Elastic Load Balancing
         * instance separately, by using the Elastic Load Balancing console, API, or CLI.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/Welcome.html">
         * Elastic Load Balancing Developer Guide</a>.</p> </note> <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Manage permissions
         * level for the stack, or an attached policy that explicitly grants permissions.
         * For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/AttachElasticLoadBalancer">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachElasticLoadBalancerOutcome AttachElasticLoadBalancer(const Model::AttachElasticLoadBalancerRequest& request) const;

        /**
         * <p>Attaches an Elastic Load Balancing load balancer to a specified layer. AWS
         * OpsWorks Stacks does not support Application Load Balancer. You can only use
         * Classic Load Balancer with AWS OpsWorks Stacks. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/layers-elb.html">Elastic
         * Load Balancing</a>.</p> <note> <p>You must create the Elastic Load Balancing
         * instance separately, by using the Elastic Load Balancing console, API, or CLI.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/Welcome.html">
         * Elastic Load Balancing Developer Guide</a>.</p> </note> <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Manage permissions
         * level for the stack, or an attached policy that explicitly grants permissions.
         * For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/AttachElasticLoadBalancer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachElasticLoadBalancerOutcomeCallable AttachElasticLoadBalancerCallable(const Model::AttachElasticLoadBalancerRequest& request) const;

        /**
         * <p>Attaches an Elastic Load Balancing load balancer to a specified layer. AWS
         * OpsWorks Stacks does not support Application Load Balancer. You can only use
         * Classic Load Balancer with AWS OpsWorks Stacks. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/layers-elb.html">Elastic
         * Load Balancing</a>.</p> <note> <p>You must create the Elastic Load Balancing
         * instance separately, by using the Elastic Load Balancing console, API, or CLI.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/Welcome.html">
         * Elastic Load Balancing Developer Guide</a>.</p> </note> <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Manage permissions
         * level for the stack, or an attached policy that explicitly grants permissions.
         * For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/AttachElasticLoadBalancer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachElasticLoadBalancerAsync(const Model::AttachElasticLoadBalancerRequest& request, const AttachElasticLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a clone of a specified stack. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-cloning.html">Clone
         * a Stack</a>. By default, all parameters are set to the values used by the parent
         * stack.</p> <p> <b>Required Permissions</b>: To use this action, an IAM user must
         * have an attached policy that explicitly grants permissions. For more information
         * about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/CloneStack">AWS
         * API Reference</a></p>
         */
        virtual Model::CloneStackOutcome CloneStack(const Model::CloneStackRequest& request) const;

        /**
         * <p>Creates a clone of a specified stack. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-cloning.html">Clone
         * a Stack</a>. By default, all parameters are set to the values used by the parent
         * stack.</p> <p> <b>Required Permissions</b>: To use this action, an IAM user must
         * have an attached policy that explicitly grants permissions. For more information
         * about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/CloneStack">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CloneStackOutcomeCallable CloneStackCallable(const Model::CloneStackRequest& request) const;

        /**
         * <p>Creates a clone of a specified stack. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-cloning.html">Clone
         * a Stack</a>. By default, all parameters are set to the values used by the parent
         * stack.</p> <p> <b>Required Permissions</b>: To use this action, an IAM user must
         * have an attached policy that explicitly grants permissions. For more information
         * about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/CloneStack">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CloneStackAsync(const Model::CloneStackRequest& request, const CloneStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an app for a specified stack. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingapps-creating.html">Creating
         * Apps</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM user
         * must have a Manage permissions level for the stack, or an attached policy that
         * explicitly grants permissions. For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/CreateApp">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAppOutcome CreateApp(const Model::CreateAppRequest& request) const;

        /**
         * <p>Creates an app for a specified stack. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingapps-creating.html">Creating
         * Apps</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM user
         * must have a Manage permissions level for the stack, or an attached policy that
         * explicitly grants permissions. For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/CreateApp">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAppOutcomeCallable CreateAppCallable(const Model::CreateAppRequest& request) const;

        /**
         * <p>Creates an app for a specified stack. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingapps-creating.html">Creating
         * Apps</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM user
         * must have a Manage permissions level for the stack, or an attached policy that
         * explicitly grants permissions. For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/CreateApp">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAppAsync(const Model::CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Runs deployment or stack commands. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingapps-deploying.html">Deploying
         * Apps</a> and <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-commands.html">Run
         * Stack Commands</a>.</p> <p> <b>Required Permissions</b>: To use this action, an
         * IAM user must have a Deploy or Manage permissions level for the stack, or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/CreateDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeploymentOutcome CreateDeployment(const Model::CreateDeploymentRequest& request) const;

        /**
         * <p>Runs deployment or stack commands. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingapps-deploying.html">Deploying
         * Apps</a> and <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-commands.html">Run
         * Stack Commands</a>.</p> <p> <b>Required Permissions</b>: To use this action, an
         * IAM user must have a Deploy or Manage permissions level for the stack, or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/CreateDeployment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDeploymentOutcomeCallable CreateDeploymentCallable(const Model::CreateDeploymentRequest& request) const;

        /**
         * <p>Runs deployment or stack commands. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingapps-deploying.html">Deploying
         * Apps</a> and <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-commands.html">Run
         * Stack Commands</a>.</p> <p> <b>Required Permissions</b>: To use this action, an
         * IAM user must have a Deploy or Manage permissions level for the stack, or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/CreateDeployment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDeploymentAsync(const Model::CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an instance in a specified stack. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-add.html">Adding
         * an Instance to a Layer</a>.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack, or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/CreateInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInstanceOutcome CreateInstance(const Model::CreateInstanceRequest& request) const;

        /**
         * <p>Creates an instance in a specified stack. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-add.html">Adding
         * an Instance to a Layer</a>.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack, or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/CreateInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateInstanceOutcomeCallable CreateInstanceCallable(const Model::CreateInstanceRequest& request) const;

        /**
         * <p>Creates an instance in a specified stack. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-add.html">Adding
         * an Instance to a Layer</a>.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack, or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/CreateInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateInstanceAsync(const Model::CreateInstanceRequest& request, const CreateInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a layer. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-basics-create.html">How
         * to Create a Layer</a>.</p> <note> <p>You should use <b>CreateLayer</b> for
         * noncustom layer types such as PHP App Server only if the stack does not have an
         * existing layer of that type. A stack can have at most one instance of each
         * noncustom layer; if you attempt to create a second instance, <b>CreateLayer</b>
         * fails. A stack can have an arbitrary number of custom layers, so you can call
         * <b>CreateLayer</b> as many times as you like for that layer type.</p> </note>
         * <p> <b>Required Permissions</b>: To use this action, an IAM user must have a
         * Manage permissions level for the stack, or an attached policy that explicitly
         * grants permissions. For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/CreateLayer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLayerOutcome CreateLayer(const Model::CreateLayerRequest& request) const;

        /**
         * <p>Creates a layer. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-basics-create.html">How
         * to Create a Layer</a>.</p> <note> <p>You should use <b>CreateLayer</b> for
         * noncustom layer types such as PHP App Server only if the stack does not have an
         * existing layer of that type. A stack can have at most one instance of each
         * noncustom layer; if you attempt to create a second instance, <b>CreateLayer</b>
         * fails. A stack can have an arbitrary number of custom layers, so you can call
         * <b>CreateLayer</b> as many times as you like for that layer type.</p> </note>
         * <p> <b>Required Permissions</b>: To use this action, an IAM user must have a
         * Manage permissions level for the stack, or an attached policy that explicitly
         * grants permissions. For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/CreateLayer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLayerOutcomeCallable CreateLayerCallable(const Model::CreateLayerRequest& request) const;

        /**
         * <p>Creates a layer. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-basics-create.html">How
         * to Create a Layer</a>.</p> <note> <p>You should use <b>CreateLayer</b> for
         * noncustom layer types such as PHP App Server only if the stack does not have an
         * existing layer of that type. A stack can have at most one instance of each
         * noncustom layer; if you attempt to create a second instance, <b>CreateLayer</b>
         * fails. A stack can have an arbitrary number of custom layers, so you can call
         * <b>CreateLayer</b> as many times as you like for that layer type.</p> </note>
         * <p> <b>Required Permissions</b>: To use this action, an IAM user must have a
         * Manage permissions level for the stack, or an attached policy that explicitly
         * grants permissions. For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/CreateLayer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLayerAsync(const Model::CreateLayerRequest& request, const CreateLayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new stack. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-edit.html">Create
         * a New Stack</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have an attached policy that explicitly grants permissions. For more
         * information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/CreateStack">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStackOutcome CreateStack(const Model::CreateStackRequest& request) const;

        /**
         * <p>Creates a new stack. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-edit.html">Create
         * a New Stack</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have an attached policy that explicitly grants permissions. For more
         * information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/CreateStack">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStackOutcomeCallable CreateStackCallable(const Model::CreateStackRequest& request) const;

        /**
         * <p>Creates a new stack. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-edit.html">Create
         * a New Stack</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have an attached policy that explicitly grants permissions. For more
         * information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/CreateStack">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStackAsync(const Model::CreateStackRequest& request, const CreateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new user profile.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have an attached policy that explicitly grants
         * permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/CreateUserProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateUserProfileOutcome CreateUserProfile(const Model::CreateUserProfileRequest& request) const;

        /**
         * <p>Creates a new user profile.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have an attached policy that explicitly grants
         * permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/CreateUserProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateUserProfileOutcomeCallable CreateUserProfileCallable(const Model::CreateUserProfileRequest& request) const;

        /**
         * <p>Creates a new user profile.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have an attached policy that explicitly grants
         * permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/CreateUserProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateUserProfileAsync(const Model::CreateUserProfileRequest& request, const CreateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified app.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack, or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeleteApp">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppOutcome DeleteApp(const Model::DeleteAppRequest& request) const;

        /**
         * <p>Deletes a specified app.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack, or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeleteApp">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAppOutcomeCallable DeleteAppCallable(const Model::DeleteAppRequest& request) const;

        /**
         * <p>Deletes a specified app.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack, or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeleteApp">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAppAsync(const Model::DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified instance, which terminates the associated Amazon EC2
         * instance. You must stop an instance before you can delete it.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-delete.html">Deleting
         * Instances</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeleteInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInstanceOutcome DeleteInstance(const Model::DeleteInstanceRequest& request) const;

        /**
         * <p>Deletes a specified instance, which terminates the associated Amazon EC2
         * instance. You must stop an instance before you can delete it.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-delete.html">Deleting
         * Instances</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeleteInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteInstanceOutcomeCallable DeleteInstanceCallable(const Model::DeleteInstanceRequest& request) const;

        /**
         * <p>Deletes a specified instance, which terminates the associated Amazon EC2
         * instance. You must stop an instance before you can delete it.</p> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-delete.html">Deleting
         * Instances</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeleteInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteInstanceAsync(const Model::DeleteInstanceRequest& request, const DeleteInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified layer. You must first stop and then delete all associated
         * instances or unassign registered instances. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-basics-delete.html">How
         * to Delete a Layer</a>.</p> <p> <b>Required Permissions</b>: To use this action,
         * an IAM user must have a Manage permissions level for the stack, or an attached
         * policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeleteLayer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLayerOutcome DeleteLayer(const Model::DeleteLayerRequest& request) const;

        /**
         * <p>Deletes a specified layer. You must first stop and then delete all associated
         * instances or unassign registered instances. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-basics-delete.html">How
         * to Delete a Layer</a>.</p> <p> <b>Required Permissions</b>: To use this action,
         * an IAM user must have a Manage permissions level for the stack, or an attached
         * policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeleteLayer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLayerOutcomeCallable DeleteLayerCallable(const Model::DeleteLayerRequest& request) const;

        /**
         * <p>Deletes a specified layer. You must first stop and then delete all associated
         * instances or unassign registered instances. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-basics-delete.html">How
         * to Delete a Layer</a>.</p> <p> <b>Required Permissions</b>: To use this action,
         * an IAM user must have a Manage permissions level for the stack, or an attached
         * policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeleteLayer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLayerAsync(const Model::DeleteLayerRequest& request, const DeleteLayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified stack. You must first delete all instances, layers, and
         * apps or deregister registered instances. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-shutting.html">Shut
         * Down a Stack</a>.</p> <p> <b>Required Permissions</b>: To use this action, an
         * IAM user must have a Manage permissions level for the stack, or an attached
         * policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeleteStack">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStackOutcome DeleteStack(const Model::DeleteStackRequest& request) const;

        /**
         * <p>Deletes a specified stack. You must first delete all instances, layers, and
         * apps or deregister registered instances. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-shutting.html">Shut
         * Down a Stack</a>.</p> <p> <b>Required Permissions</b>: To use this action, an
         * IAM user must have a Manage permissions level for the stack, or an attached
         * policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeleteStack">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStackOutcomeCallable DeleteStackCallable(const Model::DeleteStackRequest& request) const;

        /**
         * <p>Deletes a specified stack. You must first delete all instances, layers, and
         * apps or deregister registered instances. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-shutting.html">Shut
         * Down a Stack</a>.</p> <p> <b>Required Permissions</b>: To use this action, an
         * IAM user must have a Manage permissions level for the stack, or an attached
         * policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeleteStack">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStackAsync(const Model::DeleteStackRequest& request, const DeleteStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a user profile.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have an attached policy that explicitly grants
         * permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeleteUserProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteUserProfileOutcome DeleteUserProfile(const Model::DeleteUserProfileRequest& request) const;

        /**
         * <p>Deletes a user profile.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have an attached policy that explicitly grants
         * permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeleteUserProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteUserProfileOutcomeCallable DeleteUserProfileCallable(const Model::DeleteUserProfileRequest& request) const;

        /**
         * <p>Deletes a user profile.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have an attached policy that explicitly grants
         * permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeleteUserProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteUserProfileAsync(const Model::DeleteUserProfileRequest& request, const DeleteUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deregisters a specified Amazon ECS cluster from a stack. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-ecscluster.html#workinglayers-ecscluster-delete">
         * Resource Management</a>.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeregisterEcsCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterEcsClusterOutcome DeregisterEcsCluster(const Model::DeregisterEcsClusterRequest& request) const;

        /**
         * <p>Deregisters a specified Amazon ECS cluster from a stack. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-ecscluster.html#workinglayers-ecscluster-delete">
         * Resource Management</a>.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeregisterEcsCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterEcsClusterOutcomeCallable DeregisterEcsClusterCallable(const Model::DeregisterEcsClusterRequest& request) const;

        /**
         * <p>Deregisters a specified Amazon ECS cluster from a stack. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-ecscluster.html#workinglayers-ecscluster-delete">
         * Resource Management</a>.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeregisterEcsCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterEcsClusterAsync(const Model::DeregisterEcsClusterRequest& request, const DeregisterEcsClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deregisters a specified Elastic IP address. The address can then be
         * registered by another stack. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeregisterElasticIp">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterElasticIpOutcome DeregisterElasticIp(const Model::DeregisterElasticIpRequest& request) const;

        /**
         * <p>Deregisters a specified Elastic IP address. The address can then be
         * registered by another stack. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeregisterElasticIp">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterElasticIpOutcomeCallable DeregisterElasticIpCallable(const Model::DeregisterElasticIpRequest& request) const;

        /**
         * <p>Deregisters a specified Elastic IP address. The address can then be
         * registered by another stack. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeregisterElasticIp">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterElasticIpAsync(const Model::DeregisterElasticIpRequest& request, const DeregisterElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deregister a registered Amazon EC2 or on-premises instance. This action
         * removes the instance from the stack and returns it to your control. This action
         * cannot be used with instances that were created with AWS OpsWorks Stacks.</p>
         * <p> <b>Required Permissions</b>: To use this action, an IAM user must have a
         * Manage permissions level for the stack or an attached policy that explicitly
         * grants permissions. For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeregisterInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterInstanceOutcome DeregisterInstance(const Model::DeregisterInstanceRequest& request) const;

        /**
         * <p>Deregister a registered Amazon EC2 or on-premises instance. This action
         * removes the instance from the stack and returns it to your control. This action
         * cannot be used with instances that were created with AWS OpsWorks Stacks.</p>
         * <p> <b>Required Permissions</b>: To use this action, an IAM user must have a
         * Manage permissions level for the stack or an attached policy that explicitly
         * grants permissions. For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeregisterInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterInstanceOutcomeCallable DeregisterInstanceCallable(const Model::DeregisterInstanceRequest& request) const;

        /**
         * <p>Deregister a registered Amazon EC2 or on-premises instance. This action
         * removes the instance from the stack and returns it to your control. This action
         * cannot be used with instances that were created with AWS OpsWorks Stacks.</p>
         * <p> <b>Required Permissions</b>: To use this action, an IAM user must have a
         * Manage permissions level for the stack or an attached policy that explicitly
         * grants permissions. For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeregisterInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterInstanceAsync(const Model::DeregisterInstanceRequest& request, const DeregisterInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deregisters an Amazon RDS instance.</p> <p> <b>Required Permissions</b>: To
         * use this action, an IAM user must have a Manage permissions level for the stack,
         * or an attached policy that explicitly grants permissions. For more information
         * on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeregisterRdsDbInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterRdsDbInstanceOutcome DeregisterRdsDbInstance(const Model::DeregisterRdsDbInstanceRequest& request) const;

        /**
         * <p>Deregisters an Amazon RDS instance.</p> <p> <b>Required Permissions</b>: To
         * use this action, an IAM user must have a Manage permissions level for the stack,
         * or an attached policy that explicitly grants permissions. For more information
         * on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeregisterRdsDbInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterRdsDbInstanceOutcomeCallable DeregisterRdsDbInstanceCallable(const Model::DeregisterRdsDbInstanceRequest& request) const;

        /**
         * <p>Deregisters an Amazon RDS instance.</p> <p> <b>Required Permissions</b>: To
         * use this action, an IAM user must have a Manage permissions level for the stack,
         * or an attached policy that explicitly grants permissions. For more information
         * on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeregisterRdsDbInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterRdsDbInstanceAsync(const Model::DeregisterRdsDbInstanceRequest& request, const DeregisterRdsDbInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deregisters an Amazon EBS volume. The volume can then be registered by
         * another stack. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeregisterVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterVolumeOutcome DeregisterVolume(const Model::DeregisterVolumeRequest& request) const;

        /**
         * <p>Deregisters an Amazon EBS volume. The volume can then be registered by
         * another stack. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeregisterVolume">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeregisterVolumeOutcomeCallable DeregisterVolumeCallable(const Model::DeregisterVolumeRequest& request) const;

        /**
         * <p>Deregisters an Amazon EBS volume. The volume can then be registered by
         * another stack. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DeregisterVolume">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeregisterVolumeAsync(const Model::DeregisterVolumeRequest& request, const DeregisterVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the available AWS OpsWorks Stacks agent versions. You must specify
         * a stack ID or a configuration manager. <code>DescribeAgentVersions</code>
         * returns a list of available agent versions for the specified stack or
         * configuration manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeAgentVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAgentVersionsOutcome DescribeAgentVersions(const Model::DescribeAgentVersionsRequest& request) const;

        /**
         * <p>Describes the available AWS OpsWorks Stacks agent versions. You must specify
         * a stack ID or a configuration manager. <code>DescribeAgentVersions</code>
         * returns a list of available agent versions for the specified stack or
         * configuration manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeAgentVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAgentVersionsOutcomeCallable DescribeAgentVersionsCallable(const Model::DescribeAgentVersionsRequest& request) const;

        /**
         * <p>Describes the available AWS OpsWorks Stacks agent versions. You must specify
         * a stack ID or a configuration manager. <code>DescribeAgentVersions</code>
         * returns a list of available agent versions for the specified stack or
         * configuration manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeAgentVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAgentVersionsAsync(const Model::DescribeAgentVersionsRequest& request, const DescribeAgentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests a description of a specified set of apps.</p> <note> <p>This call
         * accepts only one resource-identifying parameter.</p> </note> <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or
         * Manage permissions level for the stack, or an attached policy that explicitly
         * grants permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeApps">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppsOutcome DescribeApps(const Model::DescribeAppsRequest& request) const;

        /**
         * <p>Requests a description of a specified set of apps.</p> <note> <p>This call
         * accepts only one resource-identifying parameter.</p> </note> <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or
         * Manage permissions level for the stack, or an attached policy that explicitly
         * grants permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeApps">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAppsOutcomeCallable DescribeAppsCallable(const Model::DescribeAppsRequest& request) const;

        /**
         * <p>Requests a description of a specified set of apps.</p> <note> <p>This call
         * accepts only one resource-identifying parameter.</p> </note> <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or
         * Manage permissions level for the stack, or an attached policy that explicitly
         * grants permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeApps">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAppsAsync(const Model::DescribeAppsRequest& request, const DescribeAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the results of specified commands.</p> <note> <p>This call accepts
         * only one resource-identifying parameter.</p> </note> <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or
         * Manage permissions level for the stack, or an attached policy that explicitly
         * grants permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeCommands">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCommandsOutcome DescribeCommands(const Model::DescribeCommandsRequest& request) const;

        /**
         * <p>Describes the results of specified commands.</p> <note> <p>This call accepts
         * only one resource-identifying parameter.</p> </note> <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or
         * Manage permissions level for the stack, or an attached policy that explicitly
         * grants permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeCommands">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCommandsOutcomeCallable DescribeCommandsCallable(const Model::DescribeCommandsRequest& request) const;

        /**
         * <p>Describes the results of specified commands.</p> <note> <p>This call accepts
         * only one resource-identifying parameter.</p> </note> <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or
         * Manage permissions level for the stack, or an attached policy that explicitly
         * grants permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeCommands">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCommandsAsync(const Model::DescribeCommandsRequest& request, const DescribeCommandsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests a description of a specified set of deployments.</p> <note> <p>This
         * call accepts only one resource-identifying parameter.</p> </note> <p>
         * <b>Required Permissions</b>: To use this action, an IAM user must have a Show,
         * Deploy, or Manage permissions level for the stack, or an attached policy that
         * explicitly grants permissions. For more information about user permissions, see
         * <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDeploymentsOutcome DescribeDeployments(const Model::DescribeDeploymentsRequest& request) const;

        /**
         * <p>Requests a description of a specified set of deployments.</p> <note> <p>This
         * call accepts only one resource-identifying parameter.</p> </note> <p>
         * <b>Required Permissions</b>: To use this action, an IAM user must have a Show,
         * Deploy, or Manage permissions level for the stack, or an attached policy that
         * explicitly grants permissions. For more information about user permissions, see
         * <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeDeployments">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDeploymentsOutcomeCallable DescribeDeploymentsCallable(const Model::DescribeDeploymentsRequest& request) const;

        /**
         * <p>Requests a description of a specified set of deployments.</p> <note> <p>This
         * call accepts only one resource-identifying parameter.</p> </note> <p>
         * <b>Required Permissions</b>: To use this action, an IAM user must have a Show,
         * Deploy, or Manage permissions level for the stack, or an attached policy that
         * explicitly grants permissions. For more information about user permissions, see
         * <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeDeployments">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDeploymentsAsync(const Model::DescribeDeploymentsRequest& request, const DescribeDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes Amazon ECS clusters that are registered with a stack. If you
         * specify only a stack ID, you can use the <code>MaxResults</code> and
         * <code>NextToken</code> parameters to paginate the response. However, AWS
         * OpsWorks Stacks currently supports only one cluster per layer, so the result set
         * has a maximum of one element.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Show, Deploy, or Manage permissions level for
         * the stack or an attached policy that explicitly grants permission. For more
         * information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p> <p>This call accepts only one resource-identifying
         * parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeEcsClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEcsClustersOutcome DescribeEcsClusters(const Model::DescribeEcsClustersRequest& request) const;

        /**
         * <p>Describes Amazon ECS clusters that are registered with a stack. If you
         * specify only a stack ID, you can use the <code>MaxResults</code> and
         * <code>NextToken</code> parameters to paginate the response. However, AWS
         * OpsWorks Stacks currently supports only one cluster per layer, so the result set
         * has a maximum of one element.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Show, Deploy, or Manage permissions level for
         * the stack or an attached policy that explicitly grants permission. For more
         * information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p> <p>This call accepts only one resource-identifying
         * parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeEcsClusters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEcsClustersOutcomeCallable DescribeEcsClustersCallable(const Model::DescribeEcsClustersRequest& request) const;

        /**
         * <p>Describes Amazon ECS clusters that are registered with a stack. If you
         * specify only a stack ID, you can use the <code>MaxResults</code> and
         * <code>NextToken</code> parameters to paginate the response. However, AWS
         * OpsWorks Stacks currently supports only one cluster per layer, so the result set
         * has a maximum of one element.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Show, Deploy, or Manage permissions level for
         * the stack or an attached policy that explicitly grants permission. For more
         * information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p> <p>This call accepts only one resource-identifying
         * parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeEcsClusters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEcsClustersAsync(const Model::DescribeEcsClustersRequest& request, const DescribeEcsClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
         * IP addresses</a>.</p> <note> <p>This call accepts only one resource-identifying
         * parameter.</p> </note> <p> <b>Required Permissions</b>: To use this action, an
         * IAM user must have a Show, Deploy, or Manage permissions level for the stack, or
         * an attached policy that explicitly grants permissions. For more information
         * about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeElasticIps">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeElasticIpsOutcome DescribeElasticIps(const Model::DescribeElasticIpsRequest& request) const;

        /**
         * <p>Describes <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
         * IP addresses</a>.</p> <note> <p>This call accepts only one resource-identifying
         * parameter.</p> </note> <p> <b>Required Permissions</b>: To use this action, an
         * IAM user must have a Show, Deploy, or Manage permissions level for the stack, or
         * an attached policy that explicitly grants permissions. For more information
         * about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeElasticIps">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeElasticIpsOutcomeCallable DescribeElasticIpsCallable(const Model::DescribeElasticIpsRequest& request) const;

        /**
         * <p>Describes <a
         * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic
         * IP addresses</a>.</p> <note> <p>This call accepts only one resource-identifying
         * parameter.</p> </note> <p> <b>Required Permissions</b>: To use this action, an
         * IAM user must have a Show, Deploy, or Manage permissions level for the stack, or
         * an attached policy that explicitly grants permissions. For more information
         * about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeElasticIps">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeElasticIpsAsync(const Model::DescribeElasticIpsRequest& request, const DescribeElasticIpsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a stack's Elastic Load Balancing instances.</p> <note> <p>This call
         * accepts only one resource-identifying parameter.</p> </note> <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or
         * Manage permissions level for the stack, or an attached policy that explicitly
         * grants permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeElasticLoadBalancers">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeElasticLoadBalancersOutcome DescribeElasticLoadBalancers(const Model::DescribeElasticLoadBalancersRequest& request) const;

        /**
         * <p>Describes a stack's Elastic Load Balancing instances.</p> <note> <p>This call
         * accepts only one resource-identifying parameter.</p> </note> <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or
         * Manage permissions level for the stack, or an attached policy that explicitly
         * grants permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeElasticLoadBalancers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeElasticLoadBalancersOutcomeCallable DescribeElasticLoadBalancersCallable(const Model::DescribeElasticLoadBalancersRequest& request) const;

        /**
         * <p>Describes a stack's Elastic Load Balancing instances.</p> <note> <p>This call
         * accepts only one resource-identifying parameter.</p> </note> <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or
         * Manage permissions level for the stack, or an attached policy that explicitly
         * grants permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeElasticLoadBalancers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeElasticLoadBalancersAsync(const Model::DescribeElasticLoadBalancersRequest& request, const DescribeElasticLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests a description of a set of instances.</p> <note> <p>This call accepts
         * only one resource-identifying parameter.</p> </note> <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or
         * Manage permissions level for the stack, or an attached policy that explicitly
         * grants permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest& request) const;

        /**
         * <p>Requests a description of a set of instances.</p> <note> <p>This call accepts
         * only one resource-identifying parameter.</p> </note> <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or
         * Manage permissions level for the stack, or an attached policy that explicitly
         * grants permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request) const;

        /**
         * <p>Requests a description of a set of instances.</p> <note> <p>This call accepts
         * only one resource-identifying parameter.</p> </note> <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or
         * Manage permissions level for the stack, or an attached policy that explicitly
         * grants permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request, const DescribeInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests a description of one or more layers in a specified stack.</p> <note>
         * <p>This call accepts only one resource-identifying parameter.</p> </note> <p>
         * <b>Required Permissions</b>: To use this action, an IAM user must have a Show,
         * Deploy, or Manage permissions level for the stack, or an attached policy that
         * explicitly grants permissions. For more information about user permissions, see
         * <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeLayers">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLayersOutcome DescribeLayers(const Model::DescribeLayersRequest& request) const;

        /**
         * <p>Requests a description of one or more layers in a specified stack.</p> <note>
         * <p>This call accepts only one resource-identifying parameter.</p> </note> <p>
         * <b>Required Permissions</b>: To use this action, an IAM user must have a Show,
         * Deploy, or Manage permissions level for the stack, or an attached policy that
         * explicitly grants permissions. For more information about user permissions, see
         * <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeLayers">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLayersOutcomeCallable DescribeLayersCallable(const Model::DescribeLayersRequest& request) const;

        /**
         * <p>Requests a description of one or more layers in a specified stack.</p> <note>
         * <p>This call accepts only one resource-identifying parameter.</p> </note> <p>
         * <b>Required Permissions</b>: To use this action, an IAM user must have a Show,
         * Deploy, or Manage permissions level for the stack, or an attached policy that
         * explicitly grants permissions. For more information about user permissions, see
         * <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeLayers">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLayersAsync(const Model::DescribeLayersRequest& request, const DescribeLayersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes load-based auto scaling configurations for specified layers.</p>
         * <note> <p>You must specify at least one of the parameters.</p> </note> <p>
         * <b>Required Permissions</b>: To use this action, an IAM user must have a Show,
         * Deploy, or Manage permissions level for the stack, or an attached policy that
         * explicitly grants permissions. For more information about user permissions, see
         * <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeLoadBasedAutoScaling">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLoadBasedAutoScalingOutcome DescribeLoadBasedAutoScaling(const Model::DescribeLoadBasedAutoScalingRequest& request) const;

        /**
         * <p>Describes load-based auto scaling configurations for specified layers.</p>
         * <note> <p>You must specify at least one of the parameters.</p> </note> <p>
         * <b>Required Permissions</b>: To use this action, an IAM user must have a Show,
         * Deploy, or Manage permissions level for the stack, or an attached policy that
         * explicitly grants permissions. For more information about user permissions, see
         * <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeLoadBasedAutoScaling">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeLoadBasedAutoScalingOutcomeCallable DescribeLoadBasedAutoScalingCallable(const Model::DescribeLoadBasedAutoScalingRequest& request) const;

        /**
         * <p>Describes load-based auto scaling configurations for specified layers.</p>
         * <note> <p>You must specify at least one of the parameters.</p> </note> <p>
         * <b>Required Permissions</b>: To use this action, an IAM user must have a Show,
         * Deploy, or Manage permissions level for the stack, or an attached policy that
         * explicitly grants permissions. For more information about user permissions, see
         * <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeLoadBasedAutoScaling">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeLoadBasedAutoScalingAsync(const Model::DescribeLoadBasedAutoScalingRequest& request, const DescribeLoadBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a user's SSH information.</p> <p> <b>Required Permissions</b>: To
         * use this action, an IAM user must have self-management enabled or an attached
         * policy that explicitly grants permissions. For more information about user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeMyUserProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMyUserProfileOutcome DescribeMyUserProfile() const;

        /**
         * <p>Describes a user's SSH information.</p> <p> <b>Required Permissions</b>: To
         * use this action, an IAM user must have self-management enabled or an attached
         * policy that explicitly grants permissions. For more information about user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeMyUserProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMyUserProfileOutcomeCallable DescribeMyUserProfileCallable() const;

        /**
         * <p>Describes a user's SSH information.</p> <p> <b>Required Permissions</b>: To
         * use this action, an IAM user must have self-management enabled or an attached
         * policy that explicitly grants permissions. For more information about user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeMyUserProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMyUserProfileAsync(const DescribeMyUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Describes the operating systems that are supported by AWS OpsWorks
         * Stacks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeOperatingSystems">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOperatingSystemsOutcome DescribeOperatingSystems() const;

        /**
         * <p>Describes the operating systems that are supported by AWS OpsWorks
         * Stacks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeOperatingSystems">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeOperatingSystemsOutcomeCallable DescribeOperatingSystemsCallable() const;

        /**
         * <p>Describes the operating systems that are supported by AWS OpsWorks
         * Stacks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeOperatingSystems">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeOperatingSystemsAsync(const DescribeOperatingSystemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Describes the permissions for a specified stack.</p> <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Manage permissions
         * level for the stack, or an attached policy that explicitly grants permissions.
         * For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribePermissions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePermissionsOutcome DescribePermissions(const Model::DescribePermissionsRequest& request) const;

        /**
         * <p>Describes the permissions for a specified stack.</p> <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Manage permissions
         * level for the stack, or an attached policy that explicitly grants permissions.
         * For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribePermissions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePermissionsOutcomeCallable DescribePermissionsCallable(const Model::DescribePermissionsRequest& request) const;

        /**
         * <p>Describes the permissions for a specified stack.</p> <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Manage permissions
         * level for the stack, or an attached policy that explicitly grants permissions.
         * For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribePermissions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePermissionsAsync(const Model::DescribePermissionsRequest& request, const DescribePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describe an instance's RAID arrays.</p> <note> <p>This call accepts only one
         * resource-identifying parameter.</p> </note> <p> <b>Required Permissions</b>: To
         * use this action, an IAM user must have a Show, Deploy, or Manage permissions
         * level for the stack, or an attached policy that explicitly grants permissions.
         * For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeRaidArrays">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRaidArraysOutcome DescribeRaidArrays(const Model::DescribeRaidArraysRequest& request) const;

        /**
         * <p>Describe an instance's RAID arrays.</p> <note> <p>This call accepts only one
         * resource-identifying parameter.</p> </note> <p> <b>Required Permissions</b>: To
         * use this action, an IAM user must have a Show, Deploy, or Manage permissions
         * level for the stack, or an attached policy that explicitly grants permissions.
         * For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeRaidArrays">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRaidArraysOutcomeCallable DescribeRaidArraysCallable(const Model::DescribeRaidArraysRequest& request) const;

        /**
         * <p>Describe an instance's RAID arrays.</p> <note> <p>This call accepts only one
         * resource-identifying parameter.</p> </note> <p> <b>Required Permissions</b>: To
         * use this action, an IAM user must have a Show, Deploy, or Manage permissions
         * level for the stack, or an attached policy that explicitly grants permissions.
         * For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeRaidArrays">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRaidArraysAsync(const Model::DescribeRaidArraysRequest& request, const DescribeRaidArraysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes Amazon RDS instances.</p> <p> <b>Required Permissions</b>: To use
         * this action, an IAM user must have a Show, Deploy, or Manage permissions level
         * for the stack, or an attached policy that explicitly grants permissions. For
         * more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p> <p>This call accepts only one resource-identifying
         * parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeRdsDbInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRdsDbInstancesOutcome DescribeRdsDbInstances(const Model::DescribeRdsDbInstancesRequest& request) const;

        /**
         * <p>Describes Amazon RDS instances.</p> <p> <b>Required Permissions</b>: To use
         * this action, an IAM user must have a Show, Deploy, or Manage permissions level
         * for the stack, or an attached policy that explicitly grants permissions. For
         * more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p> <p>This call accepts only one resource-identifying
         * parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeRdsDbInstances">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRdsDbInstancesOutcomeCallable DescribeRdsDbInstancesCallable(const Model::DescribeRdsDbInstancesRequest& request) const;

        /**
         * <p>Describes Amazon RDS instances.</p> <p> <b>Required Permissions</b>: To use
         * this action, an IAM user must have a Show, Deploy, or Manage permissions level
         * for the stack, or an attached policy that explicitly grants permissions. For
         * more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p> <p>This call accepts only one resource-identifying
         * parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeRdsDbInstances">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRdsDbInstancesAsync(const Model::DescribeRdsDbInstancesRequest& request, const DescribeRdsDbInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes AWS OpsWorks Stacks service errors.</p> <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or
         * Manage permissions level for the stack, or an attached policy that explicitly
         * grants permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p> <p>This call accepts only one resource-identifying
         * parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeServiceErrors">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeServiceErrorsOutcome DescribeServiceErrors(const Model::DescribeServiceErrorsRequest& request) const;

        /**
         * <p>Describes AWS OpsWorks Stacks service errors.</p> <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or
         * Manage permissions level for the stack, or an attached policy that explicitly
         * grants permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p> <p>This call accepts only one resource-identifying
         * parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeServiceErrors">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeServiceErrorsOutcomeCallable DescribeServiceErrorsCallable(const Model::DescribeServiceErrorsRequest& request) const;

        /**
         * <p>Describes AWS OpsWorks Stacks service errors.</p> <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or
         * Manage permissions level for the stack, or an attached policy that explicitly
         * grants permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p> <p>This call accepts only one resource-identifying
         * parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeServiceErrors">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeServiceErrorsAsync(const Model::DescribeServiceErrorsRequest& request, const DescribeServiceErrorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests a description of a stack's provisioning parameters.</p> <p>
         * <b>Required Permissions</b>: To use this action, an IAM user must have a Show,
         * Deploy, or Manage permissions level for the stack or an attached policy that
         * explicitly grants permissions. For more information about user permissions, see
         * <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeStackProvisioningParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStackProvisioningParametersOutcome DescribeStackProvisioningParameters(const Model::DescribeStackProvisioningParametersRequest& request) const;

        /**
         * <p>Requests a description of a stack's provisioning parameters.</p> <p>
         * <b>Required Permissions</b>: To use this action, an IAM user must have a Show,
         * Deploy, or Manage permissions level for the stack or an attached policy that
         * explicitly grants permissions. For more information about user permissions, see
         * <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeStackProvisioningParameters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStackProvisioningParametersOutcomeCallable DescribeStackProvisioningParametersCallable(const Model::DescribeStackProvisioningParametersRequest& request) const;

        /**
         * <p>Requests a description of a stack's provisioning parameters.</p> <p>
         * <b>Required Permissions</b>: To use this action, an IAM user must have a Show,
         * Deploy, or Manage permissions level for the stack or an attached policy that
         * explicitly grants permissions. For more information about user permissions, see
         * <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeStackProvisioningParameters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStackProvisioningParametersAsync(const Model::DescribeStackProvisioningParametersRequest& request, const DescribeStackProvisioningParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the number of layers and apps in a specified stack, and the number
         * of instances in each state, such as <code>running_setup</code> or
         * <code>online</code>.</p> <p> <b>Required Permissions</b>: To use this action, an
         * IAM user must have a Show, Deploy, or Manage permissions level for the stack, or
         * an attached policy that explicitly grants permissions. For more information
         * about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeStackSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStackSummaryOutcome DescribeStackSummary(const Model::DescribeStackSummaryRequest& request) const;

        /**
         * <p>Describes the number of layers and apps in a specified stack, and the number
         * of instances in each state, such as <code>running_setup</code> or
         * <code>online</code>.</p> <p> <b>Required Permissions</b>: To use this action, an
         * IAM user must have a Show, Deploy, or Manage permissions level for the stack, or
         * an attached policy that explicitly grants permissions. For more information
         * about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeStackSummary">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStackSummaryOutcomeCallable DescribeStackSummaryCallable(const Model::DescribeStackSummaryRequest& request) const;

        /**
         * <p>Describes the number of layers and apps in a specified stack, and the number
         * of instances in each state, such as <code>running_setup</code> or
         * <code>online</code>.</p> <p> <b>Required Permissions</b>: To use this action, an
         * IAM user must have a Show, Deploy, or Manage permissions level for the stack, or
         * an attached policy that explicitly grants permissions. For more information
         * about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeStackSummary">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStackSummaryAsync(const Model::DescribeStackSummaryRequest& request, const DescribeStackSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Requests a description of one or more stacks.</p> <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or
         * Manage permissions level for the stack, or an attached policy that explicitly
         * grants permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeStacks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStacksOutcome DescribeStacks(const Model::DescribeStacksRequest& request) const;

        /**
         * <p>Requests a description of one or more stacks.</p> <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or
         * Manage permissions level for the stack, or an attached policy that explicitly
         * grants permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeStacks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStacksOutcomeCallable DescribeStacksCallable(const Model::DescribeStacksRequest& request) const;

        /**
         * <p>Requests a description of one or more stacks.</p> <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or
         * Manage permissions level for the stack, or an attached policy that explicitly
         * grants permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeStacks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStacksAsync(const Model::DescribeStacksRequest& request, const DescribeStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes time-based auto scaling configurations for specified instances.</p>
         * <note> <p>You must specify at least one of the parameters.</p> </note> <p>
         * <b>Required Permissions</b>: To use this action, an IAM user must have a Show,
         * Deploy, or Manage permissions level for the stack, or an attached policy that
         * explicitly grants permissions. For more information about user permissions, see
         * <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeTimeBasedAutoScaling">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTimeBasedAutoScalingOutcome DescribeTimeBasedAutoScaling(const Model::DescribeTimeBasedAutoScalingRequest& request) const;

        /**
         * <p>Describes time-based auto scaling configurations for specified instances.</p>
         * <note> <p>You must specify at least one of the parameters.</p> </note> <p>
         * <b>Required Permissions</b>: To use this action, an IAM user must have a Show,
         * Deploy, or Manage permissions level for the stack, or an attached policy that
         * explicitly grants permissions. For more information about user permissions, see
         * <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeTimeBasedAutoScaling">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTimeBasedAutoScalingOutcomeCallable DescribeTimeBasedAutoScalingCallable(const Model::DescribeTimeBasedAutoScalingRequest& request) const;

        /**
         * <p>Describes time-based auto scaling configurations for specified instances.</p>
         * <note> <p>You must specify at least one of the parameters.</p> </note> <p>
         * <b>Required Permissions</b>: To use this action, an IAM user must have a Show,
         * Deploy, or Manage permissions level for the stack, or an attached policy that
         * explicitly grants permissions. For more information about user permissions, see
         * <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeTimeBasedAutoScaling">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTimeBasedAutoScalingAsync(const Model::DescribeTimeBasedAutoScalingRequest& request, const DescribeTimeBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describe specified users.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have an attached policy that explicitly grants
         * permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeUserProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUserProfilesOutcome DescribeUserProfiles(const Model::DescribeUserProfilesRequest& request) const;

        /**
         * <p>Describe specified users.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have an attached policy that explicitly grants
         * permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeUserProfiles">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeUserProfilesOutcomeCallable DescribeUserProfilesCallable(const Model::DescribeUserProfilesRequest& request) const;

        /**
         * <p>Describe specified users.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have an attached policy that explicitly grants
         * permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeUserProfiles">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeUserProfilesAsync(const Model::DescribeUserProfilesRequest& request, const DescribeUserProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an instance's Amazon EBS volumes.</p> <note> <p>This call accepts
         * only one resource-identifying parameter.</p> </note> <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or
         * Manage permissions level for the stack, or an attached policy that explicitly
         * grants permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeVolumes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVolumesOutcome DescribeVolumes(const Model::DescribeVolumesRequest& request) const;

        /**
         * <p>Describes an instance's Amazon EBS volumes.</p> <note> <p>This call accepts
         * only one resource-identifying parameter.</p> </note> <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or
         * Manage permissions level for the stack, or an attached policy that explicitly
         * grants permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeVolumes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVolumesOutcomeCallable DescribeVolumesCallable(const Model::DescribeVolumesRequest& request) const;

        /**
         * <p>Describes an instance's Amazon EBS volumes.</p> <note> <p>This call accepts
         * only one resource-identifying parameter.</p> </note> <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or
         * Manage permissions level for the stack, or an attached policy that explicitly
         * grants permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeVolumes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVolumesAsync(const Model::DescribeVolumesRequest& request, const DescribeVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detaches a specified Elastic Load Balancing instance from its layer.</p> <p>
         * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage
         * permissions level for the stack, or an attached policy that explicitly grants
         * permissions. For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DetachElasticLoadBalancer">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachElasticLoadBalancerOutcome DetachElasticLoadBalancer(const Model::DetachElasticLoadBalancerRequest& request) const;

        /**
         * <p>Detaches a specified Elastic Load Balancing instance from its layer.</p> <p>
         * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage
         * permissions level for the stack, or an attached policy that explicitly grants
         * permissions. For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DetachElasticLoadBalancer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachElasticLoadBalancerOutcomeCallable DetachElasticLoadBalancerCallable(const Model::DetachElasticLoadBalancerRequest& request) const;

        /**
         * <p>Detaches a specified Elastic Load Balancing instance from its layer.</p> <p>
         * <b>Required Permissions</b>: To use this action, an IAM user must have a Manage
         * permissions level for the stack, or an attached policy that explicitly grants
         * permissions. For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DetachElasticLoadBalancer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachElasticLoadBalancerAsync(const Model::DetachElasticLoadBalancerRequest& request, const DetachElasticLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates an Elastic IP address from its instance. The address remains
         * registered with the stack. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DisassociateElasticIp">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateElasticIpOutcome DisassociateElasticIp(const Model::DisassociateElasticIpRequest& request) const;

        /**
         * <p>Disassociates an Elastic IP address from its instance. The address remains
         * registered with the stack. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DisassociateElasticIp">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateElasticIpOutcomeCallable DisassociateElasticIpCallable(const Model::DisassociateElasticIpRequest& request) const;

        /**
         * <p>Disassociates an Elastic IP address from its instance. The address remains
         * registered with the stack. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DisassociateElasticIp">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateElasticIpAsync(const Model::DisassociateElasticIpRequest& request, const DisassociateElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a generated host name for the specified layer, based on the current host
         * name theme.</p> <p> <b>Required Permissions</b>: To use this action, an IAM user
         * must have a Manage permissions level for the stack, or an attached policy that
         * explicitly grants permissions. For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/GetHostnameSuggestion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetHostnameSuggestionOutcome GetHostnameSuggestion(const Model::GetHostnameSuggestionRequest& request) const;

        /**
         * <p>Gets a generated host name for the specified layer, based on the current host
         * name theme.</p> <p> <b>Required Permissions</b>: To use this action, an IAM user
         * must have a Manage permissions level for the stack, or an attached policy that
         * explicitly grants permissions. For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/GetHostnameSuggestion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetHostnameSuggestionOutcomeCallable GetHostnameSuggestionCallable(const Model::GetHostnameSuggestionRequest& request) const;

        /**
         * <p>Gets a generated host name for the specified layer, based on the current host
         * name theme.</p> <p> <b>Required Permissions</b>: To use this action, an IAM user
         * must have a Manage permissions level for the stack, or an attached policy that
         * explicitly grants permissions. For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/GetHostnameSuggestion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetHostnameSuggestionAsync(const Model::GetHostnameSuggestionRequest& request, const GetHostnameSuggestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <note> <p>This action can be used only with Windows stacks.</p> </note>
         * <p>Grants RDP access to a Windows instance for a specified time
         * period.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/GrantAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::GrantAccessOutcome GrantAccess(const Model::GrantAccessRequest& request) const;

        /**
         * <note> <p>This action can be used only with Windows stacks.</p> </note>
         * <p>Grants RDP access to a Windows instance for a specified time
         * period.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/GrantAccess">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GrantAccessOutcomeCallable GrantAccessCallable(const Model::GrantAccessRequest& request) const;

        /**
         * <note> <p>This action can be used only with Windows stacks.</p> </note>
         * <p>Grants RDP access to a Windows instance for a specified time
         * period.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/GrantAccess">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GrantAccessAsync(const Model::GrantAccessRequest& request, const GrantAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of tags that are applied to the specified stack or
         * layer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/ListTags">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsOutcome ListTags(const Model::ListTagsRequest& request) const;

        /**
         * <p>Returns a list of tags that are applied to the specified stack or
         * layer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/ListTags">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsOutcomeCallable ListTagsCallable(const Model::ListTagsRequest& request) const;

        /**
         * <p>Returns a list of tags that are applied to the specified stack or
         * layer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/ListTags">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsAsync(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Reboots a specified instance. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-starting.html">Starting,
         * Stopping, and Rebooting Instances</a>.</p> <p> <b>Required Permissions</b>: To
         * use this action, an IAM user must have a Manage permissions level for the stack,
         * or an attached policy that explicitly grants permissions. For more information
         * on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/RebootInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::RebootInstanceOutcome RebootInstance(const Model::RebootInstanceRequest& request) const;

        /**
         * <p>Reboots a specified instance. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-starting.html">Starting,
         * Stopping, and Rebooting Instances</a>.</p> <p> <b>Required Permissions</b>: To
         * use this action, an IAM user must have a Manage permissions level for the stack,
         * or an attached policy that explicitly grants permissions. For more information
         * on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/RebootInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RebootInstanceOutcomeCallable RebootInstanceCallable(const Model::RebootInstanceRequest& request) const;

        /**
         * <p>Reboots a specified instance. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-starting.html">Starting,
         * Stopping, and Rebooting Instances</a>.</p> <p> <b>Required Permissions</b>: To
         * use this action, an IAM user must have a Manage permissions level for the stack,
         * or an attached policy that explicitly grants permissions. For more information
         * on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/RebootInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RebootInstanceAsync(const Model::RebootInstanceRequest& request, const RebootInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers a specified Amazon ECS cluster with a stack. You can register only
         * one cluster with a stack. A cluster can be registered with only one stack. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-ecscluster.html">
         * Resource Management</a>.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">
         * Managing User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/RegisterEcsCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterEcsClusterOutcome RegisterEcsCluster(const Model::RegisterEcsClusterRequest& request) const;

        /**
         * <p>Registers a specified Amazon ECS cluster with a stack. You can register only
         * one cluster with a stack. A cluster can be registered with only one stack. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-ecscluster.html">
         * Resource Management</a>.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">
         * Managing User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/RegisterEcsCluster">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterEcsClusterOutcomeCallable RegisterEcsClusterCallable(const Model::RegisterEcsClusterRequest& request) const;

        /**
         * <p>Registers a specified Amazon ECS cluster with a stack. You can register only
         * one cluster with a stack. A cluster can be registered with only one stack. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-ecscluster.html">
         * Resource Management</a>.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">
         * Managing User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/RegisterEcsCluster">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterEcsClusterAsync(const Model::RegisterEcsClusterRequest& request, const RegisterEcsClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers an Elastic IP address with a specified stack. An address can be
         * registered with only one stack at a time. If the address is already registered,
         * you must first deregister it by calling <a>DeregisterElasticIp</a>. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/RegisterElasticIp">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterElasticIpOutcome RegisterElasticIp(const Model::RegisterElasticIpRequest& request) const;

        /**
         * <p>Registers an Elastic IP address with a specified stack. An address can be
         * registered with only one stack at a time. If the address is already registered,
         * you must first deregister it by calling <a>DeregisterElasticIp</a>. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/RegisterElasticIp">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterElasticIpOutcomeCallable RegisterElasticIpCallable(const Model::RegisterElasticIpRequest& request) const;

        /**
         * <p>Registers an Elastic IP address with a specified stack. An address can be
         * registered with only one stack at a time. If the address is already registered,
         * you must first deregister it by calling <a>DeregisterElasticIp</a>. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/RegisterElasticIp">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterElasticIpAsync(const Model::RegisterElasticIpRequest& request, const RegisterElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers instances that were created outside of AWS OpsWorks Stacks with a
         * specified stack.</p> <note> <p>We do not recommend using this action to register
         * instances. The complete registration operation includes two tasks: installing
         * the AWS OpsWorks Stacks agent on the instance, and registering the instance with
         * the stack. <code>RegisterInstance</code> handles only the second step. You
         * should instead use the AWS CLI <code>register</code> command, which performs the
         * entire registration operation. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/registered-instances-register.html">
         * Registering an Instance with an AWS OpsWorks Stacks Stack</a>.</p> </note>
         * <p>Registered instances have the same requirements as instances that are created
         * by using the <a>CreateInstance</a> API. For example, registered instances must
         * be running a supported Linux-based operating system, and they must have a
         * supported instance type. For more information about requirements for instances
         * that you want to register, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/registered-instances-register-registering-preparer.html">
         * Preparing the Instance</a>.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/RegisterInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterInstanceOutcome RegisterInstance(const Model::RegisterInstanceRequest& request) const;

        /**
         * <p>Registers instances that were created outside of AWS OpsWorks Stacks with a
         * specified stack.</p> <note> <p>We do not recommend using this action to register
         * instances. The complete registration operation includes two tasks: installing
         * the AWS OpsWorks Stacks agent on the instance, and registering the instance with
         * the stack. <code>RegisterInstance</code> handles only the second step. You
         * should instead use the AWS CLI <code>register</code> command, which performs the
         * entire registration operation. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/registered-instances-register.html">
         * Registering an Instance with an AWS OpsWorks Stacks Stack</a>.</p> </note>
         * <p>Registered instances have the same requirements as instances that are created
         * by using the <a>CreateInstance</a> API. For example, registered instances must
         * be running a supported Linux-based operating system, and they must have a
         * supported instance type. For more information about requirements for instances
         * that you want to register, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/registered-instances-register-registering-preparer.html">
         * Preparing the Instance</a>.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/RegisterInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterInstanceOutcomeCallable RegisterInstanceCallable(const Model::RegisterInstanceRequest& request) const;

        /**
         * <p>Registers instances that were created outside of AWS OpsWorks Stacks with a
         * specified stack.</p> <note> <p>We do not recommend using this action to register
         * instances. The complete registration operation includes two tasks: installing
         * the AWS OpsWorks Stacks agent on the instance, and registering the instance with
         * the stack. <code>RegisterInstance</code> handles only the second step. You
         * should instead use the AWS CLI <code>register</code> command, which performs the
         * entire registration operation. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/registered-instances-register.html">
         * Registering an Instance with an AWS OpsWorks Stacks Stack</a>.</p> </note>
         * <p>Registered instances have the same requirements as instances that are created
         * by using the <a>CreateInstance</a> API. For example, registered instances must
         * be running a supported Linux-based operating system, and they must have a
         * supported instance type. For more information about requirements for instances
         * that you want to register, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/registered-instances-register-registering-preparer.html">
         * Preparing the Instance</a>.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/RegisterInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterInstanceAsync(const Model::RegisterInstanceRequest& request, const RegisterInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers an Amazon RDS instance with a stack.</p> <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Manage permissions
         * level for the stack, or an attached policy that explicitly grants permissions.
         * For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/RegisterRdsDbInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterRdsDbInstanceOutcome RegisterRdsDbInstance(const Model::RegisterRdsDbInstanceRequest& request) const;

        /**
         * <p>Registers an Amazon RDS instance with a stack.</p> <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Manage permissions
         * level for the stack, or an attached policy that explicitly grants permissions.
         * For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/RegisterRdsDbInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterRdsDbInstanceOutcomeCallable RegisterRdsDbInstanceCallable(const Model::RegisterRdsDbInstanceRequest& request) const;

        /**
         * <p>Registers an Amazon RDS instance with a stack.</p> <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Manage permissions
         * level for the stack, or an attached policy that explicitly grants permissions.
         * For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/RegisterRdsDbInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterRdsDbInstanceAsync(const Model::RegisterRdsDbInstanceRequest& request, const RegisterRdsDbInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers an Amazon EBS volume with a specified stack. A volume can be
         * registered with only one stack at a time. If the volume is already registered,
         * you must first deregister it by calling <a>DeregisterVolume</a>. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/RegisterVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterVolumeOutcome RegisterVolume(const Model::RegisterVolumeRequest& request) const;

        /**
         * <p>Registers an Amazon EBS volume with a specified stack. A volume can be
         * registered with only one stack at a time. If the volume is already registered,
         * you must first deregister it by calling <a>DeregisterVolume</a>. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/RegisterVolume">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterVolumeOutcomeCallable RegisterVolumeCallable(const Model::RegisterVolumeRequest& request) const;

        /**
         * <p>Registers an Amazon EBS volume with a specified stack. A volume can be
         * registered with only one stack at a time. If the volume is already registered,
         * you must first deregister it by calling <a>DeregisterVolume</a>. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/RegisterVolume">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterVolumeAsync(const Model::RegisterVolumeRequest& request, const RegisterVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Specify the load-based auto scaling configuration for a specified layer. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-autoscaling.html">Managing
         * Load with Time-based and Load-based Instances</a>.</p> <note> <p>To use
         * load-based auto scaling, you must create a set of load-based auto scaling
         * instances. Load-based auto scaling operates only on the instances from that set,
         * so you must ensure that you have created enough instances to handle the maximum
         * anticipated load.</p> </note> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack, or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/SetLoadBasedAutoScaling">AWS
         * API Reference</a></p>
         */
        virtual Model::SetLoadBasedAutoScalingOutcome SetLoadBasedAutoScaling(const Model::SetLoadBasedAutoScalingRequest& request) const;

        /**
         * <p>Specify the load-based auto scaling configuration for a specified layer. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-autoscaling.html">Managing
         * Load with Time-based and Load-based Instances</a>.</p> <note> <p>To use
         * load-based auto scaling, you must create a set of load-based auto scaling
         * instances. Load-based auto scaling operates only on the instances from that set,
         * so you must ensure that you have created enough instances to handle the maximum
         * anticipated load.</p> </note> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack, or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/SetLoadBasedAutoScaling">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetLoadBasedAutoScalingOutcomeCallable SetLoadBasedAutoScalingCallable(const Model::SetLoadBasedAutoScalingRequest& request) const;

        /**
         * <p>Specify the load-based auto scaling configuration for a specified layer. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-autoscaling.html">Managing
         * Load with Time-based and Load-based Instances</a>.</p> <note> <p>To use
         * load-based auto scaling, you must create a set of load-based auto scaling
         * instances. Load-based auto scaling operates only on the instances from that set,
         * so you must ensure that you have created enough instances to handle the maximum
         * anticipated load.</p> </note> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack, or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/SetLoadBasedAutoScaling">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetLoadBasedAutoScalingAsync(const Model::SetLoadBasedAutoScalingRequest& request, const SetLoadBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Specifies a user's permissions. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingsecurity.html">Security
         * and Permissions</a>.</p> <p> <b>Required Permissions</b>: To use this action, an
         * IAM user must have a Manage permissions level for the stack, or an attached
         * policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/SetPermission">AWS
         * API Reference</a></p>
         */
        virtual Model::SetPermissionOutcome SetPermission(const Model::SetPermissionRequest& request) const;

        /**
         * <p>Specifies a user's permissions. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingsecurity.html">Security
         * and Permissions</a>.</p> <p> <b>Required Permissions</b>: To use this action, an
         * IAM user must have a Manage permissions level for the stack, or an attached
         * policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/SetPermission">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetPermissionOutcomeCallable SetPermissionCallable(const Model::SetPermissionRequest& request) const;

        /**
         * <p>Specifies a user's permissions. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingsecurity.html">Security
         * and Permissions</a>.</p> <p> <b>Required Permissions</b>: To use this action, an
         * IAM user must have a Manage permissions level for the stack, or an attached
         * policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/SetPermission">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetPermissionAsync(const Model::SetPermissionRequest& request, const SetPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Specify the time-based auto scaling configuration for a specified instance.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-autoscaling.html">Managing
         * Load with Time-based and Load-based Instances</a>.</p> <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Manage permissions
         * level for the stack, or an attached policy that explicitly grants permissions.
         * For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/SetTimeBasedAutoScaling">AWS
         * API Reference</a></p>
         */
        virtual Model::SetTimeBasedAutoScalingOutcome SetTimeBasedAutoScaling(const Model::SetTimeBasedAutoScalingRequest& request) const;

        /**
         * <p>Specify the time-based auto scaling configuration for a specified instance.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-autoscaling.html">Managing
         * Load with Time-based and Load-based Instances</a>.</p> <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Manage permissions
         * level for the stack, or an attached policy that explicitly grants permissions.
         * For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/SetTimeBasedAutoScaling">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetTimeBasedAutoScalingOutcomeCallable SetTimeBasedAutoScalingCallable(const Model::SetTimeBasedAutoScalingRequest& request) const;

        /**
         * <p>Specify the time-based auto scaling configuration for a specified instance.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-autoscaling.html">Managing
         * Load with Time-based and Load-based Instances</a>.</p> <p> <b>Required
         * Permissions</b>: To use this action, an IAM user must have a Manage permissions
         * level for the stack, or an attached policy that explicitly grants permissions.
         * For more information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/SetTimeBasedAutoScaling">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetTimeBasedAutoScalingAsync(const Model::SetTimeBasedAutoScalingRequest& request, const SetTimeBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a specified instance. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-starting.html">Starting,
         * Stopping, and Rebooting Instances</a>.</p> <p> <b>Required Permissions</b>: To
         * use this action, an IAM user must have a Manage permissions level for the stack,
         * or an attached policy that explicitly grants permissions. For more information
         * on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/StartInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::StartInstanceOutcome StartInstance(const Model::StartInstanceRequest& request) const;

        /**
         * <p>Starts a specified instance. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-starting.html">Starting,
         * Stopping, and Rebooting Instances</a>.</p> <p> <b>Required Permissions</b>: To
         * use this action, an IAM user must have a Manage permissions level for the stack,
         * or an attached policy that explicitly grants permissions. For more information
         * on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/StartInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartInstanceOutcomeCallable StartInstanceCallable(const Model::StartInstanceRequest& request) const;

        /**
         * <p>Starts a specified instance. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-starting.html">Starting,
         * Stopping, and Rebooting Instances</a>.</p> <p> <b>Required Permissions</b>: To
         * use this action, an IAM user must have a Manage permissions level for the stack,
         * or an attached policy that explicitly grants permissions. For more information
         * on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/StartInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartInstanceAsync(const Model::StartInstanceRequest& request, const StartInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a stack's instances.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack, or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/StartStack">AWS
         * API Reference</a></p>
         */
        virtual Model::StartStackOutcome StartStack(const Model::StartStackRequest& request) const;

        /**
         * <p>Starts a stack's instances.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack, or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/StartStack">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartStackOutcomeCallable StartStackCallable(const Model::StartStackRequest& request) const;

        /**
         * <p>Starts a stack's instances.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack, or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/StartStack">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartStackAsync(const Model::StartStackRequest& request, const StartStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a specified instance. When you stop a standard instance, the data
         * disappears and must be reinstalled when you restart the instance. You can stop
         * an Amazon EBS-backed instance without losing data. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-starting.html">Starting,
         * Stopping, and Rebooting Instances</a>.</p> <p> <b>Required Permissions</b>: To
         * use this action, an IAM user must have a Manage permissions level for the stack,
         * or an attached policy that explicitly grants permissions. For more information
         * on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/StopInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::StopInstanceOutcome StopInstance(const Model::StopInstanceRequest& request) const;

        /**
         * <p>Stops a specified instance. When you stop a standard instance, the data
         * disappears and must be reinstalled when you restart the instance. You can stop
         * an Amazon EBS-backed instance without losing data. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-starting.html">Starting,
         * Stopping, and Rebooting Instances</a>.</p> <p> <b>Required Permissions</b>: To
         * use this action, an IAM user must have a Manage permissions level for the stack,
         * or an attached policy that explicitly grants permissions. For more information
         * on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/StopInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopInstanceOutcomeCallable StopInstanceCallable(const Model::StopInstanceRequest& request) const;

        /**
         * <p>Stops a specified instance. When you stop a standard instance, the data
         * disappears and must be reinstalled when you restart the instance. You can stop
         * an Amazon EBS-backed instance without losing data. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-starting.html">Starting,
         * Stopping, and Rebooting Instances</a>.</p> <p> <b>Required Permissions</b>: To
         * use this action, an IAM user must have a Manage permissions level for the stack,
         * or an attached policy that explicitly grants permissions. For more information
         * on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/StopInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopInstanceAsync(const Model::StopInstanceRequest& request, const StopInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a specified stack.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack, or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/StopStack">AWS
         * API Reference</a></p>
         */
        virtual Model::StopStackOutcome StopStack(const Model::StopStackRequest& request) const;

        /**
         * <p>Stops a specified stack.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack, or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/StopStack">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopStackOutcomeCallable StopStackCallable(const Model::StopStackRequest& request) const;

        /**
         * <p>Stops a specified stack.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack, or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/StopStack">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopStackAsync(const Model::StopStackRequest& request, const StopStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Apply cost-allocation tags to a specified stack or layer in AWS OpsWorks
         * Stacks. For more information about how tagging works, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/tagging.html">Tags</a>
         * in the AWS OpsWorks User Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Apply cost-allocation tags to a specified stack or layer in AWS OpsWorks
         * Stacks. For more information about how tagging works, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/tagging.html">Tags</a>
         * in the AWS OpsWorks User Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Apply cost-allocation tags to a specified stack or layer in AWS OpsWorks
         * Stacks. For more information about how tagging works, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/tagging.html">Tags</a>
         * in the AWS OpsWorks User Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Unassigns a registered instance from all layers that are using the instance.
         * The instance remains in the stack as an unassigned instance, and can be assigned
         * to another layer as needed. You cannot use this action with instances that were
         * created with AWS OpsWorks Stacks.</p> <p> <b>Required Permissions</b>: To use
         * this action, an IAM user must have a Manage permissions level for the stack or
         * an attached policy that explicitly grants permissions. For more information
         * about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UnassignInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::UnassignInstanceOutcome UnassignInstance(const Model::UnassignInstanceRequest& request) const;

        /**
         * <p>Unassigns a registered instance from all layers that are using the instance.
         * The instance remains in the stack as an unassigned instance, and can be assigned
         * to another layer as needed. You cannot use this action with instances that were
         * created with AWS OpsWorks Stacks.</p> <p> <b>Required Permissions</b>: To use
         * this action, an IAM user must have a Manage permissions level for the stack or
         * an attached policy that explicitly grants permissions. For more information
         * about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UnassignInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UnassignInstanceOutcomeCallable UnassignInstanceCallable(const Model::UnassignInstanceRequest& request) const;

        /**
         * <p>Unassigns a registered instance from all layers that are using the instance.
         * The instance remains in the stack as an unassigned instance, and can be assigned
         * to another layer as needed. You cannot use this action with instances that were
         * created with AWS OpsWorks Stacks.</p> <p> <b>Required Permissions</b>: To use
         * this action, an IAM user must have a Manage permissions level for the stack or
         * an attached policy that explicitly grants permissions. For more information
         * about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UnassignInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UnassignInstanceAsync(const Model::UnassignInstanceRequest& request, const UnassignInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Unassigns an assigned Amazon EBS volume. The volume remains registered with
         * the stack. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UnassignVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::UnassignVolumeOutcome UnassignVolume(const Model::UnassignVolumeRequest& request) const;

        /**
         * <p>Unassigns an assigned Amazon EBS volume. The volume remains registered with
         * the stack. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UnassignVolume">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UnassignVolumeOutcomeCallable UnassignVolumeCallable(const Model::UnassignVolumeRequest& request) const;

        /**
         * <p>Unassigns an assigned Amazon EBS volume. The volume remains registered with
         * the stack. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UnassignVolume">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UnassignVolumeAsync(const Model::UnassignVolumeRequest& request, const UnassignVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes tags from a specified stack or layer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes tags from a specified stack or layer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes tags from a specified stack or layer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a specified app.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Deploy or Manage permissions level for the
         * stack, or an attached policy that explicitly grants permissions. For more
         * information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UpdateApp">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAppOutcome UpdateApp(const Model::UpdateAppRequest& request) const;

        /**
         * <p>Updates a specified app.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Deploy or Manage permissions level for the
         * stack, or an attached policy that explicitly grants permissions. For more
         * information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UpdateApp">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAppOutcomeCallable UpdateAppCallable(const Model::UpdateAppRequest& request) const;

        /**
         * <p>Updates a specified app.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Deploy or Manage permissions level for the
         * stack, or an attached policy that explicitly grants permissions. For more
         * information on user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UpdateApp">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAppAsync(const Model::UpdateAppRequest& request, const UpdateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a registered Elastic IP address's name. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UpdateElasticIp">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateElasticIpOutcome UpdateElasticIp(const Model::UpdateElasticIpRequest& request) const;

        /**
         * <p>Updates a registered Elastic IP address's name. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UpdateElasticIp">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateElasticIpOutcomeCallable UpdateElasticIpCallable(const Model::UpdateElasticIpRequest& request) const;

        /**
         * <p>Updates a registered Elastic IP address's name. For more information, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UpdateElasticIp">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateElasticIpAsync(const Model::UpdateElasticIpRequest& request, const UpdateElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a specified instance.</p> <p> <b>Required Permissions</b>: To use
         * this action, an IAM user must have a Manage permissions level for the stack, or
         * an attached policy that explicitly grants permissions. For more information on
         * user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UpdateInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInstanceOutcome UpdateInstance(const Model::UpdateInstanceRequest& request) const;

        /**
         * <p>Updates a specified instance.</p> <p> <b>Required Permissions</b>: To use
         * this action, an IAM user must have a Manage permissions level for the stack, or
         * an attached policy that explicitly grants permissions. For more information on
         * user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UpdateInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateInstanceOutcomeCallable UpdateInstanceCallable(const Model::UpdateInstanceRequest& request) const;

        /**
         * <p>Updates a specified instance.</p> <p> <b>Required Permissions</b>: To use
         * this action, an IAM user must have a Manage permissions level for the stack, or
         * an attached policy that explicitly grants permissions. For more information on
         * user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UpdateInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateInstanceAsync(const Model::UpdateInstanceRequest& request, const UpdateInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a specified layer.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack, or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UpdateLayer">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLayerOutcome UpdateLayer(const Model::UpdateLayerRequest& request) const;

        /**
         * <p>Updates a specified layer.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack, or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UpdateLayer">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLayerOutcomeCallable UpdateLayerCallable(const Model::UpdateLayerRequest& request) const;

        /**
         * <p>Updates a specified layer.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack, or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UpdateLayer">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLayerAsync(const Model::UpdateLayerRequest& request, const UpdateLayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a user's SSH public key.</p> <p> <b>Required Permissions</b>: To use
         * this action, an IAM user must have self-management enabled or an attached policy
         * that explicitly grants permissions. For more information about user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UpdateMyUserProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMyUserProfileOutcome UpdateMyUserProfile(const Model::UpdateMyUserProfileRequest& request) const;

        /**
         * <p>Updates a user's SSH public key.</p> <p> <b>Required Permissions</b>: To use
         * this action, an IAM user must have self-management enabled or an attached policy
         * that explicitly grants permissions. For more information about user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UpdateMyUserProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMyUserProfileOutcomeCallable UpdateMyUserProfileCallable(const Model::UpdateMyUserProfileRequest& request) const;

        /**
         * <p>Updates a user's SSH public key.</p> <p> <b>Required Permissions</b>: To use
         * this action, an IAM user must have self-management enabled or an attached policy
         * that explicitly grants permissions. For more information about user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UpdateMyUserProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMyUserProfileAsync(const Model::UpdateMyUserProfileRequest& request, const UpdateMyUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an Amazon RDS instance.</p> <p> <b>Required Permissions</b>: To use
         * this action, an IAM user must have a Manage permissions level for the stack, or
         * an attached policy that explicitly grants permissions. For more information on
         * user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UpdateRdsDbInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRdsDbInstanceOutcome UpdateRdsDbInstance(const Model::UpdateRdsDbInstanceRequest& request) const;

        /**
         * <p>Updates an Amazon RDS instance.</p> <p> <b>Required Permissions</b>: To use
         * this action, an IAM user must have a Manage permissions level for the stack, or
         * an attached policy that explicitly grants permissions. For more information on
         * user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UpdateRdsDbInstance">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRdsDbInstanceOutcomeCallable UpdateRdsDbInstanceCallable(const Model::UpdateRdsDbInstanceRequest& request) const;

        /**
         * <p>Updates an Amazon RDS instance.</p> <p> <b>Required Permissions</b>: To use
         * this action, an IAM user must have a Manage permissions level for the stack, or
         * an attached policy that explicitly grants permissions. For more information on
         * user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UpdateRdsDbInstance">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRdsDbInstanceAsync(const Model::UpdateRdsDbInstanceRequest& request, const UpdateRdsDbInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a specified stack.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack, or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UpdateStack">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStackOutcome UpdateStack(const Model::UpdateStackRequest& request) const;

        /**
         * <p>Updates a specified stack.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack, or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UpdateStack">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateStackOutcomeCallable UpdateStackCallable(const Model::UpdateStackRequest& request) const;

        /**
         * <p>Updates a specified stack.</p> <p> <b>Required Permissions</b>: To use this
         * action, an IAM user must have a Manage permissions level for the stack, or an
         * attached policy that explicitly grants permissions. For more information on user
         * permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UpdateStack">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateStackAsync(const Model::UpdateStackRequest& request, const UpdateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a specified user profile.</p> <p> <b>Required Permissions</b>: To use
         * this action, an IAM user must have an attached policy that explicitly grants
         * permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UpdateUserProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateUserProfileOutcome UpdateUserProfile(const Model::UpdateUserProfileRequest& request) const;

        /**
         * <p>Updates a specified user profile.</p> <p> <b>Required Permissions</b>: To use
         * this action, an IAM user must have an attached policy that explicitly grants
         * permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UpdateUserProfile">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateUserProfileOutcomeCallable UpdateUserProfileCallable(const Model::UpdateUserProfileRequest& request) const;

        /**
         * <p>Updates a specified user profile.</p> <p> <b>Required Permissions</b>: To use
         * this action, an IAM user must have an attached policy that explicitly grants
         * permissions. For more information about user permissions, see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UpdateUserProfile">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateUserProfileAsync(const Model::UpdateUserProfileRequest& request, const UpdateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an Amazon EBS volume's name or mount point. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UpdateVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVolumeOutcome UpdateVolume(const Model::UpdateVolumeRequest& request) const;

        /**
         * <p>Updates an Amazon EBS volume's name or mount point. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UpdateVolume">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVolumeOutcomeCallable UpdateVolumeCallable(const Model::UpdateVolumeRequest& request) const;

        /**
         * <p>Updates an Amazon EBS volume's name or mount point. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource
         * Management</a>.</p> <p> <b>Required Permissions</b>: To use this action, an IAM
         * user must have a Manage permissions level for the stack, or an attached policy
         * that explicitly grants permissions. For more information on user permissions,
         * see <a
         * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing
         * User Permissions</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/UpdateVolume">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVolumeAsync(const Model::UpdateVolumeRequest& request, const UpdateVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssignInstanceAsyncHelper(const Model::AssignInstanceRequest& request, const AssignInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssignVolumeAsyncHelper(const Model::AssignVolumeRequest& request, const AssignVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateElasticIpAsyncHelper(const Model::AssociateElasticIpRequest& request, const AssociateElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AttachElasticLoadBalancerAsyncHelper(const Model::AttachElasticLoadBalancerRequest& request, const AttachElasticLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CloneStackAsyncHelper(const Model::CloneStackRequest& request, const CloneStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAppAsyncHelper(const Model::CreateAppRequest& request, const CreateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDeploymentAsyncHelper(const Model::CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateInstanceAsyncHelper(const Model::CreateInstanceRequest& request, const CreateInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLayerAsyncHelper(const Model::CreateLayerRequest& request, const CreateLayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateStackAsyncHelper(const Model::CreateStackRequest& request, const CreateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateUserProfileAsyncHelper(const Model::CreateUserProfileRequest& request, const CreateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteAppAsyncHelper(const Model::DeleteAppRequest& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteInstanceAsyncHelper(const Model::DeleteInstanceRequest& request, const DeleteInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLayerAsyncHelper(const Model::DeleteLayerRequest& request, const DeleteLayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteStackAsyncHelper(const Model::DeleteStackRequest& request, const DeleteStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteUserProfileAsyncHelper(const Model::DeleteUserProfileRequest& request, const DeleteUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterEcsClusterAsyncHelper(const Model::DeregisterEcsClusterRequest& request, const DeregisterEcsClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterElasticIpAsyncHelper(const Model::DeregisterElasticIpRequest& request, const DeregisterElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterInstanceAsyncHelper(const Model::DeregisterInstanceRequest& request, const DeregisterInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterRdsDbInstanceAsyncHelper(const Model::DeregisterRdsDbInstanceRequest& request, const DeregisterRdsDbInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeregisterVolumeAsyncHelper(const Model::DeregisterVolumeRequest& request, const DeregisterVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAgentVersionsAsyncHelper(const Model::DescribeAgentVersionsRequest& request, const DescribeAgentVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAppsAsyncHelper(const Model::DescribeAppsRequest& request, const DescribeAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeCommandsAsyncHelper(const Model::DescribeCommandsRequest& request, const DescribeCommandsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDeploymentsAsyncHelper(const Model::DescribeDeploymentsRequest& request, const DescribeDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEcsClustersAsyncHelper(const Model::DescribeEcsClustersRequest& request, const DescribeEcsClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeElasticIpsAsyncHelper(const Model::DescribeElasticIpsRequest& request, const DescribeElasticIpsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeElasticLoadBalancersAsyncHelper(const Model::DescribeElasticLoadBalancersRequest& request, const DescribeElasticLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInstancesAsyncHelper(const Model::DescribeInstancesRequest& request, const DescribeInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLayersAsyncHelper(const Model::DescribeLayersRequest& request, const DescribeLayersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeLoadBasedAutoScalingAsyncHelper(const Model::DescribeLoadBasedAutoScalingRequest& request, const DescribeLoadBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMyUserProfileAsyncHelper(const DescribeMyUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeOperatingSystemsAsyncHelper(const DescribeOperatingSystemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePermissionsAsyncHelper(const Model::DescribePermissionsRequest& request, const DescribePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRaidArraysAsyncHelper(const Model::DescribeRaidArraysRequest& request, const DescribeRaidArraysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRdsDbInstancesAsyncHelper(const Model::DescribeRdsDbInstancesRequest& request, const DescribeRdsDbInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeServiceErrorsAsyncHelper(const Model::DescribeServiceErrorsRequest& request, const DescribeServiceErrorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeStackProvisioningParametersAsyncHelper(const Model::DescribeStackProvisioningParametersRequest& request, const DescribeStackProvisioningParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeStackSummaryAsyncHelper(const Model::DescribeStackSummaryRequest& request, const DescribeStackSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeStacksAsyncHelper(const Model::DescribeStacksRequest& request, const DescribeStacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTimeBasedAutoScalingAsyncHelper(const Model::DescribeTimeBasedAutoScalingRequest& request, const DescribeTimeBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeUserProfilesAsyncHelper(const Model::DescribeUserProfilesRequest& request, const DescribeUserProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeVolumesAsyncHelper(const Model::DescribeVolumesRequest& request, const DescribeVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetachElasticLoadBalancerAsyncHelper(const Model::DetachElasticLoadBalancerRequest& request, const DetachElasticLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateElasticIpAsyncHelper(const Model::DisassociateElasticIpRequest& request, const DisassociateElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetHostnameSuggestionAsyncHelper(const Model::GetHostnameSuggestionRequest& request, const GetHostnameSuggestionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GrantAccessAsyncHelper(const Model::GrantAccessRequest& request, const GrantAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsAsyncHelper(const Model::ListTagsRequest& request, const ListTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RebootInstanceAsyncHelper(const Model::RebootInstanceRequest& request, const RebootInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterEcsClusterAsyncHelper(const Model::RegisterEcsClusterRequest& request, const RegisterEcsClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterElasticIpAsyncHelper(const Model::RegisterElasticIpRequest& request, const RegisterElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterInstanceAsyncHelper(const Model::RegisterInstanceRequest& request, const RegisterInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterRdsDbInstanceAsyncHelper(const Model::RegisterRdsDbInstanceRequest& request, const RegisterRdsDbInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RegisterVolumeAsyncHelper(const Model::RegisterVolumeRequest& request, const RegisterVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetLoadBasedAutoScalingAsyncHelper(const Model::SetLoadBasedAutoScalingRequest& request, const SetLoadBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetPermissionAsyncHelper(const Model::SetPermissionRequest& request, const SetPermissionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SetTimeBasedAutoScalingAsyncHelper(const Model::SetTimeBasedAutoScalingRequest& request, const SetTimeBasedAutoScalingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartInstanceAsyncHelper(const Model::StartInstanceRequest& request, const StartInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartStackAsyncHelper(const Model::StartStackRequest& request, const StartStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopInstanceAsyncHelper(const Model::StopInstanceRequest& request, const StopInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopStackAsyncHelper(const Model::StopStackRequest& request, const StopStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UnassignInstanceAsyncHelper(const Model::UnassignInstanceRequest& request, const UnassignInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UnassignVolumeAsyncHelper(const Model::UnassignVolumeRequest& request, const UnassignVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateAppAsyncHelper(const Model::UpdateAppRequest& request, const UpdateAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateElasticIpAsyncHelper(const Model::UpdateElasticIpRequest& request, const UpdateElasticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateInstanceAsyncHelper(const Model::UpdateInstanceRequest& request, const UpdateInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateLayerAsyncHelper(const Model::UpdateLayerRequest& request, const UpdateLayerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateMyUserProfileAsyncHelper(const Model::UpdateMyUserProfileRequest& request, const UpdateMyUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRdsDbInstanceAsyncHelper(const Model::UpdateRdsDbInstanceRequest& request, const UpdateRdsDbInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateStackAsyncHelper(const Model::UpdateStackRequest& request, const UpdateStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateUserProfileAsyncHelper(const Model::UpdateUserProfileRequest& request, const UpdateUserProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateVolumeAsyncHelper(const Model::UpdateVolumeRequest& request, const UpdateVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace OpsWorks
} // namespace Aws
