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
    AWS_EMR_API RunJobFlowRequest();

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
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline RunJobFlowRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RunJobFlowRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RunJobFlowRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location in Amazon S3 to write the log files of the job flow. If a value
     * is not provided, logs are not created.</p>
     */
    inline const Aws::String& GetLogUri() const{ return m_logUri; }
    inline bool LogUriHasBeenSet() const { return m_logUriHasBeenSet; }
    inline void SetLogUri(const Aws::String& value) { m_logUriHasBeenSet = true; m_logUri = value; }
    inline void SetLogUri(Aws::String&& value) { m_logUriHasBeenSet = true; m_logUri = std::move(value); }
    inline void SetLogUri(const char* value) { m_logUriHasBeenSet = true; m_logUri.assign(value); }
    inline RunJobFlowRequest& WithLogUri(const Aws::String& value) { SetLogUri(value); return *this;}
    inline RunJobFlowRequest& WithLogUri(Aws::String&& value) { SetLogUri(std::move(value)); return *this;}
    inline RunJobFlowRequest& WithLogUri(const char* value) { SetLogUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key used for encrypting log files. If a value is not provided, the
     * logs remain encrypted by AES-256. This attribute is only available with Amazon
     * EMR releases 5.30.0 and later, excluding Amazon EMR 6.0.0.</p>
     */
    inline const Aws::String& GetLogEncryptionKmsKeyId() const{ return m_logEncryptionKmsKeyId; }
    inline bool LogEncryptionKmsKeyIdHasBeenSet() const { return m_logEncryptionKmsKeyIdHasBeenSet; }
    inline void SetLogEncryptionKmsKeyId(const Aws::String& value) { m_logEncryptionKmsKeyIdHasBeenSet = true; m_logEncryptionKmsKeyId = value; }
    inline void SetLogEncryptionKmsKeyId(Aws::String&& value) { m_logEncryptionKmsKeyIdHasBeenSet = true; m_logEncryptionKmsKeyId = std::move(value); }
    inline void SetLogEncryptionKmsKeyId(const char* value) { m_logEncryptionKmsKeyIdHasBeenSet = true; m_logEncryptionKmsKeyId.assign(value); }
    inline RunJobFlowRequest& WithLogEncryptionKmsKeyId(const Aws::String& value) { SetLogEncryptionKmsKeyId(value); return *this;}
    inline RunJobFlowRequest& WithLogEncryptionKmsKeyId(Aws::String&& value) { SetLogEncryptionKmsKeyId(std::move(value)); return *this;}
    inline RunJobFlowRequest& WithLogEncryptionKmsKeyId(const char* value) { SetLogEncryptionKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON string for selecting additional features.</p>
     */
    inline const Aws::String& GetAdditionalInfo() const{ return m_additionalInfo; }
    inline bool AdditionalInfoHasBeenSet() const { return m_additionalInfoHasBeenSet; }
    inline void SetAdditionalInfo(const Aws::String& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = value; }
    inline void SetAdditionalInfo(Aws::String&& value) { m_additionalInfoHasBeenSet = true; m_additionalInfo = std::move(value); }
    inline void SetAdditionalInfo(const char* value) { m_additionalInfoHasBeenSet = true; m_additionalInfo.assign(value); }
    inline RunJobFlowRequest& WithAdditionalInfo(const Aws::String& value) { SetAdditionalInfo(value); return *this;}
    inline RunJobFlowRequest& WithAdditionalInfo(Aws::String&& value) { SetAdditionalInfo(std::move(value)); return *this;}
    inline RunJobFlowRequest& WithAdditionalInfo(const char* value) { SetAdditionalInfo(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Applies only to Amazon EMR AMI versions 3.x and 2.x. For Amazon EMR releases
     * 4.0 and later, <code>ReleaseLabel</code> is used. To specify a custom AMI, use
     * <code>CustomAmiID</code>.</p>
     */
    inline const Aws::String& GetAmiVersion() const{ return m_amiVersion; }
    inline bool AmiVersionHasBeenSet() const { return m_amiVersionHasBeenSet; }
    inline void SetAmiVersion(const Aws::String& value) { m_amiVersionHasBeenSet = true; m_amiVersion = value; }
    inline void SetAmiVersion(Aws::String&& value) { m_amiVersionHasBeenSet = true; m_amiVersion = std::move(value); }
    inline void SetAmiVersion(const char* value) { m_amiVersionHasBeenSet = true; m_amiVersion.assign(value); }
    inline RunJobFlowRequest& WithAmiVersion(const Aws::String& value) { SetAmiVersion(value); return *this;}
    inline RunJobFlowRequest& WithAmiVersion(Aws::String&& value) { SetAmiVersion(std::move(value)); return *this;}
    inline RunJobFlowRequest& WithAmiVersion(const char* value) { SetAmiVersion(value); return *this;}
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
    inline const Aws::String& GetReleaseLabel() const{ return m_releaseLabel; }
    inline bool ReleaseLabelHasBeenSet() const { return m_releaseLabelHasBeenSet; }
    inline void SetReleaseLabel(const Aws::String& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = value; }
    inline void SetReleaseLabel(Aws::String&& value) { m_releaseLabelHasBeenSet = true; m_releaseLabel = std::move(value); }
    inline void SetReleaseLabel(const char* value) { m_releaseLabelHasBeenSet = true; m_releaseLabel.assign(value); }
    inline RunJobFlowRequest& WithReleaseLabel(const Aws::String& value) { SetReleaseLabel(value); return *this;}
    inline RunJobFlowRequest& WithReleaseLabel(Aws::String&& value) { SetReleaseLabel(std::move(value)); return *this;}
    inline RunJobFlowRequest& WithReleaseLabel(const char* value) { SetReleaseLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A specification of the number and type of Amazon EC2 instances.</p>
     */
    inline const JobFlowInstancesConfig& GetInstances() const{ return m_instances; }
    inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }
    inline void SetInstances(const JobFlowInstancesConfig& value) { m_instancesHasBeenSet = true; m_instances = value; }
    inline void SetInstances(JobFlowInstancesConfig&& value) { m_instancesHasBeenSet = true; m_instances = std::move(value); }
    inline RunJobFlowRequest& WithInstances(const JobFlowInstancesConfig& value) { SetInstances(value); return *this;}
    inline RunJobFlowRequest& WithInstances(JobFlowInstancesConfig&& value) { SetInstances(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of steps to run.</p>
     */
    inline const Aws::Vector<StepConfig>& GetSteps() const{ return m_steps; }
    inline bool StepsHasBeenSet() const { return m_stepsHasBeenSet; }
    inline void SetSteps(const Aws::Vector<StepConfig>& value) { m_stepsHasBeenSet = true; m_steps = value; }
    inline void SetSteps(Aws::Vector<StepConfig>&& value) { m_stepsHasBeenSet = true; m_steps = std::move(value); }
    inline RunJobFlowRequest& WithSteps(const Aws::Vector<StepConfig>& value) { SetSteps(value); return *this;}
    inline RunJobFlowRequest& WithSteps(Aws::Vector<StepConfig>&& value) { SetSteps(std::move(value)); return *this;}
    inline RunJobFlowRequest& AddSteps(const StepConfig& value) { m_stepsHasBeenSet = true; m_steps.push_back(value); return *this; }
    inline RunJobFlowRequest& AddSteps(StepConfig&& value) { m_stepsHasBeenSet = true; m_steps.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of bootstrap actions to run before Hadoop starts on the cluster
     * nodes.</p>
     */
    inline const Aws::Vector<BootstrapActionConfig>& GetBootstrapActions() const{ return m_bootstrapActions; }
    inline bool BootstrapActionsHasBeenSet() const { return m_bootstrapActionsHasBeenSet; }
    inline void SetBootstrapActions(const Aws::Vector<BootstrapActionConfig>& value) { m_bootstrapActionsHasBeenSet = true; m_bootstrapActions = value; }
    inline void SetBootstrapActions(Aws::Vector<BootstrapActionConfig>&& value) { m_bootstrapActionsHasBeenSet = true; m_bootstrapActions = std::move(value); }
    inline RunJobFlowRequest& WithBootstrapActions(const Aws::Vector<BootstrapActionConfig>& value) { SetBootstrapActions(value); return *this;}
    inline RunJobFlowRequest& WithBootstrapActions(Aws::Vector<BootstrapActionConfig>&& value) { SetBootstrapActions(std::move(value)); return *this;}
    inline RunJobFlowRequest& AddBootstrapActions(const BootstrapActionConfig& value) { m_bootstrapActionsHasBeenSet = true; m_bootstrapActions.push_back(value); return *this; }
    inline RunJobFlowRequest& AddBootstrapActions(BootstrapActionConfig&& value) { m_bootstrapActionsHasBeenSet = true; m_bootstrapActions.push_back(std::move(value)); return *this; }
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
    inline const Aws::Vector<Aws::String>& GetSupportedProducts() const{ return m_supportedProducts; }
    inline bool SupportedProductsHasBeenSet() const { return m_supportedProductsHasBeenSet; }
    inline void SetSupportedProducts(const Aws::Vector<Aws::String>& value) { m_supportedProductsHasBeenSet = true; m_supportedProducts = value; }
    inline void SetSupportedProducts(Aws::Vector<Aws::String>&& value) { m_supportedProductsHasBeenSet = true; m_supportedProducts = std::move(value); }
    inline RunJobFlowRequest& WithSupportedProducts(const Aws::Vector<Aws::String>& value) { SetSupportedProducts(value); return *this;}
    inline RunJobFlowRequest& WithSupportedProducts(Aws::Vector<Aws::String>&& value) { SetSupportedProducts(std::move(value)); return *this;}
    inline RunJobFlowRequest& AddSupportedProducts(const Aws::String& value) { m_supportedProductsHasBeenSet = true; m_supportedProducts.push_back(value); return *this; }
    inline RunJobFlowRequest& AddSupportedProducts(Aws::String&& value) { m_supportedProductsHasBeenSet = true; m_supportedProducts.push_back(std::move(value)); return *this; }
    inline RunJobFlowRequest& AddSupportedProducts(const char* value) { m_supportedProductsHasBeenSet = true; m_supportedProducts.push_back(value); return *this; }
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
    inline const Aws::Vector<SupportedProductConfig>& GetNewSupportedProducts() const{ return m_newSupportedProducts; }
    inline bool NewSupportedProductsHasBeenSet() const { return m_newSupportedProductsHasBeenSet; }
    inline void SetNewSupportedProducts(const Aws::Vector<SupportedProductConfig>& value) { m_newSupportedProductsHasBeenSet = true; m_newSupportedProducts = value; }
    inline void SetNewSupportedProducts(Aws::Vector<SupportedProductConfig>&& value) { m_newSupportedProductsHasBeenSet = true; m_newSupportedProducts = std::move(value); }
    inline RunJobFlowRequest& WithNewSupportedProducts(const Aws::Vector<SupportedProductConfig>& value) { SetNewSupportedProducts(value); return *this;}
    inline RunJobFlowRequest& WithNewSupportedProducts(Aws::Vector<SupportedProductConfig>&& value) { SetNewSupportedProducts(std::move(value)); return *this;}
    inline RunJobFlowRequest& AddNewSupportedProducts(const SupportedProductConfig& value) { m_newSupportedProductsHasBeenSet = true; m_newSupportedProducts.push_back(value); return *this; }
    inline RunJobFlowRequest& AddNewSupportedProducts(SupportedProductConfig&& value) { m_newSupportedProductsHasBeenSet = true; m_newSupportedProducts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Applies to Amazon EMR releases 4.0 and later. A case-insensitive list of
     * applications for Amazon EMR to install and configure when launching the cluster.
     * For a list of applications available for each Amazon EMR release version, see
     * the <a href="https://docs.aws.amazon.com/emr/latest/ReleaseGuide/">Amazon
     * EMRRelease Guide</a>.</p>
     */
    inline const Aws::Vector<Application>& GetApplications() const{ return m_applications; }
    inline bool ApplicationsHasBeenSet() const { return m_applicationsHasBeenSet; }
    inline void SetApplications(const Aws::Vector<Application>& value) { m_applicationsHasBeenSet = true; m_applications = value; }
    inline void SetApplications(Aws::Vector<Application>&& value) { m_applicationsHasBeenSet = true; m_applications = std::move(value); }
    inline RunJobFlowRequest& WithApplications(const Aws::Vector<Application>& value) { SetApplications(value); return *this;}
    inline RunJobFlowRequest& WithApplications(Aws::Vector<Application>&& value) { SetApplications(std::move(value)); return *this;}
    inline RunJobFlowRequest& AddApplications(const Application& value) { m_applicationsHasBeenSet = true; m_applications.push_back(value); return *this; }
    inline RunJobFlowRequest& AddApplications(Application&& value) { m_applicationsHasBeenSet = true; m_applications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>For Amazon EMR releases 4.0 and later. The list of configurations supplied
     * for the Amazon EMR cluster that you are creating.</p>
     */
    inline const Aws::Vector<Configuration>& GetConfigurations() const{ return m_configurations; }
    inline bool ConfigurationsHasBeenSet() const { return m_configurationsHasBeenSet; }
    inline void SetConfigurations(const Aws::Vector<Configuration>& value) { m_configurationsHasBeenSet = true; m_configurations = value; }
    inline void SetConfigurations(Aws::Vector<Configuration>&& value) { m_configurationsHasBeenSet = true; m_configurations = std::move(value); }
    inline RunJobFlowRequest& WithConfigurations(const Aws::Vector<Configuration>& value) { SetConfigurations(value); return *this;}
    inline RunJobFlowRequest& WithConfigurations(Aws::Vector<Configuration>&& value) { SetConfigurations(std::move(value)); return *this;}
    inline RunJobFlowRequest& AddConfigurations(const Configuration& value) { m_configurationsHasBeenSet = true; m_configurations.push_back(value); return *this; }
    inline RunJobFlowRequest& AddConfigurations(Configuration&& value) { m_configurationsHasBeenSet = true; m_configurations.push_back(std::move(value)); return *this; }
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
    inline bool GetVisibleToAllUsers() const{ return m_visibleToAllUsers; }
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
    inline const Aws::String& GetJobFlowRole() const{ return m_jobFlowRole; }
    inline bool JobFlowRoleHasBeenSet() const { return m_jobFlowRoleHasBeenSet; }
    inline void SetJobFlowRole(const Aws::String& value) { m_jobFlowRoleHasBeenSet = true; m_jobFlowRole = value; }
    inline void SetJobFlowRole(Aws::String&& value) { m_jobFlowRoleHasBeenSet = true; m_jobFlowRole = std::move(value); }
    inline void SetJobFlowRole(const char* value) { m_jobFlowRoleHasBeenSet = true; m_jobFlowRole.assign(value); }
    inline RunJobFlowRequest& WithJobFlowRole(const Aws::String& value) { SetJobFlowRole(value); return *this;}
    inline RunJobFlowRequest& WithJobFlowRole(Aws::String&& value) { SetJobFlowRole(std::move(value)); return *this;}
    inline RunJobFlowRequest& WithJobFlowRole(const char* value) { SetJobFlowRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role that Amazon EMR assumes in order to access Amazon Web Services
     * resources on your behalf. If you've created a custom service role path, you must
     * specify it for the service role when you launch your cluster.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::move(value); }
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }
    inline RunJobFlowRequest& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}
    inline RunJobFlowRequest& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}
    inline RunJobFlowRequest& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags to associate with a cluster and propagate to Amazon EC2
     * instances.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline RunJobFlowRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline RunJobFlowRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline RunJobFlowRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline RunJobFlowRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of a security configuration to apply to the cluster.</p>
     */
    inline const Aws::String& GetSecurityConfiguration() const{ return m_securityConfiguration; }
    inline bool SecurityConfigurationHasBeenSet() const { return m_securityConfigurationHasBeenSet; }
    inline void SetSecurityConfiguration(const Aws::String& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = value; }
    inline void SetSecurityConfiguration(Aws::String&& value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration = std::move(value); }
    inline void SetSecurityConfiguration(const char* value) { m_securityConfigurationHasBeenSet = true; m_securityConfiguration.assign(value); }
    inline RunJobFlowRequest& WithSecurityConfiguration(const Aws::String& value) { SetSecurityConfiguration(value); return *this;}
    inline RunJobFlowRequest& WithSecurityConfiguration(Aws::String&& value) { SetSecurityConfiguration(std::move(value)); return *this;}
    inline RunJobFlowRequest& WithSecurityConfiguration(const char* value) { SetSecurityConfiguration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An IAM role for automatic scaling policies. The default role is
     * <code>EMR_AutoScaling_DefaultRole</code>. The IAM role provides permissions that
     * the automatic scaling feature requires to launch and terminate Amazon EC2
     * instances in an instance group.</p>
     */
    inline const Aws::String& GetAutoScalingRole() const{ return m_autoScalingRole; }
    inline bool AutoScalingRoleHasBeenSet() const { return m_autoScalingRoleHasBeenSet; }
    inline void SetAutoScalingRole(const Aws::String& value) { m_autoScalingRoleHasBeenSet = true; m_autoScalingRole = value; }
    inline void SetAutoScalingRole(Aws::String&& value) { m_autoScalingRoleHasBeenSet = true; m_autoScalingRole = std::move(value); }
    inline void SetAutoScalingRole(const char* value) { m_autoScalingRoleHasBeenSet = true; m_autoScalingRole.assign(value); }
    inline RunJobFlowRequest& WithAutoScalingRole(const Aws::String& value) { SetAutoScalingRole(value); return *this;}
    inline RunJobFlowRequest& WithAutoScalingRole(Aws::String&& value) { SetAutoScalingRole(std::move(value)); return *this;}
    inline RunJobFlowRequest& WithAutoScalingRole(const char* value) { SetAutoScalingRole(value); return *this;}
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
    inline const ScaleDownBehavior& GetScaleDownBehavior() const{ return m_scaleDownBehavior; }
    inline bool ScaleDownBehaviorHasBeenSet() const { return m_scaleDownBehaviorHasBeenSet; }
    inline void SetScaleDownBehavior(const ScaleDownBehavior& value) { m_scaleDownBehaviorHasBeenSet = true; m_scaleDownBehavior = value; }
    inline void SetScaleDownBehavior(ScaleDownBehavior&& value) { m_scaleDownBehaviorHasBeenSet = true; m_scaleDownBehavior = std::move(value); }
    inline RunJobFlowRequest& WithScaleDownBehavior(const ScaleDownBehavior& value) { SetScaleDownBehavior(value); return *this;}
    inline RunJobFlowRequest& WithScaleDownBehavior(ScaleDownBehavior&& value) { SetScaleDownBehavior(std::move(value)); return *this;}
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
    inline const Aws::String& GetCustomAmiId() const{ return m_customAmiId; }
    inline bool CustomAmiIdHasBeenSet() const { return m_customAmiIdHasBeenSet; }
    inline void SetCustomAmiId(const Aws::String& value) { m_customAmiIdHasBeenSet = true; m_customAmiId = value; }
    inline void SetCustomAmiId(Aws::String&& value) { m_customAmiIdHasBeenSet = true; m_customAmiId = std::move(value); }
    inline void SetCustomAmiId(const char* value) { m_customAmiIdHasBeenSet = true; m_customAmiId.assign(value); }
    inline RunJobFlowRequest& WithCustomAmiId(const Aws::String& value) { SetCustomAmiId(value); return *this;}
    inline RunJobFlowRequest& WithCustomAmiId(Aws::String&& value) { SetCustomAmiId(std::move(value)); return *this;}
    inline RunJobFlowRequest& WithCustomAmiId(const char* value) { SetCustomAmiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in GiB, of the Amazon EBS root device volume of the Linux AMI that
     * is used for each Amazon EC2 instance. Available in Amazon EMR releases 4.x and
     * later.</p>
     */
    inline int GetEbsRootVolumeSize() const{ return m_ebsRootVolumeSize; }
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
    inline const RepoUpgradeOnBoot& GetRepoUpgradeOnBoot() const{ return m_repoUpgradeOnBoot; }
    inline bool RepoUpgradeOnBootHasBeenSet() const { return m_repoUpgradeOnBootHasBeenSet; }
    inline void SetRepoUpgradeOnBoot(const RepoUpgradeOnBoot& value) { m_repoUpgradeOnBootHasBeenSet = true; m_repoUpgradeOnBoot = value; }
    inline void SetRepoUpgradeOnBoot(RepoUpgradeOnBoot&& value) { m_repoUpgradeOnBootHasBeenSet = true; m_repoUpgradeOnBoot = std::move(value); }
    inline RunJobFlowRequest& WithRepoUpgradeOnBoot(const RepoUpgradeOnBoot& value) { SetRepoUpgradeOnBoot(value); return *this;}
    inline RunJobFlowRequest& WithRepoUpgradeOnBoot(RepoUpgradeOnBoot&& value) { SetRepoUpgradeOnBoot(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Attributes for Kerberos configuration when Kerberos authentication is enabled
     * using a security configuration. For more information see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-kerberos.html">Use
     * Kerberos Authentication</a> in the <i>Amazon EMR Management Guide</i>.</p>
     */
    inline const KerberosAttributes& GetKerberosAttributes() const{ return m_kerberosAttributes; }
    inline bool KerberosAttributesHasBeenSet() const { return m_kerberosAttributesHasBeenSet; }
    inline void SetKerberosAttributes(const KerberosAttributes& value) { m_kerberosAttributesHasBeenSet = true; m_kerberosAttributes = value; }
    inline void SetKerberosAttributes(KerberosAttributes&& value) { m_kerberosAttributesHasBeenSet = true; m_kerberosAttributes = std::move(value); }
    inline RunJobFlowRequest& WithKerberosAttributes(const KerberosAttributes& value) { SetKerberosAttributes(value); return *this;}
    inline RunJobFlowRequest& WithKerberosAttributes(KerberosAttributes&& value) { SetKerberosAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the number of steps that can be executed concurrently. The default
     * value is <code>1</code>. The maximum value is <code>256</code>.</p>
     */
    inline int GetStepConcurrencyLevel() const{ return m_stepConcurrencyLevel; }
    inline bool StepConcurrencyLevelHasBeenSet() const { return m_stepConcurrencyLevelHasBeenSet; }
    inline void SetStepConcurrencyLevel(int value) { m_stepConcurrencyLevelHasBeenSet = true; m_stepConcurrencyLevel = value; }
    inline RunJobFlowRequest& WithStepConcurrencyLevel(int value) { SetStepConcurrencyLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The specified managed scaling policy for an Amazon EMR cluster. </p>
     */
    inline const ManagedScalingPolicy& GetManagedScalingPolicy() const{ return m_managedScalingPolicy; }
    inline bool ManagedScalingPolicyHasBeenSet() const { return m_managedScalingPolicyHasBeenSet; }
    inline void SetManagedScalingPolicy(const ManagedScalingPolicy& value) { m_managedScalingPolicyHasBeenSet = true; m_managedScalingPolicy = value; }
    inline void SetManagedScalingPolicy(ManagedScalingPolicy&& value) { m_managedScalingPolicyHasBeenSet = true; m_managedScalingPolicy = std::move(value); }
    inline RunJobFlowRequest& WithManagedScalingPolicy(const ManagedScalingPolicy& value) { SetManagedScalingPolicy(value); return *this;}
    inline RunJobFlowRequest& WithManagedScalingPolicy(ManagedScalingPolicy&& value) { SetManagedScalingPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specified placement group configuration for an Amazon EMR cluster.</p>
     */
    inline const Aws::Vector<PlacementGroupConfig>& GetPlacementGroupConfigs() const{ return m_placementGroupConfigs; }
    inline bool PlacementGroupConfigsHasBeenSet() const { return m_placementGroupConfigsHasBeenSet; }
    inline void SetPlacementGroupConfigs(const Aws::Vector<PlacementGroupConfig>& value) { m_placementGroupConfigsHasBeenSet = true; m_placementGroupConfigs = value; }
    inline void SetPlacementGroupConfigs(Aws::Vector<PlacementGroupConfig>&& value) { m_placementGroupConfigsHasBeenSet = true; m_placementGroupConfigs = std::move(value); }
    inline RunJobFlowRequest& WithPlacementGroupConfigs(const Aws::Vector<PlacementGroupConfig>& value) { SetPlacementGroupConfigs(value); return *this;}
    inline RunJobFlowRequest& WithPlacementGroupConfigs(Aws::Vector<PlacementGroupConfig>&& value) { SetPlacementGroupConfigs(std::move(value)); return *this;}
    inline RunJobFlowRequest& AddPlacementGroupConfigs(const PlacementGroupConfig& value) { m_placementGroupConfigsHasBeenSet = true; m_placementGroupConfigs.push_back(value); return *this; }
    inline RunJobFlowRequest& AddPlacementGroupConfigs(PlacementGroupConfig&& value) { m_placementGroupConfigsHasBeenSet = true; m_placementGroupConfigs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const AutoTerminationPolicy& GetAutoTerminationPolicy() const{ return m_autoTerminationPolicy; }
    inline bool AutoTerminationPolicyHasBeenSet() const { return m_autoTerminationPolicyHasBeenSet; }
    inline void SetAutoTerminationPolicy(const AutoTerminationPolicy& value) { m_autoTerminationPolicyHasBeenSet = true; m_autoTerminationPolicy = value; }
    inline void SetAutoTerminationPolicy(AutoTerminationPolicy&& value) { m_autoTerminationPolicyHasBeenSet = true; m_autoTerminationPolicy = std::move(value); }
    inline RunJobFlowRequest& WithAutoTerminationPolicy(const AutoTerminationPolicy& value) { SetAutoTerminationPolicy(value); return *this;}
    inline RunJobFlowRequest& WithAutoTerminationPolicy(AutoTerminationPolicy&& value) { SetAutoTerminationPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a particular Amazon Linux release for all nodes in a cluster launch
     * RunJobFlow request. If a release is not specified, Amazon EMR uses the latest
     * validated Amazon Linux release for cluster launch.</p>
     */
    inline const Aws::String& GetOSReleaseLabel() const{ return m_oSReleaseLabel; }
    inline bool OSReleaseLabelHasBeenSet() const { return m_oSReleaseLabelHasBeenSet; }
    inline void SetOSReleaseLabel(const Aws::String& value) { m_oSReleaseLabelHasBeenSet = true; m_oSReleaseLabel = value; }
    inline void SetOSReleaseLabel(Aws::String&& value) { m_oSReleaseLabelHasBeenSet = true; m_oSReleaseLabel = std::move(value); }
    inline void SetOSReleaseLabel(const char* value) { m_oSReleaseLabelHasBeenSet = true; m_oSReleaseLabel.assign(value); }
    inline RunJobFlowRequest& WithOSReleaseLabel(const Aws::String& value) { SetOSReleaseLabel(value); return *this;}
    inline RunJobFlowRequest& WithOSReleaseLabel(Aws::String&& value) { SetOSReleaseLabel(std::move(value)); return *this;}
    inline RunJobFlowRequest& WithOSReleaseLabel(const char* value) { SetOSReleaseLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IOPS, of the Amazon EBS root device volume of the Linux AMI that is used
     * for each Amazon EC2 instance. Available in Amazon EMR releases 6.15.0 and
     * later.</p>
     */
    inline int GetEbsRootVolumeIops() const{ return m_ebsRootVolumeIops; }
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
    inline int GetEbsRootVolumeThroughput() const{ return m_ebsRootVolumeThroughput; }
    inline bool EbsRootVolumeThroughputHasBeenSet() const { return m_ebsRootVolumeThroughputHasBeenSet; }
    inline void SetEbsRootVolumeThroughput(int value) { m_ebsRootVolumeThroughputHasBeenSet = true; m_ebsRootVolumeThroughput = value; }
    inline RunJobFlowRequest& WithEbsRootVolumeThroughput(int value) { SetEbsRootVolumeThroughput(value); return *this;}
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

    bool m_visibleToAllUsers;
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

    ScaleDownBehavior m_scaleDownBehavior;
    bool m_scaleDownBehaviorHasBeenSet = false;

    Aws::String m_customAmiId;
    bool m_customAmiIdHasBeenSet = false;

    int m_ebsRootVolumeSize;
    bool m_ebsRootVolumeSizeHasBeenSet = false;

    RepoUpgradeOnBoot m_repoUpgradeOnBoot;
    bool m_repoUpgradeOnBootHasBeenSet = false;

    KerberosAttributes m_kerberosAttributes;
    bool m_kerberosAttributesHasBeenSet = false;

    int m_stepConcurrencyLevel;
    bool m_stepConcurrencyLevelHasBeenSet = false;

    ManagedScalingPolicy m_managedScalingPolicy;
    bool m_managedScalingPolicyHasBeenSet = false;

    Aws::Vector<PlacementGroupConfig> m_placementGroupConfigs;
    bool m_placementGroupConfigsHasBeenSet = false;

    AutoTerminationPolicy m_autoTerminationPolicy;
    bool m_autoTerminationPolicyHasBeenSet = false;

    Aws::String m_oSReleaseLabel;
    bool m_oSReleaseLabelHasBeenSet = false;

    int m_ebsRootVolumeIops;
    bool m_ebsRootVolumeIopsHasBeenSet = false;

    int m_ebsRootVolumeThroughput;
    bool m_ebsRootVolumeThroughputHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
