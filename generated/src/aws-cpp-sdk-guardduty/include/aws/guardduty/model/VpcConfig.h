/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/SecurityGroup.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Amazon Virtual Private Cloud configuration details associated with your
   * Lambda function.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/VpcConfig">AWS
   * API Reference</a></p>
   */
  class VpcConfig
  {
  public:
    AWS_GUARDDUTY_API VpcConfig();
    AWS_GUARDDUTY_API VpcConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API VpcConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifiers of the subnets that are associated with your Lambda
     * function.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The identifiers of the subnets that are associated with your Lambda
     * function.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>The identifiers of the subnets that are associated with your Lambda
     * function.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>The identifiers of the subnets that are associated with your Lambda
     * function.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>The identifiers of the subnets that are associated with your Lambda
     * function.</p>
     */
    inline VpcConfig& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The identifiers of the subnets that are associated with your Lambda
     * function.</p>
     */
    inline VpcConfig& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The identifiers of the subnets that are associated with your Lambda
     * function.</p>
     */
    inline VpcConfig& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The identifiers of the subnets that are associated with your Lambda
     * function.</p>
     */
    inline VpcConfig& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifiers of the subnets that are associated with your Lambda
     * function.</p>
     */
    inline VpcConfig& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>The identifier of the Amazon Virtual Private Cloud.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The identifier of the Amazon Virtual Private Cloud.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Virtual Private Cloud.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The identifier of the Amazon Virtual Private Cloud.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Virtual Private Cloud.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The identifier of the Amazon Virtual Private Cloud.</p>
     */
    inline VpcConfig& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Virtual Private Cloud.</p>
     */
    inline VpcConfig& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Virtual Private Cloud.</p>
     */
    inline VpcConfig& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The identifier of the security group attached to the Lambda function.</p>
     */
    inline const Aws::Vector<SecurityGroup>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>The identifier of the security group attached to the Lambda function.</p>
     */
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }

    /**
     * <p>The identifier of the security group attached to the Lambda function.</p>
     */
    inline void SetSecurityGroups(const Aws::Vector<SecurityGroup>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p>The identifier of the security group attached to the Lambda function.</p>
     */
    inline void SetSecurityGroups(Aws::Vector<SecurityGroup>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }

    /**
     * <p>The identifier of the security group attached to the Lambda function.</p>
     */
    inline VpcConfig& WithSecurityGroups(const Aws::Vector<SecurityGroup>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>The identifier of the security group attached to the Lambda function.</p>
     */
    inline VpcConfig& WithSecurityGroups(Aws::Vector<SecurityGroup>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>The identifier of the security group attached to the Lambda function.</p>
     */
    inline VpcConfig& AddSecurityGroups(const SecurityGroup& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>The identifier of the security group attached to the Lambda function.</p>
     */
    inline VpcConfig& AddSecurityGroups(SecurityGroup&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<SecurityGroup> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
