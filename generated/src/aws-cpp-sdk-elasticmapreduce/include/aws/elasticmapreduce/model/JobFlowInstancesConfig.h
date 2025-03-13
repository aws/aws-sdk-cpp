/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/PlacementType.h>
#include <aws/elasticmapreduce/model/InstanceGroupConfig.h>
#include <aws/elasticmapreduce/model/InstanceFleetConfig.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>A description of the Amazon EC2 instance on which the cluster (job flow)
   * runs. A valid JobFlowInstancesConfig must contain either InstanceGroups or
   * InstanceFleets. They cannot be used together. You may also have
   * MasterInstanceType, SlaveInstanceType, and InstanceCount (all three must be
   * present), but we don't recommend this configuration.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/JobFlowInstancesConfig">AWS
   * API Reference</a></p>
   */
  class JobFlowInstancesConfig
  {
  public:
    AWS_EMR_API JobFlowInstancesConfig() = default;
    AWS_EMR_API JobFlowInstancesConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API JobFlowInstancesConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon EC2 instance type of the master node.</p>
     */
    inline const Aws::String& GetMasterInstanceType() const { return m_masterInstanceType; }
    inline bool MasterInstanceTypeHasBeenSet() const { return m_masterInstanceTypeHasBeenSet; }
    template<typename MasterInstanceTypeT = Aws::String>
    void SetMasterInstanceType(MasterInstanceTypeT&& value) { m_masterInstanceTypeHasBeenSet = true; m_masterInstanceType = std::forward<MasterInstanceTypeT>(value); }
    template<typename MasterInstanceTypeT = Aws::String>
    JobFlowInstancesConfig& WithMasterInstanceType(MasterInstanceTypeT&& value) { SetMasterInstanceType(std::forward<MasterInstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 instance type of the core and task nodes.</p>
     */
    inline const Aws::String& GetSlaveInstanceType() const { return m_slaveInstanceType; }
    inline bool SlaveInstanceTypeHasBeenSet() const { return m_slaveInstanceTypeHasBeenSet; }
    template<typename SlaveInstanceTypeT = Aws::String>
    void SetSlaveInstanceType(SlaveInstanceTypeT&& value) { m_slaveInstanceTypeHasBeenSet = true; m_slaveInstanceType = std::forward<SlaveInstanceTypeT>(value); }
    template<typename SlaveInstanceTypeT = Aws::String>
    JobFlowInstancesConfig& WithSlaveInstanceType(SlaveInstanceTypeT&& value) { SetSlaveInstanceType(std::forward<SlaveInstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Amazon EC2 instances in the cluster.</p>
     */
    inline int GetInstanceCount() const { return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline JobFlowInstancesConfig& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for the instance groups in a cluster.</p>
     */
    inline const Aws::Vector<InstanceGroupConfig>& GetInstanceGroups() const { return m_instanceGroups; }
    inline bool InstanceGroupsHasBeenSet() const { return m_instanceGroupsHasBeenSet; }
    template<typename InstanceGroupsT = Aws::Vector<InstanceGroupConfig>>
    void SetInstanceGroups(InstanceGroupsT&& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups = std::forward<InstanceGroupsT>(value); }
    template<typename InstanceGroupsT = Aws::Vector<InstanceGroupConfig>>
    JobFlowInstancesConfig& WithInstanceGroups(InstanceGroupsT&& value) { SetInstanceGroups(std::forward<InstanceGroupsT>(value)); return *this;}
    template<typename InstanceGroupsT = InstanceGroupConfig>
    JobFlowInstancesConfig& AddInstanceGroups(InstanceGroupsT&& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups.emplace_back(std::forward<InstanceGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     *  <p>The instance fleet configuration is available only in Amazon EMR
     * releases 4.8.0 and later, excluding 5.0.x versions.</p>  <p>Describes the
     * Amazon EC2 instances and instance configurations for clusters that use the
     * instance fleet configuration.</p>
     */
    inline const Aws::Vector<InstanceFleetConfig>& GetInstanceFleets() const { return m_instanceFleets; }
    inline bool InstanceFleetsHasBeenSet() const { return m_instanceFleetsHasBeenSet; }
    template<typename InstanceFleetsT = Aws::Vector<InstanceFleetConfig>>
    void SetInstanceFleets(InstanceFleetsT&& value) { m_instanceFleetsHasBeenSet = true; m_instanceFleets = std::forward<InstanceFleetsT>(value); }
    template<typename InstanceFleetsT = Aws::Vector<InstanceFleetConfig>>
    JobFlowInstancesConfig& WithInstanceFleets(InstanceFleetsT&& value) { SetInstanceFleets(std::forward<InstanceFleetsT>(value)); return *this;}
    template<typename InstanceFleetsT = InstanceFleetConfig>
    JobFlowInstancesConfig& AddInstanceFleets(InstanceFleetsT&& value) { m_instanceFleetsHasBeenSet = true; m_instanceFleets.emplace_back(std::forward<InstanceFleetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon EC2 key pair that can be used to connect to the master
     * node using SSH as the user called "hadoop."</p>
     */
    inline const Aws::String& GetEc2KeyName() const { return m_ec2KeyName; }
    inline bool Ec2KeyNameHasBeenSet() const { return m_ec2KeyNameHasBeenSet; }
    template<typename Ec2KeyNameT = Aws::String>
    void SetEc2KeyName(Ec2KeyNameT&& value) { m_ec2KeyNameHasBeenSet = true; m_ec2KeyName = std::forward<Ec2KeyNameT>(value); }
    template<typename Ec2KeyNameT = Aws::String>
    JobFlowInstancesConfig& WithEc2KeyName(Ec2KeyNameT&& value) { SetEc2KeyName(std::forward<Ec2KeyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone in which the cluster runs.</p>
     */
    inline const PlacementType& GetPlacement() const { return m_placement; }
    inline bool PlacementHasBeenSet() const { return m_placementHasBeenSet; }
    template<typename PlacementT = PlacementType>
    void SetPlacement(PlacementT&& value) { m_placementHasBeenSet = true; m_placement = std::forward<PlacementT>(value); }
    template<typename PlacementT = PlacementType>
    JobFlowInstancesConfig& WithPlacement(PlacementT&& value) { SetPlacement(std::forward<PlacementT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the cluster should remain available after completing all
     * steps. Defaults to <code>false</code>. For more information about configuring
     * cluster termination, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-plan-termination.html">Control
     * Cluster Termination</a> in the <i>EMR Management Guide</i>.</p>
     */
    inline bool GetKeepJobFlowAliveWhenNoSteps() const { return m_keepJobFlowAliveWhenNoSteps; }
    inline bool KeepJobFlowAliveWhenNoStepsHasBeenSet() const { return m_keepJobFlowAliveWhenNoStepsHasBeenSet; }
    inline void SetKeepJobFlowAliveWhenNoSteps(bool value) { m_keepJobFlowAliveWhenNoStepsHasBeenSet = true; m_keepJobFlowAliveWhenNoSteps = value; }
    inline JobFlowInstancesConfig& WithKeepJobFlowAliveWhenNoSteps(bool value) { SetKeepJobFlowAliveWhenNoSteps(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to lock the cluster to prevent the Amazon EC2 instances
     * from being terminated by API call, user intervention, or in the event of a
     * job-flow error.</p>
     */
    inline bool GetTerminationProtected() const { return m_terminationProtected; }
    inline bool TerminationProtectedHasBeenSet() const { return m_terminationProtectedHasBeenSet; }
    inline void SetTerminationProtected(bool value) { m_terminationProtectedHasBeenSet = true; m_terminationProtected = value; }
    inline JobFlowInstancesConfig& WithTerminationProtected(bool value) { SetTerminationProtected(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Amazon EMR should gracefully replace core nodes that have
     * degraded within the cluster.</p>
     */
    inline bool GetUnhealthyNodeReplacement() const { return m_unhealthyNodeReplacement; }
    inline bool UnhealthyNodeReplacementHasBeenSet() const { return m_unhealthyNodeReplacementHasBeenSet; }
    inline void SetUnhealthyNodeReplacement(bool value) { m_unhealthyNodeReplacementHasBeenSet = true; m_unhealthyNodeReplacement = value; }
    inline JobFlowInstancesConfig& WithUnhealthyNodeReplacement(bool value) { SetUnhealthyNodeReplacement(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Applies only to Amazon EMR release versions earlier than 4.0. The Hadoop
     * version for the cluster. Valid inputs are "0.18" (no longer maintained), "0.20"
     * (no longer maintained), "0.20.205" (no longer maintained), "1.0.3", "2.2.0", or
     * "2.4.0". If you do not set this value, the default of 0.18 is used, unless the
     * <code>AmiVersion</code> parameter is set in the RunJobFlow call, in which case
     * the default version of Hadoop for that AMI version is used.</p>
     */
    inline const Aws::String& GetHadoopVersion() const { return m_hadoopVersion; }
    inline bool HadoopVersionHasBeenSet() const { return m_hadoopVersionHasBeenSet; }
    template<typename HadoopVersionT = Aws::String>
    void SetHadoopVersion(HadoopVersionT&& value) { m_hadoopVersionHasBeenSet = true; m_hadoopVersion = std::forward<HadoopVersionT>(value); }
    template<typename HadoopVersionT = Aws::String>
    JobFlowInstancesConfig& WithHadoopVersion(HadoopVersionT&& value) { SetHadoopVersion(std::forward<HadoopVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Applies to clusters that use the uniform instance group configuration. To
     * launch the cluster in Amazon Virtual Private Cloud (Amazon VPC), set this
     * parameter to the identifier of the Amazon VPC subnet where you want the cluster
     * to launch. If you do not specify this value and your account supports
     * EC2-Classic, the cluster launches in EC2-Classic.</p>
     */
    inline const Aws::String& GetEc2SubnetId() const { return m_ec2SubnetId; }
    inline bool Ec2SubnetIdHasBeenSet() const { return m_ec2SubnetIdHasBeenSet; }
    template<typename Ec2SubnetIdT = Aws::String>
    void SetEc2SubnetId(Ec2SubnetIdT&& value) { m_ec2SubnetIdHasBeenSet = true; m_ec2SubnetId = std::forward<Ec2SubnetIdT>(value); }
    template<typename Ec2SubnetIdT = Aws::String>
    JobFlowInstancesConfig& WithEc2SubnetId(Ec2SubnetIdT&& value) { SetEc2SubnetId(std::forward<Ec2SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Applies to clusters that use the instance fleet configuration. When multiple
     * Amazon EC2 subnet IDs are specified, Amazon EMR evaluates them and launches
     * instances in the optimal subnet.</p>  <p>The instance fleet configuration
     * is available only in Amazon EMR releases 4.8.0 and later, excluding 5.0.x
     * versions.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetEc2SubnetIds() const { return m_ec2SubnetIds; }
    inline bool Ec2SubnetIdsHasBeenSet() const { return m_ec2SubnetIdsHasBeenSet; }
    template<typename Ec2SubnetIdsT = Aws::Vector<Aws::String>>
    void SetEc2SubnetIds(Ec2SubnetIdsT&& value) { m_ec2SubnetIdsHasBeenSet = true; m_ec2SubnetIds = std::forward<Ec2SubnetIdsT>(value); }
    template<typename Ec2SubnetIdsT = Aws::Vector<Aws::String>>
    JobFlowInstancesConfig& WithEc2SubnetIds(Ec2SubnetIdsT&& value) { SetEc2SubnetIds(std::forward<Ec2SubnetIdsT>(value)); return *this;}
    template<typename Ec2SubnetIdsT = Aws::String>
    JobFlowInstancesConfig& AddEc2SubnetIds(Ec2SubnetIdsT&& value) { m_ec2SubnetIdsHasBeenSet = true; m_ec2SubnetIds.emplace_back(std::forward<Ec2SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon EC2 security group for the master node. If you
     * specify <code>EmrManagedMasterSecurityGroup</code>, you must also specify
     * <code>EmrManagedSlaveSecurityGroup</code>.</p>
     */
    inline const Aws::String& GetEmrManagedMasterSecurityGroup() const { return m_emrManagedMasterSecurityGroup; }
    inline bool EmrManagedMasterSecurityGroupHasBeenSet() const { return m_emrManagedMasterSecurityGroupHasBeenSet; }
    template<typename EmrManagedMasterSecurityGroupT = Aws::String>
    void SetEmrManagedMasterSecurityGroup(EmrManagedMasterSecurityGroupT&& value) { m_emrManagedMasterSecurityGroupHasBeenSet = true; m_emrManagedMasterSecurityGroup = std::forward<EmrManagedMasterSecurityGroupT>(value); }
    template<typename EmrManagedMasterSecurityGroupT = Aws::String>
    JobFlowInstancesConfig& WithEmrManagedMasterSecurityGroup(EmrManagedMasterSecurityGroupT&& value) { SetEmrManagedMasterSecurityGroup(std::forward<EmrManagedMasterSecurityGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon EC2 security group for the core and task nodes.
     * If you specify <code>EmrManagedSlaveSecurityGroup</code>, you must also specify
     * <code>EmrManagedMasterSecurityGroup</code>.</p>
     */
    inline const Aws::String& GetEmrManagedSlaveSecurityGroup() const { return m_emrManagedSlaveSecurityGroup; }
    inline bool EmrManagedSlaveSecurityGroupHasBeenSet() const { return m_emrManagedSlaveSecurityGroupHasBeenSet; }
    template<typename EmrManagedSlaveSecurityGroupT = Aws::String>
    void SetEmrManagedSlaveSecurityGroup(EmrManagedSlaveSecurityGroupT&& value) { m_emrManagedSlaveSecurityGroupHasBeenSet = true; m_emrManagedSlaveSecurityGroup = std::forward<EmrManagedSlaveSecurityGroupT>(value); }
    template<typename EmrManagedSlaveSecurityGroupT = Aws::String>
    JobFlowInstancesConfig& WithEmrManagedSlaveSecurityGroup(EmrManagedSlaveSecurityGroupT&& value) { SetEmrManagedSlaveSecurityGroup(std::forward<EmrManagedSlaveSecurityGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon EC2 security group for the Amazon EMR service to
     * access clusters in VPC private subnets.</p>
     */
    inline const Aws::String& GetServiceAccessSecurityGroup() const { return m_serviceAccessSecurityGroup; }
    inline bool ServiceAccessSecurityGroupHasBeenSet() const { return m_serviceAccessSecurityGroupHasBeenSet; }
    template<typename ServiceAccessSecurityGroupT = Aws::String>
    void SetServiceAccessSecurityGroup(ServiceAccessSecurityGroupT&& value) { m_serviceAccessSecurityGroupHasBeenSet = true; m_serviceAccessSecurityGroup = std::forward<ServiceAccessSecurityGroupT>(value); }
    template<typename ServiceAccessSecurityGroupT = Aws::String>
    JobFlowInstancesConfig& WithServiceAccessSecurityGroup(ServiceAccessSecurityGroupT&& value) { SetServiceAccessSecurityGroup(std::forward<ServiceAccessSecurityGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of additional Amazon EC2 security group IDs for the master node.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalMasterSecurityGroups() const { return m_additionalMasterSecurityGroups; }
    inline bool AdditionalMasterSecurityGroupsHasBeenSet() const { return m_additionalMasterSecurityGroupsHasBeenSet; }
    template<typename AdditionalMasterSecurityGroupsT = Aws::Vector<Aws::String>>
    void SetAdditionalMasterSecurityGroups(AdditionalMasterSecurityGroupsT&& value) { m_additionalMasterSecurityGroupsHasBeenSet = true; m_additionalMasterSecurityGroups = std::forward<AdditionalMasterSecurityGroupsT>(value); }
    template<typename AdditionalMasterSecurityGroupsT = Aws::Vector<Aws::String>>
    JobFlowInstancesConfig& WithAdditionalMasterSecurityGroups(AdditionalMasterSecurityGroupsT&& value) { SetAdditionalMasterSecurityGroups(std::forward<AdditionalMasterSecurityGroupsT>(value)); return *this;}
    template<typename AdditionalMasterSecurityGroupsT = Aws::String>
    JobFlowInstancesConfig& AddAdditionalMasterSecurityGroups(AdditionalMasterSecurityGroupsT&& value) { m_additionalMasterSecurityGroupsHasBeenSet = true; m_additionalMasterSecurityGroups.emplace_back(std::forward<AdditionalMasterSecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of additional Amazon EC2 security group IDs for the core and task
     * nodes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalSlaveSecurityGroups() const { return m_additionalSlaveSecurityGroups; }
    inline bool AdditionalSlaveSecurityGroupsHasBeenSet() const { return m_additionalSlaveSecurityGroupsHasBeenSet; }
    template<typename AdditionalSlaveSecurityGroupsT = Aws::Vector<Aws::String>>
    void SetAdditionalSlaveSecurityGroups(AdditionalSlaveSecurityGroupsT&& value) { m_additionalSlaveSecurityGroupsHasBeenSet = true; m_additionalSlaveSecurityGroups = std::forward<AdditionalSlaveSecurityGroupsT>(value); }
    template<typename AdditionalSlaveSecurityGroupsT = Aws::Vector<Aws::String>>
    JobFlowInstancesConfig& WithAdditionalSlaveSecurityGroups(AdditionalSlaveSecurityGroupsT&& value) { SetAdditionalSlaveSecurityGroups(std::forward<AdditionalSlaveSecurityGroupsT>(value)); return *this;}
    template<typename AdditionalSlaveSecurityGroupsT = Aws::String>
    JobFlowInstancesConfig& AddAdditionalSlaveSecurityGroups(AdditionalSlaveSecurityGroupsT&& value) { m_additionalSlaveSecurityGroupsHasBeenSet = true; m_additionalSlaveSecurityGroups.emplace_back(std::forward<AdditionalSlaveSecurityGroupsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_masterInstanceType;
    bool m_masterInstanceTypeHasBeenSet = false;

    Aws::String m_slaveInstanceType;
    bool m_slaveInstanceTypeHasBeenSet = false;

    int m_instanceCount{0};
    bool m_instanceCountHasBeenSet = false;

    Aws::Vector<InstanceGroupConfig> m_instanceGroups;
    bool m_instanceGroupsHasBeenSet = false;

    Aws::Vector<InstanceFleetConfig> m_instanceFleets;
    bool m_instanceFleetsHasBeenSet = false;

    Aws::String m_ec2KeyName;
    bool m_ec2KeyNameHasBeenSet = false;

    PlacementType m_placement;
    bool m_placementHasBeenSet = false;

    bool m_keepJobFlowAliveWhenNoSteps{false};
    bool m_keepJobFlowAliveWhenNoStepsHasBeenSet = false;

    bool m_terminationProtected{false};
    bool m_terminationProtectedHasBeenSet = false;

    bool m_unhealthyNodeReplacement{false};
    bool m_unhealthyNodeReplacementHasBeenSet = false;

    Aws::String m_hadoopVersion;
    bool m_hadoopVersionHasBeenSet = false;

    Aws::String m_ec2SubnetId;
    bool m_ec2SubnetIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_ec2SubnetIds;
    bool m_ec2SubnetIdsHasBeenSet = false;

    Aws::String m_emrManagedMasterSecurityGroup;
    bool m_emrManagedMasterSecurityGroupHasBeenSet = false;

    Aws::String m_emrManagedSlaveSecurityGroup;
    bool m_emrManagedSlaveSecurityGroupHasBeenSet = false;

    Aws::String m_serviceAccessSecurityGroup;
    bool m_serviceAccessSecurityGroupHasBeenSet = false;

    Aws::Vector<Aws::String> m_additionalMasterSecurityGroups;
    bool m_additionalMasterSecurityGroupsHasBeenSet = false;

    Aws::Vector<Aws::String> m_additionalSlaveSecurityGroups;
    bool m_additionalSlaveSecurityGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
