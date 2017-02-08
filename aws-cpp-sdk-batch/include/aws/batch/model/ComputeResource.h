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
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/CRType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
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
    ComputeResource(const Aws::Utils::Json::JsonValue& jsonValue);
    ComputeResource& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The type of compute environment.</p>
     */
    inline const CRType& GetType() const{ return m_type; }

    /**
     * <p>The type of compute environment.</p>
     */
    inline void SetType(const CRType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of compute environment.</p>
     */
    inline void SetType(CRType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of compute environment.</p>
     */
    inline ComputeResource& WithType(const CRType& value) { SetType(value); return *this;}

    /**
     * <p>The type of compute environment.</p>
     */
    inline ComputeResource& WithType(CRType&& value) { SetType(value); return *this;}

    /**
     * <p>The minimum number of EC2 vCPUs that an environment should maintain. </p>
     */
    inline int GetMinvCpus() const{ return m_minvCpus; }

    /**
     * <p>The minimum number of EC2 vCPUs that an environment should maintain. </p>
     */
    inline void SetMinvCpus(int value) { m_minvCpusHasBeenSet = true; m_minvCpus = value; }

    /**
     * <p>The minimum number of EC2 vCPUs that an environment should maintain. </p>
     */
    inline ComputeResource& WithMinvCpus(int value) { SetMinvCpus(value); return *this;}

    /**
     * <p>The maximum number of EC2 vCPUs that an environment can reach. </p>
     */
    inline int GetMaxvCpus() const{ return m_maxvCpus; }

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
    inline void SetDesiredvCpus(int value) { m_desiredvCpusHasBeenSet = true; m_desiredvCpus = value; }

    /**
     * <p>The desired number of EC2 vCPUS in the compute environment. </p>
     */
    inline ComputeResource& WithDesiredvCpus(int value) { SetDesiredvCpus(value); return *this;}

    /**
     * <p>The instances types that may launched.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceTypes() const{ return m_instanceTypes; }

    /**
     * <p>The instances types that may launched.</p>
     */
    inline void SetInstanceTypes(const Aws::Vector<Aws::String>& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = value; }

    /**
     * <p>The instances types that may launched.</p>
     */
    inline void SetInstanceTypes(Aws::Vector<Aws::String>&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes = value; }

    /**
     * <p>The instances types that may launched.</p>
     */
    inline ComputeResource& WithInstanceTypes(const Aws::Vector<Aws::String>& value) { SetInstanceTypes(value); return *this;}

    /**
     * <p>The instances types that may launched.</p>
     */
    inline ComputeResource& WithInstanceTypes(Aws::Vector<Aws::String>&& value) { SetInstanceTypes(value); return *this;}

    /**
     * <p>The instances types that may launched.</p>
     */
    inline ComputeResource& AddInstanceTypes(const Aws::String& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(value); return *this; }

    /**
     * <p>The instances types that may launched.</p>
     */
    inline ComputeResource& AddInstanceTypes(Aws::String&& value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(value); return *this; }

    /**
     * <p>The instances types that may launched.</p>
     */
    inline ComputeResource& AddInstanceTypes(const char* value) { m_instanceTypesHasBeenSet = true; m_instanceTypes.push_back(value); return *this; }

    /**
     * <p>The VPC subnets into which the compute resources are launched. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const{ return m_subnets; }

    /**
     * <p>The VPC subnets into which the compute resources are launched. </p>
     */
    inline void SetSubnets(const Aws::Vector<Aws::String>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }

    /**
     * <p>The VPC subnets into which the compute resources are launched. </p>
     */
    inline void SetSubnets(Aws::Vector<Aws::String>&& value) { m_subnetsHasBeenSet = true; m_subnets = value; }

    /**
     * <p>The VPC subnets into which the compute resources are launched. </p>
     */
    inline ComputeResource& WithSubnets(const Aws::Vector<Aws::String>& value) { SetSubnets(value); return *this;}

    /**
     * <p>The VPC subnets into which the compute resources are launched. </p>
     */
    inline ComputeResource& WithSubnets(Aws::Vector<Aws::String>&& value) { SetSubnets(value); return *this;}

    /**
     * <p>The VPC subnets into which the compute resources are launched. </p>
     */
    inline ComputeResource& AddSubnets(const Aws::String& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

    /**
     * <p>The VPC subnets into which the compute resources are launched. </p>
     */
    inline ComputeResource& AddSubnets(Aws::String&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

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
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The EC2 security group that is associated with instances launched in the
     * compute environment. </p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The EC2 security group that is associated with instances launched in the
     * compute environment. </p>
     */
    inline ComputeResource& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The EC2 security group that is associated with instances launched in the
     * compute environment. </p>
     */
    inline ComputeResource& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The EC2 security group that is associated with instances launched in the
     * compute environment. </p>
     */
    inline ComputeResource& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The EC2 security group that is associated with instances launched in the
     * compute environment. </p>
     */
    inline ComputeResource& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

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
    inline void SetEc2KeyPair(const Aws::String& value) { m_ec2KeyPairHasBeenSet = true; m_ec2KeyPair = value; }

    /**
     * <p>The EC2 key pair that is used for instances launched in the compute
     * environment.</p>
     */
    inline void SetEc2KeyPair(Aws::String&& value) { m_ec2KeyPairHasBeenSet = true; m_ec2KeyPair = value; }

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
    inline ComputeResource& WithEc2KeyPair(Aws::String&& value) { SetEc2KeyPair(value); return *this;}

    /**
     * <p>The EC2 key pair that is used for instances launched in the compute
     * environment.</p>
     */
    inline ComputeResource& WithEc2KeyPair(const char* value) { SetEc2KeyPair(value); return *this;}

    /**
     * <p>The Amazon ECS instance role applied to Amazon EC2 instances in a compute
     * environment.</p>
     */
    inline const Aws::String& GetInstanceRole() const{ return m_instanceRole; }

    /**
     * <p>The Amazon ECS instance role applied to Amazon EC2 instances in a compute
     * environment.</p>
     */
    inline void SetInstanceRole(const Aws::String& value) { m_instanceRoleHasBeenSet = true; m_instanceRole = value; }

    /**
     * <p>The Amazon ECS instance role applied to Amazon EC2 instances in a compute
     * environment.</p>
     */
    inline void SetInstanceRole(Aws::String&& value) { m_instanceRoleHasBeenSet = true; m_instanceRole = value; }

    /**
     * <p>The Amazon ECS instance role applied to Amazon EC2 instances in a compute
     * environment.</p>
     */
    inline void SetInstanceRole(const char* value) { m_instanceRoleHasBeenSet = true; m_instanceRole.assign(value); }

    /**
     * <p>The Amazon ECS instance role applied to Amazon EC2 instances in a compute
     * environment.</p>
     */
    inline ComputeResource& WithInstanceRole(const Aws::String& value) { SetInstanceRole(value); return *this;}

    /**
     * <p>The Amazon ECS instance role applied to Amazon EC2 instances in a compute
     * environment.</p>
     */
    inline ComputeResource& WithInstanceRole(Aws::String&& value) { SetInstanceRole(value); return *this;}

    /**
     * <p>The Amazon ECS instance role applied to Amazon EC2 instances in a compute
     * environment.</p>
     */
    inline ComputeResource& WithInstanceRole(const char* value) { SetInstanceRole(value); return *this;}

    /**
     * <p>Key-value pair tags to be applied to resources that are launched in the
     * compute environment. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Key-value pair tags to be applied to resources that are launched in the
     * compute environment. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Key-value pair tags to be applied to resources that are launched in the
     * compute environment. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Key-value pair tags to be applied to resources that are launched in the
     * compute environment. </p>
     */
    inline ComputeResource& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Key-value pair tags to be applied to resources that are launched in the
     * compute environment. </p>
     */
    inline ComputeResource& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(value); return *this;}

    /**
     * <p>Key-value pair tags to be applied to resources that are launched in the
     * compute environment. </p>
     */
    inline ComputeResource& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags[key] = value; return *this; }

    /**
     * <p>Key-value pair tags to be applied to resources that are launched in the
     * compute environment. </p>
     */
    inline ComputeResource& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags[key] = value; return *this; }

    /**
     * <p>Key-value pair tags to be applied to resources that are launched in the
     * compute environment. </p>
     */
    inline ComputeResource& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags[key] = value; return *this; }

    /**
     * <p>Key-value pair tags to be applied to resources that are launched in the
     * compute environment. </p>
     */
    inline ComputeResource& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags[key] = value; return *this; }

    /**
     * <p>Key-value pair tags to be applied to resources that are launched in the
     * compute environment. </p>
     */
    inline ComputeResource& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags[key] = value; return *this; }

    /**
     * <p>Key-value pair tags to be applied to resources that are launched in the
     * compute environment. </p>
     */
    inline ComputeResource& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags[key] = value; return *this; }

    /**
     * <p>Key-value pair tags to be applied to resources that are launched in the
     * compute environment. </p>
     */
    inline ComputeResource& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags[key] = value; return *this; }

    /**
     * <p>The minimum percentage that a Spot Instance price must be when compared with
     * the On-Demand price for that instance type before instances are launched. For
     * example, if your bid percentage is 20%, then the Spot price must be below 20% of
     * the current On-Demand price for that EC2 instance.</p>
     */
    inline int GetBidPercentage() const{ return m_bidPercentage; }

    /**
     * <p>The minimum percentage that a Spot Instance price must be when compared with
     * the On-Demand price for that instance type before instances are launched. For
     * example, if your bid percentage is 20%, then the Spot price must be below 20% of
     * the current On-Demand price for that EC2 instance.</p>
     */
    inline void SetBidPercentage(int value) { m_bidPercentageHasBeenSet = true; m_bidPercentage = value; }

    /**
     * <p>The minimum percentage that a Spot Instance price must be when compared with
     * the On-Demand price for that instance type before instances are launched. For
     * example, if your bid percentage is 20%, then the Spot price must be below 20% of
     * the current On-Demand price for that EC2 instance.</p>
     */
    inline ComputeResource& WithBidPercentage(int value) { SetBidPercentage(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EC2 Spot Fleet IAM role applied
     * to a <code>SPOT</code> compute environment.</p>
     */
    inline const Aws::String& GetSpotIamFleetRole() const{ return m_spotIamFleetRole; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EC2 Spot Fleet IAM role applied
     * to a <code>SPOT</code> compute environment.</p>
     */
    inline void SetSpotIamFleetRole(const Aws::String& value) { m_spotIamFleetRoleHasBeenSet = true; m_spotIamFleetRole = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EC2 Spot Fleet IAM role applied
     * to a <code>SPOT</code> compute environment.</p>
     */
    inline void SetSpotIamFleetRole(Aws::String&& value) { m_spotIamFleetRoleHasBeenSet = true; m_spotIamFleetRole = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EC2 Spot Fleet IAM role applied
     * to a <code>SPOT</code> compute environment.</p>
     */
    inline void SetSpotIamFleetRole(const char* value) { m_spotIamFleetRoleHasBeenSet = true; m_spotIamFleetRole.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EC2 Spot Fleet IAM role applied
     * to a <code>SPOT</code> compute environment.</p>
     */
    inline ComputeResource& WithSpotIamFleetRole(const Aws::String& value) { SetSpotIamFleetRole(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EC2 Spot Fleet IAM role applied
     * to a <code>SPOT</code> compute environment.</p>
     */
    inline ComputeResource& WithSpotIamFleetRole(Aws::String&& value) { SetSpotIamFleetRole(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EC2 Spot Fleet IAM role applied
     * to a <code>SPOT</code> compute environment.</p>
     */
    inline ComputeResource& WithSpotIamFleetRole(const char* value) { SetSpotIamFleetRole(value); return *this;}

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
    int m_bidPercentage;
    bool m_bidPercentageHasBeenSet;
    Aws::String m_spotIamFleetRole;
    bool m_spotIamFleetRoleHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
