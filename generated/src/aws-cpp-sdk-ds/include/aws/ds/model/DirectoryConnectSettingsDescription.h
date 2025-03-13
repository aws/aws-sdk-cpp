/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Contains information about an AD Connector directory.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/DirectoryConnectSettingsDescription">AWS
   * API Reference</a></p>
   */
  class DirectoryConnectSettingsDescription
  {
  public:
    AWS_DIRECTORYSERVICE_API DirectoryConnectSettingsDescription() = default;
    AWS_DIRECTORYSERVICE_API DirectoryConnectSettingsDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API DirectoryConnectSettingsDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the VPC that the AD Connector is in.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    DirectoryConnectSettingsDescription& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of subnet identifiers in the VPC that the AD Connector is in.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    DirectoryConnectSettingsDescription& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    DirectoryConnectSettingsDescription& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user name of the service account in your self-managed directory.</p>
     */
    inline const Aws::String& GetCustomerUserName() const { return m_customerUserName; }
    inline bool CustomerUserNameHasBeenSet() const { return m_customerUserNameHasBeenSet; }
    template<typename CustomerUserNameT = Aws::String>
    void SetCustomerUserName(CustomerUserNameT&& value) { m_customerUserNameHasBeenSet = true; m_customerUserName = std::forward<CustomerUserNameT>(value); }
    template<typename CustomerUserNameT = Aws::String>
    DirectoryConnectSettingsDescription& WithCustomerUserName(CustomerUserNameT&& value) { SetCustomerUserName(std::forward<CustomerUserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security group identifier for the AD Connector directory.</p>
     */
    inline const Aws::String& GetSecurityGroupId() const { return m_securityGroupId; }
    inline bool SecurityGroupIdHasBeenSet() const { return m_securityGroupIdHasBeenSet; }
    template<typename SecurityGroupIdT = Aws::String>
    void SetSecurityGroupId(SecurityGroupIdT&& value) { m_securityGroupIdHasBeenSet = true; m_securityGroupId = std::forward<SecurityGroupIdT>(value); }
    template<typename SecurityGroupIdT = Aws::String>
    DirectoryConnectSettingsDescription& WithSecurityGroupId(SecurityGroupIdT&& value) { SetSecurityGroupId(std::forward<SecurityGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the Availability Zones that the directory is in.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const { return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    void SetAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::forward<AvailabilityZonesT>(value); }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    DirectoryConnectSettingsDescription& WithAvailabilityZones(AvailabilityZonesT&& value) { SetAvailabilityZones(std::forward<AvailabilityZonesT>(value)); return *this;}
    template<typename AvailabilityZonesT = Aws::String>
    DirectoryConnectSettingsDescription& AddAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP addresses of the AD Connector servers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConnectIps() const { return m_connectIps; }
    inline bool ConnectIpsHasBeenSet() const { return m_connectIpsHasBeenSet; }
    template<typename ConnectIpsT = Aws::Vector<Aws::String>>
    void SetConnectIps(ConnectIpsT&& value) { m_connectIpsHasBeenSet = true; m_connectIps = std::forward<ConnectIpsT>(value); }
    template<typename ConnectIpsT = Aws::Vector<Aws::String>>
    DirectoryConnectSettingsDescription& WithConnectIps(ConnectIpsT&& value) { SetConnectIps(std::forward<ConnectIpsT>(value)); return *this;}
    template<typename ConnectIpsT = Aws::String>
    DirectoryConnectSettingsDescription& AddConnectIps(ConnectIpsT&& value) { m_connectIpsHasBeenSet = true; m_connectIps.emplace_back(std::forward<ConnectIpsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::String m_customerUserName;
    bool m_customerUserNameHasBeenSet = false;

    Aws::String m_securityGroupId;
    bool m_securityGroupIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    Aws::Vector<Aws::String> m_connectIps;
    bool m_connectIpsHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
