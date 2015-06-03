/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/Event.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opsworks/model/CloneStackResult.h>
#include <aws/opsworks/model/CreateAppResult.h>
#include <aws/opsworks/model/CreateDeploymentResult.h>
#include <aws/opsworks/model/CreateInstanceResult.h>
#include <aws/opsworks/model/CreateLayerResult.h>
#include <aws/opsworks/model/CreateStackResult.h>
#include <aws/opsworks/model/CreateUserProfileResult.h>
#include <aws/opsworks/model/DescribeAppsResult.h>
#include <aws/opsworks/model/DescribeCommandsResult.h>
#include <aws/opsworks/model/DescribeDeploymentsResult.h>
#include <aws/opsworks/model/DescribeElasticIpsResult.h>
#include <aws/opsworks/model/DescribeElasticLoadBalancersResult.h>
#include <aws/opsworks/model/DescribeInstancesResult.h>
#include <aws/opsworks/model/DescribeLayersResult.h>
#include <aws/opsworks/model/DescribeLoadBasedAutoScalingResult.h>
#include <aws/opsworks/model/DescribeMyUserProfileResult.h>
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
#include <aws/opsworks/model/RegisterElasticIpResult.h>
#include <aws/opsworks/model/RegisterInstanceResult.h>
#include <aws/opsworks/model/RegisterVolumeResult.h>
#include <aws/core/NoResult.h>
#include <future>

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

