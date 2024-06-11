/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/JobFlowExecutionStatusDetail.h>
#include <aws/elasticmapreduce/model/JobFlowInstancesDetail.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/ScaleDownBehavior.h>
#include <aws/elasticmapreduce/model/StepDetail.h>
#include <aws/elasticmapreduce/model/BootstrapActionDetail.h>
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
   * <p>A description of a cluster (job flow).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/JobFlowDetail">AWS
   * API Reference</a></p>
   */
  class JobFlowDetail
  {
  public:
    AWS_EMR_API JobFlowDetail();
    AWS_EMR_API JobFlowDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API JobFlowDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The job flow identifier.</p>
     */
    inline const Aws::String& GetJobFlowId() const{ return m_jobFlowId; }
    inline bool JobFlowIdHasBeenSet() const { return m_jobFlowIdHasBeenSet; }
    inline void SetJobFlowId(const Aws::String& value) { m_jobFlowIdHasBeenSet = true; m_jobFlowId = value; }
    inline void SetJobFlowId(Aws::String&& value) { m_jobFlowIdHasBeenSet = true; m_jobFlowId = std::move(value); }
    inline void SetJobFlowId(const char* value) { m_jobFlowIdHasBeenSet = true; m_jobFlowId.assign(value); }
    inline JobFlowDetail& WithJobFlowId(const Aws::String& value) { SetJobFlowId(value); return *this;}
    inline JobFlowDetail& WithJobFlowId(Aws::String&& value) { SetJobFlowId(std::move(value)); return *this;}
    inline JobFlowDetail& WithJobFlowId(const char* value) { SetJobFlowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the job flow.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline JobFlowDetail& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline JobFlowDetail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline JobFlowDetail& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location in Amazon S3 where log files for the job are stored.</p>
     */
    inline const Aws::String& GetLogUri() const{ return m_logUri; }
    inline bool LogUriHasBeenSet() const { return m_logUriHasBeenSet; }
    inline void SetLogUri(const Aws::String& value) { m_logUriHasBeenSet = true; m_logUri = value; }
    inline void SetLogUri(Aws::String&& value) { m_logUriHasBeenSet = true; m_logUri = std::move(value); }
    inline void SetLogUri(const char* value) { m_logUriHasBeenSet = true; m_logUri.assign(value); }
    inline JobFlowDetail& WithLogUri(const Aws::String& value) { SetLogUri(value); return *this;}
    inline JobFlowDetail& WithLogUri(Aws::String&& value) { SetLogUri(std::move(value)); return *this;}
    inline JobFlowDetail& WithLogUri(const char* value) { SetLogUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key used for encrypting log files. This attribute is only available
     * with Amazon EMR 5.30.0 and later, excluding 6.0.0.</p>
     */
    inline const Aws::String& GetLogEncryptionKmsKeyId() const{ return m_logEncryptionKmsKeyId; }
    inline bool LogEncryptionKmsKeyIdHasBeenSet() const { return m_logEncryptionKmsKeyIdHasBeenSet; }
    inline void SetLogEncryptionKmsKeyId(const Aws::String& value) { m_logEncryptionKmsKeyIdHasBeenSet = true; m_logEncryptionKmsKeyId = value; }
    inline void SetLogEncryptionKmsKeyId(Aws::String&& value) { m_logEncryptionKmsKeyIdHasBeenSet = true; m_logEncryptionKmsKeyId = std::move(value); }
    inline void SetLogEncryptionKmsKeyId(const char* value) { m_logEncryptionKmsKeyIdHasBeenSet = true; m_logEncryptionKmsKeyId.assign(value); }
    inline JobFlowDetail& WithLogEncryptionKmsKeyId(const Aws::String& value) { SetLogEncryptionKmsKeyId(value); return *this;}
    inline JobFlowDetail& WithLogEncryptionKmsKeyId(Aws::String&& value) { SetLogEncryptionKmsKeyId(std::move(value)); return *this;}
    inline JobFlowDetail& WithLogEncryptionKmsKeyId(const char* value) { SetLogEncryptionKmsKeyId(value); return *this;}
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
    inline JobFlowDetail& WithAmiVersion(const Aws::String& value) { SetAmiVersion(value); return *this;}
    inline JobFlowDetail& WithAmiVersion(Aws::String&& value) { SetAmiVersion(std::move(value)); return *this;}
    inline JobFlowDetail& WithAmiVersion(const char* value) { SetAmiVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the execution status of the job flow.</p>
     */
    inline const JobFlowExecutionStatusDetail& GetExecutionStatusDetail() const{ return m_executionStatusDetail; }
    inline bool ExecutionStatusDetailHasBeenSet() const { return m_executionStatusDetailHasBeenSet; }
    inline void SetExecutionStatusDetail(const JobFlowExecutionStatusDetail& value) { m_executionStatusDetailHasBeenSet = true; m_executionStatusDetail = value; }
    inline void SetExecutionStatusDetail(JobFlowExecutionStatusDetail&& value) { m_executionStatusDetailHasBeenSet = true; m_executionStatusDetail = std::move(value); }
    inline JobFlowDetail& WithExecutionStatusDetail(const JobFlowExecutionStatusDetail& value) { SetExecutionStatusDetail(value); return *this;}
    inline JobFlowDetail& WithExecutionStatusDetail(JobFlowExecutionStatusDetail&& value) { SetExecutionStatusDetail(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the Amazon EC2 instances of the job flow.</p>
     */
    inline const JobFlowInstancesDetail& GetInstances() const{ return m_instances; }
    inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }
    inline void SetInstances(const JobFlowInstancesDetail& value) { m_instancesHasBeenSet = true; m_instances = value; }
    inline void SetInstances(JobFlowInstancesDetail&& value) { m_instancesHasBeenSet = true; m_instances = std::move(value); }
    inline JobFlowDetail& WithInstances(const JobFlowInstancesDetail& value) { SetInstances(value); return *this;}
    inline JobFlowDetail& WithInstances(JobFlowInstancesDetail&& value) { SetInstances(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of steps run by the job flow.</p>
     */
    inline const Aws::Vector<StepDetail>& GetSteps() const{ return m_steps; }
    inline bool StepsHasBeenSet() const { return m_stepsHasBeenSet; }
    inline void SetSteps(const Aws::Vector<StepDetail>& value) { m_stepsHasBeenSet = true; m_steps = value; }
    inline void SetSteps(Aws::Vector<StepDetail>&& value) { m_stepsHasBeenSet = true; m_steps = std::move(value); }
    inline JobFlowDetail& WithSteps(const Aws::Vector<StepDetail>& value) { SetSteps(value); return *this;}
    inline JobFlowDetail& WithSteps(Aws::Vector<StepDetail>&& value) { SetSteps(std::move(value)); return *this;}
    inline JobFlowDetail& AddSteps(const StepDetail& value) { m_stepsHasBeenSet = true; m_steps.push_back(value); return *this; }
    inline JobFlowDetail& AddSteps(StepDetail&& value) { m_stepsHasBeenSet = true; m_steps.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the bootstrap actions run by the job flow.</p>
     */
    inline const Aws::Vector<BootstrapActionDetail>& GetBootstrapActions() const{ return m_bootstrapActions; }
    inline bool BootstrapActionsHasBeenSet() const { return m_bootstrapActionsHasBeenSet; }
    inline void SetBootstrapActions(const Aws::Vector<BootstrapActionDetail>& value) { m_bootstrapActionsHasBeenSet = true; m_bootstrapActions = value; }
    inline void SetBootstrapActions(Aws::Vector<BootstrapActionDetail>&& value) { m_bootstrapActionsHasBeenSet = true; m_bootstrapActions = std::move(value); }
    inline JobFlowDetail& WithBootstrapActions(const Aws::Vector<BootstrapActionDetail>& value) { SetBootstrapActions(value); return *this;}
    inline JobFlowDetail& WithBootstrapActions(Aws::Vector<BootstrapActionDetail>&& value) { SetBootstrapActions(std::move(value)); return *this;}
    inline JobFlowDetail& AddBootstrapActions(const BootstrapActionDetail& value) { m_bootstrapActionsHasBeenSet = true; m_bootstrapActions.push_back(value); return *this; }
    inline JobFlowDetail& AddBootstrapActions(BootstrapActionDetail&& value) { m_bootstrapActionsHasBeenSet = true; m_bootstrapActions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of strings set by third-party software when the job flow is launched.
     * If you are not using third-party software to manage the job flow, this value is
     * empty.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedProducts() const{ return m_supportedProducts; }
    inline bool SupportedProductsHasBeenSet() const { return m_supportedProductsHasBeenSet; }
    inline void SetSupportedProducts(const Aws::Vector<Aws::String>& value) { m_supportedProductsHasBeenSet = true; m_supportedProducts = value; }
    inline void SetSupportedProducts(Aws::Vector<Aws::String>&& value) { m_supportedProductsHasBeenSet = true; m_supportedProducts = std::move(value); }
    inline JobFlowDetail& WithSupportedProducts(const Aws::Vector<Aws::String>& value) { SetSupportedProducts(value); return *this;}
    inline JobFlowDetail& WithSupportedProducts(Aws::Vector<Aws::String>&& value) { SetSupportedProducts(std::move(value)); return *this;}
    inline JobFlowDetail& AddSupportedProducts(const Aws::String& value) { m_supportedProductsHasBeenSet = true; m_supportedProducts.push_back(value); return *this; }
    inline JobFlowDetail& AddSupportedProducts(Aws::String&& value) { m_supportedProductsHasBeenSet = true; m_supportedProducts.push_back(std::move(value)); return *this; }
    inline JobFlowDetail& AddSupportedProducts(const char* value) { m_supportedProductsHasBeenSet = true; m_supportedProducts.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the cluster is visible to IAM principals in the Amazon Web
     * Services account associated with the cluster. When <code>true</code>, IAM
     * principals in the Amazon Web Services account can perform Amazon EMR cluster
     * actions that their IAM policies allow. When <code>false</code>, only the IAM
     * principal that created the cluster and the Amazon Web Services account root user
     * can perform Amazon EMR actions, regardless of IAM permissions policies attached
     * to other IAM principals.</p> <p>The default value is <code>true</code> if a
     * value is not provided when creating a cluster using the Amazon EMR API
     * <a>RunJobFlow</a> command, the CLI <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/emr/create-cluster.html">create-cluster</a>
     * command, or the Amazon Web Services Management Console.</p>
     */
    inline bool GetVisibleToAllUsers() const{ return m_visibleToAllUsers; }
    inline bool VisibleToAllUsersHasBeenSet() const { return m_visibleToAllUsersHasBeenSet; }
    inline void SetVisibleToAllUsers(bool value) { m_visibleToAllUsersHasBeenSet = true; m_visibleToAllUsers = value; }
    inline JobFlowDetail& WithVisibleToAllUsers(bool value) { SetVisibleToAllUsers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role that was specified when the job flow was launched. The Amazon
     * EC2 instances of the job flow assume this role.</p>
     */
    inline const Aws::String& GetJobFlowRole() const{ return m_jobFlowRole; }
    inline bool JobFlowRoleHasBeenSet() const { return m_jobFlowRoleHasBeenSet; }
    inline void SetJobFlowRole(const Aws::String& value) { m_jobFlowRoleHasBeenSet = true; m_jobFlowRole = value; }
    inline void SetJobFlowRole(Aws::String&& value) { m_jobFlowRoleHasBeenSet = true; m_jobFlowRole = std::move(value); }
    inline void SetJobFlowRole(const char* value) { m_jobFlowRoleHasBeenSet = true; m_jobFlowRole.assign(value); }
    inline JobFlowDetail& WithJobFlowRole(const Aws::String& value) { SetJobFlowRole(value); return *this;}
    inline JobFlowDetail& WithJobFlowRole(Aws::String&& value) { SetJobFlowRole(std::move(value)); return *this;}
    inline JobFlowDetail& WithJobFlowRole(const char* value) { SetJobFlowRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role that is assumed by the Amazon EMR service to access Amazon Web
     * Services resources on your behalf.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::move(value); }
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }
    inline JobFlowDetail& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}
    inline JobFlowDetail& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}
    inline JobFlowDetail& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An IAM role for automatic scaling policies. The default role is
     * <code>EMR_AutoScaling_DefaultRole</code>. The IAM role provides a way for the
     * automatic scaling feature to get the required permissions it needs to launch and
     * terminate Amazon EC2 instances in an instance group.</p>
     */
    inline const Aws::String& GetAutoScalingRole() const{ return m_autoScalingRole; }
    inline bool AutoScalingRoleHasBeenSet() const { return m_autoScalingRoleHasBeenSet; }
    inline void SetAutoScalingRole(const Aws::String& value) { m_autoScalingRoleHasBeenSet = true; m_autoScalingRole = value; }
    inline void SetAutoScalingRole(Aws::String&& value) { m_autoScalingRoleHasBeenSet = true; m_autoScalingRole = std::move(value); }
    inline void SetAutoScalingRole(const char* value) { m_autoScalingRoleHasBeenSet = true; m_autoScalingRole.assign(value); }
    inline JobFlowDetail& WithAutoScalingRole(const Aws::String& value) { SetAutoScalingRole(value); return *this;}
    inline JobFlowDetail& WithAutoScalingRole(Aws::String&& value) { SetAutoScalingRole(std::move(value)); return *this;}
    inline JobFlowDetail& WithAutoScalingRole(const char* value) { SetAutoScalingRole(value); return *this;}
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
     * available only in Amazon EMR releases 4.1.0 and later, and is the default for
     * releases of Amazon EMR earlier than 5.1.0.</p>
     */
    inline const ScaleDownBehavior& GetScaleDownBehavior() const{ return m_scaleDownBehavior; }
    inline bool ScaleDownBehaviorHasBeenSet() const { return m_scaleDownBehaviorHasBeenSet; }
    inline void SetScaleDownBehavior(const ScaleDownBehavior& value) { m_scaleDownBehaviorHasBeenSet = true; m_scaleDownBehavior = value; }
    inline void SetScaleDownBehavior(ScaleDownBehavior&& value) { m_scaleDownBehaviorHasBeenSet = true; m_scaleDownBehavior = std::move(value); }
    inline JobFlowDetail& WithScaleDownBehavior(const ScaleDownBehavior& value) { SetScaleDownBehavior(value); return *this;}
    inline JobFlowDetail& WithScaleDownBehavior(ScaleDownBehavior&& value) { SetScaleDownBehavior(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobFlowId;
    bool m_jobFlowIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_logUri;
    bool m_logUriHasBeenSet = false;

    Aws::String m_logEncryptionKmsKeyId;
    bool m_logEncryptionKmsKeyIdHasBeenSet = false;

    Aws::String m_amiVersion;
    bool m_amiVersionHasBeenSet = false;

    JobFlowExecutionStatusDetail m_executionStatusDetail;
    bool m_executionStatusDetailHasBeenSet = false;

    JobFlowInstancesDetail m_instances;
    bool m_instancesHasBeenSet = false;

    Aws::Vector<StepDetail> m_steps;
    bool m_stepsHasBeenSet = false;

    Aws::Vector<BootstrapActionDetail> m_bootstrapActions;
    bool m_bootstrapActionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedProducts;
    bool m_supportedProductsHasBeenSet = false;

    bool m_visibleToAllUsers;
    bool m_visibleToAllUsersHasBeenSet = false;

    Aws::String m_jobFlowRole;
    bool m_jobFlowRoleHasBeenSet = false;

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet = false;

    Aws::String m_autoScalingRole;
    bool m_autoScalingRoleHasBeenSet = false;

    ScaleDownBehavior m_scaleDownBehavior;
    bool m_scaleDownBehaviorHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
