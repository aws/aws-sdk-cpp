/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>The configuration information for a virtual private cloud (VPC)
   * destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/VpcDestinationConfiguration">AWS
   * API Reference</a></p>
   */
  class VpcDestinationConfiguration
  {
  public:
    AWS_IOT_API VpcDestinationConfiguration();
    AWS_IOT_API VpcDestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API VpcDestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The subnet IDs of the VPC destination.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The subnet IDs of the VPC destination.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>The subnet IDs of the VPC destination.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>The subnet IDs of the VPC destination.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>The subnet IDs of the VPC destination.</p>
     */
    inline VpcDestinationConfiguration& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The subnet IDs of the VPC destination.</p>
     */
    inline VpcDestinationConfiguration& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The subnet IDs of the VPC destination.</p>
     */
    inline VpcDestinationConfiguration& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The subnet IDs of the VPC destination.</p>
     */
    inline VpcDestinationConfiguration& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The subnet IDs of the VPC destination.</p>
     */
    inline VpcDestinationConfiguration& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>The security groups of the VPC destination.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>The security groups of the VPC destination.</p>
     */
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }

    /**
     * <p>The security groups of the VPC destination.</p>
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p>The security groups of the VPC destination.</p>
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }

    /**
     * <p>The security groups of the VPC destination.</p>
     */
    inline VpcDestinationConfiguration& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>The security groups of the VPC destination.</p>
     */
    inline VpcDestinationConfiguration& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>The security groups of the VPC destination.</p>
     */
    inline VpcDestinationConfiguration& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>The security groups of the VPC destination.</p>
     */
    inline VpcDestinationConfiguration& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>The security groups of the VPC destination.</p>
     */
    inline VpcDestinationConfiguration& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }


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
    inline VpcDestinationConfiguration& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline VpcDestinationConfiguration& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC.</p>
     */
    inline VpcDestinationConfiguration& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The ARN of a role that has permission to create and attach to elastic network
     * interfaces (ENIs).</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of a role that has permission to create and attach to elastic network
     * interfaces (ENIs).</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of a role that has permission to create and attach to elastic network
     * interfaces (ENIs).</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of a role that has permission to create and attach to elastic network
     * interfaces (ENIs).</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of a role that has permission to create and attach to elastic network
     * interfaces (ENIs).</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of a role that has permission to create and attach to elastic network
     * interfaces (ENIs).</p>
     */
    inline VpcDestinationConfiguration& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of a role that has permission to create and attach to elastic network
     * interfaces (ENIs).</p>
     */
    inline VpcDestinationConfiguration& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a role that has permission to create and attach to elastic network
     * interfaces (ENIs).</p>
     */
    inline VpcDestinationConfiguration& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
