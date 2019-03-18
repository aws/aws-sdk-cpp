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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/AssociationStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes a target network associated with a Client VPN
   * endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TargetNetwork">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API TargetNetwork
  {
  public:
    TargetNetwork();
    TargetNetwork(const Aws::Utils::Xml::XmlNode& xmlNode);
    TargetNetwork& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the association.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>The ID of the association.</p>
     */
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }

    /**
     * <p>The ID of the association.</p>
     */
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }

    /**
     * <p>The ID of the association.</p>
     */
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }

    /**
     * <p>The ID of the association.</p>
     */
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }

    /**
     * <p>The ID of the association.</p>
     */
    inline TargetNetwork& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The ID of the association.</p>
     */
    inline TargetNetwork& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the association.</p>
     */
    inline TargetNetwork& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}


    /**
     * <p>The ID of the VPC in which the target network (subnet) is located.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the VPC in which the target network (subnet) is located.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of the VPC in which the target network (subnet) is located.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the VPC in which the target network (subnet) is located.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the VPC in which the target network (subnet) is located.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the VPC in which the target network (subnet) is located.</p>
     */
    inline TargetNetwork& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the VPC in which the target network (subnet) is located.</p>
     */
    inline TargetNetwork& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC in which the target network (subnet) is located.</p>
     */
    inline TargetNetwork& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The ID of the subnet specified as the target network.</p>
     */
    inline const Aws::String& GetTargetNetworkId() const{ return m_targetNetworkId; }

    /**
     * <p>The ID of the subnet specified as the target network.</p>
     */
    inline bool TargetNetworkIdHasBeenSet() const { return m_targetNetworkIdHasBeenSet; }

    /**
     * <p>The ID of the subnet specified as the target network.</p>
     */
    inline void SetTargetNetworkId(const Aws::String& value) { m_targetNetworkIdHasBeenSet = true; m_targetNetworkId = value; }

    /**
     * <p>The ID of the subnet specified as the target network.</p>
     */
    inline void SetTargetNetworkId(Aws::String&& value) { m_targetNetworkIdHasBeenSet = true; m_targetNetworkId = std::move(value); }

    /**
     * <p>The ID of the subnet specified as the target network.</p>
     */
    inline void SetTargetNetworkId(const char* value) { m_targetNetworkIdHasBeenSet = true; m_targetNetworkId.assign(value); }

    /**
     * <p>The ID of the subnet specified as the target network.</p>
     */
    inline TargetNetwork& WithTargetNetworkId(const Aws::String& value) { SetTargetNetworkId(value); return *this;}

    /**
     * <p>The ID of the subnet specified as the target network.</p>
     */
    inline TargetNetwork& WithTargetNetworkId(Aws::String&& value) { SetTargetNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subnet specified as the target network.</p>
     */
    inline TargetNetwork& WithTargetNetworkId(const char* value) { SetTargetNetworkId(value); return *this;}


    /**
     * <p>The ID of the Client VPN endpoint with which the target network is
     * associated.</p>
     */
    inline const Aws::String& GetClientVpnEndpointId() const{ return m_clientVpnEndpointId; }

    /**
     * <p>The ID of the Client VPN endpoint with which the target network is
     * associated.</p>
     */
    inline bool ClientVpnEndpointIdHasBeenSet() const { return m_clientVpnEndpointIdHasBeenSet; }

    /**
     * <p>The ID of the Client VPN endpoint with which the target network is
     * associated.</p>
     */
    inline void SetClientVpnEndpointId(const Aws::String& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = value; }

    /**
     * <p>The ID of the Client VPN endpoint with which the target network is
     * associated.</p>
     */
    inline void SetClientVpnEndpointId(Aws::String&& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = std::move(value); }

    /**
     * <p>The ID of the Client VPN endpoint with which the target network is
     * associated.</p>
     */
    inline void SetClientVpnEndpointId(const char* value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId.assign(value); }

    /**
     * <p>The ID of the Client VPN endpoint with which the target network is
     * associated.</p>
     */
    inline TargetNetwork& WithClientVpnEndpointId(const Aws::String& value) { SetClientVpnEndpointId(value); return *this;}

    /**
     * <p>The ID of the Client VPN endpoint with which the target network is
     * associated.</p>
     */
    inline TargetNetwork& WithClientVpnEndpointId(Aws::String&& value) { SetClientVpnEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Client VPN endpoint with which the target network is
     * associated.</p>
     */
    inline TargetNetwork& WithClientVpnEndpointId(const char* value) { SetClientVpnEndpointId(value); return *this;}


    /**
     * <p>The current state of the target network association.</p>
     */
    inline const AssociationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current state of the target network association.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current state of the target network association.</p>
     */
    inline void SetStatus(const AssociationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current state of the target network association.</p>
     */
    inline void SetStatus(AssociationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current state of the target network association.</p>
     */
    inline TargetNetwork& WithStatus(const AssociationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current state of the target network association.</p>
     */
    inline TargetNetwork& WithStatus(AssociationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The IDs of the security groups applied to the target network association.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>The IDs of the security groups applied to the target network association.</p>
     */
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }

    /**
     * <p>The IDs of the security groups applied to the target network association.</p>
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p>The IDs of the security groups applied to the target network association.</p>
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }

    /**
     * <p>The IDs of the security groups applied to the target network association.</p>
     */
    inline TargetNetwork& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>The IDs of the security groups applied to the target network association.</p>
     */
    inline TargetNetwork& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>The IDs of the security groups applied to the target network association.</p>
     */
    inline TargetNetwork& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>The IDs of the security groups applied to the target network association.</p>
     */
    inline TargetNetwork& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the security groups applied to the target network association.</p>
     */
    inline TargetNetwork& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

  private:

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;

    Aws::String m_targetNetworkId;
    bool m_targetNetworkIdHasBeenSet;

    Aws::String m_clientVpnEndpointId;
    bool m_clientVpnEndpointIdHasBeenSet;

    AssociationStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
