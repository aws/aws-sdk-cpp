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
   * <p>Describes updates to the VPC configuration used by the
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/VpcConfigurationUpdate">AWS
   * API Reference</a></p>
   */
  class VpcConfigurationUpdate
  {
  public:
    AWS_KINESISANALYTICSV2_API VpcConfigurationUpdate();
    AWS_KINESISANALYTICSV2_API VpcConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API VpcConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes an update to the ID of the VPC configuration.</p>
     */
    inline const Aws::String& GetVpcConfigurationId() const{ return m_vpcConfigurationId; }

    /**
     * <p>Describes an update to the ID of the VPC configuration.</p>
     */
    inline bool VpcConfigurationIdHasBeenSet() const { return m_vpcConfigurationIdHasBeenSet; }

    /**
     * <p>Describes an update to the ID of the VPC configuration.</p>
     */
    inline void SetVpcConfigurationId(const Aws::String& value) { m_vpcConfigurationIdHasBeenSet = true; m_vpcConfigurationId = value; }

    /**
     * <p>Describes an update to the ID of the VPC configuration.</p>
     */
    inline void SetVpcConfigurationId(Aws::String&& value) { m_vpcConfigurationIdHasBeenSet = true; m_vpcConfigurationId = std::move(value); }

    /**
     * <p>Describes an update to the ID of the VPC configuration.</p>
     */
    inline void SetVpcConfigurationId(const char* value) { m_vpcConfigurationIdHasBeenSet = true; m_vpcConfigurationId.assign(value); }

    /**
     * <p>Describes an update to the ID of the VPC configuration.</p>
     */
    inline VpcConfigurationUpdate& WithVpcConfigurationId(const Aws::String& value) { SetVpcConfigurationId(value); return *this;}

    /**
     * <p>Describes an update to the ID of the VPC configuration.</p>
     */
    inline VpcConfigurationUpdate& WithVpcConfigurationId(Aws::String&& value) { SetVpcConfigurationId(std::move(value)); return *this;}

    /**
     * <p>Describes an update to the ID of the VPC configuration.</p>
     */
    inline VpcConfigurationUpdate& WithVpcConfigurationId(const char* value) { SetVpcConfigurationId(value); return *this;}


    /**
     * <p>Describes updates to the array of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_Subnet.html">Subnet</a>
     * IDs used by the VPC configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIdUpdates() const{ return m_subnetIdUpdates; }

    /**
     * <p>Describes updates to the array of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_Subnet.html">Subnet</a>
     * IDs used by the VPC configuration.</p>
     */
    inline bool SubnetIdUpdatesHasBeenSet() const { return m_subnetIdUpdatesHasBeenSet; }

    /**
     * <p>Describes updates to the array of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_Subnet.html">Subnet</a>
     * IDs used by the VPC configuration.</p>
     */
    inline void SetSubnetIdUpdates(const Aws::Vector<Aws::String>& value) { m_subnetIdUpdatesHasBeenSet = true; m_subnetIdUpdates = value; }

    /**
     * <p>Describes updates to the array of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_Subnet.html">Subnet</a>
     * IDs used by the VPC configuration.</p>
     */
    inline void SetSubnetIdUpdates(Aws::Vector<Aws::String>&& value) { m_subnetIdUpdatesHasBeenSet = true; m_subnetIdUpdates = std::move(value); }

    /**
     * <p>Describes updates to the array of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_Subnet.html">Subnet</a>
     * IDs used by the VPC configuration.</p>
     */
    inline VpcConfigurationUpdate& WithSubnetIdUpdates(const Aws::Vector<Aws::String>& value) { SetSubnetIdUpdates(value); return *this;}

    /**
     * <p>Describes updates to the array of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_Subnet.html">Subnet</a>
     * IDs used by the VPC configuration.</p>
     */
    inline VpcConfigurationUpdate& WithSubnetIdUpdates(Aws::Vector<Aws::String>&& value) { SetSubnetIdUpdates(std::move(value)); return *this;}

    /**
     * <p>Describes updates to the array of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_Subnet.html">Subnet</a>
     * IDs used by the VPC configuration.</p>
     */
    inline VpcConfigurationUpdate& AddSubnetIdUpdates(const Aws::String& value) { m_subnetIdUpdatesHasBeenSet = true; m_subnetIdUpdates.push_back(value); return *this; }

    /**
     * <p>Describes updates to the array of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_Subnet.html">Subnet</a>
     * IDs used by the VPC configuration.</p>
     */
    inline VpcConfigurationUpdate& AddSubnetIdUpdates(Aws::String&& value) { m_subnetIdUpdatesHasBeenSet = true; m_subnetIdUpdates.push_back(std::move(value)); return *this; }

    /**
     * <p>Describes updates to the array of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_Subnet.html">Subnet</a>
     * IDs used by the VPC configuration.</p>
     */
    inline VpcConfigurationUpdate& AddSubnetIdUpdates(const char* value) { m_subnetIdUpdatesHasBeenSet = true; m_subnetIdUpdates.push_back(value); return *this; }


    /**
     * <p>Describes updates to the array of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SecurityGroup.html">SecurityGroup</a>
     * IDs used by the VPC configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIdUpdates() const{ return m_securityGroupIdUpdates; }

    /**
     * <p>Describes updates to the array of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SecurityGroup.html">SecurityGroup</a>
     * IDs used by the VPC configuration.</p>
     */
    inline bool SecurityGroupIdUpdatesHasBeenSet() const { return m_securityGroupIdUpdatesHasBeenSet; }

    /**
     * <p>Describes updates to the array of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SecurityGroup.html">SecurityGroup</a>
     * IDs used by the VPC configuration.</p>
     */
    inline void SetSecurityGroupIdUpdates(const Aws::Vector<Aws::String>& value) { m_securityGroupIdUpdatesHasBeenSet = true; m_securityGroupIdUpdates = value; }

    /**
     * <p>Describes updates to the array of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SecurityGroup.html">SecurityGroup</a>
     * IDs used by the VPC configuration.</p>
     */
    inline void SetSecurityGroupIdUpdates(Aws::Vector<Aws::String>&& value) { m_securityGroupIdUpdatesHasBeenSet = true; m_securityGroupIdUpdates = std::move(value); }

    /**
     * <p>Describes updates to the array of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SecurityGroup.html">SecurityGroup</a>
     * IDs used by the VPC configuration.</p>
     */
    inline VpcConfigurationUpdate& WithSecurityGroupIdUpdates(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIdUpdates(value); return *this;}

    /**
     * <p>Describes updates to the array of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SecurityGroup.html">SecurityGroup</a>
     * IDs used by the VPC configuration.</p>
     */
    inline VpcConfigurationUpdate& WithSecurityGroupIdUpdates(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIdUpdates(std::move(value)); return *this;}

    /**
     * <p>Describes updates to the array of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SecurityGroup.html">SecurityGroup</a>
     * IDs used by the VPC configuration.</p>
     */
    inline VpcConfigurationUpdate& AddSecurityGroupIdUpdates(const Aws::String& value) { m_securityGroupIdUpdatesHasBeenSet = true; m_securityGroupIdUpdates.push_back(value); return *this; }

    /**
     * <p>Describes updates to the array of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SecurityGroup.html">SecurityGroup</a>
     * IDs used by the VPC configuration.</p>
     */
    inline VpcConfigurationUpdate& AddSecurityGroupIdUpdates(Aws::String&& value) { m_securityGroupIdUpdatesHasBeenSet = true; m_securityGroupIdUpdates.push_back(std::move(value)); return *this; }

    /**
     * <p>Describes updates to the array of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SecurityGroup.html">SecurityGroup</a>
     * IDs used by the VPC configuration.</p>
     */
    inline VpcConfigurationUpdate& AddSecurityGroupIdUpdates(const char* value) { m_securityGroupIdUpdatesHasBeenSet = true; m_securityGroupIdUpdates.push_back(value); return *this; }

  private:

    Aws::String m_vpcConfigurationId;
    bool m_vpcConfigurationIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIdUpdates;
    bool m_subnetIdUpdatesHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIdUpdates;
    bool m_securityGroupIdUpdatesHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
