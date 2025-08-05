/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>The VPC security groups and subnets that are attached to an Amazon Web
   * Services Lambda function. For more information, see <a
   * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-vpc.html">VPC
   * Settings</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/LambdaVpcConfig">AWS
   * API Reference</a></p>
   */
  class LambdaVpcConfig
  {
  public:
    AWS_INSPECTOR2_API LambdaVpcConfig() = default;
    AWS_INSPECTOR2_API LambdaVpcConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API LambdaVpcConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of VPC subnet IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    LambdaVpcConfig& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    LambdaVpcConfig& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The VPC security groups and subnets that are attached to an Amazon Web
     * Services Lambda function. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-vpc.html">VPC
     * Settings</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    LambdaVpcConfig& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    LambdaVpcConfig& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    LambdaVpcConfig& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
