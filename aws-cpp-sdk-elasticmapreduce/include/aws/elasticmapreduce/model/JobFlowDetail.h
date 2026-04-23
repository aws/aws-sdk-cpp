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
  class AWS_EMR_API JobFlowDetail
  {
  public:
    JobFlowDetail();
    JobFlowDetail(Aws::Utils::Json::JsonView jsonValue);
    JobFlowDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The job flow identifier.</p>
     */
    inline const Aws::String& GetJobFlowId() const{ return m_jobFlowId; }

    /**
     * <p>The job flow identifier.</p>
     */
    inline bool JobFlowIdHasBeenSet() const { return m_jobFlowIdHasBeenSet; }

    /**
     * <p>The job flow identifier.</p>
     */
    inline void SetJobFlowId(const Aws::String& value) { m_jobFlowIdHasBeenSet = true; m_jobFlowId = value; }

    /**
     * <p>The job flow identifier.</p>
     */
    inline void SetJobFlowId(Aws::String&& value) { m_jobFlowIdHasBeenSet = true; m_jobFlowId = std::move(value); }

    /**
     * <p>The job flow identifier.</p>
     */
    inline void SetJobFlowId(const char* value) { m_jobFlowIdHasBeenSet = true; m_jobFlowId.assign(value); }

    /**
     * <p>The job flow identifier.</p>
     */
    inline JobFlowDetail& WithJobFlowId(const Aws::String& value) { SetJobFlowId(value); return *this;}

    /**
     * <p>The job flow identifier.</p>
     */
    inline JobFlowDetail& WithJobFlowId(Aws::String&& value) { SetJobFlowId(std::move(value)); return *this;}

    /**
     * <p>The job flow identifier.</p>
     */
    inline JobFlowDetail& WithJobFlowId(const char* value) { SetJobFlowId(value); return *this;}


    /**
     * <p>The name of the job flow.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the job flow.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the job flow.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the job flow.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the job flow.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the job flow.</p>
     */
    inline JobFlowDetail& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the job flow.</p>
     */
    inline JobFlowDetail& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the job flow.</p>
     */
    inline JobFlowDetail& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The location in Amazon S3 where log files for the job are stored.</p>
     */
    inline const Aws::String& GetLogUri() const{ return m_logUri; }

    /**
     * <p>The location in Amazon S3 where log files for the job are stored.</p>
     */
    inline bool LogUriHasBeenSet() const { return m_logUriHasBeenSet; }

    /**
     * <p>The location in Amazon S3 where log files for the job are stored.</p>
     */
    inline void SetLogUri(const Aws::String& value) { m_logUriHasBeenSet = true; m_logUri = value; }

    /**
     * <p>The location in Amazon S3 where log files for the job are stored.</p>
     */
    inline void SetLogUri(Aws::String&& value) { m_logUriHasBeenSet = true; m_logUri = std::move(value); }

    /**
     * <p>The location in Amazon S3 where log files for the job are stored.</p>
     */
    inline void SetLogUri(const char* value) { m_logUriHasBeenSet = true; m_logUri.assign(value); }

    /**
     * <p>The location in Amazon S3 where log files for the job are stored.</p>
     */
    inline JobFlowDetail& WithLogUri(const Aws::String& value) { SetLogUri(value); return *this;}

    /**
     * <p>The location in Amazon S3 where log files for the job are stored.</p>
     */
    inline JobFlowDetail& WithLogUri(Aws::String&& value) { SetLogUri(std::move(value)); return *this;}

    /**
     * <p>The location in Amazon S3 where log files for the job are stored.</p>
     */
    inline JobFlowDetail& WithLogUri(const char* value) { SetLogUri(value); return *this;}


    /**
     * <p>Applies only to Amazon EMR AMI versions 3.x and 2.x. For Amazon EMR releases
     * 4.0 and later, <code>ReleaseLabel</code> is used. To specify a custom AMI, use
     * <code>CustomAmiID</code>.</p>
     */
    inline const Aws::String& GetAmiVersion() const{ return m_amiVersion; }

    /**
     * <p>Applies only to Amazon EMR AMI versions 3.x and 2.x. For Amazon EMR releases
     * 4.0 and later, <code>ReleaseLabel</code> is used. To specify a custom AMI, use
     * <code>CustomAmiID</code>.</p>
     */
    inline bool AmiVersionHasBeenSet() const { return m_amiVersionHasBeenSet; }

    /**
     * <p>Applies only to Amazon EMR AMI versions 3.x and 2.x. For Amazon EMR releases
     * 4.0 and later, <code>ReleaseLabel</code> is used. To specify a custom AMI, use
     * <code>CustomAmiID</code>.</p>
     */
    inline void SetAmiVersion(const Aws::String& value) { m_amiVersionHasBeenSet = true; m_amiVersion = value; }

    /**
     * <p>Applies only to Amazon EMR AMI versions 3.x and 2.x. For Amazon EMR releases
     * 4.0 and later, <code>ReleaseLabel</code> is used. To specify a custom AMI, use
     * <code>CustomAmiID</code>.</p>
     */
    inline void SetAmiVersion(Aws::String&& value) { m_amiVersionHasBeenSet = true; m_amiVersion = std::move(value); }

    /**
     * <p>Applies only to Amazon EMR AMI versions 3.x and 2.x. For Amazon EMR releases
     * 4.0 and later, <code>ReleaseLabel</code> is used. To specify a custom AMI, use
     * <code>CustomAmiID</code>.</p>
     */
    inline void SetAmiVersion(const char* value) { m_amiVersionHasBeenSet = true; m_amiVersion.assign(value); }

    /**
     * <p>Applies only to Amazon EMR AMI versions 3.x and 2.x. For Amazon EMR releases
     * 4.0 and later, <code>ReleaseLabel</code> is used. To specify a custom AMI, use
     * <code>CustomAmiID</code>.</p>
     */
    inline JobFlowDetail& WithAmiVersion(const Aws::String& value) { SetAmiVersion(value); return *this;}

    /**
     * <p>Applies only to Amazon EMR AMI versions 3.x and 2.x. For Amazon EMR releases
     * 4.0 and later, <code>ReleaseLabel</code> is used. To specify a custom AMI, use
     * <code>CustomAmiID</code>.</p>
     */
    inline JobFlowDetail& WithAmiVersion(Aws::String&& value) { SetAmiVersion(std::move(value)); return *this;}

    /**
     * <p>Applies only to Amazon EMR AMI versions 3.x and 2.x. For Amazon EMR releases
     * 4.0 and later, <code>ReleaseLabel</code> is used. To specify a custom AMI, use
     * <code>CustomAmiID</code>.</p>
     */
    inline JobFlowDetail& WithAmiVersion(const char* value) { SetAmiVersion(value); return *this;}


    /**
     * <p>Describes the execution status of the job flow.</p>
     */
    inline const JobFlowExecutionStatusDetail& GetExecutionStatusDetail() const{ return m_executionStatusDetail; }

    /**
     * <p>Describes the execution status of the job flow.</p>
     */
    inline bool ExecutionStatusDetailHasBeenSet() const { return m_executionStatusDetailHasBeenSet; }

    /**
     * <p>Describes the execution status of the job flow.</p>
     */
    inline void SetExecutionStatusDetail(const JobFlowExecutionStatusDetail& value) { m_executionStatusDetailHasBeenSet = true; m_executionStatusDetail = value; }

    /**
     * <p>Describes the execution status of the job flow.</p>
     */
    inline void SetExecutionStatusDetail(JobFlowExecutionStatusDetail&& value) { m_executionStatusDetailHasBeenSet = true; m_executionStatusDetail = std::move(value); }

    /**
     * <p>Describes the execution status of the job flow.</p>
     */
    inline JobFlowDetail& WithExecutionStatusDetail(const JobFlowExecutionStatusDetail& value) { SetExecutionStatusDetail(value); return *this;}

    /**
     * <p>Describes the execution status of the job flow.</p>
     */
    inline JobFlowDetail& WithExecutionStatusDetail(JobFlowExecutionStatusDetail&& value) { SetExecutionStatusDetail(std::move(value)); return *this;}


    /**
     * <p>Describes the Amazon EC2 instances of the job flow.</p>
     */
    inline const JobFlowInstancesDetail& GetInstances() const{ return m_instances; }

    /**
     * <p>Describes the Amazon EC2 instances of the job flow.</p>
     */
    inline bool InstancesHasBeenSet() const { return m_instancesHasBeenSet; }

    /**
     * <p>Describes the Amazon EC2 instances of the job flow.</p>
     */
    inline void SetInstances(const JobFlowInstancesDetail& value) { m_instancesHasBeenSet = true; m_instances = value; }

    /**
     * <p>Describes the Amazon EC2 instances of the job flow.</p>
     */
    inline void SetInstances(JobFlowInstancesDetail&& value) { m_instancesHasBeenSet = true; m_instances = std::move(value); }

    /**
     * <p>Describes the Amazon EC2 instances of the job flow.</p>
     */
    inline JobFlowDetail& WithInstances(const JobFlowInstancesDetail& value) { SetInstances(value); return *this;}

    /**
     * <p>Describes the Amazon EC2 instances of the job flow.</p>
     */
    inline JobFlowDetail& WithInstances(JobFlowInstancesDetail&& value) { SetInstances(std::move(value)); return *this;}


    /**
     * <p>A list of steps run by the job flow.</p>
     */
    inline const Aws::Vector<StepDetail>& GetSteps() const{ return m_steps; }

    /**
     * <p>A list of steps run by the job flow.</p>
     */
    inline bool StepsHasBeenSet() const { return m_stepsHasBeenSet; }

    /**
     * <p>A list of steps run by the job flow.</p>
     */
    inline void SetSteps(const Aws::Vector<StepDetail>& value) { m_stepsHasBeenSet = true; m_steps = value; }

    /**
     * <p>A list of steps run by the job flow.</p>
     */
    inline void SetSteps(Aws::Vector<StepDetail>&& value) { m_stepsHasBeenSet = true; m_steps = std::move(value); }

    /**
     * <p>A list of steps run by the job flow.</p>
     */
    inline JobFlowDetail& WithSteps(const Aws::Vector<StepDetail>& value) { SetSteps(value); return *this;}

    /**
     * <p>A list of steps run by the job flow.</p>
     */
    inline JobFlowDetail& WithSteps(Aws::Vector<StepDetail>&& value) { SetSteps(std::move(value)); return *this;}

    /**
     * <p>A list of steps run by the job flow.</p>
     */
    inline JobFlowDetail& AddSteps(const StepDetail& value) { m_stepsHasBeenSet = true; m_steps.push_back(value); return *this; }

    /**
     * <p>A list of steps run by the job flow.</p>
     */
    inline JobFlowDetail& AddSteps(StepDetail&& value) { m_stepsHasBeenSet = true; m_steps.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of the bootstrap actions run by the job flow.</p>
     */
    inline const Aws::Vector<BootstrapActionDetail>& GetBootstrapActions() const{ return m_bootstrapActions; }

    /**
     * <p>A list of the bootstrap actions run by the job flow.</p>
     */
    inline bool BootstrapActionsHasBeenSet() const { return m_bootstrapActionsHasBeenSet; }

    /**
     * <p>A list of the bootstrap actions run by the job flow.</p>
     */
    inline void SetBootstrapActions(const Aws::Vector<BootstrapActionDetail>& value) { m_bootstrapActionsHasBeenSet = true; m_bootstrapActions = value; }

    /**
     * <p>A list of the bootstrap actions run by the job flow.</p>
     */
    inline void SetBootstrapActions(Aws::Vector<BootstrapActionDetail>&& value) { m_bootstrapActionsHasBeenSet = true; m_bootstrapActions = std::move(value); }

    /**
     * <p>A list of the bootstrap actions run by the job flow.</p>
     */
    inline JobFlowDetail& WithBootstrapActions(const Aws::Vector<BootstrapActionDetail>& value) { SetBootstrapActions(value); return *this;}

    /**
     * <p>A list of the bootstrap actions run by the job flow.</p>
     */
    inline JobFlowDetail& WithBootstrapActions(Aws::Vector<BootstrapActionDetail>&& value) { SetBootstrapActions(std::move(value)); return *this;}

    /**
     * <p>A list of the bootstrap actions run by the job flow.</p>
     */
    inline JobFlowDetail& AddBootstrapActions(const BootstrapActionDetail& value) { m_bootstrapActionsHasBeenSet = true; m_bootstrapActions.push_back(value); return *this; }

    /**
     * <p>A list of the bootstrap actions run by the job flow.</p>
     */
    inline JobFlowDetail& AddBootstrapActions(BootstrapActionDetail&& value) { m_bootstrapActionsHasBeenSet = true; m_bootstrapActions.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of strings set by third party software when the job flow is launched.
     * If you are not using third party software to manage the job flow this value is
     * empty.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedProducts() const{ return m_supportedProducts; }

    /**
     * <p>A list of strings set by third party software when the job flow is launched.
     * If you are not using third party software to manage the job flow this value is
     * empty.</p>
     */
    inline bool SupportedProductsHasBeenSet() const { return m_supportedProductsHasBeenSet; }

    /**
     * <p>A list of strings set by third party software when the job flow is launched.
     * If you are not using third party software to manage the job flow this value is
     * empty.</p>
     */
    inline void SetSupportedProducts(const Aws::Vector<Aws::String>& value) { m_supportedProductsHasBeenSet = true; m_supportedProducts = value; }

    /**
     * <p>A list of strings set by third party software when the job flow is launched.
     * If you are not using third party software to manage the job flow this value is
     * empty.</p>
     */
    inline void SetSupportedProducts(Aws::Vector<Aws::String>&& value) { m_supportedProductsHasBeenSet = true; m_supportedProducts = std::move(value); }

    /**
     * <p>A list of strings set by third party software when the job flow is launched.
     * If you are not using third party software to manage the job flow this value is
     * empty.</p>
     */
    inline JobFlowDetail& WithSupportedProducts(const Aws::Vector<Aws::String>& value) { SetSupportedProducts(value); return *this;}

    /**
     * <p>A list of strings set by third party software when the job flow is launched.
     * If you are not using third party software to manage the job flow this value is
     * empty.</p>
     */
    inline JobFlowDetail& WithSupportedProducts(Aws::Vector<Aws::String>&& value) { SetSupportedProducts(std::move(value)); return *this;}

    /**
     * <p>A list of strings set by third party software when the job flow is launched.
     * If you are not using third party software to manage the job flow this value is
     * empty.</p>
     */
    inline JobFlowDetail& AddSupportedProducts(const Aws::String& value) { m_supportedProductsHasBeenSet = true; m_supportedProducts.push_back(value); return *this; }

    /**
     * <p>A list of strings set by third party software when the job flow is launched.
     * If you are not using third party software to manage the job flow this value is
     * empty.</p>
     */
    inline JobFlowDetail& AddSupportedProducts(Aws::String&& value) { m_supportedProductsHasBeenSet = true; m_supportedProducts.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of strings set by third party software when the job flow is launched.
     * If you are not using third party software to manage the job flow this value is
     * empty.</p>
     */
    inline JobFlowDetail& AddSupportedProducts(const char* value) { m_supportedProductsHasBeenSet = true; m_supportedProducts.push_back(value); return *this; }


    /**
     * <p>Specifies whether the cluster is visible to all IAM users of the AWS account
     * associated with the cluster. If this value is set to <code>true</code>, all IAM
     * users of that AWS account can view and (if they have the proper policy
     * permissions set) manage the cluster. If it is set to <code>false</code>, only
     * the IAM user that created the cluster can view and manage it. This value can be
     * changed using the <a>SetVisibleToAllUsers</a> action.</p>
     */
    inline bool GetVisibleToAllUsers() const{ return m_visibleToAllUsers; }

    /**
     * <p>Specifies whether the cluster is visible to all IAM users of the AWS account
     * associated with the cluster. If this value is set to <code>true</code>, all IAM
     * users of that AWS account can view and (if they have the proper policy
     * permissions set) manage the cluster. If it is set to <code>false</code>, only
     * the IAM user that created the cluster can view and manage it. This value can be
     * changed using the <a>SetVisibleToAllUsers</a> action.</p>
     */
    inline bool VisibleToAllUsersHasBeenSet() const { return m_visibleToAllUsersHasBeenSet; }

    /**
     * <p>Specifies whether the cluster is visible to all IAM users of the AWS account
     * associated with the cluster. If this value is set to <code>true</code>, all IAM
     * users of that AWS account can view and (if they have the proper policy
     * permissions set) manage the cluster. If it is set to <code>false</code>, only
     * the IAM user that created the cluster can view and manage it. This value can be
     * changed using the <a>SetVisibleToAllUsers</a> action.</p>
     */
    inline void SetVisibleToAllUsers(bool value) { m_visibleToAllUsersHasBeenSet = true; m_visibleToAllUsers = value; }

    /**
     * <p>Specifies whether the cluster is visible to all IAM users of the AWS account
     * associated with the cluster. If this value is set to <code>true</code>, all IAM
     * users of that AWS account can view and (if they have the proper policy
     * permissions set) manage the cluster. If it is set to <code>false</code>, only
     * the IAM user that created the cluster can view and manage it. This value can be
     * changed using the <a>SetVisibleToAllUsers</a> action.</p>
     */
    inline JobFlowDetail& WithVisibleToAllUsers(bool value) { SetVisibleToAllUsers(value); return *this;}


    /**
     * <p>The IAM role that was specified when the job flow was launched. The EC2
     * instances of the job flow assume this role.</p>
     */
    inline const Aws::String& GetJobFlowRole() const{ return m_jobFlowRole; }

    /**
     * <p>The IAM role that was specified when the job flow was launched. The EC2
     * instances of the job flow assume this role.</p>
     */
    inline bool JobFlowRoleHasBeenSet() const { return m_jobFlowRoleHasBeenSet; }

    /**
     * <p>The IAM role that was specified when the job flow was launched. The EC2
     * instances of the job flow assume this role.</p>
     */
    inline void SetJobFlowRole(const Aws::String& value) { m_jobFlowRoleHasBeenSet = true; m_jobFlowRole = value; }

    /**
     * <p>The IAM role that was specified when the job flow was launched. The EC2
     * instances of the job flow assume this role.</p>
     */
    inline void SetJobFlowRole(Aws::String&& value) { m_jobFlowRoleHasBeenSet = true; m_jobFlowRole = std::move(value); }

    /**
     * <p>The IAM role that was specified when the job flow was launched. The EC2
     * instances of the job flow assume this role.</p>
     */
    inline void SetJobFlowRole(const char* value) { m_jobFlowRoleHasBeenSet = true; m_jobFlowRole.assign(value); }

    /**
     * <p>The IAM role that was specified when the job flow was launched. The EC2
     * instances of the job flow assume this role.</p>
     */
    inline JobFlowDetail& WithJobFlowRole(const Aws::String& value) { SetJobFlowRole(value); return *this;}

    /**
     * <p>The IAM role that was specified when the job flow was launched. The EC2
     * instances of the job flow assume this role.</p>
     */
    inline JobFlowDetail& WithJobFlowRole(Aws::String&& value) { SetJobFlowRole(std::move(value)); return *this;}

    /**
     * <p>The IAM role that was specified when the job flow was launched. The EC2
     * instances of the job flow assume this role.</p>
     */
    inline JobFlowDetail& WithJobFlowRole(const char* value) { SetJobFlowRole(value); return *this;}


    /**
     * <p>The IAM role that will be assumed by the Amazon EMR service to access AWS
     * resources on your behalf.</p>
     */
    inline const Aws::String& GetServiceRole() const{ return m_serviceRole; }

    /**
     * <p>The IAM role that will be assumed by the Amazon EMR service to access AWS
     * resources on your behalf.</p>
     */
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }

    /**
     * <p>The IAM role that will be assumed by the Amazon EMR service to access AWS
     * resources on your behalf.</p>
     */
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The IAM role that will be assumed by the Amazon EMR service to access AWS
     * resources on your behalf.</p>
     */
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::move(value); }

    /**
     * <p>The IAM role that will be assumed by the Amazon EMR service to access AWS
     * resources on your behalf.</p>
     */
    inline void SetServiceRole(const char* value) { m_serviceRoleHasBeenSet = true; m_serviceRole.assign(value); }

    /**
     * <p>The IAM role that will be assumed by the Amazon EMR service to access AWS
     * resources on your behalf.</p>
     */
    inline JobFlowDetail& WithServiceRole(const Aws::String& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The IAM role that will be assumed by the Amazon EMR service to access AWS
     * resources on your behalf.</p>
     */
    inline JobFlowDetail& WithServiceRole(Aws::String&& value) { SetServiceRole(std::move(value)); return *this;}

    /**
     * <p>The IAM role that will be assumed by the Amazon EMR service to access AWS
     * resources on your behalf.</p>
     */
    inline JobFlowDetail& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}


    /**
     * <p>An IAM role for automatic scaling policies. The default role is
     * <code>EMR_AutoScaling_DefaultRole</code>. The IAM role provides a way for the
     * automatic scaling feature to get the required permissions it needs to launch and
     * terminate EC2 instances in an instance group.</p>
     */
    inline const Aws::String& GetAutoScalingRole() const{ return m_autoScalingRole; }

    /**
     * <p>An IAM role for automatic scaling policies. The default role is
     * <code>EMR_AutoScaling_DefaultRole</code>. The IAM role provides a way for the
     * automatic scaling feature to get the required permissions it needs to launch and
     * terminate EC2 instances in an instance group.</p>
     */
    inline bool AutoScalingRoleHasBeenSet() const { return m_autoScalingRoleHasBeenSet; }

    /**
     * <p>An IAM role for automatic scaling policies. The default role is
     * <code>EMR_AutoScaling_DefaultRole</code>. The IAM role provides a way for the
     * automatic scaling feature to get the required permissions it needs to launch and
     * terminate EC2 instances in an instance group.</p>
     */
    inline void SetAutoScalingRole(const Aws::String& value) { m_autoScalingRoleHasBeenSet = true; m_autoScalingRole = value; }

    /**
     * <p>An IAM role for automatic scaling policies. The default role is
     * <code>EMR_AutoScaling_DefaultRole</code>. The IAM role provides a way for the
     * automatic scaling feature to get the required permissions it needs to launch and
     * terminate EC2 instances in an instance group.</p>
     */
    inline void SetAutoScalingRole(Aws::String&& value) { m_autoScalingRoleHasBeenSet = true; m_autoScalingRole = std::move(value); }

    /**
     * <p>An IAM role for automatic scaling policies. The default role is
     * <code>EMR_AutoScaling_DefaultRole</code>. The IAM role provides a way for the
     * automatic scaling feature to get the required permissions it needs to launch and
     * terminate EC2 instances in an instance group.</p>
     */
    inline void SetAutoScalingRole(const char* value) { m_autoScalingRoleHasBeenSet = true; m_autoScalingRole.assign(value); }

    /**
     * <p>An IAM role for automatic scaling policies. The default role is
     * <code>EMR_AutoScaling_DefaultRole</code>. The IAM role provides a way for the
     * automatic scaling feature to get the required permissions it needs to launch and
     * terminate EC2 instances in an instance group.</p>
     */
    inline JobFlowDetail& WithAutoScalingRole(const Aws::String& value) { SetAutoScalingRole(value); return *this;}

    /**
     * <p>An IAM role for automatic scaling policies. The default role is
     * <code>EMR_AutoScaling_DefaultRole</code>. The IAM role provides a way for the
     * automatic scaling feature to get the required permissions it needs to launch and
     * terminate EC2 instances in an instance group.</p>
     */
    inline JobFlowDetail& WithAutoScalingRole(Aws::String&& value) { SetAutoScalingRole(std::move(value)); return *this;}

    /**
     * <p>An IAM role for automatic scaling policies. The default role is
     * <code>EMR_AutoScaling_DefaultRole</code>. The IAM role provides a way for the
     * automatic scaling feature to get the required permissions it needs to launch and
     * terminate EC2 instances in an instance group.</p>
     */
    inline JobFlowDetail& WithAutoScalingRole(const char* value) { SetAutoScalingRole(value); return *this;}


    /**
     * <p>The way that individual Amazon EC2 instances terminate when an automatic
     * scale-in activity occurs or an instance group is resized.
     * <code>TERMINATE_AT_INSTANCE_HOUR</code> indicates that Amazon EMR terminates
     * nodes at the instance-hour boundary, regardless of when the request to terminate
     * the instance was submitted. This option is only available with Amazon EMR 5.1.0
     * and later and is the default for clusters created using that version.
     * <code>TERMINATE_AT_TASK_COMPLETION</code> indicates that Amazon EMR blacklists
     * and drains tasks from nodes before terminating the Amazon EC2 instances,
     * regardless of the instance-hour boundary. With either behavior, Amazon EMR
     * removes the least active nodes first and blocks instance termination if it could
     * lead to HDFS corruption. <code>TERMINATE_AT_TASK_COMPLETION</code> available
     * only in Amazon EMR version 4.1.0 and later, and is the default for versions of
     * Amazon EMR earlier than 5.1.0.</p>
     */
    inline const ScaleDownBehavior& GetScaleDownBehavior() const{ return m_scaleDownBehavior; }

    /**
     * <p>The way that individual Amazon EC2 instances terminate when an automatic
     * scale-in activity occurs or an instance group is resized.
     * <code>TERMINATE_AT_INSTANCE_HOUR</code> indicates that Amazon EMR terminates
     * nodes at the instance-hour boundary, regardless of when the request to terminate
     * the instance was submitted. This option is only available with Amazon EMR 5.1.0
     * and later and is the default for clusters created using that version.
     * <code>TERMINATE_AT_TASK_COMPLETION</code> indicates that Amazon EMR blacklists
     * and drains tasks from nodes before terminating the Amazon EC2 instances,
     * regardless of the instance-hour boundary. With either behavior, Amazon EMR
     * removes the least active nodes first and blocks instance termination if it could
     * lead to HDFS corruption. <code>TERMINATE_AT_TASK_COMPLETION</code> available
     * only in Amazon EMR version 4.1.0 and later, and is the default for versions of
     * Amazon EMR earlier than 5.1.0.</p>
     */
    inline bool ScaleDownBehaviorHasBeenSet() const { return m_scaleDownBehaviorHasBeenSet; }

    /**
     * <p>The way that individual Amazon EC2 instances terminate when an automatic
     * scale-in activity occurs or an instance group is resized.
     * <code>TERMINATE_AT_INSTANCE_HOUR</code> indicates that Amazon EMR terminates
     * nodes at the instance-hour boundary, regardless of when the request to terminate
     * the instance was submitted. This option is only available with Amazon EMR 5.1.0
     * and later and is the default for clusters created using that version.
     * <code>TERMINATE_AT_TASK_COMPLETION</code> indicates that Amazon EMR blacklists
     * and drains tasks from nodes before terminating the Amazon EC2 instances,
     * regardless of the instance-hour boundary. With either behavior, Amazon EMR
     * removes the least active nodes first and blocks instance termination if it could
     * lead to HDFS corruption. <code>TERMINATE_AT_TASK_COMPLETION</code> available
     * only in Amazon EMR version 4.1.0 and later, and is the default for versions of
     * Amazon EMR earlier than 5.1.0.</p>
     */
    inline void SetScaleDownBehavior(const ScaleDownBehavior& value) { m_scaleDownBehaviorHasBeenSet = true; m_scaleDownBehavior = value; }

    /**
     * <p>The way that individual Amazon EC2 instances terminate when an automatic
     * scale-in activity occurs or an instance group is resized.
     * <code>TERMINATE_AT_INSTANCE_HOUR</code> indicates that Amazon EMR terminates
     * nodes at the instance-hour boundary, regardless of when the request to terminate
     * the instance was submitted. This option is only available with Amazon EMR 5.1.0
     * and later and is the default for clusters created using that version.
     * <code>TERMINATE_AT_TASK_COMPLETION</code> indicates that Amazon EMR blacklists
     * and drains tasks from nodes before terminating the Amazon EC2 instances,
     * regardless of the instance-hour boundary. With either behavior, Amazon EMR
     * removes the least active nodes first and blocks instance termination if it could
     * lead to HDFS corruption. <code>TERMINATE_AT_TASK_COMPLETION</code> available
     * only in Amazon EMR version 4.1.0 and later, and is the default for versions of
     * Amazon EMR earlier than 5.1.0.</p>
     */
    inline void SetScaleDownBehavior(ScaleDownBehavior&& value) { m_scaleDownBehaviorHasBeenSet = true; m_scaleDownBehavior = std::move(value); }

    /**
     * <p>The way that individual Amazon EC2 instances terminate when an automatic
     * scale-in activity occurs or an instance group is resized.
     * <code>TERMINATE_AT_INSTANCE_HOUR</code> indicates that Amazon EMR terminates
     * nodes at the instance-hour boundary, regardless of when the request to terminate
     * the instance was submitted. This option is only available with Amazon EMR 5.1.0
     * and later and is the default for clusters created using that version.
     * <code>TERMINATE_AT_TASK_COMPLETION</code> indicates that Amazon EMR blacklists
     * and drains tasks from nodes before terminating the Amazon EC2 instances,
     * regardless of the instance-hour boundary. With either behavior, Amazon EMR
     * removes the least active nodes first and blocks instance termination if it could
     * lead to HDFS corruption. <code>TERMINATE_AT_TASK_COMPLETION</code> available
     * only in Amazon EMR version 4.1.0 and later, and is the default for versions of
     * Amazon EMR earlier than 5.1.0.</p>
     */
    inline JobFlowDetail& WithScaleDownBehavior(const ScaleDownBehavior& value) { SetScaleDownBehavior(value); return *this;}

    /**
     * <p>The way that individual Amazon EC2 instances terminate when an automatic
     * scale-in activity occurs or an instance group is resized.
     * <code>TERMINATE_AT_INSTANCE_HOUR</code> indicates that Amazon EMR terminates
     * nodes at the instance-hour boundary, regardless of when the request to terminate
     * the instance was submitted. This option is only available with Amazon EMR 5.1.0
     * and later and is the default for clusters created using that version.
     * <code>TERMINATE_AT_TASK_COMPLETION</code> indicates that Amazon EMR blacklists
     * and drains tasks from nodes before terminating the Amazon EC2 instances,
     * regardless of the instance-hour boundary. With either behavior, Amazon EMR
     * removes the least active nodes first and blocks instance termination if it could
     * lead to HDFS corruption. <code>TERMINATE_AT_TASK_COMPLETION</code> available
     * only in Amazon EMR version 4.1.0 and later, and is the default for versions of
     * Amazon EMR earlier than 5.1.0.</p>
     */
    inline JobFlowDetail& WithScaleDownBehavior(ScaleDownBehavior&& value) { SetScaleDownBehavior(std::move(value)); return *this;}

  private:

    Aws::String m_jobFlowId;
    bool m_jobFlowIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_logUri;
    bool m_logUriHasBeenSet;

    Aws::String m_amiVersion;
    bool m_amiVersionHasBeenSet;

    JobFlowExecutionStatusDetail m_executionStatusDetail;
    bool m_executionStatusDetailHasBeenSet;

    JobFlowInstancesDetail m_instances;
    bool m_instancesHasBeenSet;

    Aws::Vector<StepDetail> m_steps;
    bool m_stepsHasBeenSet;

    Aws::Vector<BootstrapActionDetail> m_bootstrapActions;
    bool m_bootstrapActionsHasBeenSet;

    Aws::Vector<Aws::String> m_supportedProducts;
    bool m_supportedProductsHasBeenSet;

    bool m_visibleToAllUsers;
    bool m_visibleToAllUsersHasBeenSet;

    Aws::String m_jobFlowRole;
    bool m_jobFlowRoleHasBeenSet;

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet;

    Aws::String m_autoScalingRole;
    bool m_autoScalingRoleHasBeenSet;

    ScaleDownBehavior m_scaleDownBehavior;
    bool m_scaleDownBehaviorHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
