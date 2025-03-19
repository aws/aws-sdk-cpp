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
    AWS_EMR_API JobFlowDetail() = default;
    AWS_EMR_API JobFlowDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API JobFlowDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The job flow identifier.</p>
     */
    inline const Aws::String& GetJobFlowId() const { return m_jobFlowId; }
    inline bool JobFlowIdHasBeenSet() const { return m_jobFlowIdHasBeenSet; }
    template<typename JobFlowIdT = Aws::String>
    void SetJobFlowId(JobFlowIdT&& value) { m_jobFlowIdHasBeenSet = true; m_jobFlowId = std::forward<JobFlowIdT>(value); }
    template<typename JobFlowIdT = Aws::String>
    JobFlowDetail& WithJobFlowId(JobFlowIdT&& value) { SetJobFlowId(std::forward<JobFlowIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the job flow.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    JobFlowDetail& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location in Amazon S3 where log files for the job are stored.</p>
     */
    inline const Aws::String& GetLogUri() const { return m_logUri; }
    inline bool LogUriHasBeenSet() const { return m_logUriHasBeenSet; }
    template<typename LogUriT = Aws::String>
    void SetLogUri(LogUriT&& value) { m_logUriHasBeenSet = true; m_logUri = std::forward<LogUriT>(value); }
    template<typename LogUriT = Aws::String>
    JobFlowDetail& WithLogUri(LogUriT&& value) { SetLogUri(std::forward<LogUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key used for encrypting log files. This attribute is only available
     * with Amazon EMR 5.30.0 and later, excluding 6.0.0.</p>
     */
    inline const Aws::String& GetLogEncryptionKmsKeyId() const { return m_logEncryptionKmsKeyId; }
    inline bool LogEncryptionKmsKeyIdHasBeenSet() const { return m_logEncryptionKmsKeyIdHasBeenSet; }
    template<typename LogEncryptionKmsKeyIdT = Aws::String>
    void SetLogEncryptionKmsKeyId(LogEncryptionKmsKeyIdT&& value) { m_logEncryptionKmsKeyIdHasBeenSet = true; m_logEncryptionKmsKeyId = std::forward<LogEncryptionKmsKeyIdT>(value); }
    template<typename LogEncryptionKmsKeyIdT = Aws::String>
    JobFlowDetail& WithLogEncryptionKmsKeyId(LogEncryptionKmsKeyIdT&& value) { SetLogEncryptionKmsKeyId(std::forward<LogEncryptionKmsKeyIdT>(value)); return *this;}
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
    JobFlowDetail& WithAmiVersion(AmiVersionT&& value) { SetAmiVersion(std::forward<AmiVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the execution status of the job flow.</p>
     */
    inline const JobFlowExecutionStatusDetail& GetExecutionStatusDetail() const { return m_executionStatusDetail; }
    inline bool ExecutionStatusDetailHasBeenSet() const { return m_executionStatusDetailHasBeenSet; }
    template<typename ExecutionStatusDetailT = JobFlowExecutionStatusDetail>
    void SetExecutionStatusDetail(ExecutionStatusDetailT&& value) { m_executionStatusDetailHasBeenSet = true; m_executionStatusDetail = std::forward<ExecutionStatusDetailT>(value); }
    template<typename ExecutionStatusDetailT = JobFlowExecutionStatusDetail>
    JobFlowDetail& WithExecutionStatusDetail(ExecutionStatusDetailT&& value) { SetExecutionStatusDetail(std::forward<ExecutionStatusDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the Amazon EC2 instances of the job flow.</p>
     */
    inline const JobFlowInstancesDetail& GetInstances() const { return m_instances; }
    inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }
    template<typename InstancesT = JobFlowInstancesDetail>
    void SetInstances(InstancesT&& value) { m_instancesHasBeenSet = true; m_instances = std::forward<InstancesT>(value); }
    template<typename InstancesT = JobFlowInstancesDetail>
    JobFlowDetail& WithInstances(InstancesT&& value) { SetInstances(std::forward<InstancesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of steps run by the job flow.</p>
     */
    inline const Aws::Vector<StepDetail>& GetSteps() const { return m_steps; }
    inline bool StepsHasBeenSet() const { return m_stepsHasBeenSet; }
    template<typename StepsT = Aws::Vector<StepDetail>>
    void SetSteps(StepsT&& value) { m_stepsHasBeenSet = true; m_steps = std::forward<StepsT>(value); }
    template<typename StepsT = Aws::Vector<StepDetail>>
    JobFlowDetail& WithSteps(StepsT&& value) { SetSteps(std::forward<StepsT>(value)); return *this;}
    template<typename StepsT = StepDetail>
    JobFlowDetail& AddSteps(StepsT&& value) { m_stepsHasBeenSet = true; m_steps.emplace_back(std::forward<StepsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the bootstrap actions run by the job flow.</p>
     */
    inline const Aws::Vector<BootstrapActionDetail>& GetBootstrapActions() const { return m_bootstrapActions; }
    inline bool BootstrapActionsHasBeenSet() const { return m_bootstrapActionsHasBeenSet; }
    template<typename BootstrapActionsT = Aws::Vector<BootstrapActionDetail>>
    void SetBootstrapActions(BootstrapActionsT&& value) { m_bootstrapActionsHasBeenSet = true; m_bootstrapActions = std::forward<BootstrapActionsT>(value); }
    template<typename BootstrapActionsT = Aws::Vector<BootstrapActionDetail>>
    JobFlowDetail& WithBootstrapActions(BootstrapActionsT&& value) { SetBootstrapActions(std::forward<BootstrapActionsT>(value)); return *this;}
    template<typename BootstrapActionsT = BootstrapActionDetail>
    JobFlowDetail& AddBootstrapActions(BootstrapActionsT&& value) { m_bootstrapActionsHasBeenSet = true; m_bootstrapActions.emplace_back(std::forward<BootstrapActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of strings set by third-party software when the job flow is launched.
     * If you are not using third-party software to manage the job flow, this value is
     * empty.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedProducts() const { return m_supportedProducts; }
    inline bool SupportedProductsHasBeenSet() const { return m_supportedProductsHasBeenSet; }
    template<typename SupportedProductsT = Aws::Vector<Aws::String>>
    void SetSupportedProducts(SupportedProductsT&& value) { m_supportedProductsHasBeenSet = true; m_supportedProducts = std::forward<SupportedProductsT>(value); }
    template<typename SupportedProductsT = Aws::Vector<Aws::String>>
    JobFlowDetail& WithSupportedProducts(SupportedProductsT&& value) { SetSupportedProducts(std::forward<SupportedProductsT>(value)); return *this;}
    template<typename SupportedProductsT = Aws::String>
    JobFlowDetail& AddSupportedProducts(SupportedProductsT&& value) { m_supportedProductsHasBeenSet = true; m_supportedProducts.emplace_back(std::forward<SupportedProductsT>(value)); return *this; }
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
    inline bool GetVisibleToAllUsers() const { return m_visibleToAllUsers; }
    inline bool VisibleToAllUsersHasBeenSet() const { return m_visibleToAllUsersHasBeenSet; }
    inline void SetVisibleToAllUsers(bool value) { m_visibleToAllUsersHasBeenSet = true; m_visibleToAllUsers = value; }
    inline JobFlowDetail& WithVisibleToAllUsers(bool value) { SetVisibleToAllUsers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role that was specified when the job flow was launched. The Amazon
     * EC2 instances of the job flow assume this role.</p>
     */
    inline const Aws::String& GetJobFlowRole() const { return m_jobFlowRole; }
    inline bool JobFlowRoleHasBeenSet() const { return m_jobFlowRoleHasBeenSet; }
    template<typename JobFlowRoleT = Aws::String>
    void SetJobFlowRole(JobFlowRoleT&& value) { m_jobFlowRoleHasBeenSet = true; m_jobFlowRole = std::forward<JobFlowRoleT>(value); }
    template<typename JobFlowRoleT = Aws::String>
    JobFlowDetail& WithJobFlowRole(JobFlowRoleT&& value) { SetJobFlowRole(std::forward<JobFlowRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM role that is assumed by the Amazon EMR service to access Amazon Web
     * Services resources on your behalf.</p>
     */
    inline const Aws::String& GetServiceRole() const { return m_serviceRole; }
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }
    template<typename ServiceRoleT = Aws::String>
    void SetServiceRole(ServiceRoleT&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::forward<ServiceRoleT>(value); }
    template<typename ServiceRoleT = Aws::String>
    JobFlowDetail& WithServiceRole(ServiceRoleT&& value) { SetServiceRole(std::forward<ServiceRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An IAM role for automatic scaling policies. The default role is
     * <code>EMR_AutoScaling_DefaultRole</code>. The IAM role provides a way for the
     * automatic scaling feature to get the required permissions it needs to launch and
     * terminate Amazon EC2 instances in an instance group.</p>
     */
    inline const Aws::String& GetAutoScalingRole() const { return m_autoScalingRole; }
    inline bool AutoScalingRoleHasBeenSet() const { return m_autoScalingRoleHasBeenSet; }
    template<typename AutoScalingRoleT = Aws::String>
    void SetAutoScalingRole(AutoScalingRoleT&& value) { m_autoScalingRoleHasBeenSet = true; m_autoScalingRole = std::forward<AutoScalingRoleT>(value); }
    template<typename AutoScalingRoleT = Aws::String>
    JobFlowDetail& WithAutoScalingRole(AutoScalingRoleT&& value) { SetAutoScalingRole(std::forward<AutoScalingRoleT>(value)); return *this;}
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
    inline ScaleDownBehavior GetScaleDownBehavior() const { return m_scaleDownBehavior; }
    inline bool ScaleDownBehaviorHasBeenSet() const { return m_scaleDownBehaviorHasBeenSet; }
    inline void SetScaleDownBehavior(ScaleDownBehavior value) { m_scaleDownBehaviorHasBeenSet = true; m_scaleDownBehavior = value; }
    inline JobFlowDetail& WithScaleDownBehavior(ScaleDownBehavior value) { SetScaleDownBehavior(value); return *this;}
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

    bool m_visibleToAllUsers{false};
    bool m_visibleToAllUsersHasBeenSet = false;

    Aws::String m_jobFlowRole;
    bool m_jobFlowRoleHasBeenSet = false;

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet = false;

    Aws::String m_autoScalingRole;
    bool m_autoScalingRoleHasBeenSet = false;

    ScaleDownBehavior m_scaleDownBehavior{ScaleDownBehavior::NOT_SET};
    bool m_scaleDownBehaviorHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
