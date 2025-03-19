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
    AWS_KINESISANALYTICSV2_API VpcConfigurationUpdate() = default;
    AWS_KINESISANALYTICSV2_API VpcConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API VpcConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Describes an update to the ID of the VPC configuration.</p>
     */
    inline const Aws::String& GetVpcConfigurationId() const { return m_vpcConfigurationId; }
    inline bool VpcConfigurationIdHasBeenSet() const { return m_vpcConfigurationIdHasBeenSet; }
    template<typename VpcConfigurationIdT = Aws::String>
    void SetVpcConfigurationId(VpcConfigurationIdT&& value) { m_vpcConfigurationIdHasBeenSet = true; m_vpcConfigurationId = std::forward<VpcConfigurationIdT>(value); }
    template<typename VpcConfigurationIdT = Aws::String>
    VpcConfigurationUpdate& WithVpcConfigurationId(VpcConfigurationIdT&& value) { SetVpcConfigurationId(std::forward<VpcConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes updates to the array of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_Subnet.html">Subnet</a>
     * IDs used by the VPC configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIdUpdates() const { return m_subnetIdUpdates; }
    inline bool SubnetIdUpdatesHasBeenSet() const { return m_subnetIdUpdatesHasBeenSet; }
    template<typename SubnetIdUpdatesT = Aws::Vector<Aws::String>>
    void SetSubnetIdUpdates(SubnetIdUpdatesT&& value) { m_subnetIdUpdatesHasBeenSet = true; m_subnetIdUpdates = std::forward<SubnetIdUpdatesT>(value); }
    template<typename SubnetIdUpdatesT = Aws::Vector<Aws::String>>
    VpcConfigurationUpdate& WithSubnetIdUpdates(SubnetIdUpdatesT&& value) { SetSubnetIdUpdates(std::forward<SubnetIdUpdatesT>(value)); return *this;}
    template<typename SubnetIdUpdatesT = Aws::String>
    VpcConfigurationUpdate& AddSubnetIdUpdates(SubnetIdUpdatesT&& value) { m_subnetIdUpdatesHasBeenSet = true; m_subnetIdUpdates.emplace_back(std::forward<SubnetIdUpdatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes updates to the array of <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SecurityGroup.html">SecurityGroup</a>
     * IDs used by the VPC configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIdUpdates() const { return m_securityGroupIdUpdates; }
    inline bool SecurityGroupIdUpdatesHasBeenSet() const { return m_securityGroupIdUpdatesHasBeenSet; }
    template<typename SecurityGroupIdUpdatesT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIdUpdates(SecurityGroupIdUpdatesT&& value) { m_securityGroupIdUpdatesHasBeenSet = true; m_securityGroupIdUpdates = std::forward<SecurityGroupIdUpdatesT>(value); }
    template<typename SecurityGroupIdUpdatesT = Aws::Vector<Aws::String>>
    VpcConfigurationUpdate& WithSecurityGroupIdUpdates(SecurityGroupIdUpdatesT&& value) { SetSecurityGroupIdUpdates(std::forward<SecurityGroupIdUpdatesT>(value)); return *this;}
    template<typename SecurityGroupIdUpdatesT = Aws::String>
    VpcConfigurationUpdate& AddSecurityGroupIdUpdates(SecurityGroupIdUpdatesT&& value) { m_securityGroupIdUpdatesHasBeenSet = true; m_securityGroupIdUpdates.emplace_back(std::forward<SecurityGroupIdUpdatesT>(value)); return *this; }
    ///@}
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
