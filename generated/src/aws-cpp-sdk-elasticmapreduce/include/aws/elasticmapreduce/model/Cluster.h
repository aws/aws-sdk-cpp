/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/ClusterStatus.h>
#include <aws/elasticmapreduce/model/Ec2InstanceAttributes.h>
#include <aws/elasticmapreduce/model/InstanceCollectionType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/ScaleDownBehavior.h>
#include <aws/elasticmapreduce/model/RepoUpgradeOnBoot.h>
#include <aws/elasticmapreduce/model/KerberosAttributes.h>
#include <aws/elasticmapreduce/model/Application.h>
#include <aws/elasticmapreduce/model/Tag.h>
#include <aws/elasticmapreduce/model/Configuration.h>
#include <aws/elasticmapreduce/model/PlacementGroupConfig.h>
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
   * <p>The detailed description of the cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/Cluster">AWS
   * API Reference</a></p>
   */
  class Cluster
  {
  public:
    AWS_EMR_API Cluster() = default;
    AWS_EMR_API Cluster(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Cluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the cluster.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Cluster& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the cluster. This parameter can't contain the characters &lt;,
     * &gt;, $, |, or ` (backtick).</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Cluster& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status details about the cluster.</p>
     */
    inline const ClusterStatus& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = ClusterStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = ClusterStatus>
    Cluster& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about the Amazon EC2 instances in a cluster grouped by
     * category. For example, key name, subnet ID, IAM instance profile, and so on.</p>
     */
    inline const Ec2InstanceAttributes& GetEc2InstanceAttributes() const { return m_ec2InstanceAttributes; }
    inline bool Ec2InstanceAttributesHasBeenSet() const { return m_ec2InstanceAttributesHasBeenSet; }
    template<typename Ec2InstanceAttributesT = Ec2InstanceAttributes>
    void SetEc2InstanceAttributes(Ec2InstanceAttributesT&& value) { m_ec2InstanceAttributesHasBeenSet = true; m_ec2InstanceAttributes = std::forward<Ec2InstanceAttributesT>(value); }
    template<typename Ec2InstanceAttributesT = Ec2InstanceAttributes>
    Cluster& WithEc2InstanceAttributes(Ec2InstanceAttributesT&& value) { SetEc2InstanceAttributes(std::forward<Ec2InstanceAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     *  <p>The instance fleet configuration is available only in Amazon EMR
     * releases 4.8.0 and later, excluding 5.0.x versions.</p>  <p>The instance
     * group configuration of the cluster. A value of <code>INSTANCE_GROUP</code>
     * indicates a uniform instance group configuration. A value of
     * <code>INSTANCE_FLEET</code> indicates an instance fleets configuration.</p>
     */
    inline InstanceCollectionType GetInstanceCollectionType() const { return m_instanceCollectionType; }
    inline bool InstanceCollectionTypeHasBeenSet() const { return m_instanceCollectionTypeHasBeenSet; }
    inline void SetInstanceCollectionType(InstanceCollectionType value) { m_instanceCollectionTypeHasBeenSet = true; m_instanceCollectionType = value; }
    inline Cluster& WithInstanceCollectionType(InstanceCollectionType value) { SetInstanceCollectionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the Amazon S3 location where logs for this cluster are
     * stored.</p>
     */
    inline const Aws::String& GetLogUri() const { return m_logUri; }
    inline bool LogUriHasBeenSet() const { return m_logUriHasBeenSet; }
    template<typename LogUriT = Aws::String>
    void SetLogUri(LogUriT&& value) { m_logUriHasBeenSet = true; m_logUri = std::forward<LogUriT>(value); }
    template<typename LogUriT = Aws::String>
    Cluster& WithLogUri(LogUriT&& value) { SetLogUri(std::forward<LogUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The KMS key used for encrypting log files. This attribute is only available
     * with Amazon EMR 5.30.0 and later, excluding Amazon EMR 6.0.0. </p>
     */
    inline const Aws::String& GetLogEncryptionKmsKeyId() const { return m_logEncryptionKmsKeyId; }
    inline bool LogEncryptionKmsKeyIdHasBeenSet() const { return m_logEncryptionKmsKeyIdHasBeenSet; }
    template<typename LogEncryptionKmsKeyIdT = Aws::String>
    void SetLogEncryptionKmsKeyId(LogEncryptionKmsKeyIdT&& value) { m_logEncryptionKmsKeyIdHasBeenSet = true; m_logEncryptionKmsKeyId = std::forward<LogEncryptionKmsKeyIdT>(value); }
    template<typename LogEncryptionKmsKeyIdT = Aws::String>
    Cluster& WithLogEncryptionKmsKeyId(LogEncryptionKmsKeyIdT&& value) { SetLogEncryptionKmsKeyId(std::forward<LogEncryptionKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AMI version requested for this cluster.</p>
     */
    inline const Aws::String& GetRequestedAmiVersion() const { return m_requestedAmiVersion; }
    inline bool RequestedAmiVersionHasBeenSet() const { return m_requestedAmiVersionHasBeenSet; }
    template<typename RequestedAmiVersionT = Aws::String>
    void SetRequestedAmiVersion(RequestedAmiVersionT&& value) { m_requestedAmiVersionHasBeenSet = true; m_requestedAmiVersion = std::forward<RequestedAmiVersionT>(value); }
    template<typename RequestedAmiVersionT = Aws::String>
    Cluster& WithRequestedAmiVersion(RequestedAmiVersionT&& value) { SetRequestedAmiVersion(std::forward<RequestedAmiVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AMI version running on this cluster.</p>
     */
    inline const Aws::String& GetRunningAmiVersion() const { return m_runningAmiVersion; }
    inline bool RunningAmiVersionHasBeenSet() const { return m_runningAmiVersionHasBeenSet; }
    template<typename RunningAmiVersionT = Aws::String>
    void SetRunningAmiVersion(RunningAmiVersionT&& value) { m_runningAmiVersionHasBeenSet = true; m_runningAmiVersion = std::forward<RunningAmiVersionT>(value); }
    template<typename RunningAmiVersionT = Aws::String>
    Cluster& WithRunningAmiVersion(RunningAmiVersionT&& value) { SetRunningAmiVersion(std::forward<RunningAmiVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon EMR release label, which determines the version of open-source
     * application packages installed on the cluster. Release labels are in the form
     * <code>emr-x.x.x</code>, where x.x.x is an Amazon EMR release version such as
     * <code>emr-5.14.0</code>. For more information about Amazon EMR release versions
     * and included application versions and features, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ReleaseGuide/">https://docs.aws.amazon.com/emr/latest/ReleaseGuide/</a>.
     * The release label applies only to Amazon EMR releases version 4.0 and later.
     * Earlier versions use <code>AmiVersion</code>.</p>
     */
    inline const Aws::String& GetReleaseLabel() const { return m_releaseLabel; }
    inline bool ReleaseLabelHasBeenSet() const { return m_releaseLabelHasBeenSet; }
    template<typename ReleaseLabelT = Aws::String>
    void SetReleaseLabel(ReleaseLabelT&& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = std::forward<ReleaseLabelT>(value); }
    template<typename ReleaseLabelT = Aws::String>
    Cluster& WithReleaseLabel(ReleaseLabelT&& value) { SetReleaseLabel(std::forward<ReleaseLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the cluster should terminate after completing all
     * steps.</p>
     */
    inline bool GetAutoTerminate() const { return m_autoTerminate; }
    inline bool AutoTerminateHasBeenSet() const { return m_autoTerminateHasBeenSet; }
    inline void SetAutoTerminate(bool value) { m_autoTerminateHasBeenSet = true; m_autoTerminate = value; }
    inline Cluster& WithAutoTerminate(bool value) { SetAutoTerminate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Amazon EMR will lock the cluster to prevent the Amazon EC2
     * instances from being terminated by an API call or user intervention, or in the
     * event of a cluster error.</p>
     */
    inline bool GetTerminationProtected() const { return m_terminationProtected; }
    inline bool TerminationProtectedHasBeenSet() const { return m_terminationProtectedHasBeenSet; }
    inline void SetTerminationProtected(bool value) { m_terminationProtectedHasBeenSet = true; m_terminationProtected = value; }
    inline Cluster& WithTerminationProtected(bool value) { SetTerminationProtected(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Amazon EMR should gracefully replace Amazon EC2 core
     * instances that have degraded within the cluster.</p>
     */
    inline bool GetUnhealthyNodeReplacement() const { return m_unhealthyNodeReplacement; }
    inline bool UnhealthyNodeReplacementHasBeenSet() const { return m_unhealthyNodeReplacementHasBeenSet; }
    inline void SetUnhealthyNodeReplacement(bool value) { m_unhealthyNodeReplacementHasBeenSet = true; m_unhealthyNodeReplacement = value; }
    inline Cluster& WithUnhealthyNodeReplacement(bool value) { SetUnhealthyNodeReplacement(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the cluster is visible to IAM principals in the Amazon Web
     * Services account associated with the cluster. When <code>true</code>, IAM
     * principals in the Amazon Web Services account can perform Amazon EMR cluster
     * actions on the cluster that their IAM policies allow. When <code>false</code>,
     * only the IAM principal that created the cluster and the Amazon Web Services
     * account root user can perform Amazon EMR actions, regardless of IAM permissions
     * policies attached to other IAM principals.</p> <p>The default value is
     * <code>true</code> if a value is not provided when creating a cluster using the
     * Amazon EMR API <a>RunJobFlow</a> command, the CLI <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/emr/create-cluster.html">create-cluster</a>
     * command, or the Amazon Web Services Management Console.</p>
     */
    inline bool GetVisibleToAllUsers() const { return m_visibleToAllUsers; }
    inline bool VisibleToAllUsersHasBeenSet() const { return m_visibleToAllUsersHasBeenSet; }
    inline void SetVisibleToAllUsers(bool value) { m_visibleToAllUsersHasBeenSet = true; m_visibleToAllUsers = value; }
    inline Cluster& WithVisibleToAllUsers(bool value) { SetVisibleToAllUsers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The applications installed on this cluster.</p>
     */
    inline const Aws::Vector<Application>& GetApplications() const { return m_applications; }
    inline bool ApplicationsHasBeenSet() const { return m_applicationsHasBeenSet; }
    template<typename ApplicationsT = Aws::Vector<Application>>
    void SetApplications(ApplicationsT&& value) { m_applicationsHasBeenSet = true; m_applications = std::forward<ApplicationsT>(value); }
    template<typename ApplicationsT = Aws::Vector<Application>>
    Cluster& WithApplications(ApplicationsT&& value) { SetApplications(std::forward<ApplicationsT>(value)); return *this;}
    template<typename ApplicationsT = Application>
    Cluster& AddApplications(ApplicationsT&& value) { m_applicationsHasBeenSet = true; m_applications.emplace_back(std::forward<ApplicationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of tags associated with a cluster.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    Cluster& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    Cluster& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IAM role that Amazon EMR assumes in order to access Amazon Web Services
     * resources on your behalf.</p>
     */
    inline const Aws::String& GetServiceRole() const { return m_serviceRole; }
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }
    template<typename ServiceRoleT = Aws::String>
    void SetServiceRole(ServiceRoleT&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::forward<ServiceRoleT>(value); }
    template<typename ServiceRoleT = Aws::String>
    Cluster& WithServiceRole(ServiceRoleT&& value) { SetServiceRole(std::forward<ServiceRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An approximation of the cost of the cluster, represented in m1.small/hours.
     * This value is incremented one time for every hour an m1.small instance runs.
     * Larger instances are weighted more, so an Amazon EC2 instance that is roughly
     * four times more expensive would result in the normalized instance hours being
     * incremented by four. This result is only an approximation and does not reflect
     * the actual billing rate.</p>
     */
    inline int GetNormalizedInstanceHours() const { return m_normalizedInstanceHours; }
    inline bool NormalizedInstanceHoursHasBeenSet() const { return m_normalizedInstanceHoursHasBeenSet; }
    inline void SetNormalizedInstanceHours(int value) { m_normalizedInstanceHoursHasBeenSet = true; m_normalizedInstanceHours = value; }
    inline Cluster& WithNormalizedInstanceHours(int value) { SetNormalizedInstanceHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DNS name of the master node. If the cluster is on a private subnet, this
     * is the private DNS name. On a public subnet, this is the public DNS name.</p>
     */
    inline const Aws::String& GetMasterPublicDnsName() const { return m_masterPublicDnsName; }
    inline bool MasterPublicDnsNameHasBeenSet() const { return m_masterPublicDnsNameHasBeenSet; }
    template<typename MasterPublicDnsNameT = Aws::String>
    void SetMasterPublicDnsName(MasterPublicDnsNameT&& value) { m_masterPublicDnsNameHasBeenSet = true; m_masterPublicDnsName = std::forward<MasterPublicDnsNameT>(value); }
    template<typename MasterPublicDnsNameT = Aws::String>
    Cluster& WithMasterPublicDnsName(MasterPublicDnsNameT&& value) { SetMasterPublicDnsName(std::forward<MasterPublicDnsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Applies only to Amazon EMR releases 4.x and later. The list of configurations
     * that are supplied to the Amazon EMR cluster.</p>
     */
    inline const Aws::Vector<Configuration>& GetConfigurations() const { return m_configurations; }
    inline bool ConfigurationsHasBeenSet() const { return m_configurationsHasBeenSet; }
    template<typename ConfigurationsT = Aws::Vector<Configuration>>
    void SetConfigurations(ConfigurationsT&& value) { m_configurationsHasBeenSet = true; m_configurations = std::forward<ConfigurationsT>(value); }
    template<typename ConfigurationsT = Aws::Vector<Configuration>>
    Cluster& WithConfigurations(ConfigurationsT&& value) { SetConfigurations(std::forward<ConfigurationsT>(value)); return *this;}
    template<typename ConfigurationsT = Configuration>
    Cluster& AddConfigurations(ConfigurationsT&& value) { m_configurationsHasBeenSet = true; m_configurations.emplace_back(std::forward<ConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the security configuration applied to the cluster.</p>
     */
    inline const Aws::String& GetSecurityConfiguration() const { return m_securityConfiguration; }
    inline bool SecurityConfigurationHasBeenSet() const { return m_securityConfigurationHasBeenSet; }
    template<typename SecurityConfigurationT = Aws::String>
    void SetSecurityConfiguration(SecurityConfigurationT&& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = std::forward<SecurityConfigurationT>(value); }
    template<typename SecurityConfigurationT = Aws::String>
    Cluster& WithSecurityConfiguration(SecurityConfigurationT&& value) { SetSecurityConfiguration(std::forward<SecurityConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An IAM role for automatic scaling policies. The default role is
     * <code>EMR_AutoScaling_DefaultRole</code>. The IAM role provides permissions that
     * the automatic scaling feature requires to launch and terminate Amazon EC2
     * instances in an instance group.</p>
     */
    inline const Aws::String& GetAutoScalingRole() const { return m_autoScalingRole; }
    inline bool AutoScalingRoleHasBeenSet() const { return m_autoScalingRoleHasBeenSet; }
    template<typename AutoScalingRoleT = Aws::String>
    void SetAutoScalingRole(AutoScalingRoleT&& value) { m_autoScalingRoleHasBeenSet = true; m_autoScalingRole = std::forward<AutoScalingRoleT>(value); }
    template<typename AutoScalingRoleT = Aws::String>
    Cluster& WithAutoScalingRole(AutoScalingRoleT&& value) { SetAutoScalingRole(std::forward<AutoScalingRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The way that individual Amazon EC2 instances terminate when an automatic
     * scale-in activity occurs or an instance group is resized.
     * <code>TERMINATE_AT_INSTANCE_HOUR</code> indicates that Amazon EMR terminates
     * nodes at the instance-hour boundary, regardless of when the request to terminate
     * the instance was submitted. This option is only available with Amazon EMR 5.1.0
     * and later and is the default for clusters created using that version.
     * <code>TERMINATE_AT_TASK_COMPLETION</code> indicates that Amazon EMR adds nodes
     * to a deny list and drains tasks from nodes before terminating the Amazon EC2
     * instances, regardless of the instance-hour boundary. With either behavior,
     * Amazon EMR removes the least active nodes first and blocks instance termination
     * if it could lead to HDFS corruption. <code>TERMINATE_AT_TASK_COMPLETION</code>
     * is available only in Amazon EMR releases 4.1.0 and later, and is the default for
     * versions of Amazon EMR earlier than 5.1.0.</p>
     */
    inline ScaleDownBehavior GetScaleDownBehavior() const { return m_scaleDownBehavior; }
    inline bool ScaleDownBehaviorHasBeenSet() const { return m_scaleDownBehaviorHasBeenSet; }
    inline void SetScaleDownBehavior(ScaleDownBehavior value) { m_scaleDownBehaviorHasBeenSet = true; m_scaleDownBehavior = value; }
    inline Cluster& WithScaleDownBehavior(ScaleDownBehavior value) { SetScaleDownBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Available only in Amazon EMR releases 5.7.0 and later. The ID of a custom
     * Amazon EBS-backed Linux AMI if the cluster uses a custom AMI.</p>
     */
    inline const Aws::String& GetCustomAmiId() const { return m_customAmiId; }
    inline bool CustomAmiIdHasBeenSet() const { return m_customAmiIdHasBeenSet; }
    template<typename CustomAmiIdT = Aws::String>
    void SetCustomAmiId(CustomAmiIdT&& value) { m_customAmiIdHasBeenSet = true; m_customAmiId = std::forward<CustomAmiIdT>(value); }
    template<typename CustomAmiIdT = Aws::String>
    Cluster& WithCustomAmiId(CustomAmiIdT&& value) { SetCustomAmiId(std::forward<CustomAmiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in GiB, of the Amazon EBS root device volume of the Linux AMI that
     * is used for each Amazon EC2 instance. Available in Amazon EMR releases 4.x and
     * later.</p>
     */
    inline int GetEbsRootVolumeSize() const { return m_ebsRootVolumeSize; }
    inline bool EbsRootVolumeSizeHasBeenSet() const { return m_ebsRootVolumeSizeHasBeenSet; }
    inline void SetEbsRootVolumeSize(int value) { m_ebsRootVolumeSizeHasBeenSet = true; m_ebsRootVolumeSize = value; }
    inline Cluster& WithEbsRootVolumeSize(int value) { SetEbsRootVolumeSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Applies only when <code>CustomAmiID</code> is used. Specifies the type of
     * updates that the Amazon Linux AMI package repositories apply when an instance
     * boots using the AMI.</p>
     */
    inline RepoUpgradeOnBoot GetRepoUpgradeOnBoot() const { return m_repoUpgradeOnBoot; }
    inline bool RepoUpgradeOnBootHasBeenSet() const { return m_repoUpgradeOnBootHasBeenSet; }
    inline void SetRepoUpgradeOnBoot(RepoUpgradeOnBoot value) { m_repoUpgradeOnBootHasBeenSet = true; m_repoUpgradeOnBoot = value; }
    inline Cluster& WithRepoUpgradeOnBoot(RepoUpgradeOnBoot value) { SetRepoUpgradeOnBoot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attributes for Kerberos configuration when Kerberos authentication is enabled
     * using a security configuration. For more information see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-kerberos.html">Use
     * Kerberos Authentication</a> in the <i>Amazon EMR Management Guide</i>.</p>
     */
    inline const KerberosAttributes& GetKerberosAttributes() const { return m_kerberosAttributes; }
    inline bool KerberosAttributesHasBeenSet() const { return m_kerberosAttributesHasBeenSet; }
    template<typename KerberosAttributesT = KerberosAttributes>
    void SetKerberosAttributes(KerberosAttributesT&& value) { m_kerberosAttributesHasBeenSet = true; m_kerberosAttributes = std::forward<KerberosAttributesT>(value); }
    template<typename KerberosAttributesT = KerberosAttributes>
    Cluster& WithKerberosAttributes(KerberosAttributesT&& value) { SetKerberosAttributes(std::forward<KerberosAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name of the cluster.</p>
     */
    inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    template<typename ClusterArnT = Aws::String>
    void SetClusterArn(ClusterArnT&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::forward<ClusterArnT>(value); }
    template<typename ClusterArnT = Aws::String>
    Cluster& WithClusterArn(ClusterArnT&& value) { SetClusterArn(std::forward<ClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the Outpost where the cluster is launched.
     * </p>
     */
    inline const Aws::String& GetOutpostArn() const { return m_outpostArn; }
    inline bool OutpostArnHasBeenSet() const { return m_outpostArnHasBeenSet; }
    template<typename OutpostArnT = Aws::String>
    void SetOutpostArn(OutpostArnT&& value) { m_outpostArnHasBeenSet = true; m_outpostArn = std::forward<OutpostArnT>(value); }
    template<typename OutpostArnT = Aws::String>
    Cluster& WithOutpostArn(OutpostArnT&& value) { SetOutpostArn(std::forward<OutpostArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the number of steps that can be executed concurrently.</p>
     */
    inline int GetStepConcurrencyLevel() const { return m_stepConcurrencyLevel; }
    inline bool StepConcurrencyLevelHasBeenSet() const { return m_stepConcurrencyLevelHasBeenSet; }
    inline void SetStepConcurrencyLevel(int value) { m_stepConcurrencyLevelHasBeenSet = true; m_stepConcurrencyLevel = value; }
    inline Cluster& WithStepConcurrencyLevel(int value) { SetStepConcurrencyLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Placement group configured for an Amazon EMR cluster.</p>
     */
    inline const Aws::Vector<PlacementGroupConfig>& GetPlacementGroups() const { return m_placementGroups; }
    inline bool PlacementGroupsHasBeenSet() const { return m_placementGroupsHasBeenSet; }
    template<typename PlacementGroupsT = Aws::Vector<PlacementGroupConfig>>
    void SetPlacementGroups(PlacementGroupsT&& value) { m_placementGroupsHasBeenSet = true; m_placementGroups = std::forward<PlacementGroupsT>(value); }
    template<typename PlacementGroupsT = Aws::Vector<PlacementGroupConfig>>
    Cluster& WithPlacementGroups(PlacementGroupsT&& value) { SetPlacementGroups(std::forward<PlacementGroupsT>(value)); return *this;}
    template<typename PlacementGroupsT = PlacementGroupConfig>
    Cluster& AddPlacementGroups(PlacementGroupsT&& value) { m_placementGroupsHasBeenSet = true; m_placementGroups.emplace_back(std::forward<PlacementGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Linux release specified in a cluster launch RunJobFlow request. If
     * no Amazon Linux release was specified, the default Amazon Linux release is shown
     * in the response.</p>
     */
    inline const Aws::String& GetOSReleaseLabel() const { return m_oSReleaseLabel; }
    inline bool OSReleaseLabelHasBeenSet() const { return m_oSReleaseLabelHasBeenSet; }
    template<typename OSReleaseLabelT = Aws::String>
    void SetOSReleaseLabel(OSReleaseLabelT&& value) { m_oSReleaseLabelHasBeenSet = true; m_oSReleaseLabel = std::forward<OSReleaseLabelT>(value); }
    template<typename OSReleaseLabelT = Aws::String>
    Cluster& WithOSReleaseLabel(OSReleaseLabelT&& value) { SetOSReleaseLabel(std::forward<OSReleaseLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IOPS, of the Amazon EBS root device volume of the Linux AMI that is used
     * for each Amazon EC2 instance. Available in Amazon EMR releases 6.15.0 and
     * later.</p>
     */
    inline int GetEbsRootVolumeIops() const { return m_ebsRootVolumeIops; }
    inline bool EbsRootVolumeIopsHasBeenSet() const { return m_ebsRootVolumeIopsHasBeenSet; }
    inline void SetEbsRootVolumeIops(int value) { m_ebsRootVolumeIopsHasBeenSet = true; m_ebsRootVolumeIops = value; }
    inline Cluster& WithEbsRootVolumeIops(int value) { SetEbsRootVolumeIops(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The throughput, in MiB/s, of the Amazon EBS root device volume of the Linux
     * AMI that is used for each Amazon EC2 instance. Available in Amazon EMR releases
     * 6.15.0 and later.</p>
     */
    inline int GetEbsRootVolumeThroughput() const { return m_ebsRootVolumeThroughput; }
    inline bool EbsRootVolumeThroughputHasBeenSet() const { return m_ebsRootVolumeThroughputHasBeenSet; }
    inline void SetEbsRootVolumeThroughput(int value) { m_ebsRootVolumeThroughputHasBeenSet = true; m_ebsRootVolumeThroughput = value; }
    inline Cluster& WithEbsRootVolumeThroughput(int value) { SetEbsRootVolumeThroughput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved.</p>
     */
    inline bool GetExtendedSupport() const { return m_extendedSupport; }
    inline bool ExtendedSupportHasBeenSet() const { return m_extendedSupportHasBeenSet; }
    inline void SetExtendedSupport(bool value) { m_extendedSupportHasBeenSet = true; m_extendedSupport = value; }
    inline Cluster& WithExtendedSupport(bool value) { SetExtendedSupport(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ClusterStatus m_status;
    bool m_statusHasBeenSet = false;

    Ec2InstanceAttributes m_ec2InstanceAttributes;
    bool m_ec2InstanceAttributesHasBeenSet = false;

    InstanceCollectionType m_instanceCollectionType{InstanceCollectionType::NOT_SET};
    bool m_instanceCollectionTypeHasBeenSet = false;

    Aws::String m_logUri;
    bool m_logUriHasBeenSet = false;

    Aws::String m_logEncryptionKmsKeyId;
    bool m_logEncryptionKmsKeyIdHasBeenSet = false;

    Aws::String m_requestedAmiVersion;
    bool m_requestedAmiVersionHasBeenSet = false;

    Aws::String m_runningAmiVersion;
    bool m_runningAmiVersionHasBeenSet = false;

    Aws::String m_releaseLabel;
    bool m_releaseLabelHasBeenSet = false;

    bool m_autoTerminate{false};
    bool m_autoTerminateHasBeenSet = false;

    bool m_terminationProtected{false};
    bool m_terminationProtectedHasBeenSet = false;

    bool m_unhealthyNodeReplacement{false};
    bool m_unhealthyNodeReplacementHasBeenSet = false;

    bool m_visibleToAllUsers{false};
    bool m_visibleToAllUsersHasBeenSet = false;

    Aws::Vector<Application> m_applications;
    bool m_applicationsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet = false;

    int m_normalizedInstanceHours{0};
    bool m_normalizedInstanceHoursHasBeenSet = false;

    Aws::String m_masterPublicDnsName;
    bool m_masterPublicDnsNameHasBeenSet = false;

    Aws::Vector<Configuration> m_configurations;
    bool m_configurationsHasBeenSet = false;

    Aws::String m_securityConfiguration;
    bool m_securityConfigurationHasBeenSet = false;

    Aws::String m_autoScalingRole;
    bool m_autoScalingRoleHasBeenSet = false;

    ScaleDownBehavior m_scaleDownBehavior{ScaleDownBehavior::NOT_SET};
    bool m_scaleDownBehaviorHasBeenSet = false;

    Aws::String m_customAmiId;
    bool m_customAmiIdHasBeenSet = false;

    int m_ebsRootVolumeSize{0};
    bool m_ebsRootVolumeSizeHasBeenSet = false;

    RepoUpgradeOnBoot m_repoUpgradeOnBoot{RepoUpgradeOnBoot::NOT_SET};
    bool m_repoUpgradeOnBootHasBeenSet = false;

    KerberosAttributes m_kerberosAttributes;
    bool m_kerberosAttributesHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::String m_outpostArn;
    bool m_outpostArnHasBeenSet = false;

    int m_stepConcurrencyLevel{0};
    bool m_stepConcurrencyLevelHasBeenSet = false;

    Aws::Vector<PlacementGroupConfig> m_placementGroups;
    bool m_placementGroupsHasBeenSet = false;

    Aws::String m_oSReleaseLabel;
    bool m_oSReleaseLabelHasBeenSet = false;

    int m_ebsRootVolumeIops{0};
    bool m_ebsRootVolumeIopsHasBeenSet = false;

    int m_ebsRootVolumeThroughput{0};
    bool m_ebsRootVolumeThroughputHasBeenSet = false;

    bool m_extendedSupport{false};
    bool m_extendedSupportHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
