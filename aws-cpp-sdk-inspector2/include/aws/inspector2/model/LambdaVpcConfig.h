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
   * <p>The VPC security groups and subnets that are attached to an AWS Lambda
   * function. For more information, see <a
   * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-vpc.html">VPC
   * Settings</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/LambdaVpcConfig">AWS
   * API Reference</a></p>
   */
  class LambdaVpcConfig
  {
  public:
    AWS_INSPECTOR2_API LambdaVpcConfig();
    AWS_INSPECTOR2_API LambdaVpcConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API LambdaVpcConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The VPC security groups and subnets that are attached to an AWS Lambda
     * function. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-vpc.html">VPC
     * Settings</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The VPC security groups and subnets that are attached to an AWS Lambda
     * function. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-vpc.html">VPC
     * Settings</a>.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The VPC security groups and subnets that are attached to an AWS Lambda
     * function. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-vpc.html">VPC
     * Settings</a>.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The VPC security groups and subnets that are attached to an AWS Lambda
     * function. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-vpc.html">VPC
     * Settings</a>.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The VPC security groups and subnets that are attached to an AWS Lambda
     * function. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-vpc.html">VPC
     * Settings</a>.</p>
     */
    inline LambdaVpcConfig& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The VPC security groups and subnets that are attached to an AWS Lambda
     * function. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-vpc.html">VPC
     * Settings</a>.</p>
     */
    inline LambdaVpcConfig& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The VPC security groups and subnets that are attached to an AWS Lambda
     * function. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-vpc.html">VPC
     * Settings</a>.</p>
     */
    inline LambdaVpcConfig& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The VPC security groups and subnets that are attached to an AWS Lambda
     * function. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-vpc.html">VPC
     * Settings</a>.</p>
     */
    inline LambdaVpcConfig& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The VPC security groups and subnets that are attached to an AWS Lambda
     * function. For more information, see <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-vpc.html">VPC
     * Settings</a>.</p>
     */
    inline LambdaVpcConfig& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>A list of VPC subnet IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>A list of VPC subnet IDs.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>A list of VPC subnet IDs.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>A list of VPC subnet IDs.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>A list of VPC subnet IDs.</p>
     */
    inline LambdaVpcConfig& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>A list of VPC subnet IDs.</p>
     */
    inline LambdaVpcConfig& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>A list of VPC subnet IDs.</p>
     */
    inline LambdaVpcConfig& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>A list of VPC subnet IDs.</p>
     */
    inline LambdaVpcConfig& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of VPC subnet IDs.</p>
     */
    inline LambdaVpcConfig& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>The ID of the VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC.</p>
     */
    inline LambdaVpcConfig& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline LambdaVpcConfig& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline LambdaVpcConfig& WithVpcId(const char* value) { SetVpcId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
