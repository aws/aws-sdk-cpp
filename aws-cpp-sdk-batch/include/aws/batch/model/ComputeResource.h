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
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/CRType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/batch/model/LaunchTemplateSpecification.h>
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
   * <p>An object representing an AWS Batch compute resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ComputeResource">AWS
   * API Reference</a></p>
   */
  class AWS_BATCH_API ComputeResource
  {
  public:
    ComputeResource();
    ComputeResource(Aws::Utils::Json::JsonView jsonValue);
    ComputeResource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of compute environment: EC2 or SPOT.</p>
     */
    inline const CRType& GetType() const{ return m_type; }

    /**
     * <p>The type of compute environment: EC2 or SPOT.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of compute environment: EC2 or SPOT.</p>
     */
    inline void SetType(const CRType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of compute environment: EC2 or SPOT.</p>
     */
    inline void SetType(CRType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of compute environment: EC2 or SPOT.</p>
     */
    inline ComputeResource& WithType(const CRType& value) { SetType(value); return *this;}

    /**
     * <p>The type of compute environment: EC2 or SPOT.</p>
     */
    inline ComputeResource& WithType(CRType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The minimum number of EC2 vCPUs that an environment should maintain (even if
     * the compute environment is <code>DISABLED</code>). </p>
     */
    inline int GetMinvCpus() const{ return m_minvCpus; }

    /**
     * <p>The minimum number of EC2 vCPUs that an environment should maintain (even if
     * the compute environment is <code>DISABLED</code>). </p>
     */
    inline bool MinvCpusHasBeenSet() const { return m_minvCpusHasBeenSet; }

    /**
     * <p>The minimum number of EC2 vCPUs that an environment should maintain (even if
     * the compute environment is <code>DISABLED</code>). </p>
     */
    inline void SetMinvCpus(int value) { m_minvCpusHasBeenSet = true; m_minvCpus = value; }

    /**
     * <p>The minimum number of EC2 vCPUs that an environment should maintain (even if
     * the compute environment is <code>DISABLED</code>). </p>
     */
    inline ComputeResource& WithMinvCpus(int value) { SetMinvCpus(value); return *this;}


    /**
     * <p>The maximum number of EC2 vCPUs that an environment can reach. </p>
     */
    inline int GetMaxvCpus() const{ return m_maxvCpus; }

    /**
     * <p>The maximum number of EC2 vCPUs that an environment can reach. </p>
     */
    inline bool MaxvCpusHasBeenSet() const { return m_maxvCpusHasBeenSet; }

    /**
     * <p>The maximum number of EC2 vCPUs that an environment can reach. </p>
     */
    inline void SetMaxvCpus(int value) { m_maxvCpusHasBeenSet = true; m_maxvCpus = value; }

    /**
     * <p>The maximum number of EC2 vCPUs that an environment can reach. </p>
     */
    inline ComputeResource& WithMaxvCpus(int value) { SetMaxvCpus(value); return *this;}


    /**
     * <p>The desired number of EC2 vCPUS in the compute environment. </p>
     */
    inline int GetDesiredvCpus() const{ return m_desiredvCpus; }

    /**
     * <p>The desired number of EC2 vCPUS in the compute environment. </p>
     */
    inline bool DesiredvCpusHasBeenSet() const { return m_desiredvCpusHasBeenSet; }

    /**
     * <p>The desired number of EC2 vCPUS in the compute environment. </p>
     */
    inline void SetDesiredvCpus(int value) { m_desiredvCpusHasBeenSet = true; m_desiredvCpus = value; }

    /**
     * <p>The desired number of EC2 vCPUS in the compute environment. </p>
     */
    inline ComputeResource& WithDesiredvCpus(int value) { SetDesiredvCpus(value); return *this;}


    /**
     * <p>The instances types that may be launched. You can specify instance families
     * to launch any instance type within those families (for example, <code>c4</code>
     * or <code>p3</code>), or you can specify specific sizes within a family (such as
     * <code>c4.8xlarge</code>). You can also choose <code>optimal</code> to pick
     * instance types (from the C, M, and R instance families) on the fly that match
     * the demand of your job queues.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceTypes() const{ return m_instanceTypes; }

    /**
     * <p>The instances types that may be launched. You can specify instance families
     * to launch any instance type within those families (for example, <code>c4</code>
     * or <code>p3</code>), or you can specify specific sizes within a family (such as
     * <code>c4.8xlarge</code>). You can also choose <code>optimal</code> to pick
     * instance types (from the C, M, and R instance families) on the fly that match
     * the demand of your job queues.</p>
     */
    inline bool InstanceTypesHasBeenSet() const { return m_instanceTypesHasBeenSet; }

    /**
     * <p>The instances types that may be launched. You can specify instance families
     * to launch any instance type within those families (for example, <code>c4</code>
     * or <code>p3</code>), or you can specify specific sizes within a family (such as
     * <code>c4.8xlarge</code>). You can also choose <code>optimal</code> to pick
     * instance types (from the C, M, and R instance families) on the fly that match
     * the demand of your job queues.</p>
     */
    inline void SetInstanceTypes(const Aws::Vector<Aws::String>& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = value; }

    /**
     * <p>The instances types that may be launched. You can specify instance families
     * to launch any instance type within those families (for example, <code>c4</code>
     * or <code>p3</code>), or you can specify specific sizes within a family (such as
     * <code>c4.8xlarge</code>). You can also choose <code>optimal</code> to pick
     * instance types (from the C, M, and R instance families) on the fly that match
     * the demand of your job queues.</p>
     */
    inline void SetInstanceTypes(Aws::Vector<Aws::String>&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = std::move(value); }

    /**
     * <p>The instances types that may be launched. You can specify instance families
     * to launch any instance type within those families (for example, <code>c4</code>
     * or <code>p3</code>), or you can specify specific sizes within a family (such as
     * <code>c4.8xlarge</code>). You can also choose <code>optimal</code> to pick
     * instance types (from the C, M, and R instance families) on the fly that match
     * the demand of your job queues.</p>
     */
    inline ComputeResource& WithInstanceTypes(const Aws::Vector<Aws::String>& value) { SetInstanceTypes(value); return *this;}

    /**
     * <p>The instances types that may be launched. You can specify instance families
     * to launch any instance type within those families (for example, <code>c4</code>
     * or <code>p3</code>), or you can specify specific sizes within a family (such as
     * <code>c4.8xlarge</code>). You can also choose <code>optimal</code> to pick
     * instance types (from the C, M, and R instance families) on the fly that match
     * the demand of your job queues.</p>
     */
    inline ComputeResource& WithInstanceTypes(Aws::Vector<Aws::String>&& value) { SetInstanceTypes(std::move(value)); return *this;}

    /**
     * <p>The instances types that may be launched. You can specify instance families
     * to launch any instance type within those families (for example, <code>c4</code>
     * or <code>p3</code>), or you can specify specific sizes within a family (such as
     * <code>c4.8xlarge</code>). You can also choose <code>optimal</code> to pick
     * instance types (from the C, M, and R instance families) on the fly that match
     * the demand of your job queues.</p>
     */
    inline ComputeResource& AddInstanceTypes(const Aws::String& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(value); return *this; }

    /**
     * <p>The instances types that may be launched. You can specify instance families
     * to launch any instance type within those families (for example, <code>c4</code>
     * or <code>p3</code>), or you can specify specific sizes within a family (such as
     * <code>c4.8xlarge</code>). You can also choose <code>optimal</code> to pick
     * instance types (from the C, M, and R instance families) on the fly that match
     * the demand of your job queues.</p>
     */
    inline ComputeResource& AddInstanceTypes(Aws::String&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The instances types that may be launched. You can specify instance families
     * to launch any instance type within those families (for example, <code>c4</code>
     * or <code>p3</code>), or you can specify specific sizes within a family (such as
     * <code>c4.8xlarge</code>). You can also choose <code>optimal</code> to pick
     * instance types (from the C, M, and R instance families) on the fly that match
     * the demand of your job queues.</p>
     */
    inline ComputeResource& AddInstanceTypes(const char* value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(value); return *this; }


    /**
     * <p>The Amazon Machine Image (AMI) ID used for instances launched in the compute
     * environment.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>The Amazon Machine Image (AMI) ID used for instances launched in the compute
     * environment.</p>
     */
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }

    /**
     * <p>The Amazon Machine Image (AMI) ID used for instances launched in the compute
     * environment.</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageIdHasBeenSet = true; m_imageId = value; }

    /**
     * <p>The Amazon Machine Image (AMI) ID used for instances launched in the compute
     * environment.</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageIdHasBeenSet = true; m_imageId = std::move(value); }

    /**
     * <p>The Amazon Machine Image (AMI) ID used for instances launched in the compute
     * environment.</p>
     */
    inline void SetImageId(const char* value) { m_imageIdHasBeenSet = true; m_imageId.assign(value); }

    /**
     * <p>The Amazon Machine Image (AMI) ID used for instances launched in the compute
     * environment.</p>
     */
    inline ComputeResource& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The Amazon Machine Image (AMI) ID used for instances launched in the compute
     * environment.</p>
     */
    inline ComputeResource& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Machine Image (AMI) ID used for instances launched in the compute
     * environment.</p>
     */
    inline ComputeResource& WithImageId(const char* value) { SetImageId(value); return *this;}


    /**
     * <p>The VPC subnets into which the compute resources are launched. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const{ return m_subnets; }

    /**
     * <p>The VPC subnets into which the compute resources are launched. </p>
     */
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }

    /**
     * <p>The VPC subnets into which the compute resources are launched. </p>
     */
    inline void SetSubnets(const Aws::Vector<Aws::String>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }

    /**
     * <p>The VPC subnets into which the compute resources are launched. </p>
     */
    inline void SetSubnets(Aws::Vector<Aws::String>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }

    /**
     * <p>The VPC subnets into which the compute resources are launched. </p>
     */
    inline ComputeResource& WithSubnets(const Aws::Vector<Aws::String>& value) { SetSubnets(value); return *this;}

    /**
     * <p>The VPC subnets into which the compute resources are launched. </p>
     */
    inline ComputeResource& WithSubnets(Aws::Vector<Aws::String>&& value) { SetSubnets(std::move(value)); return *this;}

    /**
     * <p>The VPC subnets into which the compute resources are launched. </p>
     */
    inline ComputeResource& AddSubnets(const Aws::String& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

    /**
     * <p>The VPC subnets into which the compute resources are launched. </p>
     */
    inline ComputeResource& AddSubnets(Aws::String&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }

    /**
     * <p>The VPC subnets into which the compute resources are launched. </p>
     */
    inline ComputeResource& AddSubnets(const char* value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }


    /**
     * <p>The EC2 security group that is associated with instances launched in the
     * compute environment. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The EC2 security group that is associated with instances launched in the
     * compute environment. </p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The EC2 security group that is associated with instances launched in the
     * compute environment. </p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The EC2 security group that is associated with instances launched in the
     * compute environment. </p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The EC2 security group that is associated with instances launched in the
     * compute environment. </p>
     */
    inline ComputeResource& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The EC2 security group that is associated with instances launched in the
     * compute environment. </p>
     */
    inline ComputeResource& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The EC2 security group that is associated with instances launched in the
     * compute environment. </p>
     */
    inline ComputeResource& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The EC2 security group that is associated with instances launched in the
     * compute environment. </p>
     */
    inline ComputeResource& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The EC2 security group that is associated with instances launched in the
     * compute environment. </p>
     */
    inline ComputeResource& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>The EC2 key pair that is used for instances launched in the compute
     * environment.</p>
     */
    inline const Aws::String& GetEc2KeyPair() const{ return m_ec2KeyPair; }

    /**
     * <p>The EC2 key pair that is used for instances launched in the compute
     * environment.</p>
     */
    inline bool Ec2KeyPairHasBeenSet() const { return m_ec2KeyPairHasBeenSet; }

    /**
     * <p>The EC2 key pair that is used for instances launched in the compute
     * environment.</p>
     */
    inline void SetEc2KeyPair(const Aws::String& value) { m_ec2KeyPairHasBeenSet = true; m_ec2KeyPair = value; }

    /**
     * <p>The EC2 key pair that is used for instances launched in the compute
     * environment.</p>
     */
    inline void SetEc2KeyPair(Aws::String&& value) { m_ec2KeyPairHasBeenSet = true; m_ec2KeyPair = std::move(value); }

    /**
     * <p>The EC2 key pair that is used for instances launched in the compute
     * environment.</p>
     */
    inline void SetEc2KeyPair(const char* value) { m_ec2KeyPairHasBeenSet = true; m_ec2KeyPair.assign(value); }

    /**
     * <p>The EC2 key pair that is used for instances launched in the compute
     * environment.</p>
     */
    inline ComputeResource& WithEc2KeyPair(const Aws::String& value) { SetEc2KeyPair(value); return *this;}

    /**
     * <p>The EC2 key pair that is used for instances launched in the compute
     * environment.</p>
     */
    inline ComputeResource& WithEc2KeyPair(Aws::String&& value) { SetEc2KeyPair(std::move(value)); return *this;}

    /**
     * <p>The EC2 key pair that is used for instances launched in the compute
     * environment.</p>
     */
    inline ComputeResource& WithEc2KeyPair(const char* value) { SetEc2KeyPair(value); return *this;}


    /**
     * <p>The Amazon ECS instance profile applied to Amazon EC2 instances in a compute
     * environment. You can specify the short name or full Amazon Resource Name (ARN)
     * of an instance profile. For example, <code> <i>ecsInstanceRole</i> </code> or
     * <code>arn:aws:iam::<i>&lt;aws_account_id&gt;</i>:instance-profile/<i>ecsInstanceRole</i>
     * </code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/instance_IAM_role.html">Amazon
     * ECS Instance Role</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline const Aws::String& GetInstanceRole() const{ return m_instanceRole; }

    /**
     * <p>The Amazon ECS instance profile applied to Amazon EC2 instances in a compute
     * environment. You can specify the short name or full Amazon Resource Name (ARN)
     * of an instance profile. For example, <code> <i>ecsInstanceRole</i> </code> or
     * <code>arn:aws:iam::<i>&lt;aws_account_id&gt;</i>:instance-profile/<i>ecsInstanceRole</i>
     * </code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/instance_IAM_role.html">Amazon
     * ECS Instance Role</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline bool InstanceRoleHasBeenSet() const { return m_instanceRoleHasBeenSet; }

    /**
     * <p>The Amazon ECS instance profile applied to Amazon EC2 instances in a compute
     * environment. You can specify the short name or full Amazon Resource Name (ARN)
     * of an instance profile. For example, <code> <i>ecsInstanceRole</i> </code> or
     * <code>arn:aws:iam::<i>&lt;aws_account_id&gt;</i>:instance-profile/<i>ecsInstanceRole</i>
     * </code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/instance_IAM_role.html">Amazon
     * ECS Instance Role</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline void SetInstanceRole(const Aws::String& value) { m_instanceRoleHasBeenSet = true; m_instanceRole = value; }

    /**
     * <p>The Amazon ECS instance profile applied to Amazon EC2 instances in a compute
     * environment. You can specify the short name or full Amazon Resource Name (ARN)
     * of an instance profile. For example, <code> <i>ecsInstanceRole</i> </code> or
     * <code>arn:aws:iam::<i>&lt;aws_account_id&gt;</i>:instance-profile/<i>ecsInstanceRole</i>
     * </code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/instance_IAM_role.html">Amazon
     * ECS Instance Role</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline void SetInstanceRole(Aws::String&& value) { m_instanceRoleHasBeenSet = true; m_instanceRole = std::move(value); }

    /**
     * <p>The Amazon ECS instance profile applied to Amazon EC2 instances in a compute
     * environment. You can specify the short name or full Amazon Resource Name (ARN)
     * of an instance profile. For example, <code> <i>ecsInstanceRole</i> </code> or
     * <code>arn:aws:iam::<i>&lt;aws_account_id&gt;</i>:instance-profile/<i>ecsInstanceRole</i>
     * </code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/instance_IAM_role.html">Amazon
     * ECS Instance Role</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline void SetInstanceRole(const char* value) { m_instanceRoleHasBeenSet = true; m_instanceRole.assign(value); }

    /**
     * <p>The Amazon ECS instance profile applied to Amazon EC2 instances in a compute
     * environment. You can specify the short name or full Amazon Resource Name (ARN)
     * of an instance profile. For example, <code> <i>ecsInstanceRole</i> </code> or
     * <code>arn:aws:iam::<i>&lt;aws_account_id&gt;</i>:instance-profile/<i>ecsInstanceRole</i>
     * </code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/instance_IAM_role.html">Amazon
     * ECS Instance Role</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline ComputeResource& WithInstanceRole(const Aws::String& value) { SetInstanceRole(value); return *this;}

    /**
     * <p>The Amazon ECS instance profile applied to Amazon EC2 instances in a compute
     * environment. You can specify the short name or full Amazon Resource Name (ARN)
     * of an instance profile. For example, <code> <i>ecsInstanceRole</i> </code> or
     * <code>arn:aws:iam::<i>&lt;aws_account_id&gt;</i>:instance-profile/<i>ecsInstanceRole</i>
     * </code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/instance_IAM_role.html">Amazon
     * ECS Instance Role</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline ComputeResource& WithInstanceRole(Aws::String&& value) { SetInstanceRole(std::move(value)); return *this;}

    /**
     * <p>The Amazon ECS instance profile applied to Amazon EC2 instances in a compute
     * environment. You can specify the short name or full Amazon Resource Name (ARN)
     * of an instance profile. For example, <code> <i>ecsInstanceRole</i> </code> or
     * <code>arn:aws:iam::<i>&lt;aws_account_id&gt;</i>:instance-profile/<i>ecsInstanceRole</i>
     * </code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/instance_IAM_role.html">Amazon
     * ECS Instance Role</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline ComputeResource& WithInstanceRole(const char* value) { SetInstanceRole(value); return *this;}


    /**
     * <p>Key-value pair tags to be applied to resources that are launched in the
     * compute environment. For AWS Batch, these take the form of "String1": "String2",
     * where String1 is the tag key and String2 is the tag value—for example, { "Name":
     * "AWS Batch Instance - C4OnDemand" }.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Key-value pair tags to be applied to resources that are launched in the
     * compute environment. For AWS Batch, these take the form of "String1": "String2",
     * where String1 is the tag key and String2 is the tag value—for example, { "Name":
     * "AWS Batch Instance - C4OnDemand" }.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Key-value pair tags to be applied to resources that are launched in the
     * compute environment. For AWS Batch, these take the form of "String1": "String2",
     * where String1 is the tag key and String2 is the tag value—for example, { "Name":
     * "AWS Batch Instance - C4OnDemand" }.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Key-value pair tags to be applied to resources that are launched in the
     * compute environment. For AWS Batch, these take the form of "String1": "String2",
     * where String1 is the tag key and String2 is the tag value—for example, { "Name":
     * "AWS Batch Instance - C4OnDemand" }.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Key-value pair tags to be applied to resources that are launched in the
     * compute environment. For AWS Batch, these take the form of "String1": "String2",
     * where String1 is the tag key and String2 is the tag value—for example, { "Name":
     * "AWS Batch Instance - C4OnDemand" }.</p>
     */
    inline ComputeResource& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Key-value pair tags to be applied to resources that are launched in the
     * compute environment. For AWS Batch, these take the form of "String1": "String2",
     * where String1 is the tag key and String2 is the tag value—for example, { "Name":
     * "AWS Batch Instance - C4OnDemand" }.</p>
     */
    inline ComputeResource& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Key-value pair tags to be applied to resources that are launched in the
     * compute environment. For AWS Batch, these take the form of "String1": "String2",
     * where String1 is the tag key and String2 is the tag value—for example, { "Name":
     * "AWS Batch Instance - C4OnDemand" }.</p>
     */
    inline ComputeResource& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Key-value pair tags to be applied to resources that are launched in the
     * compute environment. For AWS Batch, these take the form of "String1": "String2",
     * where String1 is the tag key and String2 is the tag value—for example, { "Name":
     * "AWS Batch Instance - C4OnDemand" }.</p>
     */
    inline ComputeResource& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Key-value pair tags to be applied to resources that are launched in the
     * compute environment. For AWS Batch, these take the form of "String1": "String2",
     * where String1 is the tag key and String2 is the tag value—for example, { "Name":
     * "AWS Batch Instance - C4OnDemand" }.</p>
     */
    inline ComputeResource& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Key-value pair tags to be applied to resources that are launched in the
     * compute environment. For AWS Batch, these take the form of "String1": "String2",
     * where String1 is the tag key and String2 is the tag value—for example, { "Name":
     * "AWS Batch Instance - C4OnDemand" }.</p>
     */
    inline ComputeResource& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Key-value pair tags to be applied to resources that are launched in the
     * compute environment. For AWS Batch, these take the form of "String1": "String2",
     * where String1 is the tag key and String2 is the tag value—for example, { "Name":
     * "AWS Batch Instance - C4OnDemand" }.</p>
     */
    inline ComputeResource& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Key-value pair tags to be applied to resources that are launched in the
     * compute environment. For AWS Batch, these take the form of "String1": "String2",
     * where String1 is the tag key and String2 is the tag value—for example, { "Name":
     * "AWS Batch Instance - C4OnDemand" }.</p>
     */
    inline ComputeResource& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Key-value pair tags to be applied to resources that are launched in the
     * compute environment. For AWS Batch, these take the form of "String1": "String2",
     * where String1 is the tag key and String2 is the tag value—for example, { "Name":
     * "AWS Batch Instance - C4OnDemand" }.</p>
     */
    inline ComputeResource& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The Amazon EC2 placement group to associate with your compute resources. If
     * you intend to submit multi-node parallel jobs to your compute environment, you
     * should consider creating a cluster placement group and associate it with your
     * compute resources. This keeps your multi-node parallel job on a logical grouping
     * of instances within a single Availability Zone with high network flow potential.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
     * Groups</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline const Aws::String& GetPlacementGroup() const{ return m_placementGroup; }

    /**
     * <p>The Amazon EC2 placement group to associate with your compute resources. If
     * you intend to submit multi-node parallel jobs to your compute environment, you
     * should consider creating a cluster placement group and associate it with your
     * compute resources. This keeps your multi-node parallel job on a logical grouping
     * of instances within a single Availability Zone with high network flow potential.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
     * Groups</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline bool PlacementGroupHasBeenSet() const { return m_placementGroupHasBeenSet; }

    /**
     * <p>The Amazon EC2 placement group to associate with your compute resources. If
     * you intend to submit multi-node parallel jobs to your compute environment, you
     * should consider creating a cluster placement group and associate it with your
     * compute resources. This keeps your multi-node parallel job on a logical grouping
     * of instances within a single Availability Zone with high network flow potential.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
     * Groups</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline void SetPlacementGroup(const Aws::String& value) { m_placementGroupHasBeenSet = true; m_placementGroup = value; }

    /**
     * <p>The Amazon EC2 placement group to associate with your compute resources. If
     * you intend to submit multi-node parallel jobs to your compute environment, you
     * should consider creating a cluster placement group and associate it with your
     * compute resources. This keeps your multi-node parallel job on a logical grouping
     * of instances within a single Availability Zone with high network flow potential.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
     * Groups</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline void SetPlacementGroup(Aws::String&& value) { m_placementGroupHasBeenSet = true; m_placementGroup = std::move(value); }

    /**
     * <p>The Amazon EC2 placement group to associate with your compute resources. If
     * you intend to submit multi-node parallel jobs to your compute environment, you
     * should consider creating a cluster placement group and associate it with your
     * compute resources. This keeps your multi-node parallel job on a logical grouping
     * of instances within a single Availability Zone with high network flow potential.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
     * Groups</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline void SetPlacementGroup(const char* value) { m_placementGroupHasBeenSet = true; m_placementGroup.assign(value); }

    /**
     * <p>The Amazon EC2 placement group to associate with your compute resources. If
     * you intend to submit multi-node parallel jobs to your compute environment, you
     * should consider creating a cluster placement group and associate it with your
     * compute resources. This keeps your multi-node parallel job on a logical grouping
     * of instances within a single Availability Zone with high network flow potential.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
     * Groups</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline ComputeResource& WithPlacementGroup(const Aws::String& value) { SetPlacementGroup(value); return *this;}

    /**
     * <p>The Amazon EC2 placement group to associate with your compute resources. If
     * you intend to submit multi-node parallel jobs to your compute environment, you
     * should consider creating a cluster placement group and associate it with your
     * compute resources. This keeps your multi-node parallel job on a logical grouping
     * of instances within a single Availability Zone with high network flow potential.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
     * Groups</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline ComputeResource& WithPlacementGroup(Aws::String&& value) { SetPlacementGroup(std::move(value)); return *this;}

    /**
     * <p>The Amazon EC2 placement group to associate with your compute resources. If
     * you intend to submit multi-node parallel jobs to your compute environment, you
     * should consider creating a cluster placement group and associate it with your
     * compute resources. This keeps your multi-node parallel job on a logical grouping
     * of instances within a single Availability Zone with high network flow potential.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/placement-groups.html">Placement
     * Groups</a> in the <i>Amazon EC2 User Guide for Linux Instances</i>.</p>
     */
    inline ComputeResource& WithPlacementGroup(const char* value) { SetPlacementGroup(value); return *this;}


    /**
     * <p>The maximum percentage that a Spot Instance price can be when compared with
     * the On-Demand price for that instance type before instances are launched. For
     * example, if your maximum percentage is 20%, then the Spot price must be below
     * 20% of the current On-Demand price for that EC2 instance. You always pay the
     * lowest (market) price and never more than your maximum percentage. If you leave
     * this field empty, the default value is 100% of the On-Demand price.</p>
     */
    inline int GetBidPercentage() const{ return m_bidPercentage; }

    /**
     * <p>The maximum percentage that a Spot Instance price can be when compared with
     * the On-Demand price for that instance type before instances are launched. For
     * example, if your maximum percentage is 20%, then the Spot price must be below
     * 20% of the current On-Demand price for that EC2 instance. You always pay the
     * lowest (market) price and never more than your maximum percentage. If you leave
     * this field empty, the default value is 100% of the On-Demand price.</p>
     */
    inline bool BidPercentageHasBeenSet() const { return m_bidPercentageHasBeenSet; }

    /**
     * <p>The maximum percentage that a Spot Instance price can be when compared with
     * the On-Demand price for that instance type before instances are launched. For
     * example, if your maximum percentage is 20%, then the Spot price must be below
     * 20% of the current On-Demand price for that EC2 instance. You always pay the
     * lowest (market) price and never more than your maximum percentage. If you leave
     * this field empty, the default value is 100% of the On-Demand price.</p>
     */
    inline void SetBidPercentage(int value) { m_bidPercentageHasBeenSet = true; m_bidPercentage = value; }

    /**
     * <p>The maximum percentage that a Spot Instance price can be when compared with
     * the On-Demand price for that instance type before instances are launched. For
     * example, if your maximum percentage is 20%, then the Spot price must be below
     * 20% of the current On-Demand price for that EC2 instance. You always pay the
     * lowest (market) price and never more than your maximum percentage. If you leave
     * this field empty, the default value is 100% of the On-Demand price.</p>
     */
    inline ComputeResource& WithBidPercentage(int value) { SetBidPercentage(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EC2 Spot Fleet IAM role applied
     * to a <code>SPOT</code> compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/spot_fleet_IAM_role.html">Amazon
     * EC2 Spot Fleet Role</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline const Aws::String& GetSpotIamFleetRole() const{ return m_spotIamFleetRole; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EC2 Spot Fleet IAM role applied
     * to a <code>SPOT</code> compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/spot_fleet_IAM_role.html">Amazon
     * EC2 Spot Fleet Role</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline bool SpotIamFleetRoleHasBeenSet() const { return m_spotIamFleetRoleHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EC2 Spot Fleet IAM role applied
     * to a <code>SPOT</code> compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/spot_fleet_IAM_role.html">Amazon
     * EC2 Spot Fleet Role</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline void SetSpotIamFleetRole(const Aws::String& value) { m_spotIamFleetRoleHasBeenSet = true; m_spotIamFleetRole = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EC2 Spot Fleet IAM role applied
     * to a <code>SPOT</code> compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/spot_fleet_IAM_role.html">Amazon
     * EC2 Spot Fleet Role</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline void SetSpotIamFleetRole(Aws::String&& value) { m_spotIamFleetRoleHasBeenSet = true; m_spotIamFleetRole = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EC2 Spot Fleet IAM role applied
     * to a <code>SPOT</code> compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/spot_fleet_IAM_role.html">Amazon
     * EC2 Spot Fleet Role</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline void SetSpotIamFleetRole(const char* value) { m_spotIamFleetRoleHasBeenSet = true; m_spotIamFleetRole.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EC2 Spot Fleet IAM role applied
     * to a <code>SPOT</code> compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/spot_fleet_IAM_role.html">Amazon
     * EC2 Spot Fleet Role</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline ComputeResource& WithSpotIamFleetRole(const Aws::String& value) { SetSpotIamFleetRole(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EC2 Spot Fleet IAM role applied
     * to a <code>SPOT</code> compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/spot_fleet_IAM_role.html">Amazon
     * EC2 Spot Fleet Role</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline ComputeResource& WithSpotIamFleetRole(Aws::String&& value) { SetSpotIamFleetRole(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EC2 Spot Fleet IAM role applied
     * to a <code>SPOT</code> compute environment. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/spot_fleet_IAM_role.html">Amazon
     * EC2 Spot Fleet Role</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline ComputeResource& WithSpotIamFleetRole(const char* value) { SetSpotIamFleetRole(value); return *this;}


    /**
     * <p>The launch template to use for your compute resources. Any other compute
     * resource parameters that you specify in a <a>CreateComputeEnvironment</a> API
     * operation override the same parameters in the launch template. You must specify
     * either the launch template ID or launch template name in the request, but not
     * both. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/launch-templates.html">Launch
     * Template Support</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline const LaunchTemplateSpecification& GetLaunchTemplate() const{ return m_launchTemplate; }

    /**
     * <p>The launch template to use for your compute resources. Any other compute
     * resource parameters that you specify in a <a>CreateComputeEnvironment</a> API
     * operation override the same parameters in the launch template. You must specify
     * either the launch template ID or launch template name in the request, but not
     * both. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/launch-templates.html">Launch
     * Template Support</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline bool LaunchTemplateHasBeenSet() const { return m_launchTemplateHasBeenSet; }

    /**
     * <p>The launch template to use for your compute resources. Any other compute
     * resource parameters that you specify in a <a>CreateComputeEnvironment</a> API
     * operation override the same parameters in the launch template. You must specify
     * either the launch template ID or launch template name in the request, but not
     * both. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/launch-templates.html">Launch
     * Template Support</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline void SetLaunchTemplate(const LaunchTemplateSpecification& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = value; }

    /**
     * <p>The launch template to use for your compute resources. Any other compute
     * resource parameters that you specify in a <a>CreateComputeEnvironment</a> API
     * operation override the same parameters in the launch template. You must specify
     * either the launch template ID or launch template name in the request, but not
     * both. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/launch-templates.html">Launch
     * Template Support</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline void SetLaunchTemplate(LaunchTemplateSpecification&& value) { m_launchTemplateHasBeenSet = true; m_launchTemplate = std::move(value); }

    /**
     * <p>The launch template to use for your compute resources. Any other compute
     * resource parameters that you specify in a <a>CreateComputeEnvironment</a> API
     * operation override the same parameters in the launch template. You must specify
     * either the launch template ID or launch template name in the request, but not
     * both. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/launch-templates.html">Launch
     * Template Support</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline ComputeResource& WithLaunchTemplate(const LaunchTemplateSpecification& value) { SetLaunchTemplate(value); return *this;}

    /**
     * <p>The launch template to use for your compute resources. Any other compute
     * resource parameters that you specify in a <a>CreateComputeEnvironment</a> API
     * operation override the same parameters in the launch template. You must specify
     * either the launch template ID or launch template name in the request, but not
     * both. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/launch-templates.html">Launch
     * Template Support</a> in the <i>AWS Batch User Guide</i>.</p>
     */
    inline ComputeResource& WithLaunchTemplate(LaunchTemplateSpecification&& value) { SetLaunchTemplate(std::move(value)); return *this;}

  private:

    CRType m_type;
    bool m_typeHasBeenSet;

    int m_minvCpus;
    bool m_minvCpusHasBeenSet;

    int m_maxvCpus;
    bool m_maxvCpusHasBeenSet;

    int m_desiredvCpus;
    bool m_desiredvCpusHasBeenSet;

    Aws::Vector<Aws::String> m_instanceTypes;
    bool m_instanceTypesHasBeenSet;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet;

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet;

    Aws::String m_ec2KeyPair;
    bool m_ec2KeyPairHasBeenSet;

    Aws::String m_instanceRole;
    bool m_instanceRoleHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_placementGroup;
    bool m_placementGroupHasBeenSet;

    int m_bidPercentage;
    bool m_bidPercentageHasBeenSet;

    Aws::String m_spotIamFleetRole;
    bool m_spotIamFleetRoleHasBeenSet;

    LaunchTemplateSpecification m_launchTemplate;
    bool m_launchTemplateHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
