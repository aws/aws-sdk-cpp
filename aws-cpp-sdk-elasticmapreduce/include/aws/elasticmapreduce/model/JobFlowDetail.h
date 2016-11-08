/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticmapreduce/model/StepDetail.h>
#include <aws/elasticmapreduce/model/BootstrapActionDetail.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace EMR
{
namespace Model
{

  /**
   * <p>A description of a job flow.</p>
   */
  class AWS_EMR_API JobFlowDetail
  {
  public:
    JobFlowDetail();
    JobFlowDetail(const Aws::Utils::Json::JsonValue& jsonValue);
    JobFlowDetail& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The job flow identifier.</p>
     */
    inline const Aws::String& GetJobFlowId() const{ return m_jobFlowId; }

    /**
     * <p>The job flow identifier.</p>
     */
    inline void SetJobFlowId(const Aws::String& value) { m_jobFlowIdHasBeenSet = true; m_jobFlowId = value; }

    /**
     * <p>The job flow identifier.</p>
     */
    inline void SetJobFlowId(Aws::String&& value) { m_jobFlowIdHasBeenSet = true; m_jobFlowId = value; }

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
    inline JobFlowDetail& WithJobFlowId(Aws::String&& value) { SetJobFlowId(value); return *this;}

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
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the job flow.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

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
    inline JobFlowDetail& WithName(Aws::String&& value) { SetName(value); return *this;}

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
    inline void SetLogUri(const Aws::String& value) { m_logUriHasBeenSet = true; m_logUri = value; }

    /**
     * <p>The location in Amazon S3 where log files for the job are stored.</p>
     */
    inline void SetLogUri(Aws::String&& value) { m_logUriHasBeenSet = true; m_logUri = value; }

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
    inline JobFlowDetail& WithLogUri(Aws::String&& value) { SetLogUri(value); return *this;}

    /**
     * <p>The location in Amazon S3 where log files for the job are stored.</p>
     */
    inline JobFlowDetail& WithLogUri(const char* value) { SetLogUri(value); return *this;}

    /**
     * <p>The version of the AMI used to initialize Amazon EC2 instances in the job
     * flow. For a list of AMI versions currently supported by Amazon ElasticMapReduce,
     * go to <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/EnvironmentConfig_AMIVersion.html#ami-versions-supported">AMI
     * Versions Supported in Elastic MapReduce</a> in the <i>Amazon Elastic MapReduce
     * Developer Guide.</i> </p>
     */
    inline const Aws::String& GetAmiVersion() const{ return m_amiVersion; }

    /**
     * <p>The version of the AMI used to initialize Amazon EC2 instances in the job
     * flow. For a list of AMI versions currently supported by Amazon ElasticMapReduce,
     * go to <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/EnvironmentConfig_AMIVersion.html#ami-versions-supported">AMI
     * Versions Supported in Elastic MapReduce</a> in the <i>Amazon Elastic MapReduce
     * Developer Guide.</i> </p>
     */
    inline void SetAmiVersion(const Aws::String& value) { m_amiVersionHasBeenSet = true; m_amiVersion = value; }

    /**
     * <p>The version of the AMI used to initialize Amazon EC2 instances in the job
     * flow. For a list of AMI versions currently supported by Amazon ElasticMapReduce,
     * go to <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/EnvironmentConfig_AMIVersion.html#ami-versions-supported">AMI
     * Versions Supported in Elastic MapReduce</a> in the <i>Amazon Elastic MapReduce
     * Developer Guide.</i> </p>
     */
    inline void SetAmiVersion(Aws::String&& value) { m_amiVersionHasBeenSet = true; m_amiVersion = value; }

    /**
     * <p>The version of the AMI used to initialize Amazon EC2 instances in the job
     * flow. For a list of AMI versions currently supported by Amazon ElasticMapReduce,
     * go to <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/EnvironmentConfig_AMIVersion.html#ami-versions-supported">AMI
     * Versions Supported in Elastic MapReduce</a> in the <i>Amazon Elastic MapReduce
     * Developer Guide.</i> </p>
     */
    inline void SetAmiVersion(const char* value) { m_amiVersionHasBeenSet = true; m_amiVersion.assign(value); }

    /**
     * <p>The version of the AMI used to initialize Amazon EC2 instances in the job
     * flow. For a list of AMI versions currently supported by Amazon ElasticMapReduce,
     * go to <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/EnvironmentConfig_AMIVersion.html#ami-versions-supported">AMI
     * Versions Supported in Elastic MapReduce</a> in the <i>Amazon Elastic MapReduce
     * Developer Guide.</i> </p>
     */
    inline JobFlowDetail& WithAmiVersion(const Aws::String& value) { SetAmiVersion(value); return *this;}

    /**
     * <p>The version of the AMI used to initialize Amazon EC2 instances in the job
     * flow. For a list of AMI versions currently supported by Amazon ElasticMapReduce,
     * go to <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/EnvironmentConfig_AMIVersion.html#ami-versions-supported">AMI
     * Versions Supported in Elastic MapReduce</a> in the <i>Amazon Elastic MapReduce
     * Developer Guide.</i> </p>
     */
    inline JobFlowDetail& WithAmiVersion(Aws::String&& value) { SetAmiVersion(value); return *this;}

    /**
     * <p>The version of the AMI used to initialize Amazon EC2 instances in the job
     * flow. For a list of AMI versions currently supported by Amazon ElasticMapReduce,
     * go to <a
     * href="http://docs.aws.amazon.com/ElasticMapReduce/latest/DeveloperGuide/EnvironmentConfig_AMIVersion.html#ami-versions-supported">AMI
     * Versions Supported in Elastic MapReduce</a> in the <i>Amazon Elastic MapReduce
     * Developer Guide.</i> </p>
     */
    inline JobFlowDetail& WithAmiVersion(const char* value) { SetAmiVersion(value); return *this;}

    /**
     * <p>Describes the execution status of the job flow.</p>
     */
    inline const JobFlowExecutionStatusDetail& GetExecutionStatusDetail() const{ return m_executionStatusDetail; }

    /**
     * <p>Describes the execution status of the job flow.</p>
     */
    inline void SetExecutionStatusDetail(const JobFlowExecutionStatusDetail& value) { m_executionStatusDetailHasBeenSet = true; m_executionStatusDetail = value; }

    /**
     * <p>Describes the execution status of the job flow.</p>
     */
    inline void SetExecutionStatusDetail(JobFlowExecutionStatusDetail&& value) { m_executionStatusDetailHasBeenSet = true; m_executionStatusDetail = value; }

    /**
     * <p>Describes the execution status of the job flow.</p>
     */
    inline JobFlowDetail& WithExecutionStatusDetail(const JobFlowExecutionStatusDetail& value) { SetExecutionStatusDetail(value); return *this;}

    /**
     * <p>Describes the execution status of the job flow.</p>
     */
    inline JobFlowDetail& WithExecutionStatusDetail(JobFlowExecutionStatusDetail&& value) { SetExecutionStatusDetail(value); return *this;}

    /**
     * <p>Describes the Amazon EC2 instances of the job flow.</p>
     */
    inline const JobFlowInstancesDetail& GetInstances() const{ return m_instances; }

    /**
     * <p>Describes the Amazon EC2 instances of the job flow.</p>
     */
    inline void SetInstances(const JobFlowInstancesDetail& value) { m_instancesHasBeenSet = true; m_instances = value; }

    /**
     * <p>Describes the Amazon EC2 instances of the job flow.</p>
     */
    inline void SetInstances(JobFlowInstancesDetail&& value) { m_instancesHasBeenSet = true; m_instances = value; }

    /**
     * <p>Describes the Amazon EC2 instances of the job flow.</p>
     */
    inline JobFlowDetail& WithInstances(const JobFlowInstancesDetail& value) { SetInstances(value); return *this;}

    /**
     * <p>Describes the Amazon EC2 instances of the job flow.</p>
     */
    inline JobFlowDetail& WithInstances(JobFlowInstancesDetail&& value) { SetInstances(value); return *this;}

    /**
     * <p>A list of steps run by the job flow.</p>
     */
    inline const Aws::Vector<StepDetail>& GetSteps() const{ return m_steps; }

    /**
     * <p>A list of steps run by the job flow.</p>
     */
    inline void SetSteps(const Aws::Vector<StepDetail>& value) { m_stepsHasBeenSet = true; m_steps = value; }

    /**
     * <p>A list of steps run by the job flow.</p>
     */
    inline void SetSteps(Aws::Vector<StepDetail>&& value) { m_stepsHasBeenSet = true; m_steps = value; }

    /**
     * <p>A list of steps run by the job flow.</p>
     */
    inline JobFlowDetail& WithSteps(const Aws::Vector<StepDetail>& value) { SetSteps(value); return *this;}

    /**
     * <p>A list of steps run by the job flow.</p>
     */
    inline JobFlowDetail& WithSteps(Aws::Vector<StepDetail>&& value) { SetSteps(value); return *this;}

    /**
     * <p>A list of steps run by the job flow.</p>
     */
    inline JobFlowDetail& AddSteps(const StepDetail& value) { m_stepsHasBeenSet = true; m_steps.push_back(value); return *this; }

    /**
     * <p>A list of steps run by the job flow.</p>
     */
    inline JobFlowDetail& AddSteps(StepDetail&& value) { m_stepsHasBeenSet = true; m_steps.push_back(value); return *this; }

    /**
     * <p>A list of the bootstrap actions run by the job flow.</p>
     */
    inline const Aws::Vector<BootstrapActionDetail>& GetBootstrapActions() const{ return m_bootstrapActions; }

    /**
     * <p>A list of the bootstrap actions run by the job flow.</p>
     */
    inline void SetBootstrapActions(const Aws::Vector<BootstrapActionDetail>& value) { m_bootstrapActionsHasBeenSet = true; m_bootstrapActions = value; }

    /**
     * <p>A list of the bootstrap actions run by the job flow.</p>
     */
    inline void SetBootstrapActions(Aws::Vector<BootstrapActionDetail>&& value) { m_bootstrapActionsHasBeenSet = true; m_bootstrapActions = value; }

    /**
     * <p>A list of the bootstrap actions run by the job flow.</p>
     */
    inline JobFlowDetail& WithBootstrapActions(const Aws::Vector<BootstrapActionDetail>& value) { SetBootstrapActions(value); return *this;}

    /**
     * <p>A list of the bootstrap actions run by the job flow.</p>
     */
    inline JobFlowDetail& WithBootstrapActions(Aws::Vector<BootstrapActionDetail>&& value) { SetBootstrapActions(value); return *this;}

    /**
     * <p>A list of the bootstrap actions run by the job flow.</p>
     */
    inline JobFlowDetail& AddBootstrapActions(const BootstrapActionDetail& value) { m_bootstrapActionsHasBeenSet = true; m_bootstrapActions.push_back(value); return *this; }

    /**
     * <p>A list of the bootstrap actions run by the job flow.</p>
     */
    inline JobFlowDetail& AddBootstrapActions(BootstrapActionDetail&& value) { m_bootstrapActionsHasBeenSet = true; m_bootstrapActions.push_back(value); return *this; }

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
    inline void SetSupportedProducts(const Aws::Vector<Aws::String>& value) { m_supportedProductsHasBeenSet = true; m_supportedProducts = value; }

    /**
     * <p>A list of strings set by third party software when the job flow is launched.
     * If you are not using third party software to manage the job flow this value is
     * empty.</p>
     */
    inline void SetSupportedProducts(Aws::Vector<Aws::String>&& value) { m_supportedProductsHasBeenSet = true; m_supportedProducts = value; }

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
    inline JobFlowDetail& WithSupportedProducts(Aws::Vector<Aws::String>&& value) { SetSupportedProducts(value); return *this;}

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
    inline JobFlowDetail& AddSupportedProducts(Aws::String&& value) { m_supportedProductsHasBeenSet = true; m_supportedProducts.push_back(value); return *this; }

    /**
     * <p>A list of strings set by third party software when the job flow is launched.
     * If you are not using third party software to manage the job flow this value is
     * empty.</p>
     */
    inline JobFlowDetail& AddSupportedProducts(const char* value) { m_supportedProductsHasBeenSet = true; m_supportedProducts.push_back(value); return *this; }

    /**
     * <p>Specifies whether the job flow is visible to all IAM users of the AWS account
     * associated with the job flow. If this value is set to <code>true</code>, all IAM
     * users of that AWS account can view and (if they have the proper policy
     * permissions set) manage the job flow. If it is set to <code>false</code>, only
     * the IAM user that created the job flow can view and manage it. This value can be
     * changed using the <a>SetVisibleToAllUsers</a> action.</p>
     */
    inline bool GetVisibleToAllUsers() const{ return m_visibleToAllUsers; }

    /**
     * <p>Specifies whether the job flow is visible to all IAM users of the AWS account
     * associated with the job flow. If this value is set to <code>true</code>, all IAM
     * users of that AWS account can view and (if they have the proper policy
     * permissions set) manage the job flow. If it is set to <code>false</code>, only
     * the IAM user that created the job flow can view and manage it. This value can be
     * changed using the <a>SetVisibleToAllUsers</a> action.</p>
     */
    inline void SetVisibleToAllUsers(bool value) { m_visibleToAllUsersHasBeenSet = true; m_visibleToAllUsers = value; }

    /**
     * <p>Specifies whether the job flow is visible to all IAM users of the AWS account
     * associated with the job flow. If this value is set to <code>true</code>, all IAM
     * users of that AWS account can view and (if they have the proper policy
     * permissions set) manage the job flow. If it is set to <code>false</code>, only
     * the IAM user that created the job flow can view and manage it. This value can be
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
    inline void SetJobFlowRole(const Aws::String& value) { m_jobFlowRoleHasBeenSet = true; m_jobFlowRole = value; }

    /**
     * <p>The IAM role that was specified when the job flow was launched. The EC2
     * instances of the job flow assume this role.</p>
     */
    inline void SetJobFlowRole(Aws::String&& value) { m_jobFlowRoleHasBeenSet = true; m_jobFlowRole = value; }

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
    inline JobFlowDetail& WithJobFlowRole(Aws::String&& value) { SetJobFlowRole(value); return *this;}

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
    inline void SetServiceRole(const Aws::String& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

    /**
     * <p>The IAM role that will be assumed by the Amazon EMR service to access AWS
     * resources on your behalf.</p>
     */
    inline void SetServiceRole(Aws::String&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = value; }

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
    inline JobFlowDetail& WithServiceRole(Aws::String&& value) { SetServiceRole(value); return *this;}

    /**
     * <p>The IAM role that will be assumed by the Amazon EMR service to access AWS
     * resources on your behalf.</p>
     */
    inline JobFlowDetail& WithServiceRole(const char* value) { SetServiceRole(value); return *this;}

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
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
