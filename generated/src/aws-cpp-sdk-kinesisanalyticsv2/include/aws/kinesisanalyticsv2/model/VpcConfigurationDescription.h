/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>Describes the parameters of a VPC used by the application.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/VpcConfigurationDescription">AWS
   * API Reference</a></p>
   */
  class VpcConfigurationDescription
  {
  public:
    AWS_KINESISANALYTICSV2_API VpcConfigurationDescription();
    AWS_KINESISANALYTICSV2_API VpcConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API VpcConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the VPC configuration.</p>
     */
    inline const Aws::String& GetVpcConfigurationId() const{ return m_vpcConfigurationId; }

    /**
     * <p>The ID of the VPC configuration.</p>
     */
    inline bool VpcConfigurationIdHasBeenSet() const { return m_vpcConfigurationIdHasBeenSet; }

    /**
     * <p>The ID of the VPC configuration.</p>
     */
    inline void SetVpcConfigurationId(const Aws::String& value) { m_vpcConfigurationIdHasBeenSet = true; m_vpcConfigurationId = value; }

    /**
     * <p>The ID of the VPC configuration.</p>
     */
    inline void SetVpcConfigurationId(Aws::String&& value) { m_vpcConfigurationIdHasBeenSet = true; m_vpcConfigurationId = std::move(value); }

    /**
     * <p>The ID of the VPC configuration.</p>
     */
    inline void SetVpcConfigurationId(const char* value) { m_vpcConfigurationIdHasBeenSet = true; m_vpcConfigurationId.assign(value); }

    /**
     * <p>The ID of the VPC configuration.</p>
     */
    inline VpcConfigurationDescription& WithVpcConfigurationId(const Aws::String& value) { SetVpcConfigurationId(value); return *this;}

    /**
     * <p>The ID of the VPC configuration.</p>
     */
    inline VpcConfigurationDescription& WithVpcConfigurationId(Aws::String&& value) { SetVpcConfigurationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC configuration.</p>
     */
    inline VpcConfigurationDescription& WithVpcConfigurationId(const char* value) { SetVpcConfigurationId(value); return *this;}


    /**
     * <p>The ID of the associated VPC.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the associated VPC.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of the associated VPC.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the associated VPC.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the associated VPC.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the associated VPC.</p>
     */
    inline VpcConfigurationDescription& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the associated VPC.</p>
     */
    inline VpcConfigurationDescription& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the associated VPC.</p>
     */
    inline VpcConfigurationDescription& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The array of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_Subnet.html">Subnet</a>
     * IDs used by the VPC configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The array of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_Subnet.html">Subnet</a>
     * IDs used by the VPC configuration.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>The array of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_Subnet.html">Subnet</a>
     * IDs used by the VPC configuration.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>The array of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_Subnet.html">Subnet</a>
     * IDs used by the VPC configuration.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>The array of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_Subnet.html">Subnet</a>
     * IDs used by the VPC configuration.</p>
     */
    inline VpcConfigurationDescription& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The array of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_Subnet.html">Subnet</a>
     * IDs used by the VPC configuration.</p>
     */
    inline VpcConfigurationDescription& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The array of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_Subnet.html">Subnet</a>
     * IDs used by the VPC configuration.</p>
     */
    inline VpcConfigurationDescription& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The array of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_Subnet.html">Subnet</a>
     * IDs used by the VPC configuration.</p>
     */
    inline VpcConfigurationDescription& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The array of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_Subnet.html">Subnet</a>
     * IDs used by the VPC configuration.</p>
     */
    inline VpcConfigurationDescription& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>The array of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SecurityGroup.html">SecurityGroup</a>
     * IDs used by the VPC configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The array of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SecurityGroup.html">SecurityGroup</a>
     * IDs used by the VPC configuration.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The array of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SecurityGroup.html">SecurityGroup</a>
     * IDs used by the VPC configuration.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The array of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SecurityGroup.html">SecurityGroup</a>
     * IDs used by the VPC configuration.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The array of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SecurityGroup.html">SecurityGroup</a>
     * IDs used by the VPC configuration.</p>
     */
    inline VpcConfigurationDescription& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The array of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SecurityGroup.html">SecurityGroup</a>
     * IDs used by the VPC configuration.</p>
     */
    inline VpcConfigurationDescription& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The array of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SecurityGroup.html">SecurityGroup</a>
     * IDs used by the VPC configuration.</p>
     */
    inline VpcConfigurationDescription& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The array of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SecurityGroup.html">SecurityGroup</a>
     * IDs used by the VPC configuration.</p>
     */
    inline VpcConfigurationDescription& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The array of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SecurityGroup.html">SecurityGroup</a>
     * IDs used by the VPC configuration.</p>
     */
    inline VpcConfigurationDescription& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

  private:

    Aws::String m_vpcConfigurationId;
    bool m_vpcConfigurationIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
