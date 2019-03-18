/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_DIRECTORYSERVICE_API DirectoryConnectSettingsDescription
  {
  public:
    DirectoryConnectSettingsDescription();
    DirectoryConnectSettingsDescription(Aws::Utils::Json::JsonView jsonValue);
    DirectoryConnectSettingsDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the VPC that the AD Connector is in.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The identifier of the VPC that the AD Connector is in.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The identifier of the VPC that the AD Connector is in.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The identifier of the VPC that the AD Connector is in.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The identifier of the VPC that the AD Connector is in.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The identifier of the VPC that the AD Connector is in.</p>
     */
    inline DirectoryConnectSettingsDescription& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The identifier of the VPC that the AD Connector is in.</p>
     */
    inline DirectoryConnectSettingsDescription& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the VPC that the AD Connector is in.</p>
     */
    inline DirectoryConnectSettingsDescription& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>A list of subnet identifiers in the VPC that the AD connector is in.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>A list of subnet identifiers in the VPC that the AD connector is in.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>A list of subnet identifiers in the VPC that the AD connector is in.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>A list of subnet identifiers in the VPC that the AD connector is in.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>A list of subnet identifiers in the VPC that the AD connector is in.</p>
     */
    inline DirectoryConnectSettingsDescription& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>A list of subnet identifiers in the VPC that the AD connector is in.</p>
     */
    inline DirectoryConnectSettingsDescription& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>A list of subnet identifiers in the VPC that the AD connector is in.</p>
     */
    inline DirectoryConnectSettingsDescription& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>A list of subnet identifiers in the VPC that the AD connector is in.</p>
     */
    inline DirectoryConnectSettingsDescription& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of subnet identifiers in the VPC that the AD connector is in.</p>
     */
    inline DirectoryConnectSettingsDescription& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>The user name of the service account in the on-premises directory.</p>
     */
    inline const Aws::String& GetCustomerUserName() const{ return m_customerUserName; }

    /**
     * <p>The user name of the service account in the on-premises directory.</p>
     */
    inline bool CustomerUserNameHasBeenSet() const { return m_customerUserNameHasBeenSet; }

    /**
     * <p>The user name of the service account in the on-premises directory.</p>
     */
    inline void SetCustomerUserName(const Aws::String& value) { m_customerUserNameHasBeenSet = true; m_customerUserName = value; }

    /**
     * <p>The user name of the service account in the on-premises directory.</p>
     */
    inline void SetCustomerUserName(Aws::String&& value) { m_customerUserNameHasBeenSet = true; m_customerUserName = std::move(value); }

    /**
     * <p>The user name of the service account in the on-premises directory.</p>
     */
    inline void SetCustomerUserName(const char* value) { m_customerUserNameHasBeenSet = true; m_customerUserName.assign(value); }

    /**
     * <p>The user name of the service account in the on-premises directory.</p>
     */
    inline DirectoryConnectSettingsDescription& WithCustomerUserName(const Aws::String& value) { SetCustomerUserName(value); return *this;}

    /**
     * <p>The user name of the service account in the on-premises directory.</p>
     */
    inline DirectoryConnectSettingsDescription& WithCustomerUserName(Aws::String&& value) { SetCustomerUserName(std::move(value)); return *this;}

    /**
     * <p>The user name of the service account in the on-premises directory.</p>
     */
    inline DirectoryConnectSettingsDescription& WithCustomerUserName(const char* value) { SetCustomerUserName(value); return *this;}


    /**
     * <p>The security group identifier for the AD Connector directory.</p>
     */
    inline const Aws::String& GetSecurityGroupId() const{ return m_securityGroupId; }

    /**
     * <p>The security group identifier for the AD Connector directory.</p>
     */
    inline bool SecurityGroupIdHasBeenSet() const { return m_securityGroupIdHasBeenSet; }

    /**
     * <p>The security group identifier for the AD Connector directory.</p>
     */
    inline void SetSecurityGroupId(const Aws::String& value) { m_securityGroupIdHasBeenSet = true; m_securityGroupId = value; }

    /**
     * <p>The security group identifier for the AD Connector directory.</p>
     */
    inline void SetSecurityGroupId(Aws::String&& value) { m_securityGroupIdHasBeenSet = true; m_securityGroupId = std::move(value); }

    /**
     * <p>The security group identifier for the AD Connector directory.</p>
     */
    inline void SetSecurityGroupId(const char* value) { m_securityGroupIdHasBeenSet = true; m_securityGroupId.assign(value); }

    /**
     * <p>The security group identifier for the AD Connector directory.</p>
     */
    inline DirectoryConnectSettingsDescription& WithSecurityGroupId(const Aws::String& value) { SetSecurityGroupId(value); return *this;}

    /**
     * <p>The security group identifier for the AD Connector directory.</p>
     */
    inline DirectoryConnectSettingsDescription& WithSecurityGroupId(Aws::String&& value) { SetSecurityGroupId(std::move(value)); return *this;}

    /**
     * <p>The security group identifier for the AD Connector directory.</p>
     */
    inline DirectoryConnectSettingsDescription& WithSecurityGroupId(const char* value) { SetSecurityGroupId(value); return *this;}


    /**
     * <p>A list of the Availability Zones that the directory is in.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>A list of the Availability Zones that the directory is in.</p>
     */
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }

    /**
     * <p>A list of the Availability Zones that the directory is in.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>A list of the Availability Zones that the directory is in.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>A list of the Availability Zones that the directory is in.</p>
     */
    inline DirectoryConnectSettingsDescription& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>A list of the Availability Zones that the directory is in.</p>
     */
    inline DirectoryConnectSettingsDescription& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>A list of the Availability Zones that the directory is in.</p>
     */
    inline DirectoryConnectSettingsDescription& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>A list of the Availability Zones that the directory is in.</p>
     */
    inline DirectoryConnectSettingsDescription& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the Availability Zones that the directory is in.</p>
     */
    inline DirectoryConnectSettingsDescription& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }


    /**
     * <p>The IP addresses of the AD Connector servers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConnectIps() const{ return m_connectIps; }

    /**
     * <p>The IP addresses of the AD Connector servers.</p>
     */
    inline bool ConnectIpsHasBeenSet() const { return m_connectIpsHasBeenSet; }

    /**
     * <p>The IP addresses of the AD Connector servers.</p>
     */
    inline void SetConnectIps(const Aws::Vector<Aws::String>& value) { m_connectIpsHasBeenSet = true; m_connectIps = value; }

    /**
     * <p>The IP addresses of the AD Connector servers.</p>
     */
    inline void SetConnectIps(Aws::Vector<Aws::String>&& value) { m_connectIpsHasBeenSet = true; m_connectIps = std::move(value); }

    /**
     * <p>The IP addresses of the AD Connector servers.</p>
     */
    inline DirectoryConnectSettingsDescription& WithConnectIps(const Aws::Vector<Aws::String>& value) { SetConnectIps(value); return *this;}

    /**
     * <p>The IP addresses of the AD Connector servers.</p>
     */
    inline DirectoryConnectSettingsDescription& WithConnectIps(Aws::Vector<Aws::String>&& value) { SetConnectIps(std::move(value)); return *this;}

    /**
     * <p>The IP addresses of the AD Connector servers.</p>
     */
    inline DirectoryConnectSettingsDescription& AddConnectIps(const Aws::String& value) { m_connectIpsHasBeenSet = true; m_connectIps.push_back(value); return *this; }

    /**
     * <p>The IP addresses of the AD Connector servers.</p>
     */
    inline DirectoryConnectSettingsDescription& AddConnectIps(Aws::String&& value) { m_connectIpsHasBeenSet = true; m_connectIps.push_back(std::move(value)); return *this; }

    /**
     * <p>The IP addresses of the AD Connector servers.</p>
     */
    inline DirectoryConnectSettingsDescription& AddConnectIps(const char* value) { m_connectIpsHasBeenSet = true; m_connectIps.push_back(value); return *this; }

  private:

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet;

    Aws::String m_customerUserName;
    bool m_customerUserNameHasBeenSet;

    Aws::String m_securityGroupId;
    bool m_securityGroupIdHasBeenSet;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet;

    Aws::Vector<Aws::String> m_connectIps;
    bool m_connectIpsHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
