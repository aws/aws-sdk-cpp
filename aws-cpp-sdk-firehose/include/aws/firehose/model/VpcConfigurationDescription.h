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
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Firehose
{
namespace Model
{

  /**
   * <p>The details of the VPC of the Amazon ES destination.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/VpcConfigurationDescription">AWS
   * API Reference</a></p>
   */
  class AWS_FIREHOSE_API VpcConfigurationDescription
  {
  public:
    VpcConfigurationDescription();
    VpcConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    VpcConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IDs of the subnets that Kinesis Data Firehose uses to create ENIs in the
     * VPC of the Amazon ES destination. Make sure that the routing tables and inbound
     * and outbound rules allow traffic to flow from the subnets whose IDs are
     * specified here to the subnets that have the destination Amazon ES endpoints.
     * Kinesis Data Firehose creates at least one ENI in each of the subnets that are
     * specified here. Do not delete or modify these ENIs.</p> <p>The number of ENIs
     * that Kinesis Data Firehose creates in the subnets specified here scales up and
     * down automatically based on throughput. To enable Kinesis Data Firehose to scale
     * up the number of ENIs to match throughput, ensure that you have sufficient
     * quota. To help you calculate the quota you need, assume that Kinesis Data
     * Firehose can create up to three ENIs for this delivery stream for each of the
     * subnets specified here. For more information about ENI quota, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/amazon-vpc-limits.html#vpc-limits-enis">Network
     * Interfaces </a> in the Amazon VPC Quotas topic.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The IDs of the subnets that Kinesis Data Firehose uses to create ENIs in the
     * VPC of the Amazon ES destination. Make sure that the routing tables and inbound
     * and outbound rules allow traffic to flow from the subnets whose IDs are
     * specified here to the subnets that have the destination Amazon ES endpoints.
     * Kinesis Data Firehose creates at least one ENI in each of the subnets that are
     * specified here. Do not delete or modify these ENIs.</p> <p>The number of ENIs
     * that Kinesis Data Firehose creates in the subnets specified here scales up and
     * down automatically based on throughput. To enable Kinesis Data Firehose to scale
     * up the number of ENIs to match throughput, ensure that you have sufficient
     * quota. To help you calculate the quota you need, assume that Kinesis Data
     * Firehose can create up to three ENIs for this delivery stream for each of the
     * subnets specified here. For more information about ENI quota, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/amazon-vpc-limits.html#vpc-limits-enis">Network
     * Interfaces </a> in the Amazon VPC Quotas topic.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>The IDs of the subnets that Kinesis Data Firehose uses to create ENIs in the
     * VPC of the Amazon ES destination. Make sure that the routing tables and inbound
     * and outbound rules allow traffic to flow from the subnets whose IDs are
     * specified here to the subnets that have the destination Amazon ES endpoints.
     * Kinesis Data Firehose creates at least one ENI in each of the subnets that are
     * specified here. Do not delete or modify these ENIs.</p> <p>The number of ENIs
     * that Kinesis Data Firehose creates in the subnets specified here scales up and
     * down automatically based on throughput. To enable Kinesis Data Firehose to scale
     * up the number of ENIs to match throughput, ensure that you have sufficient
     * quota. To help you calculate the quota you need, assume that Kinesis Data
     * Firehose can create up to three ENIs for this delivery stream for each of the
     * subnets specified here. For more information about ENI quota, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/amazon-vpc-limits.html#vpc-limits-enis">Network
     * Interfaces </a> in the Amazon VPC Quotas topic.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>The IDs of the subnets that Kinesis Data Firehose uses to create ENIs in the
     * VPC of the Amazon ES destination. Make sure that the routing tables and inbound
     * and outbound rules allow traffic to flow from the subnets whose IDs are
     * specified here to the subnets that have the destination Amazon ES endpoints.
     * Kinesis Data Firehose creates at least one ENI in each of the subnets that are
     * specified here. Do not delete or modify these ENIs.</p> <p>The number of ENIs
     * that Kinesis Data Firehose creates in the subnets specified here scales up and
     * down automatically based on throughput. To enable Kinesis Data Firehose to scale
     * up the number of ENIs to match throughput, ensure that you have sufficient
     * quota. To help you calculate the quota you need, assume that Kinesis Data
     * Firehose can create up to three ENIs for this delivery stream for each of the
     * subnets specified here. For more information about ENI quota, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/amazon-vpc-limits.html#vpc-limits-enis">Network
     * Interfaces </a> in the Amazon VPC Quotas topic.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>The IDs of the subnets that Kinesis Data Firehose uses to create ENIs in the
     * VPC of the Amazon ES destination. Make sure that the routing tables and inbound
     * and outbound rules allow traffic to flow from the subnets whose IDs are
     * specified here to the subnets that have the destination Amazon ES endpoints.
     * Kinesis Data Firehose creates at least one ENI in each of the subnets that are
     * specified here. Do not delete or modify these ENIs.</p> <p>The number of ENIs
     * that Kinesis Data Firehose creates in the subnets specified here scales up and
     * down automatically based on throughput. To enable Kinesis Data Firehose to scale
     * up the number of ENIs to match throughput, ensure that you have sufficient
     * quota. To help you calculate the quota you need, assume that Kinesis Data
     * Firehose can create up to three ENIs for this delivery stream for each of the
     * subnets specified here. For more information about ENI quota, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/amazon-vpc-limits.html#vpc-limits-enis">Network
     * Interfaces </a> in the Amazon VPC Quotas topic.</p>
     */
    inline VpcConfigurationDescription& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The IDs of the subnets that Kinesis Data Firehose uses to create ENIs in the
     * VPC of the Amazon ES destination. Make sure that the routing tables and inbound
     * and outbound rules allow traffic to flow from the subnets whose IDs are
     * specified here to the subnets that have the destination Amazon ES endpoints.
     * Kinesis Data Firehose creates at least one ENI in each of the subnets that are
     * specified here. Do not delete or modify these ENIs.</p> <p>The number of ENIs
     * that Kinesis Data Firehose creates in the subnets specified here scales up and
     * down automatically based on throughput. To enable Kinesis Data Firehose to scale
     * up the number of ENIs to match throughput, ensure that you have sufficient
     * quota. To help you calculate the quota you need, assume that Kinesis Data
     * Firehose can create up to three ENIs for this delivery stream for each of the
     * subnets specified here. For more information about ENI quota, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/amazon-vpc-limits.html#vpc-limits-enis">Network
     * Interfaces </a> in the Amazon VPC Quotas topic.</p>
     */
    inline VpcConfigurationDescription& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the subnets that Kinesis Data Firehose uses to create ENIs in the
     * VPC of the Amazon ES destination. Make sure that the routing tables and inbound
     * and outbound rules allow traffic to flow from the subnets whose IDs are
     * specified here to the subnets that have the destination Amazon ES endpoints.
     * Kinesis Data Firehose creates at least one ENI in each of the subnets that are
     * specified here. Do not delete or modify these ENIs.</p> <p>The number of ENIs
     * that Kinesis Data Firehose creates in the subnets specified here scales up and
     * down automatically based on throughput. To enable Kinesis Data Firehose to scale
     * up the number of ENIs to match throughput, ensure that you have sufficient
     * quota. To help you calculate the quota you need, assume that Kinesis Data
     * Firehose can create up to three ENIs for this delivery stream for each of the
     * subnets specified here. For more information about ENI quota, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/amazon-vpc-limits.html#vpc-limits-enis">Network
     * Interfaces </a> in the Amazon VPC Quotas topic.</p>
     */
    inline VpcConfigurationDescription& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the subnets that Kinesis Data Firehose uses to create ENIs in the
     * VPC of the Amazon ES destination. Make sure that the routing tables and inbound
     * and outbound rules allow traffic to flow from the subnets whose IDs are
     * specified here to the subnets that have the destination Amazon ES endpoints.
     * Kinesis Data Firehose creates at least one ENI in each of the subnets that are
     * specified here. Do not delete or modify these ENIs.</p> <p>The number of ENIs
     * that Kinesis Data Firehose creates in the subnets specified here scales up and
     * down automatically based on throughput. To enable Kinesis Data Firehose to scale
     * up the number of ENIs to match throughput, ensure that you have sufficient
     * quota. To help you calculate the quota you need, assume that Kinesis Data
     * Firehose can create up to three ENIs for this delivery stream for each of the
     * subnets specified here. For more information about ENI quota, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/amazon-vpc-limits.html#vpc-limits-enis">Network
     * Interfaces </a> in the Amazon VPC Quotas topic.</p>
     */
    inline VpcConfigurationDescription& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the subnets that Kinesis Data Firehose uses to create ENIs in the
     * VPC of the Amazon ES destination. Make sure that the routing tables and inbound
     * and outbound rules allow traffic to flow from the subnets whose IDs are
     * specified here to the subnets that have the destination Amazon ES endpoints.
     * Kinesis Data Firehose creates at least one ENI in each of the subnets that are
     * specified here. Do not delete or modify these ENIs.</p> <p>The number of ENIs
     * that Kinesis Data Firehose creates in the subnets specified here scales up and
     * down automatically based on throughput. To enable Kinesis Data Firehose to scale
     * up the number of ENIs to match throughput, ensure that you have sufficient
     * quota. To help you calculate the quota you need, assume that Kinesis Data
     * Firehose can create up to three ENIs for this delivery stream for each of the
     * subnets specified here. For more information about ENI quota, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/amazon-vpc-limits.html#vpc-limits-enis">Network
     * Interfaces </a> in the Amazon VPC Quotas topic.</p>
     */
    inline VpcConfigurationDescription& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>The ARN of the IAM role that you want the delivery stream uses to create
     * endpoints in the destination VPC.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The ARN of the IAM role that you want the delivery stream uses to create
     * endpoints in the destination VPC.</p>
     */
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }

    /**
     * <p>The ARN of the IAM role that you want the delivery stream uses to create
     * endpoints in the destination VPC.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The ARN of the IAM role that you want the delivery stream uses to create
     * endpoints in the destination VPC.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

    /**
     * <p>The ARN of the IAM role that you want the delivery stream uses to create
     * endpoints in the destination VPC.</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The ARN of the IAM role that you want the delivery stream uses to create
     * endpoints in the destination VPC.</p>
     */
    inline VpcConfigurationDescription& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The ARN of the IAM role that you want the delivery stream uses to create
     * endpoints in the destination VPC.</p>
     */
    inline VpcConfigurationDescription& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that you want the delivery stream uses to create
     * endpoints in the destination VPC.</p>
     */
    inline VpcConfigurationDescription& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}


    /**
     * <p>The IDs of the security groups that Kinesis Data Firehose uses when it
     * creates ENIs in the VPC of the Amazon ES destination.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The IDs of the security groups that Kinesis Data Firehose uses when it
     * creates ENIs in the VPC of the Amazon ES destination.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The IDs of the security groups that Kinesis Data Firehose uses when it
     * creates ENIs in the VPC of the Amazon ES destination.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The IDs of the security groups that Kinesis Data Firehose uses when it
     * creates ENIs in the VPC of the Amazon ES destination.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The IDs of the security groups that Kinesis Data Firehose uses when it
     * creates ENIs in the VPC of the Amazon ES destination.</p>
     */
    inline VpcConfigurationDescription& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The IDs of the security groups that Kinesis Data Firehose uses when it
     * creates ENIs in the VPC of the Amazon ES destination.</p>
     */
    inline VpcConfigurationDescription& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the security groups that Kinesis Data Firehose uses when it
     * creates ENIs in the VPC of the Amazon ES destination.</p>
     */
    inline VpcConfigurationDescription& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the security groups that Kinesis Data Firehose uses when it
     * creates ENIs in the VPC of the Amazon ES destination.</p>
     */
    inline VpcConfigurationDescription& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the security groups that Kinesis Data Firehose uses when it
     * creates ENIs in the VPC of the Amazon ES destination.</p>
     */
    inline VpcConfigurationDescription& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>The ID of the Amazon ES destination's VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the Amazon ES destination's VPC.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon ES destination's VPC.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the Amazon ES destination's VPC.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the Amazon ES destination's VPC.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the Amazon ES destination's VPC.</p>
     */
    inline VpcConfigurationDescription& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the Amazon ES destination's VPC.</p>
     */
    inline VpcConfigurationDescription& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon ES destination's VPC.</p>
     */
    inline VpcConfigurationDescription& WithVpcId(const char* value) { SetVpcId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
