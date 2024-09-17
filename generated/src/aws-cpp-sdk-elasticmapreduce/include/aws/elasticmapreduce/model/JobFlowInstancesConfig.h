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
    AWS_EMR_API JobFlowInstancesConfig();
    AWS_EMR_API JobFlowInstancesConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API JobFlowInstancesConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon EC2 instance type of the master node.</p>
     */
    inline const Aws::String& GetMasterInstanceType() const{ return m_masterInstanceType; }
    inline bool MasterInstanceTypeHasBeenSet() const { return m_masterInstanceTypeHasBeenSet; }
    inline void SetMasterInstanceType(const Aws::String& value) { m_masterInstanceTypeHasBeenSet = true; m_masterInstanceType = value; }
    inline void SetMasterInstanceType(Aws::String&& value) { m_masterInstanceTypeHasBeenSet = true; m_masterInstanceType = std::move(value); }
    inline void SetMasterInstanceType(const char* value) { m_masterInstanceTypeHasBeenSet = true; m_masterInstanceType.assign(value); }
    inline JobFlowInstancesConfig& WithMasterInstanceType(const Aws::String& value) { SetMasterInstanceType(value); return *this;}
    inline JobFlowInstancesConfig& WithMasterInstanceType(Aws::String&& value) { SetMasterInstanceType(std::move(value)); return *this;}
    inline JobFlowInstancesConfig& WithMasterInstanceType(const char* value) { SetMasterInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EC2 instance type of the core and task nodes.</p>
     */
    inline const Aws::String& GetSlaveInstanceType() const{ return m_slaveInstanceType; }
    inline bool SlaveInstanceTypeHasBeenSet() const { return m_slaveInstanceTypeHasBeenSet; }
    inline void SetSlaveInstanceType(const Aws::String& value) { m_slaveInstanceTypeHasBeenSet = true; m_slaveInstanceType = value; }
    inline void SetSlaveInstanceType(Aws::String&& value) { m_slaveInstanceTypeHasBeenSet = true; m_slaveInstanceType = std::move(value); }
    inline void SetSlaveInstanceType(const char* value) { m_slaveInstanceTypeHasBeenSet = true; m_slaveInstanceType.assign(value); }
    inline JobFlowInstancesConfig& WithSlaveInstanceType(const Aws::String& value) { SetSlaveInstanceType(value); return *this;}
    inline JobFlowInstancesConfig& WithSlaveInstanceType(Aws::String&& value) { SetSlaveInstanceType(std::move(value)); return *this;}
    inline JobFlowInstancesConfig& WithSlaveInstanceType(const char* value) { SetSlaveInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Amazon EC2 instances in the cluster.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline JobFlowInstancesConfig& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for the instance groups in a cluster.</p>
     */
    inline const Aws::Vector<InstanceGroupConfig>& GetInstanceGroups() const{ return m_instanceGroups; }
    inline bool InstanceGroupsHasBeenSet() const { return m_instanceGroupsHasBeenSet; }
    inline void SetInstanceGroups(const Aws::Vector<InstanceGroupConfig>& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups = value; }
    inline void SetInstanceGroups(Aws::Vector<InstanceGroupConfig>&& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups = std::move(value); }
    inline JobFlowInstancesConfig& WithInstanceGroups(const Aws::Vector<InstanceGroupConfig>& value) { SetInstanceGroups(value); return *this;}
    inline JobFlowInstancesConfig& WithInstanceGroups(Aws::Vector<InstanceGroupConfig>&& value) { SetInstanceGroups(std::move(value)); return *this;}
    inline JobFlowInstancesConfig& AddInstanceGroups(const InstanceGroupConfig& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups.push_back(value); return *this; }
    inline JobFlowInstancesConfig& AddInstanceGroups(InstanceGroupConfig&& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     *  <p>The instance fleet configuration is available only in Amazon EMR
     * releases 4.8.0 and later, excluding 5.0.x versions.</p>  <p>Describes the
     * Amazon EC2 instances and instance configurations for clusters that use the
     * instance fleet configuration.</p>
     */
    inline const Aws::Vector<InstanceFleetConfig>& GetInstanceFleets() const{ return m_instanceFleets; }
    inline bool InstanceFleetsHasBeenSet() const { return m_instanceFleetsHasBeenSet; }
    inline void SetInstanceFleets(const Aws::Vector<InstanceFleetConfig>& value) { m_instanceFleetsHasBeenSet = true; m_instanceFleets = value; }
    inline void SetInstanceFleets(Aws::Vector<InstanceFleetConfig>&& value) { m_instanceFleetsHasBeenSet = true; m_instanceFleets = std::move(value); }
    inline JobFlowInstancesConfig& WithInstanceFleets(const Aws::Vector<InstanceFleetConfig>& value) { SetInstanceFleets(value); return *this;}
    inline JobFlowInstancesConfig& WithInstanceFleets(Aws::Vector<InstanceFleetConfig>&& value) { SetInstanceFleets(std::move(value)); return *this;}
    inline JobFlowInstancesConfig& AddInstanceFleets(const InstanceFleetConfig& value) { m_instanceFleetsHasBeenSet = true; m_instanceFleets.push_back(value); return *this; }
    inline JobFlowInstancesConfig& AddInstanceFleets(InstanceFleetConfig&& value) { m_instanceFleetsHasBeenSet = true; m_instanceFleets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon EC2 key pair that can be used to connect to the master
     * node using SSH as the user called "hadoop."</p>
     */
    inline const Aws::String& GetEc2KeyName() const{ return m_ec2KeyName; }
    inline bool Ec2KeyNameHasBeenSet() const { return m_ec2KeyNameHasBeenSet; }
    inline void SetEc2KeyName(const Aws::String& value) { m_ec2KeyNameHasBeenSet = true; m_ec2KeyName = value; }
    inline void SetEc2KeyName(Aws::String&& value) { m_ec2KeyNameHasBeenSet = true; m_ec2KeyName = std::move(value); }
    inline void SetEc2KeyName(const char* value) { m_ec2KeyNameHasBeenSet = true; m_ec2KeyName.assign(value); }
    inline JobFlowInstancesConfig& WithEc2KeyName(const Aws::String& value) { SetEc2KeyName(value); return *this;}
    inline JobFlowInstancesConfig& WithEc2KeyName(Aws::String&& value) { SetEc2KeyName(std::move(value)); return *this;}
    inline JobFlowInstancesConfig& WithEc2KeyName(const char* value) { SetEc2KeyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone in which the cluster runs.</p>
     */
    inline const PlacementType& GetPlacement() const{ return m_placement; }
    inline bool PlacementHasBeenSet() const { return m_placementHasBeenSet; }
    inline void SetPlacement(const PlacementType& value) { m_placementHasBeenSet = true; m_placement = value; }
    inline void SetPlacement(PlacementType&& value) { m_placementHasBeenSet = true; m_placement = std::move(value); }
    inline JobFlowInstancesConfig& WithPlacement(const PlacementType& value) { SetPlacement(value); return *this;}
    inline JobFlowInstancesConfig& WithPlacement(PlacementType&& value) { SetPlacement(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the cluster should remain available after completing all
     * steps. Defaults to <code>false</code>. For more information about configuring
     * cluster termination, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-plan-termination.html">Control
     * Cluster Termination</a> in the <i>EMR Management Guide</i>.</p>
     */
    inline bool GetKeepJobFlowAliveWhenNoSteps() const{ return m_keepJobFlowAliveWhenNoSteps; }
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
    inline bool GetTerminationProtected() const{ return m_terminationProtected; }
    inline bool TerminationProtectedHasBeenSet() const { return m_terminationProtectedHasBeenSet; }
    inline void SetTerminationProtected(bool value) { m_terminationProtectedHasBeenSet = true; m_terminationProtected = value; }
    inline JobFlowInstancesConfig& WithTerminationProtected(bool value) { SetTerminationProtected(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Amazon EMR should gracefully replace core nodes that have
     * degraded within the cluster.</p>
     */
    inline bool GetUnhealthyNodeReplacement() const{ return m_unhealthyNodeReplacement; }
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
    inline const Aws::String& GetHadoopVersion() const{ return m_hadoopVersion; }
    inline bool HadoopVersionHasBeenSet() const { return m_hadoopVersionHasBeenSet; }
    inline void SetHadoopVersion(const Aws::String& value) { m_hadoopVersionHasBeenSet = true; m_hadoopVersion = value; }
    inline void SetHadoopVersion(Aws::String&& value) { m_hadoopVersionHasBeenSet = true; m_hadoopVersion = std::move(value); }
    inline void SetHadoopVersion(const char* value) { m_hadoopVersionHasBeenSet = true; m_hadoopVersion.assign(value); }
    inline JobFlowInstancesConfig& WithHadoopVersion(const Aws::String& value) { SetHadoopVersion(value); return *this;}
    inline JobFlowInstancesConfig& WithHadoopVersion(Aws::String&& value) { SetHadoopVersion(std::move(value)); return *this;}
    inline JobFlowInstancesConfig& WithHadoopVersion(const char* value) { SetHadoopVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Applies to clusters that use the uniform instance group configuration. To
     * launch the cluster in Amazon Virtual Private Cloud (Amazon VPC), set this
     * parameter to the identifier of the Amazon VPC subnet where you want the cluster
     * to launch. If you do not specify this value and your account supports
     * EC2-Classic, the cluster launches in EC2-Classic.</p>
     */
    inline const Aws::String& GetEc2SubnetId() const{ return m_ec2SubnetId; }
    inline bool Ec2SubnetIdHasBeenSet() const { return m_ec2SubnetIdHasBeenSet; }
    inline void SetEc2SubnetId(const Aws::String& value) { m_ec2SubnetIdHasBeenSet = true; m_ec2SubnetId = value; }
    inline void SetEc2SubnetId(Aws::String&& value) { m_ec2SubnetIdHasBeenSet = true; m_ec2SubnetId = std::move(value); }
    inline void SetEc2SubnetId(const char* value) { m_ec2SubnetIdHasBeenSet = true; m_ec2SubnetId.assign(value); }
    inline JobFlowInstancesConfig& WithEc2SubnetId(const Aws::String& value) { SetEc2SubnetId(value); return *this;}
    inline JobFlowInstancesConfig& WithEc2SubnetId(Aws::String&& value) { SetEc2SubnetId(std::move(value)); return *this;}
    inline JobFlowInstancesConfig& WithEc2SubnetId(const char* value) { SetEc2SubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Applies to clusters that use the instance fleet configuration. When multiple
     * Amazon EC2 subnet IDs are specified, Amazon EMR evaluates them and launches
     * instances in the optimal subnet.</p>  <p>The instance fleet configuration
     * is available only in Amazon EMR releases 4.8.0 and later, excluding 5.0.x
     * versions.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetEc2SubnetIds() const{ return m_ec2SubnetIds; }
    inline bool Ec2SubnetIdsHasBeenSet() const { return m_ec2SubnetIdsHasBeenSet; }
    inline void SetEc2SubnetIds(const Aws::Vector<Aws::String>& value) { m_ec2SubnetIdsHasBeenSet = true; m_ec2SubnetIds = value; }
    inline void SetEc2SubnetIds(Aws::Vector<Aws::String>&& value) { m_ec2SubnetIdsHasBeenSet = true; m_ec2SubnetIds = std::move(value); }
    inline JobFlowInstancesConfig& WithEc2SubnetIds(const Aws::Vector<Aws::String>& value) { SetEc2SubnetIds(value); return *this;}
    inline JobFlowInstancesConfig& WithEc2SubnetIds(Aws::Vector<Aws::String>&& value) { SetEc2SubnetIds(std::move(value)); return *this;}
    inline JobFlowInstancesConfig& AddEc2SubnetIds(const Aws::String& value) { m_ec2SubnetIdsHasBeenSet = true; m_ec2SubnetIds.push_back(value); return *this; }
    inline JobFlowInstancesConfig& AddEc2SubnetIds(Aws::String&& value) { m_ec2SubnetIdsHasBeenSet = true; m_ec2SubnetIds.push_back(std::move(value)); return *this; }
    inline JobFlowInstancesConfig& AddEc2SubnetIds(const char* value) { m_ec2SubnetIdsHasBeenSet = true; m_ec2SubnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon EC2 security group for the master node. If you
     * specify <code>EmrManagedMasterSecurityGroup</code>, you must also specify
     * <code>EmrManagedSlaveSecurityGroup</code>.</p>
     */
    inline const Aws::String& GetEmrManagedMasterSecurityGroup() const{ return m_emrManagedMasterSecurityGroup; }
    inline bool EmrManagedMasterSecurityGroupHasBeenSet() const { return m_emrManagedMasterSecurityGroupHasBeenSet; }
    inline void SetEmrManagedMasterSecurityGroup(const Aws::String& value) { m_emrManagedMasterSecurityGroupHasBeenSet = true; m_emrManagedMasterSecurityGroup = value; }
    inline void SetEmrManagedMasterSecurityGroup(Aws::String&& value) { m_emrManagedMasterSecurityGroupHasBeenSet = true; m_emrManagedMasterSecurityGroup = std::move(value); }
    inline void SetEmrManagedMasterSecurityGroup(const char* value) { m_emrManagedMasterSecurityGroupHasBeenSet = true; m_emrManagedMasterSecurityGroup.assign(value); }
    inline JobFlowInstancesConfig& WithEmrManagedMasterSecurityGroup(const Aws::String& value) { SetEmrManagedMasterSecurityGroup(value); return *this;}
    inline JobFlowInstancesConfig& WithEmrManagedMasterSecurityGroup(Aws::String&& value) { SetEmrManagedMasterSecurityGroup(std::move(value)); return *this;}
    inline JobFlowInstancesConfig& WithEmrManagedMasterSecurityGroup(const char* value) { SetEmrManagedMasterSecurityGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon EC2 security group for the core and task nodes.
     * If you specify <code>EmrManagedSlaveSecurityGroup</code>, you must also specify
     * <code>EmrManagedMasterSecurityGroup</code>.</p>
     */
    inline const Aws::String& GetEmrManagedSlaveSecurityGroup() const{ return m_emrManagedSlaveSecurityGroup; }
    inline bool EmrManagedSlaveSecurityGroupHasBeenSet() const { return m_emrManagedSlaveSecurityGroupHasBeenSet; }
    inline void SetEmrManagedSlaveSecurityGroup(const Aws::String& value) { m_emrManagedSlaveSecurityGroupHasBeenSet = true; m_emrManagedSlaveSecurityGroup = value; }
    inline void SetEmrManagedSlaveSecurityGroup(Aws::String&& value) { m_emrManagedSlaveSecurityGroupHasBeenSet = true; m_emrManagedSlaveSecurityGroup = std::move(value); }
    inline void SetEmrManagedSlaveSecurityGroup(const char* value) { m_emrManagedSlaveSecurityGroupHasBeenSet = true; m_emrManagedSlaveSecurityGroup.assign(value); }
    inline JobFlowInstancesConfig& WithEmrManagedSlaveSecurityGroup(const Aws::String& value) { SetEmrManagedSlaveSecurityGroup(value); return *this;}
    inline JobFlowInstancesConfig& WithEmrManagedSlaveSecurityGroup(Aws::String&& value) { SetEmrManagedSlaveSecurityGroup(std::move(value)); return *this;}
    inline JobFlowInstancesConfig& WithEmrManagedSlaveSecurityGroup(const char* value) { SetEmrManagedSlaveSecurityGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon EC2 security group for the Amazon EMR service to
     * access clusters in VPC private subnets.</p>
     */
    inline const Aws::String& GetServiceAccessSecurityGroup() const{ return m_serviceAccessSecurityGroup; }
    inline bool ServiceAccessSecurityGroupHasBeenSet() const { return m_serviceAccessSecurityGroupHasBeenSet; }
    inline void SetServiceAccessSecurityGroup(const Aws::String& value) { m_serviceAccessSecurityGroupHasBeenSet = true; m_serviceAccessSecurityGroup = value; }
    inline void SetServiceAccessSecurityGroup(Aws::String&& value) { m_serviceAccessSecurityGroupHasBeenSet = true; m_serviceAccessSecurityGroup = std::move(value); }
    inline void SetServiceAccessSecurityGroup(const char* value) { m_serviceAccessSecurityGroupHasBeenSet = true; m_serviceAccessSecurityGroup.assign(value); }
    inline JobFlowInstancesConfig& WithServiceAccessSecurityGroup(const Aws::String& value) { SetServiceAccessSecurityGroup(value); return *this;}
    inline JobFlowInstancesConfig& WithServiceAccessSecurityGroup(Aws::String&& value) { SetServiceAccessSecurityGroup(std::move(value)); return *this;}
    inline JobFlowInstancesConfig& WithServiceAccessSecurityGroup(const char* value) { SetServiceAccessSecurityGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of additional Amazon EC2 security group IDs for the master node.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalMasterSecurityGroups() const{ return m_additionalMasterSecurityGroups; }
    inline bool AdditionalMasterSecurityGroupsHasBeenSet() const { return m_additionalMasterSecurityGroupsHasBeenSet; }
    inline void SetAdditionalMasterSecurityGroups(const Aws::Vector<Aws::String>& value) { m_additionalMasterSecurityGroupsHasBeenSet = true; m_additionalMasterSecurityGroups = value; }
    inline void SetAdditionalMasterSecurityGroups(Aws::Vector<Aws::String>&& value) { m_additionalMasterSecurityGroupsHasBeenSet = true; m_additionalMasterSecurityGroups = std::move(value); }
    inline JobFlowInstancesConfig& WithAdditionalMasterSecurityGroups(const Aws::Vector<Aws::String>& value) { SetAdditionalMasterSecurityGroups(value); return *this;}
    inline JobFlowInstancesConfig& WithAdditionalMasterSecurityGroups(Aws::Vector<Aws::String>&& value) { SetAdditionalMasterSecurityGroups(std::move(value)); return *this;}
    inline JobFlowInstancesConfig& AddAdditionalMasterSecurityGroups(const Aws::String& value) { m_additionalMasterSecurityGroupsHasBeenSet = true; m_additionalMasterSecurityGroups.push_back(value); return *this; }
    inline JobFlowInstancesConfig& AddAdditionalMasterSecurityGroups(Aws::String&& value) { m_additionalMasterSecurityGroupsHasBeenSet = true; m_additionalMasterSecurityGroups.push_back(std::move(value)); return *this; }
    inline JobFlowInstancesConfig& AddAdditionalMasterSecurityGroups(const char* value) { m_additionalMasterSecurityGroupsHasBeenSet = true; m_additionalMasterSecurityGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of additional Amazon EC2 security group IDs for the core and task
     * nodes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalSlaveSecurityGroups() const{ return m_additionalSlaveSecurityGroups; }
    inline bool AdditionalSlaveSecurityGroupsHasBeenSet() const { return m_additionalSlaveSecurityGroupsHasBeenSet; }
    inline void SetAdditionalSlaveSecurityGroups(const Aws::Vector<Aws::String>& value) { m_additionalSlaveSecurityGroupsHasBeenSet = true; m_additionalSlaveSecurityGroups = value; }
    inline void SetAdditionalSlaveSecurityGroups(Aws::Vector<Aws::String>&& value) { m_additionalSlaveSecurityGroupsHasBeenSet = true; m_additionalSlaveSecurityGroups = std::move(value); }
    inline JobFlowInstancesConfig& WithAdditionalSlaveSecurityGroups(const Aws::Vector<Aws::String>& value) { SetAdditionalSlaveSecurityGroups(value); return *this;}
    inline JobFlowInstancesConfig& WithAdditionalSlaveSecurityGroups(Aws::Vector<Aws::String>&& value) { SetAdditionalSlaveSecurityGroups(std::move(value)); return *this;}
    inline JobFlowInstancesConfig& AddAdditionalSlaveSecurityGroups(const Aws::String& value) { m_additionalSlaveSecurityGroupsHasBeenSet = true; m_additionalSlaveSecurityGroups.push_back(value); return *this; }
    inline JobFlowInstancesConfig& AddAdditionalSlaveSecurityGroups(Aws::String&& value) { m_additionalSlaveSecurityGroupsHasBeenSet = true; m_additionalSlaveSecurityGroups.push_back(std::move(value)); return *this; }
    inline JobFlowInstancesConfig& AddAdditionalSlaveSecurityGroups(const char* value) { m_additionalSlaveSecurityGroupsHasBeenSet = true; m_additionalSlaveSecurityGroups.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_masterInstanceType;
    bool m_masterInstanceTypeHasBeenSet = false;

    Aws::String m_slaveInstanceType;
    bool m_slaveInstanceTypeHasBeenSet = false;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet = false;

    Aws::Vector<InstanceGroupConfig> m_instanceGroups;
    bool m_instanceGroupsHasBeenSet = false;

    Aws::Vector<InstanceFleetConfig> m_instanceFleets;
    bool m_instanceFleetsHasBeenSet = false;

    Aws::String m_ec2KeyName;
    bool m_ec2KeyNameHasBeenSet = false;

    PlacementType m_placement;
    bool m_placementHasBeenSet = false;

    bool m_keepJobFlowAliveWhenNoSteps;
    bool m_keepJobFlowAliveWhenNoStepsHasBeenSet = false;

    bool m_terminationProtected;
    bool m_terminationProtectedHasBeenSet = false;

    bool m_unhealthyNodeReplacement;
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
