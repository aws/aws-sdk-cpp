/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/JobFlowInstancesConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/ScaleDownBehavior.h>
#include <aws/elasticmapreduce/model/RepoUpgradeOnBoot.h>
#include <aws/elasticmapreduce/model/KerberosAttributes.h>
#include <aws/elasticmapreduce/model/ManagedScalingPolicy.h>
#include <aws/elasticmapreduce/model/AutoTerminationPolicy.h>
#include <aws/elasticmapreduce/model/StepConfig.h>
#include <aws/elasticmapreduce/model/BootstrapActionConfig.h>
#include <aws/elasticmapreduce/model/SupportedProductConfig.h>
#include <aws/elasticmapreduce/model/Application.h>
#include <aws/elasticmapreduce/model/Configuration.h>
#include <aws/elasticmapreduce/model/Tag.h>
#include <aws/elasticmapreduce/model/PlacementGroupConfig.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   * <p> Input to the <a>RunJobFlow</a> operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/RunJobFlowInput">AWS
   * API Reference</a></p>
   */
  class RunJobFlowRequest : public EMRRequest
  {
  public:
    AWS_EMR_API RunJobFlowRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RunJobFlow"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the job flow.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RunJobFlowRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location in Amazon S3 to write the log files of the job flow. If a value
     * is not provided, logs are not created.</p>
     */
    inline const Aws::String& GetLogUri() const { return m_logUri; }
    inline bool LogUriHasBeenSet() const { return m_logUriHasBeenSet; }
    template<typename LogUriT = Aws::String>
    void SetLogUri(LogUriT&& value) { m_logUriHasBeenSet = true; m_logUri = std::forward<LogUriT>(value); }
    template<typename LogUriT = Aws::String>
    RunJobFlowRequest& WithLogUri(LogUriT&& value) { SetLogUri(std::forward<LogUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key used for encrypting log files. If a value is not provided, the
     * logs remain encrypted by AES-256. This attribute is only available with Amazon
     * EMR releases 5.30.0 and later, excluding Amazon EMR 6.0.0.</p>
     */
    inline const Aws::String& GetLogEncryptionKmsKeyId() const { return m_logEncryptionKmsKeyId; }
    inline bool LogEncryptionKmsKeyIdHasBeenSet() const { return m_logEncryptionKmsKeyIdHasBeenSet; }
    template<typename LogEncryptionKmsKeyIdT = Aws::String>
    void SetLogEncryptionKmsKeyId(LogEncryptionKmsKeyIdT&& value) { m_logEncryptionKmsKeyIdHasBeenSet = true; m_logEncryptionKmsKeyId = std::forward<LogEncryptionKmsKeyIdT>(value); }
    template<typename LogEncryptionKmsKeyIdT = Aws::String>
    RunJobFlowRequest& WithLogEncryptionKmsKeyId(LogEncryptionKmsKeyIdT&& value) { SetLogEncryptionKmsKeyId(std::forward<LogEncryptionKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON string for selecting additional features.</p>
     */
    inline const Aws::String& GetAdditionalInfo() const { return m_additionalInfo; }
    inline bool AdditionalInfoHasBeenSet() const { return m_additionalInfoHasBeenSet; }
    template<typename AdditionalInfoT = Aws::String>
    void SetAdditionalInfo(AdditionalInfoT&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = std::forward<AdditionalInfoT>(value); }
    template<typename AdditionalInfoT = Aws::String>
    RunJobFlowRequest& WithAdditionalInfo(AdditionalInfoT&& value) { SetAdditionalInfo(std::forward<AdditionalInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Applies only to Amazon EMR AMI versions 3.x and 2.x. For Amazon EMR releases
     * 4.0 and later, <code>ReleaseLabel</code> is used. To specify a custom AMI, use
     * <code>CustomAmiID</code>.</p>
     */
    inline const Aws::String& GetAmiVersion() const { return m_amiVersion; }
    inline bool AmiVersionHasBeenSet() const { return m_amiVersionHasBeenSet; }
    template<typename AmiVersionT = Aws::String>
    void SetAmiVersion(AmiVersionT&& value) { m_amiVersionHasBeenSet = true; m_amiVersion = std::forward<AmiVersionT>(value); }
    template<typename AmiVersionT = Aws::String>
    RunJobFlowRequest& WithAmiVersion(AmiVersionT&& value) { SetAmiVersion(std::forward<AmiVersionT>(value)); return *this;}
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
    RunJobFlowRequest& WithReleaseLabel(ReleaseLabelT&& value) { SetReleaseLabel(std::forward<ReleaseLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A specification of the number and type of Amazon EC2 instances.</p>
     */
    inline const JobFlowInstancesConfig& GetInstances() const { return m_instances; }
    inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }
    template<typename InstancesT = JobFlowInstancesConfig>
    void SetInstances(InstancesT&& value) { m_instancesHasBeenSet = true; m_instances = std::forward<InstancesT>(value); }
    template<typename InstancesT = JobFlowInstancesConfig>
    RunJobFlowRequest& WithInstances(InstancesT&& value) { SetInstances(std::forward<InstancesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of steps to run.</p>
     */
    inline const Aws::Vector<StepConfig>& GetSteps() const { return m_steps; }
    inline bool StepsHasBeenSet() const { return m_stepsHasBeenSet; }
    template<typename StepsT = Aws::Vector<StepConfig>>
    void SetSteps(StepsT&& value) { m_stepsHasBeenSet = true; m_steps = std::forward<StepsT>(value); }
    template<typename StepsT = Aws::Vector<StepConfig>>
    RunJobFlowRequest& WithSteps(StepsT&& value) { SetSteps(std::forward<StepsT>(value)); return *this;}
    template<typename StepsT = StepConfig>
    RunJobFlowRequest& AddSteps(StepsT&& value) { m_stepsHasBeenSet = true; m_steps.emplace_back(std::forward<StepsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of bootstrap actions to run before Hadoop starts on the cluster
     * nodes.</p>
     */
    inline const Aws::Vector<BootstrapActionConfig>& GetBootstrapActions() const { return m_bootstrapActions; }
    inline bool BootstrapActionsHasBeenSet() const { return m_bootstrapActionsHasBeenSet; }
    template<typename BootstrapActionsT = Aws::Vector<BootstrapActionConfig>>
    void SetBootstrapActions(BootstrapActionsT&& value) { m_bootstrapActionsHasBeenSet = true; m_bootstrapActions = std::forward<BootstrapActionsT>(value); }
    template<typename BootstrapActionsT = Aws::Vector<BootstrapActionConfig>>
    RunJobFlowRequest& WithBootstrapActions(BootstrapActionsT&& value) { SetBootstrapActions(std::forward<BootstrapActionsT>(value)); return *this;}
    template<typename BootstrapActionsT = BootstrapActionConfig>
    RunJobFlowRequest& AddBootstrapActions(BootstrapActionsT&& value) { m_bootstrapActionsHasBeenSet = true; m_bootstrapActions.emplace_back(std::forward<BootstrapActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     *  <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * later, use Applications.</p>  <p>A list of strings that indicates
     * third-party software to use. For more information, see the <a
     * href="https://docs.aws.amazon.com/emr/latest/DeveloperGuide/emr-dg.pdf">Amazon
     * EMR Developer Guide</a>. Currently supported values are:</p> <ul> <li>
     * <p>"mapr-m3" - launch the job flow using MapR M3 Edition.</p> </li> <li>
     * <p>"mapr-m5" - launch the job flow using MapR M5 Edition.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedProducts() const { return m_supportedProducts; }
    inline bool SupportedProductsHasBeenSet() const { return m_supportedProductsHasBeenSet; }
    template<typename SupportedProductsT = Aws::Vector<Aws::String>>
    void SetSupportedProducts(SupportedProductsT&& value) { m_supportedProductsHasBeenSet = true; m_supportedProducts = std::forward<SupportedProductsT>(value); }
    template<typename SupportedProductsT = Aws::Vector<Aws::String>>
    RunJobFlowRequest& WithSupportedProducts(SupportedProductsT&& value) { SetSupportedProducts(std::forward<SupportedProductsT>(value)); return *this;}
    template<typename SupportedProductsT = Aws::String>
    RunJobFlowRequest& AddSupportedProducts(SupportedProductsT&& value) { m_supportedProductsHasBeenSet = true; m_supportedProducts.emplace_back(std::forward<SupportedProductsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     *  <p>For Amazon EMR releases 3.x and 2.x. For Amazon EMR releases 4.x and
     * later, use Applications.</p>  <p>A list of strings that indicates
     * third-party software to use with the job flow that accepts a user argument list.
     * Amazon EMR accepts and forwards the argument list to the corresponding
     * installation script as bootstrap action arguments. For more information, see
     * "Launch a Job Flow on the MapR Distribution for Hadoop" in the <a
     * href="https://docs.aws.amazon.com/emr/latest/DeveloperGuide/emr-dg.pdf">Amazon
     * EMR Developer Guide</a>. Supported values are:</p> <ul> <li> <p>"mapr-m3" -
     * launch the cluster using MapR M3 Edition.</p> </li> <li> <p>"mapr-m5" - launch
     * the cluster using MapR M5 Edition.</p> </li> <li> <p>"mapr" with the user
     * arguments specifying "--edition,m3" or "--edition,m5" - launch the job flow
     * using MapR M3 or M5 Edition respectively.</p> </li> <li> <p>"mapr-m7" - launch
     * the cluster using MapR M7 Edition.</p> </li> <li> <p>"hunk" - launch the cluster
     * with the Hunk Big Data Analytics Platform.</p> </li> <li> <p>"hue"- launch the
     * cluster with Hue installed.</p> </li> <li> <p>"spark" - launch the cluster with
     * Apache Spark installed.</p> </li> <li> <p>"ganglia" - launch the cluster with
     * the Ganglia Monitoring System installed.</p> </li> </ul>
     */
    inline const Aws::Vector<SupportedProductConfig>& GetNewSupportedProducts() const { return m_newSupportedProducts; }
    inline bool NewSupportedProductsHasBeenSet() const { return m_newSupportedProductsHasBeenSet; }
    template<typename NewSupportedProductsT = Aws::Vector<SupportedProductConfig>>
    void SetNewSupportedProducts(NewSupportedProductsT&& value) { m_newSupportedProductsHasBeenSet = true; m_newSupportedProducts = std::forward<NewSupportedProductsT>(value); }
    template<typename NewSupportedProductsT = Aws::Vector<SupportedProductConfig>>
    RunJobFlowRequest& WithNewSupportedProducts(NewSupportedProductsT&& value) { SetNewSupportedProducts(std::forward<NewSupportedProductsT>(value)); return *this;}
    template<typename NewSupportedProductsT = SupportedProductConfig>
    RunJobFlowRequest& AddNewSupportedProducts(NewSupportedProductsT&& value) { m_newSupportedProductsHasBeenSet = true; m_newSupportedProducts.emplace_back(std::forward<NewSupportedProductsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Applies to Amazon EMR releases 4.0 and later. A case-insensitive list of
     * applications for Amazon EMR to install and configure when launching the cluster.
     * For a list of applications available for each Amazon EMR release version, see
     * the <a href="https://docs.aws.amazon.com/emr/latest/ReleaseGuide/">Amazon
     * EMRRelease Guide</a>.</p>
     */
    inline const Aws::Vector<Application>& GetApplications() const { return m_applications; }
    inline bool ApplicationsHasBeenSet() const { return m_applicationsHasBeenSet; }
    template<typename ApplicationsT = Aws::Vector<Application>>
    void SetApplications(ApplicationsT&& value) { m_applicationsHasBeenSet = true; m_applications = std::forward<ApplicationsT>(value); }
    template<typename ApplicationsT = Aws::Vector<Application>>
    RunJobFlowRequest& WithApplications(ApplicationsT&& value) { SetApplications(std::forward<ApplicationsT>(value)); return *this;}
    template<typename ApplicationsT = Application>
    RunJobFlowRequest& AddApplications(ApplicationsT&& value) { m_applicationsHasBeenSet = true; m_applications.emplace_back(std::forward<ApplicationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>For Amazon EMR releases 4.0 and later. The list of configurations supplied
     * for the Amazon EMR cluster that you are creating.</p>
     */
    inline const Aws::Vector<Configuration>& GetConfigurations() const { return m_configurations; }
    inline bool ConfigurationsHasBeenSet() const { return m_configurationsHasBeenSet; }
    template<typename ConfigurationsT = Aws::Vector<Configuration>>
    void SetConfigurations(ConfigurationsT&& value) { m_configurationsHasBeenSet = true; m_configurations = std::forward<ConfigurationsT>(value); }
    template<typename ConfigurationsT = Aws::Vector<Configuration>>
    RunJobFlowRequest& WithConfigurations(ConfigurationsT&& value) { SetConfigurations(std::forward<ConfigurationsT>(value)); return *this;}
    template<typename ConfigurationsT = Configuration>
    RunJobFlowRequest& AddConfigurations(ConfigurationsT&& value) { m_configurationsHasBeenSet = true; m_configurations.emplace_back(std::forward<ConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     *  <p>The VisibleToAllUsers parameter is no longer supported. By
     * default, the value is set to <code>true</code>. Setting it to <code>false</code>
     * now has no effect.</p>  <p>Set this value to <code>true</code> so
     * that IAM principals in the Amazon Web Services account associated with the
     * cluster can perform Amazon EMR actions on the cluster that their IAM policies
     * allow. This value defaults to <code>true</code> for clusters created using the
     * Amazon EMR API or the CLI <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/emr/create-cluster.html">create-cluster</a>
     * command.</p> <p>When set to <code>false</code>, only the IAM principal that
     * created the cluster and the Amazon Web Services account root user can perform
     * Amazon EMR actions for the cluster, regardless of the IAM permissions policies
     * attached to other IAM principals. For more information, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/security_IAM_emr-with-IAM.html#security_set_visible_to_all_users">Understanding
     * the Amazon EMR cluster VisibleToAllUsers setting</a> in the <i>Amazon EMR
     * Management Guide</i>.</p>
     */
    inline bool GetVisibleToAllUsers() const { return m_visibleToAllUsers; }
    inline bool VisibleToAllUsersHasBeenSet() const { return m_visibleToAllUsersHasBeenSet; }
    inline void SetVisibleToAllUsers(bool value) { m_visibleToAllUsersHasBeenSet = true; m_visibleToAllUsers = value; }
    inline RunJobFlowRequest& WithVisibleToAllUsers(bool value) { SetVisibleToAllUsers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Also called instance profile and Amazon EC2 role. An IAM role for an Amazon
     * EMR cluster. The Amazon EC2 instances of the cluster assume this role. The
     * default role is <code>EMR_EC2_DefaultRole</code>. In order to use the default
     * role, you must have already created it using the CLI or console.</p>
     */
    inline const Aws::String& GetJobFlowRole() const { return m_jobFlowRole; }
    inline bool JobFlowRoleHasBeenSet() const { return m_jobFlowRoleHasBeenSet; }
    template<typename JobFlowRoleT = Aws::String>
    void SetJobFlowRole(JobFlowRoleT&& value) { m_jobFlowRoleHasBeenSet = true; m_jobFlowRole = std::forward<JobFlowRoleT>(value); }
    template<typename JobFlowRoleT = Aws::String>
    RunJobFlowRequest& WithJobFlowRole(JobFlowRoleT&& value) { SetJobFlowRole(std::forward<JobFlowRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role that Amazon EMR assumes in order to access Amazon Web Services
     * resources on your behalf. If you've created a custom service role path, you must
     * specify it for the service role when you launch your cluster.</p>
     */
    inline const Aws::String& GetServiceRole() const { return m_serviceRole; }
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }
    template<typename ServiceRoleT = Aws::String>
    void SetServiceRole(ServiceRoleT&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::forward<ServiceRoleT>(value); }
    template<typename ServiceRoleT = Aws::String>
    RunJobFlowRequest& WithServiceRole(ServiceRoleT&& value) { SetServiceRole(std::forward<ServiceRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags to associate with a cluster and propagate to Amazon EC2
     * instances.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    RunJobFlowRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    RunJobFlowRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of a security configuration to apply to the cluster.</p>
     */
    inline const Aws::String& GetSecurityConfiguration() const { return m_securityConfiguration; }
    inline bool SecurityConfigurationHasBeenSet() const { return m_securityConfigurationHasBeenSet; }
    template<typename SecurityConfigurationT = Aws::String>
    void SetSecurityConfiguration(SecurityConfigurationT&& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = std::forward<SecurityConfigurationT>(value); }
    template<typename SecurityConfigurationT = Aws::String>
    RunJobFlowRequest& WithSecurityConfiguration(SecurityConfigurationT&& value) { SetSecurityConfiguration(std::forward<SecurityConfigurationT>(value)); return *this;}
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
    RunJobFlowRequest& WithAutoScalingRole(AutoScalingRoleT&& value) { SetAutoScalingRole(std::forward<AutoScalingRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the way that individual Amazon EC2 instances terminate when an
     * automatic scale-in activity occurs or an instance group is resized.
     * <code>TERMINATE_AT_INSTANCE_HOUR</code> indicates that Amazon EMR terminates
     * nodes at the instance-hour boundary, regardless of when the request to terminate
     * the instance was submitted. This option is only available with Amazon EMR 5.1.0
     * and later and is the default for clusters created using that version.
     * <code>TERMINATE_AT_TASK_COMPLETION</code> indicates that Amazon EMR adds nodes
     * to a deny list and drains tasks from nodes before terminating the Amazon EC2
     * instances, regardless of the instance-hour boundary. With either behavior,
     * Amazon EMR removes the least active nodes first and blocks instance termination
     * if it could lead to HDFS corruption. <code>TERMINATE_AT_TASK_COMPLETION</code>
     * available only in Amazon EMR releases 4.1.0 and later, and is the default for
     * releases of Amazon EMR earlier than 5.1.0.</p>
     */
    inline ScaleDownBehavior GetScaleDownBehavior() const { return m_scaleDownBehavior; }
    inline bool ScaleDownBehaviorHasBeenSet() const { return m_scaleDownBehaviorHasBeenSet; }
    inline void SetScaleDownBehavior(ScaleDownBehavior value) { m_scaleDownBehaviorHasBeenSet = true; m_scaleDownBehavior = value; }
    inline RunJobFlowRequest& WithScaleDownBehavior(ScaleDownBehavior value) { SetScaleDownBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Available only in Amazon EMR releases 5.7.0 and later. The ID of a custom
     * Amazon EBS-backed Linux AMI. If specified, Amazon EMR uses this AMI when it
     * launches cluster Amazon EC2 instances. For more information about custom AMIs in
     * Amazon EMR, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-custom-ami.html">Using
     * a Custom AMI</a> in the <i>Amazon EMR Management Guide</i>. If omitted, the
     * cluster uses the base Linux AMI for the <code>ReleaseLabel</code> specified. For
     * Amazon EMR releases 2.x and 3.x, use <code>AmiVersion</code> instead.</p> <p>For
     * information about creating a custom AMI, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/creating-an-ami-ebs.html">Creating
     * an Amazon EBS-Backed Linux AMI</a> in the <i>Amazon Elastic Compute Cloud User
     * Guide for Linux Instances</i>. For information about finding an AMI ID, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/finding-an-ami.html">Finding
     * a Linux AMI</a>. </p>
     */
    inline const Aws::String& GetCustomAmiId() const { return m_customAmiId; }
    inline bool CustomAmiIdHasBeenSet() const { return m_customAmiIdHasBeenSet; }
    template<typename CustomAmiIdT = Aws::String>
    void SetCustomAmiId(CustomAmiIdT&& value) { m_customAmiIdHasBeenSet = true; m_customAmiId = std::forward<CustomAmiIdT>(value); }
    template<typename CustomAmiIdT = Aws::String>
    RunJobFlowRequest& WithCustomAmiId(CustomAmiIdT&& value) { SetCustomAmiId(std::forward<CustomAmiIdT>(value)); return *this;}
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
    inline RunJobFlowRequest& WithEbsRootVolumeSize(int value) { SetEbsRootVolumeSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Applies only when <code>CustomAmiID</code> is used. Specifies which updates
     * from the Amazon Linux AMI package repositories to apply automatically when the
     * instance boots using the AMI. If omitted, the default is <code>SECURITY</code>,
     * which indicates that only security updates are applied. If <code>NONE</code> is
     * specified, no updates are applied, and all updates must be applied manually.</p>
     */
    inline RepoUpgradeOnBoot GetRepoUpgradeOnBoot() const { return m_repoUpgradeOnBoot; }
    inline bool RepoUpgradeOnBootHasBeenSet() const { return m_repoUpgradeOnBootHasBeenSet; }
    inline void SetRepoUpgradeOnBoot(RepoUpgradeOnBoot value) { m_repoUpgradeOnBootHasBeenSet = true; m_repoUpgradeOnBoot = value; }
    inline RunJobFlowRequest& WithRepoUpgradeOnBoot(RepoUpgradeOnBoot value) { SetRepoUpgradeOnBoot(value); return *this;}
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
    RunJobFlowRequest& WithKerberosAttributes(KerberosAttributesT&& value) { SetKerberosAttributes(std::forward<KerberosAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the number of steps that can be executed concurrently. The default
     * value is <code>1</code>. The maximum value is <code>256</code>.</p>
     */
    inline int GetStepConcurrencyLevel() const { return m_stepConcurrencyLevel; }
    inline bool StepConcurrencyLevelHasBeenSet() const { return m_stepConcurrencyLevelHasBeenSet; }
    inline void SetStepConcurrencyLevel(int value) { m_stepConcurrencyLevelHasBeenSet = true; m_stepConcurrencyLevel = value; }
    inline RunJobFlowRequest& WithStepConcurrencyLevel(int value) { SetStepConcurrencyLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The specified managed scaling policy for an Amazon EMR cluster. </p>
     */
    inline const ManagedScalingPolicy& GetManagedScalingPolicy() const { return m_managedScalingPolicy; }
    inline bool ManagedScalingPolicyHasBeenSet() const { return m_managedScalingPolicyHasBeenSet; }
    template<typename ManagedScalingPolicyT = ManagedScalingPolicy>
    void SetManagedScalingPolicy(ManagedScalingPolicyT&& value) { m_managedScalingPolicyHasBeenSet = true; m_managedScalingPolicy = std::forward<ManagedScalingPolicyT>(value); }
    template<typename ManagedScalingPolicyT = ManagedScalingPolicy>
    RunJobFlowRequest& WithManagedScalingPolicy(ManagedScalingPolicyT&& value) { SetManagedScalingPolicy(std::forward<ManagedScalingPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specified placement group configuration for an Amazon EMR cluster.</p>
     */
    inline const Aws::Vector<PlacementGroupConfig>& GetPlacementGroupConfigs() const { return m_placementGroupConfigs; }
    inline bool PlacementGroupConfigsHasBeenSet() const { return m_placementGroupConfigsHasBeenSet; }
    template<typename PlacementGroupConfigsT = Aws::Vector<PlacementGroupConfig>>
    void SetPlacementGroupConfigs(PlacementGroupConfigsT&& value) { m_placementGroupConfigsHasBeenSet = true; m_placementGroupConfigs = std::forward<PlacementGroupConfigsT>(value); }
    template<typename PlacementGroupConfigsT = Aws::Vector<PlacementGroupConfig>>
    RunJobFlowRequest& WithPlacementGroupConfigs(PlacementGroupConfigsT&& value) { SetPlacementGroupConfigs(std::forward<PlacementGroupConfigsT>(value)); return *this;}
    template<typename PlacementGroupConfigsT = PlacementGroupConfig>
    RunJobFlowRequest& AddPlacementGroupConfigs(PlacementGroupConfigsT&& value) { m_placementGroupConfigsHasBeenSet = true; m_placementGroupConfigs.emplace_back(std::forward<PlacementGroupConfigsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const AutoTerminationPolicy& GetAutoTerminationPolicy() const { return m_autoTerminationPolicy; }
    inline bool AutoTerminationPolicyHasBeenSet() const { return m_autoTerminationPolicyHasBeenSet; }
    template<typename AutoTerminationPolicyT = AutoTerminationPolicy>
    void SetAutoTerminationPolicy(AutoTerminationPolicyT&& value) { m_autoTerminationPolicyHasBeenSet = true; m_autoTerminationPolicy = std::forward<AutoTerminationPolicyT>(value); }
    template<typename AutoTerminationPolicyT = AutoTerminationPolicy>
    RunJobFlowRequest& WithAutoTerminationPolicy(AutoTerminationPolicyT&& value) { SetAutoTerminationPolicy(std::forward<AutoTerminationPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a particular Amazon Linux release for all nodes in a cluster launch
     * RunJobFlow request. If a release is not specified, Amazon EMR uses the latest
     * validated Amazon Linux release for cluster launch.</p>
     */
    inline const Aws::String& GetOSReleaseLabel() const { return m_oSReleaseLabel; }
    inline bool OSReleaseLabelHasBeenSet() const { return m_oSReleaseLabelHasBeenSet; }
    template<typename OSReleaseLabelT = Aws::String>
    void SetOSReleaseLabel(OSReleaseLabelT&& value) { m_oSReleaseLabelHasBeenSet = true; m_oSReleaseLabel = std::forward<OSReleaseLabelT>(value); }
    template<typename OSReleaseLabelT = Aws::String>
    RunJobFlowRequest& WithOSReleaseLabel(OSReleaseLabelT&& value) { SetOSReleaseLabel(std::forward<OSReleaseLabelT>(value)); return *this;}
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
    inline RunJobFlowRequest& WithEbsRootVolumeIops(int value) { SetEbsRootVolumeIops(value); return *this;}
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
    inline RunJobFlowRequest& WithEbsRootVolumeThroughput(int value) { SetEbsRootVolumeThroughput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved.</p>
     */
    inline bool GetExtendedSupport() const { return m_extendedSupport; }
    inline bool ExtendedSupportHasBeenSet() const { return m_extendedSupportHasBeenSet; }
    inline void SetExtendedSupport(bool value) { m_extendedSupportHasBeenSet = true; m_extendedSupport = value; }
    inline RunJobFlowRequest& WithExtendedSupport(bool value) { SetExtendedSupport(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_logUri;
    bool m_logUriHasBeenSet = false;

    Aws::String m_logEncryptionKmsKeyId;
    bool m_logEncryptionKmsKeyIdHasBeenSet = false;

    Aws::String m_additionalInfo;
    bool m_additionalInfoHasBeenSet = false;

    Aws::String m_amiVersion;
    bool m_amiVersionHasBeenSet = false;

    Aws::String m_releaseLabel;
    bool m_releaseLabelHasBeenSet = false;

    JobFlowInstancesConfig m_instances;
    bool m_instancesHasBeenSet = false;

    Aws::Vector<StepConfig> m_steps;
    bool m_stepsHasBeenSet = false;

    Aws::Vector<BootstrapActionConfig> m_bootstrapActions;
    bool m_bootstrapActionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedProducts;
    bool m_supportedProductsHasBeenSet = false;

    Aws::Vector<SupportedProductConfig> m_newSupportedProducts;
    bool m_newSupportedProductsHasBeenSet = false;

    Aws::Vector<Application> m_applications;
    bool m_applicationsHasBeenSet = false;

    Aws::Vector<Configuration> m_configurations;
    bool m_configurationsHasBeenSet = false;

    bool m_visibleToAllUsers{false};
    bool m_visibleToAllUsersHasBeenSet = false;

    Aws::String m_jobFlowRole;
    bool m_jobFlowRoleHasBeenSet = false;

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

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

    int m_stepConcurrencyLevel{0};
    bool m_stepConcurrencyLevelHasBeenSet = false;

    ManagedScalingPolicy m_managedScalingPolicy;
    bool m_managedScalingPolicyHasBeenSet = false;

    Aws::Vector<PlacementGroupConfig> m_placementGroupConfigs;
    bool m_placementGroupConfigsHasBeenSet = false;

    AutoTerminationPolicy m_autoTerminationPolicy;
    bool m_autoTerminationPolicyHasBeenSet = false;

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
