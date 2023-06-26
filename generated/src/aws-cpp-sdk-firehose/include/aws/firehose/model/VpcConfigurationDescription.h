/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class VpcConfigurationDescription
  {
  public:
    AWS_FIREHOSE_API VpcConfigurationDescription();
    AWS_FIREHOSE_API VpcConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API VpcConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>The ARN of the IAM role that the delivery stream uses to create endpoints in
     * the destination VPC. You can use your existing Kinesis Data Firehose delivery
     * role or you can specify a new role. In either case, make sure that the role
     * trusts the Kinesis Data Firehose service principal and that it grants the
     * following permissions:</p> <ul> <li> <p> <code>ec2:DescribeVpcs</code> </p>
     * </li> <li> <p> <code>ec2:DescribeVpcAttribute</code> </p> </li> <li> <p>
     * <code>ec2:DescribeSubnets</code> </p> </li> <li> <p>
     * <code>ec2:DescribeSecurityGroups</code> </p> </li> <li> <p>
     * <code>ec2:DescribeNetworkInterfaces</code> </p> </li> <li> <p>
     * <code>ec2:CreateNetworkInterface</code> </p> </li> <li> <p>
     * <code>ec2:CreateNetworkInterfacePermission</code> </p> </li> <li> <p>
     * <code>ec2:DeleteNetworkInterface</code> </p> </li> </ul> <p>If you revoke these
     * permissions after you create the delivery stream, Kinesis Data Firehose can't
     * scale out by creating more ENIs when necessary. You might therefore see a
     * degradation in performance.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>The ARN of the IAM role that the delivery stream uses to create endpoints in
     * the destination VPC. You can use your existing Kinesis Data Firehose delivery
     * role or you can specify a new role. In either case, make sure that the role
     * trusts the Kinesis Data Firehose service principal and that it grants the
     * following permissions:</p> <ul> <li> <p> <code>ec2:DescribeVpcs</code> </p>
     * </li> <li> <p> <code>ec2:DescribeVpcAttribute</code> </p> </li> <li> <p>
     * <code>ec2:DescribeSubnets</code> </p> </li> <li> <p>
     * <code>ec2:DescribeSecurityGroups</code> </p> </li> <li> <p>
     * <code>ec2:DescribeNetworkInterfaces</code> </p> </li> <li> <p>
     * <code>ec2:CreateNetworkInterface</code> </p> </li> <li> <p>
     * <code>ec2:CreateNetworkInterfacePermission</code> </p> </li> <li> <p>
     * <code>ec2:DeleteNetworkInterface</code> </p> </li> </ul> <p>If you revoke these
     * permissions after you create the delivery stream, Kinesis Data Firehose can't
     * scale out by creating more ENIs when necessary. You might therefore see a
     * degradation in performance.</p>
     */
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }

    /**
     * <p>The ARN of the IAM role that the delivery stream uses to create endpoints in
     * the destination VPC. You can use your existing Kinesis Data Firehose delivery
     * role or you can specify a new role. In either case, make sure that the role
     * trusts the Kinesis Data Firehose service principal and that it grants the
     * following permissions:</p> <ul> <li> <p> <code>ec2:DescribeVpcs</code> </p>
     * </li> <li> <p> <code>ec2:DescribeVpcAttribute</code> </p> </li> <li> <p>
     * <code>ec2:DescribeSubnets</code> </p> </li> <li> <p>
     * <code>ec2:DescribeSecurityGroups</code> </p> </li> <li> <p>
     * <code>ec2:DescribeNetworkInterfaces</code> </p> </li> <li> <p>
     * <code>ec2:CreateNetworkInterface</code> </p> </li> <li> <p>
     * <code>ec2:CreateNetworkInterfacePermission</code> </p> </li> <li> <p>
     * <code>ec2:DeleteNetworkInterface</code> </p> </li> </ul> <p>If you revoke these
     * permissions after you create the delivery stream, Kinesis Data Firehose can't
     * scale out by creating more ENIs when necessary. You might therefore see a
     * degradation in performance.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>The ARN of the IAM role that the delivery stream uses to create endpoints in
     * the destination VPC. You can use your existing Kinesis Data Firehose delivery
     * role or you can specify a new role. In either case, make sure that the role
     * trusts the Kinesis Data Firehose service principal and that it grants the
     * following permissions:</p> <ul> <li> <p> <code>ec2:DescribeVpcs</code> </p>
     * </li> <li> <p> <code>ec2:DescribeVpcAttribute</code> </p> </li> <li> <p>
     * <code>ec2:DescribeSubnets</code> </p> </li> <li> <p>
     * <code>ec2:DescribeSecurityGroups</code> </p> </li> <li> <p>
     * <code>ec2:DescribeNetworkInterfaces</code> </p> </li> <li> <p>
     * <code>ec2:CreateNetworkInterface</code> </p> </li> <li> <p>
     * <code>ec2:CreateNetworkInterfacePermission</code> </p> </li> <li> <p>
     * <code>ec2:DeleteNetworkInterface</code> </p> </li> </ul> <p>If you revoke these
     * permissions after you create the delivery stream, Kinesis Data Firehose can't
     * scale out by creating more ENIs when necessary. You might therefore see a
     * degradation in performance.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

    /**
     * <p>The ARN of the IAM role that the delivery stream uses to create endpoints in
     * the destination VPC. You can use your existing Kinesis Data Firehose delivery
     * role or you can specify a new role. In either case, make sure that the role
     * trusts the Kinesis Data Firehose service principal and that it grants the
     * following permissions:</p> <ul> <li> <p> <code>ec2:DescribeVpcs</code> </p>
     * </li> <li> <p> <code>ec2:DescribeVpcAttribute</code> </p> </li> <li> <p>
     * <code>ec2:DescribeSubnets</code> </p> </li> <li> <p>
     * <code>ec2:DescribeSecurityGroups</code> </p> </li> <li> <p>
     * <code>ec2:DescribeNetworkInterfaces</code> </p> </li> <li> <p>
     * <code>ec2:CreateNetworkInterface</code> </p> </li> <li> <p>
     * <code>ec2:CreateNetworkInterfacePermission</code> </p> </li> <li> <p>
     * <code>ec2:DeleteNetworkInterface</code> </p> </li> </ul> <p>If you revoke these
     * permissions after you create the delivery stream, Kinesis Data Firehose can't
     * scale out by creating more ENIs when necessary. You might therefore see a
     * degradation in performance.</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>The ARN of the IAM role that the delivery stream uses to create endpoints in
     * the destination VPC. You can use your existing Kinesis Data Firehose delivery
     * role or you can specify a new role. In either case, make sure that the role
     * trusts the Kinesis Data Firehose service principal and that it grants the
     * following permissions:</p> <ul> <li> <p> <code>ec2:DescribeVpcs</code> </p>
     * </li> <li> <p> <code>ec2:DescribeVpcAttribute</code> </p> </li> <li> <p>
     * <code>ec2:DescribeSubnets</code> </p> </li> <li> <p>
     * <code>ec2:DescribeSecurityGroups</code> </p> </li> <li> <p>
     * <code>ec2:DescribeNetworkInterfaces</code> </p> </li> <li> <p>
     * <code>ec2:CreateNetworkInterface</code> </p> </li> <li> <p>
     * <code>ec2:CreateNetworkInterfacePermission</code> </p> </li> <li> <p>
     * <code>ec2:DeleteNetworkInterface</code> </p> </li> </ul> <p>If you revoke these
     * permissions after you create the delivery stream, Kinesis Data Firehose can't
     * scale out by creating more ENIs when necessary. You might therefore see a
     * degradation in performance.</p>
     */
    inline VpcConfigurationDescription& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>The ARN of the IAM role that the delivery stream uses to create endpoints in
     * the destination VPC. You can use your existing Kinesis Data Firehose delivery
     * role or you can specify a new role. In either case, make sure that the role
     * trusts the Kinesis Data Firehose service principal and that it grants the
     * following permissions:</p> <ul> <li> <p> <code>ec2:DescribeVpcs</code> </p>
     * </li> <li> <p> <code>ec2:DescribeVpcAttribute</code> </p> </li> <li> <p>
     * <code>ec2:DescribeSubnets</code> </p> </li> <li> <p>
     * <code>ec2:DescribeSecurityGroups</code> </p> </li> <li> <p>
     * <code>ec2:DescribeNetworkInterfaces</code> </p> </li> <li> <p>
     * <code>ec2:CreateNetworkInterface</code> </p> </li> <li> <p>
     * <code>ec2:CreateNetworkInterfacePermission</code> </p> </li> <li> <p>
     * <code>ec2:DeleteNetworkInterface</code> </p> </li> </ul> <p>If you revoke these
     * permissions after you create the delivery stream, Kinesis Data Firehose can't
     * scale out by creating more ENIs when necessary. You might therefore see a
     * degradation in performance.</p>
     */
    inline VpcConfigurationDescription& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that the delivery stream uses to create endpoints in
     * the destination VPC. You can use your existing Kinesis Data Firehose delivery
     * role or you can specify a new role. In either case, make sure that the role
     * trusts the Kinesis Data Firehose service principal and that it grants the
     * following permissions:</p> <ul> <li> <p> <code>ec2:DescribeVpcs</code> </p>
     * </li> <li> <p> <code>ec2:DescribeVpcAttribute</code> </p> </li> <li> <p>
     * <code>ec2:DescribeSubnets</code> </p> </li> <li> <p>
     * <code>ec2:DescribeSecurityGroups</code> </p> </li> <li> <p>
     * <code>ec2:DescribeNetworkInterfaces</code> </p> </li> <li> <p>
     * <code>ec2:CreateNetworkInterface</code> </p> </li> <li> <p>
     * <code>ec2:CreateNetworkInterfacePermission</code> </p> </li> <li> <p>
     * <code>ec2:DeleteNetworkInterface</code> </p> </li> </ul> <p>If you revoke these
     * permissions after you create the delivery stream, Kinesis Data Firehose can't
     * scale out by creating more ENIs when necessary. You might therefore see a
     * degradation in performance.</p>
     */
    inline VpcConfigurationDescription& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}


    /**
     * <p>The IDs of the security groups that Kinesis Data Firehose uses when it
     * creates ENIs in the VPC of the Amazon ES destination. You can use the same
     * security group that the Amazon ES domain uses or different ones. If you specify
     * different security groups, ensure that they allow outbound HTTPS traffic to the
     * Amazon ES domain's security group. Also ensure that the Amazon ES domain's
     * security group allows HTTPS traffic from the security groups specified here. If
     * you use the same security group for both your delivery stream and the Amazon ES
     * domain, make sure the security group inbound rule allows HTTPS traffic. For more
     * information about security group rules, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html#SecurityGroupRules">Security
     * group rules</a> in the Amazon VPC documentation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The IDs of the security groups that Kinesis Data Firehose uses when it
     * creates ENIs in the VPC of the Amazon ES destination. You can use the same
     * security group that the Amazon ES domain uses or different ones. If you specify
     * different security groups, ensure that they allow outbound HTTPS traffic to the
     * Amazon ES domain's security group. Also ensure that the Amazon ES domain's
     * security group allows HTTPS traffic from the security groups specified here. If
     * you use the same security group for both your delivery stream and the Amazon ES
     * domain, make sure the security group inbound rule allows HTTPS traffic. For more
     * information about security group rules, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html#SecurityGroupRules">Security
     * group rules</a> in the Amazon VPC documentation.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The IDs of the security groups that Kinesis Data Firehose uses when it
     * creates ENIs in the VPC of the Amazon ES destination. You can use the same
     * security group that the Amazon ES domain uses or different ones. If you specify
     * different security groups, ensure that they allow outbound HTTPS traffic to the
     * Amazon ES domain's security group. Also ensure that the Amazon ES domain's
     * security group allows HTTPS traffic from the security groups specified here. If
     * you use the same security group for both your delivery stream and the Amazon ES
     * domain, make sure the security group inbound rule allows HTTPS traffic. For more
     * information about security group rules, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html#SecurityGroupRules">Security
     * group rules</a> in the Amazon VPC documentation.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The IDs of the security groups that Kinesis Data Firehose uses when it
     * creates ENIs in the VPC of the Amazon ES destination. You can use the same
     * security group that the Amazon ES domain uses or different ones. If you specify
     * different security groups, ensure that they allow outbound HTTPS traffic to the
     * Amazon ES domain's security group. Also ensure that the Amazon ES domain's
     * security group allows HTTPS traffic from the security groups specified here. If
     * you use the same security group for both your delivery stream and the Amazon ES
     * domain, make sure the security group inbound rule allows HTTPS traffic. For more
     * information about security group rules, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html#SecurityGroupRules">Security
     * group rules</a> in the Amazon VPC documentation.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The IDs of the security groups that Kinesis Data Firehose uses when it
     * creates ENIs in the VPC of the Amazon ES destination. You can use the same
     * security group that the Amazon ES domain uses or different ones. If you specify
     * different security groups, ensure that they allow outbound HTTPS traffic to the
     * Amazon ES domain's security group. Also ensure that the Amazon ES domain's
     * security group allows HTTPS traffic from the security groups specified here. If
     * you use the same security group for both your delivery stream and the Amazon ES
     * domain, make sure the security group inbound rule allows HTTPS traffic. For more
     * information about security group rules, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html#SecurityGroupRules">Security
     * group rules</a> in the Amazon VPC documentation.</p>
     */
    inline VpcConfigurationDescription& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The IDs of the security groups that Kinesis Data Firehose uses when it
     * creates ENIs in the VPC of the Amazon ES destination. You can use the same
     * security group that the Amazon ES domain uses or different ones. If you specify
     * different security groups, ensure that they allow outbound HTTPS traffic to the
     * Amazon ES domain's security group. Also ensure that the Amazon ES domain's
     * security group allows HTTPS traffic from the security groups specified here. If
     * you use the same security group for both your delivery stream and the Amazon ES
     * domain, make sure the security group inbound rule allows HTTPS traffic. For more
     * information about security group rules, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html#SecurityGroupRules">Security
     * group rules</a> in the Amazon VPC documentation.</p>
     */
    inline VpcConfigurationDescription& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the security groups that Kinesis Data Firehose uses when it
     * creates ENIs in the VPC of the Amazon ES destination. You can use the same
     * security group that the Amazon ES domain uses or different ones. If you specify
     * different security groups, ensure that they allow outbound HTTPS traffic to the
     * Amazon ES domain's security group. Also ensure that the Amazon ES domain's
     * security group allows HTTPS traffic from the security groups specified here. If
     * you use the same security group for both your delivery stream and the Amazon ES
     * domain, make sure the security group inbound rule allows HTTPS traffic. For more
     * information about security group rules, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html#SecurityGroupRules">Security
     * group rules</a> in the Amazon VPC documentation.</p>
     */
    inline VpcConfigurationDescription& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the security groups that Kinesis Data Firehose uses when it
     * creates ENIs in the VPC of the Amazon ES destination. You can use the same
     * security group that the Amazon ES domain uses or different ones. If you specify
     * different security groups, ensure that they allow outbound HTTPS traffic to the
     * Amazon ES domain's security group. Also ensure that the Amazon ES domain's
     * security group allows HTTPS traffic from the security groups specified here. If
     * you use the same security group for both your delivery stream and the Amazon ES
     * domain, make sure the security group inbound rule allows HTTPS traffic. For more
     * information about security group rules, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html#SecurityGroupRules">Security
     * group rules</a> in the Amazon VPC documentation.</p>
     */
    inline VpcConfigurationDescription& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the security groups that Kinesis Data Firehose uses when it
     * creates ENIs in the VPC of the Amazon ES destination. You can use the same
     * security group that the Amazon ES domain uses or different ones. If you specify
     * different security groups, ensure that they allow outbound HTTPS traffic to the
     * Amazon ES domain's security group. Also ensure that the Amazon ES domain's
     * security group allows HTTPS traffic from the security groups specified here. If
     * you use the same security group for both your delivery stream and the Amazon ES
     * domain, make sure the security group inbound rule allows HTTPS traffic. For more
     * information about security group rules, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html#SecurityGroupRules">Security
     * group rules</a> in the Amazon VPC documentation.</p>
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
    bool m_subnetIdsHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
