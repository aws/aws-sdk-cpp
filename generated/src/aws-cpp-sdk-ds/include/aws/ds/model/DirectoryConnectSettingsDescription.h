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
    AWS_DIRECTORYSERVICE_API DirectoryConnectSettingsDescription();
    AWS_DIRECTORYSERVICE_API DirectoryConnectSettingsDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API DirectoryConnectSettingsDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the VPC that the AD Connector is in.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline DirectoryConnectSettingsDescription& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline DirectoryConnectSettingsDescription& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline DirectoryConnectSettingsDescription& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of subnet identifiers in the VPC that the AD Connector is in.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }
    inline DirectoryConnectSettingsDescription& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline DirectoryConnectSettingsDescription& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline DirectoryConnectSettingsDescription& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    inline DirectoryConnectSettingsDescription& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }
    inline DirectoryConnectSettingsDescription& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user name of the service account in your self-managed directory.</p>
     */
    inline const Aws::String& GetCustomerUserName() const{ return m_customerUserName; }
    inline bool CustomerUserNameHasBeenSet() const { return m_customerUserNameHasBeenSet; }
    inline void SetCustomerUserName(const Aws::String& value) { m_customerUserNameHasBeenSet = true; m_customerUserName = value; }
    inline void SetCustomerUserName(Aws::String&& value) { m_customerUserNameHasBeenSet = true; m_customerUserName = std::move(value); }
    inline void SetCustomerUserName(const char* value) { m_customerUserNameHasBeenSet = true; m_customerUserName.assign(value); }
    inline DirectoryConnectSettingsDescription& WithCustomerUserName(const Aws::String& value) { SetCustomerUserName(value); return *this;}
    inline DirectoryConnectSettingsDescription& WithCustomerUserName(Aws::String&& value) { SetCustomerUserName(std::move(value)); return *this;}
    inline DirectoryConnectSettingsDescription& WithCustomerUserName(const char* value) { SetCustomerUserName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security group identifier for the AD Connector directory.</p>
     */
    inline const Aws::String& GetSecurityGroupId() const{ return m_securityGroupId; }
    inline bool SecurityGroupIdHasBeenSet() const { return m_securityGroupIdHasBeenSet; }
    inline void SetSecurityGroupId(const Aws::String& value) { m_securityGroupIdHasBeenSet = true; m_securityGroupId = value; }
    inline void SetSecurityGroupId(Aws::String&& value) { m_securityGroupIdHasBeenSet = true; m_securityGroupId = std::move(value); }
    inline void SetSecurityGroupId(const char* value) { m_securityGroupIdHasBeenSet = true; m_securityGroupId.assign(value); }
    inline DirectoryConnectSettingsDescription& WithSecurityGroupId(const Aws::String& value) { SetSecurityGroupId(value); return *this;}
    inline DirectoryConnectSettingsDescription& WithSecurityGroupId(Aws::String&& value) { SetSecurityGroupId(std::move(value)); return *this;}
    inline DirectoryConnectSettingsDescription& WithSecurityGroupId(const char* value) { SetSecurityGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the Availability Zones that the directory is in.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }
    inline DirectoryConnectSettingsDescription& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}
    inline DirectoryConnectSettingsDescription& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}
    inline DirectoryConnectSettingsDescription& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    inline DirectoryConnectSettingsDescription& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }
    inline DirectoryConnectSettingsDescription& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP addresses of the AD Connector servers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConnectIps() const{ return m_connectIps; }
    inline bool ConnectIpsHasBeenSet() const { return m_connectIpsHasBeenSet; }
    inline void SetConnectIps(const Aws::Vector<Aws::String>& value) { m_connectIpsHasBeenSet = true; m_connectIps = value; }
    inline void SetConnectIps(Aws::Vector<Aws::String>&& value) { m_connectIpsHasBeenSet = true; m_connectIps = std::move(value); }
    inline DirectoryConnectSettingsDescription& WithConnectIps(const Aws::Vector<Aws::String>& value) { SetConnectIps(value); return *this;}
    inline DirectoryConnectSettingsDescription& WithConnectIps(Aws::Vector<Aws::String>&& value) { SetConnectIps(std::move(value)); return *this;}
    inline DirectoryConnectSettingsDescription& AddConnectIps(const Aws::String& value) { m_connectIpsHasBeenSet = true; m_connectIps.push_back(value); return *this; }
    inline DirectoryConnectSettingsDescription& AddConnectIps(Aws::String&& value) { m_connectIpsHasBeenSet = true; m_connectIps.push_back(std::move(value)); return *this; }
    inline DirectoryConnectSettingsDescription& AddConnectIps(const char* value) { m_connectIpsHasBeenSet = true; m_connectIps.push_back(value); return *this; }
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