namespace Json
{
  class JsonValue;
} // namespace Json
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
    class DeregisterElasticIpRequest;
    class DeregisterInstanceRequest;
    class DeregisterRdsDbInstanceRequest;
    class DeregisterVolumeRequest;
    class DescribeAppsRequest;
    class DescribeCommandsRequest;
    class DescribeDeploymentsRequest;
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
    class RebootInstanceRequest;
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
    class UnassignInstanceRequest;
    class UnassignVolumeRequest;
    class UpdateAppRequest;
    class UpdateElasticIpRequest;
    class UpdateInstanceRequest;
    class UpdateLayerRequest;
    class UpdateMyUserProfileRequest;
    class UpdateRdsDbInstanceRequest;
    class UpdateStackRequest;
    class UpdateUserProfileRequest;
    class UpdateVolumeRequest;

  typedef Utils::Outcome<NoResult, Client::AWSError<OpsWorksErrors>> AssignInstanceOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<OpsWorksErrors>> AssignVolumeOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<OpsWorksErrors>> AssociateElasticIpOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<OpsWorksErrors>> AttachElasticLoadBalancerOutcome;
  typedef Utils::Outcome<CloneStackResult, Client::AWSError<OpsWorksErrors>> CloneStackOutcome;
  typedef Utils::Outcome<CreateAppResult, Client::AWSError<OpsWorksErrors>> CreateAppOutcome;
  typedef Utils::Outcome<CreateDeploymentResult, Client::AWSError<OpsWorksErrors>> CreateDeploymentOutcome;
  typedef Utils::Outcome<CreateInstanceResult, Client::AWSError<OpsWorksErrors>> CreateInstanceOutcome;
  typedef Utils::Outcome<CreateLayerResult, Client::AWSError<OpsWorksErrors>> CreateLayerOutcome;
  typedef Utils::Outcome<CreateStackResult, Client::AWSError<OpsWorksErrors>> CreateStackOutcome;
  typedef Utils::Outcome<CreateUserProfileResult, Client::AWSError<OpsWorksErrors>> CreateUserProfileOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<OpsWorksErrors>> DeleteAppOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<OpsWorksErrors>> DeleteInstanceOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<OpsWorksErrors>> DeleteLayerOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<OpsWorksErrors>> DeleteStackOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<OpsWorksErrors>> DeleteUserProfileOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<OpsWorksErrors>> DeregisterElasticIpOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<OpsWorksErrors>> DeregisterInstanceOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<OpsWorksErrors>> DeregisterRdsDbInstanceOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<OpsWorksErrors>> DeregisterVolumeOutcome;
  typedef Utils::Outcome<DescribeAppsResult, Client::AWSError<OpsWorksErrors>> DescribeAppsOutcome;
  typedef Utils::Outcome<DescribeCommandsResult, Client::AWSError<OpsWorksErrors>> DescribeCommandsOutcome;
  typedef Utils::Outcome<DescribeDeploymentsResult, Client::AWSError<OpsWorksErrors>> DescribeDeploymentsOutcome;
  typedef Utils::Outcome<DescribeElasticIpsResult, Client::AWSError<OpsWorksErrors>> DescribeElasticIpsOutcome;
  typedef Utils::Outcome<DescribeElasticLoadBalancersResult, Client::AWSError<OpsWorksErrors>> DescribeElasticLoadBalancersOutcome;
  typedef Utils::Outcome<DescribeInstancesResult, Client::AWSError<OpsWorksErrors>> DescribeInstancesOutcome;
  typedef Utils::Outcome<DescribeLayersResult, Client::AWSError<OpsWorksErrors>> DescribeLayersOutcome;
  typedef Utils::Outcome<DescribeLoadBasedAutoScalingResult, Client::AWSError<OpsWorksErrors>> DescribeLoadBasedAutoScalingOutcome;
  typedef Utils::Outcome<DescribeMyUserProfileResult, Client::AWSError<OpsWorksErrors>> DescribeMyUserProfileOutcome;
  typedef Utils::Outcome<DescribePermissionsResult, Client::AWSError<OpsWorksErrors>> DescribePermissionsOutcome;
  typedef Utils::Outcome<DescribeRaidArraysResult, Client::AWSError<OpsWorksErrors>> DescribeRaidArraysOutcome;
  typedef Utils::Outcome<DescribeRdsDbInstancesResult, Client::AWSError<OpsWorksErrors>> DescribeRdsDbInstancesOutcome;
  typedef Utils::Outcome<DescribeServiceErrorsResult, Client::AWSError<OpsWorksErrors>> DescribeServiceErrorsOutcome;
  typedef Utils::Outcome<DescribeStackProvisioningParametersResult, Client::AWSError<OpsWorksErrors>> DescribeStackProvisioningParametersOutcome;
  typedef Utils::Outcome<DescribeStackSummaryResult, Client::AWSError<OpsWorksErrors>> DescribeStackSummaryOutcome;
  typedef Utils::Outcome<DescribeStacksResult, Client::AWSError<OpsWorksErrors>> DescribeStacksOutcome;
  typedef Utils::Outcome<DescribeTimeBasedAutoScalingResult, Client::AWSError<OpsWorksErrors>> DescribeTimeBasedAutoScalingOutcome;
  typedef Utils::Outcome<DescribeUserProfilesResult, Client::AWSError<OpsWorksErrors>> DescribeUserProfilesOutcome;
  typedef Utils::Outcome<DescribeVolumesResult, Client::AWSError<OpsWorksErrors>> DescribeVolumesOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<OpsWorksErrors>> DetachElasticLoadBalancerOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<OpsWorksErrors>> DisassociateElasticIpOutcome;
  typedef Utils::Outcome<GetHostnameSuggestionResult, Client::AWSError<OpsWorksErrors>> GetHostnameSuggestionOutcome;
  typedef Utils::Outcome<GrantAccessResult, Client::AWSError<OpsWorksErrors>> GrantAccessOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<OpsWorksErrors>> RebootInstanceOutcome;
  typedef Utils::Outcome<RegisterElasticIpResult, Client::AWSError<OpsWorksErrors>> RegisterElasticIpOutcome;
  typedef Utils::Outcome<RegisterInstanceResult, Client::AWSError<OpsWorksErrors>> RegisterInstanceOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<OpsWorksErrors>> RegisterRdsDbInstanceOutcome;
  typedef Utils::Outcome<RegisterVolumeResult, Client::AWSError<OpsWorksErrors>> RegisterVolumeOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<OpsWorksErrors>> SetLoadBasedAutoScalingOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<OpsWorksErrors>> SetPermissionOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<OpsWorksErrors>> SetTimeBasedAutoScalingOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<OpsWorksErrors>> StartInstanceOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<OpsWorksErrors>> StartStackOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<OpsWorksErrors>> StopInstanceOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<OpsWorksErrors>> StopStackOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<OpsWorksErrors>> UnassignInstanceOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<OpsWorksErrors>> UnassignVolumeOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<OpsWorksErrors>> UpdateAppOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<OpsWorksErrors>> UpdateElasticIpOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<OpsWorksErrors>> UpdateInstanceOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<OpsWorksErrors>> UpdateLayerOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<OpsWorksErrors>> UpdateMyUserProfileOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<OpsWorksErrors>> UpdateRdsDbInstanceOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<OpsWorksErrors>> UpdateStackOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<OpsWorksErrors>> UpdateUserProfileOutcome;
  typedef Utils::Outcome<NoResult, Client::AWSError<OpsWorksErrors>> UpdateVolumeOutcome;

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
  typedef std::future<DeregisterElasticIpOutcome> DeregisterElasticIpOutcomeCallable;
  typedef std::future<DeregisterInstanceOutcome> DeregisterInstanceOutcomeCallable;
  typedef std::future<DeregisterRdsDbInstanceOutcome> DeregisterRdsDbInstanceOutcomeCallable;
  typedef std::future<DeregisterVolumeOutcome> DeregisterVolumeOutcomeCallable;
  typedef std::future<DescribeAppsOutcome> DescribeAppsOutcomeCallable;
  typedef std::future<DescribeCommandsOutcome> DescribeCommandsOutcomeCallable;
  typedef std::future<DescribeDeploymentsOutcome> DescribeDeploymentsOutcomeCallable;
  typedef std::future<DescribeElasticIpsOutcome> DescribeElasticIpsOutcomeCallable;
  typedef std::future<DescribeElasticLoadBalancersOutcome> DescribeElasticLoadBalancersOutcomeCallable;
  typedef std::future<DescribeInstancesOutcome> DescribeInstancesOutcomeCallable;
  typedef std::future<DescribeLayersOutcome> DescribeLayersOutcomeCallable;
  typedef std::future<DescribeLoadBasedAutoScalingOutcome> DescribeLoadBasedAutoScalingOutcomeCallable;
  typedef std::future<DescribeMyUserProfileOutcome> DescribeMyUserProfileOutcomeCallable;
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
  typedef std::future<RebootInstanceOutcome> RebootInstanceOutcomeCallable;
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
  typedef std::future<UnassignInstanceOutcome> UnassignInstanceOutcomeCallable;
  typedef std::future<UnassignVolumeOutcome> UnassignVolumeOutcomeCallable;
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

  typedef Aws::Utils::Event<OpsWorksClient, const Model::AssignInstanceRequest&, const Model::AssignInstanceOutcome&> AssignInstanceOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::AssignVolumeRequest&, const Model::AssignVolumeOutcome&> AssignVolumeOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::AssociateElasticIpRequest&, const Model::AssociateElasticIpOutcome&> AssociateElasticIpOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::AttachElasticLoadBalancerRequest&, const Model::AttachElasticLoadBalancerOutcome&> AttachElasticLoadBalancerOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::CloneStackRequest&, const Model::CloneStackOutcome&> CloneStackOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::CreateAppRequest&, const Model::CreateAppOutcome&> CreateAppOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::CreateDeploymentRequest&, const Model::CreateDeploymentOutcome&> CreateDeploymentOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::CreateInstanceRequest&, const Model::CreateInstanceOutcome&> CreateInstanceOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::CreateLayerRequest&, const Model::CreateLayerOutcome&> CreateLayerOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::CreateStackRequest&, const Model::CreateStackOutcome&> CreateStackOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::CreateUserProfileRequest&, const Model::CreateUserProfileOutcome&> CreateUserProfileOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::DeleteAppRequest&, const Model::DeleteAppOutcome&> DeleteAppOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::DeleteInstanceRequest&, const Model::DeleteInstanceOutcome&> DeleteInstanceOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::DeleteLayerRequest&, const Model::DeleteLayerOutcome&> DeleteLayerOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::DeleteStackRequest&, const Model::DeleteStackOutcome&> DeleteStackOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::DeleteUserProfileRequest&, const Model::DeleteUserProfileOutcome&> DeleteUserProfileOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::DeregisterElasticIpRequest&, const Model::DeregisterElasticIpOutcome&> DeregisterElasticIpOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::DeregisterInstanceRequest&, const Model::DeregisterInstanceOutcome&> DeregisterInstanceOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::DeregisterRdsDbInstanceRequest&, const Model::DeregisterRdsDbInstanceOutcome&> DeregisterRdsDbInstanceOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::DeregisterVolumeRequest&, const Model::DeregisterVolumeOutcome&> DeregisterVolumeOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::DescribeAppsRequest&, const Model::DescribeAppsOutcome&> DescribeAppsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::DescribeCommandsRequest&, const Model::DescribeCommandsOutcome&> DescribeCommandsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::DescribeDeploymentsRequest&, const Model::DescribeDeploymentsOutcome&> DescribeDeploymentsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::DescribeElasticIpsRequest&, const Model::DescribeElasticIpsOutcome&> DescribeElasticIpsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::DescribeElasticLoadBalancersRequest&, const Model::DescribeElasticLoadBalancersOutcome&> DescribeElasticLoadBalancersOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::DescribeInstancesRequest&, const Model::DescribeInstancesOutcome&> DescribeInstancesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::DescribeLayersRequest&, const Model::DescribeLayersOutcome&> DescribeLayersOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::DescribeLoadBasedAutoScalingRequest&, const Model::DescribeLoadBasedAutoScalingOutcome&> DescribeLoadBasedAutoScalingOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::DescribeMyUserProfileOutcome&> DescribeMyUserProfileOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::DescribePermissionsRequest&, const Model::DescribePermissionsOutcome&> DescribePermissionsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::DescribeRaidArraysRequest&, const Model::DescribeRaidArraysOutcome&> DescribeRaidArraysOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::DescribeRdsDbInstancesRequest&, const Model::DescribeRdsDbInstancesOutcome&> DescribeRdsDbInstancesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::DescribeServiceErrorsRequest&, const Model::DescribeServiceErrorsOutcome&> DescribeServiceErrorsOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::DescribeStackProvisioningParametersRequest&, const Model::DescribeStackProvisioningParametersOutcome&> DescribeStackProvisioningParametersOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::DescribeStackSummaryRequest&, const Model::DescribeStackSummaryOutcome&> DescribeStackSummaryOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::DescribeStacksRequest&, const Model::DescribeStacksOutcome&> DescribeStacksOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::DescribeTimeBasedAutoScalingRequest&, const Model::DescribeTimeBasedAutoScalingOutcome&> DescribeTimeBasedAutoScalingOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::DescribeUserProfilesRequest&, const Model::DescribeUserProfilesOutcome&> DescribeUserProfilesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::DescribeVolumesRequest&, const Model::DescribeVolumesOutcome&> DescribeVolumesOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::DetachElasticLoadBalancerRequest&, const Model::DetachElasticLoadBalancerOutcome&> DetachElasticLoadBalancerOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::DisassociateElasticIpRequest&, const Model::DisassociateElasticIpOutcome&> DisassociateElasticIpOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::GetHostnameSuggestionRequest&, const Model::GetHostnameSuggestionOutcome&> GetHostnameSuggestionOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::GrantAccessRequest&, const Model::GrantAccessOutcome&> GrantAccessOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::RebootInstanceRequest&, const Model::RebootInstanceOutcome&> RebootInstanceOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::RegisterElasticIpRequest&, const Model::RegisterElasticIpOutcome&> RegisterElasticIpOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::RegisterInstanceRequest&, const Model::RegisterInstanceOutcome&> RegisterInstanceOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::RegisterRdsDbInstanceRequest&, const Model::RegisterRdsDbInstanceOutcome&> RegisterRdsDbInstanceOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::RegisterVolumeRequest&, const Model::RegisterVolumeOutcome&> RegisterVolumeOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::SetLoadBasedAutoScalingRequest&, const Model::SetLoadBasedAutoScalingOutcome&> SetLoadBasedAutoScalingOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::SetPermissionRequest&, const Model::SetPermissionOutcome&> SetPermissionOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::SetTimeBasedAutoScalingRequest&, const Model::SetTimeBasedAutoScalingOutcome&> SetTimeBasedAutoScalingOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::StartInstanceRequest&, const Model::StartInstanceOutcome&> StartInstanceOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::StartStackRequest&, const Model::StartStackOutcome&> StartStackOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::StopInstanceRequest&, const Model::StopInstanceOutcome&> StopInstanceOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::StopStackRequest&, const Model::StopStackOutcome&> StopStackOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::UnassignInstanceRequest&, const Model::UnassignInstanceOutcome&> UnassignInstanceOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::UnassignVolumeRequest&, const Model::UnassignVolumeOutcome&> UnassignVolumeOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::UpdateAppRequest&, const Model::UpdateAppOutcome&> UpdateAppOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::UpdateElasticIpRequest&, const Model::UpdateElasticIpOutcome&> UpdateElasticIpOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::UpdateInstanceRequest&, const Model::UpdateInstanceOutcome&> UpdateInstanceOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::UpdateLayerRequest&, const Model::UpdateLayerOutcome&> UpdateLayerOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::UpdateMyUserProfileRequest&, const Model::UpdateMyUserProfileOutcome&> UpdateMyUserProfileOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::UpdateRdsDbInstanceRequest&, const Model::UpdateRdsDbInstanceOutcome&> UpdateRdsDbInstanceOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::UpdateStackRequest&, const Model::UpdateStackOutcome&> UpdateStackOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::UpdateUserProfileRequest&, const Model::UpdateUserProfileOutcome&> UpdateUserProfileOutcomeReceivedEvent;
  typedef Aws::Utils::Event<OpsWorksClient, const Model::UpdateVolumeRequest&, const Model::UpdateVolumeOutcome&> UpdateVolumeOutcomeReceivedEvent;

  /*
    <fullname>AWS OpsWorks</fullname> <p>Welcome to the <i>AWS OpsWorks API Reference</i>. This guide provides descriptions, syntax, and usage examples about AWS OpsWorks actions and data types, including common parameters and error codes. </p> <p>AWS OpsWorks is an application management service that provides an integrated experience for overseeing the complete application lifecycle. For information about this product, go to the <a href="http://aws.amazon.com/opsworks/">AWS OpsWorks</a> details page. </p> <p> <b>SDKs and CLI</b> </p> <p>The most common way to use the AWS OpsWorks API is by using the AWS Command Line Interface (CLI) or by using one of the AWS SDKs to implement applications in your preferred language. For more information, see:</p> <ul> <li> <a href="http://docs.aws.amazon.com/cli/latest/userguide/cli-chap-welcome.html">AWS CLI</a> </li> <li> <a href="http://docs.aws.amazon.com/AWSJavaSDK/latest/javadoc/com/amazonaws/services/opsworks/AWSOpsWorksClient.html">AWS SDK for Java</a> </li> <li> <a href="http://docs.aws.amazon.com/sdkfornet/latest/apidocs/html/N_Amazon_OpsWorks.htm">AWS SDK for .NET</a> </li> <li> <a href="http://docs.aws.amazon.com/aws-sdk-php-2/latest/class-Aws.OpsWorks.OpsWorksClient.html">AWS SDK for PHP 2</a> </li> <li> <a href="http://docs.aws.amazon.com/AWSRubySDK/latest/AWS/OpsWorks/Client.html">AWS SDK for Ruby</a> </li> <li> <a href="http://aws.amazon.com/documentation/sdkforjavascript/">AWS SDK for Node.js</a> </li> <li> <a href="http://docs.pythonboto.org/en/latest/ref/opsworks.html">AWS SDK for Python(Boto)</a> </li> </ul> <p> <b>Endpoints</b> </p> <p>AWS OpsWorks supports only one endpoint, opsworks.us-east-1.amazonaws.com (HTTPS), so you must connect to that endpoint. You can then use the API to direct AWS OpsWorks to create stacks in any AWS Region.</p> <p> <b>Chef Versions</b> </p> <p>When you call <a>CreateStack</a>, <a>CloneStack</a>, or <a>UpdateStack</a> we recommend you use the <code>ConfigurationManager</code> parameter to specify the Chef version, 0.9, 11.4, or 11.10. The default value is currently 11.10. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingcookbook-chef11.html">Chef Versions</a>.</p> <note>You can still specify Chef 0.9 for your stack, but new features are not available for Chef 0.9 stacks, and support is scheduled to end on July 24, 2014. We do not recommend using Chef 0.9 for new stacks, and we recommend migrating your existing Chef 0.9 stacks to Chef 11.10 as soon as possible.</note>
  */
  class AWS_OPSWORKS_API OpsWorksClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

     /**
      * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
      * is not specified, it will be initialized to default values.
      */
      OpsWorksClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

     /**
      * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
      * is not specified, it will be initialized to default values.
      */
      OpsWorksClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

     /**
      * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
      * the default http client factory will be used
      */
      OpsWorksClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
        const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration(),
        const std::shared_ptr<Http::HttpClientFactory const>& httpClientFactory = nullptr);

      ~OpsWorksClient();

     /*
       <p>Assign a registered instance to a layer.</p> <ul> <li>You can assign registered on-premises instances to any layer type.</li> <li>You can assign registered Amazon EC2 instances only to custom layers.</li> <li>You cannot use this action with instances that were created with AWS OpsWorks.</li> </ul> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::AssignInstanceOutcome AssignInstance(const Model::AssignInstanceRequest& request) const;

     /*
       <p>Assign a registered instance to a layer.</p> <ul> <li>You can assign registered on-premises instances to any layer type.</li> <li>You can assign registered Amazon EC2 instances only to custom layers.</li> <li>You cannot use this action with instances that were created with AWS OpsWorks.</li> </ul> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::AssignInstanceOutcomeCallable AssignInstanceCallable(const Model::AssignInstanceRequest& request) const;

     /*
       <p>Assign a registered instance to a layer.</p> <ul> <li>You can assign registered on-premises instances to any layer type.</li> <li>You can assign registered Amazon EC2 instances only to custom layers.</li> <li>You cannot use this action with instances that were created with AWS OpsWorks.</li> </ul> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void AssignInstanceAsync(const Model::AssignInstanceRequest& request) const;

     /*
       <p>Assigns one of the stack's registered Amazon EBS volumes to a specified instance. The volume must first be registered with the stack by calling <a>RegisterVolume</a>. After you register the volume, you must call <a>UpdateVolume</a> to specify a mount point before calling <code>AssignVolume</code>. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource Management</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::AssignVolumeOutcome AssignVolume(const Model::AssignVolumeRequest& request) const;

     /*
       <p>Assigns one of the stack's registered Amazon EBS volumes to a specified instance. The volume must first be registered with the stack by calling <a>RegisterVolume</a>. After you register the volume, you must call <a>UpdateVolume</a> to specify a mount point before calling <code>AssignVolume</code>. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource Management</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::AssignVolumeOutcomeCallable AssignVolumeCallable(const Model::AssignVolumeRequest& request) const;

     /*
       <p>Assigns one of the stack's registered Amazon EBS volumes to a specified instance. The volume must first be registered with the stack by calling <a>RegisterVolume</a>. After you register the volume, you must call <a>UpdateVolume</a> to specify a mount point before calling <code>AssignVolume</code>. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource Management</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void AssignVolumeAsync(const Model::AssignVolumeRequest& request) const;

     /*
       <p>Associates one of the stack's registered Elastic IP addresses with a specified instance. The address must first be registered with the stack by calling <a>RegisterElasticIp</a>. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource Management</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::AssociateElasticIpOutcome AssociateElasticIp(const Model::AssociateElasticIpRequest& request) const;

     /*
       <p>Associates one of the stack's registered Elastic IP addresses with a specified instance. The address must first be registered with the stack by calling <a>RegisterElasticIp</a>. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource Management</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::AssociateElasticIpOutcomeCallable AssociateElasticIpCallable(const Model::AssociateElasticIpRequest& request) const;

     /*
       <p>Associates one of the stack's registered Elastic IP addresses with a specified instance. The address must first be registered with the stack by calling <a>RegisterElasticIp</a>. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource Management</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void AssociateElasticIpAsync(const Model::AssociateElasticIpRequest& request) const;

     /*
       <p>Attaches an Elastic Load Balancing load balancer to a specified layer. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/load-balancer-elb.html">Elastic Load Balancing</a>.</p> <note> <p>You must create the Elastic Load Balancing instance separately, by using the Elastic Load Balancing console, API, or CLI. For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/Welcome.html"> Elastic Load Balancing Developer Guide</a>.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::AttachElasticLoadBalancerOutcome AttachElasticLoadBalancer(const Model::AttachElasticLoadBalancerRequest& request) const;

     /*
       <p>Attaches an Elastic Load Balancing load balancer to a specified layer. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/load-balancer-elb.html">Elastic Load Balancing</a>.</p> <note> <p>You must create the Elastic Load Balancing instance separately, by using the Elastic Load Balancing console, API, or CLI. For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/Welcome.html"> Elastic Load Balancing Developer Guide</a>.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::AttachElasticLoadBalancerOutcomeCallable AttachElasticLoadBalancerCallable(const Model::AttachElasticLoadBalancerRequest& request) const;

     /*
       <p>Attaches an Elastic Load Balancing load balancer to a specified layer. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/load-balancer-elb.html">Elastic Load Balancing</a>.</p> <note> <p>You must create the Elastic Load Balancing instance separately, by using the Elastic Load Balancing console, API, or CLI. For more information, see <a href="http://docs.aws.amazon.com/ElasticLoadBalancing/latest/DeveloperGuide/Welcome.html"> Elastic Load Balancing Developer Guide</a>.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void AttachElasticLoadBalancerAsync(const Model::AttachElasticLoadBalancerRequest& request) const;

     /*
       <p>Creates a clone of a specified stack. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-cloning.html">Clone a Stack</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::CloneStackOutcome CloneStack(const Model::CloneStackRequest& request) const;

     /*
       <p>Creates a clone of a specified stack. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-cloning.html">Clone a Stack</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CloneStackOutcomeCallable CloneStackCallable(const Model::CloneStackRequest& request) const;

     /*
       <p>Creates a clone of a specified stack. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-cloning.html">Clone a Stack</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CloneStackAsync(const Model::CloneStackRequest& request) const;

     /*
       <p>Creates an app for a specified stack. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingapps-creating.html">Creating Apps</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::CreateAppOutcome CreateApp(const Model::CreateAppRequest& request) const;

     /*
       <p>Creates an app for a specified stack. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingapps-creating.html">Creating Apps</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateAppOutcomeCallable CreateAppCallable(const Model::CreateAppRequest& request) const;

     /*
       <p>Creates an app for a specified stack. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingapps-creating.html">Creating Apps</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateAppAsync(const Model::CreateAppRequest& request) const;

     /*
       <p>Runs deployment or stack commands. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingapps-deploying.html">Deploying Apps</a> and <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-commands.html">Run Stack Commands</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Deploy or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::CreateDeploymentOutcome CreateDeployment(const Model::CreateDeploymentRequest& request) const;

     /*
       <p>Runs deployment or stack commands. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingapps-deploying.html">Deploying Apps</a> and <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-commands.html">Run Stack Commands</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Deploy or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateDeploymentOutcomeCallable CreateDeploymentCallable(const Model::CreateDeploymentRequest& request) const;

     /*
       <p>Runs deployment or stack commands. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingapps-deploying.html">Deploying Apps</a> and <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-commands.html">Run Stack Commands</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Deploy or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateDeploymentAsync(const Model::CreateDeploymentRequest& request) const;

     /*
       <p>Creates an instance in a specified stack. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-add.html">Adding an Instance to a Layer</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::CreateInstanceOutcome CreateInstance(const Model::CreateInstanceRequest& request) const;

     /*
       <p>Creates an instance in a specified stack. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-add.html">Adding an Instance to a Layer</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateInstanceOutcomeCallable CreateInstanceCallable(const Model::CreateInstanceRequest& request) const;

     /*
       <p>Creates an instance in a specified stack. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-add.html">Adding an Instance to a Layer</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateInstanceAsync(const Model::CreateInstanceRequest& request) const;

     /*
       <p>Creates a layer. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-basics-create.html">How to Create a Layer</a>.</p> <note> <p>You should use <b>CreateLayer</b> for noncustom layer types such as PHP App Server only if the stack does not have an existing layer of that type. A stack can have at most one instance of each noncustom layer; if you attempt to create a second instance, <b>CreateLayer</b> fails. A stack can have an arbitrary number of custom layers, so you can call <b>CreateLayer</b> as many times as you like for that layer type.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::CreateLayerOutcome CreateLayer(const Model::CreateLayerRequest& request) const;

     /*
       <p>Creates a layer. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-basics-create.html">How to Create a Layer</a>.</p> <note> <p>You should use <b>CreateLayer</b> for noncustom layer types such as PHP App Server only if the stack does not have an existing layer of that type. A stack can have at most one instance of each noncustom layer; if you attempt to create a second instance, <b>CreateLayer</b> fails. A stack can have an arbitrary number of custom layers, so you can call <b>CreateLayer</b> as many times as you like for that layer type.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateLayerOutcomeCallable CreateLayerCallable(const Model::CreateLayerRequest& request) const;

     /*
       <p>Creates a layer. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-basics-create.html">How to Create a Layer</a>.</p> <note> <p>You should use <b>CreateLayer</b> for noncustom layer types such as PHP App Server only if the stack does not have an existing layer of that type. A stack can have at most one instance of each noncustom layer; if you attempt to create a second instance, <b>CreateLayer</b> fails. A stack can have an arbitrary number of custom layers, so you can call <b>CreateLayer</b> as many times as you like for that layer type.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateLayerAsync(const Model::CreateLayerRequest& request) const;

     /*
       <p>Creates a new stack. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-edit.html">Create a New Stack</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::CreateStackOutcome CreateStack(const Model::CreateStackRequest& request) const;

     /*
       <p>Creates a new stack. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-edit.html">Create a New Stack</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateStackOutcomeCallable CreateStackCallable(const Model::CreateStackRequest& request) const;

     /*
       <p>Creates a new stack. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-edit.html">Create a New Stack</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateStackAsync(const Model::CreateStackRequest& request) const;

     /*
       <p>Creates a new user profile.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::CreateUserProfileOutcome CreateUserProfile(const Model::CreateUserProfileRequest& request) const;

     /*
       <p>Creates a new user profile.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::CreateUserProfileOutcomeCallable CreateUserProfileCallable(const Model::CreateUserProfileRequest& request) const;

     /*
       <p>Creates a new user profile.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void CreateUserProfileAsync(const Model::CreateUserProfileRequest& request) const;

     /*
       <p>Deletes a specified app.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::DeleteAppOutcome DeleteApp(const Model::DeleteAppRequest& request) const;

     /*
       <p>Deletes a specified app.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteAppOutcomeCallable DeleteAppCallable(const Model::DeleteAppRequest& request) const;

     /*
       <p>Deletes a specified app.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteAppAsync(const Model::DeleteAppRequest& request) const;

     /*
       <p>Deletes a specified instance, which terminates the associated Amazon EC2 instance. You must stop an instance before you can delete it.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-delete.html">Deleting Instances</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::DeleteInstanceOutcome DeleteInstance(const Model::DeleteInstanceRequest& request) const;

     /*
       <p>Deletes a specified instance, which terminates the associated Amazon EC2 instance. You must stop an instance before you can delete it.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-delete.html">Deleting Instances</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteInstanceOutcomeCallable DeleteInstanceCallable(const Model::DeleteInstanceRequest& request) const;

     /*
       <p>Deletes a specified instance, which terminates the associated Amazon EC2 instance. You must stop an instance before you can delete it.</p> <p>For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-delete.html">Deleting Instances</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteInstanceAsync(const Model::DeleteInstanceRequest& request) const;

     /*
       <p>Deletes a specified layer. You must first stop and then delete all associated instances or unassign registered instances. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-basics-delete.html">How to Delete a Layer</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::DeleteLayerOutcome DeleteLayer(const Model::DeleteLayerRequest& request) const;

     /*
       <p>Deletes a specified layer. You must first stop and then delete all associated instances or unassign registered instances. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-basics-delete.html">How to Delete a Layer</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteLayerOutcomeCallable DeleteLayerCallable(const Model::DeleteLayerRequest& request) const;

     /*
       <p>Deletes a specified layer. You must first stop and then delete all associated instances or unassign registered instances. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinglayers-basics-delete.html">How to Delete a Layer</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteLayerAsync(const Model::DeleteLayerRequest& request) const;

     /*
       <p>Deletes a specified stack. You must first delete all instances, layers, and apps or deregister registered instances. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-shutting.html">Shut Down a Stack</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::DeleteStackOutcome DeleteStack(const Model::DeleteStackRequest& request) const;

     /*
       <p>Deletes a specified stack. You must first delete all instances, layers, and apps or deregister registered instances. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-shutting.html">Shut Down a Stack</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteStackOutcomeCallable DeleteStackCallable(const Model::DeleteStackRequest& request) const;

     /*
       <p>Deletes a specified stack. You must first delete all instances, layers, and apps or deregister registered instances. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-shutting.html">Shut Down a Stack</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteStackAsync(const Model::DeleteStackRequest& request) const;

     /*
       <p>Deletes a user profile.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::DeleteUserProfileOutcome DeleteUserProfile(const Model::DeleteUserProfileRequest& request) const;

     /*
       <p>Deletes a user profile.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeleteUserProfileOutcomeCallable DeleteUserProfileCallable(const Model::DeleteUserProfileRequest& request) const;

     /*
       <p>Deletes a user profile.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeleteUserProfileAsync(const Model::DeleteUserProfileRequest& request) const;

     /*
       <p>Deregisters a specified Elastic IP address. The address can then be registered by another stack. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource Management</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::DeregisterElasticIpOutcome DeregisterElasticIp(const Model::DeregisterElasticIpRequest& request) const;

     /*
       <p>Deregisters a specified Elastic IP address. The address can then be registered by another stack. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource Management</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeregisterElasticIpOutcomeCallable DeregisterElasticIpCallable(const Model::DeregisterElasticIpRequest& request) const;

     /*
       <p>Deregisters a specified Elastic IP address. The address can then be registered by another stack. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource Management</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeregisterElasticIpAsync(const Model::DeregisterElasticIpRequest& request) const;

     /*
       <p>Deregister a registered Amazon EC2 or on-premises instance. This action removes the instance from the stack and returns it to your control. This action can not be used with instances that were created with AWS OpsWorks.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::DeregisterInstanceOutcome DeregisterInstance(const Model::DeregisterInstanceRequest& request) const;

     /*
       <p>Deregister a registered Amazon EC2 or on-premises instance. This action removes the instance from the stack and returns it to your control. This action can not be used with instances that were created with AWS OpsWorks.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeregisterInstanceOutcomeCallable DeregisterInstanceCallable(const Model::DeregisterInstanceRequest& request) const;

     /*
       <p>Deregister a registered Amazon EC2 or on-premises instance. This action removes the instance from the stack and returns it to your control. This action can not be used with instances that were created with AWS OpsWorks.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeregisterInstanceAsync(const Model::DeregisterInstanceRequest& request) const;

     /*
       <p>Deregisters an Amazon RDS instance.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::DeregisterRdsDbInstanceOutcome DeregisterRdsDbInstance(const Model::DeregisterRdsDbInstanceRequest& request) const;

     /*
       <p>Deregisters an Amazon RDS instance.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeregisterRdsDbInstanceOutcomeCallable DeregisterRdsDbInstanceCallable(const Model::DeregisterRdsDbInstanceRequest& request) const;

     /*
       <p>Deregisters an Amazon RDS instance.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeregisterRdsDbInstanceAsync(const Model::DeregisterRdsDbInstanceRequest& request) const;

     /*
       <p>Deregisters an Amazon EBS volume. The volume can then be registered by another stack. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource Management</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::DeregisterVolumeOutcome DeregisterVolume(const Model::DeregisterVolumeRequest& request) const;

     /*
       <p>Deregisters an Amazon EBS volume. The volume can then be registered by another stack. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource Management</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DeregisterVolumeOutcomeCallable DeregisterVolumeCallable(const Model::DeregisterVolumeRequest& request) const;

     /*
       <p>Deregisters an Amazon EBS volume. The volume can then be registered by another stack. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource Management</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DeregisterVolumeAsync(const Model::DeregisterVolumeRequest& request) const;

     /*
       <p>Requests a description of a specified set of apps.</p> <note> <p>You must specify at least one of the parameters.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::DescribeAppsOutcome DescribeApps(const Model::DescribeAppsRequest& request) const;

     /*
       <p>Requests a description of a specified set of apps.</p> <note> <p>You must specify at least one of the parameters.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeAppsOutcomeCallable DescribeAppsCallable(const Model::DescribeAppsRequest& request) const;

     /*
       <p>Requests a description of a specified set of apps.</p> <note> <p>You must specify at least one of the parameters.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeAppsAsync(const Model::DescribeAppsRequest& request) const;

     /*
       <p>Describes the results of specified commands.</p> <note> <p>You must specify at least one of the parameters.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::DescribeCommandsOutcome DescribeCommands(const Model::DescribeCommandsRequest& request) const;

     /*
       <p>Describes the results of specified commands.</p> <note> <p>You must specify at least one of the parameters.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeCommandsOutcomeCallable DescribeCommandsCallable(const Model::DescribeCommandsRequest& request) const;

     /*
       <p>Describes the results of specified commands.</p> <note> <p>You must specify at least one of the parameters.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeCommandsAsync(const Model::DescribeCommandsRequest& request) const;

     /*
       <p>Requests a description of a specified set of deployments.</p> <note> <p>You must specify at least one of the parameters.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::DescribeDeploymentsOutcome DescribeDeployments(const Model::DescribeDeploymentsRequest& request) const;

     /*
       <p>Requests a description of a specified set of deployments.</p> <note> <p>You must specify at least one of the parameters.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeDeploymentsOutcomeCallable DescribeDeploymentsCallable(const Model::DescribeDeploymentsRequest& request) const;

     /*
       <p>Requests a description of a specified set of deployments.</p> <note> <p>You must specify at least one of the parameters.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeDeploymentsAsync(const Model::DescribeDeploymentsRequest& request) const;

     /*
       <p>Describes <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic IP addresses</a>.</p> <note> <p>You must specify at least one of the parameters.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::DescribeElasticIpsOutcome DescribeElasticIps(const Model::DescribeElasticIpsRequest& request) const;

     /*
       <p>Describes <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic IP addresses</a>.</p> <note> <p>You must specify at least one of the parameters.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeElasticIpsOutcomeCallable DescribeElasticIpsCallable(const Model::DescribeElasticIpsRequest& request) const;

     /*
       <p>Describes <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/elastic-ip-addresses-eip.html">Elastic IP addresses</a>.</p> <note> <p>You must specify at least one of the parameters.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeElasticIpsAsync(const Model::DescribeElasticIpsRequest& request) const;

     /*
       <p>Describes a stack's Elastic Load Balancing instances.</p> <note> <p>You must specify at least one of the parameters.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::DescribeElasticLoadBalancersOutcome DescribeElasticLoadBalancers(const Model::DescribeElasticLoadBalancersRequest& request) const;

     /*
       <p>Describes a stack's Elastic Load Balancing instances.</p> <note> <p>You must specify at least one of the parameters.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeElasticLoadBalancersOutcomeCallable DescribeElasticLoadBalancersCallable(const Model::DescribeElasticLoadBalancersRequest& request) const;

     /*
       <p>Describes a stack's Elastic Load Balancing instances.</p> <note> <p>You must specify at least one of the parameters.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeElasticLoadBalancersAsync(const Model::DescribeElasticLoadBalancersRequest& request) const;

     /*
       <p>Requests a description of a set of instances.</p> <note> <p>You must specify at least one of the parameters.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::DescribeInstancesOutcome DescribeInstances(const Model::DescribeInstancesRequest& request) const;

     /*
       <p>Requests a description of a set of instances.</p> <note> <p>You must specify at least one of the parameters.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeInstancesOutcomeCallable DescribeInstancesCallable(const Model::DescribeInstancesRequest& request) const;

     /*
       <p>Requests a description of a set of instances.</p> <note> <p>You must specify at least one of the parameters.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeInstancesAsync(const Model::DescribeInstancesRequest& request) const;

     /*
       <p>Requests a description of one or more layers in a specified stack.</p> <note> <p>You must specify at least one of the parameters.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::DescribeLayersOutcome DescribeLayers(const Model::DescribeLayersRequest& request) const;

     /*
       <p>Requests a description of one or more layers in a specified stack.</p> <note> <p>You must specify at least one of the parameters.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeLayersOutcomeCallable DescribeLayersCallable(const Model::DescribeLayersRequest& request) const;

     /*
       <p>Requests a description of one or more layers in a specified stack.</p> <note> <p>You must specify at least one of the parameters.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeLayersAsync(const Model::DescribeLayersRequest& request) const;

     /*
       <p>Describes load-based auto scaling configurations for specified layers.</p> <note> <p>You must specify at least one of the parameters.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::DescribeLoadBasedAutoScalingOutcome DescribeLoadBasedAutoScaling(const Model::DescribeLoadBasedAutoScalingRequest& request) const;

     /*
       <p>Describes load-based auto scaling configurations for specified layers.</p> <note> <p>You must specify at least one of the parameters.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeLoadBasedAutoScalingOutcomeCallable DescribeLoadBasedAutoScalingCallable(const Model::DescribeLoadBasedAutoScalingRequest& request) const;

     /*
       <p>Describes load-based auto scaling configurations for specified layers.</p> <note> <p>You must specify at least one of the parameters.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeLoadBasedAutoScalingAsync(const Model::DescribeLoadBasedAutoScalingRequest& request) const;

      /*
       <p>Describes a user's SSH information.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have self-management enabled or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::DescribeMyUserProfileOutcome DescribeMyUserProfile() const;

     /*
       <p>Describes a user's SSH information.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have self-management enabled or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeMyUserProfileOutcomeCallable DescribeMyUserProfileCallable() const;

     /*
       <p>Describes a user's SSH information.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have self-management enabled or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeMyUserProfileAsync() const;

     /*
       <p>Describes the permissions for a specified stack.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::DescribePermissionsOutcome DescribePermissions(const Model::DescribePermissionsRequest& request) const;

     /*
       <p>Describes the permissions for a specified stack.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribePermissionsOutcomeCallable DescribePermissionsCallable(const Model::DescribePermissionsRequest& request) const;

     /*
       <p>Describes the permissions for a specified stack.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribePermissionsAsync(const Model::DescribePermissionsRequest& request) const;

     /*
       <p>Describe an instance's RAID arrays.</p> <note> <p>You must specify at least one of the parameters.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::DescribeRaidArraysOutcome DescribeRaidArrays(const Model::DescribeRaidArraysRequest& request) const;

     /*
       <p>Describe an instance's RAID arrays.</p> <note> <p>You must specify at least one of the parameters.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeRaidArraysOutcomeCallable DescribeRaidArraysCallable(const Model::DescribeRaidArraysRequest& request) const;

     /*
       <p>Describe an instance's RAID arrays.</p> <note> <p>You must specify at least one of the parameters.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeRaidArraysAsync(const Model::DescribeRaidArraysRequest& request) const;

     /*
       <p>Describes Amazon RDS instances.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::DescribeRdsDbInstancesOutcome DescribeRdsDbInstances(const Model::DescribeRdsDbInstancesRequest& request) const;

     /*
       <p>Describes Amazon RDS instances.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeRdsDbInstancesOutcomeCallable DescribeRdsDbInstancesCallable(const Model::DescribeRdsDbInstancesRequest& request) const;

     /*
       <p>Describes Amazon RDS instances.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeRdsDbInstancesAsync(const Model::DescribeRdsDbInstancesRequest& request) const;

     /*
       <p>Describes AWS OpsWorks service errors.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::DescribeServiceErrorsOutcome DescribeServiceErrors(const Model::DescribeServiceErrorsRequest& request) const;

     /*
       <p>Describes AWS OpsWorks service errors.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeServiceErrorsOutcomeCallable DescribeServiceErrorsCallable(const Model::DescribeServiceErrorsRequest& request) const;

     /*
       <p>Describes AWS OpsWorks service errors.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeServiceErrorsAsync(const Model::DescribeServiceErrorsRequest& request) const;

     /*
       <p>Requests a description of a stack's provisioning parameters.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::DescribeStackProvisioningParametersOutcome DescribeStackProvisioningParameters(const Model::DescribeStackProvisioningParametersRequest& request) const;

     /*
       <p>Requests a description of a stack's provisioning parameters.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeStackProvisioningParametersOutcomeCallable DescribeStackProvisioningParametersCallable(const Model::DescribeStackProvisioningParametersRequest& request) const;

     /*
       <p>Requests a description of a stack's provisioning parameters.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeStackProvisioningParametersAsync(const Model::DescribeStackProvisioningParametersRequest& request) const;

     /*
       <p>Describes the number of layers and apps in a specified stack, and the number of instances in each state, such as <code>running_setup</code> or <code>online</code>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::DescribeStackSummaryOutcome DescribeStackSummary(const Model::DescribeStackSummaryRequest& request) const;

     /*
       <p>Describes the number of layers and apps in a specified stack, and the number of instances in each state, such as <code>running_setup</code> or <code>online</code>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeStackSummaryOutcomeCallable DescribeStackSummaryCallable(const Model::DescribeStackSummaryRequest& request) const;

     /*
       <p>Describes the number of layers and apps in a specified stack, and the number of instances in each state, such as <code>running_setup</code> or <code>online</code>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeStackSummaryAsync(const Model::DescribeStackSummaryRequest& request) const;

     /*
       <p>Requests a description of one or more stacks.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::DescribeStacksOutcome DescribeStacks(const Model::DescribeStacksRequest& request) const;

     /*
       <p>Requests a description of one or more stacks.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeStacksOutcomeCallable DescribeStacksCallable(const Model::DescribeStacksRequest& request) const;

     /*
       <p>Requests a description of one or more stacks.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeStacksAsync(const Model::DescribeStacksRequest& request) const;

     /*
       <p>Describes time-based auto scaling configurations for specified instances.</p> <note> <p>You must specify at least one of the parameters.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::DescribeTimeBasedAutoScalingOutcome DescribeTimeBasedAutoScaling(const Model::DescribeTimeBasedAutoScalingRequest& request) const;

     /*
       <p>Describes time-based auto scaling configurations for specified instances.</p> <note> <p>You must specify at least one of the parameters.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeTimeBasedAutoScalingOutcomeCallable DescribeTimeBasedAutoScalingCallable(const Model::DescribeTimeBasedAutoScalingRequest& request) const;

     /*
       <p>Describes time-based auto scaling configurations for specified instances.</p> <note> <p>You must specify at least one of the parameters.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeTimeBasedAutoScalingAsync(const Model::DescribeTimeBasedAutoScalingRequest& request) const;

     /*
       <p>Describe specified users.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::DescribeUserProfilesOutcome DescribeUserProfiles(const Model::DescribeUserProfilesRequest& request) const;

     /*
       <p>Describe specified users.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeUserProfilesOutcomeCallable DescribeUserProfilesCallable(const Model::DescribeUserProfilesRequest& request) const;

     /*
       <p>Describe specified users.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeUserProfilesAsync(const Model::DescribeUserProfilesRequest& request) const;

     /*
       <p>Describes an instance's Amazon EBS volumes.</p> <note> <p>You must specify at least one of the parameters.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::DescribeVolumesOutcome DescribeVolumes(const Model::DescribeVolumesRequest& request) const;

     /*
       <p>Describes an instance's Amazon EBS volumes.</p> <note> <p>You must specify at least one of the parameters.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DescribeVolumesOutcomeCallable DescribeVolumesCallable(const Model::DescribeVolumesRequest& request) const;

     /*
       <p>Describes an instance's Amazon EBS volumes.</p> <note> <p>You must specify at least one of the parameters.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Show, Deploy, or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DescribeVolumesAsync(const Model::DescribeVolumesRequest& request) const;

     /*
       <p>Detaches a specified Elastic Load Balancing instance from its layer.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::DetachElasticLoadBalancerOutcome DetachElasticLoadBalancer(const Model::DetachElasticLoadBalancerRequest& request) const;

     /*
       <p>Detaches a specified Elastic Load Balancing instance from its layer.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DetachElasticLoadBalancerOutcomeCallable DetachElasticLoadBalancerCallable(const Model::DetachElasticLoadBalancerRequest& request) const;

     /*
       <p>Detaches a specified Elastic Load Balancing instance from its layer.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DetachElasticLoadBalancerAsync(const Model::DetachElasticLoadBalancerRequest& request) const;

     /*
       <p>Disassociates an Elastic IP address from its instance. The address remains registered with the stack. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource Management</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::DisassociateElasticIpOutcome DisassociateElasticIp(const Model::DisassociateElasticIpRequest& request) const;

     /*
       <p>Disassociates an Elastic IP address from its instance. The address remains registered with the stack. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource Management</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::DisassociateElasticIpOutcomeCallable DisassociateElasticIpCallable(const Model::DisassociateElasticIpRequest& request) const;

     /*
       <p>Disassociates an Elastic IP address from its instance. The address remains registered with the stack. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource Management</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void DisassociateElasticIpAsync(const Model::DisassociateElasticIpRequest& request) const;

     /*
       <p>Gets a generated host name for the specified layer, based on the current host name theme.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::GetHostnameSuggestionOutcome GetHostnameSuggestion(const Model::GetHostnameSuggestionRequest& request) const;

     /*
       <p>Gets a generated host name for the specified layer, based on the current host name theme.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GetHostnameSuggestionOutcomeCallable GetHostnameSuggestionCallable(const Model::GetHostnameSuggestionRequest& request) const;

     /*
       <p>Gets a generated host name for the specified layer, based on the current host name theme.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GetHostnameSuggestionAsync(const Model::GetHostnameSuggestionRequest& request) const;

     /*
       <note>This API can be used only with Windows stacks.</note> <p>Grants RDP access to a Windows instance for a specified time period.</p>
     */
     Model::GrantAccessOutcome GrantAccess(const Model::GrantAccessRequest& request) const;

     /*
       <note>This API can be used only with Windows stacks.</note> <p>Grants RDP access to a Windows instance for a specified time period.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::GrantAccessOutcomeCallable GrantAccessCallable(const Model::GrantAccessRequest& request) const;

     /*
       <note>This API can be used only with Windows stacks.</note> <p>Grants RDP access to a Windows instance for a specified time period.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void GrantAccessAsync(const Model::GrantAccessRequest& request) const;

     /*
       <p>Reboots a specified instance. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-starting.html">Starting, Stopping, and Rebooting Instances</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::RebootInstanceOutcome RebootInstance(const Model::RebootInstanceRequest& request) const;

     /*
       <p>Reboots a specified instance. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-starting.html">Starting, Stopping, and Rebooting Instances</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RebootInstanceOutcomeCallable RebootInstanceCallable(const Model::RebootInstanceRequest& request) const;

     /*
       <p>Reboots a specified instance. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-starting.html">Starting, Stopping, and Rebooting Instances</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RebootInstanceAsync(const Model::RebootInstanceRequest& request) const;

     /*
       <p>Registers an Elastic IP address with a specified stack. An address can be registered with only one stack at a time. If the address is already registered, you must first deregister it by calling <a>DeregisterElasticIp</a>. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource Management</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::RegisterElasticIpOutcome RegisterElasticIp(const Model::RegisterElasticIpRequest& request) const;

     /*
       <p>Registers an Elastic IP address with a specified stack. An address can be registered with only one stack at a time. If the address is already registered, you must first deregister it by calling <a>DeregisterElasticIp</a>. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource Management</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RegisterElasticIpOutcomeCallable RegisterElasticIpCallable(const Model::RegisterElasticIpRequest& request) const;

     /*
       <p>Registers an Elastic IP address with a specified stack. An address can be registered with only one stack at a time. If the address is already registered, you must first deregister it by calling <a>DeregisterElasticIp</a>. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource Management</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RegisterElasticIpAsync(const Model::RegisterElasticIpRequest& request) const;

     /*
       <p>Registers instances with a specified stack that were created outside of AWS OpsWorks.</p> <note>We do not recommend using this action to register instances. The complete registration operation has two primary steps, installing the AWS OpsWorks agent on the instance and registering the instance with the stack. <code>RegisterInstance</code> handles only the second step. You should instead use the AWS CLI <code>register</code> command, which performs the entire registration operation.</note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::RegisterInstanceOutcome RegisterInstance(const Model::RegisterInstanceRequest& request) const;

     /*
       <p>Registers instances with a specified stack that were created outside of AWS OpsWorks.</p> <note>We do not recommend using this action to register instances. The complete registration operation has two primary steps, installing the AWS OpsWorks agent on the instance and registering the instance with the stack. <code>RegisterInstance</code> handles only the second step. You should instead use the AWS CLI <code>register</code> command, which performs the entire registration operation.</note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RegisterInstanceOutcomeCallable RegisterInstanceCallable(const Model::RegisterInstanceRequest& request) const;

     /*
       <p>Registers instances with a specified stack that were created outside of AWS OpsWorks.</p> <note>We do not recommend using this action to register instances. The complete registration operation has two primary steps, installing the AWS OpsWorks agent on the instance and registering the instance with the stack. <code>RegisterInstance</code> handles only the second step. You should instead use the AWS CLI <code>register</code> command, which performs the entire registration operation.</note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RegisterInstanceAsync(const Model::RegisterInstanceRequest& request) const;

     /*
       <p>Registers an Amazon RDS instance with a stack.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::RegisterRdsDbInstanceOutcome RegisterRdsDbInstance(const Model::RegisterRdsDbInstanceRequest& request) const;

     /*
       <p>Registers an Amazon RDS instance with a stack.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RegisterRdsDbInstanceOutcomeCallable RegisterRdsDbInstanceCallable(const Model::RegisterRdsDbInstanceRequest& request) const;

     /*
       <p>Registers an Amazon RDS instance with a stack.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RegisterRdsDbInstanceAsync(const Model::RegisterRdsDbInstanceRequest& request) const;

     /*
       <p>Registers an Amazon EBS volume with a specified stack. A volume can be registered with only one stack at a time. If the volume is already registered, you must first deregister it by calling <a>DeregisterVolume</a>. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource Management</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::RegisterVolumeOutcome RegisterVolume(const Model::RegisterVolumeRequest& request) const;

     /*
       <p>Registers an Amazon EBS volume with a specified stack. A volume can be registered with only one stack at a time. If the volume is already registered, you must first deregister it by calling <a>DeregisterVolume</a>. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource Management</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::RegisterVolumeOutcomeCallable RegisterVolumeCallable(const Model::RegisterVolumeRequest& request) const;

     /*
       <p>Registers an Amazon EBS volume with a specified stack. A volume can be registered with only one stack at a time. If the volume is already registered, you must first deregister it by calling <a>DeregisterVolume</a>. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource Management</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void RegisterVolumeAsync(const Model::RegisterVolumeRequest& request) const;

     /*
       <p>Specify the load-based auto scaling configuration for a specified layer. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-autoscaling.html">Managing Load with Time-based and Load-based Instances</a>.</p> <note> <p>To use load-based auto scaling, you must create a set of load-based auto scaling instances. Load-based auto scaling operates only on the instances from that set, so you must ensure that you have created enough instances to handle the maximum anticipated load.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::SetLoadBasedAutoScalingOutcome SetLoadBasedAutoScaling(const Model::SetLoadBasedAutoScalingRequest& request) const;

     /*
       <p>Specify the load-based auto scaling configuration for a specified layer. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-autoscaling.html">Managing Load with Time-based and Load-based Instances</a>.</p> <note> <p>To use load-based auto scaling, you must create a set of load-based auto scaling instances. Load-based auto scaling operates only on the instances from that set, so you must ensure that you have created enough instances to handle the maximum anticipated load.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::SetLoadBasedAutoScalingOutcomeCallable SetLoadBasedAutoScalingCallable(const Model::SetLoadBasedAutoScalingRequest& request) const;

     /*
       <p>Specify the load-based auto scaling configuration for a specified layer. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-autoscaling.html">Managing Load with Time-based and Load-based Instances</a>.</p> <note> <p>To use load-based auto scaling, you must create a set of load-based auto scaling instances. Load-based auto scaling operates only on the instances from that set, so you must ensure that you have created enough instances to handle the maximum anticipated load.</p> </note> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void SetLoadBasedAutoScalingAsync(const Model::SetLoadBasedAutoScalingRequest& request) const;

     /*
       <p>Specifies a user's permissions. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingsecurity.html">Security and Permissions</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::SetPermissionOutcome SetPermission(const Model::SetPermissionRequest& request) const;

     /*
       <p>Specifies a user's permissions. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingsecurity.html">Security and Permissions</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::SetPermissionOutcomeCallable SetPermissionCallable(const Model::SetPermissionRequest& request) const;

     /*
       <p>Specifies a user's permissions. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingsecurity.html">Security and Permissions</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void SetPermissionAsync(const Model::SetPermissionRequest& request) const;

     /*
       <p>Specify the time-based auto scaling configuration for a specified instance. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-autoscaling.html">Managing Load with Time-based and Load-based Instances</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::SetTimeBasedAutoScalingOutcome SetTimeBasedAutoScaling(const Model::SetTimeBasedAutoScalingRequest& request) const;

     /*
       <p>Specify the time-based auto scaling configuration for a specified instance. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-autoscaling.html">Managing Load with Time-based and Load-based Instances</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::SetTimeBasedAutoScalingOutcomeCallable SetTimeBasedAutoScalingCallable(const Model::SetTimeBasedAutoScalingRequest& request) const;

     /*
       <p>Specify the time-based auto scaling configuration for a specified instance. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-autoscaling.html">Managing Load with Time-based and Load-based Instances</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void SetTimeBasedAutoScalingAsync(const Model::SetTimeBasedAutoScalingRequest& request) const;

     /*
       <p>Starts a specified instance. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-starting.html">Starting, Stopping, and Rebooting Instances</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::StartInstanceOutcome StartInstance(const Model::StartInstanceRequest& request) const;

     /*
       <p>Starts a specified instance. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-starting.html">Starting, Stopping, and Rebooting Instances</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::StartInstanceOutcomeCallable StartInstanceCallable(const Model::StartInstanceRequest& request) const;

     /*
       <p>Starts a specified instance. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-starting.html">Starting, Stopping, and Rebooting Instances</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void StartInstanceAsync(const Model::StartInstanceRequest& request) const;

     /*
       <p>Starts a stack's instances. </p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::StartStackOutcome StartStack(const Model::StartStackRequest& request) const;

     /*
       <p>Starts a stack's instances. </p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::StartStackOutcomeCallable StartStackCallable(const Model::StartStackRequest& request) const;

     /*
       <p>Starts a stack's instances. </p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void StartStackAsync(const Model::StartStackRequest& request) const;

     /*
       <p>Stops a specified instance. When you stop a standard instance, the data disappears and must be reinstalled when you restart the instance. You can stop an Amazon EBS-backed instance without losing data. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-starting.html">Starting, Stopping, and Rebooting Instances</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::StopInstanceOutcome StopInstance(const Model::StopInstanceRequest& request) const;

     /*
       <p>Stops a specified instance. When you stop a standard instance, the data disappears and must be reinstalled when you restart the instance. You can stop an Amazon EBS-backed instance without losing data. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-starting.html">Starting, Stopping, and Rebooting Instances</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::StopInstanceOutcomeCallable StopInstanceCallable(const Model::StopInstanceRequest& request) const;

     /*
       <p>Stops a specified instance. When you stop a standard instance, the data disappears and must be reinstalled when you restart the instance. You can stop an Amazon EBS-backed instance without losing data. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-starting.html">Starting, Stopping, and Rebooting Instances</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void StopInstanceAsync(const Model::StopInstanceRequest& request) const;

     /*
       <p>Stops a specified stack.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::StopStackOutcome StopStack(const Model::StopStackRequest& request) const;

     /*
       <p>Stops a specified stack.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::StopStackOutcomeCallable StopStackCallable(const Model::StopStackRequest& request) const;

     /*
       <p>Stops a specified stack.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void StopStackAsync(const Model::StopStackRequest& request) const;

     /*
       <p>Unassigns a registered instance from all of it's layers. The instance remains in the stack as an unassigned instance and can be assigned to another layer, as needed. You cannot use this action with instances that were created with AWS OpsWorks.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::UnassignInstanceOutcome UnassignInstance(const Model::UnassignInstanceRequest& request) const;

     /*
       <p>Unassigns a registered instance from all of it's layers. The instance remains in the stack as an unassigned instance and can be assigned to another layer, as needed. You cannot use this action with instances that were created with AWS OpsWorks.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UnassignInstanceOutcomeCallable UnassignInstanceCallable(const Model::UnassignInstanceRequest& request) const;

     /*
       <p>Unassigns a registered instance from all of it's layers. The instance remains in the stack as an unassigned instance and can be assigned to another layer, as needed. You cannot use this action with instances that were created with AWS OpsWorks.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UnassignInstanceAsync(const Model::UnassignInstanceRequest& request) const;

     /*
       <p>Unassigns an assigned Amazon EBS volume. The volume remains registered with the stack. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource Management</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::UnassignVolumeOutcome UnassignVolume(const Model::UnassignVolumeRequest& request) const;

     /*
       <p>Unassigns an assigned Amazon EBS volume. The volume remains registered with the stack. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource Management</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UnassignVolumeOutcomeCallable UnassignVolumeCallable(const Model::UnassignVolumeRequest& request) const;

     /*
       <p>Unassigns an assigned Amazon EBS volume. The volume remains registered with the stack. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource Management</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UnassignVolumeAsync(const Model::UnassignVolumeRequest& request) const;

     /*
       <p>Updates a specified app.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Deploy or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::UpdateAppOutcome UpdateApp(const Model::UpdateAppRequest& request) const;

     /*
       <p>Updates a specified app.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Deploy or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UpdateAppOutcomeCallable UpdateAppCallable(const Model::UpdateAppRequest& request) const;

     /*
       <p>Updates a specified app.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Deploy or Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UpdateAppAsync(const Model::UpdateAppRequest& request) const;

     /*
       <p>Updates a registered Elastic IP address's name. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource Management</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::UpdateElasticIpOutcome UpdateElasticIp(const Model::UpdateElasticIpRequest& request) const;

     /*
       <p>Updates a registered Elastic IP address's name. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource Management</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UpdateElasticIpOutcomeCallable UpdateElasticIpCallable(const Model::UpdateElasticIpRequest& request) const;

     /*
       <p>Updates a registered Elastic IP address's name. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource Management</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UpdateElasticIpAsync(const Model::UpdateElasticIpRequest& request) const;

     /*
       <p>Updates a specified instance.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::UpdateInstanceOutcome UpdateInstance(const Model::UpdateInstanceRequest& request) const;

     /*
       <p>Updates a specified instance.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UpdateInstanceOutcomeCallable UpdateInstanceCallable(const Model::UpdateInstanceRequest& request) const;

     /*
       <p>Updates a specified instance.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UpdateInstanceAsync(const Model::UpdateInstanceRequest& request) const;

     /*
       <p>Updates a specified layer.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::UpdateLayerOutcome UpdateLayer(const Model::UpdateLayerRequest& request) const;

     /*
       <p>Updates a specified layer.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UpdateLayerOutcomeCallable UpdateLayerCallable(const Model::UpdateLayerRequest& request) const;

     /*
       <p>Updates a specified layer.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UpdateLayerAsync(const Model::UpdateLayerRequest& request) const;

     /*
       <p>Updates a user's SSH public key.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have self-management enabled or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::UpdateMyUserProfileOutcome UpdateMyUserProfile(const Model::UpdateMyUserProfileRequest& request) const;

     /*
       <p>Updates a user's SSH public key.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have self-management enabled or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UpdateMyUserProfileOutcomeCallable UpdateMyUserProfileCallable(const Model::UpdateMyUserProfileRequest& request) const;

     /*
       <p>Updates a user's SSH public key.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have self-management enabled or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UpdateMyUserProfileAsync(const Model::UpdateMyUserProfileRequest& request) const;

     /*
       <p>Updates an Amazon RDS instance.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::UpdateRdsDbInstanceOutcome UpdateRdsDbInstance(const Model::UpdateRdsDbInstanceRequest& request) const;

     /*
       <p>Updates an Amazon RDS instance.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UpdateRdsDbInstanceOutcomeCallable UpdateRdsDbInstanceCallable(const Model::UpdateRdsDbInstanceRequest& request) const;

     /*
       <p>Updates an Amazon RDS instance.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UpdateRdsDbInstanceAsync(const Model::UpdateRdsDbInstanceRequest& request) const;

     /*
       <p>Updates a specified stack.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::UpdateStackOutcome UpdateStack(const Model::UpdateStackRequest& request) const;

     /*
       <p>Updates a specified stack.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UpdateStackOutcomeCallable UpdateStackCallable(const Model::UpdateStackRequest& request) const;

     /*
       <p>Updates a specified stack.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UpdateStackAsync(const Model::UpdateStackRequest& request) const;

     /*
       <p>Updates a specified user profile.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::UpdateUserProfileOutcome UpdateUserProfile(const Model::UpdateUserProfileRequest& request) const;

     /*
       <p>Updates a specified user profile.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UpdateUserProfileOutcomeCallable UpdateUserProfileCallable(const Model::UpdateUserProfileRequest& request) const;

     /*
       <p>Updates a specified user profile.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UpdateUserProfileAsync(const Model::UpdateUserProfileRequest& request) const;

     /*
       <p>Updates an Amazon EBS volume's name or mount point. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource Management</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>
     */
     Model::UpdateVolumeOutcome UpdateVolume(const Model::UpdateVolumeRequest& request) const;

     /*
       <p>Updates an Amazon EBS volume's name or mount point. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource Management</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

       returns a future to the operation so that it can be executed in parallel to other requests.
     */
     Model::UpdateVolumeOutcomeCallable UpdateVolumeCallable(const Model::UpdateVolumeRequest& request) const;

     /*
       <p>Updates an Amazon EBS volume's name or mount point. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/resources.html">Resource Management</a>.</p> <p><b>Required Permissions</b>: To use this action, an IAM user must have a Manage permissions level for the stack, or an attached policy that explicitly grants permissions. For more information on user permissions, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-users.html">Managing User Permissions</a>.</p>

      Queues the request into a thread executor and triggers associated callback when operation has finished.
     */
     void UpdateVolumeAsync(const Model::UpdateVolumeRequest& request) const;

   /**
    * Adds an event handler for AssignInstanceAsync to call upon completion to the handler chain. You need to call this to
    * use AssignInstanceAsync.
    */
    inline void RegisterAssignInstanceOutcomeReceivedHandler(const AssignInstanceOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onAssignInstanceOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for AssignInstance.
    */
    inline void ClearAllAssignInstanceOutcomeReceivedHandlers()
    {
      m_onAssignInstanceOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for AssignVolumeAsync to call upon completion to the handler chain. You need to call this to
    * use AssignVolumeAsync.
    */
    inline void RegisterAssignVolumeOutcomeReceivedHandler(const AssignVolumeOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onAssignVolumeOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for AssignVolume.
    */
    inline void ClearAllAssignVolumeOutcomeReceivedHandlers()
    {
      m_onAssignVolumeOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for AssociateElasticIpAsync to call upon completion to the handler chain. You need to call this to
    * use AssociateElasticIpAsync.
    */
    inline void RegisterAssociateElasticIpOutcomeReceivedHandler(const AssociateElasticIpOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onAssociateElasticIpOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for AssociateElasticIp.
    */
    inline void ClearAllAssociateElasticIpOutcomeReceivedHandlers()
    {
      m_onAssociateElasticIpOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for AttachElasticLoadBalancerAsync to call upon completion to the handler chain. You need to call this to
    * use AttachElasticLoadBalancerAsync.
    */
    inline void RegisterAttachElasticLoadBalancerOutcomeReceivedHandler(const AttachElasticLoadBalancerOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onAttachElasticLoadBalancerOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for AttachElasticLoadBalancer.
    */
    inline void ClearAllAttachElasticLoadBalancerOutcomeReceivedHandlers()
    {
      m_onAttachElasticLoadBalancerOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CloneStackAsync to call upon completion to the handler chain. You need to call this to
    * use CloneStackAsync.
    */
    inline void RegisterCloneStackOutcomeReceivedHandler(const CloneStackOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCloneStackOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CloneStack.
    */
    inline void ClearAllCloneStackOutcomeReceivedHandlers()
    {
      m_onCloneStackOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateAppAsync to call upon completion to the handler chain. You need to call this to
    * use CreateAppAsync.
    */
    inline void RegisterCreateAppOutcomeReceivedHandler(const CreateAppOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateAppOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateApp.
    */
    inline void ClearAllCreateAppOutcomeReceivedHandlers()
    {
      m_onCreateAppOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateDeploymentAsync to call upon completion to the handler chain. You need to call this to
    * use CreateDeploymentAsync.
    */
    inline void RegisterCreateDeploymentOutcomeReceivedHandler(const CreateDeploymentOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateDeploymentOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateDeployment.
    */
    inline void ClearAllCreateDeploymentOutcomeReceivedHandlers()
    {
      m_onCreateDeploymentOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateInstanceAsync to call upon completion to the handler chain. You need to call this to
    * use CreateInstanceAsync.
    */
    inline void RegisterCreateInstanceOutcomeReceivedHandler(const CreateInstanceOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateInstanceOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateInstance.
    */
    inline void ClearAllCreateInstanceOutcomeReceivedHandlers()
    {
      m_onCreateInstanceOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateLayerAsync to call upon completion to the handler chain. You need to call this to
    * use CreateLayerAsync.
    */
    inline void RegisterCreateLayerOutcomeReceivedHandler(const CreateLayerOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateLayerOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateLayer.
    */
    inline void ClearAllCreateLayerOutcomeReceivedHandlers()
    {
      m_onCreateLayerOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateStackAsync to call upon completion to the handler chain. You need to call this to
    * use CreateStackAsync.
    */
    inline void RegisterCreateStackOutcomeReceivedHandler(const CreateStackOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateStackOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateStack.
    */
    inline void ClearAllCreateStackOutcomeReceivedHandlers()
    {
      m_onCreateStackOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for CreateUserProfileAsync to call upon completion to the handler chain. You need to call this to
    * use CreateUserProfileAsync.
    */
    inline void RegisterCreateUserProfileOutcomeReceivedHandler(const CreateUserProfileOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onCreateUserProfileOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for CreateUserProfile.
    */
    inline void ClearAllCreateUserProfileOutcomeReceivedHandlers()
    {
      m_onCreateUserProfileOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteAppAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteAppAsync.
    */
    inline void RegisterDeleteAppOutcomeReceivedHandler(const DeleteAppOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteAppOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteApp.
    */
    inline void ClearAllDeleteAppOutcomeReceivedHandlers()
    {
      m_onDeleteAppOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteInstanceAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteInstanceAsync.
    */
    inline void RegisterDeleteInstanceOutcomeReceivedHandler(const DeleteInstanceOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteInstanceOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteInstance.
    */
    inline void ClearAllDeleteInstanceOutcomeReceivedHandlers()
    {
      m_onDeleteInstanceOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteLayerAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteLayerAsync.
    */
    inline void RegisterDeleteLayerOutcomeReceivedHandler(const DeleteLayerOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteLayerOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteLayer.
    */
    inline void ClearAllDeleteLayerOutcomeReceivedHandlers()
    {
      m_onDeleteLayerOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteStackAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteStackAsync.
    */
    inline void RegisterDeleteStackOutcomeReceivedHandler(const DeleteStackOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteStackOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteStack.
    */
    inline void ClearAllDeleteStackOutcomeReceivedHandlers()
    {
      m_onDeleteStackOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeleteUserProfileAsync to call upon completion to the handler chain. You need to call this to
    * use DeleteUserProfileAsync.
    */
    inline void RegisterDeleteUserProfileOutcomeReceivedHandler(const DeleteUserProfileOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeleteUserProfileOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeleteUserProfile.
    */
    inline void ClearAllDeleteUserProfileOutcomeReceivedHandlers()
    {
      m_onDeleteUserProfileOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeregisterElasticIpAsync to call upon completion to the handler chain. You need to call this to
    * use DeregisterElasticIpAsync.
    */
    inline void RegisterDeregisterElasticIpOutcomeReceivedHandler(const DeregisterElasticIpOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeregisterElasticIpOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeregisterElasticIp.
    */
    inline void ClearAllDeregisterElasticIpOutcomeReceivedHandlers()
    {
      m_onDeregisterElasticIpOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeregisterInstanceAsync to call upon completion to the handler chain. You need to call this to
    * use DeregisterInstanceAsync.
    */
    inline void RegisterDeregisterInstanceOutcomeReceivedHandler(const DeregisterInstanceOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeregisterInstanceOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeregisterInstance.
    */
    inline void ClearAllDeregisterInstanceOutcomeReceivedHandlers()
    {
      m_onDeregisterInstanceOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeregisterRdsDbInstanceAsync to call upon completion to the handler chain. You need to call this to
    * use DeregisterRdsDbInstanceAsync.
    */
    inline void RegisterDeregisterRdsDbInstanceOutcomeReceivedHandler(const DeregisterRdsDbInstanceOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeregisterRdsDbInstanceOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeregisterRdsDbInstance.
    */
    inline void ClearAllDeregisterRdsDbInstanceOutcomeReceivedHandlers()
    {
      m_onDeregisterRdsDbInstanceOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DeregisterVolumeAsync to call upon completion to the handler chain. You need to call this to
    * use DeregisterVolumeAsync.
    */
    inline void RegisterDeregisterVolumeOutcomeReceivedHandler(const DeregisterVolumeOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDeregisterVolumeOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DeregisterVolume.
    */
    inline void ClearAllDeregisterVolumeOutcomeReceivedHandlers()
    {
      m_onDeregisterVolumeOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeAppsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeAppsAsync.
    */
    inline void RegisterDescribeAppsOutcomeReceivedHandler(const DescribeAppsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeAppsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeApps.
    */
    inline void ClearAllDescribeAppsOutcomeReceivedHandlers()
    {
      m_onDescribeAppsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeCommandsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeCommandsAsync.
    */
    inline void RegisterDescribeCommandsOutcomeReceivedHandler(const DescribeCommandsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeCommandsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeCommands.
    */
    inline void ClearAllDescribeCommandsOutcomeReceivedHandlers()
    {
      m_onDescribeCommandsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeDeploymentsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeDeploymentsAsync.
    */
    inline void RegisterDescribeDeploymentsOutcomeReceivedHandler(const DescribeDeploymentsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeDeploymentsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeDeployments.
    */
    inline void ClearAllDescribeDeploymentsOutcomeReceivedHandlers()
    {
      m_onDescribeDeploymentsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeElasticIpsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeElasticIpsAsync.
    */
    inline void RegisterDescribeElasticIpsOutcomeReceivedHandler(const DescribeElasticIpsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeElasticIpsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeElasticIps.
    */
    inline void ClearAllDescribeElasticIpsOutcomeReceivedHandlers()
    {
      m_onDescribeElasticIpsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeElasticLoadBalancersAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeElasticLoadBalancersAsync.
    */
    inline void RegisterDescribeElasticLoadBalancersOutcomeReceivedHandler(const DescribeElasticLoadBalancersOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeElasticLoadBalancersOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeElasticLoadBalancers.
    */
    inline void ClearAllDescribeElasticLoadBalancersOutcomeReceivedHandlers()
    {
      m_onDescribeElasticLoadBalancersOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeInstancesAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeInstancesAsync.
    */
    inline void RegisterDescribeInstancesOutcomeReceivedHandler(const DescribeInstancesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeInstancesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeInstances.
    */
    inline void ClearAllDescribeInstancesOutcomeReceivedHandlers()
    {
      m_onDescribeInstancesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeLayersAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeLayersAsync.
    */
    inline void RegisterDescribeLayersOutcomeReceivedHandler(const DescribeLayersOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeLayersOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeLayers.
    */
    inline void ClearAllDescribeLayersOutcomeReceivedHandlers()
    {
      m_onDescribeLayersOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeLoadBasedAutoScalingAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeLoadBasedAutoScalingAsync.
    */
    inline void RegisterDescribeLoadBasedAutoScalingOutcomeReceivedHandler(const DescribeLoadBasedAutoScalingOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeLoadBasedAutoScalingOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeLoadBasedAutoScaling.
    */
    inline void ClearAllDescribeLoadBasedAutoScalingOutcomeReceivedHandlers()
    {
      m_onDescribeLoadBasedAutoScalingOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeMyUserProfileAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeMyUserProfileAsync.
    */
    inline void RegisterDescribeMyUserProfileOutcomeReceivedHandler(const DescribeMyUserProfileOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeMyUserProfileOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeMyUserProfile.
    */
    inline void ClearAllDescribeMyUserProfileOutcomeReceivedHandlers()
    {
      m_onDescribeMyUserProfileOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribePermissionsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribePermissionsAsync.
    */
    inline void RegisterDescribePermissionsOutcomeReceivedHandler(const DescribePermissionsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribePermissionsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribePermissions.
    */
    inline void ClearAllDescribePermissionsOutcomeReceivedHandlers()
    {
      m_onDescribePermissionsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeRaidArraysAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeRaidArraysAsync.
    */
    inline void RegisterDescribeRaidArraysOutcomeReceivedHandler(const DescribeRaidArraysOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeRaidArraysOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeRaidArrays.
    */
    inline void ClearAllDescribeRaidArraysOutcomeReceivedHandlers()
    {
      m_onDescribeRaidArraysOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeRdsDbInstancesAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeRdsDbInstancesAsync.
    */
    inline void RegisterDescribeRdsDbInstancesOutcomeReceivedHandler(const DescribeRdsDbInstancesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeRdsDbInstancesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeRdsDbInstances.
    */
    inline void ClearAllDescribeRdsDbInstancesOutcomeReceivedHandlers()
    {
      m_onDescribeRdsDbInstancesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeServiceErrorsAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeServiceErrorsAsync.
    */
    inline void RegisterDescribeServiceErrorsOutcomeReceivedHandler(const DescribeServiceErrorsOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeServiceErrorsOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeServiceErrors.
    */
    inline void ClearAllDescribeServiceErrorsOutcomeReceivedHandlers()
    {
      m_onDescribeServiceErrorsOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeStackProvisioningParametersAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeStackProvisioningParametersAsync.
    */
    inline void RegisterDescribeStackProvisioningParametersOutcomeReceivedHandler(const DescribeStackProvisioningParametersOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeStackProvisioningParametersOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeStackProvisioningParameters.
    */
    inline void ClearAllDescribeStackProvisioningParametersOutcomeReceivedHandlers()
    {
      m_onDescribeStackProvisioningParametersOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeStackSummaryAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeStackSummaryAsync.
    */
    inline void RegisterDescribeStackSummaryOutcomeReceivedHandler(const DescribeStackSummaryOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeStackSummaryOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeStackSummary.
    */
    inline void ClearAllDescribeStackSummaryOutcomeReceivedHandlers()
    {
      m_onDescribeStackSummaryOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeStacksAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeStacksAsync.
    */
    inline void RegisterDescribeStacksOutcomeReceivedHandler(const DescribeStacksOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeStacksOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeStacks.
    */
    inline void ClearAllDescribeStacksOutcomeReceivedHandlers()
    {
      m_onDescribeStacksOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeTimeBasedAutoScalingAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeTimeBasedAutoScalingAsync.
    */
    inline void RegisterDescribeTimeBasedAutoScalingOutcomeReceivedHandler(const DescribeTimeBasedAutoScalingOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeTimeBasedAutoScalingOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeTimeBasedAutoScaling.
    */
    inline void ClearAllDescribeTimeBasedAutoScalingOutcomeReceivedHandlers()
    {
      m_onDescribeTimeBasedAutoScalingOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeUserProfilesAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeUserProfilesAsync.
    */
    inline void RegisterDescribeUserProfilesOutcomeReceivedHandler(const DescribeUserProfilesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeUserProfilesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeUserProfiles.
    */
    inline void ClearAllDescribeUserProfilesOutcomeReceivedHandlers()
    {
      m_onDescribeUserProfilesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DescribeVolumesAsync to call upon completion to the handler chain. You need to call this to
    * use DescribeVolumesAsync.
    */
    inline void RegisterDescribeVolumesOutcomeReceivedHandler(const DescribeVolumesOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDescribeVolumesOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DescribeVolumes.
    */
    inline void ClearAllDescribeVolumesOutcomeReceivedHandlers()
    {
      m_onDescribeVolumesOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DetachElasticLoadBalancerAsync to call upon completion to the handler chain. You need to call this to
    * use DetachElasticLoadBalancerAsync.
    */
    inline void RegisterDetachElasticLoadBalancerOutcomeReceivedHandler(const DetachElasticLoadBalancerOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDetachElasticLoadBalancerOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DetachElasticLoadBalancer.
    */
    inline void ClearAllDetachElasticLoadBalancerOutcomeReceivedHandlers()
    {
      m_onDetachElasticLoadBalancerOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for DisassociateElasticIpAsync to call upon completion to the handler chain. You need to call this to
    * use DisassociateElasticIpAsync.
    */
    inline void RegisterDisassociateElasticIpOutcomeReceivedHandler(const DisassociateElasticIpOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onDisassociateElasticIpOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for DisassociateElasticIp.
    */
    inline void ClearAllDisassociateElasticIpOutcomeReceivedHandlers()
    {
      m_onDisassociateElasticIpOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GetHostnameSuggestionAsync to call upon completion to the handler chain. You need to call this to
    * use GetHostnameSuggestionAsync.
    */
    inline void RegisterGetHostnameSuggestionOutcomeReceivedHandler(const GetHostnameSuggestionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGetHostnameSuggestionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GetHostnameSuggestion.
    */
    inline void ClearAllGetHostnameSuggestionOutcomeReceivedHandlers()
    {
      m_onGetHostnameSuggestionOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for GrantAccessAsync to call upon completion to the handler chain. You need to call this to
    * use GrantAccessAsync.
    */
    inline void RegisterGrantAccessOutcomeReceivedHandler(const GrantAccessOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onGrantAccessOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for GrantAccess.
    */
    inline void ClearAllGrantAccessOutcomeReceivedHandlers()
    {
      m_onGrantAccessOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RebootInstanceAsync to call upon completion to the handler chain. You need to call this to
    * use RebootInstanceAsync.
    */
    inline void RegisterRebootInstanceOutcomeReceivedHandler(const RebootInstanceOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRebootInstanceOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RebootInstance.
    */
    inline void ClearAllRebootInstanceOutcomeReceivedHandlers()
    {
      m_onRebootInstanceOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RegisterElasticIpAsync to call upon completion to the handler chain. You need to call this to
    * use RegisterElasticIpAsync.
    */
    inline void RegisterRegisterElasticIpOutcomeReceivedHandler(const RegisterElasticIpOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRegisterElasticIpOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RegisterElasticIp.
    */
    inline void ClearAllRegisterElasticIpOutcomeReceivedHandlers()
    {
      m_onRegisterElasticIpOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RegisterInstanceAsync to call upon completion to the handler chain. You need to call this to
    * use RegisterInstanceAsync.
    */
    inline void RegisterRegisterInstanceOutcomeReceivedHandler(const RegisterInstanceOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRegisterInstanceOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RegisterInstance.
    */
    inline void ClearAllRegisterInstanceOutcomeReceivedHandlers()
    {
      m_onRegisterInstanceOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RegisterRdsDbInstanceAsync to call upon completion to the handler chain. You need to call this to
    * use RegisterRdsDbInstanceAsync.
    */
    inline void RegisterRegisterRdsDbInstanceOutcomeReceivedHandler(const RegisterRdsDbInstanceOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRegisterRdsDbInstanceOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RegisterRdsDbInstance.
    */
    inline void ClearAllRegisterRdsDbInstanceOutcomeReceivedHandlers()
    {
      m_onRegisterRdsDbInstanceOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for RegisterVolumeAsync to call upon completion to the handler chain. You need to call this to
    * use RegisterVolumeAsync.
    */
    inline void RegisterRegisterVolumeOutcomeReceivedHandler(const RegisterVolumeOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onRegisterVolumeOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for RegisterVolume.
    */
    inline void ClearAllRegisterVolumeOutcomeReceivedHandlers()
    {
      m_onRegisterVolumeOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for SetLoadBasedAutoScalingAsync to call upon completion to the handler chain. You need to call this to
    * use SetLoadBasedAutoScalingAsync.
    */
    inline void RegisterSetLoadBasedAutoScalingOutcomeReceivedHandler(const SetLoadBasedAutoScalingOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onSetLoadBasedAutoScalingOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for SetLoadBasedAutoScaling.
    */
    inline void ClearAllSetLoadBasedAutoScalingOutcomeReceivedHandlers()
    {
      m_onSetLoadBasedAutoScalingOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for SetPermissionAsync to call upon completion to the handler chain. You need to call this to
    * use SetPermissionAsync.
    */
    inline void RegisterSetPermissionOutcomeReceivedHandler(const SetPermissionOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onSetPermissionOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for SetPermission.
    */
    inline void ClearAllSetPermissionOutcomeReceivedHandlers()
    {
      m_onSetPermissionOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for SetTimeBasedAutoScalingAsync to call upon completion to the handler chain. You need to call this to
    * use SetTimeBasedAutoScalingAsync.
    */
    inline void RegisterSetTimeBasedAutoScalingOutcomeReceivedHandler(const SetTimeBasedAutoScalingOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onSetTimeBasedAutoScalingOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for SetTimeBasedAutoScaling.
    */
    inline void ClearAllSetTimeBasedAutoScalingOutcomeReceivedHandlers()
    {
      m_onSetTimeBasedAutoScalingOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for StartInstanceAsync to call upon completion to the handler chain. You need to call this to
    * use StartInstanceAsync.
    */
    inline void RegisterStartInstanceOutcomeReceivedHandler(const StartInstanceOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onStartInstanceOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for StartInstance.
    */
    inline void ClearAllStartInstanceOutcomeReceivedHandlers()
    {
      m_onStartInstanceOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for StartStackAsync to call upon completion to the handler chain. You need to call this to
    * use StartStackAsync.
    */
    inline void RegisterStartStackOutcomeReceivedHandler(const StartStackOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onStartStackOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for StartStack.
    */
    inline void ClearAllStartStackOutcomeReceivedHandlers()
    {
      m_onStartStackOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for StopInstanceAsync to call upon completion to the handler chain. You need to call this to
    * use StopInstanceAsync.
    */
    inline void RegisterStopInstanceOutcomeReceivedHandler(const StopInstanceOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onStopInstanceOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for StopInstance.
    */
    inline void ClearAllStopInstanceOutcomeReceivedHandlers()
    {
      m_onStopInstanceOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for StopStackAsync to call upon completion to the handler chain. You need to call this to
    * use StopStackAsync.
    */
    inline void RegisterStopStackOutcomeReceivedHandler(const StopStackOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onStopStackOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for StopStack.
    */
    inline void ClearAllStopStackOutcomeReceivedHandlers()
    {
      m_onStopStackOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UnassignInstanceAsync to call upon completion to the handler chain. You need to call this to
    * use UnassignInstanceAsync.
    */
    inline void RegisterUnassignInstanceOutcomeReceivedHandler(const UnassignInstanceOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUnassignInstanceOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for UnassignInstance.
    */
    inline void ClearAllUnassignInstanceOutcomeReceivedHandlers()
    {
      m_onUnassignInstanceOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UnassignVolumeAsync to call upon completion to the handler chain. You need to call this to
    * use UnassignVolumeAsync.
    */
    inline void RegisterUnassignVolumeOutcomeReceivedHandler(const UnassignVolumeOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUnassignVolumeOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for UnassignVolume.
    */
    inline void ClearAllUnassignVolumeOutcomeReceivedHandlers()
    {
      m_onUnassignVolumeOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UpdateAppAsync to call upon completion to the handler chain. You need to call this to
    * use UpdateAppAsync.
    */
    inline void RegisterUpdateAppOutcomeReceivedHandler(const UpdateAppOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUpdateAppOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for UpdateApp.
    */
    inline void ClearAllUpdateAppOutcomeReceivedHandlers()
    {
      m_onUpdateAppOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UpdateElasticIpAsync to call upon completion to the handler chain. You need to call this to
    * use UpdateElasticIpAsync.
    */
    inline void RegisterUpdateElasticIpOutcomeReceivedHandler(const UpdateElasticIpOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUpdateElasticIpOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for UpdateElasticIp.
    */
    inline void ClearAllUpdateElasticIpOutcomeReceivedHandlers()
    {
      m_onUpdateElasticIpOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UpdateInstanceAsync to call upon completion to the handler chain. You need to call this to
    * use UpdateInstanceAsync.
    */
    inline void RegisterUpdateInstanceOutcomeReceivedHandler(const UpdateInstanceOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUpdateInstanceOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for UpdateInstance.
    */
    inline void ClearAllUpdateInstanceOutcomeReceivedHandlers()
    {
      m_onUpdateInstanceOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UpdateLayerAsync to call upon completion to the handler chain. You need to call this to
    * use UpdateLayerAsync.
    */
    inline void RegisterUpdateLayerOutcomeReceivedHandler(const UpdateLayerOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUpdateLayerOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for UpdateLayer.
    */
    inline void ClearAllUpdateLayerOutcomeReceivedHandlers()
    {
      m_onUpdateLayerOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UpdateMyUserProfileAsync to call upon completion to the handler chain. You need to call this to
    * use UpdateMyUserProfileAsync.
    */
    inline void RegisterUpdateMyUserProfileOutcomeReceivedHandler(const UpdateMyUserProfileOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUpdateMyUserProfileOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for UpdateMyUserProfile.
    */
    inline void ClearAllUpdateMyUserProfileOutcomeReceivedHandlers()
    {
      m_onUpdateMyUserProfileOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UpdateRdsDbInstanceAsync to call upon completion to the handler chain. You need to call this to
    * use UpdateRdsDbInstanceAsync.
    */
    inline void RegisterUpdateRdsDbInstanceOutcomeReceivedHandler(const UpdateRdsDbInstanceOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUpdateRdsDbInstanceOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for UpdateRdsDbInstance.
    */
    inline void ClearAllUpdateRdsDbInstanceOutcomeReceivedHandlers()
    {
      m_onUpdateRdsDbInstanceOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UpdateStackAsync to call upon completion to the handler chain. You need to call this to
    * use UpdateStackAsync.
    */
    inline void RegisterUpdateStackOutcomeReceivedHandler(const UpdateStackOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUpdateStackOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for UpdateStack.
    */
    inline void ClearAllUpdateStackOutcomeReceivedHandlers()
    {
      m_onUpdateStackOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UpdateUserProfileAsync to call upon completion to the handler chain. You need to call this to
    * use UpdateUserProfileAsync.
    */
    inline void RegisterUpdateUserProfileOutcomeReceivedHandler(const UpdateUserProfileOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUpdateUserProfileOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for UpdateUserProfile.
    */
    inline void ClearAllUpdateUserProfileOutcomeReceivedHandlers()
    {
      m_onUpdateUserProfileOutcomeReceived.Clear();
    }

   /**
    * Adds an event handler for UpdateVolumeAsync to call upon completion to the handler chain. You need to call this to
    * use UpdateVolumeAsync.
    */
    inline void RegisterUpdateVolumeOutcomeReceivedHandler(const UpdateVolumeOutcomeReceivedEvent::EventHandler& handler)
    {
      m_onUpdateVolumeOutcomeReceived += handler;
    }

    /**
    * Clears all event handlers for UpdateVolume.
    */
    inline void ClearAllUpdateVolumeOutcomeReceivedHandlers()
    {
      m_onUpdateVolumeOutcomeReceived.Clear();
    }

  private:
    void init(const Client::ClientConfiguration& clientConfiguration);

    /**Async helpers**/
    void AssignInstanceAsyncHelper(const Model::AssignInstanceRequest& request) const;
    void AssignVolumeAsyncHelper(const Model::AssignVolumeRequest& request) const;
    void AssociateElasticIpAsyncHelper(const Model::AssociateElasticIpRequest& request) const;
    void AttachElasticLoadBalancerAsyncHelper(const Model::AttachElasticLoadBalancerRequest& request) const;
    void CloneStackAsyncHelper(const Model::CloneStackRequest& request) const;
    void CreateAppAsyncHelper(const Model::CreateAppRequest& request) const;
    void CreateDeploymentAsyncHelper(const Model::CreateDeploymentRequest& request) const;
    void CreateInstanceAsyncHelper(const Model::CreateInstanceRequest& request) const;
    void CreateLayerAsyncHelper(const Model::CreateLayerRequest& request) const;
    void CreateStackAsyncHelper(const Model::CreateStackRequest& request) const;
    void CreateUserProfileAsyncHelper(const Model::CreateUserProfileRequest& request) const;
    void DeleteAppAsyncHelper(const Model::DeleteAppRequest& request) const;
    void DeleteInstanceAsyncHelper(const Model::DeleteInstanceRequest& request) const;
    void DeleteLayerAsyncHelper(const Model::DeleteLayerRequest& request) const;
    void DeleteStackAsyncHelper(const Model::DeleteStackRequest& request) const;
    void DeleteUserProfileAsyncHelper(const Model::DeleteUserProfileRequest& request) const;
    void DeregisterElasticIpAsyncHelper(const Model::DeregisterElasticIpRequest& request) const;
    void DeregisterInstanceAsyncHelper(const Model::DeregisterInstanceRequest& request) const;
    void DeregisterRdsDbInstanceAsyncHelper(const Model::DeregisterRdsDbInstanceRequest& request) const;
    void DeregisterVolumeAsyncHelper(const Model::DeregisterVolumeRequest& request) const;
    void DescribeAppsAsyncHelper(const Model::DescribeAppsRequest& request) const;
    void DescribeCommandsAsyncHelper(const Model::DescribeCommandsRequest& request) const;
    void DescribeDeploymentsAsyncHelper(const Model::DescribeDeploymentsRequest& request) const;
    void DescribeElasticIpsAsyncHelper(const Model::DescribeElasticIpsRequest& request) const;
    void DescribeElasticLoadBalancersAsyncHelper(const Model::DescribeElasticLoadBalancersRequest& request) const;
    void DescribeInstancesAsyncHelper(const Model::DescribeInstancesRequest& request) const;
    void DescribeLayersAsyncHelper(const Model::DescribeLayersRequest& request) const;
    void DescribeLoadBasedAutoScalingAsyncHelper(const Model::DescribeLoadBasedAutoScalingRequest& request) const;
    void DescribeMyUserProfileAsyncHelper() const;
    void DescribePermissionsAsyncHelper(const Model::DescribePermissionsRequest& request) const;
    void DescribeRaidArraysAsyncHelper(const Model::DescribeRaidArraysRequest& request) const;
    void DescribeRdsDbInstancesAsyncHelper(const Model::DescribeRdsDbInstancesRequest& request) const;
    void DescribeServiceErrorsAsyncHelper(const Model::DescribeServiceErrorsRequest& request) const;
    void DescribeStackProvisioningParametersAsyncHelper(const Model::DescribeStackProvisioningParametersRequest& request) const;
    void DescribeStackSummaryAsyncHelper(const Model::DescribeStackSummaryRequest& request) const;
    void DescribeStacksAsyncHelper(const Model::DescribeStacksRequest& request) const;
    void DescribeTimeBasedAutoScalingAsyncHelper(const Model::DescribeTimeBasedAutoScalingRequest& request) const;
    void DescribeUserProfilesAsyncHelper(const Model::DescribeUserProfilesRequest& request) const;
    void DescribeVolumesAsyncHelper(const Model::DescribeVolumesRequest& request) const;
    void DetachElasticLoadBalancerAsyncHelper(const Model::DetachElasticLoadBalancerRequest& request) const;
    void DisassociateElasticIpAsyncHelper(const Model::DisassociateElasticIpRequest& request) const;
    void GetHostnameSuggestionAsyncHelper(const Model::GetHostnameSuggestionRequest& request) const;
    void GrantAccessAsyncHelper(const Model::GrantAccessRequest& request) const;
    void RebootInstanceAsyncHelper(const Model::RebootInstanceRequest& request) const;
    void RegisterElasticIpAsyncHelper(const Model::RegisterElasticIpRequest& request) const;
    void RegisterInstanceAsyncHelper(const Model::RegisterInstanceRequest& request) const;
    void RegisterRdsDbInstanceAsyncHelper(const Model::RegisterRdsDbInstanceRequest& request) const;
    void RegisterVolumeAsyncHelper(const Model::RegisterVolumeRequest& request) const;
    void SetLoadBasedAutoScalingAsyncHelper(const Model::SetLoadBasedAutoScalingRequest& request) const;
    void SetPermissionAsyncHelper(const Model::SetPermissionRequest& request) const;
    void SetTimeBasedAutoScalingAsyncHelper(const Model::SetTimeBasedAutoScalingRequest& request) const;
    void StartInstanceAsyncHelper(const Model::StartInstanceRequest& request) const;
    void StartStackAsyncHelper(const Model::StartStackRequest& request) const;
    void StopInstanceAsyncHelper(const Model::StopInstanceRequest& request) const;
    void StopStackAsyncHelper(const Model::StopStackRequest& request) const;
    void UnassignInstanceAsyncHelper(const Model::UnassignInstanceRequest& request) const;
    void UnassignVolumeAsyncHelper(const Model::UnassignVolumeRequest& request) const;
    void UpdateAppAsyncHelper(const Model::UpdateAppRequest& request) const;
    void UpdateElasticIpAsyncHelper(const Model::UpdateElasticIpRequest& request) const;
    void UpdateInstanceAsyncHelper(const Model::UpdateInstanceRequest& request) const;
    void UpdateLayerAsyncHelper(const Model::UpdateLayerRequest& request) const;
    void UpdateMyUserProfileAsyncHelper(const Model::UpdateMyUserProfileRequest& request) const;
    void UpdateRdsDbInstanceAsyncHelper(const Model::UpdateRdsDbInstanceRequest& request) const;
    void UpdateStackAsyncHelper(const Model::UpdateStackRequest& request) const;
    void UpdateUserProfileAsyncHelper(const Model::UpdateUserProfileRequest& request) const;
    void UpdateVolumeAsyncHelper(const Model::UpdateVolumeRequest& request) const;

    Aws::String m_uri;
    std::shared_ptr<Utils::Threading::Executor> m_executor;

    /** events **/
    AssignInstanceOutcomeReceivedEvent m_onAssignInstanceOutcomeReceived;
    AssignVolumeOutcomeReceivedEvent m_onAssignVolumeOutcomeReceived;
    AssociateElasticIpOutcomeReceivedEvent m_onAssociateElasticIpOutcomeReceived;
    AttachElasticLoadBalancerOutcomeReceivedEvent m_onAttachElasticLoadBalancerOutcomeReceived;
    CloneStackOutcomeReceivedEvent m_onCloneStackOutcomeReceived;
    CreateAppOutcomeReceivedEvent m_onCreateAppOutcomeReceived;
    CreateDeploymentOutcomeReceivedEvent m_onCreateDeploymentOutcomeReceived;
    CreateInstanceOutcomeReceivedEvent m_onCreateInstanceOutcomeReceived;
    CreateLayerOutcomeReceivedEvent m_onCreateLayerOutcomeReceived;
    CreateStackOutcomeReceivedEvent m_onCreateStackOutcomeReceived;
    CreateUserProfileOutcomeReceivedEvent m_onCreateUserProfileOutcomeReceived;
    DeleteAppOutcomeReceivedEvent m_onDeleteAppOutcomeReceived;
    DeleteInstanceOutcomeReceivedEvent m_onDeleteInstanceOutcomeReceived;
    DeleteLayerOutcomeReceivedEvent m_onDeleteLayerOutcomeReceived;
    DeleteStackOutcomeReceivedEvent m_onDeleteStackOutcomeReceived;
    DeleteUserProfileOutcomeReceivedEvent m_onDeleteUserProfileOutcomeReceived;
    DeregisterElasticIpOutcomeReceivedEvent m_onDeregisterElasticIpOutcomeReceived;
    DeregisterInstanceOutcomeReceivedEvent m_onDeregisterInstanceOutcomeReceived;
    DeregisterRdsDbInstanceOutcomeReceivedEvent m_onDeregisterRdsDbInstanceOutcomeReceived;
    DeregisterVolumeOutcomeReceivedEvent m_onDeregisterVolumeOutcomeReceived;
    DescribeAppsOutcomeReceivedEvent m_onDescribeAppsOutcomeReceived;
    DescribeCommandsOutcomeReceivedEvent m_onDescribeCommandsOutcomeReceived;
    DescribeDeploymentsOutcomeReceivedEvent m_onDescribeDeploymentsOutcomeReceived;
    DescribeElasticIpsOutcomeReceivedEvent m_onDescribeElasticIpsOutcomeReceived;
    DescribeElasticLoadBalancersOutcomeReceivedEvent m_onDescribeElasticLoadBalancersOutcomeReceived;
    DescribeInstancesOutcomeReceivedEvent m_onDescribeInstancesOutcomeReceived;
    DescribeLayersOutcomeReceivedEvent m_onDescribeLayersOutcomeReceived;
    DescribeLoadBasedAutoScalingOutcomeReceivedEvent m_onDescribeLoadBasedAutoScalingOutcomeReceived;
    DescribeMyUserProfileOutcomeReceivedEvent m_onDescribeMyUserProfileOutcomeReceived;
    DescribePermissionsOutcomeReceivedEvent m_onDescribePermissionsOutcomeReceived;
    DescribeRaidArraysOutcomeReceivedEvent m_onDescribeRaidArraysOutcomeReceived;
    DescribeRdsDbInstancesOutcomeReceivedEvent m_onDescribeRdsDbInstancesOutcomeReceived;
    DescribeServiceErrorsOutcomeReceivedEvent m_onDescribeServiceErrorsOutcomeReceived;
    DescribeStackProvisioningParametersOutcomeReceivedEvent m_onDescribeStackProvisioningParametersOutcomeReceived;
    DescribeStackSummaryOutcomeReceivedEvent m_onDescribeStackSummaryOutcomeReceived;
    DescribeStacksOutcomeReceivedEvent m_onDescribeStacksOutcomeReceived;
    DescribeTimeBasedAutoScalingOutcomeReceivedEvent m_onDescribeTimeBasedAutoScalingOutcomeReceived;
    DescribeUserProfilesOutcomeReceivedEvent m_onDescribeUserProfilesOutcomeReceived;
    DescribeVolumesOutcomeReceivedEvent m_onDescribeVolumesOutcomeReceived;
    DetachElasticLoadBalancerOutcomeReceivedEvent m_onDetachElasticLoadBalancerOutcomeReceived;
    DisassociateElasticIpOutcomeReceivedEvent m_onDisassociateElasticIpOutcomeReceived;
    GetHostnameSuggestionOutcomeReceivedEvent m_onGetHostnameSuggestionOutcomeReceived;
    GrantAccessOutcomeReceivedEvent m_onGrantAccessOutcomeReceived;
    RebootInstanceOutcomeReceivedEvent m_onRebootInstanceOutcomeReceived;
    RegisterElasticIpOutcomeReceivedEvent m_onRegisterElasticIpOutcomeReceived;
    RegisterInstanceOutcomeReceivedEvent m_onRegisterInstanceOutcomeReceived;
    RegisterRdsDbInstanceOutcomeReceivedEvent m_onRegisterRdsDbInstanceOutcomeReceived;
    RegisterVolumeOutcomeReceivedEvent m_onRegisterVolumeOutcomeReceived;
    SetLoadBasedAutoScalingOutcomeReceivedEvent m_onSetLoadBasedAutoScalingOutcomeReceived;
    SetPermissionOutcomeReceivedEvent m_onSetPermissionOutcomeReceived;
    SetTimeBasedAutoScalingOutcomeReceivedEvent m_onSetTimeBasedAutoScalingOutcomeReceived;
    StartInstanceOutcomeReceivedEvent m_onStartInstanceOutcomeReceived;
    StartStackOutcomeReceivedEvent m_onStartStackOutcomeReceived;
    StopInstanceOutcomeReceivedEvent m_onStopInstanceOutcomeReceived;
    StopStackOutcomeReceivedEvent m_onStopStackOutcomeReceived;
    UnassignInstanceOutcomeReceivedEvent m_onUnassignInstanceOutcomeReceived;
    UnassignVolumeOutcomeReceivedEvent m_onUnassignVolumeOutcomeReceived;
    UpdateAppOutcomeReceivedEvent m_onUpdateAppOutcomeReceived;
    UpdateElasticIpOutcomeReceivedEvent m_onUpdateElasticIpOutcomeReceived;
    UpdateInstanceOutcomeReceivedEvent m_onUpdateInstanceOutcomeReceived;
    UpdateLayerOutcomeReceivedEvent m_onUpdateLayerOutcomeReceived;
    UpdateMyUserProfileOutcomeReceivedEvent m_onUpdateMyUserProfileOutcomeReceived;
    UpdateRdsDbInstanceOutcomeReceivedEvent m_onUpdateRdsDbInstanceOutcomeReceived;
    UpdateStackOutcomeReceivedEvent m_onUpdateStackOutcomeReceived;
    UpdateUserProfileOutcomeReceivedEvent m_onUpdateUserProfileOutcomeReceived;
    UpdateVolumeOutcomeReceivedEvent m_onUpdateVolumeOutcomeReceived;
  };

} // namespace OpsWorks
} // namespace Aws
