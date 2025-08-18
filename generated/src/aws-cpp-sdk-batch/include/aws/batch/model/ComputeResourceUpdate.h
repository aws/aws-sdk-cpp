/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/CRUpdateAllocationStrategy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/batch/model/LaunchTemplateSpecification.h>
#include <aws/batch/model/CRType.h>
#include <aws/batch/model/Ec2Configuration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Batch
{
namespace Model
{

  /**
   * <p>An object that represents the attributes of a compute environment that can be
   * updated. For more information, see <a
   * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
   * compute environments</a> in the <i>Batch User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ComputeResourceUpdate">AWS
   * API Reference</a></p>
   */
  class ComputeResourceUpdate
  {
  public:
    AWS_BATCH_API ComputeResourceUpdate() = default;
    AWS_BATCH_API ComputeResourceUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API ComputeResourceUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The minimum number of vCPUs that an environment should maintain (even if the
     * compute environment is <code>DISABLED</code>).</p>  <p>This parameter
     * isn't applicable to jobs that are running on Fargate resources. Don't specify
     * it.</p> 
     */
    inline int GetMinvCpus() const { return m_minvCpus; }
    inline bool MinvCpusHasBeenSet() const { return m_minvCpusHasBeenSet; }
    inline void SetMinvCpus(int value) { m_minvCpusHasBeenSet = true; m_minvCpus = value; }
    inline ComputeResourceUpdate& WithMinvCpus(int value) { SetMinvCpus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of Amazon EC2 vCPUs that an environment can reach.</p>
     *  <p>With
     * <code>BEST_FIT_PROGRESSIVE</code>,<code>SPOT_CAPACITY_OPTIMIZED</code> and
     * <code>SPOT_PRICE_CAPACITY_OPTIMIZED</code> (recommended) strategies using
     * On-Demand or Spot Instances, and the <code>BEST_FIT</code> strategy using Spot
     * Instances, Batch might need to exceed <code>maxvCpus</code> to meet your
     * capacity requirements. In this event, Batch never exceeds <code>maxvCpus</code>
     * by more than a single instance.</p> 
     */
    inline int GetMaxvCpus() const { return m_maxvCpus; }
    inline bool MaxvCpusHasBeenSet() const { return m_maxvCpusHasBeenSet; }
    inline void SetMaxvCpus(int value) { m_maxvCpusHasBeenSet = true; m_maxvCpus = value; }
    inline ComputeResourceUpdate& WithMaxvCpus(int value) { SetMaxvCpus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired number of vCPUS in the compute environment. Batch modifies this
     * value between the minimum and maximum values based on job queue demand.</p>
     *  <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't specify it.</p>   <p>Batch doesn't support
     * changing the desired number of vCPUs of an existing compute environment. Don't
     * specify this parameter for compute environments using Amazon EKS clusters.</p>
     *   <p>When you update the <code>desiredvCpus</code> setting, the
     * value must be between the <code>minvCpus</code> and <code>maxvCpus</code>
     * values. </p> <p>Additionally, the updated <code>desiredvCpus</code> value must
     * be greater than or equal to the current <code>desiredvCpus</code> value. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/troubleshooting.html#error-desired-vcpus-update">Troubleshooting
     * Batch</a> in the <i>Batch User Guide</i>.</p> 
     */
    inline int GetDesiredvCpus() const { return m_desiredvCpus; }
    inline bool DesiredvCpusHasBeenSet() const { return m_desiredvCpusHasBeenSet; }
    inline void SetDesiredvCpus(int value) { m_desiredvCpusHasBeenSet = true; m_desiredvCpus = value; }
    inline ComputeResourceUpdate& WithDesiredvCpus(int value) { SetDesiredvCpus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC subnets where the compute resources are launched. Fargate compute
     * resources can contain up to 16 subnets. For Fargate compute resources, providing
     * an empty list will be handled as if this parameter wasn't specified and no
     * change is made. For Amazon EC2 compute resources, providing an empty list
     * removes the VPC subnets from the compute resource. For more information, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_Subnets.html">VPCs
     * and subnets</a> in the <i>Amazon VPC User Guide</i>.</p> <p>When updating a
     * compute environment, changing the VPC subnets requires an infrastructure update
     * of the compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p>  <p>Batch on
     * Amazon EC2 and Batch on Amazon EKS support Local Zones. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-local-zones">
     * Local Zones</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>, <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/local-zones.html">Amazon
     * EKS and Amazon Web Services Local Zones</a> in the <i>Amazon EKS User Guide</i>
     * and <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-regions-zones.html#clusters-local-zones">
     * Amazon ECS clusters in Local Zones, Wavelength Zones, and Amazon Web Services
     * Outposts</a> in the <i>Amazon ECS Developer Guide</i>.</p> <p>Batch on Fargate
     * doesn't currently support Local Zones.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const { return m_subnets; }
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }
    template<typename SubnetsT = Aws::Vector<Aws::String>>
    void SetSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets = std::forward<SubnetsT>(value); }
    template<typename SubnetsT = Aws::Vector<Aws::String>>
    ComputeResourceUpdate& WithSubnets(SubnetsT&& value) { SetSubnets(std::forward<SubnetsT>(value)); return *this;}
    template<typename SubnetsT = Aws::String>
    ComputeResourceUpdate& AddSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets.emplace_back(std::forward<SubnetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 security groups that are associated with instances launched in
     * the compute environment. This parameter is required for Fargate compute
     * resources, where it can contain up to 5 security groups. For Fargate compute
     * resources, providing an empty list is handled as if this parameter wasn't
     * specified and no change is made. For Amazon EC2 compute resources, providing an
     * empty list removes the security groups from the compute resource.</p> <p>When
     * updating a compute environment, changing the Amazon EC2 security groups requires
     * an infrastructure update of the compute environment. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    ComputeResourceUpdate& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    ComputeResourceUpdate& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The allocation strategy to use for the compute resource if there's not enough
     * instances of the best fitting instance type that can be allocated. This might be
     * because of availability of the instance type in the Region or <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-resource-limits.html">Amazon
     * EC2 service limits</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/allocation-strategies.html">Allocation
     * strategies</a> in the <i>Batch User Guide</i>.</p> <p>When updating a compute
     * environment, changing the allocation strategy requires an infrastructure update
     * of the compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>. <code>BEST_FIT</code>
     * isn't supported when updating a compute environment.</p>  <p>This
     * parameter isn't applicable to jobs that are running on Fargate resources. Don't
     * specify it.</p>  <dl> <dt>BEST_FIT_PROGRESSIVE</dt> <dd> <p>Batch selects
     * additional instance types that are large enough to meet the requirements of the
     * jobs in the queue. Its preference is for instance types with lower cost vCPUs.
     * If additional instances of the previously selected instance types aren't
     * available, Batch selects new instance types.</p> </dd>
     * <dt>SPOT_CAPACITY_OPTIMIZED</dt> <dd> <p>Batch selects one or more instance
     * types that are large enough to meet the requirements of the jobs in the queue.
     * Its preference is for instance types that are less likely to be interrupted.
     * This allocation strategy is only available for Spot Instance compute
     * resources.</p> </dd> <dt>SPOT_PRICE_CAPACITY_OPTIMIZED</dt> <dd> <p>The price
     * and capacity optimized allocation strategy looks at both price and capacity to
     * select the Spot Instance pools that are the least likely to be interrupted and
     * have the lowest possible price. This allocation strategy is only available for
     * Spot Instance compute resources.</p> </dd> </dl> <p>With
     * <code>BEST_FIT_PROGRESSIVE</code>,<code>SPOT_CAPACITY_OPTIMIZED</code> and
     * <code>SPOT_PRICE_CAPACITY_OPTIMIZED</code> (recommended) strategies using
     * On-Demand or Spot Instances, and the <code>BEST_FIT</code> strategy using Spot
     * Instances, Batch might need to exceed <code>maxvCpus</code> to meet your
     * capacity requirements. In this event, Batch never exceeds <code>maxvCpus</code>
     * by more than a single instance.</p>
     */
    inline CRUpdateAllocationStrategy GetAllocationStrategy() const { return m_allocationStrategy; }
    inline bool AllocationStrategyHasBeenSet() const { return m_allocationStrategyHasBeenSet; }
    inline void SetAllocationStrategy(CRUpdateAllocationStrategy value) { m_allocationStrategyHasBeenSet = true; m_allocationStrategy = value; }
    inline ComputeResourceUpdate& WithAllocationStrategy(CRUpdateAllocationStrategy value) { SetAllocationStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instances types that can be launched. You can specify instance families
     * to launch any instance type within those families (for example, <code>c5</code>
     * or <code>p3</code>), or you can specify specific sizes within a family (such as
     * <code>c5.8xlarge</code>). </p> <p>Batch can select the instance type for you if
     * you choose one of the following:</p> <ul> <li> <p> <code>optimal</code> to
     * select instance types (from the <code>c4</code>, <code>m4</code>,
     * <code>r4</code>, <code>c5</code>, <code>m5</code>, and <code>r5</code> instance
     * families) that match the demand of your job queues. </p> </li> <li> <p>
     * <code>default_x86_64</code> to choose x86 based instance types (from the
     * <code>m6i</code>, <code>c6i</code>, <code>r6i</code>, and <code>c7i</code>
     * instance families) that matches the resource demands of the job queue.</p> </li>
     * <li> <p> <code>default_arm64</code> to choose x86 based instance types (from the
     * <code>m6g</code>, <code>c6g</code>, <code>r6g</code>, and <code>c7g</code>
     * instance families) that matches the resource demands of the job queue.</p> </li>
     * </ul>  <p>Starting on 11/01/2025 the behavior of <code>optimal</code> is
     * going to be changed to match <code>default_x86_64</code>. During the change your
     * instance families could be updated to a newer generation. You do not need to
     * perform any actions for the upgrade to happen. For more information about
     * change, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/optimal-default-instance-troubleshooting.html">Optimal
     * instance type configuration to receive automatic instance family
     * updates</a>.</p>   <p>Instance family availability varies by Amazon
     * Web Services Region. For example, some Amazon Web Services Regions may not have
     * any fourth generation instance families but have fifth and sixth generation
     * instance families.</p> <p>When using <code>default_x86_64</code> or
     * <code>default_arm64</code> instance bundles, Batch selects instance families
     * based on a balance of cost-effectiveness and performance. While newer generation
     * instances often provide better price-performance, Batch may choose an earlier
     * generation instance family if it provides the optimal combination of
     * availability, cost, and performance for your workload. For example, in an Amazon
     * Web Services Region where both c6i and c7i instances are available, Batch might
     * select c6i instances if they offer better cost-effectiveness for your specific
     * job requirements. For more information on Batch instance types and Amazon Web
     * Services Region availability, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/instance-type-compute-table.html">Instance
     * type compute table</a> in the <i>Batch User Guide</i>.</p> <p>Batch periodically
     * updates your instances in default bundles to newer, more cost-effective options.
     * Updates happen automatically without requiring any action from you. Your
     * workloads continue running during updates with no interruption </p> 
     *  <p>This parameter isn't applicable to jobs that are running on Fargate
     * resources. Don't specify it.</p>   <p>When you create a compute
     * environment, the instance types that you select for the compute environment must
     * share the same architecture. For example, you can't mix x86 and ARM instances in
     * the same compute environment.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetInstanceTypes() const { return m_instanceTypes; }
    inline bool InstanceTypesHasBeenSet() const { return m_instanceTypesHasBeenSet; }
    template<typename InstanceTypesT = Aws::Vector<Aws::String>>
    void SetInstanceTypes(InstanceTypesT&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = std::forward<InstanceTypesT>(value); }
    template<typename InstanceTypesT = Aws::Vector<Aws::String>>
    ComputeResourceUpdate& WithInstanceTypes(InstanceTypesT&& value) { SetInstanceTypes(std::forward<InstanceTypesT>(value)); return *this;}
    template<typename InstanceTypesT = Aws::String>
    ComputeResourceUpdate& AddInstanceTypes(InstanceTypesT&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.emplace_back(std::forward<InstanceTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 key pair that's used for instances launched in the compute
     * environment. You can use this key pair to log in to your instances with SSH. To
     * remove the Amazon EC2 key pair, set this value to an empty string.</p> <p>When
     * updating a compute environment, changing the Amazon EC2 key pair requires an
     * infrastructure update of the compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p>  <p>This
     * parameter isn't applicable to jobs that are running on Fargate resources. Don't
     * specify it.</p> 
     */
    inline const Aws::String& GetEc2KeyPair() const { return m_ec2KeyPair; }
    inline bool Ec2KeyPairHasBeenSet() const { return m_ec2KeyPairHasBeenSet; }
    template<typename Ec2KeyPairT = Aws::String>
    void SetEc2KeyPair(Ec2KeyPairT&& value) { m_ec2KeyPairHasBeenSet = true; m_ec2KeyPair = std::forward<Ec2KeyPairT>(value); }
    template<typename Ec2KeyPairT = Aws::String>
    ComputeResourceUpdate& WithEc2KeyPair(Ec2KeyPairT&& value) { SetEc2KeyPair(std::forward<Ec2KeyPairT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon ECS instance profile applied to Amazon EC2 instances in a compute
     * environment. Required for Amazon EC2 instances. You can specify the short name
     * or full Amazon Resource Name (ARN) of an instance profile. For example, <code>
     * <i>ecsInstanceRole</i> </code> or
     * <code>arn:aws:iam::<i>&lt;aws_account_id&gt;</i>:instance-profile/<i>ecsInstanceRole</i>
     * </code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/instance_IAM_role.html">Amazon
     * ECS instance role</a> in the <i>Batch User Guide</i>.</p> <p>When updating a
     * compute environment, changing this setting requires an infrastructure update of
     * the compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p>  <p>This
     * parameter isn't applicable to jobs that are running on Fargate resources. Don't
     * specify it.</p> 
     */
    inline const Aws::String& GetInstanceRole() const { return m_instanceRole; }
    inline bool InstanceRoleHasBeenSet() const { return m_instanceRoleHasBeenSet; }
    template<typename InstanceRoleT = Aws::String>
    void SetInstanceRole(InstanceRoleT&& value) { m_instanceRoleHasBeenSet = true; m_instanceRole = std::forward<InstanceRoleT>(value); }
    template<typename InstanceRoleT = Aws::String>
    ComputeResourceUpdate& WithInstanceRole(InstanceRoleT&& value) { SetInstanceRole(std::forward<InstanceRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key-value pair tags to be applied to Amazon EC2 resources that are launched
     * in the compute environment. For Batch, these take the form of <code>"String1":
     * "String2"</code>, where <code>String1</code> is the tag key and
     * <code>String2</code> is the tag value (for example, <code>{ "Name": "Batch
     * Instance - C4OnDemand" }</code>). This is helpful for recognizing your Batch
     * instances in the Amazon EC2 console. These tags aren't seen when using the Batch
     * <code>ListTagsForResource</code> API operation.</p> <p>When updating a compute
     * environment, changing this setting requires an infrastructure update of the
     * compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p>  <p>This
     * parameter isn't applicable to jobs that are running on Fargate resources. Don't
     * specify it.</p> 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    ComputeResourceUpdate& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    ComputeResourceUpdate& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 placement group to associate with your compute resources. If
     * you intend to submit multi-node parallel jobs to your compute environment, you
     * should consider creating a cluster placement group and associate it with your
     * compute resources. This keeps your multi-node parallel job on a logical grouping
     * of instances within a single Availability Zone with high network flow potential.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
     * groups</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p> <p>When
     * updating a compute environment, changing the placement group requires an
     * infrastructure update of the compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p>  <p>This
     * parameter isn't applicable to jobs that are running on Fargate resources. Don't
     * specify it.</p> 
     */
    inline const Aws::String& GetPlacementGroup() const { return m_placementGroup; }
    inline bool PlacementGroupHasBeenSet() const { return m_placementGroupHasBeenSet; }
    template<typename PlacementGroupT = Aws::String>
    void SetPlacementGroup(PlacementGroupT&& value) { m_placementGroupHasBeenSet = true; m_placementGroup = std::forward<PlacementGroupT>(value); }
    template<typename PlacementGroupT = Aws::String>
    ComputeResourceUpdate& WithPlacementGroup(PlacementGroupT&& value) { SetPlacementGroup(std::forward<PlacementGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum percentage that a Spot Instance price can be when compared with
     * the On-Demand price for that instance type before instances are launched. For
     * example, if your maximum percentage is 20%, the Spot price must be less than 20%
     * of the current On-Demand price for that Amazon EC2 instance. You always pay the
     * lowest (market) price and never more than your maximum percentage. For most use
     * cases, we recommend leaving this field empty.</p> <p>When updating a compute
     * environment, changing the bid percentage requires an infrastructure update of
     * the compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p>  <p>This
     * parameter isn't applicable to jobs that are running on Fargate resources. Don't
     * specify it.</p> 
     */
    inline int GetBidPercentage() const { return m_bidPercentage; }
    inline bool BidPercentageHasBeenSet() const { return m_bidPercentageHasBeenSet; }
    inline void SetBidPercentage(int value) { m_bidPercentageHasBeenSet = true; m_bidPercentage = value; }
    inline ComputeResourceUpdate& WithBidPercentage(int value) { SetBidPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated launch template to use for your compute resources. You must
     * specify either the launch template ID or launch template name in the request,
     * but not both. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/launch-templates.html">Launch
     * template support</a> in the <i>Batch User Guide</i>. To remove the custom launch
     * template and use the default launch template, set <code>launchTemplateId</code>
     * or <code>launchTemplateName</code> member of the launch template specification
     * to an empty string. Removing the launch template from a compute environment will
     * not remove the AMI specified in the launch template. In order to update the AMI
     * specified in a launch template, the <code>updateToLatestImageVersion</code>
     * parameter must be set to <code>true</code>.</p> <p>When updating a compute
     * environment, changing the launch template requires an infrastructure update of
     * the compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p>  <p>This
     * parameter isn't applicable to jobs that are running on Fargate resources. Don't
     * specify it.</p> 
     */
    inline const LaunchTemplateSpecification& GetLaunchTemplate() const { return m_launchTemplate; }
    inline bool LaunchTemplateHasBeenSet() const { return m_launchTemplateHasBeenSet; }
    template<typename LaunchTemplateT = LaunchTemplateSpecification>
    void SetLaunchTemplate(LaunchTemplateT&& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = std::forward<LaunchTemplateT>(value); }
    template<typename LaunchTemplateT = LaunchTemplateSpecification>
    ComputeResourceUpdate& WithLaunchTemplate(LaunchTemplateT&& value) { SetLaunchTemplate(std::forward<LaunchTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information used to select Amazon Machine Images (AMIs) for Amazon
     * EC2 instances in the compute environment. If <code>Ec2Configuration</code> isn't
     * specified, the default is <code>ECS_AL2</code>.</p> <p>When updating a compute
     * environment, changing this setting requires an infrastructure update of the
     * compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>. To remove the Amazon
     * EC2 configuration and any custom AMI ID specified in
     * <code>imageIdOverride</code>, set this value to an empty string.</p> <p>One or
     * two values can be provided.</p>  <p>This parameter isn't applicable to
     * jobs that are running on Fargate resources. Don't specify it.</p> 
     */
    inline const Aws::Vector<Ec2Configuration>& GetEc2Configuration() const { return m_ec2Configuration; }
    inline bool Ec2ConfigurationHasBeenSet() const { return m_ec2ConfigurationHasBeenSet; }
    template<typename Ec2ConfigurationT = Aws::Vector<Ec2Configuration>>
    void SetEc2Configuration(Ec2ConfigurationT&& value) { m_ec2ConfigurationHasBeenSet = true; m_ec2Configuration = std::forward<Ec2ConfigurationT>(value); }
    template<typename Ec2ConfigurationT = Aws::Vector<Ec2Configuration>>
    ComputeResourceUpdate& WithEc2Configuration(Ec2ConfigurationT&& value) { SetEc2Configuration(std::forward<Ec2ConfigurationT>(value)); return *this;}
    template<typename Ec2ConfigurationT = Ec2Configuration>
    ComputeResourceUpdate& AddEc2Configuration(Ec2ConfigurationT&& value) { m_ec2ConfigurationHasBeenSet = true; m_ec2Configuration.emplace_back(std::forward<Ec2ConfigurationT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the AMI ID is updated to the latest one that's supported by
     * Batch when the compute environment has an infrastructure update. The default
     * value is <code>false</code>.</p>  <p>An AMI ID can either be specified in
     * the <code>imageId</code> or <code>imageIdOverride</code> parameters or be
     * determined by the launch template that's specified in the
     * <code>launchTemplate</code> parameter. If an AMI ID is specified any of these
     * ways, this parameter is ignored. For more information about to update AMI IDs
     * during an infrastructure update, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html#updating-compute-environments-ami">Updating
     * the AMI ID</a> in the <i>Batch User Guide</i>.</p>  <p>When updating a
     * compute environment, changing this setting requires an infrastructure update of
     * the compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline bool GetUpdateToLatestImageVersion() const { return m_updateToLatestImageVersion; }
    inline bool UpdateToLatestImageVersionHasBeenSet() const { return m_updateToLatestImageVersionHasBeenSet; }
    inline void SetUpdateToLatestImageVersion(bool value) { m_updateToLatestImageVersionHasBeenSet = true; m_updateToLatestImageVersion = value; }
    inline ComputeResourceUpdate& WithUpdateToLatestImageVersion(bool value) { SetUpdateToLatestImageVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of compute environment: <code>EC2</code>, <code>SPOT</code>,
     * <code>FARGATE</code>, or <code>FARGATE_SPOT</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * environments</a> in the <i>Batch User Guide</i>.</p> <p> If you choose
     * <code>SPOT</code>, you must also specify an Amazon EC2 Spot Fleet role with the
     * <code>spotIamFleetRole</code> parameter. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/spot_fleet_IAM_role.html">Amazon
     * EC2 spot fleet role</a> in the <i>Batch User Guide</i>.</p> <p>When updating a
     * compute environment, changing the type of a compute environment requires an
     * infrastructure update of the compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline CRType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(CRType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ComputeResourceUpdate& WithType(CRType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Machine Image (AMI) ID used for instances launched in the compute
     * environment. This parameter is overridden by the <code>imageIdOverride</code>
     * member of the <code>Ec2Configuration</code> structure. To remove the custom AMI
     * ID and use the default AMI ID, set this value to an empty string.</p> <p>When
     * updating a compute environment, changing the AMI ID requires an infrastructure
     * update of the compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p>  <p>This
     * parameter isn't applicable to jobs that are running on Fargate resources. Don't
     * specify it.</p>   <p>The AMI that you choose for a compute
     * environment must match the architecture of the instance types that you intend to
     * use for that compute environment. For example, if your compute environment uses
     * A1 instance types, the compute resource AMI that you choose must support ARM
     * instances. Amazon ECS vends both x86 and ARM versions of the Amazon
     * ECS-optimized Amazon Linux 2 AMI. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#ecs-optimized-ami-linux-variants.html">Amazon
     * ECS-optimized Amazon Linux 2 AMI</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> 
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    ComputeResourceUpdate& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}
  private:

    int m_minvCpus{0};
    bool m_minvCpusHasBeenSet = false;

    int m_maxvCpus{0};
    bool m_maxvCpusHasBeenSet = false;

    int m_desiredvCpus{0};
    bool m_desiredvCpusHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    CRUpdateAllocationStrategy m_allocationStrategy{CRUpdateAllocationStrategy::NOT_SET};
    bool m_allocationStrategyHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceTypes;
    bool m_instanceTypesHasBeenSet = false;

    Aws::String m_ec2KeyPair;
    bool m_ec2KeyPairHasBeenSet = false;

    Aws::String m_instanceRole;
    bool m_instanceRoleHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_placementGroup;
    bool m_placementGroupHasBeenSet = false;

    int m_bidPercentage{0};
    bool m_bidPercentageHasBeenSet = false;

    LaunchTemplateSpecification m_launchTemplate;
    bool m_launchTemplateHasBeenSet = false;

    Aws::Vector<Ec2Configuration> m_ec2Configuration;
    bool m_ec2ConfigurationHasBeenSet = false;

    bool m_updateToLatestImageVersion{false};
    bool m_updateToLatestImageVersionHasBeenSet = false;

    CRType m_type{CRType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
