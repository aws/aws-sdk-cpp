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
   * <p>The details of the VPC of the Amazon OpenSearch or Amazon OpenSearch
   * Serverless destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/VpcConfiguration">AWS
   * API Reference</a></p>
   */
  class VpcConfiguration
  {
  public:
    AWS_FIREHOSE_API VpcConfiguration() = default;
    AWS_FIREHOSE_API VpcConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API VpcConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IDs of the subnets that you want Firehose to use to create ENIs in the
     * VPC of the Amazon OpenSearch Service destination. Make sure that the routing
     * tables and inbound and outbound rules allow traffic to flow from the subnets
     * whose IDs are specified here to the subnets that have the destination Amazon
     * OpenSearch Service endpoints. Firehose creates at least one ENI in each of the
     * subnets that are specified here. Do not delete or modify these ENIs.</p> <p>The
     * number of ENIs that Firehose creates in the subnets specified here scales up and
     * down automatically based on throughput. To enable Firehose to scale up the
     * number of ENIs to match throughput, ensure that you have sufficient quota. To
     * help you calculate the quota you need, assume that Firehose can create up to
     * three ENIs for this Firehose stream for each of the subnets specified here. For
     * more information about ENI quota, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/amazon-vpc-limits.html#vpc-limits-enis">Network
     * Interfaces </a> in the Amazon VPC Quotas topic.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    VpcConfiguration& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    VpcConfiguration& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that you want the Firehose stream to use to create
     * endpoints in the destination VPC. You can use your existing Firehose delivery
     * role or you can specify a new role. In either case, make sure that the role
     * trusts the Firehose service principal and that it grants the following
     * permissions:</p> <ul> <li> <p> <code>ec2:DescribeVpcs</code> </p> </li> <li> <p>
     * <code>ec2:DescribeVpcAttribute</code> </p> </li> <li> <p>
     * <code>ec2:DescribeSubnets</code> </p> </li> <li> <p>
     * <code>ec2:DescribeSecurityGroups</code> </p> </li> <li> <p>
     * <code>ec2:DescribeNetworkInterfaces</code> </p> </li> <li> <p>
     * <code>ec2:CreateNetworkInterface</code> </p> </li> <li> <p>
     * <code>ec2:CreateNetworkInterfacePermission</code> </p> </li> <li> <p>
     * <code>ec2:DeleteNetworkInterface</code> </p> </li> </ul>  <p>When you
     * specify subnets for delivering data to the destination in a private VPC, make
     * sure you have enough number of free IP addresses in chosen subnets. If there is
     * no available free IP address in a specified subnet, Firehose cannot create or
     * add ENIs for the data delivery in the private VPC, and the delivery will be
     * degraded or fail.</p> 
     */
    inline const Aws::String& GetRoleARN() const { return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    template<typename RoleARNT = Aws::String>
    void SetRoleARN(RoleARNT&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::forward<RoleARNT>(value); }
    template<typename RoleARNT = Aws::String>
    VpcConfiguration& WithRoleARN(RoleARNT&& value) { SetRoleARN(std::forward<RoleARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the security groups that you want Firehose to use when it creates
     * ENIs in the VPC of the Amazon OpenSearch Service destination. You can use the
     * same security group that the Amazon OpenSearch Service domain uses or different
     * ones. If you specify different security groups here, ensure that they allow
     * outbound HTTPS traffic to the Amazon OpenSearch Service domain's security group.
     * Also ensure that the Amazon OpenSearch Service domain's security group allows
     * HTTPS traffic from the security groups specified here. If you use the same
     * security group for both your delivery stream and the Amazon OpenSearch Service
     * domain, make sure the security group inbound rule allows HTTPS traffic. For more
     * information about security group rules, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/VPC_SecurityGroups.html#SecurityGroupRules">Security
     * group rules</a> in the Amazon VPC documentation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    VpcConfiguration& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    VpcConfiguration& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
